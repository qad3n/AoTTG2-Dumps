// Type: CustomLogic.CustomLogicHumanAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanAnimationEnum_o* CustomLogic_CustomLogicHumanAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x415a370

CustomLogic_CustomLogicHumanAnimationEnum_o *
CustomLogic_CustomLogicHumanAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  undefined8 *puVar6;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  CustomLogic_CustomLogicHumanAnimationEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acd70 == '\0') {
    pSStack_20 = (System_String_o *)0x415a38c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanAnimationEnum);
    g_data_057acd70 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x415a407;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x415a3b6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(_DAT_05577ee8);
    if (g_data_057acd25 == '\0') {
      pSStack_20 = (System_String_o *)0x415a3ce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acd25 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x415a3ed;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x415a3f7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicHumanAnimationEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x415a40f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x415a422;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x415a431;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicHumanAnimationEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x415a440;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x415a450;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x415a45f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x415a467;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x415a477;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x415a483;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicHumanAnimationEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x415a48e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057acd71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SpecialMarco0");
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"EmoteWave");
    il2cpp_runtime_helper_023445d0(&"IdleTSF");
    il2cpp_runtime_helper_023445d0(&"AirRelease");
    il2cpp_runtime_helper_023445d0(&"Attack1HookR1");
    il2cpp_runtime_helper_023445d0(&"SpecialPetra");
    il2cpp_runtime_helper_023445d0(&"SpecialMikasa1");
    il2cpp_runtime_helper_023445d0(&"AHSSShootLAir");
    il2cpp_runtime_helper_023445d0(&"RunTS");
    il2cpp_runtime_helper_023445d0(&"SpecialMarco1");
    il2cpp_runtime_helper_023445d0(&"HorseDismount");
    il2cpp_runtime_helper_023445d0(&"Attack1HookL1");
    il2cpp_runtime_helper_023445d0(&"IdleM");
    il2cpp_runtime_helper_023445d0(&"SpecialSasha");
    il2cpp_runtime_helper_023445d0(&"AirRise");
    il2cpp_runtime_helper_023445d0(&"ChangeBladeAir");
    il2cpp_runtime_helper_023445d0(&"SpecialMikasa2");
    il2cpp_runtime_helper_023445d0(&"Attack4");
    il2cpp_runtime_helper_023445d0(&"AirHookRJust");
    il2cpp_runtime_helper_023445d0(&"SpecialArmin");
    il2cpp_runtime_helper_023445d0(&"TSShootR");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardR");
    il2cpp_runtime_helper_023445d0(&"HorseRun");
    il2cpp_runtime_helper_023445d0(&"IdleTSM");
    il2cpp_runtime_helper_023445d0(&"TSShootRAir");
    il2cpp_runtime_helper_023445d0(&"TSShootL");
    il2cpp_runtime_helper_023445d0(&"TSShootLAir");
    il2cpp_runtime_helper_023445d0(&"AHSSShootRAir");
    il2cpp_runtime_helper_023445d0(&"EmoteYes");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"Attack1HookR2");
    il2cpp_runtime_helper_023445d0(&"Air2Left");
    il2cpp_runtime_helper_023445d0(&"AirHookLJust");
    il2cpp_runtime_helper_023445d0(&"AirHook");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Dash");
    il2cpp_runtime_helper_023445d0(&"Attack2");
    il2cpp_runtime_helper_023445d0(&"AHSSShootBothAir");
    il2cpp_runtime_helper_023445d0(&"HorseIdle");
    il2cpp_runtime_helper_023445d0(&"OnWall");
    il2cpp_runtime_helper_023445d0(&"SpecialLevi");
    il2cpp_runtime_helper_023445d0(&"EmoteSalute");
    il2cpp_runtime_helper_023445d0(&"IdleAHSSF");
    il2cpp_runtime_helper_023445d0(&"Air2Backward");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"Grabbed");
    il2cpp_runtime_helper_023445d0(&"Air2");
    il2cpp_runtime_helper_023445d0(&"SpecialJean");
    il2cpp_runtime_helper_023445d0(&"AHSSGunReloadBoth");
    il2cpp_runtime_helper_023445d0(&"Attack1");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"AHSSShootR");
    il2cpp_runtime_helper_023445d0(&"ChangeBlade");
    il2cpp_runtime_helper_023445d0(&"SpecialShifter");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardL");
    il2cpp_runtime_helper_023445d0(&"Attack1HookL2");
    il2cpp_runtime_helper_023445d0(&"IdleF");
    il2cpp_runtime_helper_023445d0(&"AirHookR");
    il2cpp_runtime_helper_023445d0(&"AHSSShootBoth");
    il2cpp_runtime_helper_023445d0(&"IdleAHSSM");
    il2cpp_runtime_helper_023445d0(&"AirFall");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardBoth");
    il2cpp_runtime_helper_023445d0(&"WallRun");
    il2cpp_runtime_helper_023445d0(&"EmoteNo");
    il2cpp_runtime_helper_023445d0(&"AHSSGunReloadBothAir");
    il2cpp_runtime_helper_023445d0(&"AHSSShootL");
    il2cpp_runtime_helper_023445d0(&"AirHookL");
    il2cpp_runtime_helper_023445d0(&"ToRoof");
    il2cpp_runtime_helper_023445d0(&"RunBuffed");
    il2cpp_runtime_helper_023445d0(&"Air2Right");
    il2cpp_runtime_helper_023445d0(&"HorseMount");
    g_data_057acd71 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x6c198db2) {
    if (uVar1 < 0x3c73ce13) {
      if (uVar1 < 0xdb32d0a) {
        if (uVar1 < 0x75b8e45) {
          if (uVar1 < 0x45b898c) {
            if (uVar1 == 0x331aacb) {
              bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Air2Right",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puVar6 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                puStack_30 = puVar6;
                if (g_data_057acda3 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Right_g____getter_51);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                  g_data_057acda3 = '\x01';
                }
                pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                System_Func_object__object____ctor();
                pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,
                           (System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                return pCVar9;
              }
            }
            else if (uVar1 == 0x45b898b) {
              bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Attack4",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puVar6 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                puStack_30 = puVar6;
                if (g_data_057acdac == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack4_g____getter_60_0);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                  g_data_057acdac = '\x01';
                }
                pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                System_Func_object__object____ctor();
                pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,
                           (System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                return pCVar9;
              }
            }
          }
          else if (uVar1 == 0x520dc57) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TSShootR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acd96 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootR_g____getter_38);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acd96 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x75b8e44) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Attack1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acdaa == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1_g____getter_58_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acdaa = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 < 0xb20e5ca) {
          if (uVar1 == 0xa5b92fd) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Attack2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acdab == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack2_g____getter_59_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acdab = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0xb20e5c9) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TSShootL",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acd97 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootL_g____getter_39);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acd97 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0xc43456b) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RunTS",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd7e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunTS_g____getter_14_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd7e = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0xcb32b76) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialMarco0",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acdae == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMarco0_g____gette);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdae = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0xdb32d09) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialMarco1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acdaf == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMarco1_g____gette);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdaf = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x1ddf2a12) {
        if (uVar1 < 0x11ff6d0c) {
          if (uVar1 == 0xe1ef32d) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Jump",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acd7c == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_12_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acd7c = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x11ff6d0b) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSShootRAir",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acd91 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootRAir_g____gette);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acd91 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x18ea5324) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AirHookL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd9c == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookL_g____getter_44);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd9c = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1ddf2a11) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSShootR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd8e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootR_g____getter_3);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd8e = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x27df39d0) {
        if (uVar1 == 0x1eea5c96) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AirHookR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd9d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookR_g____getter_45);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd9d = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x27df39cf) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSShootL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd8f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootL_g____getter_3);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd8f = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x2ea8c1d5) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialArmin",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acdad == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialArmin_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdad = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x324d8372) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteWave",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acdba == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteWave_g____getter_74);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdba = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x3c73ce12) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSShootBothAir",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd93 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootBothAir_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd93 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x502d6444) {
      if (uVar1 < 0x43ea2092) {
        if (uVar1 < 0x40ea1bd9) {
          if (uVar1 == 0x3d57045f) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Air2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acda2 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2_g____getter_50_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acda2 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x40ea1bd8) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialMikasa2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acdb2 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMikasa2_g____gett);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acdb2 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x42bf6b8e) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSGunReloadBothAir",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd95 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunReloadBothAir_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd95 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x43ea2091) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialMikasa1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acdb1 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMikasa1_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb1 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x48d20264) {
        if (uVar1 == 0x47ae9c66) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteYes",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acdb9 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteYes_g____getter_73);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb9 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x48d20263) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ChangeBladeAir",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd8a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeBladeAir_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd8a = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x4928501c) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AirHookRJust",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd9b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookRJust_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd9b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x4a4b98a8) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteNo",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acdb8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNo_g____getter_72_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdb8 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x502d6443) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TSShootLAir",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd99 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootLAir_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd99 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x5a8567ff) {
      if (uVar1 < 0x5a18e72b) {
        if (uVar1 == 0x569fee3e) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialSasha",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acdb0 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialSasha_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb0 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x5a18e72a) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ToRoof",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd86 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToRoof_g____getter_22_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd86 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x5a234b86) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Grabbed",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd83 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grabbed_g____getter_19_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd83 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x5a8567fe) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RunBuffed",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd7f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunBuffed_g____getter_15);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd7f = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x6153e693) {
      if (uVar1 == 0x5e0c8dea) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSGunReloadBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd94 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunReloadBoth_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd94 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x6153e692) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AirRise",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acda1 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirRise_g____getter_49_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acda1 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x68597615) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Dash",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd84 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dash_g____getter_20_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd84 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x6b8be0a4) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Attack1HookL1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acda6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookL1_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda6 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x6c198db1) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Refill",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd85 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_21_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd85 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xade67049) {
    if (uVar1 < 0x96ddf09e) {
      if (uVar1 < 0x8149ffdb) {
        if (uVar1 < 0x71e5e681) {
          if (uVar1 == 0x6e8be55d) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Attack1HookL2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acda7 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookL2_g____gette);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acda7 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x71e5e680) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AirHook",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acd9e == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHook_g____getter_46_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acd9e = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x8149ffda) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialJean",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acdb5 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialJean_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb5 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x76a54822) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Air2Backward",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acda5 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Backward_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acda5 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x89394d93) {
        if (uVar1 == 0x82a65f9f) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HorseRun",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd75 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseRun_g____getter_5_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd75 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x89394d92) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialLevi",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acdb3 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialLevi_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb3 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x8bdddf4c) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"IdleTSF",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd7a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleTSF_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd7a = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x8d57e66a) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Run",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd7d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_13_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd7d = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x96ddf09d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"IdleTSM",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd7b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleTSM_g____getter_11_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd7b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0xa7c39be9) {
      if (uVar1 < 0x9dce8faa) {
        if (uVar1 == 0x9be653f2) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSHookForwardL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd8c == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardL_g____ge);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd8c = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x9dce8fa9) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ChangeBlade",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd89 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeBlade_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd89 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x9fc3b6af) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"IdleF",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd76 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleF_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd76 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xa7c39be8) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialPetra",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acdb4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialPetra_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdb4 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0xa8c3c4db) {
      if (uVar1 == 0xa80c6d01) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSHookForwardBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd8b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardBoth_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd8b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xa8c3c4da) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"IdleM",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd77 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleM_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd77 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xa97fed56) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AirFall",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acda0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirFall_g____getter_48_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda0 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xa9da7dea) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AirHookLJust",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd9a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookLJust_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd9a = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xade67048) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSHookForwardR",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd8d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardR_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd8d = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xd79107d7) {
    if (uVar1 < 0xc35fd7d4) {
      if (uVar1 < 0xbe4185ab) {
        if (uVar1 == 0xb541777f) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"IdleAHSSM",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd78 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleAHSSM_g____getter_8);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd78 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0xbe4185aa) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"IdleAHSSF",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acd79 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleAHSSF_g____getter_9);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd79 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0xc0f4f364) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"OnWall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd88 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OnWall_g____getter_24_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd88 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xc35fd7d3) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteSalute",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acdb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteSalute_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdb7 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0xc52547e8) {
      if (uVar1 == 0xc3e1ce03) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SpecialShifter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acdb6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialShifter_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdb6 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xc52547e7) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HorseMount",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar7 = pSStack_28;
          pSVar3 = pSStack_20;
          goto CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount;
        }
      }
    }
    else if (uVar1 == 0xce6417cc) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AirRelease",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd9f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirRelease_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd9f = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xd6910643) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Attack1HookR2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acda9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookR2_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda9 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xd79107d6) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Attack1HookR1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acda8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookR1_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda8 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xec4867bb) {
    if (uVar1 < 0xe54a3917) {
      if (uVar1 == 0xdaf9a716) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSShootBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acd90 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootBoth_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd90 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xe54a3916) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Air2Left",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acda4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Left_g____getter_52);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acda4 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xe6146cb1) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSShootLAir",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd92 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootLAir_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd92 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xe9e243fb) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HorseDismount",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd73 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseDismount_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd73 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xec4867ba) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"WallRun",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd87 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallRun_g____getter_23_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd87 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xf2adf85a) {
    if (uVar1 == 0xee1682bc) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Land",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd81 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_17_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd81 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xf2adf859) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TSShootRAir",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd98 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootRAir_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd98 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 == 0xf526d670) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Dodge",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acd80 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_16_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd80 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xfc5e3070) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HorseIdle",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acd74 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseIdle_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd74 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xffc7c086) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Slide",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acd82 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_18_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd82 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return pCVar9;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHumanAnimationEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057acd72 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415bf69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseMount_g____getter_2);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415bf75;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415bf81;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415bf8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd72 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415bfa3;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415bfbc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415bfcb;
  pCVar9 = (CustomLogic_CustomLogicHumanAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415bfe5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x415a490

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  undefined8 *puVar4;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057acd71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SpecialMarco0");
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"EmoteWave");
    il2cpp_runtime_helper_023445d0(&"IdleTSF");
    il2cpp_runtime_helper_023445d0(&"AirRelease");
    il2cpp_runtime_helper_023445d0(&"Attack1HookR1");
    il2cpp_runtime_helper_023445d0(&"SpecialPetra");
    il2cpp_runtime_helper_023445d0(&"SpecialMikasa1");
    il2cpp_runtime_helper_023445d0(&"AHSSShootLAir");
    il2cpp_runtime_helper_023445d0(&"RunTS");
    il2cpp_runtime_helper_023445d0(&"SpecialMarco1");
    il2cpp_runtime_helper_023445d0(&"HorseDismount");
    il2cpp_runtime_helper_023445d0(&"Attack1HookL1");
    il2cpp_runtime_helper_023445d0(&"IdleM");
    il2cpp_runtime_helper_023445d0(&"SpecialSasha");
    il2cpp_runtime_helper_023445d0(&"AirRise");
    il2cpp_runtime_helper_023445d0(&"ChangeBladeAir");
    il2cpp_runtime_helper_023445d0(&"SpecialMikasa2");
    il2cpp_runtime_helper_023445d0(&"Attack4");
    il2cpp_runtime_helper_023445d0(&"AirHookRJust");
    il2cpp_runtime_helper_023445d0(&"SpecialArmin");
    il2cpp_runtime_helper_023445d0(&"TSShootR");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardR");
    il2cpp_runtime_helper_023445d0(&"HorseRun");
    il2cpp_runtime_helper_023445d0(&"IdleTSM");
    il2cpp_runtime_helper_023445d0(&"TSShootRAir");
    il2cpp_runtime_helper_023445d0(&"TSShootL");
    il2cpp_runtime_helper_023445d0(&"TSShootLAir");
    il2cpp_runtime_helper_023445d0(&"AHSSShootRAir");
    il2cpp_runtime_helper_023445d0(&"EmoteYes");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"Attack1HookR2");
    il2cpp_runtime_helper_023445d0(&"Air2Left");
    il2cpp_runtime_helper_023445d0(&"AirHookLJust");
    il2cpp_runtime_helper_023445d0(&"AirHook");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Dash");
    il2cpp_runtime_helper_023445d0(&"Attack2");
    il2cpp_runtime_helper_023445d0(&"AHSSShootBothAir");
    il2cpp_runtime_helper_023445d0(&"HorseIdle");
    il2cpp_runtime_helper_023445d0(&"OnWall");
    il2cpp_runtime_helper_023445d0(&"SpecialLevi");
    il2cpp_runtime_helper_023445d0(&"EmoteSalute");
    il2cpp_runtime_helper_023445d0(&"IdleAHSSF");
    il2cpp_runtime_helper_023445d0(&"Air2Backward");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"Grabbed");
    il2cpp_runtime_helper_023445d0(&"Air2");
    il2cpp_runtime_helper_023445d0(&"SpecialJean");
    il2cpp_runtime_helper_023445d0(&"AHSSGunReloadBoth");
    il2cpp_runtime_helper_023445d0(&"Attack1");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"AHSSShootR");
    il2cpp_runtime_helper_023445d0(&"ChangeBlade");
    il2cpp_runtime_helper_023445d0(&"SpecialShifter");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardL");
    il2cpp_runtime_helper_023445d0(&"Attack1HookL2");
    il2cpp_runtime_helper_023445d0(&"IdleF");
    il2cpp_runtime_helper_023445d0(&"AirHookR");
    il2cpp_runtime_helper_023445d0(&"AHSSShootBoth");
    il2cpp_runtime_helper_023445d0(&"IdleAHSSM");
    il2cpp_runtime_helper_023445d0(&"AirFall");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardBoth");
    il2cpp_runtime_helper_023445d0(&"WallRun");
    il2cpp_runtime_helper_023445d0(&"EmoteNo");
    il2cpp_runtime_helper_023445d0(&"AHSSGunReloadBothAir");
    il2cpp_runtime_helper_023445d0(&"AHSSShootL");
    il2cpp_runtime_helper_023445d0(&"AirHookL");
    il2cpp_runtime_helper_023445d0(&"ToRoof");
    il2cpp_runtime_helper_023445d0(&"RunBuffed");
    il2cpp_runtime_helper_023445d0(&"Air2Right");
    il2cpp_runtime_helper_023445d0(&"HorseMount");
    g_data_057acd71 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x6c198db2) {
    if (uVar1 < 0x3c73ce13) {
      if (uVar1 < 0xdb32d0a) {
        if (uVar1 < 0x75b8e45) {
          if (uVar1 < 0x45b898c) {
            if (uVar1 == 0x331aacb) {
              bVar2 = System_String__op_Equality(name,"Air2Right",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puStack_18 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                if (g_data_057acda3 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Right_g____getter_51);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                  g_data_057acda3 = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                System_Func_object__object____ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
            else if ((uVar1 == 0x45b898b) &&
                    (bVar2 = System_String__op_Equality(name,"Attack4",(MethodInfo *)0x0),
                    (char)bVar2 != '\0')) {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057acdac == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack4_g____getter_60_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acdac = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x520dc57) {
            bVar2 = System_String__op_Equality(name,"TSShootR",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057acd96 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootR_g____getter_38);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acd96 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x75b8e44) &&
                  (bVar2 = System_String__op_Equality(name,"Attack1",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acdaa == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1_g____getter_58_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdaa = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 < 0xb20e5ca) {
          if (uVar1 == 0xa5b92fd) {
            bVar2 = System_String__op_Equality(name,"Attack2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057acdab == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack2_g____getter_59_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acdab = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0xb20e5c9) &&
                  (bVar2 = System_String__op_Equality(name,"TSShootL",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd97 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootL_g____getter_39);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd97 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xc43456b) {
          bVar2 = System_String__op_Equality(name,"RunTS",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd7e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunTS_g____getter_14_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd7e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xcb32b76) {
          bVar2 = System_String__op_Equality(name,"SpecialMarco0",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acdae == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMarco0_g____gette);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdae = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0xdb32d09) &&
                (bVar2 = System_String__op_Equality(name,"SpecialMarco1",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acdaf == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMarco1_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdaf = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x1ddf2a12) {
        if (uVar1 < 0x11ff6d0c) {
          if (uVar1 == 0xe1ef32d) {
            bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057acd7c == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_12_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acd7c = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x11ff6d0b) &&
                  (bVar2 = System_String__op_Equality(name,"AHSSShootRAir",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd91 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootRAir_g____gette);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd91 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x18ea5324) {
          bVar2 = System_String__op_Equality(name,"AirHookL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd9c == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookL_g____getter_44);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd9c = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x1ddf2a11) &&
                (bVar2 = System_String__op_Equality(name,"AHSSShootR",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd8e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootR_g____getter_3);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd8e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x27df39d0) {
        if (uVar1 == 0x1eea5c96) {
          bVar2 = System_String__op_Equality(name,"AirHookR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd9d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookR_g____getter_45);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd9d = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x27df39cf) &&
                (bVar2 = System_String__op_Equality(name,"AHSSShootL",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd8f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootL_g____getter_3);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd8f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x2ea8c1d5) {
        bVar2 = System_String__op_Equality(name,"SpecialArmin",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acdad == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialArmin_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdad = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x324d8372) {
        bVar2 = System_String__op_Equality(name,"EmoteWave",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acdba == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteWave_g____getter_74);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdba = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x3c73ce12) &&
              (bVar2 = System_String__op_Equality(name,"AHSSShootBothAir",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd93 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootBothAir_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd93 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x502d6444) {
      if (uVar1 < 0x43ea2092) {
        if (uVar1 < 0x40ea1bd9) {
          if (uVar1 == 0x3d57045f) {
            bVar2 = System_String__op_Equality(name,"Air2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057acda2 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2_g____getter_50_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acda2 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x40ea1bd8) &&
                  (bVar2 = System_String__op_Equality(name,"SpecialMikasa2",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acdb2 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMikasa2_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb2 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x42bf6b8e) {
          bVar2 = System_String__op_Equality(name,"AHSSGunReloadBothAir",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd95 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunReloadBothAir_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd95 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x43ea2091) &&
                (bVar2 = System_String__op_Equality(name,"SpecialMikasa1",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acdb1 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMikasa1_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdb1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x48d20264) {
        if (uVar1 == 0x47ae9c66) {
          bVar2 = System_String__op_Equality(name,"EmoteYes",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acdb9 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteYes_g____getter_73);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb9 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x48d20263) &&
                (bVar2 = System_String__op_Equality(name,"ChangeBladeAir",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd8a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeBladeAir_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd8a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x4928501c) {
        bVar2 = System_String__op_Equality(name,"AirHookRJust",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd9b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookRJust_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd9b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x4a4b98a8) {
        bVar2 = System_String__op_Equality(name,"EmoteNo",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acdb8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNo_g____getter_72_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdb8 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x502d6443) &&
              (bVar2 = System_String__op_Equality(name,"TSShootLAir",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd99 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootLAir_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd99 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x5a8567ff) {
      if (uVar1 < 0x5a18e72b) {
        if (uVar1 == 0x569fee3e) {
          bVar2 = System_String__op_Equality(name,"SpecialSasha",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acdb0 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialSasha_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb0 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x5a18e72a) &&
                (bVar2 = System_String__op_Equality(name,"ToRoof",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd86 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToRoof_g____getter_22_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd86 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5a234b86) {
        bVar2 = System_String__op_Equality(name,"Grabbed",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd83 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grabbed_g____getter_19_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd83 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x5a8567fe) &&
              (bVar2 = System_String__op_Equality(name,"RunBuffed",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd7f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunBuffed_g____getter_15);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd7f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x6153e693) {
      if (uVar1 == 0x5e0c8dea) {
        bVar2 = System_String__op_Equality(name,"AHSSGunReloadBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd94 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunReloadBoth_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd94 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x6153e692) &&
              (bVar2 = System_String__op_Equality(name,"AirRise",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acda1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirRise_g____getter_49_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x68597615) {
      bVar2 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd84 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dash_g____getter_20_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd84 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x6b8be0a4) {
      bVar2 = System_String__op_Equality(name,"Attack1HookL1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acda6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookL1_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda6 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x6c198db1) &&
            (bVar2 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acd85 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_21_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd85 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xade67049) {
    if (uVar1 < 0x96ddf09e) {
      if (uVar1 < 0x8149ffdb) {
        if (uVar1 < 0x71e5e681) {
          if (uVar1 == 0x6e8be55d) {
            bVar2 = System_String__op_Equality(name,"Attack1HookL2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057acda7 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookL2_g____gette);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
                g_data_057acda7 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x71e5e680) &&
                  (bVar2 = System_String__op_Equality(name,"AirHook",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd9e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHook_g____getter_46_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd9e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x8149ffda) {
          bVar2 = System_String__op_Equality(name,"SpecialJean",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acdb5 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialJean_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acdb5 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x76a54822) &&
                (bVar2 = System_String__op_Equality(name,"Air2Backward",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acda5 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Backward_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acda5 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x89394d93) {
        if (uVar1 == 0x82a65f9f) {
          bVar2 = System_String__op_Equality(name,"HorseRun",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd75 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseRun_g____getter_5_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd75 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x89394d92) &&
                (bVar2 = System_String__op_Equality(name,"SpecialLevi",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acdb3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialLevi_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdb3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8bdddf4c) {
        bVar2 = System_String__op_Equality(name,"IdleTSF",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd7a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleTSF_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd7a = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8d57e66a) {
        bVar2 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd7d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_13_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd7d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x96ddf09d) &&
              (bVar2 = System_String__op_Equality(name,"IdleTSM",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd7b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleTSM_g____getter_11_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd7b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0xa7c39be9) {
      if (uVar1 < 0x9dce8faa) {
        if (uVar1 == 0x9be653f2) {
          bVar2 = System_String__op_Equality(name,"AHSSHookForwardL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd8c == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardL_g____ge);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd8c = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x9dce8fa9) &&
                (bVar2 = System_String__op_Equality(name,"ChangeBlade",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd89 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeBlade_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd89 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9fc3b6af) {
        bVar2 = System_String__op_Equality(name,"IdleF",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd76 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleF_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd76 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xa7c39be8) &&
              (bVar2 = System_String__op_Equality(name,"SpecialPetra",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acdb4 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialPetra_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acdb4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0xa8c3c4db) {
      if (uVar1 == 0xa80c6d01) {
        bVar2 = System_String__op_Equality(name,"AHSSHookForwardBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd8b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardBoth_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd8b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xa8c3c4da) &&
              (bVar2 = System_String__op_Equality(name,"IdleM",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd77 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleM_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd77 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa97fed56) {
      bVar2 = System_String__op_Equality(name,"AirFall",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acda0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirFall_g____getter_48_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa9da7dea) {
      bVar2 = System_String__op_Equality(name,"AirHookLJust",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd9a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookLJust_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd9a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xade67048) &&
            (bVar2 = System_String__op_Equality(name,"AHSSHookForwardR",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acd8d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardR_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd8d = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xd79107d7) {
    if (uVar1 < 0xc35fd7d4) {
      if (uVar1 < 0xbe4185ab) {
        if (uVar1 == 0xb541777f) {
          bVar2 = System_String__op_Equality(name,"IdleAHSSM",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acd78 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleAHSSM_g____getter_8);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
              g_data_057acd78 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0xbe4185aa) &&
                (bVar2 = System_String__op_Equality(name,"IdleAHSSF",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd79 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleAHSSF_g____getter_9);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd79 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc0f4f364) {
        bVar2 = System_String__op_Equality(name,"OnWall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd88 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OnWall_g____getter_24_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd88 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xc35fd7d3) &&
              (bVar2 = System_String__op_Equality(name,"EmoteSalute",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acdb7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteSalute_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acdb7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0xc52547e8) {
      if (uVar1 == 0xc3e1ce03) {
        bVar2 = System_String__op_Equality(name,"SpecialShifter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acdb6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialShifter_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acdb6 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xc52547e7) &&
              (bVar2 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puVar4 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount;
      }
    }
    else if (uVar1 == 0xce6417cc) {
      bVar2 = System_String__op_Equality(name,"AirRelease",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd9f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirRelease_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd9f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xd6910643) {
      bVar2 = System_String__op_Equality(name,"Attack1HookR2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acda9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookR2_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xd79107d6) &&
            (bVar2 = System_String__op_Equality(name,"Attack1HookR1",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acda8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookR1_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acda8 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xec4867bb) {
    if (uVar1 < 0xe54a3917) {
      if (uVar1 == 0xdaf9a716) {
        bVar2 = System_String__op_Equality(name,"AHSSShootBoth",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acd90 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootBoth_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
            g_data_057acd90 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xe54a3916) &&
              (bVar2 = System_String__op_Equality(name,"Air2Left",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acda4 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Left_g____getter_52);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acda4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe6146cb1) {
      bVar2 = System_String__op_Equality(name,"AHSSShootLAir",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd92 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootLAir_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd92 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe9e243fb) {
      bVar2 = System_String__op_Equality(name,"HorseDismount",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd73 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseDismount_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd73 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xec4867ba) &&
            (bVar2 = System_String__op_Equality(name,"WallRun",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acd87 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallRun_g____getter_23_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd87 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xf2adf85a) {
    if (uVar1 == 0xee1682bc) {
      bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd81 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_17_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
          g_data_057acd81 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xf2adf859) &&
            (bVar2 = System_String__op_Equality(name,"TSShootRAir",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acd98 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootRAir_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd98 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf526d670) {
    bVar2 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acd80 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_16_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd80 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xfc5e3070) {
    bVar2 = System_String__op_Equality(name,"HorseIdle",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acd74 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseIdle_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
        g_data_057acd74 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xffc7c086) &&
          (bVar2 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acd82 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_18_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
      g_data_057acd82 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHumanAnimationEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acd72 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415bf69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseMount_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415bf75;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415bf81;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415bf8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd72 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415bfa3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415bfbc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415bfcb;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415bfe5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount (const MethodInfo* method);
// 0x415bf50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd72 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseMount_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd72 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseDismount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount (const MethodInfo* method);
// 0x415bff0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseDismount_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd73 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle (const MethodInfo* method);
// 0x415c090

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd74 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseIdle_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd74 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun (const MethodInfo* method);
// 0x415c130

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd75 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseRun_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd75 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF (const MethodInfo* method);
// 0x415c1d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd76 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleF_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd76 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM (const MethodInfo* method);
// 0x415c270

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleM_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd77 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM (const MethodInfo* method);
// 0x415c310

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd78 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleAHSSM_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd78 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF (const MethodInfo* method);
// 0x415c3b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleAHSSF_g____getter_9);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd79 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF (const MethodInfo* method);
// 0x415c450

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleTSF_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd7a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM (const MethodInfo* method);
// 0x415c4f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd7b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IdleTSM_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd7b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x415c590

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_12_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd7c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x415c630

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd7d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd7d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunTS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS (const MethodInfo* method);
// 0x415c6d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunTS_g____getter_14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd7e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunBuffed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed (const MethodInfo* method);
// 0x415c770

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RunBuffed_g____getter_15);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd7f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x415c810

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_16_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd80 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x415c8b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd81 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd81 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x415c950

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd82 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Grabbed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed (const MethodInfo* method);
// 0x415c9f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grabbed_g____getter_19_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd83 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash (const MethodInfo* method);
// 0x415ca90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dash_g____getter_20_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd84 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x415cb30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd85 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ToRoof
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof (const MethodInfo* method);
// 0x415cbd0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToRoof_g____getter_22_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd86 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__WallRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun (const MethodInfo* method);
// 0x415cc70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallRun_g____getter_23_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd87 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__OnWall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall (const MethodInfo* method);
// 0x415cd10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OnWall_g____getter_24_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd88 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade (const MethodInfo* method);
// 0x415cdb0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd89 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeBlade_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd89 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBladeAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir (const MethodInfo* method);
// 0x415ce50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd8a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeBladeAir_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd8a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth (const MethodInfo* method);
// 0x415cef0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardBoth_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd8b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL (const MethodInfo* method);
// 0x415cf90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardL_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd8c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR (const MethodInfo* method);
// 0x415d030

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSHookForwardR_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd8d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR (const MethodInfo* method);
// 0x415d0d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootR_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd8e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL (const MethodInfo* method);
// 0x415d170

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootL_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd8f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth (const MethodInfo* method);
// 0x415d210

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootBoth_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd90 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootRAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir (const MethodInfo* method);
// 0x415d2b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd91 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootRAir_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd91 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootLAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir (const MethodInfo* method);
// 0x415d350

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd92 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootLAir_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd92 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBothAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir (const MethodInfo* method);
// 0x415d3f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd93 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSShootBothAir_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd93 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth (const MethodInfo* method);
// 0x415d490

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd94 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunReloadBoth_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd94 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBothAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir (const MethodInfo* method);
// 0x415d530

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd95 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunReloadBothAir_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd95 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR (const MethodInfo* method);
// 0x415d5d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootR_g____getter_38);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd96 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL (const MethodInfo* method);
// 0x415d670

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd97 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootL_g____getter_39);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd97 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootRAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir (const MethodInfo* method);
// 0x415d710

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootRAir_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd98 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootLAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir (const MethodInfo* method);
// 0x415d7b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd99 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSShootLAir_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd99 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookLJust
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust (const MethodInfo* method);
// 0x415d850

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd9a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookLJust_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd9a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookRJust
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust (const MethodInfo* method);
// 0x415d8f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd9b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookRJust_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd9b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL (const MethodInfo* method);
// 0x415d990

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd9c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookL_g____getter_44);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd9c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR (const MethodInfo* method);
// 0x415da30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd9d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHookR_g____getter_45);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd9d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHook
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook (const MethodInfo* method);
// 0x415dad0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd9e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirHook_g____getter_46_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd9e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRelease
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease (const MethodInfo* method);
// 0x415db70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acd9f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirRelease_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acd9f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall (const MethodInfo* method);
// 0x415dc10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirFall_g____getter_48_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRise
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise (const MethodInfo* method);
// 0x415dcb0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirRise_g____getter_49_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2 (const MethodInfo* method);
// 0x415dd50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2_g____getter_50_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right (const MethodInfo* method);
// 0x415ddf0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Right_g____getter_51);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left (const MethodInfo* method);
// 0x415de90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Left_g____getter_52);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Backward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward (const MethodInfo* method);
// 0x415df30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air2Backward_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1 (const MethodInfo* method);
// 0x415dfd0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookL1_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2 (const MethodInfo* method);
// 0x415e070

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookL2_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1 (const MethodInfo* method);
// 0x415e110

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookR1_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2 (const MethodInfo* method);
// 0x415e1b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acda9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1HookR2_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acda9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1 (const MethodInfo* method);
// 0x415e250

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack1_g____getter_58_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdaa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2 (const MethodInfo* method);
// 0x415e2f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack2_g____getter_59_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdab = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4 (const MethodInfo* method);
// 0x415e390

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack4_g____getter_60_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdac = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialArmin
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin (const MethodInfo* method);
// 0x415e430

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialArmin_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdad = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco0
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0 (const MethodInfo* method);
// 0x415e4d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMarco0_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1 (const MethodInfo* method);
// 0x415e570

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdaf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMarco1_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdaf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialSasha
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha (const MethodInfo* method);
// 0x415e610

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialSasha_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1 (const MethodInfo* method);
// 0x415e6b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMikasa1_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2 (const MethodInfo* method);
// 0x415e750

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialMikasa2_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialLevi
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi (const MethodInfo* method);
// 0x415e7f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialLevi_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialPetra
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra (const MethodInfo* method);
// 0x415e890

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialPetra_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialJean
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean (const MethodInfo* method);
// 0x415e930

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialJean_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter (const MethodInfo* method);
// 0x415e9d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialShifter_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute (const MethodInfo* method);
// 0x415ea70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteSalute_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo (const MethodInfo* method);
// 0x415eb10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNo_g____getter_72_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteYes
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes (const MethodInfo* method);
// 0x415ebb0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteYes_g____getter_73);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdb9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave (const MethodInfo* method);
// 0x415ec50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this;
  
  if (g_data_057acdba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteWave_g____getter_74);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
    g_data_057acdba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x415ecf0

void CustomLogic_CustomLogicHumanAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acdbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"SpecialMarco0");
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"EmoteWave");
    il2cpp_runtime_helper_023445d0(&"IdleTSF");
    il2cpp_runtime_helper_023445d0(&"AirRelease");
    il2cpp_runtime_helper_023445d0(&"Attack1HookR1");
    il2cpp_runtime_helper_023445d0(&"SpecialPetra");
    il2cpp_runtime_helper_023445d0(&"SpecialMikasa1");
    il2cpp_runtime_helper_023445d0(&"AHSSShootLAir");
    il2cpp_runtime_helper_023445d0(&"RunTS");
    il2cpp_runtime_helper_023445d0(&"SpecialMarco1");
    il2cpp_runtime_helper_023445d0(&"HorseDismount");
    il2cpp_runtime_helper_023445d0(&"Attack1HookL1");
    il2cpp_runtime_helper_023445d0(&"IdleM");
    il2cpp_runtime_helper_023445d0(&"SpecialSasha");
    il2cpp_runtime_helper_023445d0(&"AirRise");
    il2cpp_runtime_helper_023445d0(&"ChangeBladeAir");
    il2cpp_runtime_helper_023445d0(&"SpecialMikasa2");
    il2cpp_runtime_helper_023445d0(&"Attack4");
    il2cpp_runtime_helper_023445d0(&"AirHookRJust");
    il2cpp_runtime_helper_023445d0(&"SpecialArmin");
    il2cpp_runtime_helper_023445d0(&"TSShootR");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardR");
    il2cpp_runtime_helper_023445d0(&"HorseRun");
    il2cpp_runtime_helper_023445d0(&"IdleTSM");
    il2cpp_runtime_helper_023445d0(&"TSShootRAir");
    il2cpp_runtime_helper_023445d0(&"TSShootL");
    il2cpp_runtime_helper_023445d0(&"TSShootLAir");
    il2cpp_runtime_helper_023445d0(&"AHSSShootRAir");
    il2cpp_runtime_helper_023445d0(&"EmoteYes");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"Attack1HookR2");
    il2cpp_runtime_helper_023445d0(&"Air2Left");
    il2cpp_runtime_helper_023445d0(&"AirHookLJust");
    il2cpp_runtime_helper_023445d0(&"AirHook");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Dash");
    il2cpp_runtime_helper_023445d0(&"Attack2");
    il2cpp_runtime_helper_023445d0(&"AHSSShootBothAir");
    il2cpp_runtime_helper_023445d0(&"HorseIdle");
    il2cpp_runtime_helper_023445d0(&"OnWall");
    il2cpp_runtime_helper_023445d0(&"SpecialLevi");
    il2cpp_runtime_helper_023445d0(&"EmoteSalute");
    il2cpp_runtime_helper_023445d0(&"IdleAHSSF");
    il2cpp_runtime_helper_023445d0(&"Air2Backward");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"Grabbed");
    il2cpp_runtime_helper_023445d0(&"Air2");
    il2cpp_runtime_helper_023445d0(&"SpecialJean");
    il2cpp_runtime_helper_023445d0(&"AHSSGunReloadBoth");
    il2cpp_runtime_helper_023445d0(&"Attack1");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"AHSSShootR");
    il2cpp_runtime_helper_023445d0(&"ChangeBlade");
    il2cpp_runtime_helper_023445d0(&"SpecialShifter");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardL");
    il2cpp_runtime_helper_023445d0(&"Attack1HookL2");
    il2cpp_runtime_helper_023445d0(&"IdleF");
    il2cpp_runtime_helper_023445d0(&"AirHookR");
    il2cpp_runtime_helper_023445d0(&"AHSSShootBoth");
    il2cpp_runtime_helper_023445d0(&"IdleAHSSM");
    il2cpp_runtime_helper_023445d0(&"AirFall");
    il2cpp_runtime_helper_023445d0(&"AHSSHookForwardBoth");
    il2cpp_runtime_helper_023445d0(&"WallRun");
    il2cpp_runtime_helper_023445d0(&"EmoteNo");
    il2cpp_runtime_helper_023445d0(&"AHSSGunReloadBothAir");
    il2cpp_runtime_helper_023445d0(&"AHSSShootL");
    il2cpp_runtime_helper_023445d0(&"AirHookL");
    il2cpp_runtime_helper_023445d0(&"ToRoof");
    il2cpp_runtime_helper_023445d0(&"RunBuffed");
    il2cpp_runtime_helper_023445d0(&"Air2Right");
    il2cpp_runtime_helper_023445d0(&"HorseMount");
    g_data_057acdbb = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"HorseMount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HorseDismount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HorseIdle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HorseRun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IdleF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IdleM",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IdleAHSSM",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IdleAHSSF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IdleTSF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IdleTSM",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RunTS",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RunBuffed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Slide",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grabbed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Refill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ToRoof",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"WallRun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OnWall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ChangeBlade",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ChangeBladeAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSHookForwardBoth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSHookForwardL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSHookForwardR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSShootR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSShootL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSShootBoth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSShootRAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSShootLAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSShootBothAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSGunReloadBoth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSGunReloadBothAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TSShootR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TSShootL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TSShootRAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TSShootLAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirHookLJust",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirHookRJust",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirHookL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirHookR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirHook",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirRelease",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirFall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirRise",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Air2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Air2Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Air2Left",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Air2Backward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Attack1HookL1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Attack1HookL2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Attack1HookR1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Attack1HookR2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Attack1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Attack2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Attack4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialArmin",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialMarco0",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialMarco1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialSasha",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialMikasa1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialMikasa2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialLevi",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialPetra",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialJean",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialShifter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteSalute",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteNo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteYes",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteWave",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad013 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad013 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_2_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415f710

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_2_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad013 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad013 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanAnimations + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanAnimations + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseDismount>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseDismount_g____getter_3_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415f780

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseDismount_g____getter_3_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad014 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad014 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseIdle>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseIdle_g____getter_4_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415f7f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseIdle_g____getter_4_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad015 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad015 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseRun>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseRun_g____getter_5_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415f860

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseRun_g____getter_5_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad016 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad016 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleF>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleF_g____getter_6_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415f8d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleF_g____getter_6_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad017 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad017 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleM>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleM_g____getter_7_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415f940

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleM_g____getter_7_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad018 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad018 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSM>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSM_g____getter_8_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415f9b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSM_g____getter_8_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad019 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad019 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSF>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSF_g____getter_9_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fa20

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSF_g____getter_9_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad01a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad01a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSF>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSF_g____getter_10_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fa90

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSF_g____getter_10_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad01b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad01b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSM>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSM_g____getter_11_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fb00

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSM_g____getter_11_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad01c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad01c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_12_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fb70

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_12_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad01d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad01d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_13_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fbe0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_13_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad01e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad01e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunTS>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunTS_g____getter_14_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fc50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunTS_g____getter_14_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad01f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad01f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunBuffed>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunBuffed_g____getter_15_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fcc0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunBuffed_g____getter_15_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad020 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad020 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fd30

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad021 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad021 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_17_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fda0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_17_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad022 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad022 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_18_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fe10

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_18_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad023 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad023 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Grabbed>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Grabbed_g____getter_19_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fe80

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Grabbed_g____getter_19_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad024 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad024 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_20_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415fef0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_20_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad025 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad025 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_21_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415ff60

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_21_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad026 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad026 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ToRoof>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ToRoof_g____getter_22_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x415ffd0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ToRoof_g____getter_22_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad027 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad027 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__WallRun>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__WallRun_g____getter_23_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160040

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__WallRun_g____getter_23_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad028 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad028 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__OnWall>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__OnWall_g____getter_24_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41600b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__OnWall_g____getter_24_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad029 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad029 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBlade>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBlade_g____getter_25_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160120

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBlade_g____getter_25_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad02a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad02a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBladeAir>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBladeAir_g____getter_26_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160190

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBladeAir_g____getter_26_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad02b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad02b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardBoth>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardBoth_g____getter_27_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160200

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardBoth_g____getter_27_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad02c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad02c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 200);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardL>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardL_g____getter_28_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160270

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardL_g____getter_28_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad02d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad02d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardR>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardR_g____getter_29_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41602e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardR_g____getter_29_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad02e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad02e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootR>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootR_g____getter_30_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160350

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootR_g____getter_30_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad02f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad02f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootL>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootL_g____getter_31_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41603c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootL_g____getter_31_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad030 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad030 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBoth>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBoth_g____getter_32_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160430

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBoth_g____getter_32_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad031 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad031 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootRAir>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootRAir_g____getter_33_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41604a0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootRAir_g____getter_33_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad032 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad032 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootLAir>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootLAir_g____getter_34_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160510

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootLAir_g____getter_34_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad033 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad033 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x100);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBothAir>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBothAir_g____getter_35_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160580

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBothAir_g____getter_35_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad034 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad034 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x108);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBoth>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBoth_g____getter_36_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41605f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBoth_g____getter_36_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad035 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad035 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x110);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBothAir>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBothAir_g____getter_37_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160660

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBothAir_g____getter_37_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad036 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad036 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x118);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootR>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootR_g____getter_38_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41606d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootR_g____getter_38_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad037 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad037 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x120);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootL>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootL_g____getter_39_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160740

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootL_g____getter_39_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad038 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad038 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x128);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootRAir>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootRAir_g____getter_40_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41607b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootRAir_g____getter_40_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad039 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad039 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x130);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootLAir>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootLAir_g____getter_41_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160820

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootLAir_g____getter_41_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad03a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad03a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookLJust>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookLJust_g____getter_42_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160890

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookLJust_g____getter_42_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad03b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad03b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x140);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookRJust>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookRJust_g____getter_43_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160900

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookRJust_g____getter_43_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad03c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad03c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x148);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookL>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookL_g____getter_44_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160970

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookL_g____getter_44_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad03d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad03d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x150);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookR>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookR_g____getter_45_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41609e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookR_g____getter_45_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad03e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad03e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x158);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x158);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHook>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHook_g____getter_46_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160a50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHook_g____getter_46_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad03f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad03f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x160);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x160);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRelease>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRelease_g____getter_47_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160ac0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRelease_g____getter_47_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad040 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad040 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x168);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x168);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirFall>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirFall_g____getter_48_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160b30

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirFall_g____getter_48_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad041 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad041 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x170);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x170);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRise>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRise_g____getter_49_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160ba0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRise_g____getter_49_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad042 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad042 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x178);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x178);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2_g____getter_50_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160c10

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2_g____getter_50_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad043 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x180);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x180);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Right>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Right_g____getter_51_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160c80

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Right_g____getter_51_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad044 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad044 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x188);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x188);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Left>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Left_g____getter_52_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160cf0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Left_g____getter_52_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad045 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad045 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 400);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 400);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Backward>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Backward_g____getter_53_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160d60

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Backward_g____getter_53_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad046 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad046 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x198);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x198);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL1>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL1_g____getter_54_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160dd0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL1_g____getter_54_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad047 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad047 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL2>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL2_g____getter_55_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160e40

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL2_g____getter_55_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad048 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad048 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR1>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR1_g____getter_56_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160eb0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR1_g____getter_56_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad049 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad049 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR2>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR2_g____getter_57_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160f20

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR2_g____getter_57_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad04a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad04a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1_g____getter_58_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4160f90

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1_g____getter_58_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad04b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad04b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack2>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack2_g____getter_59_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161000

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack2_g____getter_59_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad04c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad04c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack4>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack4_g____getter_60_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161070

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack4_g____getter_60_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad04d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad04d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialArmin>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialArmin_g____getter_61_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41610e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialArmin_g____getter_61_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad04e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad04e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco0>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco0_g____getter_62_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161150

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco0_g____getter_62_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad04f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad04f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco1>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco1_g____getter_63_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41611c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco1_g____getter_63_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad050 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad050 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialSasha>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialSasha_g____getter_64_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161230

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialSasha_g____getter_64_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad051 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad051 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa1>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa1_g____getter_65_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41612a0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa1_g____getter_65_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad052 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad052 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa2>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa2_g____getter_66_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161310

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa2_g____getter_66_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad053 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad053 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x200);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialLevi>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialLevi_g____getter_67_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161380

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialLevi_g____getter_67_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad054 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad054 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialPetra>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialPetra_g____getter_68_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41613f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialPetra_g____getter_68_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad055 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad055 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialJean>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialJean_g____getter_69_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161460

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialJean_g____getter_69_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad056 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad056 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialShifter>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialShifter_g____getter_70_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41614d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialShifter_g____getter_70_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad057 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad057 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_71_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161540

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_71_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad058 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad058 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNo>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNo_g____getter_72_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x41615b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNo_g____getter_72_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad059 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad059 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x230);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x230);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteYes>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteYes_g____getter_73_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161620

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteYes_g____getter_73_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad05a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad05a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x238);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x238);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_74_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x4161690

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_74_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad05b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057ad05b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanAnimationEnum___ctor (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x41582b0

void CustomLogic_CustomLogicHumanAnimationEnum___ctor
               (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd25 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acd25 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseMount
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseMount (const MethodInfo* method);
// 0x4158320

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseMount(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd26 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HumanAnimations + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HumanAnimations + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseDismount
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseDismount (const MethodInfo* method);
// 0x4158390

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseDismount(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd27 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseIdle (const MethodInfo* method);
// 0x4158400

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseIdle(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd28 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd28 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseRun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseRun (const MethodInfo* method);
// 0x4158470

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseRun(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd29 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleF (const MethodInfo* method);
// 0x41584e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleF(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd2a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleM (const MethodInfo* method);
// 0x4158550

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleM(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd2b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd2b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSM (const MethodInfo* method);
// 0x41585c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSM(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd2c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSF (const MethodInfo* method);
// 0x4158630

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSF(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd2d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSF (const MethodInfo* method);
// 0x41586a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSF(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd2e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSM (const MethodInfo* method);
// 0x4158710

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSM(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd2f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Jump (const MethodInfo* method);
// 0x4158780

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd30 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Run (const MethodInfo* method);
// 0x41587f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Run(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd31 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd31 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_RunTS
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_RunTS (const MethodInfo* method);
// 0x4158860

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_RunTS(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd32 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_RunBuffed
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_RunBuffed (const MethodInfo* method);
// 0x41588d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_RunBuffed(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd33 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Dodge (const MethodInfo* method);
// 0x4158940

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Dodge(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd34 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Land (const MethodInfo* method);
// 0x41589b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Land(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd35 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Slide (const MethodInfo* method);
// 0x4158a20

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Slide(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd36 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Grabbed
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Grabbed (const MethodInfo* method);
// 0x4158a90

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Grabbed(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd37 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Dash
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Dash (const MethodInfo* method);
// 0x4158b00

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Dash(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd38 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Refill (const MethodInfo* method);
// 0x4158b70

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Refill(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd39 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ToRoof
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ToRoof (const MethodInfo* method);
// 0x4158be0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ToRoof(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd3a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_WallRun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_WallRun (const MethodInfo* method);
// 0x4158c50

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_WallRun(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd3b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_OnWall
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_OnWall (const MethodInfo* method);
// 0x4158cc0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_OnWall(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd3c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBlade
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBlade (const MethodInfo* method);
// 0x4158d30

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBlade(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd3d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBladeAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBladeAir (const MethodInfo* method);
// 0x4158da0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBladeAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd3e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardBoth (const MethodInfo* method);
// 0x4158e10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardBoth(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd3f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 200);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardL (const MethodInfo* method);
// 0x4158e80

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardL(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd40 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardR (const MethodInfo* method);
// 0x4158ef0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardR(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd41 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd41 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootR (const MethodInfo* method);
// 0x4158f60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootR(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd42 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootL (const MethodInfo* method);
// 0x4158fd0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootL(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd43 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBoth (const MethodInfo* method);
// 0x4159040

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBoth(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd44 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootRAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootRAir (const MethodInfo* method);
// 0x41590b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootRAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd45 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootLAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootLAir (const MethodInfo* method);
// 0x4159120

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootLAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd46 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x100);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBothAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBothAir (const MethodInfo* method);
// 0x4159190

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBothAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd47 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x108);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBoth (const MethodInfo* method);
// 0x4159200

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBoth(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd48 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x110);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBothAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBothAir (const MethodInfo* method);
// 0x4159270

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBothAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd49 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x118);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootR (const MethodInfo* method);
// 0x41592e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootR(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd4a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x120);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootL (const MethodInfo* method);
// 0x4159350

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootL(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd4b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x128);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootRAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootRAir (const MethodInfo* method);
// 0x41593c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootRAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd4c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x130);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootLAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootLAir (const MethodInfo* method);
// 0x4159430

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootLAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd4d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookLJust
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookLJust (const MethodInfo* method);
// 0x41594a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookLJust(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd4e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x140);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookRJust
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookRJust (const MethodInfo* method);
// 0x4159510

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookRJust(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd4f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x148);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookL (const MethodInfo* method);
// 0x4159580

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookL(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd50 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x150);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookR (const MethodInfo* method);
// 0x41595f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookR(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd51 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x158);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x158);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHook
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHook (const MethodInfo* method);
// 0x4159660

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHook(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd52 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x160);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x160);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRelease
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirRelease (const MethodInfo* method);
// 0x41596d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirRelease(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd53 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x168);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x168);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirFall
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirFall (const MethodInfo* method);
// 0x4159740

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirFall(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd54 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x170);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x170);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRise
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirRise (const MethodInfo* method);
// 0x41597b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirRise(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd55 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd55 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x178);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x178);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2 (const MethodInfo* method);
// 0x4159820

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd56 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x180);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x180);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Right
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Right (const MethodInfo* method);
// 0x4159890

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Right(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd57 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x188);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x188);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Left
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Left (const MethodInfo* method);
// 0x4159900

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Left(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd58 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 400);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 400);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Backward
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Backward (const MethodInfo* method);
// 0x4159970

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Backward(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd59 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x198);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x198);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL1 (const MethodInfo* method);
// 0x41599e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd5a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL2 (const MethodInfo* method);
// 0x4159a50

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd5b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1a8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR1 (const MethodInfo* method);
// 0x4159ac0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd5c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd5c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR2 (const MethodInfo* method);
// 0x4159b30

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd5d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1b8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1 (const MethodInfo* method);
// 0x4159ba0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd5e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd5e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack2 (const MethodInfo* method);
// 0x4159c10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd5f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1c8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack4 (const MethodInfo* method);
// 0x4159c80

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd60 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialArmin
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialArmin (const MethodInfo* method);
// 0x4159cf0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialArmin(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd61 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco0
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco0 (const MethodInfo* method);
// 0x4159d60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco0(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd62 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco1 (const MethodInfo* method);
// 0x4159dd0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd63 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialSasha
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialSasha (const MethodInfo* method);
// 0x4159e40

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialSasha(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd64 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa1 (const MethodInfo* method);
// 0x4159eb0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd65 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1f8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa2 (const MethodInfo* method);
// 0x4159f20

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd66 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x200);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialLevi
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialLevi (const MethodInfo* method);
// 0x4159f90

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialLevi(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd67 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x208);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialPetra
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialPetra (const MethodInfo* method);
// 0x415a000

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialPetra(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd68 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x210);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialJean
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialJean (const MethodInfo* method);
// 0x415a070

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialJean(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd69 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialShifter (const MethodInfo* method);
// 0x415a0e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialShifter(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd6a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteSalute
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteSalute (const MethodInfo* method);
// 0x415a150

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteSalute(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd6b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteNo
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteNo (const MethodInfo* method);
// 0x415a1c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteNo(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd6c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x230);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x230);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteYes
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteYes (const MethodInfo* method);
// 0x415a230

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteYes(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd6d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x238);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x238);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteWave
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteWave (const MethodInfo* method);
// 0x415a2a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteWave(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057acd6e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x240);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ClassName (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x415a310

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acd6f == '\0') {
    il2cpp_runtime_helper_023445d0(&"HumanAnimationEnum");
    g_data_057acd6f = '\x01';
  }
  return "HumanAnimationEnum";
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x415a340

bool_conflict
CustomLogic_CustomLogicHumanAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsStatic (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x415a350

bool_conflict
CustomLogic_CustomLogicHumanAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x415a360

bool_conflict
CustomLogic_CustomLogicHumanAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


