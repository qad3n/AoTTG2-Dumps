// Type: CustomLogic.CustomLogicInputInteractionEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputInteractionEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputInteractionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputInteractionEnum_o* CustomLogic_CustomLogicInputInteractionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41793c0

CustomLogic_CustomLogicInputInteractionEnum_o *
CustomLogic_CustomLogicInputInteractionEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicInputInteractionEnum_o *pCVar3;
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
  if (g_data_057acf82 == '\0') {
    pSStack_20 = (System_String_o *)0x41793dc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf82 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4179457;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4179406;
    pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicInputInteractionEnum);
    if (g_data_057acf6d == '\0') {
      pSStack_20 = (System_String_o *)0x417941e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acf6d = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x417943d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4179447;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    return pCVar3;
  }
  pSStack_20 = (System_String_o *)0x417945f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4179472;
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4179481;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicInputInteractionEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4179490;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41794a0;
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41794af;
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41794b7;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSStack_20 = (System_String_o *)0x41794c7;
  System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41794d3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicInputInteractionEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41794de;
  pSVar8 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar4;
  if (g_data_057acf83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"EmoteMenu");
    il2cpp_runtime_helper_023445d0(&"QuickSelect5");
    il2cpp_runtime_helper_023445d0(&"ItemMenu");
    il2cpp_runtime_helper_023445d0(&"MenuNext");
    il2cpp_runtime_helper_023445d0(&"Function1");
    il2cpp_runtime_helper_023445d0(&"QuickSelect2");
    il2cpp_runtime_helper_023445d0(&"Interact");
    il2cpp_runtime_helper_023445d0(&"Function4");
    il2cpp_runtime_helper_023445d0(&"QuickSelect1");
    il2cpp_runtime_helper_023445d0(&"QuickSelect3");
    il2cpp_runtime_helper_023445d0(&"Interact2");
    il2cpp_runtime_helper_023445d0(&"QuickSelect4");
    il2cpp_runtime_helper_023445d0(&"QuickSelect8");
    il2cpp_runtime_helper_023445d0(&"Interact3");
    il2cpp_runtime_helper_023445d0(&"Function2");
    il2cpp_runtime_helper_023445d0(&"Function3");
    il2cpp_runtime_helper_023445d0(&"QuickSelect6");
    il2cpp_runtime_helper_023445d0(&"QuickSelect7");
    g_data_057acf83 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar1 < 0x93a28290) {
    if (uVar1 < 0x6b01bab5) {
      if (uVar1 < 0x5f8e9555) {
        if (uVar1 == 0x1e2eb9ef) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Interact",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            ppuVar10 = (undefined8 **)&uStack_18;
            pSVar8 = pSStack_28;
            pSVar4 = pSStack_20;
            goto CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact;
          }
        }
        else if (uVar1 == 0x5f8e9554) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Interact3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acf86 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact3_g____getter_4);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
              g_data_057acf86 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            return pCVar3;
          }
        }
      }
      else if (uVar1 == 0x608e96e7) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Interact2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf85 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact2_g____getter_3);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf85 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x6b01bab4) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"EmoteMenu",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf88 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteMenu_g____getter_6);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf88 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 < 0x8fa27c44) {
      if (uVar1 == 0x8ea27ab0) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"QuickSelect4",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf8d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect4_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf8d = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x8fa27c43) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"QuickSelect5",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf8e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect5_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf8e = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x90a27dd6) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"QuickSelect6",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect6_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf8f = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x91a27f69) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"QuickSelect7",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf90 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect7_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf90 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x93a2828f) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"QuickSelect1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf8a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect1_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf8a = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0xa7d7f889) {
    if (uVar1 < 0x95a285b6) {
      if (uVar1 == 0x94a28422) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"QuickSelect2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf8b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect2_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf8b = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x95a285b5) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"QuickSelect3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf8c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect3_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf8c = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x9aa28d94) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"QuickSelect8",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf91 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect8_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf91 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xa7d7f888) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Function1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf92 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function1_g____getter_16);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf92 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0xaad7fd42) {
    if (uVar1 == 0xa9d7fbae) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Function3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf94 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function3_g____getter_18);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf94 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xaad7fd41) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Function2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf93 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function2_g____getter_17);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf93 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 == 0xacd80067) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Function4",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf95 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function4_g____getter_19);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        g_data_057acf95 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xf092cb97) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"MenuNext",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf89 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MenuNext_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        g_data_057acf89 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xf32eba39) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"ItemMenu",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf87 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ItemMenu_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        g_data_057acf87 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      return pCVar3;
    }
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputInteractionEnum not found");
  pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar7 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar6);
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar4;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar7;
  if (g_data_057acf84 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4179bf9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4179c05;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4179c11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4179c1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf84 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4179c33;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4179c4c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4179c5b;
  pCVar3 = (CustomLogic_CustomLogicInputInteractionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4179c75;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return pCVar3;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputInteractionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41794e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057acf83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"EmoteMenu");
    il2cpp_runtime_helper_023445d0(&"QuickSelect5");
    il2cpp_runtime_helper_023445d0(&"ItemMenu");
    il2cpp_runtime_helper_023445d0(&"MenuNext");
    il2cpp_runtime_helper_023445d0(&"Function1");
    il2cpp_runtime_helper_023445d0(&"QuickSelect2");
    il2cpp_runtime_helper_023445d0(&"Interact");
    il2cpp_runtime_helper_023445d0(&"Function4");
    il2cpp_runtime_helper_023445d0(&"QuickSelect1");
    il2cpp_runtime_helper_023445d0(&"QuickSelect3");
    il2cpp_runtime_helper_023445d0(&"Interact2");
    il2cpp_runtime_helper_023445d0(&"QuickSelect4");
    il2cpp_runtime_helper_023445d0(&"QuickSelect8");
    il2cpp_runtime_helper_023445d0(&"Interact3");
    il2cpp_runtime_helper_023445d0(&"Function2");
    il2cpp_runtime_helper_023445d0(&"Function3");
    il2cpp_runtime_helper_023445d0(&"QuickSelect6");
    il2cpp_runtime_helper_023445d0(&"QuickSelect7");
    g_data_057acf83 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x93a28290) {
    if (uVar1 < 0x6b01bab5) {
      if (uVar1 < 0x5f8e9555) {
        if (uVar1 == 0x1e2eb9ef) {
          bVar2 = System_String__op_Equality(name,"Interact",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar4 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            goto CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact;
          }
        }
        else if ((uVar1 == 0x5f8e9554) &&
                (bVar2 = System_String__op_Equality(name,"Interact3",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf86 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact3_g____getter_4);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf86 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x608e96e7) {
        bVar2 = System_String__op_Equality(name,"Interact2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf85 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact2_g____getter_3);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf85 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x6b01bab4) &&
              (bVar2 = System_String__op_Equality(name,"EmoteMenu",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf88 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteMenu_g____getter_6);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf88 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x8fa27c44) {
      if (uVar1 == 0x8ea27ab0) {
        bVar2 = System_String__op_Equality(name,"QuickSelect4",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf8d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect4_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf8d = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x8fa27c43) &&
              (bVar2 = System_String__op_Equality(name,"QuickSelect5",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf8e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect5_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf8e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x90a27dd6) {
      bVar2 = System_String__op_Equality(name,"QuickSelect6",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect6_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf8f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x91a27f69) {
      bVar2 = System_String__op_Equality(name,"QuickSelect7",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf90 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect7_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf90 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x93a2828f) &&
            (bVar2 = System_String__op_Equality(name,"QuickSelect1",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf8a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect1_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        g_data_057acf8a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xa7d7f889) {
    if (uVar1 < 0x95a285b6) {
      if (uVar1 == 0x94a28422) {
        bVar2 = System_String__op_Equality(name,"QuickSelect2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf8b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect2_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
            g_data_057acf8b = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x95a285b5) &&
              (bVar2 = System_String__op_Equality(name,"QuickSelect3",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf8c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect3_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf8c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9aa28d94) {
      bVar2 = System_String__op_Equality(name,"QuickSelect8",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf91 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect8_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf91 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xa7d7f888) &&
            (bVar2 = System_String__op_Equality(name,"Function1",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf92 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function1_g____getter_16);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        g_data_057acf92 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xaad7fd42) {
    if (uVar1 == 0xa9d7fbae) {
      bVar2 = System_String__op_Equality(name,"Function3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf94 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function3_g____getter_18);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
          g_data_057acf94 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xaad7fd41) &&
            (bVar2 = System_String__op_Equality(name,"Function2",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf93 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function2_g____getter_17);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        g_data_057acf93 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xacd80067) {
    bVar2 = System_String__op_Equality(name,"Function4",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf95 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function4_g____getter_19);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        g_data_057acf95 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xf092cb97) {
    bVar2 = System_String__op_Equality(name,"MenuNext",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf89 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MenuNext_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
        g_data_057acf89 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xf32eba39) &&
          (bVar2 = System_String__op_Equality(name,"ItemMenu",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acf87 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ItemMenu_g____getter_5_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
      g_data_057acf87 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputInteractionEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acf84 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4179bf9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4179c05;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4179c11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4179c1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf84 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4179c33;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4179c4c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4179c5b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4179c75;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact (const MethodInfo* method);
// 0x4179be0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf84 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2 (const MethodInfo* method);
// 0x4179c80

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact2_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf85 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3 (const MethodInfo* method);
// 0x4179d20

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interact3_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf86 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__ItemMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu (const MethodInfo* method);
// 0x4179dc0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ItemMenu_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf87 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__EmoteMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu (const MethodInfo* method);
// 0x4179e60

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EmoteMenu_g____getter_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf88 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__MenuNext
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext (const MethodInfo* method);
// 0x4179f00

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf89 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MenuNext_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf89 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1 (const MethodInfo* method);
// 0x4179fa0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf8a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect1_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf8a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2 (const MethodInfo* method);
// 0x417a040

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect2_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf8b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3 (const MethodInfo* method);
// 0x417a0e0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect3_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf8c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4 (const MethodInfo* method);
// 0x417a180

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect4_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf8d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5 (const MethodInfo* method);
// 0x417a220

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect5_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf8e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6 (const MethodInfo* method);
// 0x417a2c0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect6_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf8f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7 (const MethodInfo* method);
// 0x417a360

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect7_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf90 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8 (const MethodInfo* method);
// 0x417a400

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf91 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__QuickSelect8_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf91 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1 (const MethodInfo* method);
// 0x417a4a0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf92 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function1_g____getter_16);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf92 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2 (const MethodInfo* method);
// 0x417a540

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf93 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function2_g____getter_17);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf93 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3 (const MethodInfo* method);
// 0x417a5e0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function3_g____getter_18);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf94 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4 (const MethodInfo* method);
// 0x417a680

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this;
  
  if (g_data_057acf95 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Function4_g____getter_19);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputInteractionEnum_object);
    g_data_057acf95 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputInteractionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputInteractionEnum);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum_Bindings___cctor (const MethodInfo* method);
// 0x417a720

void CustomLogic_CustomLogicInputInteractionEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"EmoteMenu");
    il2cpp_runtime_helper_023445d0(&"QuickSelect5");
    il2cpp_runtime_helper_023445d0(&"ItemMenu");
    il2cpp_runtime_helper_023445d0(&"MenuNext");
    il2cpp_runtime_helper_023445d0(&"Function1");
    il2cpp_runtime_helper_023445d0(&"QuickSelect2");
    il2cpp_runtime_helper_023445d0(&"Interact");
    il2cpp_runtime_helper_023445d0(&"Function4");
    il2cpp_runtime_helper_023445d0(&"QuickSelect1");
    il2cpp_runtime_helper_023445d0(&"QuickSelect3");
    il2cpp_runtime_helper_023445d0(&"Interact2");
    il2cpp_runtime_helper_023445d0(&"QuickSelect4");
    il2cpp_runtime_helper_023445d0(&"QuickSelect8");
    il2cpp_runtime_helper_023445d0(&"Interact3");
    il2cpp_runtime_helper_023445d0(&"Function2");
    il2cpp_runtime_helper_023445d0(&"Function3");
    il2cpp_runtime_helper_023445d0(&"QuickSelect6");
    il2cpp_runtime_helper_023445d0(&"QuickSelect7");
    g_data_057acf96 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Interact",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Interact2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Interact3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ItemMenu",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EmoteMenu",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"MenuNext",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"QuickSelect1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"QuickSelect2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"QuickSelect3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"QuickSelect4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"QuickSelect5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"QuickSelect6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"QuickSelect7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"QuickSelect8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Function1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Function2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Function3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Function4",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acf97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf97 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact_g____getter_2_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417aa20

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact_g____getter_2_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf97 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact2_g____getter_3_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417aad0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact2_g____getter_3_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf98 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact3>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact3_g____getter_4_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417ab80

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact3_g____getter_4_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf99 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__ItemMenu>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ItemMenu_g____getter_5_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417ac30

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ItemMenu_g____getter_5_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf9a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__EmoteMenu>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__EmoteMenu_g____getter_6_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417ace0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__EmoteMenu_g____getter_6_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf9b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__MenuNext>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__MenuNext_g____getter_7_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417ad90

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__MenuNext_g____getter_7_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf9c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect1>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect1_g____getter_8_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417ae40

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect1_g____getter_8_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf9d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect2>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect2_g____getter_9_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417aef0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect2_g____getter_9_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf9e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect3>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect3_g____getter_10_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417afa0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect3_g____getter_10_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf9f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0f9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect4>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect4_g____getter_11_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b050

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect4_g____getter_11_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0fa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0fa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect5>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect5_g____getter_12_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b100

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect5_g____getter_12_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0fb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect6>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect6_g____getter_13_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b1b0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect6_g____getter_13_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0fc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect7>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect7_g____getter_14_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b260

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect7_g____getter_14_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0fd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect8>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect8_g____getter_15_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b310

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect8_g____getter_15_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0fe = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function1>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function1_g____getter_16_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b3c0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function1_g____getter_16_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad0ff = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function2>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function2_g____getter_17_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b470

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function2_g____getter_17_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad100 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad100 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function3>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function3_g____getter_18_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b520

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function3_g____getter_18_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad101 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad101 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function4>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function4_g____getter_19_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x417b5d0

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function4_g____getter_19_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acfa8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad102 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057ad102 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputInteractionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum___ctor (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x41787a0

void CustomLogic_CustomLogicInputInteractionEnum___ctor
               (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acf6d = '\x01';
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


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact (const MethodInfo* method);
// 0x4178810

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf6e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact2 (const MethodInfo* method);
// 0x4178880

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf6f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact3 (const MethodInfo* method);
// 0x41788f0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf70 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ItemMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ItemMenu (const MethodInfo* method);
// 0x4178960

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_ItemMenu(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf71 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_EmoteMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_EmoteMenu (const MethodInfo* method);
// 0x41789d0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_EmoteMenu(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf72 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_MenuNext
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_MenuNext (const MethodInfo* method);
// 0x4178a40

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_MenuNext(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf73 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect1 (const MethodInfo* method);
// 0x4178ab0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf74 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect2 (const MethodInfo* method);
// 0x4178b20

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf75 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf75 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect3 (const MethodInfo* method);
// 0x4178b90

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf76 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf76 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect4
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect4 (const MethodInfo* method);
// 0x4178c00

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf77 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect5
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect5 (const MethodInfo* method);
// 0x4178c70

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect5(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf78 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect6
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect6 (const MethodInfo* method);
// 0x4178ce0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect6(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf79 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf79 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect7
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect7 (const MethodInfo* method);
// 0x4178d50

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect7(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf7a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect8
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect8 (const MethodInfo* method);
// 0x4178dc0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect8(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf7b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function1 (const MethodInfo* method);
// 0x4178e30

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf7c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function2 (const MethodInfo* method);
// 0x4178ea0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf7d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf7d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function3 (const MethodInfo* method);
// 0x4178f10

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf7e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf7e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function4
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function4 (const MethodInfo* method);
// 0x4178f80

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function4(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    g_data_057acf7f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputInteractionEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ClassName (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x4178ff0

System_String_o *
CustomLogic_CustomLogicInputInteractionEnum__get_ClassName
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acf80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"InputInteractionEnum");
    g_data_057acf80 = '\x01';
  }
  return "InputInteractionEnum";
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_IsAbstract (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x4179020

bool_conflict
CustomLogic_CustomLogicInputInteractionEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_IsStatic (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x4179030

bool_conflict
CustomLogic_CustomLogicInputInteractionEnum__get_IsStatic
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x4179040

bool_conflict
CustomLogic_CustomLogicInputInteractionEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputInteractionEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum___cctor (const MethodInfo* method);
// 0x4179050

void CustomLogic_CustomLogicInputInteractionEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057acf81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputInteractionEnum);
    il2cpp_runtime_helper_023445d0(&"Interaction/QuickSelect3");
    il2cpp_runtime_helper_023445d0(&"Interaction/Interact");
    il2cpp_runtime_helper_023445d0(&"Interaction/Interact3");
    il2cpp_runtime_helper_023445d0(&"Interaction/Function3");
    il2cpp_runtime_helper_023445d0(&"Interaction/MenuNext");
    il2cpp_runtime_helper_023445d0(&"Interaction/QuickSelect4");
    il2cpp_runtime_helper_023445d0(&"Interaction/QuickSelect8");
    il2cpp_runtime_helper_023445d0(&"Interaction/QuickSelect1");
    il2cpp_runtime_helper_023445d0(&"Interaction/ItemMenu");
    il2cpp_runtime_helper_023445d0(&"Interaction/EmoteMenu");
    il2cpp_runtime_helper_023445d0(&"Interaction/QuickSelect5");
    il2cpp_runtime_helper_023445d0(&"Interaction/QuickSelect2");
    il2cpp_runtime_helper_023445d0(&"Interaction/Function1");
    il2cpp_runtime_helper_023445d0(&"Interaction/Function2");
    il2cpp_runtime_helper_023445d0(&"Interaction/QuickSelect6");
    il2cpp_runtime_helper_023445d0(&"Interaction/Interact2");
    il2cpp_runtime_helper_023445d0(&"Interaction/QuickSelect7");
    il2cpp_runtime_helper_023445d0(&"Interaction/Function4");
    g_data_057acf81 = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8) = "Interaction/Interact";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8),"Interaction/Interact");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Interaction/Interact2";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Interaction/Interact3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Interaction/ItemMenu";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Interaction/EmoteMenu";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Interaction/MenuNext";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Interaction/QuickSelect1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "Interaction/QuickSelect2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "Interaction/QuickSelect3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Interaction/QuickSelect4";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "Interaction/QuickSelect5";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "Interaction/QuickSelect6";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "Interaction/QuickSelect7";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "Interaction/QuickSelect8";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "Interaction/Function1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "Interaction/Function2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "Interaction/Function3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputInteractionEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "Interaction/Function4";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x88);
  return;
}


