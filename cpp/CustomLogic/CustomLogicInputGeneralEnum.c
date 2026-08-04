// Type: CustomLogic.CustomLogicInputGeneralEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputGeneralEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputGeneralEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputGeneralEnum_o* CustomLogic_CustomLogicInputGeneralEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41735e0

CustomLogic_CustomLogicInputGeneralEnum_o *
CustomLogic_CustomLogicInputGeneralEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicInputGeneralEnum_o *pCVar3;
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
  if (g_data_057acf0b == '\0') {
    pSStack_20 = (System_String_o *)0x41735fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf0b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4173677;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4173626;
    pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicInputGeneralEnum);
    if (g_data_057acef2 == '\0') {
      pSStack_20 = (System_String_o *)0x417363e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acef2 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x417365d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4173667;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    return pCVar3;
  }
  pSStack_20 = (System_String_o *)0x417367f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4173692;
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41736a1;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicInputGeneralEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41736b0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41736c0;
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41736cf;
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41736d7;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSStack_20 = (System_String_o *)0x41736e7;
  System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41736f3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicInputGeneralEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41736fe;
  pSVar8 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar4;
  if (g_data_057acf0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Right");
    il2cpp_runtime_helper_023445d0(&"SpectatePreviousPlayer");
    il2cpp_runtime_helper_023445d0(&"ToggleMap");
    il2cpp_runtime_helper_023445d0(&"Down");
    il2cpp_runtime_helper_023445d0(&"HideCursor");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"PushToTalk");
    il2cpp_runtime_helper_023445d0(&"HideUI");
    il2cpp_runtime_helper_023445d0(&"Forward");
    il2cpp_runtime_helper_023445d0(&"SpectateNextPlayer");
    il2cpp_runtime_helper_023445d0(&"ChangeCharacter");
    il2cpp_runtime_helper_023445d0(&"RestartGame");
    il2cpp_runtime_helper_023445d0(&"Chat");
    il2cpp_runtime_helper_023445d0(&"Up");
    il2cpp_runtime_helper_023445d0(&"DebugWindow");
    il2cpp_runtime_helper_023445d0(&"Pause");
    il2cpp_runtime_helper_023445d0(&"Left");
    il2cpp_runtime_helper_023445d0(&"Modifier");
    il2cpp_runtime_helper_023445d0(&"ChangeCamera");
    il2cpp_runtime_helper_023445d0(&"ToggleScoreboard");
    il2cpp_runtime_helper_023445d0(&"Autorun");
    il2cpp_runtime_helper_023445d0(&"SkipCutscene");
    g_data_057acf0c = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar1 < 0x86de76b7) {
    if (uVar1 < 0x2279d8cc) {
      if (uVar1 < 0xf7c56a9) {
        if (uVar1 == 0x7e09cc2) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"SkipCutscene",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acf20 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SkipCutscene_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
              g_data_057acf20 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            return pCVar3;
          }
        }
        else if (uVar1 == 0xf7c56a8) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"ChangeCharacter",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acf16 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeCharacter_g____get);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
              g_data_057acf16 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            return pCVar3;
          }
        }
      }
      else if (uVar1 == 0x145dfac4) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"DebugWindow",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf22 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DebugWindow_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf22 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x1e9e9f85) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Right",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf10 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Right_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf10 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x2279d8cb) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Chat",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf1a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Chat_g____getter_15_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf1a = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 < 0x496ac1c7) {
      if (uVar1 == 0x42f35940) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Up",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf11 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Up_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf11 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x44f9bf2d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Pause",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf15 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Pause_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf15 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x496ac1c6) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"RestartGame",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf17 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RestartGame_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf17 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x8134b193) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HideUI",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HideUI_g____getter_22_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf21 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x86de76b6) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"SpectateNextPlayer",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf1f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectateNextPlayer_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf1f = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x4c33ceaa) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"PushToTalk",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf1b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PushToTalk_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf1b = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0x9cd60e68) {
    if (uVar1 < 0x896ac890) {
      if (uVar1 == 0x88ce65f6) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"ChangeCamera",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf1c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeCamera_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf1c = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x896ac88f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Autorun",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acf14 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Autorun_g____getter_9_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf14 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x92773890) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Left",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf0f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Left_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf0f = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x9c35923b) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"ToggleScoreboard",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf18 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToggleScoreboard_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf18 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x9cd60e67) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"HideCursor",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf1d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HideCursor_g____getter_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf1d = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0xcfea99f2) {
    if (uVar1 == 0xa4995035) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Down",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf12 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Down_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf12 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xc2954bc2) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Back",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf0e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Back_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf0e = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xcfea99f1) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"ToggleMap",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acf19 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToggleMap_g____getter_14);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf19 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 == 0xd31e770e) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"SpectatePreviousPlayer",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf1e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectatePreviousPlayer_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        g_data_057acf1e = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xe713b670) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Modifier",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acf13 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Modifier_g____getter_8_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        g_data_057acf13 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xe50883ba) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Forward",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      ppuVar10 = (undefined8 **)&uStack_18;
      pSVar8 = pSStack_28;
      pSVar4 = pSStack_20;
      goto CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward;
    }
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputGeneralEnum not found");
  pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar7 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar6);
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar4;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar7;
  if (g_data_057acf0d == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4173f79;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Forward_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4173f85;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4173f91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4173f9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf0d = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4173fb3;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4173fcc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4173fdb;
  pCVar3 = (CustomLogic_CustomLogicInputGeneralEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4173ff5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return pCVar3;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputGeneralEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4173700

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057acf0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Right");
    il2cpp_runtime_helper_023445d0(&"SpectatePreviousPlayer");
    il2cpp_runtime_helper_023445d0(&"ToggleMap");
    il2cpp_runtime_helper_023445d0(&"Down");
    il2cpp_runtime_helper_023445d0(&"HideCursor");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"PushToTalk");
    il2cpp_runtime_helper_023445d0(&"HideUI");
    il2cpp_runtime_helper_023445d0(&"Forward");
    il2cpp_runtime_helper_023445d0(&"SpectateNextPlayer");
    il2cpp_runtime_helper_023445d0(&"ChangeCharacter");
    il2cpp_runtime_helper_023445d0(&"RestartGame");
    il2cpp_runtime_helper_023445d0(&"Chat");
    il2cpp_runtime_helper_023445d0(&"Up");
    il2cpp_runtime_helper_023445d0(&"DebugWindow");
    il2cpp_runtime_helper_023445d0(&"Pause");
    il2cpp_runtime_helper_023445d0(&"Left");
    il2cpp_runtime_helper_023445d0(&"Modifier");
    il2cpp_runtime_helper_023445d0(&"ChangeCamera");
    il2cpp_runtime_helper_023445d0(&"ToggleScoreboard");
    il2cpp_runtime_helper_023445d0(&"Autorun");
    il2cpp_runtime_helper_023445d0(&"SkipCutscene");
    g_data_057acf0c = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x86de76b7) {
    if (uVar1 < 0x2279d8cc) {
      if (uVar1 < 0xf7c56a9) {
        if (uVar1 == 0x7e09cc2) {
          bVar2 = System_String__op_Equality(name,"SkipCutscene",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acf20 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SkipCutscene_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
              g_data_057acf20 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0xf7c56a8) &&
                (bVar2 = System_String__op_Equality(name,"ChangeCharacter",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf16 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeCharacter_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf16 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x145dfac4) {
        bVar2 = System_String__op_Equality(name,"DebugWindow",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf22 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DebugWindow_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf22 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x1e9e9f85) {
        bVar2 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf10 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Right_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf10 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2279d8cb) &&
              (bVar2 = System_String__op_Equality(name,"Chat",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf1a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Chat_g____getter_15_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf1a = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x496ac1c7) {
      if (uVar1 == 0x42f35940) {
        bVar2 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf11 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Up_g____getter_6_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf11 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x44f9bf2d) {
        bVar2 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf15 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Pause_g____getter_10_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf15 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x496ac1c6) &&
              (bVar2 = System_String__op_Equality(name,"RestartGame",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf17 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RestartGame_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf17 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x8134b193) {
      bVar2 = System_String__op_Equality(name,"HideUI",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HideUI_g____getter_22_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf21 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x86de76b6) {
      bVar2 = System_String__op_Equality(name,"SpectateNextPlayer",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf1f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectateNextPlayer_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf1f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x4c33ceaa) &&
            (bVar2 = System_String__op_Equality(name,"PushToTalk",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf1b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PushToTalk_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        g_data_057acf1b = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x9cd60e68) {
    if (uVar1 < 0x896ac890) {
      if (uVar1 == 0x88ce65f6) {
        bVar2 = System_String__op_Equality(name,"ChangeCamera",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acf1c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeCamera_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
            g_data_057acf1c = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x896ac88f) &&
              (bVar2 = System_String__op_Equality(name,"Autorun",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf14 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Autorun_g____getter_9_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf14 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x92773890) {
      bVar2 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf0f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Left_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf0f = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9c35923b) {
      bVar2 = System_String__op_Equality(name,"ToggleScoreboard",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf18 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToggleScoreboard_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf18 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x9cd60e67) &&
            (bVar2 = System_String__op_Equality(name,"HideCursor",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf1d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HideCursor_g____getter_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        g_data_057acf1d = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xcfea99f2) {
    if (uVar1 == 0xa4995035) {
      bVar2 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf12 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Down_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf12 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xc2954bc2) {
      bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acf0e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Back_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
          g_data_057acf0e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xcfea99f1) &&
            (bVar2 = System_String__op_Equality(name,"ToggleMap",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf19 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToggleMap_g____getter_14);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        g_data_057acf19 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xd31e770e) {
    bVar2 = System_String__op_Equality(name,"SpectatePreviousPlayer",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf1e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectatePreviousPlayer_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        g_data_057acf1e = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xe713b670) {
    bVar2 = System_String__op_Equality(name,"Modifier",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acf13 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Modifier_g____getter_8_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
        g_data_057acf13 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xe50883ba) &&
          (bVar2 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puVar4 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputGeneralEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acf0d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4173f79;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Forward_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4173f85;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4173f91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4173f9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf0d = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4173fb3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4173fcc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4173fdb;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4173ff5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x4173f60

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf0d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Forward_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf0d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Back
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back (const MethodInfo* method);
// 0x4174000

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Back(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Back_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf0e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x41740a0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf0f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Left_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf0f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x4174140

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf10 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Right_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf10 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x41741e0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf11 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Up_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf11 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x4174280

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf12 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Down_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf12 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Modifier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier (const MethodInfo* method);
// 0x4174320

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Modifier(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Modifier_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf13 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Autorun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun (const MethodInfo* method);
// 0x41743c0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Autorun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf14 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Autorun_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf14 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Pause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause (const MethodInfo* method);
// 0x4174460

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Pause(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf15 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Pause_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf15 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter (const MethodInfo* method);
// 0x4174500

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCharacter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeCharacter_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf16 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__RestartGame
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame (const MethodInfo* method);
// 0x41745a0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__RestartGame(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RestartGame_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf17 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleScoreboard
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard (const MethodInfo* method);
// 0x4174640

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleScoreboard
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToggleScoreboard_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf18 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleMap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap (const MethodInfo* method);
// 0x41746e0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ToggleMap(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf19 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ToggleMap_g____getter_14);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf19 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Chat
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat (const MethodInfo* method);
// 0x4174780

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__Chat(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Chat_g____getter_15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf1a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__PushToTalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk (const MethodInfo* method);
// 0x4174820

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__PushToTalk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PushToTalk_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf1b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCamera
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera (const MethodInfo* method);
// 0x41748c0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__ChangeCamera(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ChangeCamera_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf1c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideCursor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor (const MethodInfo* method);
// 0x4174960

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideCursor(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf1d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HideCursor_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf1d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectatePreviousPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer (const MethodInfo* method);
// 0x4174a00

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectatePreviousPlayer
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectatePreviousPlayer_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf1e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectateNextPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer (const MethodInfo* method);
// 0x4174aa0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SpectateNextPlayer
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf1f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpectateNextPlayer_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf1f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SkipCutscene
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene (const MethodInfo* method);
// 0x4174b40

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__SkipCutscene(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SkipCutscene_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf20 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideUI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI (const MethodInfo* method);
// 0x4174be0

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__HideUI(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HideUI_g____getter_22_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf21 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__DebugWindow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o* CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow (const MethodInfo* method);
// 0x4174c80

CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *
CustomLogic_CustomLogicInputGeneralEnum_Bindings____CreatePropertyBinding__DebugWindow(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *__this;
  
  if (g_data_057acf22 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DebugWindow_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputGeneralEnum_object);
    g_data_057acf22 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputGeneralEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputGeneralEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputGeneralEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputGeneralEnum);
  return __this;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum_Bindings___cctor (const MethodInfo* method);
// 0x4174d20

void CustomLogic_CustomLogicInputGeneralEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acf23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Right");
    il2cpp_runtime_helper_023445d0(&"SpectatePreviousPlayer");
    il2cpp_runtime_helper_023445d0(&"ToggleMap");
    il2cpp_runtime_helper_023445d0(&"Down");
    il2cpp_runtime_helper_023445d0(&"HideCursor");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"PushToTalk");
    il2cpp_runtime_helper_023445d0(&"HideUI");
    il2cpp_runtime_helper_023445d0(&"Forward");
    il2cpp_runtime_helper_023445d0(&"SpectateNextPlayer");
    il2cpp_runtime_helper_023445d0(&"ChangeCharacter");
    il2cpp_runtime_helper_023445d0(&"RestartGame");
    il2cpp_runtime_helper_023445d0(&"Chat");
    il2cpp_runtime_helper_023445d0(&"Up");
    il2cpp_runtime_helper_023445d0(&"DebugWindow");
    il2cpp_runtime_helper_023445d0(&"Pause");
    il2cpp_runtime_helper_023445d0(&"Left");
    il2cpp_runtime_helper_023445d0(&"Modifier");
    il2cpp_runtime_helper_023445d0(&"ChangeCamera");
    il2cpp_runtime_helper_023445d0(&"ToggleScoreboard");
    il2cpp_runtime_helper_023445d0(&"Autorun");
    il2cpp_runtime_helper_023445d0(&"SkipCutscene");
    g_data_057acf23 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Forward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Back",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Left",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Up",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Down",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Modifier",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Autorun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Pause",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ChangeCharacter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RestartGame",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ToggleScoreboard",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ToggleMap",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Chat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"PushToTalk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ChangeCamera",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HideCursor",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpectatePreviousPlayer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SpectateNextPlayer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SkipCutscene",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HideUI",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DebugWindow",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acf24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf24 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0cc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Forward>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Forward_g____getter_2_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x41750b0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Forward_g____getter_2_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf24 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0cc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Back>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Back_g____getter_3_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175160

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Back_g____getter_3_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf25 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf25 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0cd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Left>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Left_g____getter_4_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175210

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Left_g____getter_4_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf26 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0ce = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Right>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Right_g____getter_5_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x41752c0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Right_g____getter_5_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf27 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0cf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Up>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Up_g____getter_6_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175370

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Up_g____getter_6_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf28 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf28 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Down>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Down_g____getter_7_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175420

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Down_g____getter_7_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf29 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Modifier>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Modifier_g____getter_8_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x41754d0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Modifier_g____getter_8_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf2a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Autorun>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Autorun_g____getter_9_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175580

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Autorun_g____getter_9_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf2b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf2b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Pause>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Pause_g____getter_10_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175630

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Pause_g____getter_10_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf2c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCharacter>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCharacter_g____getter_11_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x41756e0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCharacter_g____getter_11_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf2d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__RestartGame>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RestartGame_g____getter_12_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175790

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__RestartGame_g____getter_12_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf2e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleScoreboard>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleScoreboard_g____getter_13_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175840

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleScoreboard_g____getter_13_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf2f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleMap>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleMap_g____getter_14_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x41758f0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ToggleMap_g____getter_14_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf30 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Chat>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Chat_g____getter_15_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x41759a0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__Chat_g____getter_15_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf31 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf31 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0d9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__PushToTalk>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__PushToTalk_g____getter_16_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175a50

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__PushToTalk_g____getter_16_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf32 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0da = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCamera>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCamera_g____getter_17_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175b00

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__ChangeCamera_g____getter_17_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf33 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0db = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideCursor>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideCursor_g____getter_18_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175bb0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideCursor_g____getter_18_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf34 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0dc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectatePreviousPlayer>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectatePreviousPlayer_g____getter_19_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175c60

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectatePreviousPlayer_g____getter_19_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf35 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0dd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectateNextPlayer>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectateNextPlayer_g____getter_20_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175d10

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SpectateNextPlayer_g____getter_20_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf36 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0de = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SkipCutscene>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SkipCutscene_g____getter_21_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175dc0

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__SkipCutscene_g____getter_21_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf37 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0df = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideUI>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideUI_g____getter_22_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175e70

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__HideUI_g____getter_22_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf38 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0e0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__DebugWindow>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__DebugWindow_g____getter_23_0 (CustomLogic_CustomLogicInputGeneralEnum_o* __i, const MethodInfo* method);
// 0x4175f20

Il2CppObject *
CustomLogic_CustomLogicInputGeneralEnum_Bindings_____CreatePropertyBinding__DebugWindow_g____getter_23_0
          (CustomLogic_CustomLogicInputGeneralEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf39 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057ad0e1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum___ctor (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x4172740

void CustomLogic_CustomLogicInputGeneralEnum___ctor
               (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acef2 = '\x01';
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


// CustomLogic.CustomLogicInputGeneralEnum$$get_Forward
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Forward (const MethodInfo* method);
// 0x41727b0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Forward(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acef3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Back
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Back (const MethodInfo* method);
// 0x4172820

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Back(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acef4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Left
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Left (const MethodInfo* method);
// 0x4172890

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Left(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acef5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Right
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Right (const MethodInfo* method);
// 0x4172900

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Right(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acef6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Up
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Up (const MethodInfo* method);
// 0x4172970

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Up(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acef7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Down
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Down (const MethodInfo* method);
// 0x41729e0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Down(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acef8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Modifier
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Modifier (const MethodInfo* method);
// 0x4172a50

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Modifier(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acef9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Autorun
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Autorun (const MethodInfo* method);
// 0x4172ac0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Autorun(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acefa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acefa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Pause
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Pause (const MethodInfo* method);
// 0x4172b30

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Pause(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acefb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acefb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCharacter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCharacter (const MethodInfo* method);
// 0x4172ba0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCharacter(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acefc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acefc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_RestartGame
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_RestartGame (const MethodInfo* method);
// 0x4172c10

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_RestartGame(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acefd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acefd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleScoreboard
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ToggleScoreboard (const MethodInfo* method);
// 0x4172c80

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ToggleScoreboard(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acefe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acefe = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleMap
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ToggleMap (const MethodInfo* method);
// 0x4172cf0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ToggleMap(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aceff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057aceff = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_Chat
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_Chat (const MethodInfo* method);
// 0x4172d60

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_Chat(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf00 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_PushToTalk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_PushToTalk (const MethodInfo* method);
// 0x4172dd0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_PushToTalk(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf01 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCamera
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCamera (const MethodInfo* method);
// 0x4172e40

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_ChangeCamera(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf02 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideCursor
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideCursor (const MethodInfo* method);
// 0x4172eb0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideCursor(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf03 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SpectatePreviousPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SpectatePreviousPlayer (const MethodInfo* method);
// 0x4172f20

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SpectatePreviousPlayer(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf04 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SpectateNextPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SpectateNextPlayer (const MethodInfo* method);
// 0x4172f90

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SpectateNextPlayer(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf05 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_SkipCutscene
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_SkipCutscene (const MethodInfo* method);
// 0x4173000

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_SkipCutscene(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf06 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_HideUI
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_HideUI (const MethodInfo* method);
// 0x4173070

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_HideUI(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf07 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_DebugWindow
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_DebugWindow (const MethodInfo* method);
// 0x41730e0

System_String_o * CustomLogic_CustomLogicInputGeneralEnum__get_DebugWindow(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acf08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    g_data_057acf08 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputGeneralEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputGeneralEnum__get_ClassName (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x4173150

System_String_o *
CustomLogic_CustomLogicInputGeneralEnum__get_ClassName
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acf09 == '\0') {
    il2cpp_runtime_helper_023445d0(&"InputGeneralEnum");
    g_data_057acf09 = '\x01';
  }
  return "InputGeneralEnum";
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_IsAbstract (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x4173180

bool_conflict
CustomLogic_CustomLogicInputGeneralEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_IsStatic (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x4173190

bool_conflict
CustomLogic_CustomLogicInputGeneralEnum__get_IsStatic
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputGeneralEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputGeneralEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputGeneralEnum_o* __this, const MethodInfo* method);
// 0x41731a0

bool_conflict
CustomLogic_CustomLogicInputGeneralEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputGeneralEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputGeneralEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputGeneralEnum___cctor (const MethodInfo* method);
// 0x41731b0

void CustomLogic_CustomLogicInputGeneralEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057acf0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputGeneralEnum);
    il2cpp_runtime_helper_023445d0(&"General/Modifier");
    il2cpp_runtime_helper_023445d0(&"General/HideCursor");
    il2cpp_runtime_helper_023445d0(&"General/ChangeCamera");
    il2cpp_runtime_helper_023445d0(&"General/ToggleScoreboard");
    il2cpp_runtime_helper_023445d0(&"General/Pause");
    il2cpp_runtime_helper_023445d0(&"General/Left");
    il2cpp_runtime_helper_023445d0(&"General/Autorun");
    il2cpp_runtime_helper_023445d0(&"General/Up");
    il2cpp_runtime_helper_023445d0(&"General/SpectateNextPlayer");
    il2cpp_runtime_helper_023445d0(&"General/Right");
    il2cpp_runtime_helper_023445d0(&"General/ChangeCharacter");
    il2cpp_runtime_helper_023445d0(&"General/RestartGame");
    il2cpp_runtime_helper_023445d0(&"General/DebugWindow");
    il2cpp_runtime_helper_023445d0(&"General/Forward");
    il2cpp_runtime_helper_023445d0(&"General/Back");
    il2cpp_runtime_helper_023445d0(&"General/PushToTalk");
    il2cpp_runtime_helper_023445d0(&"General/SpectatePreviousPlayer");
    il2cpp_runtime_helper_023445d0(&"General/ToggleMap");
    il2cpp_runtime_helper_023445d0(&"General/Down");
    il2cpp_runtime_helper_023445d0(&"General/Chat");
    il2cpp_runtime_helper_023445d0(&"General/SkipCutscene");
    il2cpp_runtime_helper_023445d0(&"General/HideUI");
    g_data_057acf0a = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8) = "General/Forward";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8),"General/Forward");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "General/Back";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "General/Left";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "General/Right";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "General/Up";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "General/Down";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "General/Modifier";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "General/Autorun";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "General/Pause";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "General/ChangeCharacter";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "General/RestartGame";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "General/ToggleScoreboard";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "General/ToggleMap";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "General/Chat";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "General/PushToTalk";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "General/ChangeCamera";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "General/HideCursor";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "General/SpectatePreviousPlayer";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x88);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x90) = "General/SpectateNextPlayer";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x90);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x98) = "General/SkipCutscene";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x98);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xa0) = "General/HideUI";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputGeneralEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xa8) = "General/DebugWindow";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa8);
  return;
}


