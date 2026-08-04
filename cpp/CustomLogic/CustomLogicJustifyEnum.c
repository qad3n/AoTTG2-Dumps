// Type: CustomLogic.CustomLogicJustifyEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicJustifyEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicJustifyEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicJustifyEnum_o* CustomLogic_CustomLogicJustifyEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4180650

CustomLogic_CustomLogicJustifyEnum_o *
CustomLogic_CustomLogicJustifyEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicJustifyEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad124 == '\0') {
    pSStack_20 = (System_String_o *)0x418066c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicJustifyEnum);
    g_data_057ad124 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41806e7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4180696;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicJustifyEnum);
    if (g_data_057ad122 == '\0') {
      pSStack_20 = (System_String_o *)0x41806ae;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad122 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41806cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41806d7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicJustifyEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41806ef;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4180702;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4180711;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicJustifyEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4180720;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4180730;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x418073f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4180747;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4180757;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4180763;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicJustifyEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x418076e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad125 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"SpaceEvenly");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"SpaceAround");
    g_data_057ad125 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"FlexStart",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Center",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad127 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad127 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicJustifyEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"FlexEnd",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad128 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexEnd_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad128 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicJustifyEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"SpaceBetween",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad129 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceBetween_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad129 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicJustifyEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"SpaceAround",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad12a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceAround_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad12a = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicJustifyEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"SpaceEvenly",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad12b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceEvenly_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad12b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicJustifyEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicJustifyEnum not found");
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
  if (g_data_057ad126 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41809f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexStart_g____getter_2);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4180a05;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4180a11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4180a1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
    g_data_057ad126 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4180a33;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4180a4c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4180a5b;
  pCVar8 = (CustomLogic_CustomLogicJustifyEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4180a75;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicJustifyEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4180770

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicJustifyEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad125 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"SpaceEvenly");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"SpaceAround");
    g_data_057ad125 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"FlexStart",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad127 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad127 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"FlexEnd",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad128 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexEnd_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad128 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"SpaceBetween",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad129 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceBetween_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad129 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"SpaceAround",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad12a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceAround_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad12a = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"SpaceEvenly",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad12b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceEvenly_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
        g_data_057ad12b = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicJustifyEnum not found");
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
  if (g_data_057ad126 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41809f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexStart_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4180a05;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4180a11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4180a1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
    g_data_057ad126 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4180a33;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4180a4c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4180a5b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4180a75;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__FlexStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexStart (const MethodInfo* method);
// 0x41809e0

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexStart(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this;
  
  if (g_data_057ad126 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexStart_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
    g_data_057ad126 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
  return __this;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x4180a80

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this;
  
  if (g_data_057ad127 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
    g_data_057ad127 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
  return __this;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__FlexEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexEnd (const MethodInfo* method);
// 0x4180b20

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexEnd(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this;
  
  if (g_data_057ad128 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FlexEnd_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
    g_data_057ad128 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
  return __this;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceBetween
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceBetween (const MethodInfo* method);
// 0x4180bc0

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceBetween(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this;
  
  if (g_data_057ad129 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceBetween_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
    g_data_057ad129 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
  return __this;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceAround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceAround (const MethodInfo* method);
// 0x4180c60

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceAround(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this;
  
  if (g_data_057ad12a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceAround_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
    g_data_057ad12a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
  return __this;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceEvenly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceEvenly (const MethodInfo* method);
// 0x4180d00

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceEvenly(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this;
  
  if (g_data_057ad12b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SpaceEvenly_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJustifyEnum_object);
    g_data_057ad12b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicJustifyEnum);
  return __this;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicJustifyEnum_Bindings___cctor (const MethodInfo* method);
// 0x4180da0

void CustomLogic_CustomLogicJustifyEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  ulong uVar1;
  undefined8 uStack_20;
  
  if (g_data_057ad12c == '\0') {
    uStack_20 = (code *)0x4180db9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = (code *)0x4180dc5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x4180dd1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = (code *)0x4180ddd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = (code *)0x4180de9;
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    uStack_20 = (code *)0x4180df5;
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    uStack_20 = (code *)0x4180e01;
    il2cpp_runtime_helper_023445d0(&"SpaceEvenly");
    uStack_20 = (code *)0x4180e0d;
    il2cpp_runtime_helper_023445d0(&"Center");
    uStack_20 = (code *)0x4180e19;
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    uStack_20 = (code *)0x4180e25;
    il2cpp_runtime_helper_023445d0(&"SpaceAround");
    g_data_057ad12c = '\x01';
  }
  uStack_20 = (code *)0x4180e3b;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = (code *)0x4180e50;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = (code *)0x4180e75;
    System_Collections_Generic_HashSet_object___Add(__this,"FlexStart",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x4180e8a;
    System_Collections_Generic_HashSet_object___Add(__this,"Center",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x4180e9f;
    System_Collections_Generic_HashSet_object___Add(__this,"FlexEnd",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x4180eb4;
    System_Collections_Generic_HashSet_object___Add(__this,"SpaceBetween",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x4180ec9;
    System_Collections_Generic_HashSet_object___Add(__this,"SpaceAround",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x4180ede;
    System_Collections_Generic_HashSet_object___Add(__this,"SpaceEvenly",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_2_0
  ;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = (code *)(uVar1 & 0xffffffff);
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__FlexStart>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_2_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x4180f10

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_2_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__Center>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__Center_g____getter_3_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x4180f30

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__Center_g____getter_3_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__FlexEnd>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_4_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x4180f50

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_4_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceBetween>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceBetween_g____getter_5_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x4180f70

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceBetween_g____getter_5_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceAround>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceAround_g____getter_6_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x4180f90

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceAround_g____getter_6_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceEvenly>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceEvenly_g____getter_7_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x4180fb0

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceEvenly_g____getter_7_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicJustifyEnum___ctor (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x4180520

void CustomLogic_CustomLogicJustifyEnum___ctor
               (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad122 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad122 = '\x01';
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


// CustomLogic.CustomLogicJustifyEnum$$get_FlexStart
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_FlexStart (const MethodInfo* method);
// 0x4180590

int32_t CustomLogic_CustomLogicJustifyEnum__get_FlexStart(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicJustifyEnum$$get_Center
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_Center (const MethodInfo* method);
// 0x41805a0

int32_t CustomLogic_CustomLogicJustifyEnum__get_Center(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicJustifyEnum$$get_FlexEnd
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_FlexEnd (const MethodInfo* method);
// 0x41805b0

int32_t CustomLogic_CustomLogicJustifyEnum__get_FlexEnd(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicJustifyEnum$$get_SpaceBetween
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceBetween (const MethodInfo* method);
// 0x41805c0

int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceBetween(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicJustifyEnum$$get_SpaceAround
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceAround (const MethodInfo* method);
// 0x41805d0

int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceAround(MethodInfo *method)

{
  return 4;
}


// CustomLogic.CustomLogicJustifyEnum$$get_SpaceEvenly
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceEvenly (const MethodInfo* method);
// 0x41805e0

int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceEvenly(MethodInfo *method)

{
  return 5;
}


// CustomLogic.CustomLogicJustifyEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicJustifyEnum__get_ClassName (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x41805f0

System_String_o *
CustomLogic_CustomLogicJustifyEnum__get_ClassName
          (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad123 == '\0') {
    il2cpp_runtime_helper_023445d0(&"JustifyEnum");
    g_data_057ad123 = '\x01';
  }
  return "JustifyEnum";
}


// CustomLogic.CustomLogicJustifyEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicJustifyEnum__get_IsAbstract (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x4180620

bool_conflict
CustomLogic_CustomLogicJustifyEnum__get_IsAbstract
          (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicJustifyEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicJustifyEnum__get_IsStatic (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x4180630

bool_conflict
CustomLogic_CustomLogicJustifyEnum__get_IsStatic
          (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicJustifyEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicJustifyEnum__get_InheritBaseMembers (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x4180640

bool_conflict
CustomLogic_CustomLogicJustifyEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


