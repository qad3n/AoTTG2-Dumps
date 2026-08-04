// Type: CustomLogic.CustomLogicLineTextureModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineTextureModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLineTextureModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineTextureModeEnum_o* CustomLogic_CustomLogicLineTextureModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4183750

CustomLogic_CustomLogicLineTextureModeEnum_o *
CustomLogic_CustomLogicLineTextureModeEnum_Factory__CreateInstance
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
  CustomLogic_CustomLogicLineTextureModeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad162 == '\0') {
    pSStack_20 = (System_String_o *)0x418376c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLineTextureModeEnum);
    g_data_057ad162 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41837e7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4183796;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLineTextureModeEnum);
    if (g_data_057ad160 == '\0') {
      pSStack_20 = (System_String_o *)0x41837ae;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad160 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41837cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41837d7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicLineTextureModeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41837ef;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4183802;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4183811;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLineTextureModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4183820;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4183830;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x418383f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4183847;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4183857;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4183863;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLineTextureModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x418386e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad163 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Tile");
    il2cpp_runtime_helper_023445d0(&"RepeatPerSegment");
    il2cpp_runtime_helper_023445d0(&"DistributePerSegment");
    g_data_057ad163 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Stretch",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Tile",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad165 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Tile_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
        g_data_057ad165 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicLineTextureModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"DistributePerSegment",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad166 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DistributePerSegment_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
        g_data_057ad166 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicLineTextureModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"RepeatPerSegment",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad167 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RepeatPerSegment_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
        g_data_057ad167 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicLineTextureModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLineTextureModeEnum not found");
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
  if (g_data_057ad164 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183a69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stretch_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183a75;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183a81;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183a8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
    g_data_057ad164 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183aa3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183abc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183acb;
  pCVar8 = (CustomLogic_CustomLogicLineTextureModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183ae5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4183870

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad163 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Tile");
    il2cpp_runtime_helper_023445d0(&"RepeatPerSegment");
    il2cpp_runtime_helper_023445d0(&"DistributePerSegment");
    g_data_057ad163 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Stretch",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Tile",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad165 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Tile_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
        g_data_057ad165 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"DistributePerSegment",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad166 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DistributePerSegment_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
        g_data_057ad166 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"RepeatPerSegment",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad167 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RepeatPerSegment_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
        g_data_057ad167 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLineTextureModeEnum not found");
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
  if (g_data_057ad164 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183a69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stretch_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183a75;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183a81;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183a8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
    g_data_057ad164 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183aa3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183abc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183acb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183ae5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Stretch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch (const MethodInfo* method);
// 0x4183a50

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this;
  
  if (g_data_057ad164 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stretch_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
    g_data_057ad164 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
  return __this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Tile
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile (const MethodInfo* method);
// 0x4183af0

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this;
  
  if (g_data_057ad165 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Tile_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
    g_data_057ad165 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
  return __this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__DistributePerSegment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment (const MethodInfo* method);
// 0x4183b90

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this;
  
  if (g_data_057ad166 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DistributePerSegment_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
    g_data_057ad166 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
  return __this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__RepeatPerSegment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment (const MethodInfo* method);
// 0x4183c30

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this;
  
  if (g_data_057ad167 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RepeatPerSegment_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
    g_data_057ad167 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEnum);
  return __this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineTextureModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x4183cd0

void CustomLogic_CustomLogicLineTextureModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad168 == '\0') {
    uStack_20 = 0x4183ce9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4183cf5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4183d01;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x4183d0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4183d19;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    uStack_20 = 0x4183d25;
    il2cpp_runtime_helper_023445d0(&"Tile");
    uStack_20 = 0x4183d31;
    il2cpp_runtime_helper_023445d0(&"RepeatPerSegment");
    uStack_20 = 0x4183d3d;
    il2cpp_runtime_helper_023445d0(&"DistributePerSegment");
    g_data_057ad168 = '\x01';
  }
  uStack_20 = 0x4183d53;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4183d68;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x4183d8d;
    System_Collections_Generic_HashSet_object___Add(__this,"Stretch",MethodInfo_Boolean_Add);
    uStack_20 = 0x4183da2;
    System_Collections_Generic_HashSet_object___Add(__this,"Tile",MethodInfo_Boolean_Add);
    uStack_20 = 0x4183db7;
    System_Collections_Generic_HashSet_object___Add(__this,"DistributePerSegment",MethodInfo_Boolean_Add);
    uStack_20 = 0x4183dcc;
    System_Collections_Generic_HashSet_object___Add(__this,"RepeatPerSegment",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x4183dfe;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_2_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x4183e00

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_2_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Tile>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Tile_g____getter_3_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x4183e20

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Tile_g____getter_3_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__DistributePerSegment>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__DistributePerSegment_g____getter_4_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x4183e40

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__DistributePerSegment_g____getter_4_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__RepeatPerSegment>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__RepeatPerSegment_g____getter_5_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x4183e60

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__RepeatPerSegment_g____getter_5_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineTextureModeEnum___ctor (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x4183640

void CustomLogic_CustomLogicLineTextureModeEnum___ctor
               (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad160 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad160 = '\x01';
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


// CustomLogic.CustomLogicLineTextureModeEnum$$get_Stretch
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Stretch (const MethodInfo* method);
// 0x41836b0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Stretch(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_Tile
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Tile (const MethodInfo* method);
// 0x41836c0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Tile(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_DistributePerSegment
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_DistributePerSegment (const MethodInfo* method);
// 0x41836d0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_DistributePerSegment(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_RepeatPerSegment
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_RepeatPerSegment (const MethodInfo* method);
// 0x41836e0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_RepeatPerSegment(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineTextureModeEnum__get_ClassName (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x41836f0

System_String_o *
CustomLogic_CustomLogicLineTextureModeEnum__get_ClassName
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad161 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LineTextureModeEnum");
    g_data_057ad161 = '\x01';
  }
  return "LineTextureModeEnum";
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsAbstract (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x4183720

bool_conflict
CustomLogic_CustomLogicLineTextureModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsStatic (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x4183730

bool_conflict
CustomLogic_CustomLogicLineTextureModeEnum__get_IsStatic
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x4183740

bool_conflict
CustomLogic_CustomLogicLineTextureModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


