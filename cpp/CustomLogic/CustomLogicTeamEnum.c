// Type: CustomLogic.CustomLogicTeamEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTeamEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTeamEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTeamEnum_o* CustomLogic_CustomLogicTeamEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x419c390

CustomLogic_CustomLogicTeamEnum_o *
CustomLogic_CustomLogicTeamEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  undefined8 *puVar5;
  System_ArgumentException_o *pSVar6;
  System_Func_T__object__o *pSVar7;
  CustomLogic_CustomLogicTeamEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad365 == '\0') {
    pSStack_20 = (System_String_o *)0x419c3ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTeamEnum);
    g_data_057ad365 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x419c427;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x419c3d6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTeamEnum);
    if (g_data_057ad35e == '\0') {
      pSStack_20 = (System_String_o *)0x419c3ee;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad35e = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419c40d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x419c417;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicTeamEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x419c42f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x419c442;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419c451;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTeamEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x419c460;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x419c470;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419c47f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x419c487;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x419c497;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419c4a3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTeamEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419c4ae;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad366 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Red");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Blue");
    g_data_057ad366 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"None",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Blue",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad368 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blue_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
        g_data_057ad368 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTeamEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Red",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad369 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Red_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
        g_data_057ad369 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTeamEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Titan",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad36a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
        g_data_057ad36a = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTeamEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Human",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad36b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
        g_data_057ad36b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTeamEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTeamEnum not found");
    pSVar2 = System_String__Concat_3af7150(pSVar2,(System_String_o *)pSVar6,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar6 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar6,pSVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar5 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar6,uVar4);
  }
  else {
    puVar5 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar6 = pSStack_28;
      pSVar2 = pSStack_20;
    }
    else {
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar6 = pSStack_28;
      pSVar2 = pSStack_20;
    }
  }
  *(System_String_o **)((long)ppuVar9 + -8) = pSVar2;
  *(System_ArgumentException_o **)((long)ppuVar9 + -0x10) = pSVar6;
  *(undefined8 **)((long)ppuVar9 + -0x18) = puVar5;
  if (g_data_057ad367 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419c6f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419c705;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419c711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419c71d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
    g_data_057ad367 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419c733;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419c74c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419c75b;
  pCVar8 = (CustomLogic_CustomLogicTeamEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419c775;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTeamEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x419c4b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTeamEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad366 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Red");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Blue");
    g_data_057ad366 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Blue",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad368 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blue_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
        g_data_057ad368 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Red",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad369 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Red_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
        g_data_057ad369 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad36a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
        g_data_057ad36a = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad36b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
        g_data_057ad36b = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTeamEnum not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar2 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
    register0x00000020 = (BADSPACEBASE *)&puStack_18;
  }
  else {
    puVar2 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar2 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
  }
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar2;
  if (g_data_057ad367 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419c6f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419c705;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419c711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419c71d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
    g_data_057ad367 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419c733;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419c74c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419c75b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419c775;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x419c6e0

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (g_data_057ad367 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
    g_data_057ad367 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Blue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue (const MethodInfo* method);
// 0x419c780

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (g_data_057ad368 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blue_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
    g_data_057ad368 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Red
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red (const MethodInfo* method);
// 0x419c820

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (g_data_057ad369 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Red_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
    g_data_057ad369 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x419c8c0

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (g_data_057ad36a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
    g_data_057ad36a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x419c960

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (g_data_057ad36b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTeamEnum_object);
    g_data_057ad36b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTeamEnum_Bindings___cctor (const MethodInfo* method);
// 0x419ca00

void CustomLogic_CustomLogicTeamEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad36c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Red");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Blue");
    g_data_057ad36c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"None",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Blue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Red",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Titan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Human",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad451 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad451 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x419cb50

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad451 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad451 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Blue>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Blue_g____getter_3_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x419cbc0

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Blue_g____getter_3_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad452 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad452 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Red>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Red_g____getter_4_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x419cc30

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Red_g____getter_4_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad453 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad453 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_5_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x419cca0

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_5_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad454 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad454 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Human_g____getter_6_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x419cd10

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Human_g____getter_6_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad455 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad455 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTeamEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTeamEnum___ctor (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x419c090

void CustomLogic_CustomLogicTeamEnum___ctor(CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad35e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad35e = '\x01';
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


// CustomLogic.CustomLogicTeamEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_None (const MethodInfo* method);
// 0x419c100

System_String_o * CustomLogic_CustomLogicTeamEnum__get_None(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad35f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad35f = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTeamEnum$$get_Blue
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Blue (const MethodInfo* method);
// 0x419c170

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Blue(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad360 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad360 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
}


// CustomLogic.CustomLogicTeamEnum$$get_Red
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Red (const MethodInfo* method);
// 0x419c1e0

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Red(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad361 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad361 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
}


// CustomLogic.CustomLogicTeamEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Titan (const MethodInfo* method);
// 0x419c250

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Titan(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad362 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad362 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTeamEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Human (const MethodInfo* method);
// 0x419c2c0

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Human(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad363 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057ad363 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTeamEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_ClassName (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x419c330

System_String_o *
CustomLogic_CustomLogicTeamEnum__get_ClassName(CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad364 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TeamEnum");
    g_data_057ad364 = '\x01';
  }
  return "TeamEnum";
}


// CustomLogic.CustomLogicTeamEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_IsAbstract (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x419c360

bool_conflict
CustomLogic_CustomLogicTeamEnum__get_IsAbstract(CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTeamEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_IsStatic (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x419c370

bool_conflict
CustomLogic_CustomLogicTeamEnum__get_IsStatic(CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTeamEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x419c380

bool_conflict
CustomLogic_CustomLogicTeamEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


