// Type: CustomLogic.CustomLogicErenAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicErenAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicErenAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicErenAnimationEnum_o* CustomLogic_CustomLogicErenAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4152d70

CustomLogic_CustomLogicErenAnimationEnum_o *
CustomLogic_CustomLogicErenAnimationEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicErenAnimationEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acc9b == '\0') {
    pSStack_20 = (System_String_o *)0x4152d8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicErenAnimationEnum);
    g_data_057acc9b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4152e07;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4152db6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicErenAnimationEnum);
    if (g_data_057acc89 == '\0') {
      pSStack_20 = (System_String_o *)0x4152dce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acc89 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4152ded;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4152df7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicErenAnimationEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x4152e0f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4152e22;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4152e31;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicErenAnimationEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4152e40;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4152e50;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4152e5f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4152e67;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x4152e77;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4152e83;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicErenAnimationEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4152e8e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057acc9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"EmoteNod");
    il2cpp_runtime_helper_023445d0(&"RockWalk");
    il2cpp_runtime_helper_023445d0(&"RockLift");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"RockLift001");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"RockFixHole");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057acc9c = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x5376547a) {
    if (uVar1 < 0x3c572baa) {
      if (uVar1 < 0xff8caa9) {
        if (uVar1 == 0xe1ef32d) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Jump",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057acca0 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_5_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
              g_data_057acca0 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            return pCVar9;
          }
        }
        else if (uVar1 == 0xff8caa8) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RockLift001",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar6 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar6;
            if (g_data_057accaa == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockLift001_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
              g_data_057accaa = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            return pCVar9;
          }
        }
      }
      else if (uVar1 == 0x22ccd730) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Walk",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acc9f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057acc9f = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x3c572ba9) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RockFixHole",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057accac == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockFixHole_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057accac = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 < 0x40e2cf22) {
      if (uVar1 == 0x3d692a71) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Die",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acca3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057acca3 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x40e2cf21) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RockLift",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acca9 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockLift_g____getter_14);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057acca9 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return pCVar9;
        }
      }
    }
    else if (uVar1 == 0x45aa17b3) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Idle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        ppuVar10 = (undefined8 **)&uStack_18;
        pSVar7 = pSStack_28;
        pSVar3 = pSStack_20;
        goto CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle;
      }
    }
    else if (uVar1 == 0x53765479) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackCombo",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acca4 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057acca4 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xad225086) {
    if (uVar1 < 0x7b00bc81) {
      if (uVar1 == 0x5d992b41) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Stun",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acca6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_11_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057acca6 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return pCVar9;
        }
      }
      else if (uVar1 == 0x7b00bc80) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Fall",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057acca1 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057acca1 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return pCVar9;
        }
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
        if (g_data_057acc9e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057acc9e = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xad225085) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"RockWalk",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057accab == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockWalk_g____getter_16);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057accab = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 < 0xc6f75898) {
    if (uVar1 == 0xc1018924) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteNod",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acca7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNod_g____getter_12);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057acca7 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0xc6f75897) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"EmoteRoar",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acca8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_13);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057acca8 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return pCVar9;
      }
    }
  }
  else if (uVar1 == 0xc8f30ee7) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackKick",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acca5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        g_data_057acca5 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
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
      if (g_data_057acca2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        g_data_057acca2 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
      return pCVar9;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicErenAnimationEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057acc9d == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41534f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4153505;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4153511;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415351d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acc9d = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4153533;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415354c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x415355b;
  pCVar9 = (CustomLogic_CustomLogicErenAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4153575;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicErenAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4152e90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057acc9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"EmoteNod");
    il2cpp_runtime_helper_023445d0(&"RockWalk");
    il2cpp_runtime_helper_023445d0(&"RockLift");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"RockLift001");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"RockFixHole");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057acc9c = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x5376547a) {
    if (uVar1 < 0x3c572baa) {
      if (uVar1 < 0xff8caa9) {
        if (uVar1 == 0xe1ef32d) {
          bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acca0 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_5_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
              g_data_057acca0 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0xff8caa8) &&
                (bVar2 = System_String__op_Equality(name,"RockLift001",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057accaa == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockLift001_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057accaa = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x22ccd730) {
        bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acc9f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057acc9f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x3c572ba9) &&
              (bVar2 = System_String__op_Equality(name,"RockFixHole",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057accac == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockFixHole_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057accac = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x40e2cf22) {
      if (uVar1 == 0x3d692a71) {
        bVar2 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acca3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057acca3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x40e2cf21) &&
              (bVar2 = System_String__op_Equality(name,"RockLift",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acca9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockLift_g____getter_14);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057acca9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x45aa17b3) {
      bVar2 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar4 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle;
      }
    }
    else if ((uVar1 == 0x53765479) &&
            (bVar2 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acca4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        g_data_057acca4 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xad225086) {
    if (uVar1 < 0x7b00bc81) {
      if (uVar1 == 0x5d992b41) {
        bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acca6 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_11_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
            g_data_057acca6 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x7b00bc80) &&
              (bVar2 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acca1 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057acca1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
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
        if (g_data_057acc9e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057acc9e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xad225085) &&
            (bVar2 = System_String__op_Equality(name,"RockWalk",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accab == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockWalk_g____getter_16);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        g_data_057accab = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xc6f75898) {
    if (uVar1 == 0xc1018924) {
      bVar2 = System_String__op_Equality(name,"EmoteNod",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acca7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNod_g____getter_12);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
          g_data_057acca7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xc6f75897) &&
            (bVar2 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acca8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_13);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        g_data_057acca8 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xc8f30ee7) {
    bVar2 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acca5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
        g_data_057acca5 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xee1682bc) &&
          (bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acca2 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_7_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
      g_data_057acca2 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicErenAnimationEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acc9d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41534f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4153505;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4153511;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415351d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acc9d = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4153533;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415354c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415355b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4153575;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x41534e0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acc9d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acc9d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x4153580

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acc9e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acc9e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x4153620

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acc9f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acc9f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x41536c0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x4153760

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x4153800

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x41538a0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x4153940

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x41539e0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x4153a80

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod (const MethodInfo* method);
// 0x4153b20

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteNod_g____getter_12);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x4153bc0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteRoar_g____getter_13);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift (const MethodInfo* method);
// 0x4153c60

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057acca9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockLift_g____getter_14);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057acca9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift001
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001 (const MethodInfo* method);
// 0x4153d00

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057accaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockLift001_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057accaa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockWalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk (const MethodInfo* method);
// 0x4153da0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057accab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockWalk_g____getter_16);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057accab = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockFixHole
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole (const MethodInfo* method);
// 0x4153e40

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this;
  
  if (g_data_057accac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RockFixHole_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicErenAnimationEnum_object);
    g_data_057accac = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicErenAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicErenAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x4153ee0

void CustomLogic_CustomLogicErenAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057accad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"EmoteNod");
    il2cpp_runtime_helper_023445d0(&"RockWalk");
    il2cpp_runtime_helper_023445d0(&"RockLift");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"RockLift001");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"RockFixHole");
    il2cpp_runtime_helper_023445d0(&"EmoteRoar");
    g_data_057accad = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Fall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Die",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackCombo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackKick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Stun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteNod",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteRoar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RockLift",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RockLift001",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RockWalk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RockFixHole",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acc8a == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_idle");
    g_data_057acc8a = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x41541a0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc8a == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_idle");
    g_data_057acc8a = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x41541d0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc8b == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_run");
    g_data_057acc8b = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154200

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc8c == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_walk");
    g_data_057acc8c = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154230

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc8d == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_start");
    g_data_057acc8d = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154260

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc8e == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_air");
    g_data_057acc8e = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154290

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc8f == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_land");
    g_data_057acc8f = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x41542c0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc90 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_die");
    g_data_057acc90 = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_9_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x41542f0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_9_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc91 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_attack_combo_full");
    g_data_057acc91 = '\x01';
  }
  return "ErenRig_VER2|et_attack_combo_full";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_10_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154320

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_10_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc92 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_attack_kick");
    g_data_057acc92 = '\x01';
  }
  return "ErenRig_VER2|et_attack_kick";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_11_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154350

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_11_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc93 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_hit_titan");
    g_data_057acc93 = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_12_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154380

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_12_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc94 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_yes");
    g_data_057acc94 = '\x01';
  }
  return "ErenRig_VER2|et_yes";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_13_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x41543b0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_13_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_born");
    g_data_057acc95 = '\x01';
  }
  return "ErenRig_VER2|et_born";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift_g____getter_14_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x41543e0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift_g____getter_14_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc96 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_lift");
    g_data_057acc96 = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift001>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift001_g____getter_15_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154410

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift001_g____getter_15_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc97 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_lift.001");
    g_data_057acc97 = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift.001";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockWalk>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockWalk_g____getter_16_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154440

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockWalk_g____getter_16_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc98 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_walk");
    g_data_057acc98 = '\x01';
  }
  return "ErenRig_VER2|et_rock_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockFixHole>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockFixHole_g____getter_17_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x4154470

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockFixHole_g____getter_17_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc99 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_fix_hole");
    g_data_057acc99 = '\x01';
  }
  return "ErenRig_VER2|et_rock_fix_hole";
}


// CustomLogic.CustomLogicErenAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicErenAnimationEnum___ctor (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x41529a0

void CustomLogic_CustomLogicErenAnimationEnum___ctor
               (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acc89 = '\x01';
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


// CustomLogic.CustomLogicErenAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Idle (const MethodInfo* method);
// 0x4152a10

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Idle(MethodInfo *method)

{
  if (g_data_057acc8a == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_idle");
    g_data_057acc8a = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Run (const MethodInfo* method);
// 0x4152a40

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Run(MethodInfo *method)

{
  if (g_data_057acc8b == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_run");
    g_data_057acc8b = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Walk (const MethodInfo* method);
// 0x4152a70

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Walk(MethodInfo *method)

{
  if (g_data_057acc8c == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_walk");
    g_data_057acc8c = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Jump (const MethodInfo* method);
// 0x4152aa0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Jump(MethodInfo *method)

{
  if (g_data_057acc8d == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_start");
    g_data_057acc8d = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Fall (const MethodInfo* method);
// 0x4152ad0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Fall(MethodInfo *method)

{
  if (g_data_057acc8e == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_air");
    g_data_057acc8e = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Land (const MethodInfo* method);
// 0x4152b00

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Land(MethodInfo *method)

{
  if (g_data_057acc8f == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_land");
    g_data_057acc8f = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Die (const MethodInfo* method);
// 0x4152b30

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Die(MethodInfo *method)

{
  if (g_data_057acc90 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_die");
    g_data_057acc90 = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_AttackCombo (const MethodInfo* method);
// 0x4152b60

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_AttackCombo(MethodInfo *method)

{
  if (g_data_057acc91 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_attack_combo_full");
    g_data_057acc91 = '\x01';
  }
  return "ErenRig_VER2|et_attack_combo_full";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x4152b90

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (g_data_057acc92 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_attack_kick");
    g_data_057acc92 = '\x01';
  }
  return "ErenRig_VER2|et_attack_kick";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Stun (const MethodInfo* method);
// 0x4152bc0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Stun(MethodInfo *method)

{
  if (g_data_057acc93 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_hit_titan");
    g_data_057acc93 = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteNod
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_EmoteNod (const MethodInfo* method);
// 0x4152bf0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_EmoteNod(MethodInfo *method)

{
  if (g_data_057acc94 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_yes");
    g_data_057acc94 = '\x01';
  }
  return "ErenRig_VER2|et_yes";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x4152c20

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (g_data_057acc95 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_born");
    g_data_057acc95 = '\x01';
  }
  return "ErenRig_VER2|et_born";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockLift (const MethodInfo* method);
// 0x4152c50

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockLift(MethodInfo *method)

{
  if (g_data_057acc96 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_lift");
    g_data_057acc96 = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift001
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockLift001 (const MethodInfo* method);
// 0x4152c80

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockLift001(MethodInfo *method)

{
  if (g_data_057acc97 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_lift.001");
    g_data_057acc97 = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift.001";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockWalk
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockWalk (const MethodInfo* method);
// 0x4152cb0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockWalk(MethodInfo *method)

{
  if (g_data_057acc98 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_walk");
    g_data_057acc98 = '\x01';
  }
  return "ErenRig_VER2|et_rock_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockFixHole
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockFixHole (const MethodInfo* method);
// 0x4152ce0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockFixHole(MethodInfo *method)

{
  if (g_data_057acc99 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_fix_hole");
    g_data_057acc99 = '\x01';
  }
  return "ErenRig_VER2|et_rock_fix_hole";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_ClassName (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x4152d10

System_String_o *
CustomLogic_CustomLogicErenAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acc9a == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenAnimationEnum");
    g_data_057acc9a = '\x01';
  }
  return "ErenAnimationEnum";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x4152d40

bool_conflict
CustomLogic_CustomLogicErenAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_IsStatic (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x4152d50

bool_conflict
CustomLogic_CustomLogicErenAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x4152d60

bool_conflict
CustomLogic_CustomLogicErenAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


