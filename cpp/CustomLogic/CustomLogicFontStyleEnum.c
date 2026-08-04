// Type: CustomLogic.CustomLogicFontStyleEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFontStyleEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicFontStyleEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFontStyleEnum_o* CustomLogic_CustomLogicFontStyleEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41553b0

CustomLogic_CustomLogicFontStyleEnum_o *
CustomLogic_CustomLogicFontStyleEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicFontStyleEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057accc0 == '\0') {
    pSStack_20 = (System_String_o *)0x41553cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicFontStyleEnum);
    g_data_057accc0 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4155447;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41553f6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicFontStyleEnum);
    if (g_data_057accbe == '\0') {
      pSStack_20 = (System_String_o *)0x415540e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057accbe = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x415542d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4155437;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicFontStyleEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x415544f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4155462;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4155471;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicFontStyleEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4155480;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4155490;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x415549f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41554a7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x41554b7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41554c3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicFontStyleEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41554ce;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057accc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Italic");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Bold");
    il2cpp_runtime_helper_023445d0(&"BoldAndItalic");
    g_data_057accc1 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Normal",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Bold",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accc3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bold_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
        g_data_057accc3 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicFontStyleEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Italic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accc4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Italic_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
        g_data_057accc4 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicFontStyleEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"BoldAndItalic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accc5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BoldAndItalic_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
        g_data_057accc5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicFontStyleEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicFontStyleEnum not found");
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
  if (g_data_057accc2 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41556c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41556d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41556e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41556ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
    g_data_057accc2 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155703;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x415571c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x415572b;
  pCVar8 = (CustomLogic_CustomLogicFontStyleEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155745;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFontStyleEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41554d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFontStyleEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057accc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Italic");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Bold");
    il2cpp_runtime_helper_023445d0(&"BoldAndItalic");
    g_data_057accc1 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Bold",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accc3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bold_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
        g_data_057accc3 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Italic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accc4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Italic_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
        g_data_057accc4 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"BoldAndItalic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accc5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BoldAndItalic_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
        g_data_057accc5 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicFontStyleEnum not found");
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
  if (g_data_057accc2 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41556c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41556d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41556e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41556ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
    g_data_057accc2 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155703;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415571c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415572b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155745;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x41556b0

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this;
  
  if (g_data_057accc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
    g_data_057accc2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return __this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Bold
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold (const MethodInfo* method);
// 0x4155750

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this;
  
  if (g_data_057accc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bold_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
    g_data_057accc3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return __this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Italic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic (const MethodInfo* method);
// 0x41557f0

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this;
  
  if (g_data_057accc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Italic_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
    g_data_057accc4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return __this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__BoldAndItalic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic (const MethodInfo* method);
// 0x4155890

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this;
  
  if (g_data_057accc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BoldAndItalic_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontStyleEnum_object);
    g_data_057accc5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return __this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFontStyleEnum_Bindings___cctor (const MethodInfo* method);
// 0x4155930

void CustomLogic_CustomLogicFontStyleEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057accc6 == '\0') {
    uStack_20 = 0x4155949;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4155955;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4155961;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x415596d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4155979;
    il2cpp_runtime_helper_023445d0(&"Italic");
    uStack_20 = 0x4155985;
    il2cpp_runtime_helper_023445d0(&"Normal");
    uStack_20 = 0x4155991;
    il2cpp_runtime_helper_023445d0(&"Bold");
    uStack_20 = 0x415599d;
    il2cpp_runtime_helper_023445d0(&"BoldAndItalic");
    g_data_057accc6 = '\x01';
  }
  uStack_20 = 0x41559b3;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x41559c8;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x41559ed;
    System_Collections_Generic_HashSet_object___Add(__this,"Normal",MethodInfo_Boolean_Add);
    uStack_20 = 0x4155a02;
    System_Collections_Generic_HashSet_object___Add(__this,"Bold",MethodInfo_Boolean_Add);
    uStack_20 = 0x4155a17;
    System_Collections_Generic_HashSet_object___Add(__this,"Italic",MethodInfo_Boolean_Add);
    uStack_20 = 0x4155a2c;
    System_Collections_Generic_HashSet_object___Add(__this,"BoldAndItalic",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x4155a5e;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x4155a60

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Bold>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Bold_g____getter_3_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x4155a80

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Bold_g____getter_3_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Italic>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Italic_g____getter_4_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x4155aa0

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Italic_g____getter_4_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__BoldAndItalic>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__BoldAndItalic_g____getter_5_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x4155ac0

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__BoldAndItalic_g____getter_5_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFontStyleEnum___ctor (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x41552a0

void CustomLogic_CustomLogicFontStyleEnum___ctor
               (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accbe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057accbe = '\x01';
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


// CustomLogic.CustomLogicFontStyleEnum$$get_Normal
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Normal (const MethodInfo* method);
// 0x4155310

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Normal(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Bold
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Bold (const MethodInfo* method);
// 0x4155320

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Bold(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Italic
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Italic (const MethodInfo* method);
// 0x4155330

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Italic(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_BoldAndItalic
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_BoldAndItalic (const MethodInfo* method);
// 0x4155340

int32_t CustomLogic_CustomLogicFontStyleEnum__get_BoldAndItalic(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFontStyleEnum__get_ClassName (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x4155350

System_String_o *
CustomLogic_CustomLogicFontStyleEnum__get_ClassName
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  if (g_data_057accbf == '\0') {
    il2cpp_runtime_helper_023445d0(&"FontStyleEnum");
    g_data_057accbf = '\x01';
  }
  return "FontStyleEnum";
}


// CustomLogic.CustomLogicFontStyleEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_IsAbstract (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x4155380

bool_conflict
CustomLogic_CustomLogicFontStyleEnum__get_IsAbstract
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFontStyleEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_IsStatic (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x4155390

bool_conflict
CustomLogic_CustomLogicFontStyleEnum__get_IsStatic
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFontStyleEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x41553a0

bool_conflict
CustomLogic_CustomLogicFontStyleEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


