// Type: CustomLogic.CustomLogicInputErenShifterEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputErenShifterEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputErenShifterEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputErenShifterEnum_o* CustomLogic_CustomLogicInputErenShifterEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4171dd0

CustomLogic_CustomLogicInputErenShifterEnum_o *
CustomLogic_CustomLogicInputErenShifterEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  CustomLogic_CustomLogicInputErenShifterEnum_o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this;
  undefined8 *puVar6;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acee7 == '\0') {
    pSStack_20 = (System_String_o *)0x4171dec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057acee7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4171e67;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4171e16;
    pCVar2 = (CustomLogic_CustomLogicInputErenShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicInputErenShifterEnum);
    if (g_data_057acee0 == '\0') {
      pSStack_20 = (System_String_o *)0x4171e2e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acee0 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4171e4d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4171e57;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  pSStack_20 = (System_String_o *)0x4171e6f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4171e82;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4171e91;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicInputErenShifterEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4171ea0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4171eb0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4171ebf;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4171ec7;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x4171ed7;
  System_ArgumentException___ctor_3c12490(__this,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4171ee3;
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicInputErenShifterEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4171eee;
  pSVar7 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this,uVar5);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar3;
  if (g_data_057acee8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Walk");
    g_data_057acee8 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"Kick",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"Jump",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057aceea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
        g_data_057aceea = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicInputErenShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"Walk",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057aceeb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
        g_data_057aceeb = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicInputErenShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"AttackCombo",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057aceec == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
        g_data_057aceec = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicInputErenShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
      return pCVar2;
    }
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputErenShifterEnum not found");
    pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
  }
  else {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar7 = pSStack_28;
      pSVar3 = pSStack_20;
    }
    else {
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar7 = pSStack_28;
      pSVar3 = pSStack_20;
    }
  }
  *(System_String_o **)((long)ppuVar9 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar9 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar9 + -0x18) = puVar6;
  if (g_data_057acee9 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41720e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41720f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4172101;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x417210d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
    g_data_057acee9 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4172123;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x417213c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x417214b;
  pCVar2 = (CustomLogic_CustomLogicInputErenShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4172165;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
  return pCVar2;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4171ef0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acee8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Walk");
    g_data_057acee8 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aceea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
        g_data_057aceea = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aceeb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
        g_data_057aceeb = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aceec == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
        g_data_057aceec = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputErenShifterEnum not found");
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
  if (g_data_057acee9 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41720e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41720f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4172101;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417210d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
    g_data_057acee9 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4172123;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417213c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417214b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4172165;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x41720d0

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this;
  
  if (g_data_057acee9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
    g_data_057acee9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x4172170

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this;
  
  if (g_data_057aceea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
    g_data_057aceea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x4172210

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this;
  
  if (g_data_057aceeb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
    g_data_057aceeb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x41722b0

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this;
  
  if (g_data_057aceec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
    g_data_057aceec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum_Bindings___cctor (const MethodInfo* method);
// 0x4172350

void CustomLogic_CustomLogicInputErenShifterEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057aceed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"Walk");
    g_data_057aceed = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Kick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackCombo",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aceee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057aceee = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057ad0c8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x4172480

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aceee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057aceee = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057ad0c8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x4172530

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aceef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057aceef = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057ad0c9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x41725e0

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057acef0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057ad0ca = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x4172690

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057acef1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057ad0cb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum___ctor (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x4171a50

void CustomLogic_CustomLogicInputErenShifterEnum___ctor
               (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acee0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acee0 = '\x01';
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


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Kick (const MethodInfo* method);
// 0x4171ac0

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Kick(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acee1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057acee1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Jump (const MethodInfo* method);
// 0x4171b30

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acee2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057acee2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Walk (const MethodInfo* method);
// 0x4171ba0

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Walk(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acee3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057acee3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_AttackCombo (const MethodInfo* method);
// 0x4171c10

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_AttackCombo(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acee4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    g_data_057acee4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_ClassName (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x4171c80

System_String_o *
CustomLogic_CustomLogicInputErenShifterEnum__get_ClassName
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acee5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"InputErenShifterEnum");
    g_data_057acee5 = '\x01';
  }
  return "InputErenShifterEnum";
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsAbstract (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x4171cb0

bool_conflict
CustomLogic_CustomLogicInputErenShifterEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsStatic (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x4171cc0

bool_conflict
CustomLogic_CustomLogicInputErenShifterEnum__get_IsStatic
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x4171cd0

bool_conflict
CustomLogic_CustomLogicInputErenShifterEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum___cctor (const MethodInfo* method);
// 0x4171ce0

void CustomLogic_CustomLogicInputErenShifterEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057acee6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputErenShifterEnum);
    il2cpp_runtime_helper_023445d0(&"ErenShifter/Kick");
    il2cpp_runtime_helper_023445d0(&"ErenShifter/Walk");
    il2cpp_runtime_helper_023445d0(&"ErenShifter/AttackCombo");
    il2cpp_runtime_helper_023445d0(&"ErenShifter/Jump");
    g_data_057acee6 = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) = "ErenShifter/Kick";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8),"ErenShifter/Kick");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "ErenShifter/Jump";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "ErenShifter/Walk";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "ErenShifter/AttackCombo";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  return;
}


