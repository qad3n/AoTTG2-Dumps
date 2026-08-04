// Type: CustomLogic.CustomLogicAngleUnitEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAngleUnitEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAngleUnitEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAngleUnitEnum_o* CustomLogic_CustomLogicAngleUnitEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4146180

CustomLogic_CustomLogicAngleUnitEnum_o *
CustomLogic_CustomLogicAngleUnitEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicAngleUnitEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acb9d == '\0') {
    pSStack_20 = (System_String_o *)0x414619c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAngleUnitEnum);
    g_data_057acb9d = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4146217;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41461c6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAngleUnitEnum);
    if (g_data_057acb9b == '\0') {
      pSStack_20 = (System_String_o *)0x41461de;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acb9b = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41461fd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4146207;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicAngleUnitEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414621f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4146232;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4146241;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicAngleUnitEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4146250;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4146260;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414626f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4146277;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4146287;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4146293;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicAngleUnitEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414629e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057acb9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Radian");
    il2cpp_runtime_helper_023445d0(&"Turn");
    il2cpp_runtime_helper_023445d0(&"Degree");
    il2cpp_runtime_helper_023445d0(&"Gradian");
    g_data_057acb9e = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Degree",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Gradian",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acba0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Gradian_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
        g_data_057acba0 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicAngleUnitEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Radian",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acba1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Radian_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
        g_data_057acba1 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicAngleUnitEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Turn",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acba2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
        g_data_057acba2 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicAngleUnitEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAngleUnitEnum not found");
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
  if (g_data_057acb9f == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4146499;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Degree_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41464a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41464b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41464bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
    g_data_057acb9f = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41464d3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41464ec;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41464fb;
  pCVar8 = (CustomLogic_CustomLogicAngleUnitEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4146515;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAngleUnitEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41462a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acb9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Radian");
    il2cpp_runtime_helper_023445d0(&"Turn");
    il2cpp_runtime_helper_023445d0(&"Degree");
    il2cpp_runtime_helper_023445d0(&"Gradian");
    g_data_057acb9e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Degree",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Gradian",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acba0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Gradian_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
        g_data_057acba0 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Radian",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acba1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Radian_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
        g_data_057acba1 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Turn",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acba2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
        g_data_057acba2 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAngleUnitEnum not found");
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
  if (g_data_057acb9f == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4146499;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Degree_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41464a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41464b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41464bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
    g_data_057acb9f = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41464d3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41464ec;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41464fb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4146515;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Degree
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree (const MethodInfo* method);
// 0x4146480

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this;
  
  if (g_data_057acb9f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Degree_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
    g_data_057acb9f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return __this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Gradian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian (const MethodInfo* method);
// 0x4146520

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this;
  
  if (g_data_057acba0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Gradian_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
    g_data_057acba0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return __this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Radian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian (const MethodInfo* method);
// 0x41465c0

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this;
  
  if (g_data_057acba1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Radian_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
    g_data_057acba1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return __this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Turn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn (const MethodInfo* method);
// 0x4146660

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this;
  
  if (g_data_057acba2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Turn_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAngleUnitEnum_object);
    g_data_057acba2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return __this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAngleUnitEnum_Bindings___cctor (const MethodInfo* method);
// 0x4146700

void CustomLogic_CustomLogicAngleUnitEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057acba3 == '\0') {
    uStack_20 = 0x4146719;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4146725;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4146731;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x414673d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4146749;
    il2cpp_runtime_helper_023445d0(&"Radian");
    uStack_20 = 0x4146755;
    il2cpp_runtime_helper_023445d0(&"Turn");
    uStack_20 = 0x4146761;
    il2cpp_runtime_helper_023445d0(&"Degree");
    uStack_20 = 0x414676d;
    il2cpp_runtime_helper_023445d0(&"Gradian");
    g_data_057acba3 = '\x01';
  }
  uStack_20 = 0x4146783;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4146798;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x41467bd;
    System_Collections_Generic_HashSet_object___Add(__this,"Degree",MethodInfo_Boolean_Add);
    uStack_20 = 0x41467d2;
    System_Collections_Generic_HashSet_object___Add(__this,"Gradian",MethodInfo_Boolean_Add);
    uStack_20 = 0x41467e7;
    System_Collections_Generic_HashSet_object___Add(__this,"Radian",MethodInfo_Boolean_Add);
    uStack_20 = 0x41467fc;
    System_Collections_Generic_HashSet_object___Add(__this,"Turn",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x414682e;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Degree>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Degree_g____getter_2_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x4146830

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Degree_g____getter_2_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Gradian>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Gradian_g____getter_3_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x4146850

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Gradian_g____getter_3_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Radian>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Radian_g____getter_4_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x4146870

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Radian_g____getter_4_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Turn>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Turn_g____getter_5_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x4146890

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Turn_g____getter_5_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAngleUnitEnum___ctor (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x4146070

void CustomLogic_CustomLogicAngleUnitEnum___ctor
               (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acb9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acb9b = '\x01';
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


// CustomLogic.CustomLogicAngleUnitEnum$$get_Degree
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Degree (const MethodInfo* method);
// 0x41460e0

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Degree(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Gradian
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Gradian (const MethodInfo* method);
// 0x41460f0

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Gradian(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Radian
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Radian (const MethodInfo* method);
// 0x4146100

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Radian(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Turn
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Turn (const MethodInfo* method);
// 0x4146110

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Turn(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAngleUnitEnum__get_ClassName (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x4146120

System_String_o *
CustomLogic_CustomLogicAngleUnitEnum__get_ClassName
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acb9c == '\0') {
    il2cpp_runtime_helper_023445d0(&"AngleUnitEnum");
    g_data_057acb9c = '\x01';
  }
  return "AngleUnitEnum";
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_IsAbstract (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x4146150

bool_conflict
CustomLogic_CustomLogicAngleUnitEnum__get_IsAbstract
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_IsStatic (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x4146160

bool_conflict
CustomLogic_CustomLogicAngleUnitEnum__get_IsStatic
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x4146170

bool_conflict
CustomLogic_CustomLogicAngleUnitEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


