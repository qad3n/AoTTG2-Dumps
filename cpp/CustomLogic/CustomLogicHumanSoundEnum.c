// Type: CustomLogic.CustomLogicHumanSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanSoundEnum_o* CustomLogic_CustomLogicHumanSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4164110

CustomLogic_CustomLogicHumanSoundEnum_o *
CustomLogic_CustomLogicHumanSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicHumanSoundEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ace16 == '\0') {
    pSStack_20 = (System_String_o *)0x416412c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanSoundEnum);
    g_data_057ace16 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41641a7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4164156;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanSoundEnum);
    if (g_data_057acdc7 == '\0') {
      pSStack_20 = (System_String_o *)0x416416e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acdc7 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x416418d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4164197;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicHumanSoundEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41641af;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41641c2;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41641d1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicHumanSoundEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41641e0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41641f0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41641ff;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4164207;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x4164217;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4164223;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicHumanSoundEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x416422e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ace17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Death4");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShotDouble2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape2Var1");
    il2cpp_runtime_helper_023445d0(&"TSLaunch2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape1Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var2");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var1");
    il2cpp_runtime_helper_023445d0(&"ThunderspearLaunch");
    il2cpp_runtime_helper_023445d0(&"GasEnd");
    il2cpp_runtime_helper_023445d0(&"NoGas");
    il2cpp_runtime_helper_023445d0(&"NapeHit");
    il2cpp_runtime_helper_023445d0(&"Footstep1");
    il2cpp_runtime_helper_023445d0(&"GunExplode");
    il2cpp_runtime_helper_023445d0(&"GasStart");
    il2cpp_runtime_helper_023445d0(&"BladeSwing2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape3Var1");
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    il2cpp_runtime_helper_023445d0(&"HookImpact");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot1");
    il2cpp_runtime_helper_023445d0(&"Death3");
    il2cpp_runtime_helper_023445d0(&"Death1");
    il2cpp_runtime_helper_023445d0(&"BladeSwing3");
    il2cpp_runtime_helper_023445d0(&"BladeBreak");
    il2cpp_runtime_helper_023445d0(&"AHSSNape1Var2");
    il2cpp_runtime_helper_023445d0(&"LimbHit");
    il2cpp_runtime_helper_023445d0(&"APGShot1");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var2");
    il2cpp_runtime_helper_023445d0(&"Death5");
    il2cpp_runtime_helper_023445d0(&"HookRetractRight");
    il2cpp_runtime_helper_023445d0(&"BladeSwing1");
    il2cpp_runtime_helper_023445d0(&"OldBladeHit");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"APGShot2");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var1");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShotDouble1");
    il2cpp_runtime_helper_023445d0(&"BladeSwing4");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var3");
    il2cpp_runtime_helper_023445d0(&"CrashLand");
    il2cpp_runtime_helper_023445d0(&"HookImpactLoud");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot4");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"HookRetractLeft");
    il2cpp_runtime_helper_023445d0(&"GunExplodeLoud");
    il2cpp_runtime_helper_023445d0(&"AHSSNape3Var2");
    il2cpp_runtime_helper_023445d0(&"ReelOut");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var3");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var3");
    il2cpp_runtime_helper_023445d0(&"HookLaunch");
    il2cpp_runtime_helper_023445d0(&"GasLoop");
    il2cpp_runtime_helper_023445d0(&"FlareLaunch");
    il2cpp_runtime_helper_023445d0(&"AHSSNape2Var2");
    il2cpp_runtime_helper_023445d0(&"Footstep2");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"APGShot4");
    il2cpp_runtime_helper_023445d0(&"BladeReloadGround");
    il2cpp_runtime_helper_023445d0(&"Death2");
    il2cpp_runtime_helper_023445d0(&"APGShot3");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var3");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var2");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot2");
    il2cpp_runtime_helper_023445d0(&"GunReload");
    il2cpp_runtime_helper_023445d0(&"Checkpoint");
    il2cpp_runtime_helper_023445d0(&"BladeReloadAir");
    il2cpp_runtime_helper_023445d0(&"OldNapeHit");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot3");
    il2cpp_runtime_helper_023445d0(&"WaterSplash");
    il2cpp_runtime_helper_023445d0(&"OldBladeSwing");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var2");
    il2cpp_runtime_helper_023445d0(&"GasBurst");
    il2cpp_runtime_helper_023445d0(&"ReelIn");
    il2cpp_runtime_helper_023445d0(&"OldHookLaunch");
    il2cpp_runtime_helper_023445d0(&"TSLaunch1");
    g_data_057ace17 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x6c198db2) {
    if (uVar1 < 0x40f909fc) {
      if (uVar1 < 0x1bab3e7b) {
        if (uVar1 < 0x16ab369c) {
          if (uVar1 < 0xe1ef32e) {
            if (uVar1 == 0x6d9263a) {
              bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"GasStart",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puVar6 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                puStack_30 = puVar6;
                if (g_data_057ace30 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasStart_g____getter_26);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                  g_data_057ace30 = '\x01';
                }
                pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                System_Func_object__object____ctor();
                pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,
                           (System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                return pCVar9;
              }
            }
            else if (uVar1 == 0xe1ef32d) {
              bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Jump",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puVar6 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                puStack_30 = puVar6;
                if (g_data_057ace36 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_32_0);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                  g_data_057ace36 = '\x01';
                }
                pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                System_Func_object__object____ctor();
                pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,
                           (System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                return pCVar9;
              }
            }
          }
          else if (uVar1 == 0x15ab3508) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Death5",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace41 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death5_g____getter_43_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace41 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x16ab369b) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Death4",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace40 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death4_g____getter_42_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace40 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 < 0x19ab3b55) {
          if (uVar1 == 0x16ed547a) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ReelIn",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace33 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelIn_g____getter_29_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace33 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x19ab3b54) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Death1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace3d == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death1_g____getter_39_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace3d = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x19de4ccf) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"GasEnd",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace32 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasEnd_g____getter_28_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace32 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1a4a6571) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"OldNapeHit",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace1d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldNapeHit_g____getter_7);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace1d = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1bab3e7a) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Death3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace3f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death3_g____getter_41_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace3f = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x2ce556a4) {
        if (uVar1 < 0x1cab400e) {
          if (uVar1 == 0x1be90ac3) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Footstep2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace3c == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep2_g____getter_38);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace3c = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x1cab400d) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Death2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace3e == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death2_g____getter_40_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace3e = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x1ce90c56) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Footstep1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace3b == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep1_g____getter_37);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace3b = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x24424353) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeReloadGround",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace1f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeReloadGround_g____g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace1f = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x2ce556a3) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TSLaunch2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace64 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSLaunch2_g____getter_78);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace64 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x31598f8f) {
        if (uVar1 == 0x2de55836) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TSLaunch1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace63 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSLaunch1_g____getter_77);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace63 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x31598f8e) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"LimbHit",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace1c == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LimbHit_g____getter_6_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace1c = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x322726f4) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeBreak",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar7 = pSStack_28;
          pSVar3 = pSStack_20;
          goto CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak;
        }
      }
      else if (uVar1 == 0x39c5bbac) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"GunReload",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace20 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunReload_g____getter_10);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace20 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x40f909fb) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSGunShot1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace57 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot1_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace57 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x548b671f) {
      if (uVar1 < 0x474347a4) {
        if (uVar1 < 0x42f90d22) {
          if (uVar1 == 0x41f90b8e) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSGunShot2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace58 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot2_g____getter);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace58 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x42f90d21) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSGunShot3",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace59 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot3_g____getter);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace59 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x43f90eb4) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSGunShot4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace5a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot4_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace5a = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x474347a3) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape2Var1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace4e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var1_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace4e = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x49434aca) {
        if (uVar1 == 0x48434936) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape2Var2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace4f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var2_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace4f = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x49434ac9) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape2Var3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace50 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var3_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace50 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x4bbbd0ac) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSGunShotDouble1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace5b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShotDouble1_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x4ebbd565) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSGunShotDouble2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace5c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShotDouble2_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5c = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x548b671e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace46 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Switchback_g____getter_4);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace46 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x5c39b690) {
      if (uVar1 < 0x5722e904) {
        if (uVar1 == 0x55c3fbee) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HookRetractLeft",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace2c == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRetractLeft_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace2c = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x5722e903) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSNape2Var2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace60 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape2Var2_g____gette);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace60 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x5822ea96) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSNape2Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace5f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape2Var1_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5f = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x5b39b4fc) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape4Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace55 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var2_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace55 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x5c39b68f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape4Var3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace56 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var3_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace56 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x6082b447) {
      if (uVar1 == 0x5e39b9b5) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape4Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace54 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var1_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace54 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x6082b446) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeHit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace19 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeHit_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace19 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x6083d558) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"GasBurst",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace29 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasBurst_g____getter_19);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace29 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x66052020) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"NapeHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace1b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NapeHit_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace1b = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
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
        if (g_data_057ace39 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_35_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace39 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xa114d214) {
    if (uVar1 < 0x9460855f) {
      if (uVar1 < 0x733d2586) {
        if (uVar1 < 0x703d20cd) {
          if (uVar1 == 0x6d3d1c13) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeSwing4",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace24 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing4_g____getter);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace24 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x703d20cc) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeSwing1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057ace21 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing1_g____getter);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace21 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x723d23f2) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeSwing3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace23 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing3_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace23 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x733d2585) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeSwing2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace22 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing2_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace22 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x8cd14bae) {
        if (uVar1 == 0x8cd14bad) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HookLaunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace2a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookLaunch_g____getter_2);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace2a = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x799ccc7d) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ThunderspearLaunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace28 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ThunderspearLaunch_g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace28 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x8eeafb7d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"CrashLand",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace35 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CrashLand_g____getter_31);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace35 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x936083cb) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSNape1Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace5d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape1Var1_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5d = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x9460855e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSNape1Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace5e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape1Var2_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5e = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x9cadf10f) {
      if (uVar1 < 0x9a1b4679) {
        if (uVar1 == 0x99b7f232) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"GunExplodeLoud",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace44 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplodeLoud_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace44 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x9a1b4678) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape3Var1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace51 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var1_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace51 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x9aadede8) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"APGShot1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace47 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot1_g____getter_49);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace47 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x9c1b499e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape3Var3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace53 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var3_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace53 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x9cadf10e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"APGShot3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace49 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot3_g____getter_51);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace49 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x9dadf2a2) {
      if (uVar1 == 0x9d1b4b31) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape3Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace52 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var2_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace52 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x9dadf2a1) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"APGShot2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace48 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot2_g____getter_50);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace48 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x9f3e662c) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeReloadAir",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace1e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeReloadAir_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace1e = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x9fadf5c7) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"APGShot4",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace4a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot4_g____getter_52);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace4a = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xa114d213) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ReelOut",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace34 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelOut_g____getter_30_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace34 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xe2620ba0) {
    if (uVar1 < 0xcd507f81) {
      if (uVar1 < 0xbd9f8bfb) {
        if (uVar1 == 0xbb51b893) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"NoGas",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace38 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NoGas_g____getter_34_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace38 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0xbd9f8bfa) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"OldHookLaunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057ace2b == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldHookLaunch_g____gette);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace2b = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0xc30f2900) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"GasLoop",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace31 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasLoop_g____getter_27_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace31 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xcb990166) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"GunExplode",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace43 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplode_g____getter_4);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace43 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xcd507f80) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSNape3Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace62 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape3Var2_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace62 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0xd9202fa7) {
      if (uVar1 == 0xd0508439) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AHSSNape3Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace61 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape3Var1_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace61 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xd9202fa6) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"OldBladeSwing",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace25 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldBladeSwing_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace25 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xdb968bd5) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"OldBladeHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace1a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldBladeHit_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace1a = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xdbdf1f18) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HookImpactLoud",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace2f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookImpactLoud_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace2f = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xe2620b9f) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Checkpoint",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace42 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Checkpoint_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace42 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xf5697c89) {
    if (uVar1 < 0xee1682bd) {
      if (uVar1 == 0xea62a4c3) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HookRetractRight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace2d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRetractRight_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace2d = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xee1682bc) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Land",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ace37 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_33_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace37 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xf3dfd300) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"HookImpact",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace2e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookImpact_g____getter_2);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace2e = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
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
        if (g_data_057ace26 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_16_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace26 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xf5697c88) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"FlareLaunch",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace27 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlareLaunch_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace27 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xfbb7b789) {
    if (uVar1 == 0xf7aaccdf) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"WaterSplash",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace45 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WaterSplash_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace45 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xfbb7b788) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape1Var3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ace4d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var3_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace4d = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 == 0xfcb7b91b) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape1Var2",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ace4c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var2_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace4c = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xfdb7baae) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeNape1Var1",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ace4b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var1_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace4b = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
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
      if (g_data_057ace3a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_36_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace3a = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return pCVar9;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHumanSoundEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ace18 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4165e59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeBreak_g____getter_2);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4165e65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4165e71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4165e7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace18 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4165e93;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4165eac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4165ebb;
  pCVar9 = (CustomLogic_CustomLogicHumanSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4165ed5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4164230

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ace17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Death4");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShotDouble2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape2Var1");
    il2cpp_runtime_helper_023445d0(&"TSLaunch2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape1Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var2");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var1");
    il2cpp_runtime_helper_023445d0(&"ThunderspearLaunch");
    il2cpp_runtime_helper_023445d0(&"GasEnd");
    il2cpp_runtime_helper_023445d0(&"NoGas");
    il2cpp_runtime_helper_023445d0(&"NapeHit");
    il2cpp_runtime_helper_023445d0(&"Footstep1");
    il2cpp_runtime_helper_023445d0(&"GunExplode");
    il2cpp_runtime_helper_023445d0(&"GasStart");
    il2cpp_runtime_helper_023445d0(&"BladeSwing2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape3Var1");
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    il2cpp_runtime_helper_023445d0(&"HookImpact");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot1");
    il2cpp_runtime_helper_023445d0(&"Death3");
    il2cpp_runtime_helper_023445d0(&"Death1");
    il2cpp_runtime_helper_023445d0(&"BladeSwing3");
    il2cpp_runtime_helper_023445d0(&"BladeBreak");
    il2cpp_runtime_helper_023445d0(&"AHSSNape1Var2");
    il2cpp_runtime_helper_023445d0(&"LimbHit");
    il2cpp_runtime_helper_023445d0(&"APGShot1");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var2");
    il2cpp_runtime_helper_023445d0(&"Death5");
    il2cpp_runtime_helper_023445d0(&"HookRetractRight");
    il2cpp_runtime_helper_023445d0(&"BladeSwing1");
    il2cpp_runtime_helper_023445d0(&"OldBladeHit");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"APGShot2");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var1");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShotDouble1");
    il2cpp_runtime_helper_023445d0(&"BladeSwing4");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var3");
    il2cpp_runtime_helper_023445d0(&"CrashLand");
    il2cpp_runtime_helper_023445d0(&"HookImpactLoud");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot4");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"HookRetractLeft");
    il2cpp_runtime_helper_023445d0(&"GunExplodeLoud");
    il2cpp_runtime_helper_023445d0(&"AHSSNape3Var2");
    il2cpp_runtime_helper_023445d0(&"ReelOut");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var3");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var3");
    il2cpp_runtime_helper_023445d0(&"HookLaunch");
    il2cpp_runtime_helper_023445d0(&"GasLoop");
    il2cpp_runtime_helper_023445d0(&"FlareLaunch");
    il2cpp_runtime_helper_023445d0(&"AHSSNape2Var2");
    il2cpp_runtime_helper_023445d0(&"Footstep2");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"APGShot4");
    il2cpp_runtime_helper_023445d0(&"BladeReloadGround");
    il2cpp_runtime_helper_023445d0(&"Death2");
    il2cpp_runtime_helper_023445d0(&"APGShot3");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var3");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var2");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot2");
    il2cpp_runtime_helper_023445d0(&"GunReload");
    il2cpp_runtime_helper_023445d0(&"Checkpoint");
    il2cpp_runtime_helper_023445d0(&"BladeReloadAir");
    il2cpp_runtime_helper_023445d0(&"OldNapeHit");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot3");
    il2cpp_runtime_helper_023445d0(&"WaterSplash");
    il2cpp_runtime_helper_023445d0(&"OldBladeSwing");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var2");
    il2cpp_runtime_helper_023445d0(&"GasBurst");
    il2cpp_runtime_helper_023445d0(&"ReelIn");
    il2cpp_runtime_helper_023445d0(&"OldHookLaunch");
    il2cpp_runtime_helper_023445d0(&"TSLaunch1");
    g_data_057ace17 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x6c198db2) {
    if (uVar1 < 0x40f909fc) {
      if (uVar1 < 0x1bab3e7b) {
        if (uVar1 < 0x16ab369c) {
          if (uVar1 < 0xe1ef32e) {
            if (uVar1 == 0x6d9263a) {
              bVar2 = System_String__op_Equality(name,"GasStart",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                puStack_18 = &TypeInfo_Bindings;
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
                }
                if (g_data_057ace30 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasStart_g____getter_26);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                  g_data_057ace30 = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                System_Func_object__object____ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                CustomLogic_CLPropertyBinding_object____ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
            else if ((uVar1 == 0xe1ef32d) &&
                    (bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0),
                    (char)bVar2 != '\0')) {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ace36 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_32_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace36 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x15ab3508) {
            bVar2 = System_String__op_Equality(name,"Death5",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ace41 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death5_g____getter_43_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace41 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x16ab369b) &&
                  (bVar2 = System_String__op_Equality(name,"Death4",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace40 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death4_g____getter_42_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace40 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 < 0x19ab3b55) {
          if (uVar1 == 0x16ed547a) {
            bVar2 = System_String__op_Equality(name,"ReelIn",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ace33 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelIn_g____getter_29_0);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace33 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x19ab3b54) &&
                  (bVar2 = System_String__op_Equality(name,"Death1",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace3d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death1_g____getter_39_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace3d = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x19de4ccf) {
          bVar2 = System_String__op_Equality(name,"GasEnd",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace32 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasEnd_g____getter_28_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace32 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1a4a6571) {
          bVar2 = System_String__op_Equality(name,"OldNapeHit",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace1d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldNapeHit_g____getter_7);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace1d = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x1bab3e7a) &&
                (bVar2 = System_String__op_Equality(name,"Death3",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace3f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death3_g____getter_41_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace3f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x2ce556a4) {
        if (uVar1 < 0x1cab400e) {
          if (uVar1 == 0x1be90ac3) {
            bVar2 = System_String__op_Equality(name,"Footstep2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ace3c == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep2_g____getter_38);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace3c = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x1cab400d) &&
                  (bVar2 = System_String__op_Equality(name,"Death2",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace3e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death2_g____getter_40_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace3e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1ce90c56) {
          bVar2 = System_String__op_Equality(name,"Footstep1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace3b == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep1_g____getter_37);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace3b = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x24424353) {
          bVar2 = System_String__op_Equality(name,"BladeReloadGround",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace1f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeReloadGround_g____g);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace1f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x2ce556a3) &&
                (bVar2 = System_String__op_Equality(name,"TSLaunch2",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace64 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSLaunch2_g____getter_78);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace64 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x31598f8f) {
        if (uVar1 == 0x2de55836) {
          bVar2 = System_String__op_Equality(name,"TSLaunch1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace63 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSLaunch1_g____getter_77);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace63 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x31598f8e) &&
                (bVar2 = System_String__op_Equality(name,"LimbHit",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace1c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LimbHit_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace1c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x322726f4) {
        bVar2 = System_String__op_Equality(name,"BladeBreak",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar4 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak;
        }
      }
      else if (uVar1 == 0x39c5bbac) {
        bVar2 = System_String__op_Equality(name,"GunReload",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace20 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunReload_g____getter_10);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace20 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x40f909fb) &&
              (bVar2 = System_String__op_Equality(name,"AHSSGunShot1",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace57 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot1_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace57 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x548b671f) {
      if (uVar1 < 0x474347a4) {
        if (uVar1 < 0x42f90d22) {
          if (uVar1 == 0x41f90b8e) {
            bVar2 = System_String__op_Equality(name,"AHSSGunShot2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ace58 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot2_g____getter);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace58 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x42f90d21) &&
                  (bVar2 = System_String__op_Equality(name,"AHSSGunShot3",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace59 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot3_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace59 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x43f90eb4) {
          bVar2 = System_String__op_Equality(name,"AHSSGunShot4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace5a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot4_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace5a = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x474347a3) &&
                (bVar2 = System_String__op_Equality(name,"BladeNape2Var1",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace4e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var1_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace4e = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x49434aca) {
        if (uVar1 == 0x48434936) {
          bVar2 = System_String__op_Equality(name,"BladeNape2Var2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace4f == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var2_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace4f = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x49434ac9) &&
                (bVar2 = System_String__op_Equality(name,"BladeNape2Var3",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace50 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var3_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace50 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x4bbbd0ac) {
        bVar2 = System_String__op_Equality(name,"AHSSGunShotDouble1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace5b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShotDouble1_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x4ebbd565) {
        bVar2 = System_String__op_Equality(name,"AHSSGunShotDouble2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace5c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShotDouble2_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x548b671e) &&
              (bVar2 = System_String__op_Equality(name,"Switchback",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace46 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Switchback_g____getter_4);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace46 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x5c39b690) {
      if (uVar1 < 0x5722e904) {
        if (uVar1 == 0x55c3fbee) {
          bVar2 = System_String__op_Equality(name,"HookRetractLeft",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace2c == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRetractLeft_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace2c = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x5722e903) &&
                (bVar2 = System_String__op_Equality(name,"AHSSNape2Var2",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace60 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape2Var2_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace60 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5822ea96) {
        bVar2 = System_String__op_Equality(name,"AHSSNape2Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace5f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape2Var1_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5b39b4fc) {
        bVar2 = System_String__op_Equality(name,"BladeNape4Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace55 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var2_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace55 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x5c39b68f) &&
              (bVar2 = System_String__op_Equality(name,"BladeNape4Var3",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace56 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var3_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace56 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x6082b447) {
      if (uVar1 == 0x5e39b9b5) {
        bVar2 = System_String__op_Equality(name,"BladeNape4Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace54 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var1_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace54 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x6082b446) &&
              (bVar2 = System_String__op_Equality(name,"BladeHit",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace19 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeHit_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace19 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x6083d558) {
      bVar2 = System_String__op_Equality(name,"GasBurst",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace29 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasBurst_g____getter_19);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace29 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x66052020) {
      bVar2 = System_String__op_Equality(name,"NapeHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace1b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NapeHit_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace1b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x6c198db1) &&
            (bVar2 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace39 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_35_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace39 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xa114d214) {
    if (uVar1 < 0x9460855f) {
      if (uVar1 < 0x733d2586) {
        if (uVar1 < 0x703d20cd) {
          if (uVar1 == 0x6d3d1c13) {
            bVar2 = System_String__op_Equality(name,"BladeSwing4",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ace24 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing4_g____getter);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
                g_data_057ace24 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x703d20cc) &&
                  (bVar2 = System_String__op_Equality(name,"BladeSwing1",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace21 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing1_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace21 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x723d23f2) {
          bVar2 = System_String__op_Equality(name,"BladeSwing3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace23 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing3_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace23 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x733d2585) &&
                (bVar2 = System_String__op_Equality(name,"BladeSwing2",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace22 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing2_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace22 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x8cd14bae) {
        if (uVar1 == 0x8cd14bad) {
          bVar2 = System_String__op_Equality(name,"HookLaunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace2a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookLaunch_g____getter_2);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace2a = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x799ccc7d) &&
                (bVar2 = System_String__op_Equality(name,"ThunderspearLaunch",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace28 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ThunderspearLaunch_g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace28 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x8eeafb7d) {
        bVar2 = System_String__op_Equality(name,"CrashLand",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace35 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CrashLand_g____getter_31);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace35 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x936083cb) {
        bVar2 = System_String__op_Equality(name,"AHSSNape1Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace5d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape1Var1_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace5d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x9460855e) &&
              (bVar2 = System_String__op_Equality(name,"AHSSNape1Var2",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace5e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape1Var2_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace5e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x9cadf10f) {
      if (uVar1 < 0x9a1b4679) {
        if (uVar1 == 0x99b7f232) {
          bVar2 = System_String__op_Equality(name,"GunExplodeLoud",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace44 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplodeLoud_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace44 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x9a1b4678) &&
                (bVar2 = System_String__op_Equality(name,"BladeNape3Var1",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace51 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var1_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace51 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9aadede8) {
        bVar2 = System_String__op_Equality(name,"APGShot1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace47 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot1_g____getter_49);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace47 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9c1b499e) {
        bVar2 = System_String__op_Equality(name,"BladeNape3Var3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace53 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var3_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace53 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x9cadf10e) &&
              (bVar2 = System_String__op_Equality(name,"APGShot3",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace49 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot3_g____getter_51);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace49 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x9dadf2a2) {
      if (uVar1 == 0x9d1b4b31) {
        bVar2 = System_String__op_Equality(name,"BladeNape3Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace52 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var2_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace52 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x9dadf2a1) &&
              (bVar2 = System_String__op_Equality(name,"APGShot2",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace48 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot2_g____getter_50);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace48 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9f3e662c) {
      bVar2 = System_String__op_Equality(name,"BladeReloadAir",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace1e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeReloadAir_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace1e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9fadf5c7) {
      bVar2 = System_String__op_Equality(name,"APGShot4",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace4a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot4_g____getter_52);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace4a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xa114d213) &&
            (bVar2 = System_String__op_Equality(name,"ReelOut",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace34 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelOut_g____getter_30_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace34 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xe2620ba0) {
    if (uVar1 < 0xcd507f81) {
      if (uVar1 < 0xbd9f8bfb) {
        if (uVar1 == 0xbb51b893) {
          bVar2 = System_String__op_Equality(name,"NoGas",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace38 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NoGas_g____getter_34_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
              g_data_057ace38 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0xbd9f8bfa) &&
                (bVar2 = System_String__op_Equality(name,"OldHookLaunch",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace2b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldHookLaunch_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace2b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xc30f2900) {
        bVar2 = System_String__op_Equality(name,"GasLoop",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace31 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasLoop_g____getter_27_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace31 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xcb990166) {
        bVar2 = System_String__op_Equality(name,"GunExplode",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace43 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplode_g____getter_4);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace43 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xcd507f80) &&
              (bVar2 = System_String__op_Equality(name,"AHSSNape3Var2",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace62 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape3Var2_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace62 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0xd9202fa7) {
      if (uVar1 == 0xd0508439) {
        bVar2 = System_String__op_Equality(name,"AHSSNape3Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace61 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape3Var1_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace61 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xd9202fa6) &&
              (bVar2 = System_String__op_Equality(name,"OldBladeSwing",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace25 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldBladeSwing_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace25 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xdb968bd5) {
      bVar2 = System_String__op_Equality(name,"OldBladeHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace1a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldBladeHit_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace1a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xdbdf1f18) {
      bVar2 = System_String__op_Equality(name,"HookImpactLoud",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace2f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookImpactLoud_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace2f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xe2620b9f) &&
            (bVar2 = System_String__op_Equality(name,"Checkpoint",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace42 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Checkpoint_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace42 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xf5697c89) {
    if (uVar1 < 0xee1682bd) {
      if (uVar1 == 0xea62a4c3) {
        bVar2 = System_String__op_Equality(name,"HookRetractRight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace2d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRetractRight_g____ge);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
            g_data_057ace2d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xee1682bc) &&
              (bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace37 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_33_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace37 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xf3dfd300) {
      bVar2 = System_String__op_Equality(name,"HookImpact",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace2e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookImpact_g____getter_2);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace2e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
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
        if (g_data_057ace26 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_16_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace26 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xf5697c88) &&
            (bVar2 = System_String__op_Equality(name,"FlareLaunch",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace27 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlareLaunch_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace27 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xfbb7b789) {
    if (uVar1 == 0xf7aaccdf) {
      bVar2 = System_String__op_Equality(name,"WaterSplash",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace45 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WaterSplash_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
          g_data_057ace45 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xfbb7b788) &&
            (bVar2 = System_String__op_Equality(name,"BladeNape1Var3",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace4d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var3_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace4d = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xfcb7b91b) {
    bVar2 = System_String__op_Equality(name,"BladeNape1Var2",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace4c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var2_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace4c = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xfdb7baae) {
    bVar2 = System_String__op_Equality(name,"BladeNape1Var1",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace4b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var1_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
        g_data_057ace4b = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xffc7c086) &&
          (bVar2 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ace3a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_36_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
      g_data_057ace3a = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHumanSoundEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ace18 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4165e59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeBreak_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4165e65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4165e71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4165e7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace18 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4165e93;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4165eac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4165ebb;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4165ed5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeBreak
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak (const MethodInfo* method);
// 0x4165e40

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace18 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeBreak_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace18 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit (const MethodInfo* method);
// 0x4165ee0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace19 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeHit_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace19 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit (const MethodInfo* method);
// 0x4165f80

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldBladeHit_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace1a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NapeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit (const MethodInfo* method);
// 0x4166020

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NapeHit_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace1b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__LimbHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit (const MethodInfo* method);
// 0x41660c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LimbHit_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace1c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldNapeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit (const MethodInfo* method);
// 0x4166160

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace1d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldNapeHit_g____getter_7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace1d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir (const MethodInfo* method);
// 0x4166200

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeReloadAir_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace1e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround (const MethodInfo* method);
// 0x41662a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace1f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeReloadGround_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace1f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunReload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload (const MethodInfo* method);
// 0x4166340

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunReload_g____getter_10);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace20 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1 (const MethodInfo* method);
// 0x41663e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing1_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace21 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2 (const MethodInfo* method);
// 0x4166480

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace22 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing2_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace22 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3 (const MethodInfo* method);
// 0x4166520

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing3_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace23 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4 (const MethodInfo* method);
// 0x41665c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeSwing4_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace24 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing (const MethodInfo* method);
// 0x4166660

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldBladeSwing_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace25 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x4166700

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_16_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace26 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__FlareLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch (const MethodInfo* method);
// 0x41667a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace27 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlareLaunch_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace27 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ThunderspearLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch (const MethodInfo* method);
// 0x4166840

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace28 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ThunderspearLaunch_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace28 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasBurst
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst (const MethodInfo* method);
// 0x41668e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace29 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasBurst_g____getter_19);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace29 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch (const MethodInfo* method);
// 0x4166980

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace2a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookLaunch_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace2a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldHookLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch (const MethodInfo* method);
// 0x4166a20

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OldHookLaunch_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace2b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft (const MethodInfo* method);
// 0x4166ac0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRetractLeft_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace2c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight (const MethodInfo* method);
// 0x4166b60

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRetractRight_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace2d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpact
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact (const MethodInfo* method);
// 0x4166c00

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookImpact_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace2e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpactLoud
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud (const MethodInfo* method);
// 0x4166ca0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace2f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookImpactLoud_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace2f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart (const MethodInfo* method);
// 0x4166d40

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasStart_g____getter_26);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace30 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasLoop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop (const MethodInfo* method);
// 0x4166de0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace31 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasLoop_g____getter_27_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace31 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd (const MethodInfo* method);
// 0x4166e80

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace32 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasEnd_g____getter_28_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace32 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn (const MethodInfo* method);
// 0x4166f20

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace33 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelIn_g____getter_29_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace33 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut (const MethodInfo* method);
// 0x4166fc0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace34 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelOut_g____getter_30_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace34 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__CrashLand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand (const MethodInfo* method);
// 0x4167060

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace35 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CrashLand_g____getter_31);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace35 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x4167100

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace36 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_32_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace36 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x41671a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace37 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_33_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace37 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NoGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas (const MethodInfo* method);
// 0x4167240

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace38 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NoGas_g____getter_34_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace38 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x41672e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace39 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_35_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace39 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x4167380

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace3a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_36_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace3a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1 (const MethodInfo* method);
// 0x4167420

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace3b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep1_g____getter_37);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace3b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2 (const MethodInfo* method);
// 0x41674c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace3c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Footstep2_g____getter_38);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace3c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1 (const MethodInfo* method);
// 0x4167560

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace3d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death1_g____getter_39_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace3d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2 (const MethodInfo* method);
// 0x4167600

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace3e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death2_g____getter_40_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace3e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3 (const MethodInfo* method);
// 0x41676a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace3f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death3_g____getter_41_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace3f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4 (const MethodInfo* method);
// 0x4167740

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace40 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death4_g____getter_42_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace40 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5 (const MethodInfo* method);
// 0x41677e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Death5_g____getter_43_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace41 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Checkpoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint (const MethodInfo* method);
// 0x4167880

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace42 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Checkpoint_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace42 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode (const MethodInfo* method);
// 0x4167920

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace43 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplode_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace43 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplodeLoud
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud (const MethodInfo* method);
// 0x41679c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace44 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplodeLoud_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace44 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__WaterSplash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash (const MethodInfo* method);
// 0x4167a60

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace45 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WaterSplash_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace45 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Switchback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback (const MethodInfo* method);
// 0x4167b00

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace46 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Switchback_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace46 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1 (const MethodInfo* method);
// 0x4167ba0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace47 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot1_g____getter_49);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace47 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2 (const MethodInfo* method);
// 0x4167c40

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot2_g____getter_50);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace48 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3 (const MethodInfo* method);
// 0x4167ce0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace49 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot3_g____getter_51);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace49 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4 (const MethodInfo* method);
// 0x4167d80

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace4a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGShot4_g____getter_52);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace4a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1 (const MethodInfo* method);
// 0x4167e20

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace4b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var1_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace4b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2 (const MethodInfo* method);
// 0x4167ec0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace4c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var2_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace4c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3 (const MethodInfo* method);
// 0x4167f60

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace4d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape1Var3_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace4d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1 (const MethodInfo* method);
// 0x4168000

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var1_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace4e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2 (const MethodInfo* method);
// 0x41680a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var2_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace4f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3 (const MethodInfo* method);
// 0x4168140

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace50 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape2Var3_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace50 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1 (const MethodInfo* method);
// 0x41681e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var1_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace51 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2 (const MethodInfo* method);
// 0x4168280

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var2_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace52 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3 (const MethodInfo* method);
// 0x4168320

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace53 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape3Var3_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace53 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1 (const MethodInfo* method);
// 0x41683c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace54 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var1_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace54 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2 (const MethodInfo* method);
// 0x4168460

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace55 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var2_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace55 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3 (const MethodInfo* method);
// 0x4168500

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeNape4Var3_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace56 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1 (const MethodInfo* method);
// 0x41685a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot1_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace57 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2 (const MethodInfo* method);
// 0x4168640

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot2_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace58 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3 (const MethodInfo* method);
// 0x41686e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot3_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace59 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4 (const MethodInfo* method);
// 0x4168780

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace5a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShot4_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace5a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1 (const MethodInfo* method);
// 0x4168820

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace5b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShotDouble1_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace5b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2 (const MethodInfo* method);
// 0x41688c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace5c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSGunShotDouble2_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace5c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1 (const MethodInfo* method);
// 0x4168960

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace5d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape1Var1_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace5d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2 (const MethodInfo* method);
// 0x4168a00

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape1Var2_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace5e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1 (const MethodInfo* method);
// 0x4168aa0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace5f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape2Var1_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace5f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2 (const MethodInfo* method);
// 0x4168b40

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace60 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape2Var2_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace60 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1 (const MethodInfo* method);
// 0x4168be0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace61 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape3Var1_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace61 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2 (const MethodInfo* method);
// 0x4168c80

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace62 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSSNape3Var2_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace62 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1 (const MethodInfo* method);
// 0x4168d20

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace63 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSLaunch1_g____getter_77);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace63 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2 (const MethodInfo* method);
// 0x4168dc0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (g_data_057ace64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TSLaunch2_g____getter_78);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanSoundEnum_object);
    g_data_057ace64 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x4168e60

void CustomLogic_CustomLogicHumanSoundEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ace65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Death4");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShotDouble2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape2Var1");
    il2cpp_runtime_helper_023445d0(&"TSLaunch2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape1Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var2");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var1");
    il2cpp_runtime_helper_023445d0(&"ThunderspearLaunch");
    il2cpp_runtime_helper_023445d0(&"GasEnd");
    il2cpp_runtime_helper_023445d0(&"NoGas");
    il2cpp_runtime_helper_023445d0(&"NapeHit");
    il2cpp_runtime_helper_023445d0(&"Footstep1");
    il2cpp_runtime_helper_023445d0(&"GunExplode");
    il2cpp_runtime_helper_023445d0(&"GasStart");
    il2cpp_runtime_helper_023445d0(&"BladeSwing2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape3Var1");
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    il2cpp_runtime_helper_023445d0(&"HookImpact");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot1");
    il2cpp_runtime_helper_023445d0(&"Death3");
    il2cpp_runtime_helper_023445d0(&"Death1");
    il2cpp_runtime_helper_023445d0(&"BladeSwing3");
    il2cpp_runtime_helper_023445d0(&"BladeBreak");
    il2cpp_runtime_helper_023445d0(&"AHSSNape1Var2");
    il2cpp_runtime_helper_023445d0(&"LimbHit");
    il2cpp_runtime_helper_023445d0(&"APGShot1");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var2");
    il2cpp_runtime_helper_023445d0(&"Death5");
    il2cpp_runtime_helper_023445d0(&"HookRetractRight");
    il2cpp_runtime_helper_023445d0(&"BladeSwing1");
    il2cpp_runtime_helper_023445d0(&"OldBladeHit");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"APGShot2");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var1");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShotDouble1");
    il2cpp_runtime_helper_023445d0(&"BladeSwing4");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var3");
    il2cpp_runtime_helper_023445d0(&"CrashLand");
    il2cpp_runtime_helper_023445d0(&"HookImpactLoud");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot4");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"HookRetractLeft");
    il2cpp_runtime_helper_023445d0(&"GunExplodeLoud");
    il2cpp_runtime_helper_023445d0(&"AHSSNape3Var2");
    il2cpp_runtime_helper_023445d0(&"ReelOut");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var3");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var3");
    il2cpp_runtime_helper_023445d0(&"HookLaunch");
    il2cpp_runtime_helper_023445d0(&"GasLoop");
    il2cpp_runtime_helper_023445d0(&"FlareLaunch");
    il2cpp_runtime_helper_023445d0(&"AHSSNape2Var2");
    il2cpp_runtime_helper_023445d0(&"Footstep2");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"APGShot4");
    il2cpp_runtime_helper_023445d0(&"BladeReloadGround");
    il2cpp_runtime_helper_023445d0(&"Death2");
    il2cpp_runtime_helper_023445d0(&"APGShot3");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var3");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var2");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot2");
    il2cpp_runtime_helper_023445d0(&"GunReload");
    il2cpp_runtime_helper_023445d0(&"Checkpoint");
    il2cpp_runtime_helper_023445d0(&"BladeReloadAir");
    il2cpp_runtime_helper_023445d0(&"OldNapeHit");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot3");
    il2cpp_runtime_helper_023445d0(&"WaterSplash");
    il2cpp_runtime_helper_023445d0(&"OldBladeSwing");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var2");
    il2cpp_runtime_helper_023445d0(&"GasBurst");
    il2cpp_runtime_helper_023445d0(&"ReelIn");
    il2cpp_runtime_helper_023445d0(&"OldHookLaunch");
    il2cpp_runtime_helper_023445d0(&"TSLaunch1");
    g_data_057ace65 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"BladeBreak",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OldBladeHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"NapeHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"LimbHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OldNapeHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeReloadAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeReloadGround",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GunReload",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeSwing1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeSwing2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeSwing3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeSwing4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OldBladeSwing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"FlareLaunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ThunderspearLaunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GasBurst",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HookLaunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OldHookLaunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HookRetractLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HookRetractRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HookImpact",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HookImpactLoud",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GasStart",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GasLoop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GasEnd",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ReelIn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ReelOut",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"CrashLand",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"NoGas",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Refill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Slide",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Footstep1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Footstep2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Death1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Death2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Death3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Death4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Death5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Checkpoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GunExplode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GunExplodeLoud",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"WaterSplash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Switchback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"APGShot1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"APGShot2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"APGShot3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"APGShot4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape1Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape1Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape1Var3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape2Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape2Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape2Var3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape3Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape3Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape3Var3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape4Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape4Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeNape4Var3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSGunShot1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSGunShot2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSGunShot3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSGunShot4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSGunShotDouble1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSGunShotDouble2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSNape1Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSNape1Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSNape2Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSNape2Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSNape3Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSSNape3Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TSLaunch1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TSLaunch2",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad05c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad05c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeBreak>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeBreak_g____getter_2_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169900

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeBreak_g____getter_2_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad05c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad05c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeHit>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeHit_g____getter_3_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169970

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeHit_g____getter_3_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad05d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad05d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeHit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeHit_g____getter_4_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x41699e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeHit_g____getter_4_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad05e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad05e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NapeHit>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NapeHit_g____getter_5_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169a50

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NapeHit_g____getter_5_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad05f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad05f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__LimbHit>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__LimbHit_g____getter_6_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169ac0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__LimbHit_g____getter_6_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad060 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad060 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldNapeHit>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldNapeHit_g____getter_7_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169b30

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldNapeHit_g____getter_7_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad061 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad061 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadAir>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadAir_g____getter_8_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169ba0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadAir_g____getter_8_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad062 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad062 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadGround>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadGround_g____getter_9_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169c10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadGround_g____getter_9_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad063 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad063 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunReload>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunReload_g____getter_10_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169c80

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunReload_g____getter_10_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad064 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing1_g____getter_11_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169cf0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing1_g____getter_11_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad065 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing2_g____getter_12_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169d60

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing2_g____getter_12_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad066 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad066 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing3>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing3_g____getter_13_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169dd0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing3_g____getter_13_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad067 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad067 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing4>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing4_g____getter_14_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169e40

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing4_g____getter_14_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad068 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad068 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeSwing>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeSwing_g____getter_15_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169eb0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeSwing_g____getter_15_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad069 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad069 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169f20

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad06a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad06a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__FlareLaunch>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__FlareLaunch_g____getter_17_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x4169f90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__FlareLaunch_g____getter_17_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad06b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad06b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ThunderspearLaunch>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ThunderspearLaunch_g____getter_18_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a000

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ThunderspearLaunch_g____getter_18_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad06c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad06c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_19_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a070

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_19_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad06d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad06d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookLaunch>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookLaunch_g____getter_20_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a0e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookLaunch_g____getter_20_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad06e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad06e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldHookLaunch>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldHookLaunch_g____getter_21_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a150

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldHookLaunch_g____getter_21_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad06f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad06f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractLeft>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractLeft_g____getter_22_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a1c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractLeft_g____getter_22_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad070 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad070 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractRight>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractRight_g____getter_23_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a230

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractRight_g____getter_23_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad071 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad071 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpact>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpact_g____getter_24_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a2a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpact_g____getter_24_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad072 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad072 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpactLoud>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpactLoud_g____getter_25_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a310

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpactLoud_g____getter_25_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad073 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad073 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasStart>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasStart_g____getter_26_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a380

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasStart_g____getter_26_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad074 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad074 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasLoop>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasLoop_g____getter_27_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a3f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasLoop_g____getter_27_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad075 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad075 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 200);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasEnd>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasEnd_g____getter_28_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a460

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasEnd_g____getter_28_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad076 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad076 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_29_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a4d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_29_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad077 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad077 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_30_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a540

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_30_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad078 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__CrashLand>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__CrashLand_g____getter_31_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a5b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__CrashLand_g____getter_31_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad079 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_32_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a620

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_32_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad07a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad07a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Land_g____getter_33_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a690

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Land_g____getter_33_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad07b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad07b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NoGas>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NoGas_g____getter_34_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a700

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NoGas_g____getter_34_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad07c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad07c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_35_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a770

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_35_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad07d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad07d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_36_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a7e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_36_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad07e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad07e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x110);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_37_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a850

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_37_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad07f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad07f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x118);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_38_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a8c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_38_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad080 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad080 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x120);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death1>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death1_g____getter_39_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a930

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death1_g____getter_39_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad081 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad081 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x128);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death2>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death2_g____getter_40_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416a9a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death2_g____getter_40_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad082 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad082 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x130);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death3>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death3_g____getter_41_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416aa10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death3_g____getter_41_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad083 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad083 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x138);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death4>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death4_g____getter_42_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416aa80

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death4_g____getter_42_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad084 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad084 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x140);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death5>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death5_g____getter_43_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416aaf0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death5_g____getter_43_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad085 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad085 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x148);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Checkpoint>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Checkpoint_g____getter_44_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416ab60

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Checkpoint_g____getter_44_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad086 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad086 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x150);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_45_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416abd0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_45_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad087 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad087 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x158);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x158);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplodeLoud>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplodeLoud_g____getter_46_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416ac40

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplodeLoud_g____getter_46_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad088 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad088 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x160);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x160);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__WaterSplash>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__WaterSplash_g____getter_47_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416acb0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__WaterSplash_g____getter_47_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad089 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad089 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x168);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x168);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_48_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416ad20

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_48_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad08a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad08a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot1>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot1_g____getter_49_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416ad90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot1_g____getter_49_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad08b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad08b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot2>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot2_g____getter_50_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416ae00

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot2_g____getter_50_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad08c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad08c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot3>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot3_g____getter_51_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416ae70

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot3_g____getter_51_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad08d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad08d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot4>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot4_g____getter_52_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416aee0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot4_g____getter_52_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad08e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad08e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var1>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var1_g____getter_53_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416af50

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var1_g____getter_53_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad08f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad08f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var2>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var2_g____getter_54_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416afc0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var2_g____getter_54_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad090 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad090 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var3>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var3_g____getter_55_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b030

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var3_g____getter_55_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad091 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad091 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var1>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var1_g____getter_56_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b0a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var1_g____getter_56_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad092 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad092 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var2>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var2_g____getter_57_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b110

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var2_g____getter_57_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad093 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad093 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var3>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var3_g____getter_58_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b180

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var3_g____getter_58_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad094 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad094 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var1>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var1_g____getter_59_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b1f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var1_g____getter_59_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad095 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad095 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var2>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var2_g____getter_60_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b260

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var2_g____getter_60_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad096 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad096 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var3>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var3_g____getter_61_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b2d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var3_g____getter_61_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad097 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad097 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var1>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var1_g____getter_62_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b340

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var1_g____getter_62_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad098 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad098 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var2>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var2_g____getter_63_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b3b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var2_g____getter_63_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad099 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad099 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var3>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var3_g____getter_64_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b420

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var3_g____getter_64_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad09a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad09a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot1>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot1_g____getter_65_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b490

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot1_g____getter_65_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad09b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad09b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot2>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot2_g____getter_66_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b500

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot2_g____getter_66_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad09c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad09c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot3>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot3_g____getter_67_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b570

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot3_g____getter_67_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad09d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad09d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot4>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot4_g____getter_68_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b5e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot4_g____getter_68_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad09e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad09e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble1>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble1_g____getter_69_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b650

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble1_g____getter_69_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad09f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad09f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble2>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble2_g____getter_70_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b6c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble2_g____getter_70_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var1>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var1_g____getter_71_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b730

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var1_g____getter_71_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var2>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var2_g____getter_72_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b7a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var2_g____getter_72_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var1>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var1_g____getter_73_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b810

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var1_g____getter_73_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var2>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var2_g____getter_74_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b880

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var2_g____getter_74_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var1>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var1_g____getter_75_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b8f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var1_g____getter_75_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var2>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var2_g____getter_76_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b960

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var2_g____getter_76_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch1>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch1_g____getter_77_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416b9d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch1_g____getter_77_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch2>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch2_g____getter_78_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x416ba40

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch2_g____getter_78_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad0a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ad0a8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
}


// CustomLogic.CustomLogicHumanSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanSoundEnum___ctor (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x4161e90

void CustomLogic_CustomLogicHumanSoundEnum___ctor
               (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acdc7 = '\x01';
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


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeBreak
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeBreak (const MethodInfo* method);
// 0x4161f00

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeBreak(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdc8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeHit (const MethodInfo* method);
// 0x4161f70

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdc9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeHit (const MethodInfo* method);
// 0x4161fe0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdca = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_NapeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_NapeHit (const MethodInfo* method);
// 0x4162050

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_NapeHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdcb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdcb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_LimbHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_LimbHit (const MethodInfo* method);
// 0x41620c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_LimbHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdcc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldNapeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldNapeHit (const MethodInfo* method);
// 0x4162130

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldNapeHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdcd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdcd = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadAir (const MethodInfo* method);
// 0x41621a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdce = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadGround
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadGround (const MethodInfo* method);
// 0x4162210

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadGround(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdcf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdcf = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunReload
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunReload (const MethodInfo* method);
// 0x4162280

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunReload(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing1 (const MethodInfo* method);
// 0x41622f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing2 (const MethodInfo* method);
// 0x4162360

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing3 (const MethodInfo* method);
// 0x41623d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing4 (const MethodInfo* method);
// 0x4162440

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeSwing (const MethodInfo* method);
// 0x41624b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeSwing(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Dodge (const MethodInfo* method);
// 0x4162520

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Dodge(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_FlareLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_FlareLaunch (const MethodInfo* method);
// 0x4162590

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_FlareLaunch(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ThunderspearLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ThunderspearLaunch (const MethodInfo* method);
// 0x4162600

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ThunderspearLaunch(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasBurst
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasBurst (const MethodInfo* method);
// 0x4162670

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasBurst(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdd9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookLaunch (const MethodInfo* method);
// 0x41626e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookLaunch(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdda == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdda = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldHookLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldHookLaunch (const MethodInfo* method);
// 0x4162750

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldHookLaunch(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acddb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acddb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractLeft (const MethodInfo* method);
// 0x41627c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractLeft(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acddc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acddc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractRight
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractRight (const MethodInfo* method);
// 0x4162830

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractRight(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acddd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acddd = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpact
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookImpact (const MethodInfo* method);
// 0x41628a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookImpact(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdde == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdde = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpactLoud
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookImpactLoud (const MethodInfo* method);
// 0x4162910

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookImpactLoud(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acddf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acddf = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasStart
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasStart (const MethodInfo* method);
// 0x4162980

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasStart(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasLoop
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasLoop (const MethodInfo* method);
// 0x41629f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasLoop(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 200);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasEnd
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasEnd (const MethodInfo* method);
// 0x4162a60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasEnd(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ReelIn
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ReelIn (const MethodInfo* method);
// 0x4162ad0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ReelIn(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ReelOut
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ReelOut (const MethodInfo* method);
// 0x4162b40

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ReelOut(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_CrashLand
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_CrashLand (const MethodInfo* method);
// 0x4162bb0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_CrashLand(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Jump (const MethodInfo* method);
// 0x4162c20

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Land (const MethodInfo* method);
// 0x4162c90

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Land(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_NoGas
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_NoGas (const MethodInfo* method);
// 0x4162d00

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_NoGas(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Refill (const MethodInfo* method);
// 0x4162d70

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Refill(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acde9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acde9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Slide (const MethodInfo* method);
// 0x4162de0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Slide(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdea = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x110);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Footstep1 (const MethodInfo* method);
// 0x4162e50

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Footstep1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdeb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdeb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x118);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Footstep2 (const MethodInfo* method);
// 0x4162ec0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Footstep2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdec = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x120);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death1 (const MethodInfo* method);
// 0x4162f30

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acded == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acded = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x128);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death2 (const MethodInfo* method);
// 0x4162fa0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdee = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x130);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death3 (const MethodInfo* method);
// 0x4163010

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdef = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x138);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death4 (const MethodInfo* method);
// 0x4163080

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x140);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death5
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death5 (const MethodInfo* method);
// 0x41630f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death5(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x148);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Checkpoint
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Checkpoint (const MethodInfo* method);
// 0x4163160

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Checkpoint(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x150);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunExplode (const MethodInfo* method);
// 0x41631d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunExplode(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x158);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x158);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplodeLoud
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunExplodeLoud (const MethodInfo* method);
// 0x4163240

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunExplodeLoud(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x160);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x160);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_WaterSplash
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_WaterSplash (const MethodInfo* method);
// 0x41632b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_WaterSplash(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x168);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x168);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Switchback
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Switchback (const MethodInfo* method);
// 0x4163320

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Switchback(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot1 (const MethodInfo* method);
// 0x4163390

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot2 (const MethodInfo* method);
// 0x4163400

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot3 (const MethodInfo* method);
// 0x4163470

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdf9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot4 (const MethodInfo* method);
// 0x41634e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdfa = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var1 (const MethodInfo* method);
// 0x4163550

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdfb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var2 (const MethodInfo* method);
// 0x41635c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdfc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var3 (const MethodInfo* method);
// 0x4163630

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdfd = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var1 (const MethodInfo* method);
// 0x41636a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdfe = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var2 (const MethodInfo* method);
// 0x4163710

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057acdff = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var3 (const MethodInfo* method);
// 0x4163780

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace00 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var1 (const MethodInfo* method);
// 0x41637f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace01 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var2 (const MethodInfo* method);
// 0x4163860

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace02 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var3 (const MethodInfo* method);
// 0x41638d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace03 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var1 (const MethodInfo* method);
// 0x4163940

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace04 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var2 (const MethodInfo* method);
// 0x41639b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace05 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var3 (const MethodInfo* method);
// 0x4163a20

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace06 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot1 (const MethodInfo* method);
// 0x4163a90

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace07 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot2 (const MethodInfo* method);
// 0x4163b00

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace08 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot3 (const MethodInfo* method);
// 0x4163b70

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace09 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot4 (const MethodInfo* method);
// 0x4163be0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace0a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble1 (const MethodInfo* method);
// 0x4163c50

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace0b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble2 (const MethodInfo* method);
// 0x4163cc0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace0c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var1 (const MethodInfo* method);
// 0x4163d30

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace0d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var2 (const MethodInfo* method);
// 0x4163da0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace0e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var1 (const MethodInfo* method);
// 0x4163e10

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace0f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var2 (const MethodInfo* method);
// 0x4163e80

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace10 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var1 (const MethodInfo* method);
// 0x4163ef0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace11 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var2 (const MethodInfo* method);
// 0x4163f60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace12 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch1 (const MethodInfo* method);
// 0x4163fd0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace13 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch2 (const MethodInfo* method);
// 0x4164040

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057ace14 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ClassName (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x41640b0

System_String_o *
CustomLogic_CustomLogicHumanSoundEnum__get_ClassName
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ace15 == '\0') {
    il2cpp_runtime_helper_023445d0(&"HumanSoundEnum");
    g_data_057ace15 = '\x01';
  }
  return "HumanSoundEnum";
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_IsAbstract (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x41640e0

bool_conflict
CustomLogic_CustomLogicHumanSoundEnum__get_IsAbstract
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_IsStatic (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x41640f0

bool_conflict
CustomLogic_CustomLogicHumanSoundEnum__get_IsStatic
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x4164100

bool_conflict
CustomLogic_CustomLogicHumanSoundEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


