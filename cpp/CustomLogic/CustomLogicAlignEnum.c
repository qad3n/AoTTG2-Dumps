// Type: CustomLogic.CustomLogicAlignEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAlignEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAlignEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAlignEnum_o* CustomLogic_CustomLogicAlignEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4145810

CustomLogic_CustomLogicAlignEnum_o *
CustomLogic_CustomLogicAlignEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicAlignEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acb93 == '\0') {
    pSStack_20 = (System_String_o *)0x414582c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAlignEnum);
    g_data_057acb93 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41458a7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4145856;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAlignEnum);
    if (g_data_057acb91 == '\0') {
      pSStack_20 = (System_String_o *)0x414586e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acb91 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414588d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4145897;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicAlignEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41458af;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41458c2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41458d1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicAlignEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41458e0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41458f0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41458ff;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4145907;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4145917;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4145923;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicAlignEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414592e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057acb94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Auto");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057acb94 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Auto",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"FlexStart",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acb96 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexStart_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
        g_data_057acb96 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Center",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acb97 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
        g_data_057acb97 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"FlexEnd",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acb98 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexEnd_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
        g_data_057acb98 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Stretch",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acb99 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stretch_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
        g_data_057acb99 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAlignEnum not found");
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
  if (g_data_057acb95 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4145b79;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Auto_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4145b85;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4145b91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4145b9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
    g_data_057acb95 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4145bb3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4145bcc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4145bdb;
  pCVar8 = (CustomLogic_CustomLogicAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4145bf5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAlignEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4145930

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAlignEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acb94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Auto");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057acb94 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Auto",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"FlexStart",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acb96 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexStart_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
        g_data_057acb96 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acb97 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
        g_data_057acb97 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"FlexEnd",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acb98 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexEnd_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
        g_data_057acb98 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Stretch",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acb99 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stretch_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
        g_data_057acb99 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAlignEnum not found");
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
  if (g_data_057acb95 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4145b79;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Auto_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4145b85;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4145b91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4145b9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
    g_data_057acb95 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4145bb3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4145bcc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4145bdb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4145bf5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Auto
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto (const MethodInfo* method);
// 0x4145b60

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (g_data_057acb95 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Auto_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
    g_data_057acb95 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart (const MethodInfo* method);
// 0x4145c00

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (g_data_057acb96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexStart_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
    g_data_057acb96 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x4145ca0

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (g_data_057acb97 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
    g_data_057acb97 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd (const MethodInfo* method);
// 0x4145d40

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (g_data_057acb98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexEnd_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
    g_data_057acb98 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Stretch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch (const MethodInfo* method);
// 0x4145de0

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (g_data_057acb99 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stretch_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAlignEnum_object);
    g_data_057acb99 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAlignEnum_Bindings___cctor (const MethodInfo* method);
// 0x4145e80

void CustomLogic_CustomLogicAlignEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057acb9a == '\0') {
    uStack_20 = 0x4145e99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4145ea5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4145eb1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x4145ebd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4145ec9;
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    uStack_20 = 0x4145ed5;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    uStack_20 = 0x4145ee1;
    il2cpp_runtime_helper_023445d0(&"Center");
    uStack_20 = 0x4145eed;
    il2cpp_runtime_helper_023445d0(&"Auto");
    uStack_20 = 0x4145ef9;
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057acb9a = '\x01';
  }
  uStack_20 = 0x4145f0f;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4145f24;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x4145f49;
    System_Collections_Generic_HashSet_object___Add(__this,"Auto",MethodInfo_Boolean_Add);
    uStack_20 = 0x4145f5e;
    System_Collections_Generic_HashSet_object___Add(__this,"FlexStart",MethodInfo_Boolean_Add);
    uStack_20 = 0x4145f73;
    System_Collections_Generic_HashSet_object___Add(__this,"Center",MethodInfo_Boolean_Add);
    uStack_20 = 0x4145f88;
    System_Collections_Generic_HashSet_object___Add(__this,"FlexEnd",MethodInfo_Boolean_Add);
    uStack_20 = 0x4145f9d;
    System_Collections_Generic_HashSet_object___Add(__this,"Stretch",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x4145fcf;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Auto>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Auto_g____getter_2_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x4145fd0

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Auto_g____getter_2_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexStart>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_3_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x4145ff0

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_3_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Center>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Center_g____getter_4_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x4146010

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Center_g____getter_4_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexEnd>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_5_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x4146030

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_5_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_6_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x4146050

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_6_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAlignEnum___ctor (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x41456f0

void CustomLogic_CustomLogicAlignEnum___ctor(CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acb91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acb91 = '\x01';
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


// CustomLogic.CustomLogicAlignEnum$$get_Auto
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Auto (const MethodInfo* method);
// 0x4145760

int32_t CustomLogic_CustomLogicAlignEnum__get_Auto(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAlignEnum$$get_FlexStart
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_FlexStart (const MethodInfo* method);
// 0x4145770

int32_t CustomLogic_CustomLogicAlignEnum__get_FlexStart(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAlignEnum$$get_Center
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Center (const MethodInfo* method);
// 0x4145780

int32_t CustomLogic_CustomLogicAlignEnum__get_Center(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicAlignEnum$$get_FlexEnd
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_FlexEnd (const MethodInfo* method);
// 0x4145790

int32_t CustomLogic_CustomLogicAlignEnum__get_FlexEnd(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicAlignEnum$$get_Stretch
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Stretch (const MethodInfo* method);
// 0x41457a0

int32_t CustomLogic_CustomLogicAlignEnum__get_Stretch(MethodInfo *method)

{
  return 4;
}


// CustomLogic.CustomLogicAlignEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAlignEnum__get_ClassName (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x41457b0

System_String_o *
CustomLogic_CustomLogicAlignEnum__get_ClassName(CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acb92 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AlignEnum");
    g_data_057acb92 = '\x01';
  }
  return "AlignEnum";
}


// CustomLogic.CustomLogicAlignEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_IsAbstract (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x41457e0

bool_conflict
CustomLogic_CustomLogicAlignEnum__get_IsAbstract
          (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAlignEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_IsStatic (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x41457f0

bool_conflict
CustomLogic_CustomLogicAlignEnum__get_IsStatic(CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAlignEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x4145800

bool_conflict
CustomLogic_CustomLogicAlignEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


