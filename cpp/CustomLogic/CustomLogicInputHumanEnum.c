// Type: CustomLogic.CustomLogicInputHumanEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputHumanEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputHumanEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputHumanEnum_o* CustomLogic_CustomLogicInputHumanEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4176a10

CustomLogic_CustomLogicInputHumanEnum_o *
CustomLogic_CustomLogicInputHumanEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicInputHumanEnum_o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_ArgumentException_o *__this;
  undefined8 *puVar7;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *pSVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acf4c == '\0') {
    pSStack_20 = (System_String_o *)0x4176a2c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf4c = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4176aa7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4176a56;
    pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicInputHumanEnum);
    if (g_data_057acf3a == '\0') {
      pSStack_20 = (System_String_o *)0x4176a6e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acf3a = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4176a8d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4176a97;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    return pCVar3;
  }
  pSStack_20 = (System_String_o *)0x4176aaf;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4176ac2;
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4176ad1;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicInputHumanEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4176ae0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4176af0;
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4176aff;
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4176b07;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSStack_20 = (System_String_o *)0x4176b17;
  System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4176b23;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicInputHumanEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4176b2e;
  pSVar8 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar4;
  if (g_data_057acf4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"HorseWalk");
    il2cpp_runtime_helper_023445d0(&"AttackSpecial");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Dash");
    il2cpp_runtime_helper_023445d0(&"HookLeft");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"HookBoth");
    il2cpp_runtime_helper_023445d0(&"ReelOut");
    il2cpp_runtime_helper_023445d0(&"HorseJump");
    il2cpp_runtime_helper_023445d0(&"AttackDefault");
    il2cpp_runtime_helper_023445d0(&"Reload");
    il2cpp_runtime_helper_023445d0(&"NapeLock");
    il2cpp_runtime_helper_023445d0(&"ReelIn");
    il2cpp_runtime_helper_023445d0(&"HorseMount");
    il2cpp_runtime_helper_023445d0(&"HookRight");
    g_data_057acf4d = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar1 < 0x540059f0) {
    if (uVar1 < 0x1a43a2ad) {
      if (uVar1 == 0xe1ef32d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Jump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf57 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_11_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
            g_data_057acf57 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x16ed547a) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"ReelIn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf54 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelIn_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
            g_data_057acf54 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return pCVar3;
        }
      }
      else if ((uVar1 == 0x1a43a2ac) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Reload",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf58 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Reload_g____getter_12_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf58 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return pCVar3;
      }
    }
    else if (uVar1 < 0x2e485539) {
      if (uVar1 == 0x1a5c64b6) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackDefault",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar8 = pSStack_28;
          pSVar4 = pSStack_20;
          goto CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault;
        }
      }
      else if ((uVar1 == 0x2e485538) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"NapeLock",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf5c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NapeLock_g____getter_16);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf5c = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x41bc24a7) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HookLeft",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf50 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookLeft_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf50 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0x540059ef) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HorseWalk",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf5a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseWalk_g____getter_14);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
        g_data_057acf5a = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return pCVar3;
    }
  }
  else if (uVar1 < 0x8f5fbe99) {
    if (uVar1 < 0x68597616) {
      if (uVar1 == 0x5be800ee) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HorseJump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf5b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseJump_g____getter_15);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
            g_data_057acf5b = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return pCVar3;
        }
      }
      else if ((uVar1 == 0x68597615) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Dash",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf53 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dash_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf53 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x8f5fbe98) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSpecial",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf4f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSpecial_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf4f = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0x77f33158) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HookRight",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf51 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRight_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
        g_data_057acf51 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return pCVar3;
    }
  }
  else if (uVar1 < 0xc52547e8) {
    if (uVar1 == 0xa114d213) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"ReelOut",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf55 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelOut_g____getter_9_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf55 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0xc52547e7) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HorseMount",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf59 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseMount_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
        g_data_057acf59 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xf526d670) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Dodge",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf56 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_10_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
        g_data_057acf56 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return pCVar3;
    }
  }
  else if ((uVar1 == 0xf8af8641) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HookBoth",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar7 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar7;
    if (g_data_057acf52 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookBoth_g____getter_6_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
      g_data_057acf52 = '\x01';
    }
    pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
    System_Func_object__object____ctor();
    pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    return pCVar3;
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputHumanEnum not found");
  pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar7 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar6);
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar4;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar7;
  if (g_data_057acf4e == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4177169;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackDefault_g____gette);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4177175;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4177181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417718d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf4e = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41771a3;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41771bc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41771cb;
  pCVar3 = (CustomLogic_CustomLogicInputHumanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41771e5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return pCVar3;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputHumanEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4176b30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputHumanEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acf4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"HorseWalk");
    il2cpp_runtime_helper_023445d0(&"AttackSpecial");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Dash");
    il2cpp_runtime_helper_023445d0(&"HookLeft");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"HookBoth");
    il2cpp_runtime_helper_023445d0(&"ReelOut");
    il2cpp_runtime_helper_023445d0(&"HorseJump");
    il2cpp_runtime_helper_023445d0(&"AttackDefault");
    il2cpp_runtime_helper_023445d0(&"Reload");
    il2cpp_runtime_helper_023445d0(&"NapeLock");
    il2cpp_runtime_helper_023445d0(&"ReelIn");
    il2cpp_runtime_helper_023445d0(&"HorseMount");
    il2cpp_runtime_helper_023445d0(&"HookRight");
    g_data_057acf4d = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x540059f0) {
    if (uVar1 < 0x1a43a2ad) {
      if (uVar1 == 0xe1ef32d) {
        bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf57 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_11_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
            g_data_057acf57 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x16ed547a) {
        bVar2 = System_String__op_Equality(name,"ReelIn",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf54 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelIn_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
            g_data_057acf54 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x1a43a2ac) &&
              (bVar2 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf58 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Reload_g____getter_12_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf58 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x2e485539) {
      if (uVar1 == 0x1a5c64b6) {
        bVar2 = System_String__op_Equality(name,"AttackDefault",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar4 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault;
        }
      }
      else if ((uVar1 == 0x2e485538) &&
              (bVar2 = System_String__op_Equality(name,"NapeLock",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf5c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NapeLock_g____getter_16);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf5c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x41bc24a7) {
      bVar2 = System_String__op_Equality(name,"HookLeft",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf50 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookLeft_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf50 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x540059ef) &&
            (bVar2 = System_String__op_Equality(name,"HorseWalk",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf5a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseWalk_g____getter_14);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
        g_data_057acf5a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x8f5fbe99) {
    if (uVar1 < 0x68597616) {
      if (uVar1 == 0x5be800ee) {
        bVar2 = System_String__op_Equality(name,"HorseJump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf5b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseJump_g____getter_15);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
            g_data_057acf5b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x68597615) &&
              (bVar2 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf53 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dash_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf53 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x8f5fbe98) {
      bVar2 = System_String__op_Equality(name,"AttackSpecial",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf4f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSpecial_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf4f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x77f33158) &&
            (bVar2 = System_String__op_Equality(name,"HookRight",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf51 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRight_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
        g_data_057acf51 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xc52547e8) {
    if (uVar1 == 0xa114d213) {
      bVar2 = System_String__op_Equality(name,"ReelOut",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf55 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelOut_g____getter_9_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
          g_data_057acf55 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xc52547e7) &&
            (bVar2 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf59 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseMount_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
        g_data_057acf59 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
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
      if (g_data_057acf56 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_10_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
        g_data_057acf56 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xf8af8641) &&
          (bVar2 = System_String__op_Equality(name,"HookBoth",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acf52 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookBoth_g____getter_6_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
      g_data_057acf52 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputHumanEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acf4e == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4177169;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackDefault_g____gette);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4177175;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4177181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417718d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf4e = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41771a3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41771bc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41771cb;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41771e5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackDefault
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault (const MethodInfo* method);
// 0x4177150

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackDefault_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf4e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackSpecial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial (const MethodInfo* method);
// 0x41771f0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSpecial_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf4f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft (const MethodInfo* method);
// 0x4177290

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf50 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookLeft_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf50 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight (const MethodInfo* method);
// 0x4177330

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookRight_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf51 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth (const MethodInfo* method);
// 0x41773d0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HookBoth_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf52 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash (const MethodInfo* method);
// 0x4177470

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf53 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dash_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf53 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn (const MethodInfo* method);
// 0x4177510

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf54 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelIn_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf54 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut (const MethodInfo* method);
// 0x41775b0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf55 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ReelOut_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf55 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x4177650

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dodge_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf56 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x41776f0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf57 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Reload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload (const MethodInfo* method);
// 0x4177790

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Reload_g____getter_12_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf58 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount (const MethodInfo* method);
// 0x4177830

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseMount_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf59 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseWalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk (const MethodInfo* method);
// 0x41778d0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf5a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseWalk_g____getter_14);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf5a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump (const MethodInfo* method);
// 0x4177970

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorseJump_g____getter_15);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf5b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__NapeLock
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock (const MethodInfo* method);
// 0x4177a10

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this;
  
  if (g_data_057acf5c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NapeLock_g____getter_16);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputHumanEnum_object);
    g_data_057acf5c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputHumanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum_Bindings___cctor (const MethodInfo* method);
// 0x4177ab0

void CustomLogic_CustomLogicInputHumanEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acf5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"HorseWalk");
    il2cpp_runtime_helper_023445d0(&"AttackSpecial");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Dash");
    il2cpp_runtime_helper_023445d0(&"HookLeft");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"HookBoth");
    il2cpp_runtime_helper_023445d0(&"ReelOut");
    il2cpp_runtime_helper_023445d0(&"HorseJump");
    il2cpp_runtime_helper_023445d0(&"AttackDefault");
    il2cpp_runtime_helper_023445d0(&"Reload");
    il2cpp_runtime_helper_023445d0(&"NapeLock");
    il2cpp_runtime_helper_023445d0(&"ReelIn");
    il2cpp_runtime_helper_023445d0(&"HorseMount");
    il2cpp_runtime_helper_023445d0(&"HookRight");
    g_data_057acf5d = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"AttackDefault",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSpecial",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HookLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HookRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HookBoth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ReelIn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ReelOut",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Reload",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HorseMount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HorseWalk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HorseJump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"NapeLock",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acf5e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf5e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackDefault>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackDefault_g____getter_2_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4177d50

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackDefault_g____getter_2_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf5e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf5e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackSpecial>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackSpecial_g____getter_3_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4177e00

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackSpecial_g____getter_3_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf5f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookLeft>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookLeft_g____getter_4_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4177eb0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookLeft_g____getter_4_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf60 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookRight>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookRight_g____getter_5_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4177f60

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookRight_g____getter_5_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf61 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookBoth>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookBoth_g____getter_6_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4178010

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookBoth_g____getter_6_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf62 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_7_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x41780c0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_7_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf63 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_8_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4178170

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_8_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf64 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_9_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4178220

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_9_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf65 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0e9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_10_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x41782d0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_10_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf66 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0ea = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4178380

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf67 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0eb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_12_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4178430

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_12_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf68 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0ec = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_13_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x41784e0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_13_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf69 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0ed = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseWalk>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseWalk_g____getter_14_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4178590

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseWalk_g____getter_14_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf6a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0ee = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseJump>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseJump_g____getter_15_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x4178640

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseJump_g____getter_15_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf6b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0ef = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__NapeLock>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__NapeLock_g____getter_16_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x41786f0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__NapeLock_g____getter_16_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf6c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057ad0f0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputHumanEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum___ctor (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x4175fd0

void CustomLogic_CustomLogicInputHumanEnum___ctor
               (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acf3a = '\x01';
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


// CustomLogic.CustomLogicInputHumanEnum$$get_AttackDefault
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_AttackDefault (const MethodInfo* method);
// 0x4176040

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_AttackDefault(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf3b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_AttackSpecial
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_AttackSpecial (const MethodInfo* method);
// 0x41760b0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_AttackSpecial(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf3c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookLeft (const MethodInfo* method);
// 0x4176120

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookLeft(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf3d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookRight
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookRight (const MethodInfo* method);
// 0x4176190

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookRight(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf3e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookBoth (const MethodInfo* method);
// 0x4176200

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookBoth(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf3f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Dash
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Dash (const MethodInfo* method);
// 0x4176270

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Dash(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf40 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ReelIn
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ReelIn (const MethodInfo* method);
// 0x41762e0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_ReelIn(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf41 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf41 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ReelOut
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ReelOut (const MethodInfo* method);
// 0x4176350

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_ReelOut(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf42 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Dodge (const MethodInfo* method);
// 0x41763c0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Dodge(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf43 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Jump (const MethodInfo* method);
// 0x4176430

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf44 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Reload
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Reload (const MethodInfo* method);
// 0x41764a0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Reload(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf45 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseMount
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseMount (const MethodInfo* method);
// 0x4176510

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseMount(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf46 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseWalk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseWalk (const MethodInfo* method);
// 0x4176580

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseWalk(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf47 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseJump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseJump (const MethodInfo* method);
// 0x41765f0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseJump(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf48 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_NapeLock
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_NapeLock (const MethodInfo* method);
// 0x4176660

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_NapeLock(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    g_data_057acf49 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputHumanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ClassName (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x41766d0

System_String_o *
CustomLogic_CustomLogicInputHumanEnum__get_ClassName
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acf4a == '\0') {
    il2cpp_runtime_helper_023445d0(&"InputHumanEnum");
    g_data_057acf4a = '\x01';
  }
  return "InputHumanEnum";
}


// CustomLogic.CustomLogicInputHumanEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_IsAbstract (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x4176700

bool_conflict
CustomLogic_CustomLogicInputHumanEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_IsStatic (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x4176710

bool_conflict
CustomLogic_CustomLogicInputHumanEnum__get_IsStatic
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x4176720

bool_conflict
CustomLogic_CustomLogicInputHumanEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputHumanEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum___cctor (const MethodInfo* method);
// 0x4176730

void CustomLogic_CustomLogicInputHumanEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057acf4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputHumanEnum);
    il2cpp_runtime_helper_023445d0(&"Human/AttackSpecial");
    il2cpp_runtime_helper_023445d0(&"Human/HookBoth");
    il2cpp_runtime_helper_023445d0(&"Human/HorseJump");
    il2cpp_runtime_helper_023445d0(&"Human/Dodge");
    il2cpp_runtime_helper_023445d0(&"Human/ReelOut");
    il2cpp_runtime_helper_023445d0(&"Human/HookLeft");
    il2cpp_runtime_helper_023445d0(&"Human/HookRight");
    il2cpp_runtime_helper_023445d0(&"Human/Dash");
    il2cpp_runtime_helper_023445d0(&"Human/HorseWalk");
    il2cpp_runtime_helper_023445d0(&"Human/Jump");
    il2cpp_runtime_helper_023445d0(&"Human/NapeLock");
    il2cpp_runtime_helper_023445d0(&"Human/AttackDefault");
    il2cpp_runtime_helper_023445d0(&"Human/HorseMount");
    il2cpp_runtime_helper_023445d0(&"Human/ReelIn");
    il2cpp_runtime_helper_023445d0(&"Human/Reload");
    g_data_057acf4b = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputHumanEnum + 0xb8) = "Human/AttackDefault";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8),"Human/AttackDefault");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Human/AttackSpecial";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Human/HookLeft";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Human/HookRight";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Human/HookBoth";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Human/Dash";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Human/ReelIn";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "Human/ReelOut";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "Human/Dodge";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Human/Jump";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "Human/Reload";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "Human/HorseMount";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "Human/HorseWalk";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "Human/HorseJump";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputHumanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "Human/NapeLock";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70);
  return;
}


