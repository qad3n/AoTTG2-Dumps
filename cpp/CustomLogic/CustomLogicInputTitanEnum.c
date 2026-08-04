// Type: CustomLogic.CustomLogicInputTitanEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputTitanEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputTitanEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputTitanEnum_o* CustomLogic_CustomLogicInputTitanEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x417cae0

CustomLogic_CustomLogicInputTitanEnum_o *
CustomLogic_CustomLogicInputTitanEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicInputTitanEnum_o *pCVar3;
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
  if (g_data_057acfcb == '\0') {
    pSStack_20 = (System_String_o *)0x417cafc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfcb = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x417cb77;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x417cb26;
    pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicInputTitanEnum);
    if (g_data_057acfa9 == '\0') {
      pSStack_20 = (System_String_o *)0x417cb3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acfa9 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x417cb5d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x417cb67;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    return pCVar3;
  }
  pSStack_20 = (System_String_o *)0x417cb7f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x417cb92;
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x417cba1;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicInputTitanEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x417cbb0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x417cbc0;
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x417cbcf;
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x417cbd7;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSStack_20 = (System_String_o *)0x417cbe7;
  System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x417cbf3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicInputTitanEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x417cbfe;
  pSVar8 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar4;
  if (g_data_057acfcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBody");
    il2cpp_runtime_helper_023445d0(&"AttackBiteF");
    il2cpp_runtime_helper_023445d0(&"Sprint");
    il2cpp_runtime_helper_023445d0(&"AttackSlam");
    il2cpp_runtime_helper_023445d0(&"AttackHitBack");
    il2cpp_runtime_helper_023445d0(&"AttackBiteL");
    il2cpp_runtime_helper_023445d0(&"CoverNape1");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    il2cpp_runtime_helper_023445d0(&"AttackSlapL");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowR");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighL");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"AttackBiteR");
    il2cpp_runtime_helper_023445d0(&"AttackHitFace");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCore");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighR");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChest");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAir");
    il2cpp_runtime_helper_023445d0(&"Sit");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFar");
    il2cpp_runtime_helper_023445d0(&"AttackPunch");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHead");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGround");
    il2cpp_runtime_helper_023445d0(&"AttackSlapR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHigh");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowL");
    g_data_057acfcc = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar1 < 0x3a2d364f) {
    if (uVar1 < 0x1d298760) {
      if (uVar1 < 0x87de46c) {
        if (uVar1 == 0x3b80da8) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabGround",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfe4 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGround_g____ge);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfe4 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
        else if (uVar1 == 0x4aec3cb) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSlapR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfd6 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapR_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfd6 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
        else if (uVar1 == 0x87de46b) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackPunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfd3 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunch_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfd3 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
      }
      else if (uVar1 < 0x12aed9d6) {
        if (uVar1 == 0xe1ef32d) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Jump",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfce == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfce = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
        else if (uVar1 == 0x12aed9d5) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSlapL",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfd5 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapL_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfd5 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
      }
      else if (uVar1 == 0x132daa5f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBiteR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfda == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteR_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfda = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x1d29875f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSlapHighR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfe8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighR_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfe8 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 < 0x292dcd02) {
      if (uVar1 < 0x22ccd731) {
        if (uVar1 == 0x1f2dbd43) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBiteF",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfd9 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteF_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfd9 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
        else if (uVar1 == 0x22ccd730) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Walk",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfd0 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_5_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfd0 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
      }
      else if (uVar1 == 0x28bc2bff) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Sit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfcf == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Sit_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfcf = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x292dcd01) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBiteL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfd8 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteL_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfd8 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 < 0x3329aa02) {
      if (uVar1 == 0x2cfbaa3f) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Kick",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar8 = pSStack_28;
          pSVar4 = pSStack_20;
          goto CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick;
        }
      }
      else if (uVar1 == 0x3329aa01) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSlapHighL",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfe7 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighL_g____get);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfe7 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x371c1522) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackStomp",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acfde == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfde = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x3a2d364e) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBellyFlop",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acfd4 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlop_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfd4 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0x8304792a) {
    if (uVar1 < 0x6136bd0e) {
      if (uVar1 < 0x4f638210) {
        if (uVar1 == 0x3f31bd4c) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabCore",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfe3 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCore_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfe3 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
        else if (uVar1 == 0x4f63820f) {
          bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabBody",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puVar7 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            puStack_30 = puVar7;
            if (g_data_057acfe2 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBody_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfe2 = '\x01';
            }
            pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                       MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return pCVar3;
          }
        }
      }
      else if (uVar1 == 0x5aec6cb9) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabAir",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfe1 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAir_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfe1 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x6136bd0d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabHead",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfe5 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHead_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfe5 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 < 0x745f154c) {
      if (uVar1 == 0x6700754b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackHitFace",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfdb == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitFace_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfdb = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x745f154b) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSlapLowR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfea == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowR_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfea = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x825f2b55) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSlapLowL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acfe9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowL_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfe9 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x83047929) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"CoverNape1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acfd2 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CoverNape1_g____getter_7);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfd2 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0xb502d8c1) {
    if (uVar1 < 0x92d2a9f2) {
      if (uVar1 == 0x838656ac) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSlam",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfdd == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlam_g____getter_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfdd = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x92d2a9f1) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSwing",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057acfdf == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfdf = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return pCVar3;
        }
      }
    }
    else if (uVar1 == 0x9ed36c5b) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabHigh",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acfe6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHigh_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfe6 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xb502d8c0) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBrushChest",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acfeb == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChest_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfeb = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 < 0xe8476a12) {
    if (uVar1 == 0xc65e5944) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackRockThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acfd7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackRockThrow_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfd7 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0xe8476a11) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackHitBack",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acfdc == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitBack_g____gette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfdc = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return pCVar3;
      }
    }
  }
  else if (uVar1 == 0xe943dc75) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Sprint",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acfd1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Sprint_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
        g_data_057acfd1 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xeda35f22) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabAirFar",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acfe0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFar_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
        g_data_057acfe0 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return pCVar3;
    }
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputTitanEnum not found");
  pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar7 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar6);
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar4;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar7;
  if (g_data_057acfcd == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417d7d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417d7e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417d7f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417d7fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfcd = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417d813;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417d82c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417d83b;
  pCVar3 = (CustomLogic_CustomLogicInputTitanEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x417d855;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return pCVar3;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputTitanEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x417cc00

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputTitanEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acfcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBody");
    il2cpp_runtime_helper_023445d0(&"AttackBiteF");
    il2cpp_runtime_helper_023445d0(&"Sprint");
    il2cpp_runtime_helper_023445d0(&"AttackSlam");
    il2cpp_runtime_helper_023445d0(&"AttackHitBack");
    il2cpp_runtime_helper_023445d0(&"AttackBiteL");
    il2cpp_runtime_helper_023445d0(&"CoverNape1");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    il2cpp_runtime_helper_023445d0(&"AttackSlapL");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowR");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighL");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"AttackBiteR");
    il2cpp_runtime_helper_023445d0(&"AttackHitFace");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCore");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighR");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChest");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAir");
    il2cpp_runtime_helper_023445d0(&"Sit");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFar");
    il2cpp_runtime_helper_023445d0(&"AttackPunch");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHead");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGround");
    il2cpp_runtime_helper_023445d0(&"AttackSlapR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHigh");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowL");
    g_data_057acfcc = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x3a2d364f) {
    if (uVar1 < 0x1d298760) {
      if (uVar1 < 0x87de46c) {
        if (uVar1 == 0x3b80da8) {
          bVar2 = System_String__op_Equality(name,"AttackGrabGround",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acfe4 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGround_g____ge);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfe4 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x4aec3cb) {
          bVar2 = System_String__op_Equality(name,"AttackSlapR",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acfd6 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapR_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfd6 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x87de46b) &&
                (bVar2 = System_String__op_Equality(name,"AttackPunch",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfd3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunch_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfd3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 < 0x12aed9d6) {
        if (uVar1 == 0xe1ef32d) {
          bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acfce == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfce = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x12aed9d5) &&
                (bVar2 = System_String__op_Equality(name,"AttackSlapL",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfd5 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapL_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfd5 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x132daa5f) {
        bVar2 = System_String__op_Equality(name,"AttackBiteR",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfda == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteR_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfda = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x1d29875f) &&
              (bVar2 = System_String__op_Equality(name,"AttackSlapHighR",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfe8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighR_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfe8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x292dcd02) {
      if (uVar1 < 0x22ccd731) {
        if (uVar1 == 0x1f2dbd43) {
          bVar2 = System_String__op_Equality(name,"AttackBiteF",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acfd9 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteF_g____getter);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfd9 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x22ccd730) &&
                (bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfd0 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_5_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfd0 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x28bc2bff) {
        bVar2 = System_String__op_Equality(name,"Sit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfcf == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Sit_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfcf = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x292dcd01) &&
              (bVar2 = System_String__op_Equality(name,"AttackBiteL",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfd8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteL_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfd8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x3329aa02) {
      if (uVar1 == 0x2cfbaa3f) {
        bVar2 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar4 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick;
        }
      }
      else if ((uVar1 == 0x3329aa01) &&
              (bVar2 = System_String__op_Equality(name,"AttackSlapHighL",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfe7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighL_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfe7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x371c1522) {
      bVar2 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfde == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfde = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x3a2d364e) &&
            (bVar2 = System_String__op_Equality(name,"AttackBellyFlop",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acfd4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlop_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
        g_data_057acfd4 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x8304792a) {
    if (uVar1 < 0x6136bd0e) {
      if (uVar1 < 0x4f638210) {
        if (uVar1 == 0x3f31bd4c) {
          bVar2 = System_String__op_Equality(name,"AttackGrabCore",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            puStack_18 = &TypeInfo_Bindings;
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057acfe3 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCore_g____gett);
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
              g_data_057acfe3 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
            System_Func_object__object____ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if ((uVar1 == 0x4f63820f) &&
                (bVar2 = System_String__op_Equality(name,"AttackGrabBody",(MethodInfo *)0x0), (char)bVar2 != '\0')
                ) {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfe2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBody_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfe2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5aec6cb9) {
        bVar2 = System_String__op_Equality(name,"AttackGrabAir",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfe1 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAir_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfe1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x6136bd0d) &&
              (bVar2 = System_String__op_Equality(name,"AttackGrabHead",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfe5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHead_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfe5 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 < 0x745f154c) {
      if (uVar1 == 0x6700754b) {
        bVar2 = System_String__op_Equality(name,"AttackHitFace",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfdb == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitFace_g____gette);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfdb = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x745f154b) &&
              (bVar2 = System_String__op_Equality(name,"AttackSlapLowR",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfea == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowR_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfea = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x825f2b55) {
      bVar2 = System_String__op_Equality(name,"AttackSlapLowL",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfe9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowL_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfe9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x83047929) &&
            (bVar2 = System_String__op_Equality(name,"CoverNape1",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acfd2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CoverNape1_g____getter_7);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
        g_data_057acfd2 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xb502d8c1) {
    if (uVar1 < 0x92d2a9f2) {
      if (uVar1 == 0x838656ac) {
        bVar2 = System_String__op_Equality(name,"AttackSlam",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057acfdd == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlam_g____getter_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
            g_data_057acfdd = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x92d2a9f1) &&
              (bVar2 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfdf == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfdf = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9ed36c5b) {
      bVar2 = System_String__op_Equality(name,"AttackGrabHigh",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfe6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHigh_g____gett);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfe6 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xb502d8c0) &&
            (bVar2 = System_String__op_Equality(name,"AttackBrushChest",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acfeb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChest_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
        g_data_057acfeb = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xe8476a12) {
    if (uVar1 == 0xc65e5944) {
      bVar2 = System_String__op_Equality(name,"AttackRockThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acfd7 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackRockThrow_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
          g_data_057acfd7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xe8476a11) &&
            (bVar2 = System_String__op_Equality(name,"AttackHitBack",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acfdc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitBack_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
        g_data_057acfdc = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xe943dc75) {
    bVar2 = System_String__op_Equality(name,"Sprint",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acfd1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Sprint_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
        g_data_057acfd1 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xeda35f22) &&
          (bVar2 = System_String__op_Equality(name,"AttackGrabAirFar",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acfe0 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFar_g____ge);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
      g_data_057acfe0 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputTitanEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acfcd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417d7d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417d7e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417d7f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417d7fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfcd = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417d813;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417d82c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417d83b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417d855;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x417d7c0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfcd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfcd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x417d860

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfce = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit (const MethodInfo* method);
// 0x417d900

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfcf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Sit_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfcf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x417d9a0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sprint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint (const MethodInfo* method);
// 0x417da40

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Sprint_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__CoverNape1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1 (const MethodInfo* method);
// 0x417dae0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CoverNape1_g____getter_7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackPunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch (const MethodInfo* method);
// 0x417db80

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackPunch_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop (const MethodInfo* method);
// 0x417dc20

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBellyFlop_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL (const MethodInfo* method);
// 0x417dcc0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapL_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR (const MethodInfo* method);
// 0x417dd60

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapR_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow (const MethodInfo* method);
// 0x417de00

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackRockThrow_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL (const MethodInfo* method);
// 0x417dea0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteL_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF (const MethodInfo* method);
// 0x417df40

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteF_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfd9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR (const MethodInfo* method);
// 0x417dfe0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfda == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBiteR_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfda = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace (const MethodInfo* method);
// 0x417e080

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfdb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitFace_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfdb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack (const MethodInfo* method);
// 0x417e120

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfdc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHitBack_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfdc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam (const MethodInfo* method);
// 0x417e1c0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfdd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlam_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfdd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x417e260

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfde == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfde = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x417e300

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfdf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfdf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar (const MethodInfo* method);
// 0x417e3a0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAirFar_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir (const MethodInfo* method);
// 0x417e440

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabAir_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabBody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody (const MethodInfo* method);
// 0x417e4e0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBody_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabCore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore (const MethodInfo* method);
// 0x417e580

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabCore_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround (const MethodInfo* method);
// 0x417e620

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabGround_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead (const MethodInfo* method);
// 0x417e6c0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHead_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHigh
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh (const MethodInfo* method);
// 0x417e760

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabHigh_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL (const MethodInfo* method);
// 0x417e800

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighL_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR (const MethodInfo* method);
// 0x417e8a0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapHighR_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL (const MethodInfo* method);
// 0x417e940

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfe9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowL_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfe9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR (const MethodInfo* method);
// 0x417e9e0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSlapLowR_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBrushChest
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest (const MethodInfo* method);
// 0x417ea80

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this;
  
  if (g_data_057acfeb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushChest_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputTitanEnum_object);
    g_data_057acfeb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputTitanEnum);
  return __this;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum_Bindings___cctor (const MethodInfo* method);
// 0x417eb20

void CustomLogic_CustomLogicInputTitanEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acfec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBody");
    il2cpp_runtime_helper_023445d0(&"AttackBiteF");
    il2cpp_runtime_helper_023445d0(&"Sprint");
    il2cpp_runtime_helper_023445d0(&"AttackSlam");
    il2cpp_runtime_helper_023445d0(&"AttackHitBack");
    il2cpp_runtime_helper_023445d0(&"AttackBiteL");
    il2cpp_runtime_helper_023445d0(&"CoverNape1");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    il2cpp_runtime_helper_023445d0(&"AttackSlapL");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowR");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighL");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"AttackBiteR");
    il2cpp_runtime_helper_023445d0(&"AttackHitFace");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCore");
    il2cpp_runtime_helper_023445d0(&"AttackSlapHighR");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChest");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAir");
    il2cpp_runtime_helper_023445d0(&"Sit");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFar");
    il2cpp_runtime_helper_023445d0(&"AttackPunch");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHead");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGround");
    il2cpp_runtime_helper_023445d0(&"AttackSlapR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHigh");
    il2cpp_runtime_helper_023445d0(&"AttackSlapLowL");
    g_data_057acfec = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Kick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Sit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Sprint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"CoverNape1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackPunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBellyFlop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackRockThrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBiteL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBiteF",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBiteR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackHitFace",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackHitBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlam",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackStomp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSwing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabAirFar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabBody",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabCore",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabGround",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabHead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabHigh",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapHighL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapHighR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapLowL",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSlapLowR",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushChest",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acfed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfed = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad103 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad103 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417efd0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfed = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad103 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad103 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f080

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfee = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad104 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad104 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sit_g____getter_4_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f130

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sit_g____getter_4_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfef = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad105 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad105 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_5_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f1e0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_5_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad106 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad106 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sprint>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sprint_g____getter_6_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f290

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sprint_g____getter_6_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad107 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad107 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__CoverNape1>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__CoverNape1_g____getter_7_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f340

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__CoverNape1_g____getter_7_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad108 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad108 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_8_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f3f0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_8_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad109 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad109 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_9_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f4a0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_9_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad10a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad10a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_10_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f550

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_10_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad10b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad10b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_11_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f600

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_11_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad10c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad10c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_12_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f6b0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_12_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad10d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad10d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_13_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f760

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_13_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad10e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad10e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_14_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f810

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_14_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acff9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acff9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad10f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad10f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_15_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f8c0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_15_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acffa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acffa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad110 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad110 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_16_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417f970

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_16_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acffb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acffb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad111 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad111 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_17_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417fa20

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_17_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acffc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acffc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad112 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad112 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_18_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417fad0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_18_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acffd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acffd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad113 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad113 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_19_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417fb80

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_19_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acffe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acffe = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad114 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad114 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_20_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417fc30

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_20_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfff = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad115 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad115 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFar>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFar_g____getter_21_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417fce0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFar_g____getter_21_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad000 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad000 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad116 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad116 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAir>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAir_g____getter_22_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417fd90

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAir_g____getter_22_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad001 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad001 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad117 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad117 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBody>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabBody_g____getter_23_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417fe40

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabBody_g____getter_23_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad002 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad002 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad118 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad118 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCore>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabCore_g____getter_24_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417fef0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabCore_g____getter_24_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad003 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad003 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad119 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad119 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGround>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabGround_g____getter_25_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x417ffa0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabGround_g____getter_25_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad004 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad004 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad11a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad11a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHead>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHead_g____getter_26_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x4180050

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHead_g____getter_26_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad005 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad005 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad11b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad11b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHigh>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHigh_g____getter_27_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x4180100

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHigh_g____getter_27_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad006 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad006 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad11c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad11c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 200);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_28_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x41801b0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_28_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad007 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad007 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad11d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad11d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_29_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x4180260

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_29_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad008 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad008 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad11e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad11e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_30_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x4180310

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_30_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad009 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad009 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad11f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad11f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_31_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x41803c0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_31_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad00a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad00a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad120 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad120 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChest>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBrushChest_g____getter_32_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x4180470

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBrushChest_g____getter_32_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad00b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad00b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad121 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057ad121 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicInputTitanEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum___ctor (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x417b680

void CustomLogic_CustomLogicInputTitanEnum___ctor
               (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfa9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acfa9 = '\x01';
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


// CustomLogic.CustomLogicInputTitanEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Kick (const MethodInfo* method);
// 0x417b6f0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Kick(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfaa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfaa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Jump (const MethodInfo* method);
// 0x417b760

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfab = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Sit
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Sit (const MethodInfo* method);
// 0x417b7d0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Sit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfac = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Walk (const MethodInfo* method);
// 0x417b840

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Walk(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfad = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Sprint
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Sprint (const MethodInfo* method);
// 0x417b8b0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Sprint(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfae = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_CoverNape1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_CoverNape1 (const MethodInfo* method);
// 0x417b920

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_CoverNape1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfaf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackPunch
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackPunch (const MethodInfo* method);
// 0x417b990

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackPunch(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBellyFlop
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBellyFlop (const MethodInfo* method);
// 0x417ba00

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBellyFlop(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapL (const MethodInfo* method);
// 0x417ba70

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapL(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapR (const MethodInfo* method);
// 0x417bae0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapR(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackRockThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackRockThrow (const MethodInfo* method);
// 0x417bb50

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackRockThrow(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteL (const MethodInfo* method);
// 0x417bbc0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteL(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteF
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteF (const MethodInfo* method);
// 0x417bc30

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteF(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteR (const MethodInfo* method);
// 0x417bca0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteR(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitFace
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackHitFace (const MethodInfo* method);
// 0x417bd10

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackHitFace(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x70);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitBack
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackHitBack (const MethodInfo* method);
// 0x417bd80

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackHitBack(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfb9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x78);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlam
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlam (const MethodInfo* method);
// 0x417bdf0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlam(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfba = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x80);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackStomp (const MethodInfo* method);
// 0x417be60

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackStomp(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfbb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x88);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSwing (const MethodInfo* method);
// 0x417bed0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSwing(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfbc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfbc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAirFar
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAirFar (const MethodInfo* method);
// 0x417bf40

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAirFar(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfbd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfbd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAir
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAir (const MethodInfo* method);
// 0x417bfb0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAir(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfbe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfbe = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabBody
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabBody (const MethodInfo* method);
// 0x417c020

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabBody(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfbf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfbf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabCore
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabCore (const MethodInfo* method);
// 0x417c090

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabCore(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabGround
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabGround (const MethodInfo* method);
// 0x417c100

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabGround(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHead (const MethodInfo* method);
// 0x417c170

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHead(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xc0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHigh
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHigh (const MethodInfo* method);
// 0x417c1e0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHigh(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 200);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 200);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighL (const MethodInfo* method);
// 0x417c250

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighL(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighR (const MethodInfo* method);
// 0x417c2c0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighR(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowL (const MethodInfo* method);
// 0x417c330

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowL(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowR (const MethodInfo* method);
// 0x417c3a0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowR(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBrushChest
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBrushChest (const MethodInfo* method);
// 0x417c410

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBrushChest(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acfc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    g_data_057acfc8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputTitanEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xf0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_ClassName (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x417c480

System_String_o *
CustomLogic_CustomLogicInputTitanEnum__get_ClassName
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acfc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"InputTitanEnum");
    g_data_057acfc9 = '\x01';
  }
  return "InputTitanEnum";
}


// CustomLogic.CustomLogicInputTitanEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_IsAbstract (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x417c4b0

bool_conflict
CustomLogic_CustomLogicInputTitanEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_IsStatic (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x417c4c0

bool_conflict
CustomLogic_CustomLogicInputTitanEnum__get_IsStatic
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputTitanEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x417c4d0

bool_conflict
CustomLogic_CustomLogicInputTitanEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputTitanEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum___cctor (const MethodInfo* method);
// 0x417c4e0

void CustomLogic_CustomLogicInputTitanEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057acfca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputTitanEnum);
    il2cpp_runtime_helper_023445d0(&"Titan/AttackSwing");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackHitFace");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackGrabHead");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackBrushChest");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackPunch");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackBiteR");
    il2cpp_runtime_helper_023445d0(&"Titan/Kick");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackSlapR");
    il2cpp_runtime_helper_023445d0(&"Titan/Sprint");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackSlapHighL");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackGrabHigh");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackBiteL");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackGrabAir");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackSlapHighR");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackSlapLowL");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackGrabCore");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackSlapL");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackGrabAirFar");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackSlam");
    il2cpp_runtime_helper_023445d0(&"Titan/Walk");
    il2cpp_runtime_helper_023445d0(&"Titan/Sit");
    il2cpp_runtime_helper_023445d0(&"Titan/CoverNape1");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackGrabBody");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackStomp");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackHitBack");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackBiteF");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackRockThrow");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackSlapLowR");
    il2cpp_runtime_helper_023445d0(&"Titan/AttackGrabGround");
    il2cpp_runtime_helper_023445d0(&"Titan/Jump");
    g_data_057acfca = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputTitanEnum + 0xb8) = "Titan/Kick";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8),"Titan/Kick");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Titan/Jump";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Titan/Sit";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Titan/Walk";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Titan/Sprint";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Titan/CoverNape1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Titan/AttackPunch";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "Titan/AttackBellyFlop";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "Titan/AttackSlapL";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Titan/AttackSlapR";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "Titan/AttackRockThrow";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "Titan/AttackBiteL";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "Titan/AttackBiteF";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "Titan/AttackBiteR";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "Titan/AttackHitFace";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "Titan/AttackHitBack";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "Titan/AttackSlam";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "Titan/AttackStomp";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x88);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x90) = "Titan/AttackSwing";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x90);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x98) = "Titan/AttackGrabAirFar";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x98);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xa0) = "Titan/AttackGrabAir";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xa8) = "Titan/AttackGrabBody";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xb0) = "Titan/AttackGrabCore";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xb0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xb8) = "Titan/AttackGrabGround";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xb8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xc0) = "Titan/AttackGrabHead";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xc0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 200) = "Titan/AttackGrabHigh";
  il2cpp_runtime_helper_022b4080(lVar1 + 200);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xd0) = "Titan/AttackSlapHighL";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xd0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xd8) = "Titan/AttackSlapHighR";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xd8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xe0) = "Titan/AttackSlapLowL";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xe0);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xe8) = "Titan/AttackSlapLowR";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xe8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputTitanEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0xf0) = "Titan/AttackBrushChest";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xf0);
  return;
}


