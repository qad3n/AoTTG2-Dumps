// Type: CustomLogic.CustomLogicDummyAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDummyAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicDummyAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDummyAnimationEnum_o* CustomLogic_CustomLogicDummyAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x414e090

CustomLogic_CustomLogicDummyAnimationEnum_o *
CustomLogic_CustomLogicDummyAnimationEnum_Factory__CreateInstance
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
  CustomLogic_CustomLogicDummyAnimationEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acc3e == '\0') {
    pSStack_20 = (System_String_o *)0x414e0ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDummyAnimationEnum);
    g_data_057acc3e = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x414e127;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x414e0d6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicDummyAnimationEnum);
    if (g_data_057acc39 == '\0') {
      pSStack_20 = (System_String_o *)0x414e0ee;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acc39 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414e10d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x414e117;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicDummyAnimationEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414e12f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x414e142;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414e151;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicDummyAnimationEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x414e160;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x414e170;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414e17f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x414e187;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x414e197;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414e1a3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicDummyAnimationEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414e1ae;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057acc3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"Rise");
    g_data_057acc3f = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Idle",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Fall",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc41 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
        g_data_057acc41 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicDummyAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Rise",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc42 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rise_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
        g_data_057acc42 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicDummyAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicDummyAnimationEnum not found");
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
  if (g_data_057acc40 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414e359;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414e365;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414e371;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414e37d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
    g_data_057acc40 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414e393;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414e3ac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414e3bb;
  pCVar8 = (CustomLogic_CustomLogicDummyAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414e3d5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x414e1b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057acc3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"Rise");
    g_data_057acc3f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc41 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
        g_data_057acc41 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Rise",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc42 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rise_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
        g_data_057acc42 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicDummyAnimationEnum not found");
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
  if (g_data_057acc40 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414e359;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414e365;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414e371;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414e37d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
    g_data_057acc40 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414e393;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414e3ac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414e3bb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414e3d5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x414e340

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this;
  
  if (g_data_057acc40 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
    g_data_057acc40 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x414e3e0

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this;
  
  if (g_data_057acc41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fall_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
    g_data_057acc41 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Rise
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Rise (const MethodInfo* method);
// 0x414e480

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Rise(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this;
  
  if (g_data_057acc42 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rise_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
    g_data_057acc42 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDummyAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDummyAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x414e520

void CustomLogic_CustomLogicDummyAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acc43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Idle");
    il2cpp_runtime_helper_023445d0(&"Fall");
    il2cpp_runtime_helper_023445d0(&"Rise");
    g_data_057acc43 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Fall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Rise",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acc3a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature|dummy_idle");
    g_data_057acc3a = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x414e630

Il2CppObject *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc3a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature|dummy_idle");
    g_data_057acc3a = '\x01';
  }
  return "Armature|dummy_idle";
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_3_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x414e660

Il2CppObject *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_3_0
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc3b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature|dummy_fall");
    g_data_057acc3b = '\x01';
  }
  return "Armature|dummy_fall";
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Rise>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Rise_g____getter_4_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x414e690

Il2CppObject *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Rise_g____getter_4_0
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acc3c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature|dummy_rise");
    g_data_057acc3c = '\x01';
  }
  return "Armature|dummy_rise";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicDummyAnimationEnum___ctor (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x414df30

void CustomLogic_CustomLogicDummyAnimationEnum___ctor
               (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acc39 = '\x01';
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


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Idle (const MethodInfo* method);
// 0x414dfa0

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Idle(MethodInfo *method)

{
  if (g_data_057acc3a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature|dummy_idle");
    g_data_057acc3a = '\x01';
  }
  return "Armature|dummy_idle";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Fall (const MethodInfo* method);
// 0x414dfd0

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Fall(MethodInfo *method)

{
  if (g_data_057acc3b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature|dummy_fall");
    g_data_057acc3b = '\x01';
  }
  return "Armature|dummy_fall";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Rise
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Rise (const MethodInfo* method);
// 0x414e000

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Rise(MethodInfo *method)

{
  if (g_data_057acc3c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature|dummy_rise");
    g_data_057acc3c = '\x01';
  }
  return "Armature|dummy_rise";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_ClassName (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x414e030

System_String_o *
CustomLogic_CustomLogicDummyAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acc3d == '\0') {
    il2cpp_runtime_helper_023445d0(&"DummyAnimationEnum");
    g_data_057acc3d = '\x01';
  }
  return "DummyAnimationEnum";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x414e060

bool_conflict
CustomLogic_CustomLogicDummyAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_IsStatic (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x414e070

bool_conflict
CustomLogic_CustomLogicDummyAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x414e080

bool_conflict
CustomLogic_CustomLogicDummyAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


