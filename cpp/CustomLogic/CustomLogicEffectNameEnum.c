// Type: CustomLogic.CustomLogicEffectNameEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicEffectNameEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicEffectNameEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicEffectNameEnum_o* CustomLogic_CustomLogicEffectNameEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x414f590

CustomLogic_CustomLogicEffectNameEnum_o *
CustomLogic_CustomLogicEffectNameEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicEffectNameEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acc66 == '\0') {
    pSStack_20 = (System_String_o *)0x414f5ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEffectNameEnum);
    g_data_057acc66 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x414f627;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x414f5d6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEffectNameEnum);
    if (g_data_057acc44 == '\0') {
      pSStack_20 = (System_String_o *)0x414f5ee;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acc44 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414f60d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x414f617;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicEffectNameEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414f62f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x414f642;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414f651;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicEffectNameEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x414f660;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x414f670;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414f67f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x414f687;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x414f697;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414f6a3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicEffectNameEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414f6ae;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057acc67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Boom4");
    il2cpp_runtime_helper_023445d0(&"ColossalKick");
    il2cpp_runtime_helper_023445d0(&"GroundShatter");
    il2cpp_runtime_helper_023445d0(&"APGTrail");
    il2cpp_runtime_helper_023445d0(&"Splash3");
    il2cpp_runtime_helper_023445d0(&"BladeThrowHit");
    il2cpp_runtime_helper_023445d0(&"GunExplode");
    il2cpp_runtime_helper_023445d0(&"TitanDie1");
    il2cpp_runtime_helper_023445d0(&"Boom5");
    il2cpp_runtime_helper_023445d0(&"Blood1");
    il2cpp_runtime_helper_023445d0(&"TitanDie2");
    il2cpp_runtime_helper_023445d0(&"Boom2");
    il2cpp_runtime_helper_023445d0(&"Splash1");
    il2cpp_runtime_helper_023445d0(&"ColossalSpawn");
    il2cpp_runtime_helper_023445d0(&"PunchHit");
    il2cpp_runtime_helper_023445d0(&"CriticalHit");
    il2cpp_runtime_helper_023445d0(&"Boom3");
    il2cpp_runtime_helper_023445d0(&"ColossalRockSpawn");
    il2cpp_runtime_helper_023445d0(&"Boom8");
    il2cpp_runtime_helper_023445d0(&"Boom7");
    il2cpp_runtime_helper_023445d0(&"TitanBite");
    il2cpp_runtime_helper_023445d0(&"WaterWake");
    il2cpp_runtime_helper_023445d0(&"Splash");
    il2cpp_runtime_helper_023445d0(&"ThunderspearExplode");
    il2cpp_runtime_helper_023445d0(&"SingleSplash");
    il2cpp_runtime_helper_023445d0(&"Boom6");
    il2cpp_runtime_helper_023445d0(&"Splash2");
    il2cpp_runtime_helper_023445d0(&"Blood2");
    il2cpp_runtime_helper_023445d0(&"Boom1");
    il2cpp_runtime_helper_023445d0(&"TitanSpawn");
    il2cpp_runtime_helper_023445d0(&"GasBurst");
    il2cpp_runtime_helper_023445d0(&"ShifterThunder");
    g_data_057acc67 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x60a7e7f0) {
    if (uVar1 < 0x1ddfac48) {
      if (uVar1 < 0x18dfa469) {
        if (uVar1 < 0x9b9ed3e) {
          if (uVar1 == 0x6b9e884) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TitanDie1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acc71 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanDie1_g____getter_11);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
                g_data_057acc71 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              return pCVar9;
            }
          }
          else if (uVar1 == 0x9b9ed3d) {
            bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TitanDie2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puVar6 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              puStack_30 = puVar6;
              if (g_data_057acc72 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanDie2_g____getter_12);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
                g_data_057acc72 = '\x01';
              }
              pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
              System_Func_object__object____ctor();
              pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0
                         ,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              return pCVar9;
            }
          }
        }
        else if (uVar1 == 0x12df9af6) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Boom8",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acc7a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom8_g____getter_20_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc7a = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x18dfa468) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Boom2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acc74 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom2_g____getter_14_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc74 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 < 0x1bdfa922) {
        if (uVar1 == 0x19dfa5fb) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Boom3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acc75 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom3_g____getter_15_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc75 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1bdfa921) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Boom1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acc73 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom1_g____getter_13_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc73 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x1cdfaab4) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Boom6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc78 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom6_g____getter_18_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc78 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x1ddfac47) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Boom7",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc79 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom7_g____getter_19_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc79 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x397d6640) {
      if (uVar1 < 0x1fdfaf6e) {
        if (uVar1 == 0x1edfadda) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Boom4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acc76 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom4_g____getter_16_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc76 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x1fdfaf6d) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Boom5",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acc77 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom5_g____getter_17_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc77 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x2679fe4b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ColossalRockSpawn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc86 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalRockSpawn_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc86 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x397d663f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ColossalKick",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc87 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalKick_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc87 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x5fa7e65d) {
      if (uVar1 == 0x578d99cd) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"CriticalHit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc6f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CriticalHit_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc6f = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x5fa7e65c) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Splash2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc82 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash2_g____getter_28_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc82 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
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
        if (g_data_057acc69 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasBurst_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc69 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x60a7e7ef) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Splash3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acc83 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash3_g____getter_29_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc83 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0x9f073bd5) {
    if (uVar1 < 0x7b585c35) {
      if (uVar1 < 0x62cdd0d7) {
        if (uVar1 == 0x62a7eb15) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Splash1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acc81 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash1_g____getter_27_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc81 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0x62cdd0d6) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ShifterThunder",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acc7d == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShifterThunder_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc7d = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x76cd9138) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ColossalSpawn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc85 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSpawn_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc85 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x7b585c34) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TitanSpawn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc70 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanSpawn_g____getter_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc70 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x8d3bb75c) {
      if (uVar1 == 0x81cfe633) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TitanBite",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc7c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanBite_g____getter_22);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc7c = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x8d3bb75b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"GroundShatter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc6a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GroundShatter_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc6a = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x99c5e30c) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeThrowHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acc7e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrowHit_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc7e = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x9f073bd4) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"PunchHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acc6d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PunchHit_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc6d = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xcb990167) {
    if (uVar1 < 0xb215e923) {
      if (uVar1 == 0xb115e78f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Blood2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc6c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blood2_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc6c = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0xb215e922) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Blood1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc6b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blood1_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc6b = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0xb5730240) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"WaterWake",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acc84 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WaterWake_g____getter_30);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc84 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
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
        if (g_data_057acc6e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplode_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc6e = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xefe8e987) {
    if (uVar1 == 0xdd85abcf) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"ThunderspearExplode",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        ppuVar10 = (undefined8 **)&uStack_18;
        pSVar7 = pSStack_28;
        pSVar3 = pSStack_20;
        goto CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode;
      }
    }
    else if (uVar1 == 0xefe8e986) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Splash",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acc7b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash_g____getter_21_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc7b = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 == 0xf58c6b62) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SingleSplash",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acc80 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SingleSplash_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
        g_data_057acc80 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xf888646f) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"APGTrail",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acc7f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGTrail_g____getter_25);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
        g_data_057acc7f = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return pCVar9;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicEffectNameEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057acc68 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41502e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ThunderspearExplode_g);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41502f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4150301;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415030d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc68 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4150323;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415033c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415034b;
  pCVar9 = (CustomLogic_CustomLogicEffectNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4150365;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicEffectNameEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x414f6b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicEffectNameEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acc67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Boom4");
    il2cpp_runtime_helper_023445d0(&"ColossalKick");
    il2cpp_runtime_helper_023445d0(&"GroundShatter");
    il2cpp_runtime_helper_023445d0(&"APGTrail");
    il2cpp_runtime_helper_023445d0(&"Splash3");
    il2cpp_runtime_helper_023445d0(&"BladeThrowHit");
    il2cpp_runtime_helper_023445d0(&"GunExplode");
    il2cpp_runtime_helper_023445d0(&"TitanDie1");
    il2cpp_runtime_helper_023445d0(&"Boom5");
    il2cpp_runtime_helper_023445d0(&"Blood1");
    il2cpp_runtime_helper_023445d0(&"TitanDie2");
    il2cpp_runtime_helper_023445d0(&"Boom2");
    il2cpp_runtime_helper_023445d0(&"Splash1");
    il2cpp_runtime_helper_023445d0(&"ColossalSpawn");
    il2cpp_runtime_helper_023445d0(&"PunchHit");
    il2cpp_runtime_helper_023445d0(&"CriticalHit");
    il2cpp_runtime_helper_023445d0(&"Boom3");
    il2cpp_runtime_helper_023445d0(&"ColossalRockSpawn");
    il2cpp_runtime_helper_023445d0(&"Boom8");
    il2cpp_runtime_helper_023445d0(&"Boom7");
    il2cpp_runtime_helper_023445d0(&"TitanBite");
    il2cpp_runtime_helper_023445d0(&"WaterWake");
    il2cpp_runtime_helper_023445d0(&"Splash");
    il2cpp_runtime_helper_023445d0(&"ThunderspearExplode");
    il2cpp_runtime_helper_023445d0(&"SingleSplash");
    il2cpp_runtime_helper_023445d0(&"Boom6");
    il2cpp_runtime_helper_023445d0(&"Splash2");
    il2cpp_runtime_helper_023445d0(&"Blood2");
    il2cpp_runtime_helper_023445d0(&"Boom1");
    il2cpp_runtime_helper_023445d0(&"TitanSpawn");
    il2cpp_runtime_helper_023445d0(&"GasBurst");
    il2cpp_runtime_helper_023445d0(&"ShifterThunder");
    g_data_057acc67 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x60a7e7f0) {
    if (uVar1 < 0x1ddfac48) {
      if (uVar1 < 0x18dfa469) {
        if (uVar1 < 0x9b9ed3e) {
          if (uVar1 == 0x6b9e884) {
            bVar2 = System_String__op_Equality(name,"TitanDie1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              puStack_18 = &TypeInfo_Bindings;
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057acc71 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanDie1_g____getter_11);
                il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
                g_data_057acc71 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
              System_Func_object__object____ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              CustomLogic_CLPropertyBinding_object____ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if ((uVar1 == 0x9b9ed3d) &&
                  (bVar2 = System_String__op_Equality(name,"TitanDie2",(MethodInfo *)0x0),
                  (char)bVar2 != '\0')) {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acc72 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanDie2_g____getter_12);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc72 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x12df9af6) {
          bVar2 = System_String__op_Equality(name,"Boom8",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acc7a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom8_g____getter_20_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc7a = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x18dfa468) &&
                (bVar2 = System_String__op_Equality(name,"Boom2",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc74 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom2_g____getter_14_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc74 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x1bdfa922) {
        if (uVar1 == 0x19dfa5fb) {
          bVar2 = System_String__op_Equality(name,"Boom3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acc75 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom3_g____getter_15_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc75 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x1bdfa921) &&
                (bVar2 = System_String__op_Equality(name,"Boom1",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc73 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom1_g____getter_13_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc73 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x1cdfaab4) {
        bVar2 = System_String__op_Equality(name,"Boom6",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc78 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom6_g____getter_18_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc78 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x1ddfac47) &&
              (bVar2 = System_String__op_Equality(name,"Boom7",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc79 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom7_g____getter_19_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc79 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x397d6640) {
      if (uVar1 < 0x1fdfaf6e) {
        if (uVar1 == 0x1edfadda) {
          bVar2 = System_String__op_Equality(name,"Boom4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acc76 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom4_g____getter_16_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc76 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x1fdfaf6d) &&
                (bVar2 = System_String__op_Equality(name,"Boom5",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc77 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom5_g____getter_17_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc77 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x2679fe4b) {
        bVar2 = System_String__op_Equality(name,"ColossalRockSpawn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc86 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalRockSpawn_g____g);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc86 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x397d663f) &&
              (bVar2 = System_String__op_Equality(name,"ColossalKick",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc87 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalKick_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc87 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x5fa7e65d) {
      if (uVar1 == 0x578d99cd) {
        bVar2 = System_String__op_Equality(name,"CriticalHit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc6f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CriticalHit_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc6f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x5fa7e65c) &&
              (bVar2 = System_String__op_Equality(name,"Splash2",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc82 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash2_g____getter_28_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc82 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
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
        if (g_data_057acc69 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasBurst_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc69 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x60a7e7ef) &&
            (bVar2 = System_String__op_Equality(name,"Splash3",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc83 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash3_g____getter_29_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
        g_data_057acc83 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x9f073bd5) {
    if (uVar1 < 0x7b585c35) {
      if (uVar1 < 0x62cdd0d7) {
        if (uVar1 == 0x62a7eb15) {
          bVar2 = System_String__op_Equality(name,"Splash1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acc81 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash1_g____getter_27_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
              g_data_057acc81 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x62cdd0d6) &&
                (bVar2 = System_String__op_Equality(name,"ShifterThunder",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc7d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShifterThunder_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc7d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x76cd9138) {
        bVar2 = System_String__op_Equality(name,"ColossalSpawn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc85 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSpawn_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc85 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x7b585c34) &&
              (bVar2 = System_String__op_Equality(name,"TitanSpawn",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc70 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanSpawn_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc70 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x8d3bb75c) {
      if (uVar1 == 0x81cfe633) {
        bVar2 = System_String__op_Equality(name,"TitanBite",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc7c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanBite_g____getter_22);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc7c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x8d3bb75b) &&
              (bVar2 = System_String__op_Equality(name,"GroundShatter",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc6a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GroundShatter_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc6a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x99c5e30c) {
      bVar2 = System_String__op_Equality(name,"BladeThrowHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc7e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrowHit_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc7e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x9f073bd4) &&
            (bVar2 = System_String__op_Equality(name,"PunchHit",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc6d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PunchHit_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
        g_data_057acc6d = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xcb990167) {
    if (uVar1 < 0xb215e923) {
      if (uVar1 == 0xb115e78f) {
        bVar2 = System_String__op_Equality(name,"Blood2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc6c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blood2_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
            g_data_057acc6c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xb215e922) &&
              (bVar2 = System_String__op_Equality(name,"Blood1",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc6b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blood1_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc6b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xb5730240) {
      bVar2 = System_String__op_Equality(name,"WaterWake",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acc84 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WaterWake_g____getter_30);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
          g_data_057acc84 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xcb990166) &&
            (bVar2 = System_String__op_Equality(name,"GunExplode",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc6e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplode_g____getter_8);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
        g_data_057acc6e = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xefe8e987) {
    if (uVar1 == 0xdd85abcf) {
      bVar2 = System_String__op_Equality(name,"ThunderspearExplode",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar4 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode;
      }
    }
    else if ((uVar1 == 0xefe8e986) &&
            (bVar2 = System_String__op_Equality(name,"Splash",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc7b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash_g____getter_21_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
        g_data_057acc7b = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf58c6b62) {
    bVar2 = System_String__op_Equality(name,"SingleSplash",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc80 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SingleSplash_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
        g_data_057acc80 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xf888646f) &&
          (bVar2 = System_String__op_Equality(name,"APGTrail",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acc7f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGTrail_g____getter_25);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
      g_data_057acc7f = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicEffectNameEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acc68 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41502e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ThunderspearExplode_g);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41502f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4150301;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415030d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc68 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4150323;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415033c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415034b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4150365;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ThunderspearExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode (const MethodInfo* method);
// 0x41502d0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ThunderspearExplode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc68 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ThunderspearExplode_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc68 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GasBurst
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst (const MethodInfo* method);
// 0x4150370

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GasBurst(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc69 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GasBurst_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc69 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GroundShatter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter (const MethodInfo* method);
// 0x4150410

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GroundShatter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc6a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GroundShatter_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc6a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1 (const MethodInfo* method);
// 0x41504b0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc6b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blood1_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc6b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2 (const MethodInfo* method);
// 0x4150550

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Blood2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc6c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blood2_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc6c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__PunchHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit (const MethodInfo* method);
// 0x41505f0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__PunchHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc6d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PunchHit_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc6d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GunExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode (const MethodInfo* method);
// 0x4150690

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__GunExplode(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc6e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GunExplode_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc6e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__CriticalHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit (const MethodInfo* method);
// 0x4150730

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__CriticalHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CriticalHit_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc6f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn (const MethodInfo* method);
// 0x41507d0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanSpawn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc70 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanSpawn_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc70 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1 (const MethodInfo* method);
// 0x4150870

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc71 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanDie1_g____getter_11);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc71 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2 (const MethodInfo* method);
// 0x4150910

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanDie2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc72 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanDie2_g____getter_12);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc72 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1 (const MethodInfo* method);
// 0x41509b0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom1_g____getter_13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc73 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2 (const MethodInfo* method);
// 0x4150a50

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc74 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom2_g____getter_14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc74 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3 (const MethodInfo* method);
// 0x4150af0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc75 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom3_g____getter_15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc75 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4 (const MethodInfo* method);
// 0x4150b90

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc76 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom4_g____getter_16_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc76 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5 (const MethodInfo* method);
// 0x4150c30

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom5_g____getter_17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc77 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6 (const MethodInfo* method);
// 0x4150cd0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc78 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom6_g____getter_18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc78 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7 (const MethodInfo* method);
// 0x4150d70

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom7_g____getter_19_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc79 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8 (const MethodInfo* method);
// 0x4150e10

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Boom8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Boom8_g____getter_20_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc7a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash (const MethodInfo* method);
// 0x4150eb0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc7b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash_g____getter_21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc7b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite (const MethodInfo* method);
// 0x4150f50

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__TitanBite(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TitanBite_g____getter_22);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc7c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ShifterThunder
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder (const MethodInfo* method);
// 0x4150ff0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ShifterThunder(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc7d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShifterThunder_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc7d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__BladeThrowHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit (const MethodInfo* method);
// 0x4151090

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__BladeThrowHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrowHit_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc7e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__APGTrail
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail (const MethodInfo* method);
// 0x4151130

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__APGTrail(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APGTrail_g____getter_25);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc7f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__SingleSplash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash (const MethodInfo* method);
// 0x41511d0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__SingleSplash(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SingleSplash_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc80 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1 (const MethodInfo* method);
// 0x4151270

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc81 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash1_g____getter_27_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc81 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2 (const MethodInfo* method);
// 0x4151310

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash2_g____getter_28_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc82 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3 (const MethodInfo* method);
// 0x41513b0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__Splash3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Splash3_g____getter_29_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc83 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__WaterWake
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake (const MethodInfo* method);
// 0x4151450

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__WaterWake(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WaterWake_g____getter_30);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc84 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn (const MethodInfo* method);
// 0x41514f0

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalSpawn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSpawn_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc85 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalRockSpawn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn (const MethodInfo* method);
// 0x4151590

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalRockSpawn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalRockSpawn_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc86 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o* CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick (const MethodInfo* method);
// 0x4151630

CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *
CustomLogic_CustomLogicEffectNameEnum_Bindings____CreatePropertyBinding__ColossalKick(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *__this;
  
  if (g_data_057acc87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalKick_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicEffectNameEnum_object);
    g_data_057acc87 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicEffectNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicEffectNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicEffectNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicEffectNameEnum);
  return __this;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicEffectNameEnum_Bindings___cctor (const MethodInfo* method);
// 0x41516d0

void CustomLogic_CustomLogicEffectNameEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acc88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Boom4");
    il2cpp_runtime_helper_023445d0(&"ColossalKick");
    il2cpp_runtime_helper_023445d0(&"GroundShatter");
    il2cpp_runtime_helper_023445d0(&"APGTrail");
    il2cpp_runtime_helper_023445d0(&"Splash3");
    il2cpp_runtime_helper_023445d0(&"BladeThrowHit");
    il2cpp_runtime_helper_023445d0(&"GunExplode");
    il2cpp_runtime_helper_023445d0(&"TitanDie1");
    il2cpp_runtime_helper_023445d0(&"Boom5");
    il2cpp_runtime_helper_023445d0(&"Blood1");
    il2cpp_runtime_helper_023445d0(&"TitanDie2");
    il2cpp_runtime_helper_023445d0(&"Boom2");
    il2cpp_runtime_helper_023445d0(&"Splash1");
    il2cpp_runtime_helper_023445d0(&"ColossalSpawn");
    il2cpp_runtime_helper_023445d0(&"PunchHit");
    il2cpp_runtime_helper_023445d0(&"CriticalHit");
    il2cpp_runtime_helper_023445d0(&"Boom3");
    il2cpp_runtime_helper_023445d0(&"ColossalRockSpawn");
    il2cpp_runtime_helper_023445d0(&"Boom8");
    il2cpp_runtime_helper_023445d0(&"Boom7");
    il2cpp_runtime_helper_023445d0(&"TitanBite");
    il2cpp_runtime_helper_023445d0(&"WaterWake");
    il2cpp_runtime_helper_023445d0(&"Splash");
    il2cpp_runtime_helper_023445d0(&"ThunderspearExplode");
    il2cpp_runtime_helper_023445d0(&"SingleSplash");
    il2cpp_runtime_helper_023445d0(&"Boom6");
    il2cpp_runtime_helper_023445d0(&"Splash2");
    il2cpp_runtime_helper_023445d0(&"Blood2");
    il2cpp_runtime_helper_023445d0(&"Boom1");
    il2cpp_runtime_helper_023445d0(&"TitanSpawn");
    il2cpp_runtime_helper_023445d0(&"GasBurst");
    il2cpp_runtime_helper_023445d0(&"ShifterThunder");
    g_data_057acc88 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"ThunderspearExplode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GasBurst",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GroundShatter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Blood1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Blood2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"PunchHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GunExplode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"CriticalHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TitanSpawn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TitanDie1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TitanDie2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Boom1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Boom2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Boom3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Boom4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Boom5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Boom6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Boom7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Boom8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Splash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TitanBite",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ShifterThunder",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeThrowHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"APGTrail",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SingleSplash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Splash1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Splash2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Splash3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"WaterWake",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ColossalSpawn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ColossalRockSpawn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ColossalKick",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057accf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf2 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ThunderspearExplode>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ThunderspearExplode_g____getter_2_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151ba0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ThunderspearExplode_g____getter_2_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf2 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_3_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151c10

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_3_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf3 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GroundShatter>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GroundShatter_g____getter_4_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151c80

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GroundShatter_g____getter_4_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf4 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood1>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood1_g____getter_5_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151cf0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood1_g____getter_5_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood2>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood2_g____getter_6_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151d60

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Blood2_g____getter_6_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__PunchHit>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__PunchHit_g____getter_7_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151dd0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__PunchHit_g____getter_7_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf7 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_8_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151e40

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_8_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf8 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__CriticalHit>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__CriticalHit_g____getter_9_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151eb0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__CriticalHit_g____getter_9_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accf9 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanSpawn>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanSpawn_g____getter_10_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151f20

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanSpawn_g____getter_10_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accfa = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie1_g____getter_11_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4151f90

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie1_g____getter_11_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accfb = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie2_g____getter_12_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152000

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanDie2_g____getter_12_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accfc = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom1_g____getter_13_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152070

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom1_g____getter_13_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accfd = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom2>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom2_g____getter_14_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x41520e0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom2_g____getter_14_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accfe = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom3>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom3_g____getter_15_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152150

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom3_g____getter_15_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057accff = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom4>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom4_g____getter_16_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x41521c0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom4_g____getter_16_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd00 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom5>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom5_g____getter_17_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152230

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom5_g____getter_17_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd01 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom6>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom6_g____getter_18_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x41522a0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom6_g____getter_18_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd02 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom7>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom7_g____getter_19_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152310

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom7_g____getter_19_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd03 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom8>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom8_g____getter_20_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152380

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Boom8_g____getter_20_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd04 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash_g____getter_21_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x41523f0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash_g____getter_21_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd05 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanBite>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanBite_g____getter_22_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152460

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__TitanBite_g____getter_22_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd06 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ShifterThunder>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ShifterThunder_g____getter_23_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x41524d0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ShifterThunder_g____getter_23_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd07 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrowHit>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__BladeThrowHit_g____getter_24_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152540

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__BladeThrowHit_g____getter_24_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd08 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__APGTrail>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__APGTrail_g____getter_25_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x41525b0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__APGTrail_g____getter_25_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd09 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__SingleSplash>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__SingleSplash_g____getter_26_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152620

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__SingleSplash_g____getter_26_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd0a = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash1>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash1_g____getter_27_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152690

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash1_g____getter_27_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd0b = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 200);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash2>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash2_g____getter_28_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152700

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash2_g____getter_28_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd0c = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash3>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash3_g____getter_29_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152770

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__Splash3_g____getter_29_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd0d = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__WaterWake>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__WaterWake_g____getter_30_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x41527e0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__WaterWake_g____getter_30_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd0e = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalSpawn>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalSpawn_g____getter_31_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152850

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalSpawn_g____getter_31_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd0f = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalRockSpawn>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalRockSpawn_g____getter_32_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x41528c0

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalRockSpawn_g____getter_32_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd10 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalKick>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalKick_g____getter_33_0 (CustomLogic_CustomLogicEffectNameEnum_o* __i, const MethodInfo* method);
// 0x4152930

Il2CppObject *
CustomLogic_CustomLogicEffectNameEnum_Bindings_____CreatePropertyBinding__ColossalKick_g____getter_33_0
          (CustomLogic_CustomLogicEffectNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acd11 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicEffectNameEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicEffectNameEnum___ctor (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x414e6c0

void CustomLogic_CustomLogicEffectNameEnum___ctor
               (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acc44 = '\x01';
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


// CustomLogic.CustomLogicEffectNameEnum$$get_ThunderspearExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ThunderspearExplode (const MethodInfo* method);
// 0x414e730

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ThunderspearExplode(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc45 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GasBurst
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GasBurst (const MethodInfo* method);
// 0x414e7a0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GasBurst(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc46 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GroundShatter
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GroundShatter (const MethodInfo* method);
// 0x414e810

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GroundShatter(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc47 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Blood1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Blood1 (const MethodInfo* method);
// 0x414e880

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Blood1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc48 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Blood2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Blood2 (const MethodInfo* method);
// 0x414e8f0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Blood2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc49 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_PunchHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_PunchHit (const MethodInfo* method);
// 0x414e960

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_PunchHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc4a = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_GunExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_GunExplode (const MethodInfo* method);
// 0x414e9d0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_GunExplode(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc4b = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_CriticalHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_CriticalHit (const MethodInfo* method);
// 0x414ea40

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_CriticalHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc4c = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanSpawn (const MethodInfo* method);
// 0x414eab0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanSpawn(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc4d = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanDie1 (const MethodInfo* method);
// 0x414eb20

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanDie1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc4e = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanDie2 (const MethodInfo* method);
// 0x414eb90

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanDie2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc4f = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom1 (const MethodInfo* method);
// 0x414ec00

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc50 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom2 (const MethodInfo* method);
// 0x414ec70

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc51 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom3
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom3 (const MethodInfo* method);
// 0x414ece0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc52 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom4
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom4 (const MethodInfo* method);
// 0x414ed50

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc53 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom5
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom5 (const MethodInfo* method);
// 0x414edc0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom5(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc54 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom6
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom6 (const MethodInfo* method);
// 0x414ee30

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom6(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc55 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc55 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom7
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom7 (const MethodInfo* method);
// 0x414eea0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom7(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc56 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Boom8
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Boom8 (const MethodInfo* method);
// 0x414ef10

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Boom8(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc57 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash (const MethodInfo* method);
// 0x414ef80

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc58 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_TitanBite
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_TitanBite (const MethodInfo* method);
// 0x414eff0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_TitanBite(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc59 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ShifterThunder
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ShifterThunder (const MethodInfo* method);
// 0x414f060

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ShifterThunder(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc5a = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_BladeThrowHit
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_BladeThrowHit (const MethodInfo* method);
// 0x414f0d0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_BladeThrowHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc5b = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_APGTrail
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_APGTrail (const MethodInfo* method);
// 0x414f140

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_APGTrail(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc5c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc5c = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_SingleSplash
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_SingleSplash (const MethodInfo* method);
// 0x414f1b0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_SingleSplash(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc5d = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash1
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash1 (const MethodInfo* method);
// 0x414f220

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc5e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc5e = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 200);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash2
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash2 (const MethodInfo* method);
// 0x414f290

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc5f = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_Splash3
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_Splash3 (const MethodInfo* method);
// 0x414f300

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_Splash3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc60 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_WaterWake
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_WaterWake (const MethodInfo* method);
// 0x414f370

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_WaterWake(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc61 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalSpawn (const MethodInfo* method);
// 0x414f3e0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalSpawn(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc62 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalRockSpawn
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalRockSpawn (const MethodInfo* method);
// 0x414f450

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalRockSpawn(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc63 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ColossalKick
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ColossalKick (const MethodInfo* method);
// 0x414f4c0

System_String_o * CustomLogic_CustomLogicEffectNameEnum__get_ColossalKick(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057acc64 = '\x01';
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicEffectNameEnum__get_ClassName (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x414f530

System_String_o *
CustomLogic_CustomLogicEffectNameEnum__get_ClassName
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acc65 == '\0') {
    il2cpp_runtime_helper_023445d0(&"EffectNameEnum");
    g_data_057acc65 = '\x01';
  }
  return "EffectNameEnum";
}


// CustomLogic.CustomLogicEffectNameEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_IsAbstract (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x414f560

bool_conflict
CustomLogic_CustomLogicEffectNameEnum__get_IsAbstract
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_IsStatic (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x414f570

bool_conflict
CustomLogic_CustomLogicEffectNameEnum__get_IsStatic
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicEffectNameEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicEffectNameEnum__get_InheritBaseMembers (CustomLogic_CustomLogicEffectNameEnum_o* __this, const MethodInfo* method);
// 0x414f580

bool_conflict
CustomLogic_CustomLogicEffectNameEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicEffectNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


