// Type: CustomLogic.CustomLogicWallColossalAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWallColossalAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWallColossalAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWallColossalAnimationEnum_o* CustomLogic_CustomLogicWallColossalAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41afae0

CustomLogic_CustomLogicWallColossalAnimationEnum_o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Factory__CreateInstance
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
  CustomLogic_CustomLogicWallColossalAnimationEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad506 == '\0') {
    pSStack_20 = (System_String_o *)0x41afafc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicWallColossalAnimationEnum);
    g_data_057ad506 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41afb77;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41afb26;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicWallColossalAnimationEnum);
    if (g_data_057ad4fc == '\0') {
      pSStack_20 = (System_String_o *)0x41afb3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad4fc = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41afb5d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41afb67;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41afb7f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41afb92;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41afba1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicWallColossalAnimationEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41afbb0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41afbc0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41afbcf;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41afbd7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x41afbe7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41afbf3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicWallColossalAnimationEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41afbfe;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad507 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackSteam");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1L");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2L");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"AttackSweep");
    g_data_057ad507 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x67ff8d2c) {
    if (uVar1 < 0x513bb56c) {
      if (uVar1 == 0x45aa17b3) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Idle",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            ppuVar10 = (undefined8 **)&uStack_18;
            pSVar7 = pSStack_28;
            pSVar3 = pSStack_20;
          }
          else {
            ppuVar10 = (undefined8 **)&uStack_18;
            pSVar7 = pSStack_28;
            pSVar3 = pSStack_20;
          }
          goto CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle;
        }
      }
      else if ((uVar1 == 0x513bb56b) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackWallSlap2R",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad50c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap2R_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
          g_data_057ad50c = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x5f3bcb75) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackWallSlap2L",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad50b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap2L_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
          g_data_057ad50b = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x67ff8d2b) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSteam",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad50d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSteam_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        g_data_057ad50d = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
      return pCVar9;
    }
  }
  else if (uVar1 < 0x826affcc) {
    if (uVar1 == 0x826affcb) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackSweep",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad50e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSweep_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
          g_data_057ad50e = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x7d3e3946) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackWallSlap1L",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad509 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap1L_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        g_data_057ad509 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0x973e6234) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackWallSlap1R",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad50a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap1R_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        g_data_057ad50a = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
      return pCVar9;
    }
  }
  else if ((uVar1 == 0xc8f30ee7) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"AttackKick",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar6;
    if (g_data_057ad50f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_9);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
      g_data_057ad50f = '\x01';
    }
    pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    System_Func_object__object____ctor();
    pCVar9 = (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    return pCVar9;
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicWallColossalAnimationEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad508 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41b0009;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41b0015;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41b0021;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41b002d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad508 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41b0043;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41b005c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41b006b;
  pCVar9 = (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41b0085;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41afc00

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad507 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackSteam");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1L");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2L");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"AttackSweep");
    g_data_057ad507 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x67ff8d2c) {
    if (uVar1 < 0x513bb56c) {
      if (uVar1 == 0x45aa17b3) {
        bVar2 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar4 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle;
        }
      }
      else if ((uVar1 == 0x513bb56b) &&
              (bVar2 = System_String__op_Equality(name,"AttackWallSlap2R",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad50c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap2R_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
          g_data_057ad50c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x5f3bcb75) {
      bVar2 = System_String__op_Equality(name,"AttackWallSlap2L",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad50b == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap2L_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
          g_data_057ad50b = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x67ff8d2b) &&
            (bVar2 = System_String__op_Equality(name,"AttackSteam",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad50d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSteam_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        g_data_057ad50d = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x826affcc) {
    if (uVar1 == 0x826affcb) {
      bVar2 = System_String__op_Equality(name,"AttackSweep",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad50e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSweep_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
          g_data_057ad50e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x7d3e3946) &&
            (bVar2 = System_String__op_Equality(name,"AttackWallSlap1L",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad509 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap1L_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        g_data_057ad509 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0x973e6234) {
    bVar2 = System_String__op_Equality(name,"AttackWallSlap1R",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad50a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap1R_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
        g_data_057ad50a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xc8f30ee7) &&
          (bVar2 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad50f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_9);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
      g_data_057ad50f = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicWallColossalAnimationEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ad508 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0009;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0015;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0021;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b002d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad508 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0043;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b005c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b006b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0085;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x41afff0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (g_data_057ad508 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad508 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap1L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1L (const MethodInfo* method);
// 0x41b0090

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1L
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (g_data_057ad509 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap1L_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad509 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap1R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1R (const MethodInfo* method);
// 0x41b0130

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1R
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (g_data_057ad50a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap1R_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad50a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap2L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2L (const MethodInfo* method);
// 0x41b01d0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2L
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (g_data_057ad50b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap2L_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad50b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap2R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2R (const MethodInfo* method);
// 0x41b0270

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2R
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (g_data_057ad50c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackWallSlap2R_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad50c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSteam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSteam (const MethodInfo* method);
// 0x41b0310

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSteam
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (g_data_057ad50d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSteam_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad50d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSweep
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSweep (const MethodInfo* method);
// 0x41b03b0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSweep
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (g_data_057ad50e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSweep_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad50e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x41b0450

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (g_data_057ad50f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackKick_g____getter_9);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
    g_data_057ad50f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x41b04f0

void CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad510 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"AttackSteam");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2R");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap1L");
    il2cpp_runtime_helper_023445d0(&"AttackWallSlap2L");
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    il2cpp_runtime_helper_023445d0(&"AttackSweep");
    g_data_057ad510 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackWallSlap1L",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackWallSlap1R",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackWallSlap2L",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackWallSlap2R",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSteam",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSweep",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackKick",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad4fd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_colossal_idle");
    g_data_057ad4fd = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x41b06b0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4fd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_colossal_idle");
    g_data_057ad4fd = '\x01';
  }
  return "Armature_VER2|wall_colossal_idle";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap1L>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1L_g____getter_3_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x41b06e0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1L_g____getter_3_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4fe == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap1_L");
    g_data_057ad4fe = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap1R>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1R_g____getter_4_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x41b0710

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1R_g____getter_4_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4ff == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap1_R");
    g_data_057ad4ff = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap2L>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2L_g____getter_5_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x41b0740

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2L_g____getter_5_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad500 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap2_L");
    g_data_057ad500 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap2R>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2R_g____getter_6_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x41b0770

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2R_g____getter_6_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad501 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap2_R");
    g_data_057ad501 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSteam>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSteam_g____getter_7_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x41b07a0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSteam_g____getter_7_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad502 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_steam");
    g_data_057ad502 = '\x01';
  }
  return "Armature_VER2|wall_attack_steam";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSweep>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSweep_g____getter_8_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x41b07d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSweep_g____getter_8_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad503 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_sweep");
    g_data_057ad503 = '\x01';
  }
  return "Armature_VER2|wall_attack_sweep";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_9_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x41b0800

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_9_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad504 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_colossal_kick");
    g_data_057ad504 = '\x01';
  }
  return "Armature_VER2|wall_colossal_kick";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalAnimationEnum___ctor (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x41af890

void CustomLogic_CustomLogicWallColossalAnimationEnum___ctor
               (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad4fc = '\x01';
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


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_Idle (const MethodInfo* method);
// 0x41af900

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_Idle(MethodInfo *method)

{
  if (g_data_057ad4fd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_colossal_idle");
    g_data_057ad4fd = '\x01';
  }
  return "Armature_VER2|wall_colossal_idle";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap1L
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1L (const MethodInfo* method);
// 0x41af930

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1L(MethodInfo *method)

{
  if (g_data_057ad4fe == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap1_L");
    g_data_057ad4fe = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap1R
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1R (const MethodInfo* method);
// 0x41af960

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1R(MethodInfo *method)

{
  if (g_data_057ad4ff == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap1_R");
    g_data_057ad4ff = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap2L
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2L (const MethodInfo* method);
// 0x41af990

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2L(MethodInfo *method)

{
  if (g_data_057ad500 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap2_L");
    g_data_057ad500 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap2R
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2R (const MethodInfo* method);
// 0x41af9c0

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2R(MethodInfo *method)

{
  if (g_data_057ad501 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap2_R");
    g_data_057ad501 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackSteam
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSteam (const MethodInfo* method);
// 0x41af9f0

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSteam(MethodInfo *method)

{
  if (g_data_057ad502 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_steam");
    g_data_057ad502 = '\x01';
  }
  return "Armature_VER2|wall_attack_steam";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackSweep
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSweep (const MethodInfo* method);
// 0x41afa20

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSweep(MethodInfo *method)

{
  if (g_data_057ad503 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_sweep");
    g_data_057ad503 = '\x01';
  }
  return "Armature_VER2|wall_attack_sweep";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x41afa50

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (g_data_057ad504 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_colossal_kick");
    g_data_057ad504 = '\x01';
  }
  return "Armature_VER2|wall_colossal_kick";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_ClassName (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x41afa80

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad505 == '\0') {
    il2cpp_runtime_helper_023445d0(&"WallColossalAnimationEnum");
    g_data_057ad505 = '\x01';
  }
  return "WallColossalAnimationEnum";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x41afab0

bool_conflict
CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsStatic (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x41afac0

bool_conflict
CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x41afad0

bool_conflict
CustomLogic_CustomLogicWallColossalAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


