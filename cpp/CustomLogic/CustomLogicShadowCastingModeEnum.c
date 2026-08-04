// Type: CustomLogic.CustomLogicShadowCastingModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShadowCastingModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShadowCastingModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShadowCastingModeEnum_o* CustomLogic_CustomLogicShadowCastingModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4196b70

CustomLogic_CustomLogicShadowCastingModeEnum_o *
CustomLogic_CustomLogicShadowCastingModeEnum_Factory__CreateInstance
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
  CustomLogic_CustomLogicShadowCastingModeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad2f3 == '\0') {
    pSStack_20 = (System_String_o *)0x4196b8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicShadowCastingModeEnum);
    g_data_057ad2f3 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4196c07;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4196bb6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicShadowCastingModeEnum);
    if (g_data_057ad2f1 == '\0') {
      pSStack_20 = (System_String_o *)0x4196bce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad2f1 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4196bed;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4196bf7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicShadowCastingModeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x4196c0f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4196c22;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4196c31;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicShadowCastingModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4196c40;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4196c50;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4196c5f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4196c67;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4196c77;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4196c83;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicShadowCastingModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4196c8e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad2f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ShadowsOnly");
    il2cpp_runtime_helper_023445d0(&"On");
    il2cpp_runtime_helper_023445d0(&"Off");
    il2cpp_runtime_helper_023445d0(&"TwoSided");
    g_data_057ad2f4 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Off",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"On",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad2f6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__On_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
        g_data_057ad2f6 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShadowCastingModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"TwoSided",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad2f7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TwoSided_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
        g_data_057ad2f7 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShadowCastingModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ShadowsOnly",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad2f8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowsOnly_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
        g_data_057ad2f8 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShadowCastingModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicShadowCastingModeEnum not found");
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
  if (g_data_057ad2f5 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196e89;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Off_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196e95;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196ea1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196ead;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
    g_data_057ad2f5 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196ec3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196edc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196eeb;
  pCVar8 = (CustomLogic_CustomLogicShadowCastingModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196f05;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4196c90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad2f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ShadowsOnly");
    il2cpp_runtime_helper_023445d0(&"On");
    il2cpp_runtime_helper_023445d0(&"Off");
    il2cpp_runtime_helper_023445d0(&"TwoSided");
    g_data_057ad2f4 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Off",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"On",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2f6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__On_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
        g_data_057ad2f6 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"TwoSided",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2f7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TwoSided_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
        g_data_057ad2f7 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ShadowsOnly",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2f8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowsOnly_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
        g_data_057ad2f8 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicShadowCastingModeEnum not found");
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
  if (g_data_057ad2f5 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196e89;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Off_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196e95;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196ea1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196ead;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
    g_data_057ad2f5 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196ec3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196edc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196eeb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196f05;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__Off
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__Off (const MethodInfo* method);
// 0x4196e70

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__Off(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this;
  
  if (g_data_057ad2f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Off_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
    g_data_057ad2f5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
  return __this;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__On
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__On (const MethodInfo* method);
// 0x4196f10

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__On(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this;
  
  if (g_data_057ad2f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__On_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
    g_data_057ad2f6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
  return __this;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__TwoSided
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__TwoSided (const MethodInfo* method);
// 0x4196fb0

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__TwoSided(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this;
  
  if (g_data_057ad2f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TwoSided_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
    g_data_057ad2f7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
  return __this;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__ShadowsOnly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__ShadowsOnly (const MethodInfo* method);
// 0x4197050

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__ShadowsOnly
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this;
  
  if (g_data_057ad2f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShadowsOnly_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
    g_data_057ad2f8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShadowCastingModeEnum);
  return __this;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x41970f0

void CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad2f9 == '\0') {
    uStack_20 = 0x4197109;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4197115;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4197121;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x419712d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4197139;
    il2cpp_runtime_helper_023445d0(&"ShadowsOnly");
    uStack_20 = 0x4197145;
    il2cpp_runtime_helper_023445d0(&"On");
    uStack_20 = 0x4197151;
    il2cpp_runtime_helper_023445d0(&"Off");
    uStack_20 = 0x419715d;
    il2cpp_runtime_helper_023445d0(&"TwoSided");
    g_data_057ad2f9 = '\x01';
  }
  uStack_20 = 0x4197173;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4197188;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x41971ad;
    System_Collections_Generic_HashSet_object___Add(__this,"Off",MethodInfo_Boolean_Add);
    uStack_20 = 0x41971c2;
    System_Collections_Generic_HashSet_object___Add(__this,"On",MethodInfo_Boolean_Add);
    uStack_20 = 0x41971d7;
    System_Collections_Generic_HashSet_object___Add(__this,"TwoSided",MethodInfo_Boolean_Add);
    uStack_20 = 0x41971ec;
    System_Collections_Generic_HashSet_object___Add(__this,"ShadowsOnly",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x419721e;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__Off>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x4197220

Il2CppObject *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__On>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__On_g____getter_3_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x4197240

Il2CppObject *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__On_g____getter_3_0
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__TwoSided>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__TwoSided_g____getter_4_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x4197260

Il2CppObject *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__TwoSided_g____getter_4_0
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__ShadowsOnly>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__ShadowsOnly_g____getter_5_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x4197280

Il2CppObject *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__ShadowsOnly_g____getter_5_0
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShadowCastingModeEnum___ctor (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x4196a60

void CustomLogic_CustomLogicShadowCastingModeEnum___ctor
               (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad2f1 = '\x01';
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


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_Off
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_Off (const MethodInfo* method);
// 0x4196ad0

int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_Off(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_On
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_On (const MethodInfo* method);
// 0x4196ae0

int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_On(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_TwoSided
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_TwoSided (const MethodInfo* method);
// 0x4196af0

int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_TwoSided(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_ShadowsOnly
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_ShadowsOnly (const MethodInfo* method);
// 0x4196b00

int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_ShadowsOnly(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShadowCastingModeEnum__get_ClassName (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x4196b10

System_String_o *
CustomLogic_CustomLogicShadowCastingModeEnum__get_ClassName
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad2f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ShadowCastingModeEnum");
    g_data_057ad2f2 = '\x01';
  }
  return "ShadowCastingModeEnum";
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_IsAbstract (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x4196b40

bool_conflict
CustomLogic_CustomLogicShadowCastingModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_IsStatic (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x4196b50

bool_conflict
CustomLogic_CustomLogicShadowCastingModeEnum__get_IsStatic
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x4196b60

bool_conflict
CustomLogic_CustomLogicShadowCastingModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


