// Type: CustomLogic.CustomLogicGradientModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicGradientModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicGradientModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicGradientModeEnum_o* CustomLogic_CustomLogicGradientModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4156410

CustomLogic_CustomLogicGradientModeEnum_o *
CustomLogic_CustomLogicGradientModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicGradientModeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057accd2 == '\0') {
    pSStack_20 = (System_String_o *)0x415642c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicGradientModeEnum);
    g_data_057accd2 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41564a7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4156456;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicGradientModeEnum);
    if (g_data_057accd0 == '\0') {
      pSStack_20 = (System_String_o *)0x415646e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057accd0 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x415648d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4156497;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicGradientModeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41564af;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41564c2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41564d1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicGradientModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41564e0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41564f0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41564ff;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4156507;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4156517;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4156523;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicGradientModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x415652e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057accd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Blend");
    il2cpp_runtime_helper_023445d0(&"Fixed");
    g_data_057accd3 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Blend",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Fixed",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accd5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fixed_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicGradientModeEnum_object);
        g_data_057accd5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicGradientModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicGradientModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicGradientModeEnum not found");
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
  if (g_data_057accd4 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156689;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blend_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156695;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41566a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41566ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicGradientModeEnum_object);
    g_data_057accd4 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41566c3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicGradientModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41566dc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41566eb;
  pCVar8 = (CustomLogic_CustomLogicGradientModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4156705;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicGradientModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4156530

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicGradientModeEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057accd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Blend");
    il2cpp_runtime_helper_023445d0(&"Fixed");
    g_data_057accd3 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Blend",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Fixed",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accd5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fixed_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicGradientModeEnum_object);
        g_data_057accd5 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicGradientModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicGradientModeEnum not found");
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
  if (g_data_057accd4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156689;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blend_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156695;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41566a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41566ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicGradientModeEnum_object);
    g_data_057accd4 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41566c3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicGradientModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41566dc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41566eb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4156705;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Blend
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o* CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend (const MethodInfo* method);
// 0x4156670

CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *
CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this;
  
  if (g_data_057accd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Blend_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicGradientModeEnum_object);
    g_data_057accd4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicGradientModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
  return __this;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Fixed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o* CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed (const MethodInfo* method);
// 0x4156710

CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *
CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this;
  
  if (g_data_057accd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fixed_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicGradientModeEnum_object);
    g_data_057accd5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicGradientModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
  return __this;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicGradientModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x41567b0

void CustomLogic_CustomLogicGradientModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057accd6 == '\0') {
    uStack_20 = 0x41567c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x41567d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x41567e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x41567ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x41567f9;
    il2cpp_runtime_helper_023445d0(&"Blend");
    uStack_20 = 0x4156805;
    il2cpp_runtime_helper_023445d0(&"Fixed");
    g_data_057accd6 = '\x01';
  }
  uStack_20 = 0x415681b;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4156830;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x4156851;
    System_Collections_Generic_HashSet_object___Add(__this,"Blend",MethodInfo_Boolean_Add);
    uStack_20 = 0x4156866;
    System_Collections_Generic_HashSet_object___Add(__this,"Fixed",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x4156898;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Blend>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Blend_g____getter_2_0 (CustomLogic_CustomLogicGradientModeEnum_o* __i, const MethodInfo* method);
// 0x41568a0

Il2CppObject *
CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Blend_g____getter_2_0
          (CustomLogic_CustomLogicGradientModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Fixed>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Fixed_g____getter_3_0 (CustomLogic_CustomLogicGradientModeEnum_o* __i, const MethodInfo* method);
// 0x41568c0

Il2CppObject *
CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Fixed_g____getter_3_0
          (CustomLogic_CustomLogicGradientModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicGradientModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicGradientModeEnum___ctor (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x4156320

void CustomLogic_CustomLogicGradientModeEnum___ctor
               (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057accd0 = '\x01';
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


// CustomLogic.CustomLogicGradientModeEnum$$get_Blend
// il2cpp: int32_t CustomLogic_CustomLogicGradientModeEnum__get_Blend (const MethodInfo* method);
// 0x4156390

int32_t CustomLogic_CustomLogicGradientModeEnum__get_Blend(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_Fixed
// il2cpp: int32_t CustomLogic_CustomLogicGradientModeEnum__get_Fixed (const MethodInfo* method);
// 0x41563a0

int32_t CustomLogic_CustomLogicGradientModeEnum__get_Fixed(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicGradientModeEnum__get_ClassName (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x41563b0

System_String_o *
CustomLogic_CustomLogicGradientModeEnum__get_ClassName
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057accd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"GradientModeEnum");
    g_data_057accd1 = '\x01';
  }
  return "GradientModeEnum";
}


// CustomLogic.CustomLogicGradientModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_IsAbstract (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x41563e0

bool_conflict
CustomLogic_CustomLogicGradientModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicGradientModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_IsStatic (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x41563f0

bool_conflict
CustomLogic_CustomLogicGradientModeEnum__get_IsStatic
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicGradientModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x4156400

bool_conflict
CustomLogic_CustomLogicGradientModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


