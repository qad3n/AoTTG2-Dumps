// Type: CustomLogic.CustomLogicPhysicMaterialCombineEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicMaterialCombineEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4186b60

CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad1a5 == '\0') {
    pSStack_20 = (System_String_o *)0x4186b7c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPhysicMaterialCombineEnum);
    g_data_057ad1a5 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4186bf7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4186ba6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPhysicMaterialCombineEnum);
    if (g_data_057ad1a3 == '\0') {
      pSStack_20 = (System_String_o *)0x4186bbe;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad1a3 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4186bdd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4186be7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x4186bff;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4186c12;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4186c21;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicPhysicMaterialCombineEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4186c30;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4186c40;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4186c4f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4186c57;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4186c67;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4186c73;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPhysicMaterialCombineEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4186c7e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad1a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Average");
    il2cpp_runtime_helper_023445d0(&"Minimum");
    il2cpp_runtime_helper_023445d0(&"Maximum");
    il2cpp_runtime_helper_023445d0(&"Multiply");
    g_data_057ad1a6 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Minimum",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Multiply",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad1a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Multiply_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
        g_data_057ad1a8 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Maximum",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad1a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Maximum_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
        g_data_057ad1a9 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Average",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad1aa == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Average_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
        g_data_057ad1aa = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPhysicMaterialCombineEnum not found");
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
  if (g_data_057ad1a7 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4186e79;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Minimum_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4186e85;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4186e91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4186e9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
    g_data_057ad1a7 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4186eb3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4186ecc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4186edb;
  pCVar8 = (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4186ef5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4186c80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad1a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Average");
    il2cpp_runtime_helper_023445d0(&"Minimum");
    il2cpp_runtime_helper_023445d0(&"Maximum");
    il2cpp_runtime_helper_023445d0(&"Multiply");
    g_data_057ad1a6 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Minimum",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Multiply",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad1a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Multiply_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
        g_data_057ad1a8 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Maximum",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad1a9 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Maximum_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
        g_data_057ad1a9 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Average",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad1aa == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Average_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
        g_data_057ad1aa = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPhysicMaterialCombineEnum not found");
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
  if (g_data_057ad1a7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4186e79;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Minimum_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4186e85;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4186e91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4186e9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
    g_data_057ad1a7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4186eb3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4186ecc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4186edb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4186ef5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Minimum
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum (const MethodInfo* method);
// 0x4186e60

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this;
  
  if (g_data_057ad1a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Minimum_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
    g_data_057ad1a7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
  return __this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Multiply
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply (const MethodInfo* method);
// 0x4186f00

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this;
  
  if (g_data_057ad1a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Multiply_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
    g_data_057ad1a8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
  return __this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Maximum
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum (const MethodInfo* method);
// 0x4186fa0

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this;
  
  if (g_data_057ad1a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Maximum_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
    g_data_057ad1a9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
  return __this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Average
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average (const MethodInfo* method);
// 0x4187040

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this;
  
  if (g_data_057ad1aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Average_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
    g_data_057ad1aa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCombineEnum);
  return __this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___cctor (const MethodInfo* method);
// 0x41870e0

void CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad1ab == '\0') {
    uStack_20 = 0x41870f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4187105;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4187111;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x418711d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4187129;
    il2cpp_runtime_helper_023445d0(&"Average");
    uStack_20 = 0x4187135;
    il2cpp_runtime_helper_023445d0(&"Minimum");
    uStack_20 = 0x4187141;
    il2cpp_runtime_helper_023445d0(&"Maximum");
    uStack_20 = 0x418714d;
    il2cpp_runtime_helper_023445d0(&"Multiply");
    g_data_057ad1ab = '\x01';
  }
  uStack_20 = 0x4187163;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4187178;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x418719d;
    System_Collections_Generic_HashSet_object___Add(__this,"Minimum",MethodInfo_Boolean_Add);
    uStack_20 = 0x41871b2;
    System_Collections_Generic_HashSet_object___Add(__this,"Multiply",MethodInfo_Boolean_Add);
    uStack_20 = 0x41871c7;
    System_Collections_Generic_HashSet_object___Add(__this,"Maximum",MethodInfo_Boolean_Add);
    uStack_20 = 0x41871dc;
    System_Collections_Generic_HashSet_object___Add(__this,"Average",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x418720e;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = CONCAT44(2,uVar1);
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Minimum>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Minimum_g____getter_2_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x4187210

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Minimum_g____getter_2_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Multiply>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Multiply_g____getter_3_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x4187230

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Multiply_g____getter_3_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Maximum>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Maximum_g____getter_4_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x4187250

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Maximum_g____getter_4_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Average>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Average_g____getter_5_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x4187270

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Average_g____getter_5_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicMaterialCombineEnum___ctor (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x4186a50

void CustomLogic_CustomLogicPhysicMaterialCombineEnum___ctor
               (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad1a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad1a3 = '\x01';
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


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Minimum
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Minimum (const MethodInfo* method);
// 0x4186ac0

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Minimum(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Multiply
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Multiply (const MethodInfo* method);
// 0x4186ad0

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Multiply(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Maximum
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Maximum (const MethodInfo* method);
// 0x4186ae0

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Maximum(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Average
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Average (const MethodInfo* method);
// 0x4186af0

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Average(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_ClassName (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x4186b00

System_String_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_ClassName
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad1a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PhysicMaterialCombineEnum");
    g_data_057ad1a4 = '\x01';
  }
  return "PhysicMaterialCombineEnum";
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsAbstract (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x4186b30

bool_conflict
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsAbstract
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsStatic (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x4186b40

bool_conflict
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsStatic
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x4186b50

bool_conflict
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


