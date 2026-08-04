// Type: CustomLogic.CustomLogicCollisionDetectionModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionDetectionModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollisionDetectionModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollisionDetectionModeEnum_o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x414d800

CustomLogic_CustomLogicCollisionDetectionModeEnum_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory__CreateInstance
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
  CustomLogic_CustomLogicCollisionDetectionModeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acc32 == '\0') {
    pSStack_20 = (System_String_o *)0x414d81c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCollisionDetectionModeEnum);
    g_data_057acc32 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x414d897;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x414d846;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCollisionDetectionModeEnum);
    if (g_data_057acc30 == '\0') {
      pSStack_20 = (System_String_o *)0x414d85e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acc30 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414d87d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x414d887;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414d89f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x414d8b2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414d8c1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCollisionDetectionModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x414d8d0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x414d8e0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414d8ef;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x414d8f7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x414d907;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414d913;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionDetectionModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414d91e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057acc33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Discrete");
    il2cpp_runtime_helper_023445d0(&"ContinuousSpeculative");
    il2cpp_runtime_helper_023445d0(&"Continuous");
    il2cpp_runtime_helper_023445d0(&"ContinuousDynamic");
    g_data_057acc33 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Discrete",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Continuous",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc35 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Continuous_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
        g_data_057acc35 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ContinuousDynamic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc36 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContinuousDynamic_g____g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
        g_data_057acc36 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ContinuousSpeculative",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc37 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContinuousSpeculative_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
        g_data_057acc37 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCollisionDetectionModeEnum not found");
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
  if (g_data_057acc34 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414db19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Discrete_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414db25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414db31;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414db3d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
    g_data_057acc34 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414db53;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414db6c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414db7b;
  pCVar8 = (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414db95;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
  return pCVar8;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x414d920

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057acc33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Discrete");
    il2cpp_runtime_helper_023445d0(&"ContinuousSpeculative");
    il2cpp_runtime_helper_023445d0(&"Continuous");
    il2cpp_runtime_helper_023445d0(&"ContinuousDynamic");
    g_data_057acc33 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Discrete",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Continuous",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc35 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Continuous_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
        g_data_057acc35 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ContinuousDynamic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc36 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContinuousDynamic_g____g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
        g_data_057acc36 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ContinuousSpeculative",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc37 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContinuousSpeculative_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
        g_data_057acc37 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCollisionDetectionModeEnum not found");
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
  if (g_data_057acc34 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414db19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Discrete_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414db25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414db31;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414db3d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
    g_data_057acc34 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414db53;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414db6c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414db7b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414db95;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Discrete
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete (const MethodInfo* method);
// 0x414db00

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this;
  
  if (g_data_057acc34 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Discrete_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
    g_data_057acc34 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
  return __this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Continuous
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous (const MethodInfo* method);
// 0x414dba0

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this;
  
  if (g_data_057acc35 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Continuous_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
    g_data_057acc35 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
  return __this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousDynamic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic (const MethodInfo* method);
// 0x414dc40

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this;
  
  if (g_data_057acc36 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContinuousDynamic_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
    g_data_057acc36 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
  return __this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousSpeculative
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative (const MethodInfo* method);
// 0x414dce0

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this;
  
  if (g_data_057acc37 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ContinuousSpeculative_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
    g_data_057acc37 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectionModeEnu);
  return __this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x414dd80

void CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057acc38 == '\0') {
    uStack_20 = 0x414dd99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x414dda5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x414ddb1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x414ddbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x414ddc9;
    il2cpp_runtime_helper_023445d0(&"Discrete");
    uStack_20 = 0x414ddd5;
    il2cpp_runtime_helper_023445d0(&"ContinuousSpeculative");
    uStack_20 = 0x414dde1;
    il2cpp_runtime_helper_023445d0(&"Continuous");
    uStack_20 = 0x414dded;
    il2cpp_runtime_helper_023445d0(&"ContinuousDynamic");
    g_data_057acc38 = '\x01';
  }
  uStack_20 = 0x414de03;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x414de18;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x414de3d;
    System_Collections_Generic_HashSet_object___Add(__this,"Discrete",MethodInfo_Boolean_Add);
    uStack_20 = 0x414de52;
    System_Collections_Generic_HashSet_object___Add(__this,"Continuous",MethodInfo_Boolean_Add);
    uStack_20 = 0x414de67;
    System_Collections_Generic_HashSet_object___Add(__this,"ContinuousDynamic",MethodInfo_Boolean_Add);
    uStack_20 = 0x414de7c;
    System_Collections_Generic_HashSet_object___Add(__this,"ContinuousSpeculative",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x414deae;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Discrete>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Discrete_g____getter_2_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x414deb0

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Discrete_g____getter_2_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Continuous>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Continuous_g____getter_3_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x414ded0

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Continuous_g____getter_3_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousDynamic>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousDynamic_g____getter_4_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x414def0

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousDynamic_g____getter_4_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousSpeculative>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousSpeculative_g____getter_5_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x414df10

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousSpeculative_g____getter_5_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionDetectionModeEnum___ctor (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x414d6f0

void CustomLogic_CustomLogicCollisionDetectionModeEnum___ctor
               (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acc30 = '\x01';
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


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Discrete
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Discrete (const MethodInfo* method);
// 0x414d760

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Discrete(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Continuous
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Continuous (const MethodInfo* method);
// 0x414d770

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Continuous(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousDynamic
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousDynamic (const MethodInfo* method);
// 0x414d780

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousDynamic(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousSpeculative
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousSpeculative (const MethodInfo* method);
// 0x414d790

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousSpeculative(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ClassName (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x414d7a0

System_String_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ClassName
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acc31 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CollisionDetectionModeEnum");
    g_data_057acc31 = '\x01';
  }
  return "CollisionDetectionModeEnum";
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsAbstract (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x414d7d0

bool_conflict
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsStatic (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x414d7e0

bool_conflict
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsStatic
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x414d7f0

bool_conflict
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


