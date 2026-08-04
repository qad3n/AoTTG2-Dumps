// Type: CustomLogic.CustomLogicHumanStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanStateEnum_o* CustomLogic_CustomLogicHumanStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x416c800

CustomLogic_CustomLogicHumanStateEnum_o *
CustomLogic_CustomLogicHumanStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicHumanStateEnum_o *pCVar3;
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
  if (g_data_057ace7a == '\0') {
    pSStack_20 = (System_String_o *)0x416c81c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace7a = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x416c897;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x416c846;
    pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanStateEnum);
    if (g_data_057ace66 == '\0') {
      pSStack_20 = (System_String_o *)0x416c85e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ace66 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x416c87d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x416c887;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    return pCVar3;
  }
  pSStack_20 = (System_String_o *)0x416c89f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x416c8b2;
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x416c8c1;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicHumanStateEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x416c8d0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x416c8e0;
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x416c8ef;
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x416c8f7;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSStack_20 = (System_String_o *)0x416c907;
  System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x416c913;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicHumanStateEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x416c91e;
  pSVar8 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar4;
  if (g_data_057ace7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"GroundDodge");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"SpecialAction");
    il2cpp_runtime_helper_023445d0(&"SpecialAttack");
    il2cpp_runtime_helper_023445d0(&"Attack");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"AirDodge");
    il2cpp_runtime_helper_023445d0(&"EmoteAction");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"WallSlide");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"MountingHorse");
    il2cpp_runtime_helper_023445d0(&"Reload");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Grab");
    g_data_057ace7b = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar1 < 0x5d992b42) {
    if (uVar1 < 0x2ea46ab7) {
      if (uVar1 < 0x1a43a2ad) {
        if (uVar1 == 0x47d8d69) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"GroundDodge",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057ace7e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GroundDodge_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
              g_data_057ace7e = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            return pCVar3;
          }
        }
        else if (uVar1 == 0x1a43a2ac) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Reload",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057ace80 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Reload_g____getter_6_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
              g_data_057ace80 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            return pCVar3;
          }
        }
      }
      else if (uVar1 == 0x21c6d85f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Grab",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057ace83 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grab_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace83 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x2ea46ab6) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"WallSlide",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057ace8c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallSlide_g____getter_18);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace8c = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 < 0x3d692a72) {
      if (uVar1 == 0x3cd2b931) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"EmoteAction",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057ace84 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteAction_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace84 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x3d692a71) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Die",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057ace82 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace82 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x45aa17b3) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Idle",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        ppuVar10 = (undefined8 **)&uStack_18;
        pSVar8 = pSStack_28;
        pSVar4 = pSStack_20;
        goto CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle;
      }
    }
    else if (uVar1 == 0x5d992b41) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Stun",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057ace8b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_17_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace8b = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0xb460940d) {
    if (uVar1 < 0x8ba9331e) {
      if (uVar1 == 0x8ba9331d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Attack",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057ace7d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace7d = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x6c198db1) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Refill",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057ace81 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_7_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace81 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x8d57e66a) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Run",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057ace88 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_14_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace88 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xb460940c) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"SpecialAttack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057ace85 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialAttack_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace85 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0xd92f4bcb) {
    if (uVar1 == 0xc7f8c02e) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AirDodge",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057ace7f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirDodge_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace7f = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xd92f4bca) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"SpecialAction",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057ace86 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialAction_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace86 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 == 0xee1682bc) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Land",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057ace89 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_15_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
        g_data_057ace89 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xf972e12b) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"MountingHorse",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057ace8a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MountingHorse_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
        g_data_057ace8a = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xffc7c086) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Slide",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057ace87 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_13_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
        g_data_057ace87 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return pCVar3;
    }
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHumanStateEnum not found");
  pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar7 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar6);
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar4;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar7;
  if (g_data_057ace7c == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416cfd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416cfe5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416cff1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416cffd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace7c = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416d013;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416d02c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416d03b;
  pCVar3 = (CustomLogic_CustomLogicHumanStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416d055;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return pCVar3;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x416c920

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ace7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"GroundDodge");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"SpecialAction");
    il2cpp_runtime_helper_023445d0(&"SpecialAttack");
    il2cpp_runtime_helper_023445d0(&"Attack");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"AirDodge");
    il2cpp_runtime_helper_023445d0(&"EmoteAction");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"WallSlide");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"MountingHorse");
    il2cpp_runtime_helper_023445d0(&"Reload");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Grab");
    g_data_057ace7b = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x5d992b42) {
    if (uVar1 < 0x2ea46ab7) {
      if (uVar1 < 0x1a43a2ad) {
        if (uVar1 == 0x47d8d69) {
          bVar2 = System_String__op_Equality(name,"GroundDodge",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ace7e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GroundDodge_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
              g_data_057ace7e = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x1a43a2ac) &&
                (bVar2 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace80 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Reload_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace80 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x21c6d85f) {
        bVar2 = System_String__op_Equality(name,"Grab",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace83 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grab_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace83 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2ea46ab6) &&
              (bVar2 = System_String__op_Equality(name,"WallSlide",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallSlide_g____getter_18);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace8c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x3d692a72) {
      if (uVar1 == 0x3cd2b931) {
        bVar2 = System_String__op_Equality(name,"EmoteAction",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace84 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteAction_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace84 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x3d692a71) &&
              (bVar2 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace82 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace82 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
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
        goto CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle;
      }
    }
    else if ((uVar1 == 0x5d992b41) &&
            (bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace8b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_17_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
        g_data_057ace8b = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xb460940d) {
    if (uVar1 < 0x8ba9331e) {
      if (uVar1 == 0x8ba9331d) {
        bVar2 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ace7d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
            g_data_057ace7d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x6c198db1) &&
              (bVar2 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace81 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace81 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
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
        if (g_data_057ace88 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_14_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace88 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xb460940c) &&
            (bVar2 = System_String__op_Equality(name,"SpecialAttack",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace85 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialAttack_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
        g_data_057ace85 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xd92f4bcb) {
    if (uVar1 == 0xc7f8c02e) {
      bVar2 = System_String__op_Equality(name,"AirDodge",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ace7f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirDodge_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
          g_data_057ace7f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xd92f4bca) &&
            (bVar2 = System_String__op_Equality(name,"SpecialAction",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace86 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialAction_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
        g_data_057ace86 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xee1682bc) {
    bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace89 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_15_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
        g_data_057ace89 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf972e12b) {
    bVar2 = System_String__op_Equality(name,"MountingHorse",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ace8a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MountingHorse_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
        g_data_057ace8a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xffc7c086) &&
          (bVar2 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ace87 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_13_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
      g_data_057ace87 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHumanStateEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ace7c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416cfd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416cfe5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416cff1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416cffd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace7c = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416d013;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416d02c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416d03b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416d055;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x416cfc0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace7c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Attack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack (const MethodInfo* method);
// 0x416d060

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace7d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Attack_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace7d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__GroundDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge (const MethodInfo* method);
// 0x416d100

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GroundDodge_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace7e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__AirDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge (const MethodInfo* method);
// 0x416d1a0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AirDodge_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace7f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Reload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload (const MethodInfo* method);
// 0x416d240

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Reload_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace80 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x416d2e0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace81 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Refill_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace81 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x416d380

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Die_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace82 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Grab
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab (const MethodInfo* method);
// 0x416d420

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Grab_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace83 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__EmoteAction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction (const MethodInfo* method);
// 0x416d4c0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteAction_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace84 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAttack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack (const MethodInfo* method);
// 0x416d560

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialAttack_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace85 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction (const MethodInfo* method);
// 0x416d600

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpecialAction_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace86 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x416d6a0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Slide_g____getter_13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace87 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x416d740

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace88 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x416d7e0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace89 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Land_g____getter_15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace89 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__MountingHorse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse (const MethodInfo* method);
// 0x416d880

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace8a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MountingHorse_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace8a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x416d920

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stun_g____getter_17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace8b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__WallSlide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide (const MethodInfo* method);
// 0x416d9c0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this;
  
  if (g_data_057ace8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallSlide_g____getter_18);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanStateEnum_object);
    g_data_057ace8c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x416da60

void CustomLogic_CustomLogicHumanStateEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ace8d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"GroundDodge");
    il2cpp_runtime_helper_023445d0(&"Die");
    il2cpp_runtime_helper_023445d0(&"SpecialAction");
    il2cpp_runtime_helper_023445d0(&"SpecialAttack");
    il2cpp_runtime_helper_023445d0(&"Attack");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"AirDodge");
    il2cpp_runtime_helper_023445d0(&"EmoteAction");
    il2cpp_runtime_helper_023445d0(&"Stun");
    il2cpp_runtime_helper_023445d0(&"WallSlide");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"MountingHorse");
    il2cpp_runtime_helper_023445d0(&"Reload");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Grab");
    g_data_057ace8d = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Attack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GroundDodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AirDodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Reload",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Refill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Die",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Grab",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteAction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialAttack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpecialAction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Slide",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"MountingHorse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Stun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"WallSlide",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ace8e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace8e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0a9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416dd40

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace8e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace8e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0a9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Attack>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Attack_g____getter_3_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416ddf0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Attack_g____getter_3_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace8f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0aa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__GroundDodge>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__GroundDodge_g____getter_4_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416dea0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__GroundDodge_g____getter_4_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace90 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0ab = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__AirDodge>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__AirDodge_g____getter_5_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416df50

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__AirDodge_g____getter_5_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace91 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0ac = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_6_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e000

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_6_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace92 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0ad = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_7_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e0b0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_7_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace93 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0ae = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e160

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace94 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0af = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Grab>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Grab_g____getter_9_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e210

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Grab_g____getter_9_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace95 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__EmoteAction>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__EmoteAction_g____getter_10_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e2c0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__EmoteAction_g____getter_10_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace96 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAttack>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAttack_g____getter_11_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e370

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAttack_g____getter_11_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace97 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAction>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAction_g____getter_12_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e420

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAction_g____getter_12_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace98 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_13_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e4d0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_13_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace99 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Run_g____getter_14_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e580

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Run_g____getter_14_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace9a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Land_g____getter_15_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e630

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Land_g____getter_15_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace9b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__MountingHorse>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__MountingHorse_g____getter_16_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e6e0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__MountingHorse_g____getter_16_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace9c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_17_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e790

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_17_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace9d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__WallSlide>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__WallSlide_g____getter_18_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x416e840

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__WallSlide_g____getter_18_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace9e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ad0b9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum___ctor (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x416bab0

void CustomLogic_CustomLogicHumanStateEnum___ctor
               (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ace66 = '\x01';
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


// CustomLogic.CustomLogicHumanStateEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Idle (const MethodInfo* method);
// 0x416bb20

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Idle(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace67 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Attack
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Attack (const MethodInfo* method);
// 0x416bb90

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Attack(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace68 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_GroundDodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_GroundDodge (const MethodInfo* method);
// 0x416bc00

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_GroundDodge(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace69 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_AirDodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_AirDodge (const MethodInfo* method);
// 0x416bc70

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_AirDodge(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace6a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Reload
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Reload (const MethodInfo* method);
// 0x416bce0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Reload(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace6b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Refill (const MethodInfo* method);
// 0x416bd50

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Refill(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace6c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Die (const MethodInfo* method);
// 0x416bdc0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Die(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace6d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Grab
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Grab (const MethodInfo* method);
// 0x416be30

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Grab(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace6e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_EmoteAction
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_EmoteAction (const MethodInfo* method);
// 0x416bea0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_EmoteAction(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace6f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAttack
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_SpecialAttack (const MethodInfo* method);
// 0x416bf10

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_SpecialAttack(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace70 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAction
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_SpecialAction (const MethodInfo* method);
// 0x416bf80

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_SpecialAction(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace71 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Slide (const MethodInfo* method);
// 0x416bff0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Slide(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace72 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Run (const MethodInfo* method);
// 0x416c060

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Run(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace73 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Land (const MethodInfo* method);
// 0x416c0d0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Land(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace74 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_MountingHorse
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_MountingHorse (const MethodInfo* method);
// 0x416c140

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_MountingHorse(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace75 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace75 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Stun (const MethodInfo* method);
// 0x416c1b0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Stun(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace76 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace76 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_WallSlide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_WallSlide (const MethodInfo* method);
// 0x416c220

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_WallSlide(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    g_data_057ace77 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicHumanStateEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_ClassName (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x416c290

System_String_o *
CustomLogic_CustomLogicHumanStateEnum__get_ClassName
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ace78 == '\0') {
    il2cpp_runtime_helper_023445d0(&"HumanStateEnum");
    g_data_057ace78 = '\x01';
  }
  return "HumanStateEnum";
}


// CustomLogic.CustomLogicHumanStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_IsAbstract (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x416c2c0

bool_conflict
CustomLogic_CustomLogicHumanStateEnum__get_IsAbstract
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_IsStatic (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x416c2d0

bool_conflict
CustomLogic_CustomLogicHumanStateEnum__get_IsStatic
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x416c2e0

bool_conflict
CustomLogic_CustomLogicHumanStateEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanStateEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum___cctor (const MethodInfo* method);
// 0x416c2f0

void CustomLogic_CustomLogicHumanStateEnum___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_1a8;
  undefined4 uStack_198;
  System_Enum_o SStack_190;
  undefined4 uStack_180;
  System_Enum_o SStack_178;
  undefined4 uStack_168;
  System_Enum_o SStack_160;
  undefined4 uStack_150;
  System_Enum_o SStack_148;
  undefined4 uStack_138;
  System_Enum_o SStack_130;
  undefined4 uStack_120;
  System_Enum_o SStack_118;
  undefined4 uStack_108;
  System_Enum_o SStack_100;
  undefined4 uStack_f0;
  System_Enum_o SStack_e8;
  undefined4 uStack_d8;
  System_Enum_o SStack_d0;
  undefined4 uStack_c0;
  System_Enum_o SStack_b8;
  undefined4 uStack_a8;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (g_data_057ace79 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanState);
    g_data_057ace79 = '\x01';
  }
  SStack_28.klass = TypeInfo_HumanState;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CustomLogicHumanStateEnum + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8));
  SStack_40.klass = TypeInfo_HumanState;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  SStack_58.klass = TypeInfo_HumanState;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  SStack_70.klass = TypeInfo_HumanState;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  SStack_88.klass = TypeInfo_HumanState;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  SStack_a0.klass = TypeInfo_HumanState;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  SStack_b8.klass = TypeInfo_HumanState;
  SStack_b8.monitor = (void *)0xffffffffffffffff;
  uStack_a8 = 6;
  pSVar2 = System_Enum__ToString(&SStack_b8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x30) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  SStack_d0.klass = TypeInfo_HumanState;
  SStack_d0.monitor = (void *)0xffffffffffffffff;
  uStack_c0 = 7;
  pSVar2 = System_Enum__ToString(&SStack_d0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x38) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  SStack_e8.klass = TypeInfo_HumanState;
  SStack_e8.monitor = (void *)0xffffffffffffffff;
  uStack_d8 = 8;
  pSVar2 = System_Enum__ToString(&SStack_e8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x40) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  SStack_100.klass = TypeInfo_HumanState;
  SStack_100.monitor = (void *)0xffffffffffffffff;
  uStack_f0 = 9;
  pSVar2 = System_Enum__ToString(&SStack_100,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x48) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  SStack_118.klass = TypeInfo_HumanState;
  SStack_118.monitor = (void *)0xffffffffffffffff;
  uStack_108 = 10;
  pSVar2 = System_Enum__ToString(&SStack_118,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x50) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  SStack_130.klass = TypeInfo_HumanState;
  SStack_130.monitor = (void *)0xffffffffffffffff;
  uStack_120 = 0xb;
  pSVar2 = System_Enum__ToString(&SStack_130,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x58) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  SStack_148.klass = TypeInfo_HumanState;
  SStack_148.monitor = (void *)0xffffffffffffffff;
  uStack_138 = 0xc;
  pSVar2 = System_Enum__ToString(&SStack_148,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x60) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  SStack_160.klass = TypeInfo_HumanState;
  SStack_160.monitor = (void *)0xffffffffffffffff;
  uStack_150 = 0xd;
  pSVar2 = System_Enum__ToString(&SStack_160,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x68) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  SStack_178.klass = TypeInfo_HumanState;
  SStack_178.monitor = (void *)0xffffffffffffffff;
  uStack_168 = 0xe;
  pSVar2 = System_Enum__ToString(&SStack_178,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x70) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70);
  SStack_190.klass = TypeInfo_HumanState;
  SStack_190.monitor = (void *)0xffffffffffffffff;
  uStack_180 = 0xf;
  pSVar2 = System_Enum__ToString(&SStack_190,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x78) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78);
  SStack_1a8.klass = TypeInfo_HumanState;
  SStack_1a8.monitor = (void *)0xffffffffffffffff;
  uStack_198 = 0x10;
  pSVar2 = System_Enum__ToString(&SStack_1a8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicHumanStateEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x80) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x80,pSVar2);
  return;
}


