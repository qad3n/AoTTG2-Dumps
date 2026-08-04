// Type: CustomLogic.CustomLogicForceModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicForceModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicForceModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicForceModeEnum_o* CustomLogic_CustomLogicForceModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4155bf0

CustomLogic_CustomLogicForceModeEnum_o *
CustomLogic_CustomLogicForceModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicForceModeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057accc9 == '\0') {
    pSStack_20 = (System_String_o *)0x4155c0c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicForceModeEnum);
    g_data_057accc9 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4155c87;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4155c36;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicForceModeEnum);
    if (g_data_057accc7 == '\0') {
      pSStack_20 = (System_String_o *)0x4155c4e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057accc7 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4155c6d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4155c77;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicForceModeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x4155c8f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4155ca2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4155cb1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicForceModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4155cc0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4155cd0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4155cdf;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4155ce7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4155cf7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4155d03;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicForceModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4155d0e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057accca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    il2cpp_runtime_helper_023445d0(&"VelocityChange");
    il2cpp_runtime_helper_023445d0(&"Impulse");
    il2cpp_runtime_helper_023445d0(&"Force");
    g_data_057accca = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Force",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Acceleration",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acccc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Acceleration_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
        g_data_057acccc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicForceModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Impulse",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acccd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Impulse_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
        g_data_057acccd = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicForceModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"VelocityChange",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accce == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VelocityChange_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
        g_data_057accce = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicForceModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicForceModeEnum not found");
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
  if (g_data_057acccb == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155f09;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Force_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155f15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155f21;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155f2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
    g_data_057acccb = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155f43;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155f5c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155f6b;
  pCVar8 = (CustomLogic_CustomLogicForceModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155f85;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicForceModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4155d10

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicForceModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057accca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    il2cpp_runtime_helper_023445d0(&"VelocityChange");
    il2cpp_runtime_helper_023445d0(&"Impulse");
    il2cpp_runtime_helper_023445d0(&"Force");
    g_data_057accca = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Force",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Acceleration",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acccc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Acceleration_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
        g_data_057acccc = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Impulse",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acccd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Impulse_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
        g_data_057acccd = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"VelocityChange",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accce == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VelocityChange_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
        g_data_057accce = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicForceModeEnum not found");
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
  if (g_data_057acccb == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155f09;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Force_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155f15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155f21;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155f2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
    g_data_057acccb = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155f43;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155f5c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155f6b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155f85;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Force
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force (const MethodInfo* method);
// 0x4155ef0

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this;
  
  if (g_data_057acccb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Force_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
    g_data_057acccb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return __this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Acceleration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration (const MethodInfo* method);
// 0x4155f90

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this;
  
  if (g_data_057acccc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Acceleration_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
    g_data_057acccc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return __this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Impulse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse (const MethodInfo* method);
// 0x4156030

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this;
  
  if (g_data_057acccd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Impulse_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
    g_data_057acccd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return __this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__VelocityChange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange (const MethodInfo* method);
// 0x41560d0

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this;
  
  if (g_data_057accce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VelocityChange_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicForceModeEnum_object);
    g_data_057accce = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return __this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicForceModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x4156170

void CustomLogic_CustomLogicForceModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057acccf == '\0') {
    uStack_20 = 0x4156189;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4156195;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x41561a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x41561ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x41561b9;
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    uStack_20 = 0x41561c5;
    il2cpp_runtime_helper_023445d0(&"VelocityChange");
    uStack_20 = 0x41561d1;
    il2cpp_runtime_helper_023445d0(&"Impulse");
    uStack_20 = 0x41561dd;
    il2cpp_runtime_helper_023445d0(&"Force");
    g_data_057acccf = '\x01';
  }
  uStack_20 = 0x41561f3;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4156208;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x415622d;
    System_Collections_Generic_HashSet_object___Add(__this,"Force",MethodInfo_Boolean_Add);
    uStack_20 = 0x4156242;
    System_Collections_Generic_HashSet_object___Add(__this,"Acceleration",MethodInfo_Boolean_Add);
    uStack_20 = 0x4156257;
    System_Collections_Generic_HashSet_object___Add(__this,"Impulse",MethodInfo_Boolean_Add);
    uStack_20 = 0x415626c;
    System_Collections_Generic_HashSet_object___Add(__this,"VelocityChange",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x415629e;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Force>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Force_g____getter_2_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x41562a0

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Force_g____getter_2_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Acceleration_g____getter_3_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x41562c0

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Acceleration_g____getter_3_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Impulse_g____getter_4_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x41562e0

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Impulse_g____getter_4_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__VelocityChange>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__VelocityChange_g____getter_5_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x4156300

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__VelocityChange_g____getter_5_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicForceModeEnum___ctor (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x4155ae0

void CustomLogic_CustomLogicForceModeEnum___ctor
               (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057accc7 = '\x01';
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


// CustomLogic.CustomLogicForceModeEnum$$get_Force
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Force (const MethodInfo* method);
// 0x4155b50

int32_t CustomLogic_CustomLogicForceModeEnum__get_Force(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Acceleration
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Acceleration (const MethodInfo* method);
// 0x4155b60

int32_t CustomLogic_CustomLogicForceModeEnum__get_Acceleration(MethodInfo *method)

{
  return 5;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Impulse
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Impulse (const MethodInfo* method);
// 0x4155b70

int32_t CustomLogic_CustomLogicForceModeEnum__get_Impulse(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicForceModeEnum$$get_VelocityChange
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_VelocityChange (const MethodInfo* method);
// 0x4155b80

int32_t CustomLogic_CustomLogicForceModeEnum__get_VelocityChange(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicForceModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicForceModeEnum__get_ClassName (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x4155b90

System_String_o *
CustomLogic_CustomLogicForceModeEnum__get_ClassName
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057accc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ForceModeEnum");
    g_data_057accc8 = '\x01';
  }
  return "ForceModeEnum";
}


// CustomLogic.CustomLogicForceModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_IsAbstract (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x4155bc0

bool_conflict
CustomLogic_CustomLogicForceModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicForceModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_IsStatic (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x4155bd0

bool_conflict
CustomLogic_CustomLogicForceModeEnum__get_IsStatic
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicForceModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x4155be0

bool_conflict
CustomLogic_CustomLogicForceModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


