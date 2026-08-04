// Type: CustomLogic.CustomLogicScaleModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScaleModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScaleModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScaleModeEnum_o* CustomLogic_CustomLogicScaleModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4195d60

CustomLogic_CustomLogicScaleModeEnum_o *
CustomLogic_CustomLogicScaleModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicScaleModeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad2e3 == '\0') {
    pSStack_20 = (System_String_o *)0x4195d7c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicScaleModeEnum);
    g_data_057ad2e3 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4195df7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4195da6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicScaleModeEnum);
    if (g_data_057ad2e1 == '\0') {
      pSStack_20 = (System_String_o *)0x4195dbe;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad2e1 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4195ddd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4195de7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicScaleModeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x4195dff;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4195e12;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4195e21;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicScaleModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4195e30;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4195e40;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4195e4f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4195e57;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4195e67;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4195e73;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScaleModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4195e7e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad2e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"StretchToFill");
    il2cpp_runtime_helper_023445d0(&"ScaleToFit");
    il2cpp_runtime_helper_023445d0(&"ScaleAndCrop");
    g_data_057ad2e4 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"StretchToFill",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ScaleAndCrop",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad2e6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleAndCrop_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
        g_data_057ad2e6 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicScaleModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ScaleToFit",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad2e7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleToFit_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
        g_data_057ad2e7 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicScaleModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicScaleModeEnum not found");
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
  if (g_data_057ad2e5 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196029;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StretchToFill_g____gette);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196035;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196041;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419604d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
    g_data_057ad2e5 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196063;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419607c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419608b;
  pCVar8 = (CustomLogic_CustomLogicScaleModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41960a5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScaleModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4195e80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScaleModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad2e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"StretchToFill");
    il2cpp_runtime_helper_023445d0(&"ScaleToFit");
    il2cpp_runtime_helper_023445d0(&"ScaleAndCrop");
    g_data_057ad2e4 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"StretchToFill",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"ScaleAndCrop",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2e6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleAndCrop_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
        g_data_057ad2e6 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ScaleToFit",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2e7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleToFit_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
        g_data_057ad2e7 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicScaleModeEnum not found");
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
  if (g_data_057ad2e5 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196029;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StretchToFill_g____gette);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196035;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196041;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419604d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
    g_data_057ad2e5 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196063;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419607c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419608b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41960a5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__StretchToFill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill (const MethodInfo* method);
// 0x4196010

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this;
  
  if (g_data_057ad2e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StretchToFill_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
    g_data_057ad2e5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleAndCrop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop (const MethodInfo* method);
// 0x41960b0

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this;
  
  if (g_data_057ad2e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleAndCrop_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
    g_data_057ad2e6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleToFit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit (const MethodInfo* method);
// 0x4196150

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this;
  
  if (g_data_057ad2e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleToFit_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScaleModeEnum_object);
    g_data_057ad2e7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScaleModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x41961f0

void CustomLogic_CustomLogicScaleModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad2e8 == '\0') {
    uStack_20 = 0x4196209;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4196215;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4196221;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x419622d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4196239;
    il2cpp_runtime_helper_023445d0(&"StretchToFill");
    uStack_20 = 0x4196245;
    il2cpp_runtime_helper_023445d0(&"ScaleToFit");
    uStack_20 = 0x4196251;
    il2cpp_runtime_helper_023445d0(&"ScaleAndCrop");
    g_data_057ad2e8 = '\x01';
  }
  uStack_20 = 0x4196267;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x419627c;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x419629d;
    System_Collections_Generic_HashSet_object___Add(__this,"StretchToFill",MethodInfo_Boolean_Add);
    uStack_20 = 0x41962b2;
    System_Collections_Generic_HashSet_object___Add(__this,"ScaleAndCrop",MethodInfo_Boolean_Add);
    uStack_20 = 0x41962c7;
    System_Collections_Generic_HashSet_object___Add(__this,"ScaleToFit",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x41962f9;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__StretchToFill>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__StretchToFill_g____getter_2_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x4196300

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__StretchToFill_g____getter_2_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleAndCrop>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleAndCrop_g____getter_3_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x4196320

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleAndCrop_g____getter_3_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleToFit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleToFit_g____getter_4_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x4196340

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleToFit_g____getter_4_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicScaleModeEnum___ctor (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4195c60

void CustomLogic_CustomLogicScaleModeEnum___ctor
               (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad2e1 = '\x01';
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


// CustomLogic.CustomLogicScaleModeEnum$$get_StretchToFill
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_StretchToFill (const MethodInfo* method);
// 0x4195cd0

int32_t CustomLogic_CustomLogicScaleModeEnum__get_StretchToFill(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ScaleAndCrop
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleAndCrop (const MethodInfo* method);
// 0x4195ce0

int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleAndCrop(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ScaleToFit
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleToFit (const MethodInfo* method);
// 0x4195cf0

int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleToFit(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScaleModeEnum__get_ClassName (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4195d00

System_String_o *
CustomLogic_CustomLogicScaleModeEnum__get_ClassName
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad2e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScaleModeEnum");
    g_data_057ad2e2 = '\x01';
  }
  return "ScaleModeEnum";
}


// CustomLogic.CustomLogicScaleModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_IsAbstract (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4195d30

bool_conflict
CustomLogic_CustomLogicScaleModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicScaleModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_IsStatic (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4195d40

bool_conflict
CustomLogic_CustomLogicScaleModeEnum__get_IsStatic
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicScaleModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4195d50

bool_conflict
CustomLogic_CustomLogicScaleModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


