// Type: CustomLogic.CustomLogicCameraModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCameraModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCameraModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCameraModeEnum_o* CustomLogic_CustomLogicCameraModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x414a770

CustomLogic_CustomLogicCameraModeEnum_o *
CustomLogic_CustomLogicCameraModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  CustomLogic_CustomLogicCameraModeEnum_o *pCVar2;
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
  if (g_data_057acbfa == '\0') {
    pSStack_20 = (System_String_o *)0x414a78c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acbfa = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x414a807;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x414a7b6;
    pCVar2 = (CustomLogic_CustomLogicCameraModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCameraModeEnum);
    if (g_data_057acbf4 == '\0') {
      pSStack_20 = (System_String_o *)0x414a7ce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acbf4 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414a7ed;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x414a7f7;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  pSStack_20 = (System_String_o *)0x414a80f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x414a822;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414a831;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCameraModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x414a840;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x414a850;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414a85f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x414a867;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x414a877;
  System_ArgumentException___ctor_3c12490(__this,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414a883;
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCameraModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414a88e;
  pSVar7 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this,uVar5);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar3;
  if (g_data_057acbfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"TPS");
    il2cpp_runtime_helper_023445d0(&"FPS");
    il2cpp_runtime_helper_023445d0(&"Original");
    g_data_057acbfb = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"TPS",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"Original",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acbfd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Original_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
        g_data_057acbfd = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicCameraModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"FPS",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acbfe == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FPS_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
        g_data_057acbfe = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicCameraModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
      return pCVar2;
    }
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCameraModeEnum not found");
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
  if (g_data_057acbfc == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414aa39;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TPS_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414aa45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414aa51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414aa5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
    g_data_057acbfc = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414aa73;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414aa8c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414aa9b;
  pCVar2 = (CustomLogic_CustomLogicCameraModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414aab5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return pCVar2;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCameraModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x414a890

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCameraModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acbfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"TPS");
    il2cpp_runtime_helper_023445d0(&"FPS");
    il2cpp_runtime_helper_023445d0(&"Original");
    g_data_057acbfb = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"TPS",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Original",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbfd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Original_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
        g_data_057acbfd = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"FPS",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbfe == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FPS_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
        g_data_057acbfe = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCameraModeEnum not found");
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
  if (g_data_057acbfc == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414aa39;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TPS_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414aa45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414aa51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414aa5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
    g_data_057acbfc = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414aa73;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414aa8c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414aa9b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414aab5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__TPS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS (const MethodInfo* method);
// 0x414aa20

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this;
  
  if (g_data_057acbfc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TPS_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
    g_data_057acbfc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__Original
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original (const MethodInfo* method);
// 0x414aac0

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this;
  
  if (g_data_057acbfd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Original_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
    g_data_057acbfd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__FPS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS (const MethodInfo* method);
// 0x414ab60

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this;
  
  if (g_data_057acbfe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FPS_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCameraModeEnum_object);
    g_data_057acbfe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x414ac00

void CustomLogic_CustomLogicCameraModeEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acbff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"TPS");
    il2cpp_runtime_helper_023445d0(&"FPS");
    il2cpp_runtime_helper_023445d0(&"Original");
    g_data_057acbff = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"TPS",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Original",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"FPS",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acc00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acc00 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057acce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acce0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__TPS>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__TPS_g____getter_2_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x414ad10

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__TPS_g____getter_2_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acc00 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057acce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acce0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__Original>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__Original_g____getter_3_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x414adc0

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__Original_g____getter_3_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acc01 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057acce1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acce1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__FPS>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__FPS_g____getter_4_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x414ae70

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__FPS_g____getter_4_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acc02 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057acce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acce2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCameraModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum___ctor (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x414a440

void CustomLogic_CustomLogicCameraModeEnum___ctor
               (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acbf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acbf4 = '\x01';
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


// CustomLogic.CustomLogicCameraModeEnum$$get_TPS
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_TPS (const MethodInfo* method);
// 0x414a4b0

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_TPS(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acbf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acbf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_Original
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_Original (const MethodInfo* method);
// 0x414a520

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_Original(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acbf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acbf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_FPS
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_FPS (const MethodInfo* method);
// 0x414a590

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_FPS(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acbf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acbf7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_ClassName (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x414a600

System_String_o *
CustomLogic_CustomLogicCameraModeEnum__get_ClassName
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acbf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CameraModeEnum");
    g_data_057acbf8 = '\x01';
  }
  return "CameraModeEnum";
}


// CustomLogic.CustomLogicCameraModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_IsAbstract (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x414a630

bool_conflict
CustomLogic_CustomLogicCameraModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_IsStatic (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x414a640

bool_conflict
CustomLogic_CustomLogicCameraModeEnum__get_IsStatic
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x414a650

bool_conflict
CustomLogic_CustomLogicCameraModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraModeEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum___cctor (const MethodInfo* method);
// 0x414a660

void CustomLogic_CustomLogicCameraModeEnum___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (g_data_057acbf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CameraInputMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCameraModeEnum);
    g_data_057acbf9 = '\x01';
  }
  SStack_28.klass = TypeInfo_CameraInputMode;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8));
  SStack_40.klass = TypeInfo_CameraInputMode;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  SStack_58.klass = TypeInfo_CameraInputMode;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
  return;
}


