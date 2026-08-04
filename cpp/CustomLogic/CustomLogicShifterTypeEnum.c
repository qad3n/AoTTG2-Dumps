// Type: CustomLogic.CustomLogicShifterTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShifterTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterTypeEnum_o* CustomLogic_CustomLogicShifterTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4198300

CustomLogic_CustomLogicShifterTypeEnum_o *
CustomLogic_CustomLogicShifterTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicShifterTypeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad311 == '\0') {
    pSStack_20 = (System_String_o *)0x419831c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicShifterTypeEnum);
    g_data_057ad311 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4198397;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4198346;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicShifterTypeEnum);
    if (g_data_057ad30b == '\0') {
      pSStack_20 = (System_String_o *)0x419835e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad30b = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419837d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4198387;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicShifterTypeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x419839f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41983b2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41983c1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicShifterTypeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41983d0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41983e0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41983ef;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41983f7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4198407;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4198413;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicShifterTypeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419841e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad312 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"WallColossal");
    il2cpp_runtime_helper_023445d0(&"Armored");
    g_data_057ad312 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Annie",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Armored",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad314 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Armored_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
        g_data_057ad314 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShifterTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Eren",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad315 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Eren_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
        g_data_057ad315 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShifterTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"WallColossal",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad316 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallColossal_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
        g_data_057ad316 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShifterTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicShifterTypeEnum not found");
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
  if (g_data_057ad313 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4198619;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Annie_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4198625;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4198631;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419863d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
    g_data_057ad313 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4198653;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419866c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419867b;
  pCVar8 = (CustomLogic_CustomLogicShifterTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4198695;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4198420

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad312 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"WallColossal");
    il2cpp_runtime_helper_023445d0(&"Armored");
    g_data_057ad312 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Annie",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Armored",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad314 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Armored_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
        g_data_057ad314 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Eren",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad315 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Eren_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
        g_data_057ad315 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"WallColossal",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad316 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallColossal_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
        g_data_057ad316 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicShifterTypeEnum not found");
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
  if (g_data_057ad313 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4198619;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Annie_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4198625;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4198631;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419863d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
    g_data_057ad313 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4198653;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419866c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419867b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4198695;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Annie
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie (const MethodInfo* method);
// 0x4198600

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this;
  
  if (g_data_057ad313 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Annie_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
    g_data_057ad313 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Armored
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored (const MethodInfo* method);
// 0x41986a0

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this;
  
  if (g_data_057ad314 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Armored_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
    g_data_057ad314 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Eren
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren (const MethodInfo* method);
// 0x4198740

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this;
  
  if (g_data_057ad315 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Eren_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
    g_data_057ad315 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__WallColossal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal (const MethodInfo* method);
// 0x41987e0

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this;
  
  if (g_data_057ad316 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WallColossal_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterTypeEnum_object);
    g_data_057ad316 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x4198880

void CustomLogic_CustomLogicShifterTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad317 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"WallColossal");
    il2cpp_runtime_helper_023445d0(&"Armored");
    g_data_057ad317 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Annie",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Armored",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Eren",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"WallColossal",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad30c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Annie");
    g_data_057ad30c = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_2_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x41989b0

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_2_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad30c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Annie");
    g_data_057ad30c = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_3_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x41989e0

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_3_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad30d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armored");
    g_data_057ad30d = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_4_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x4198a10

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_4_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad30e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Eren");
    g_data_057ad30e = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__WallColossal>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__WallColossal_g____getter_5_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x4198a40

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__WallColossal_g____getter_5_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad30f == '\0') {
    il2cpp_runtime_helper_023445d0(&"WallColossal");
    g_data_057ad30f = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicShifterTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterTypeEnum___ctor (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x4198170

void CustomLogic_CustomLogicShifterTypeEnum___ctor
               (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad30b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad30b = '\x01';
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


// CustomLogic.CustomLogicShifterTypeEnum$$get_Annie
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Annie (const MethodInfo* method);
// 0x41981e0

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Annie(MethodInfo *method)

{
  if (g_data_057ad30c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Annie");
    g_data_057ad30c = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Armored
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Armored (const MethodInfo* method);
// 0x4198210

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Armored(MethodInfo *method)

{
  if (g_data_057ad30d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armored");
    g_data_057ad30d = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Eren
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Eren (const MethodInfo* method);
// 0x4198240

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Eren(MethodInfo *method)

{
  if (g_data_057ad30e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Eren");
    g_data_057ad30e = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_WallColossal
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal (const MethodInfo* method);
// 0x4198270

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal(MethodInfo *method)

{
  if (g_data_057ad30f == '\0') {
    il2cpp_runtime_helper_023445d0(&"WallColossal");
    g_data_057ad30f = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_ClassName (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x41982a0

System_String_o *
CustomLogic_CustomLogicShifterTypeEnum__get_ClassName
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad310 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ShifterTypeEnum");
    g_data_057ad310 = '\x01';
  }
  return "ShifterTypeEnum";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_IsAbstract (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x41982d0

bool_conflict
CustomLogic_CustomLogicShifterTypeEnum__get_IsAbstract
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_IsStatic (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x41982e0

bool_conflict
CustomLogic_CustomLogicShifterTypeEnum__get_IsStatic
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x41982f0

bool_conflict
CustomLogic_CustomLogicShifterTypeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


