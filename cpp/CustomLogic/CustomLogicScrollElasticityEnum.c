// Type: CustomLogic.CustomLogicScrollElasticityEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScrollElasticityEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScrollElasticityEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScrollElasticityEnum_o* CustomLogic_CustomLogicScrollElasticityEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4196460

CustomLogic_CustomLogicScrollElasticityEnum_o *
CustomLogic_CustomLogicScrollElasticityEnum_Factory__CreateInstance
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
  CustomLogic_CustomLogicScrollElasticityEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad2eb == '\0') {
    pSStack_20 = (System_String_o *)0x419647c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicScrollElasticityEnum);
    g_data_057ad2eb = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41964f7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41964a6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicScrollElasticityEnum);
    if (g_data_057ad2e9 == '\0') {
      pSStack_20 = (System_String_o *)0x41964be;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad2e9 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41964dd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41964e7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicScrollElasticityEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41964ff;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4196512;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4196521;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicScrollElasticityEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4196530;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4196540;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419654f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4196557;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4196567;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4196573;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollElasticityEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419657e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad2ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Clamped");
    il2cpp_runtime_helper_023445d0(&"Unrestricted");
    il2cpp_runtime_helper_023445d0(&"Elastic");
    g_data_057ad2ec = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Clamped",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Elastic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad2ee == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Elastic_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
        g_data_057ad2ee = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicScrollElasticityEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Unrestricted",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad2ef == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Unrestricted_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
        g_data_057ad2ef = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicScrollElasticityEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicScrollElasticityEnum not found");
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
  if (g_data_057ad2ed == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Clamped_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196735;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196741;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419674d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
    g_data_057ad2ed = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4196763;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419677c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419678b;
  pCVar8 = (CustomLogic_CustomLogicScrollElasticityEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41967a5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4196580

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad2ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Clamped");
    il2cpp_runtime_helper_023445d0(&"Unrestricted");
    il2cpp_runtime_helper_023445d0(&"Elastic");
    g_data_057ad2ec = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Clamped",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Elastic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2ee == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Elastic_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
        g_data_057ad2ee = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Unrestricted",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2ef == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Unrestricted_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
        g_data_057ad2ef = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicScrollElasticityEnum not found");
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
  if (g_data_057ad2ed == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Clamped_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196735;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196741;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419674d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
    g_data_057ad2ed = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4196763;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419677c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419678b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41967a5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Clamped
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped (const MethodInfo* method);
// 0x4196710

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this;
  
  if (g_data_057ad2ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Clamped_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
    g_data_057ad2ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
  return __this;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Elastic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic (const MethodInfo* method);
// 0x41967b0

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this;
  
  if (g_data_057ad2ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Elastic_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
    g_data_057ad2ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
  return __this;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Unrestricted
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted (const MethodInfo* method);
// 0x4196850

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this;
  
  if (g_data_057ad2ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Unrestricted_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
    g_data_057ad2ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityEnum);
  return __this;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollElasticityEnum_Bindings___cctor (const MethodInfo* method);
// 0x41968f0

void CustomLogic_CustomLogicScrollElasticityEnum_Bindings___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad2f0 == '\0') {
    uStack_20 = 0x4196909;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4196915;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4196921;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x419692d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4196939;
    il2cpp_runtime_helper_023445d0(&"Clamped");
    uStack_20 = 0x4196945;
    il2cpp_runtime_helper_023445d0(&"Unrestricted");
    uStack_20 = 0x4196951;
    il2cpp_runtime_helper_023445d0(&"Elastic");
    g_data_057ad2f0 = '\x01';
  }
  uStack_20 = 0x4196967;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x419697c;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x419699d;
    System_Collections_Generic_HashSet_object___Add(__this,"Clamped",MethodInfo_Boolean_Add);
    uStack_20 = 0x41969b2;
    System_Collections_Generic_HashSet_object___Add(__this,"Elastic",MethodInfo_Boolean_Add);
    uStack_20 = 0x41969c7;
    System_Collections_Generic_HashSet_object___Add(__this,"Unrestricted",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x41969f9;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = CONCAT44(2,uVar1);
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Clamped>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Clamped_g____getter_2_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x4196a00

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Clamped_g____getter_2_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Elastic>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Elastic_g____getter_3_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x4196a20

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Elastic_g____getter_3_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Unrestricted>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Unrestricted_g____getter_4_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x4196a40

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Unrestricted_g____getter_4_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollElasticityEnum___ctor (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x4196360

void CustomLogic_CustomLogicScrollElasticityEnum___ctor
               (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad2e9 = '\x01';
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


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Clamped
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Clamped (const MethodInfo* method);
// 0x41963d0

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Clamped(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Elastic
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Elastic (const MethodInfo* method);
// 0x41963e0

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Elastic(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Unrestricted
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Unrestricted (const MethodInfo* method);
// 0x41963f0

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Unrestricted(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScrollElasticityEnum__get_ClassName (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x4196400

System_String_o *
CustomLogic_CustomLogicScrollElasticityEnum__get_ClassName
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad2ea == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollElasticityEnum");
    g_data_057ad2ea = '\x01';
  }
  return "ScrollElasticityEnum";
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsAbstract (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x4196430

bool_conflict
CustomLogic_CustomLogicScrollElasticityEnum__get_IsAbstract
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsStatic (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x4196440

bool_conflict
CustomLogic_CustomLogicScrollElasticityEnum__get_IsStatic
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_InheritBaseMembers (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x4196450

bool_conflict
CustomLogic_CustomLogicScrollElasticityEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


