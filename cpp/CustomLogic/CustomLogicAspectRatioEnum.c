// Type: CustomLogic.CustomLogicAspectRatioEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAspectRatioEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAspectRatioEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAspectRatioEnum_o* CustomLogic_CustomLogicAspectRatioEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4149f70

CustomLogic_CustomLogicAspectRatioEnum_o *
CustomLogic_CustomLogicAspectRatioEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicAspectRatioEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acbef == '\0') {
    pSStack_20 = (System_String_o *)0x4149f8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAspectRatioEnum);
    g_data_057acbef = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x414a007;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4149fb6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAspectRatioEnum);
    if (g_data_057acbed == '\0') {
      pSStack_20 = (System_String_o *)0x4149fce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acbed = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4149fed;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4149ff7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicAspectRatioEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414a00f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x414a022;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414a031;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicAspectRatioEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x414a040;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x414a050;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414a05f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x414a067;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x414a077;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414a083;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicAspectRatioEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414a08e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057acbf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Width");
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057acbf0 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Height",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Width",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acbf2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Width_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAspectRatioEnum_object);
        g_data_057acbf2 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAspectRatioEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicAspectRatioEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAspectRatioEnum not found");
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
  if (g_data_057acbf1 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414a1e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414a1f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414a201;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414a20d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAspectRatioEnum_object);
    g_data_057acbf1 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414a223;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAspectRatioEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414a23c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414a24b;
  pCVar8 = (CustomLogic_CustomLogicAspectRatioEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414a265;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAspectRatioEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x414a090

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acbf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Width");
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057acbf0 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Width",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acbf2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Width_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAspectRatioEnum_object);
        g_data_057acbf2 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAspectRatioEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicAspectRatioEnum not found");
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
  if (g_data_057acbf1 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414a1e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414a1f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414a201;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414a20d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAspectRatioEnum_object);
    g_data_057acbf1 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414a223;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAspectRatioEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414a23c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414a24b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414a265;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o* CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x414a1d0

CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this;
  
  if (g_data_057acbf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAspectRatioEnum_object);
    g_data_057acbf1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAspectRatioEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
  return __this;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Width
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o* CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width (const MethodInfo* method);
// 0x414a270

CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this;
  
  if (g_data_057acbf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Width_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicAspectRatioEnum_object);
    g_data_057acbf2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicAspectRatioEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
  return __this;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAspectRatioEnum_Bindings___cctor (const MethodInfo* method);
// 0x414a310

void CustomLogic_CustomLogicAspectRatioEnum_Bindings___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057acbf3 == '\0') {
    uStack_20 = 0x414a329;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x414a335;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x414a341;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x414a34d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x414a359;
    il2cpp_runtime_helper_023445d0(&"Width");
    uStack_20 = 0x414a365;
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057acbf3 = '\x01';
  }
  uStack_20 = 0x414a37b;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x414a390;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x414a3b1;
    System_Collections_Generic_HashSet_object___Add(__this,"Height",MethodInfo_Boolean_Add);
    uStack_20 = 0x414a3c6;
    System_Collections_Generic_HashSet_object___Add(__this,"Width",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x414a3f8;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = CONCAT44(1,uVar1);
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Height>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0 (CustomLogic_CustomLogicAspectRatioEnum_o* __i, const MethodInfo* method);
// 0x414a400

Il2CppObject *
CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0
          (CustomLogic_CustomLogicAspectRatioEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Width>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0 (CustomLogic_CustomLogicAspectRatioEnum_o* __i, const MethodInfo* method);
// 0x414a420

Il2CppObject *
CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0
          (CustomLogic_CustomLogicAspectRatioEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicAspectRatioEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAspectRatioEnum___ctor (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x4149e80

void CustomLogic_CustomLogicAspectRatioEnum___ctor
               (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acbed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acbed = '\x01';
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


// CustomLogic.CustomLogicAspectRatioEnum$$get_Height
// il2cpp: int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Height (const MethodInfo* method);
// 0x4149ef0

int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Height(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_Width
// il2cpp: int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Width (const MethodInfo* method);
// 0x4149f00

int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Width(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAspectRatioEnum__get_ClassName (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x4149f10

System_String_o *
CustomLogic_CustomLogicAspectRatioEnum__get_ClassName
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acbee == '\0') {
    il2cpp_runtime_helper_023445d0(&"AspectRatioEnum");
    g_data_057acbee = '\x01';
  }
  return "AspectRatioEnum";
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_IsAbstract (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x4149f40

bool_conflict
CustomLogic_CustomLogicAspectRatioEnum__get_IsAbstract
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_IsStatic (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x4149f50

bool_conflict
CustomLogic_CustomLogicAspectRatioEnum__get_IsStatic
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x4149f60

bool_conflict
CustomLogic_CustomLogicAspectRatioEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


