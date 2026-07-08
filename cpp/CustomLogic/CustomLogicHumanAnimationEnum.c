// Type: CustomLogic.CustomLogicHumanAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanAnimationEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicHumanAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanAnimationEnum_o* CustomLogic_CustomLogicHumanAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e540a0

CustomLogic_CustomLogicHumanAnimationEnum_o *
CustomLogic_CustomLogicHumanAnimationEnum_Factory__CreateInstance
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
  if (DAT_05703006 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanAnimationEnum);
    DAT_05703006 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanAnimationEnum);
      if (DAT_05702fbb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702fbb = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHumanAnimationEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicHumanAnimationEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicHumanAnimationEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e541c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05703007 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"SpecialMarco0");
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"EmoteWave");
    il2cpp_init_method_metadata(&"IdleTSF");
    il2cpp_init_method_metadata(&"AirRelease");
    il2cpp_init_method_metadata(&"Attack1HookR1");
    il2cpp_init_method_metadata(&"SpecialPetra");
    il2cpp_init_method_metadata(&"SpecialMikasa1");
    il2cpp_init_method_metadata(&"AHSSShootLAir");
    il2cpp_init_method_metadata(&"RunTS");
    il2cpp_init_method_metadata(&"SpecialMarco1");
    il2cpp_init_method_metadata(&"HorseDismount");
    il2cpp_init_method_metadata(&"Attack1HookL1");
    il2cpp_init_method_metadata(&"IdleM");
    il2cpp_init_method_metadata(&"SpecialSasha");
    il2cpp_init_method_metadata(&"AirRise");
    il2cpp_init_method_metadata(&"ChangeBladeAir");
    il2cpp_init_method_metadata(&"SpecialMikasa2");
    il2cpp_init_method_metadata(&"Attack4");
    il2cpp_init_method_metadata(&"AirHookRJust");
    il2cpp_init_method_metadata(&"SpecialArmin");
    il2cpp_init_method_metadata(&"TSShootR");
    il2cpp_init_method_metadata(&"AHSSHookForwardR");
    il2cpp_init_method_metadata(&"HorseRun");
    il2cpp_init_method_metadata(&"IdleTSM");
    il2cpp_init_method_metadata(&"TSShootRAir");
    il2cpp_init_method_metadata(&"TSShootL");
    il2cpp_init_method_metadata(&"TSShootLAir");
    il2cpp_init_method_metadata(&"AHSSShootRAir");
    il2cpp_init_method_metadata(&"EmoteYes");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"Attack1HookR2");
    il2cpp_init_method_metadata(&"Air2Left");
    il2cpp_init_method_metadata(&"AirHookLJust");
    il2cpp_init_method_metadata(&"AirHook");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Dash");
    il2cpp_init_method_metadata(&"Attack2");
    il2cpp_init_method_metadata(&"AHSSShootBothAir");
    il2cpp_init_method_metadata(&"HorseIdle");
    il2cpp_init_method_metadata(&"OnWall");
    il2cpp_init_method_metadata(&"SpecialLevi");
    il2cpp_init_method_metadata(&"EmoteSalute");
    il2cpp_init_method_metadata(&"IdleAHSSF");
    il2cpp_init_method_metadata(&"Air2Backward");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"Grabbed");
    il2cpp_init_method_metadata(&"Air2");
    il2cpp_init_method_metadata(&"SpecialJean");
    il2cpp_init_method_metadata(&"AHSSGunReloadBoth");
    il2cpp_init_method_metadata(&"Attack1");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"Slide");
    il2cpp_init_method_metadata(&"AHSSShootR");
    il2cpp_init_method_metadata(&"ChangeBlade");
    il2cpp_init_method_metadata(&"SpecialShifter");
    il2cpp_init_method_metadata(&"AHSSHookForwardL");
    il2cpp_init_method_metadata(&"Attack1HookL2");
    il2cpp_init_method_metadata(&"IdleF");
    il2cpp_init_method_metadata(&"AirHookR");
    il2cpp_init_method_metadata(&"AHSSShootBoth");
    il2cpp_init_method_metadata(&"IdleAHSSM");
    il2cpp_init_method_metadata(&"AirFall");
    il2cpp_init_method_metadata(&"AHSSHookForwardBoth");
    il2cpp_init_method_metadata(&"WallRun");
    il2cpp_init_method_metadata(&"EmoteNo");
    il2cpp_init_method_metadata(&"AHSSGunReloadBothAir");
    il2cpp_init_method_metadata(&"AHSSShootL");
    il2cpp_init_method_metadata(&"AirHookL");
    il2cpp_init_method_metadata(&"ToRoof");
    il2cpp_init_method_metadata(&"RunBuffed");
    il2cpp_init_method_metadata(&"Air2Right");
    il2cpp_init_method_metadata(&"HorseMount");
    DAT_05703007 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x6c198db2) {
    if (uVar1 < 0x3c73ce13) {
      if (uVar1 < 0xdb32d0a) {
        if (uVar1 < 0x75b8e45) {
          if (uVar1 < 0x45b898c) {
            if (uVar1 == 0x331aacb) {
              bVar2 = System_String__op_Equality(name,"Air2Right",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (DAT_05703039 == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air2Right_g);
                  il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                  il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                  il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                  DAT_05703039 = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                System_Func<object__object>___ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                CustomLogic_CLPropertyBinding<object>___ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
            else if (uVar1 == 0x45b898b) {
              bVar2 = System_String__op_Equality(name,"Attack4",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (DAT_05703042 == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack4_g____ge);
                  il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                  il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                  il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                  DAT_05703042 = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                System_Func<object__object>___ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                CustomLogic_CLPropertyBinding<object>___ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
          }
          else if (uVar1 == 0x520dc57) {
            bVar2 = System_String__op_Equality(name,"TSShootR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_0570302c == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSShootR_g____g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_0570302c = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x75b8e44) {
            bVar2 = System_String__op_Equality(name,"Attack1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703040 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1_g____ge);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_05703040 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 < 0xb20e5ca) {
          if (uVar1 == 0xa5b92fd) {
            bVar2 = System_String__op_Equality(name,"Attack2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703041 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack2_g____ge);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_05703041 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0xb20e5c9) {
            bVar2 = System_String__op_Equality(name,"TSShootL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_0570302d == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSShootL_g____g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_0570302d = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0xc43456b) {
          bVar2 = System_String__op_Equality(name,"RunTS",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703014 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunTS_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703014 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xcb32b76) {
          bVar2 = System_String__op_Equality(name,"SpecialMarco0",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703044 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialMarco0_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703044 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xdb32d09) {
          bVar2 = System_String__op_Equality(name,"SpecialMarco1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703045 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialMarco1_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703045 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x1ddf2a12) {
        if (uVar1 < 0x11ff6d0c) {
          if (uVar1 == 0xe1ef32d) {
            bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703012 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_05703012 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x11ff6d0b) {
            bVar2 = System_String__op_Equality(name,"AHSSShootRAir",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703027 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootRAir_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_05703027 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x18ea5324) {
          bVar2 = System_String__op_Equality(name,"AirHookL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703032 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHookL_g____g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703032 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1ddf2a11) {
          bVar2 = System_String__op_Equality(name,"AHSSShootR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703024 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootR_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703024 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x27df39d0) {
        if (uVar1 == 0x1eea5c96) {
          bVar2 = System_String__op_Equality(name,"AirHookR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703033 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHookR_g____g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703033 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x27df39cf) {
          bVar2 = System_String__op_Equality(name,"AHSSShootL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703025 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootL_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703025 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x2ea8c1d5) {
        bVar2 = System_String__op_Equality(name,"SpecialArmin",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703043 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialArmin_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703043 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x324d8372) {
        bVar2 = System_String__op_Equality(name,"EmoteWave",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703050 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteWave_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703050 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x3c73ce12) {
        bVar2 = System_String__op_Equality(name,"AHSSShootBothAir",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703029 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootBothAi);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703029 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x502d6444) {
      if (uVar1 < 0x43ea2092) {
        if (uVar1 < 0x40ea1bd9) {
          if (uVar1 == 0x3d57045f) {
            bVar2 = System_String__op_Equality(name,"Air2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703038 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air2_g____gette);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_05703038 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x40ea1bd8) {
            bVar2 = System_String__op_Equality(name,"SpecialMikasa2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703048 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialMikasa2);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_05703048 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x42bf6b8e) {
          bVar2 = System_String__op_Equality(name,"AHSSGunReloadBothAir",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570302b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunReloadBo);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570302b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x43ea2091) {
          bVar2 = System_String__op_Equality(name,"SpecialMikasa1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703047 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialMikasa1);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703047 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x48d20264) {
        if (uVar1 == 0x47ae9c66) {
          bVar2 = System_String__op_Equality(name,"EmoteYes",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570304f == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteYes_g____g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570304f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x48d20263) {
          bVar2 = System_String__op_Equality(name,"ChangeBladeAir",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703020 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChangeBladeAir);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703020 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x4928501c) {
        bVar2 = System_String__op_Equality(name,"AirHookRJust",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703031 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHookRJust_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703031 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x4a4b98a8) {
        bVar2 = System_String__op_Equality(name,"EmoteNo",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570304e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteNo_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570304e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x502d6443) {
        bVar2 = System_String__op_Equality(name,"TSShootLAir",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570302f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSShootLAir_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570302f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x5a8567ff) {
      if (uVar1 < 0x5a18e72b) {
        if (uVar1 == 0x569fee3e) {
          bVar2 = System_String__op_Equality(name,"SpecialSasha",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703046 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialSasha_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703046 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x5a18e72a) {
          bVar2 = System_String__op_Equality(name,"ToRoof",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570301c == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ToRoof_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570301c = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x5a234b86) {
        bVar2 = System_String__op_Equality(name,"Grabbed",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703019 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grabbed_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703019 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5a8567fe) {
        bVar2 = System_String__op_Equality(name,"RunBuffed",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703015 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunBuffed_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703015 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x6153e693) {
      if (uVar1 == 0x5e0c8dea) {
        bVar2 = System_String__op_Equality(name,"AHSSGunReloadBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570302a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunReloadBo);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570302a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x6153e692) {
        bVar2 = System_String__op_Equality(name,"AirRise",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703037 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirRise_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703037 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x68597615) {
      bVar2 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570301a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dash_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_0570301a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x6b8be0a4) {
      bVar2 = System_String__op_Equality(name,"Attack1HookL1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570303c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1HookL1_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_0570303c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x6c198db1) {
      bVar2 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570301b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Refill_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_0570301b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xade67049) {
    if (uVar1 < 0x96ddf09e) {
      if (uVar1 < 0x8149ffdb) {
        if (uVar1 < 0x71e5e681) {
          if (uVar1 == 0x6e8be55d) {
            bVar2 = System_String__op_Equality(name,"Attack1HookL2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_0570303d == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1HookL2_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_0570303d = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x71e5e680) {
            bVar2 = System_String__op_Equality(name,"AirHook",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05703034 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHook_g____ge);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
                DAT_05703034 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x8149ffda) {
          bVar2 = System_String__op_Equality(name,"SpecialJean",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570304b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialJean_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570304b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x76a54822) {
          bVar2 = System_String__op_Equality(name,"Air2Backward",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570303b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air2Backward_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570303b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x89394d93) {
        if (uVar1 == 0x82a65f9f) {
          bVar2 = System_String__op_Equality(name,"HorseRun",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570300b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseRun_g____g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570300b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x89394d92) {
          bVar2 = System_String__op_Equality(name,"SpecialLevi",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703049 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialLevi_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703049 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x8bdddf4c) {
        bVar2 = System_String__op_Equality(name,"IdleTSF",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703010 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleTSF_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703010 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8d57e66a) {
        bVar2 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703013 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703013 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x96ddf09d) {
        bVar2 = System_String__op_Equality(name,"IdleTSM",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703011 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleTSM_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703011 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0xa7c39be9) {
      if (uVar1 < 0x9dce8faa) {
        if (uVar1 == 0x9be653f2) {
          bVar2 = System_String__op_Equality(name,"AHSSHookForwardL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703022 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSHookForward);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_05703022 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x9dce8fa9) {
          bVar2 = System_String__op_Equality(name,"ChangeBlade",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570301f == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChangeBlade_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570301f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x9fc3b6af) {
        bVar2 = System_String__op_Equality(name,"IdleF",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570300c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleF_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570300c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xa7c39be8) {
        bVar2 = System_String__op_Equality(name,"SpecialPetra",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570304a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialPetra_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570304a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0xa8c3c4db) {
      if (uVar1 == 0xa80c6d01) {
        bVar2 = System_String__op_Equality(name,"AHSSHookForwardBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703021 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSHookForward);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703021 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xa8c3c4da) {
        bVar2 = System_String__op_Equality(name,"IdleM",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570300d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleM_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570300d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xa97fed56) {
      bVar2 = System_String__op_Equality(name,"AirFall",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703036 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirFall_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_05703036 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa9da7dea) {
      bVar2 = System_String__op_Equality(name,"AirHookLJust",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703030 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHookLJust_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_05703030 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xade67048) {
      bVar2 = System_String__op_Equality(name,"AHSSHookForwardR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703023 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSHookForward);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_05703023 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xd79107d7) {
    if (uVar1 < 0xc35fd7d4) {
      if (uVar1 < 0xbe4185ab) {
        if (uVar1 == 0xb541777f) {
          bVar2 = System_String__op_Equality(name,"IdleAHSSM",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570300e == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleAHSSM_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570300e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xbe4185aa) {
          bVar2 = System_String__op_Equality(name,"IdleAHSSF",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_0570300f == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleAHSSF_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
              DAT_0570300f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0xc0f4f364) {
        bVar2 = System_String__op_Equality(name,"OnWall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570301e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OnWall_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570301e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc35fd7d3) {
        bVar2 = System_String__op_Equality(name,"EmoteSalute",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570304d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteSalute_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570304d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0xc52547e8) {
      if (uVar1 == 0xc3e1ce03) {
        bVar2 = System_String__op_Equality(name,"SpecialShifter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570304c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialShifter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570304c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc52547e7) {
        bVar2 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703008 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseMount_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703008 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xce6417cc) {
      bVar2 = System_String__op_Equality(name,"AirRelease",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703035 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirRelease_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_05703035 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xd6910643) {
      bVar2 = System_String__op_Equality(name,"Attack1HookR2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570303f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1HookR2_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_0570303f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xd79107d6) {
      bVar2 = System_String__op_Equality(name,"Attack1HookR1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570303e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1HookR1_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_0570303e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xec4867bb) {
    if (uVar1 < 0xe54a3917) {
      if (uVar1 == 0xdaf9a716) {
        bVar2 = System_String__op_Equality(name,"AHSSShootBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703026 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootBoth_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_05703026 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xe54a3916) {
        bVar2 = System_String__op_Equality(name,"Air2Left",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570303a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air2Left_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
            DAT_0570303a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xe6146cb1) {
      bVar2 = System_String__op_Equality(name,"AHSSShootLAir",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703028 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootLAir_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_05703028 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe9e243fb) {
      bVar2 = System_String__op_Equality(name,"HorseDismount",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703009 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseDismount_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_05703009 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xec4867ba) {
      bVar2 = System_String__op_Equality(name,"WallRun",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570301d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallRun_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_0570301d = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xf2adf85a) {
    if (uVar1 == 0xee1682bc) {
      bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703017 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_05703017 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xf2adf859) {
      bVar2 = System_String__op_Equality(name,"TSShootRAir",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570302e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSShootRAir_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
          DAT_0570302e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xf526d670) {
    bVar2 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703016 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dodge_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        DAT_05703016 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xfc5e3070) {
    bVar2 = System_String__op_Equality(name,"HorseIdle",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570300a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseIdle_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        DAT_0570300a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xffc7c086) {
    bVar2 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703018 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Slide_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
        DAT_05703018 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicHumanAnimationEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount (const MethodInfo* method);
// 0x3e55c80

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703008 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseMount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703008 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseDismount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount (const MethodInfo* method);
// 0x3e55d20

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703009 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseDismount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703009 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle (const MethodInfo* method);
// 0x3e55dc0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570300a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseIdle_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570300a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun (const MethodInfo* method);
// 0x3e55e60

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570300b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseRun_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570300b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF (const MethodInfo* method);
// 0x3e55f00

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570300c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleF_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570300c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM (const MethodInfo* method);
// 0x3e55fa0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570300d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleM_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570300d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM (const MethodInfo* method);
// 0x3e56040

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570300e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleAHSSM_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570300e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF (const MethodInfo* method);
// 0x3e560e0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570300f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleAHSSF_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570300f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF (const MethodInfo* method);
// 0x3e56180

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703010 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleTSF_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703010 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM (const MethodInfo* method);
// 0x3e56220

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703011 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IdleTSM_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703011 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e562c0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703012 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703012 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x3e56360

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703013 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703013 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunTS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS (const MethodInfo* method);
// 0x3e56400

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703014 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunTS_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703014 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunBuffed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed (const MethodInfo* method);
// 0x3e564a0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703015 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunBuffed_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703015 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x3e56540

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703016 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dodge_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703016 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x3e565e0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703017 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703017 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x3e56680

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703018 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Slide_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703018 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Grabbed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed (const MethodInfo* method);
// 0x3e56720

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703019 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grabbed_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703019 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash (const MethodInfo* method);
// 0x3e567c0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570301a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dash_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570301a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x3e56860

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570301b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Refill_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570301b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ToRoof
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof (const MethodInfo* method);
// 0x3e56900

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570301c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ToRoof_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570301c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__WallRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun (const MethodInfo* method);
// 0x3e569a0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570301d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallRun_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570301d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__OnWall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall (const MethodInfo* method);
// 0x3e56a40

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570301e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OnWall_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570301e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade (const MethodInfo* method);
// 0x3e56ae0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570301f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChangeBlade_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570301f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBladeAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir (const MethodInfo* method);
// 0x3e56b80

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703020 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ChangeBladeAir);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703020 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth (const MethodInfo* method);
// 0x3e56c20

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703021 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSHookForward);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703021 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL (const MethodInfo* method);
// 0x3e56cc0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703022 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSHookForward);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703022 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR (const MethodInfo* method);
// 0x3e56d60

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703023 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSHookForward);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703023 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR (const MethodInfo* method);
// 0x3e56e00

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703024 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootR_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703024 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL (const MethodInfo* method);
// 0x3e56ea0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703025 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootL_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703025 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth (const MethodInfo* method);
// 0x3e56f40

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703026 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootBoth_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703026 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootRAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir (const MethodInfo* method);
// 0x3e56fe0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703027 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootRAir_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703027 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootLAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir (const MethodInfo* method);
// 0x3e57080

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703028 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootLAir_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703028 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBothAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir (const MethodInfo* method);
// 0x3e57120

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703029 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSShootBothAi);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703029 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth (const MethodInfo* method);
// 0x3e571c0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570302a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunReloadBo);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570302a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBothAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir (const MethodInfo* method);
// 0x3e57260

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570302b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunReloadBo);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570302b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR (const MethodInfo* method);
// 0x3e57300

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570302c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSShootR_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570302c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL (const MethodInfo* method);
// 0x3e573a0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570302d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSShootL_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570302d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootRAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir (const MethodInfo* method);
// 0x3e57440

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570302e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSShootRAir_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570302e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootLAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir (const MethodInfo* method);
// 0x3e574e0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570302f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSShootLAir_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570302f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookLJust
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust (const MethodInfo* method);
// 0x3e57580

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703030 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHookLJust_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703030 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookRJust
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust (const MethodInfo* method);
// 0x3e57620

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703031 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHookRJust_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703031 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL (const MethodInfo* method);
// 0x3e576c0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703032 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHookL_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703032 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR (const MethodInfo* method);
// 0x3e57760

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703033 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHookR_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703033 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHook
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook (const MethodInfo* method);
// 0x3e57800

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703034 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirHook_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703034 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRelease
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease (const MethodInfo* method);
// 0x3e578a0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703035 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirRelease_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703035 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall (const MethodInfo* method);
// 0x3e57940

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703036 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirFall_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703036 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRise
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise (const MethodInfo* method);
// 0x3e579e0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703037 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AirRise_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703037 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2 (const MethodInfo* method);
// 0x3e57a80

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703038 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air2_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703038 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right (const MethodInfo* method);
// 0x3e57b20

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703039 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air2Right_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703039 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left (const MethodInfo* method);
// 0x3e57bc0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570303a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air2Left_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570303a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Backward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward (const MethodInfo* method);
// 0x3e57c60

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570303b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air2Backward_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570303b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1 (const MethodInfo* method);
// 0x3e57d00

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570303c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1HookL1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570303c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2 (const MethodInfo* method);
// 0x3e57da0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570303d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1HookL2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570303d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1 (const MethodInfo* method);
// 0x3e57e40

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570303e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1HookR1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570303e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2 (const MethodInfo* method);
// 0x3e57ee0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570303f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1HookR2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570303f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1 (const MethodInfo* method);
// 0x3e57f80

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703040 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703040 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2 (const MethodInfo* method);
// 0x3e58020

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703041 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack2_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703041 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4 (const MethodInfo* method);
// 0x3e580c0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703042 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Attack4_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703042 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialArmin
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin (const MethodInfo* method);
// 0x3e58160

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703043 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialArmin_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703043 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco0
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0 (const MethodInfo* method);
// 0x3e58200

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703044 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialMarco0_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703044 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1 (const MethodInfo* method);
// 0x3e582a0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703045 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialMarco1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703045 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialSasha
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha (const MethodInfo* method);
// 0x3e58340

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703046 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialSasha_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703046 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1 (const MethodInfo* method);
// 0x3e583e0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703047 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialMikasa1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703047 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2 (const MethodInfo* method);
// 0x3e58480

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703048 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialMikasa2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703048 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialLevi
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi (const MethodInfo* method);
// 0x3e58520

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703049 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialLevi_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703049 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialPetra
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra (const MethodInfo* method);
// 0x3e585c0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570304a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialPetra_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570304a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialJean
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean (const MethodInfo* method);
// 0x3e58660

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570304b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialJean_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570304b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter (const MethodInfo* method);
// 0x3e58700

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570304c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialShifter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570304c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute (const MethodInfo* method);
// 0x3e587a0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570304d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteSalute_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570304d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo (const MethodInfo* method);
// 0x3e58840

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570304e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteNo_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570304e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteYes
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes (const MethodInfo* method);
// 0x3e588e0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_0570304f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteYes_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_0570304f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave (const MethodInfo* method);
// 0x3e58980

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (DAT_05703050 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmoteWave_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
    DAT_05703050 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e58a20

void CustomLogic_CustomLogicHumanAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703051 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"SpecialMarco0");
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"EmoteWave");
    il2cpp_init_method_metadata(&"IdleTSF");
    il2cpp_init_method_metadata(&"AirRelease");
    il2cpp_init_method_metadata(&"Attack1HookR1");
    il2cpp_init_method_metadata(&"SpecialPetra");
    il2cpp_init_method_metadata(&"SpecialMikasa1");
    il2cpp_init_method_metadata(&"AHSSShootLAir");
    il2cpp_init_method_metadata(&"RunTS");
    il2cpp_init_method_metadata(&"SpecialMarco1");
    il2cpp_init_method_metadata(&"HorseDismount");
    il2cpp_init_method_metadata(&"Attack1HookL1");
    il2cpp_init_method_metadata(&"IdleM");
    il2cpp_init_method_metadata(&"SpecialSasha");
    il2cpp_init_method_metadata(&"AirRise");
    il2cpp_init_method_metadata(&"ChangeBladeAir");
    il2cpp_init_method_metadata(&"SpecialMikasa2");
    il2cpp_init_method_metadata(&"Attack4");
    il2cpp_init_method_metadata(&"AirHookRJust");
    il2cpp_init_method_metadata(&"SpecialArmin");
    il2cpp_init_method_metadata(&"TSShootR");
    il2cpp_init_method_metadata(&"AHSSHookForwardR");
    il2cpp_init_method_metadata(&"HorseRun");
    il2cpp_init_method_metadata(&"IdleTSM");
    il2cpp_init_method_metadata(&"TSShootRAir");
    il2cpp_init_method_metadata(&"TSShootL");
    il2cpp_init_method_metadata(&"TSShootLAir");
    il2cpp_init_method_metadata(&"AHSSShootRAir");
    il2cpp_init_method_metadata(&"EmoteYes");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"Attack1HookR2");
    il2cpp_init_method_metadata(&"Air2Left");
    il2cpp_init_method_metadata(&"AirHookLJust");
    il2cpp_init_method_metadata(&"AirHook");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Dash");
    il2cpp_init_method_metadata(&"Attack2");
    il2cpp_init_method_metadata(&"AHSSShootBothAir");
    il2cpp_init_method_metadata(&"HorseIdle");
    il2cpp_init_method_metadata(&"OnWall");
    il2cpp_init_method_metadata(&"SpecialLevi");
    il2cpp_init_method_metadata(&"EmoteSalute");
    il2cpp_init_method_metadata(&"IdleAHSSF");
    il2cpp_init_method_metadata(&"Air2Backward");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"Grabbed");
    il2cpp_init_method_metadata(&"Air2");
    il2cpp_init_method_metadata(&"SpecialJean");
    il2cpp_init_method_metadata(&"AHSSGunReloadBoth");
    il2cpp_init_method_metadata(&"Attack1");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"Slide");
    il2cpp_init_method_metadata(&"AHSSShootR");
    il2cpp_init_method_metadata(&"ChangeBlade");
    il2cpp_init_method_metadata(&"SpecialShifter");
    il2cpp_init_method_metadata(&"AHSSHookForwardL");
    il2cpp_init_method_metadata(&"Attack1HookL2");
    il2cpp_init_method_metadata(&"IdleF");
    il2cpp_init_method_metadata(&"AirHookR");
    il2cpp_init_method_metadata(&"AHSSShootBoth");
    il2cpp_init_method_metadata(&"IdleAHSSM");
    il2cpp_init_method_metadata(&"AirFall");
    il2cpp_init_method_metadata(&"AHSSHookForwardBoth");
    il2cpp_init_method_metadata(&"WallRun");
    il2cpp_init_method_metadata(&"EmoteNo");
    il2cpp_init_method_metadata(&"AHSSGunReloadBothAir");
    il2cpp_init_method_metadata(&"AHSSShootL");
    il2cpp_init_method_metadata(&"AirHookL");
    il2cpp_init_method_metadata(&"ToRoof");
    il2cpp_init_method_metadata(&"RunBuffed");
    il2cpp_init_method_metadata(&"Air2Right");
    il2cpp_init_method_metadata(&"HorseMount");
    DAT_05703051 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseMount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseDismount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseIdle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseRun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IdleF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IdleM",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IdleAHSSM",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IdleAHSSF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IdleTSF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IdleTSM",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RunTS",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RunBuffed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Slide",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grabbed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Refill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToRoof",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WallRun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OnWall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ChangeBlade",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ChangeBladeAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSHookForwardBoth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSHookForwardL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSHookForwardR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSShootR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSShootL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSShootBoth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSShootRAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSShootLAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSShootBothAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSGunReloadBoth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSGunReloadBothAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TSShootR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TSShootL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TSShootRAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TSShootLAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirHookLJust",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirHookRJust",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirHookL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirHookR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirHook",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirRelease",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AirRise",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Air2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Air2Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Air2Left",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Air2Backward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack1HookL1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack1HookL2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack1HookR1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack1HookR2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialArmin",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialMarco0",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialMarco1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialSasha",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialMikasa1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialMikasa2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialLevi",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialPetra",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialJean",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialShifter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteSalute",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteNo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteYes",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmoteWave",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_2_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59440

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__HorseMount>g____getter_2_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703135 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703135 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanAnimations + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanAnimations + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseDismount>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseDismount_g____getter_3_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e594b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__HorseDismount>g____getter_3_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703136 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703136 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseIdle>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseIdle_g____getter_4_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59520

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__HorseIdle>g____getter_4_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703137 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703137 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseRun>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseRun_g____getter_5_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59590

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__HorseRun>g____getter_5_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703138 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703138 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleF>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleF_g____getter_6_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59600

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__IdleF>g____getter_6_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703139 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703139 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleM>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleM_g____getter_7_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59670

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__IdleM>g____getter_7_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570313a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570313a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSM>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSM_g____getter_8_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e596e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__IdleAHSSM>g____getter_8_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570313b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570313b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSF>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSF_g____getter_9_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59750

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__IdleAHSSF>g____getter_9_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570313c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570313c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSF>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSF_g____getter_10_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e597c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__IdleTSF>g____getter_10_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570313d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570313d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSM>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSM_g____getter_11_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59830

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__IdleTSM>g____getter_11_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570313e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570313e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_12_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e598a0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_12_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570313f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570313f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_13_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59910

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Run>g____getter_13_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703140 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703140 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunTS>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunTS_g____getter_14_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59980

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__RunTS>g____getter_14_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703141 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703141 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunBuffed>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunBuffed_g____getter_15_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e599f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__RunBuffed>g____getter_15_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703142 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703142 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59a60

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Dodge>g____getter_16_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703143 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703143 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_17_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59ad0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Land>g____getter_17_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703144 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703144 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_18_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59b40

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Slide>g____getter_18_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703145 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703145 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Grabbed>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Grabbed_g____getter_19_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59bb0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Grabbed>g____getter_19_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703146 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703146 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_20_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59c20

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Dash>g____getter_20_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703147 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703147 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_21_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59c90

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Refill>g____getter_21_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703148 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703148 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ToRoof>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ToRoof_g____getter_22_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59d00

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__ToRoof>g____getter_22_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703149 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703149 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__WallRun>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__WallRun_g____getter_23_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59d70

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__WallRun>g____getter_23_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570314a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570314a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__OnWall>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__OnWall_g____getter_24_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59de0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__OnWall>g____getter_24_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570314b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570314b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBlade>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBlade_g____getter_25_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59e50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__ChangeBlade>g____getter_25_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570314c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570314c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBladeAir>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBladeAir_g____getter_26_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59ec0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__ChangeBladeAir>g____getter_26_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570314d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570314d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardBoth>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardBoth_g____getter_27_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59f30

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSHookForwardBoth>g____getter_27_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570314e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570314e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 200);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardL>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardL_g____getter_28_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e59fa0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSHookForwardL>g____getter_28_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570314f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570314f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardR>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardR_g____getter_29_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a010

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSHookForwardR>g____getter_29_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703150 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703150 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootR>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootR_g____getter_30_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a080

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSShootR>g____getter_30_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703151 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703151 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootL>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootL_g____getter_31_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a0f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSShootL>g____getter_31_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703152 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703152 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBoth>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBoth_g____getter_32_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a160

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSShootBoth>g____getter_32_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703153 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703153 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootRAir>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootRAir_g____getter_33_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a1d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSShootRAir>g____getter_33_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703154 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703154 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootLAir>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootLAir_g____getter_34_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a240

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSShootLAir>g____getter_34_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703155 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703155 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x100);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBothAir>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBothAir_g____getter_35_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a2b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSShootBothAir>g____getter_35_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703156 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703156 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x108);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBoth>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBoth_g____getter_36_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a320

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSGunReloadBoth>g____getter_36_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703157 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703157 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x110);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBothAir>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBothAir_g____getter_37_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a390

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AHSSGunReloadBothAir>g____getter_37_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703158 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703158 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x118);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootR>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootR_g____getter_38_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a400

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__TSShootR>g____getter_38_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703159 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703159 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x120);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootL>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootL_g____getter_39_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a470

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__TSShootL>g____getter_39_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570315a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570315a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x128);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootRAir>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootRAir_g____getter_40_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a4e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__TSShootRAir>g____getter_40_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570315b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570315b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x130);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootLAir>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootLAir_g____getter_41_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a550

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__TSShootLAir>g____getter_41_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570315c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570315c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookLJust>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookLJust_g____getter_42_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a5c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AirHookLJust>g____getter_42_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570315d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570315d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x140);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookRJust>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookRJust_g____getter_43_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a630

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AirHookRJust>g____getter_43_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570315e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570315e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x148);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookL>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookL_g____getter_44_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a6a0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AirHookL>g____getter_44_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570315f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570315f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x150);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookR>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookR_g____getter_45_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a710

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AirHookR>g____getter_45_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703160 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703160 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x158);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x158);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHook>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHook_g____getter_46_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a780

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AirHook>g____getter_46_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703161 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703161 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x160);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x160);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRelease>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRelease_g____getter_47_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a7f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AirRelease>g____getter_47_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703162 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703162 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x168);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x168);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirFall>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirFall_g____getter_48_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a860

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AirFall>g____getter_48_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703163 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703163 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x170);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x170);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRise>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRise_g____getter_49_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a8d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__AirRise>g____getter_49_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703164 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703164 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x178);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x178);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2_g____getter_50_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a940

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Air2>g____getter_50_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703165 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703165 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x180);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x180);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Right>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Right_g____getter_51_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5a9b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Air2Right>g____getter_51_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703166 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703166 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x188);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x188);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Left>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Left_g____getter_52_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5aa20

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Air2Left>g____getter_52_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703167 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703167 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 400);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 400);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Backward>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Backward_g____getter_53_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5aa90

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Air2Backward>g____getter_53_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703168 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703168 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x198);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x198);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL1>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL1_g____getter_54_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5ab00

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Attack1HookL1>g____getter_54_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703169 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703169 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL2>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL2_g____getter_55_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5ab70

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Attack1HookL2>g____getter_55_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570316a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570316a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR1>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR1_g____getter_56_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5abe0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Attack1HookR1>g____getter_56_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570316b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570316b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR2>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR2_g____getter_57_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5ac50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Attack1HookR2>g____getter_57_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570316c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570316c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1_g____getter_58_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5acc0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Attack1>g____getter_58_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570316d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570316d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack2>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack2_g____getter_59_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5ad30

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Attack2>g____getter_59_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570316e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570316e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack4>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack4_g____getter_60_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5ada0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__Attack4>g____getter_60_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570316f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570316f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialArmin>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialArmin_g____getter_61_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5ae10

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialArmin>g____getter_61_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703170 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703170 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco0>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco0_g____getter_62_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5ae80

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialMarco0>g____getter_62_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703171 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703171 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco1>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco1_g____getter_63_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5aef0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialMarco1>g____getter_63_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703172 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703172 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialSasha>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialSasha_g____getter_64_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5af60

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialSasha>g____getter_64_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703173 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703173 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa1>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa1_g____getter_65_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5afd0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialMikasa1>g____getter_65_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703174 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703174 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa2>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa2_g____getter_66_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b040

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialMikasa2>g____getter_66_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703175 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703175 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x200);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x200);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialLevi>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialLevi_g____getter_67_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b0b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialLevi>g____getter_67_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703176 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703176 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialPetra>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialPetra_g____getter_68_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b120

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialPetra>g____getter_68_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703177 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703177 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialJean>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialJean_g____getter_69_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b190

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialJean>g____getter_69_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703178 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703178 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialShifter>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialShifter_g____getter_70_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b200

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__SpecialShifter>g____getter_70_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703179 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703179 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_71_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b270

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteSalute>g____getter_71_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570317a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570317a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNo>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNo_g____getter_72_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b2e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteNo>g____getter_72_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570317b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570317b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x230);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x230);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteYes>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteYes_g____getter_73_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b350

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteYes>g____getter_73_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570317c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570317c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x238);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x238);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_74_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e5b3c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__<__CreatePropertyBinding__EmoteWave>g____getter_74_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570317d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570317d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanAnimationEnum___ctor (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e51fe0

void CustomLogic_CustomLogicHumanAnimationEnum___ctor
               (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fbb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702fbb = '\x01';
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


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseMount
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseMount (const MethodInfo* method);
// 0x3e52050

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseMount(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fbc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fbc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HumanAnimations + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HumanAnimations + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseDismount
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseDismount (const MethodInfo* method);
// 0x3e520c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseDismount(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fbd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fbd = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseIdle (const MethodInfo* method);
// 0x3e52130

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseIdle(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fbe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fbe = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseRun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseRun (const MethodInfo* method);
// 0x3e521a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseRun(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fbf = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleF (const MethodInfo* method);
// 0x3e52210

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleF(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleM (const MethodInfo* method);
// 0x3e52280

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleM(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSM (const MethodInfo* method);
// 0x3e522f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSM(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSF (const MethodInfo* method);
// 0x3e52360

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSF(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSF (const MethodInfo* method);
// 0x3e523d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSF(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSM (const MethodInfo* method);
// 0x3e52440

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSM(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Jump (const MethodInfo* method);
// 0x3e524b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Run (const MethodInfo* method);
// 0x3e52520

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Run(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_RunTS
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_RunTS (const MethodInfo* method);
// 0x3e52590

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_RunTS(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_RunBuffed
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_RunBuffed (const MethodInfo* method);
// 0x3e52600

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_RunBuffed(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fc9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fc9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Dodge (const MethodInfo* method);
// 0x3e52670

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Dodge(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fca = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Land (const MethodInfo* method);
// 0x3e526e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Land(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fcb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fcb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Slide (const MethodInfo* method);
// 0x3e52750

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Slide(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fcc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fcc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Grabbed
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Grabbed (const MethodInfo* method);
// 0x3e527c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Grabbed(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fcd = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Dash
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Dash (const MethodInfo* method);
// 0x3e52830

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Dash(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fce = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Refill (const MethodInfo* method);
// 0x3e528a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Refill(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fcf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fcf = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ToRoof
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ToRoof (const MethodInfo* method);
// 0x3e52910

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ToRoof(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_WallRun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_WallRun (const MethodInfo* method);
// 0x3e52980

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_WallRun(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_OnWall
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_OnWall (const MethodInfo* method);
// 0x3e529f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_OnWall(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBlade
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBlade (const MethodInfo* method);
// 0x3e52a60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBlade(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBladeAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBladeAir (const MethodInfo* method);
// 0x3e52ad0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBladeAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardBoth (const MethodInfo* method);
// 0x3e52b40

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardBoth(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 200);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardL (const MethodInfo* method);
// 0x3e52bb0

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardL(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardR (const MethodInfo* method);
// 0x3e52c20

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardR(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootR (const MethodInfo* method);
// 0x3e52c90

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootR(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootL (const MethodInfo* method);
// 0x3e52d00

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootL(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fd9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fd9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBoth (const MethodInfo* method);
// 0x3e52d70

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBoth(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fda == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fda = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootRAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootRAir (const MethodInfo* method);
// 0x3e52de0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootRAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fdb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fdb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootLAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootLAir (const MethodInfo* method);
// 0x3e52e50

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootLAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fdc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fdc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x100);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBothAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBothAir (const MethodInfo* method);
// 0x3e52ec0

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBothAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fdd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fdd = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x108);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBoth (const MethodInfo* method);
// 0x3e52f30

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBoth(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fde == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fde = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x110);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBothAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBothAir (const MethodInfo* method);
// 0x3e52fa0

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBothAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fdf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fdf = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x118);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootR (const MethodInfo* method);
// 0x3e53010

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootR(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x120);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootL (const MethodInfo* method);
// 0x3e53080

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootL(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x128);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootRAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootRAir (const MethodInfo* method);
// 0x3e530f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootRAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x130);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootLAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootLAir (const MethodInfo* method);
// 0x3e53160

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootLAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookLJust
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookLJust (const MethodInfo* method);
// 0x3e531d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookLJust(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x140);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookRJust
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookRJust (const MethodInfo* method);
// 0x3e53240

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookRJust(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x148);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookL (const MethodInfo* method);
// 0x3e532b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookL(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x150);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookR (const MethodInfo* method);
// 0x3e53320

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookR(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x158);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x158);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHook
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHook (const MethodInfo* method);
// 0x3e53390

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHook(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x160);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x160);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRelease
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirRelease (const MethodInfo* method);
// 0x3e53400

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirRelease(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fe9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fe9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x168);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x168);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirFall
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirFall (const MethodInfo* method);
// 0x3e53470

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirFall(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fea = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x170);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x170);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRise
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirRise (const MethodInfo* method);
// 0x3e534e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirRise(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702feb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702feb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x178);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x178);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2 (const MethodInfo* method);
// 0x3e53550

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fec = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x180);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x180);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Right
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Right (const MethodInfo* method);
// 0x3e535c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Right(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fed = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x188);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x188);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Left
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Left (const MethodInfo* method);
// 0x3e53630

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Left(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fee = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 400);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 400);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Backward
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Backward (const MethodInfo* method);
// 0x3e536a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Backward(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fef = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x198);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x198);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL1 (const MethodInfo* method);
// 0x3e53710

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL2 (const MethodInfo* method);
// 0x3e53780

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR1 (const MethodInfo* method);
// 0x3e537f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR2 (const MethodInfo* method);
// 0x3e53860

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1 (const MethodInfo* method);
// 0x3e538d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack2 (const MethodInfo* method);
// 0x3e53940

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack4 (const MethodInfo* method);
// 0x3e539b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialArmin
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialArmin (const MethodInfo* method);
// 0x3e53a20

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialArmin(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco0
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco0 (const MethodInfo* method);
// 0x3e53a90

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco0(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco1 (const MethodInfo* method);
// 0x3e53b00

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ff9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ff9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialSasha
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialSasha (const MethodInfo* method);
// 0x3e53b70

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialSasha(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ffa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ffa = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa1 (const MethodInfo* method);
// 0x3e53be0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ffb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ffb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa2 (const MethodInfo* method);
// 0x3e53c50

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ffc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ffc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x200);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x200);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialLevi
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialLevi (const MethodInfo* method);
// 0x3e53cc0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialLevi(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ffd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ffd = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialPetra
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialPetra (const MethodInfo* method);
// 0x3e53d30

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialPetra(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ffe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702ffe = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialJean
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialJean (const MethodInfo* method);
// 0x3e53da0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialJean(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05702fff = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialShifter (const MethodInfo* method);
// 0x3e53e10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialShifter(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703000 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703000 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteSalute
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteSalute (const MethodInfo* method);
// 0x3e53e80

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteSalute(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703001 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703001 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteNo
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteNo (const MethodInfo* method);
// 0x3e53ef0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteNo(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703002 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703002 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x230);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x230);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteYes
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteYes (const MethodInfo* method);
// 0x3e53f60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteYes(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703003 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703003 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x238);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x238);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteWave
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteWave (const MethodInfo* method);
// 0x3e53fd0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteWave(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703004 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_05703004 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ClassName (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e54040

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703005 == '\0') {
    il2cpp_init_method_metadata(&"HumanAnimationEnum");
    DAT_05703005 = '\x01';
  }
  return "HumanAnimationEnum";
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e54070

bool_conflict
CustomLogic_CustomLogicHumanAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsStatic (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e54080

bool_conflict
CustomLogic_CustomLogicHumanAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e54090

bool_conflict
CustomLogic_CustomLogicHumanAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


