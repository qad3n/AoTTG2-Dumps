// Type: CustomLogic.CustomLogicHandStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHandStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHandStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHandStateEnum_o* CustomLogic_CustomLogicHandStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41569f0

CustomLogic_CustomLogicHandStateEnum_o *
CustomLogic_CustomLogicHandStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicHandStateEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057accd9 == '\0') {
    pSStack_20 = (System_String_o *)0x4156a0c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHandStateEnum);
    g_data_057accd9 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4156a87;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4156a36;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHandStateEnum);
    if (g_data_057accd7 == '\0') {
      pSStack_20 = (System_String_o *)0x4156a4e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057accd7 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4156a6d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4156a77;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicHandStateEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x4156a8f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4156aa2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4156ab1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicHandStateEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4156ac0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4156ad0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4156adf;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4156ae7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4156af7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4156b03;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicHandStateEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4156b0e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057accda == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Severed");
    il2cpp_runtime_helper_023445d0(&"Damaged");
    il2cpp_runtime_helper_023445d0(&"Recovering");
    il2cpp_runtime_helper_023445d0(&"Healthy");
    g_data_057accda = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Healthy",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Damaged",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accdc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Damaged_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
        g_data_057accdc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicHandStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Severed",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accdd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Severed_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
        g_data_057accdd = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicHandStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Recovering",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accde == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Recovering_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
        g_data_057accde = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicHandStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHandStateEnum not found");
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
  if (g_data_057accdb == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156d09;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Healthy_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156d15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156d21;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156d2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
    g_data_057accdb = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156d43;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156d5c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156d6b;
  pCVar8 = (CustomLogic_CustomLogicHandStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156d85;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHandStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4156b10

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHandStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057accda == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Severed");
    il2cpp_runtime_helper_023445d0(&"Damaged");
    il2cpp_runtime_helper_023445d0(&"Recovering");
    il2cpp_runtime_helper_023445d0(&"Healthy");
    g_data_057accda = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Healthy",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Damaged",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accdc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Damaged_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
        g_data_057accdc = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Severed",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accdd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Severed_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
        g_data_057accdd = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Recovering",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accde == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Recovering_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
        g_data_057accde = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHandStateEnum not found");
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
  if (g_data_057accdb == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156d09;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Healthy_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156d15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156d21;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156d2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
    g_data_057accdb = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156d43;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156d5c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156d6b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156d85;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Healthy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy (const MethodInfo* method);
// 0x4156cf0

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this;
  
  if (g_data_057accdb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Healthy_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
    g_data_057accdb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Damaged
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged (const MethodInfo* method);
// 0x4156d90

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this;
  
  if (g_data_057accdc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Damaged_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
    g_data_057accdc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Severed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed (const MethodInfo* method);
// 0x4156e30

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this;
  
  if (g_data_057accdd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Severed_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
    g_data_057accdd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Recovering
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering (const MethodInfo* method);
// 0x4156ed0

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this;
  
  if (g_data_057accde == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Recovering_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHandStateEnum_object);
    g_data_057accde = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHandStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x4156f70

void CustomLogic_CustomLogicHandStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057accdf == '\0') {
    uStack_20 = 0x4156f89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4156f95;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4156fa1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x4156fad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4156fb9;
    il2cpp_runtime_helper_023445d0(&"Severed");
    uStack_20 = 0x4156fc5;
    il2cpp_runtime_helper_023445d0(&"Damaged");
    uStack_20 = 0x4156fd1;
    il2cpp_runtime_helper_023445d0(&"Recovering");
    uStack_20 = 0x4156fdd;
    il2cpp_runtime_helper_023445d0(&"Healthy");
    g_data_057accdf = '\x01';
  }
  uStack_20 = 0x4156ff3;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4157008;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x415702d;
    System_Collections_Generic_HashSet_object___Add(__this,"Healthy",MethodInfo_Boolean_Add);
    uStack_20 = 0x4157042;
    System_Collections_Generic_HashSet_object___Add(__this,"Damaged",MethodInfo_Boolean_Add);
    uStack_20 = 0x4157057;
    System_Collections_Generic_HashSet_object___Add(__this,"Severed",MethodInfo_Boolean_Add);
    uStack_20 = 0x415706c;
    System_Collections_Generic_HashSet_object___Add(__this,"Recovering",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x415709e;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Healthy>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Healthy_g____getter_2_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x41570a0

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Healthy_g____getter_2_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Damaged>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Damaged_g____getter_3_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x41570c0

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Damaged_g____getter_3_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Severed>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Severed_g____getter_4_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x41570e0

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Severed_g____getter_4_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_5_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x4157100

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_5_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHandStateEnum___ctor (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x41568e0

void CustomLogic_CustomLogicHandStateEnum___ctor
               (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057accd7 = '\x01';
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


// CustomLogic.CustomLogicHandStateEnum$$get_Healthy
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Healthy (const MethodInfo* method);
// 0x4156950

int32_t CustomLogic_CustomLogicHandStateEnum__get_Healthy(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Damaged
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Damaged (const MethodInfo* method);
// 0x4156960

int32_t CustomLogic_CustomLogicHandStateEnum__get_Damaged(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Severed
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Severed (const MethodInfo* method);
// 0x4156970

int32_t CustomLogic_CustomLogicHandStateEnum__get_Severed(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Recovering
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Recovering (const MethodInfo* method);
// 0x4156980

int32_t CustomLogic_CustomLogicHandStateEnum__get_Recovering(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicHandStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHandStateEnum__get_ClassName (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x4156990

System_String_o *
CustomLogic_CustomLogicHandStateEnum__get_ClassName
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  if (g_data_057accd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"HandStateEnum");
    g_data_057accd8 = '\x01';
  }
  return "HandStateEnum";
}


// CustomLogic.CustomLogicHandStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_IsAbstract (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x41569c0

bool_conflict
CustomLogic_CustomLogicHandStateEnum__get_IsAbstract
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHandStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_IsStatic (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x41569d0

bool_conflict
CustomLogic_CustomLogicHandStateEnum__get_IsStatic
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHandStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x41569e0

bool_conflict
CustomLogic_CustomLogicHandStateEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


