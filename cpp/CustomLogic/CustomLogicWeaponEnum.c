// Type: CustomLogic.CustomLogicWeaponEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWeaponEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWeaponEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWeaponEnum_o* CustomLogic_CustomLogicWeaponEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41b0ac0

CustomLogic_CustomLogicWeaponEnum_o *
CustomLogic_CustomLogicWeaponEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicWeaponEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad517 == '\0') {
    pSStack_20 = (System_String_o *)0x41b0adc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicWeaponEnum);
    g_data_057ad517 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41b0b57;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41b0b06;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(_DAT_05578240);
    if (g_data_057ad511 == '\0') {
      pSStack_20 = (System_String_o *)0x41b0b1e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad511 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41b0b3d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41b0b47;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicWeaponEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41b0b5f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41b0b72;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41b0b81;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicWeaponEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41b0b90;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41b0ba0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41b0baf;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41b0bb7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x41b0bc7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41b0bd3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicWeaponEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41b0bde;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad518 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad518 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Blade",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"AHSS",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad51a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSS_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
        g_data_057ad51a = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicWeaponEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"APG",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad51b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APG_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
        g_data_057ad51b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicWeaponEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Thunderspear",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad51c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunderspear_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
        g_data_057ad51c = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicWeaponEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicWeaponEnum not found");
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
  if (g_data_057ad519 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b0dd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blade_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b0de5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b0df1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b0dfd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
    g_data_057ad519 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b0e13;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b0e2c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b0e3b;
  pCVar8 = (CustomLogic_CustomLogicWeaponEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b0e55;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWeaponEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41b0be0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWeaponEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad518 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad518 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Blade",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"AHSS",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad51a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSS_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
        g_data_057ad51a = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"APG",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad51b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APG_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
        g_data_057ad51b = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Thunderspear",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad51c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunderspear_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
        g_data_057ad51c = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicWeaponEnum not found");
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
  if (g_data_057ad519 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0dd9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blade_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0de5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0df1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0dfd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
    g_data_057ad519 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0e13;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0e2c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0e3b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b0e55;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Blade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade (const MethodInfo* method);
// 0x41b0dc0

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this;
  
  if (g_data_057ad519 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blade_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
    g_data_057ad519 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return __this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__AHSS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS (const MethodInfo* method);
// 0x41b0e60

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this;
  
  if (g_data_057ad51a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AHSS_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
    g_data_057ad51a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return __this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__APG
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG (const MethodInfo* method);
// 0x41b0f00

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this;
  
  if (g_data_057ad51b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__APG_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
    g_data_057ad51b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return __this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Thunderspear
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear (const MethodInfo* method);
// 0x41b0fa0

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this;
  
  if (g_data_057ad51c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunderspear_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWeaponEnum_object);
    g_data_057ad51c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return __this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWeaponEnum_Bindings___cctor (const MethodInfo* method);
// 0x41b1040

void CustomLogic_CustomLogicWeaponEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad51d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad51d = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Blade",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AHSS",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"APG",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Thunderspear",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac95e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ac95e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Blade>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Blade_g____getter_2_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x41b1170

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Blade_g____getter_2_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac95e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ac95e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__AHSS>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__AHSS_g____getter_3_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x41b11e0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__AHSS_g____getter_3_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad691 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad691 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__APG>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__APG_g____getter_4_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x41b1250

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__APG_g____getter_4_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad692 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad692 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_5_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x41b12c0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_5_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac95f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ac95f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicWeaponEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWeaponEnum___ctor (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x41b0830

void CustomLogic_CustomLogicWeaponEnum___ctor(CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad511 = '\x01';
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


// CustomLogic.CustomLogicWeaponEnum$$get_Blade
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Blade (const MethodInfo* method);
// 0x41b08a0

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Blade(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad512 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad512 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
}


// CustomLogic.CustomLogicWeaponEnum$$get_AHSS
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_AHSS (const MethodInfo* method);
// 0x41b0910

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_AHSS(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad513 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
}


// CustomLogic.CustomLogicWeaponEnum$$get_APG
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_APG (const MethodInfo* method);
// 0x41b0980

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_APG(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad514 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicWeaponEnum$$get_Thunderspear
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Thunderspear (const MethodInfo* method);
// 0x41b09f0

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Thunderspear(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    g_data_057ad515 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicWeaponEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_ClassName (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x41b0a60

System_String_o *
CustomLogic_CustomLogicWeaponEnum__get_ClassName
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad516 == '\0') {
    il2cpp_runtime_helper_023445d0(&"WeaponEnum");
    g_data_057ad516 = '\x01';
  }
  return "WeaponEnum";
}


// CustomLogic.CustomLogicWeaponEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_IsAbstract (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x41b0a90

bool_conflict
CustomLogic_CustomLogicWeaponEnum__get_IsAbstract
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWeaponEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_IsStatic (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x41b0aa0

bool_conflict
CustomLogic_CustomLogicWeaponEnum__get_IsStatic
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWeaponEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x41b0ab0

bool_conflict
CustomLogic_CustomLogicWeaponEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


