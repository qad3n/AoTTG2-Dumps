// Type: CustomLogic.CustomLogicPlayerStatusEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPlayerStatusEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPlayerStatusEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPlayerStatusEnum_o* CustomLogic_CustomLogicPlayerStatusEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41874b0

CustomLogic_CustomLogicPlayerStatusEnum_o *
CustomLogic_CustomLogicPlayerStatusEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicPlayerStatusEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad1b1 == '\0') {
    pSStack_20 = (System_String_o *)0x41874cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerStatusEnum);
    g_data_057ad1b1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4187547;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41874f6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerStatusEnum);
    if (g_data_057ad1ac == '\0') {
      pSStack_20 = (System_String_o *)0x418750e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad1ac = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x418752d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4187537;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicPlayerStatusEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x418754f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4187562;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4187571;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicPlayerStatusEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4187580;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4187590;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x418759f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41875a7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x41875b7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41875c3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPlayerStatusEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41875ce;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad1b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Dead");
    il2cpp_runtime_helper_023445d0(&"Alive");
    il2cpp_runtime_helper_023445d0(&"Spectating");
    g_data_057ad1b2 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Alive",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Dead",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad1b4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dead_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
        g_data_057ad1b4 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicPlayerStatusEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Spectating",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad1b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spectating_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
        g_data_057ad1b5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicPlayerStatusEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPlayerStatusEnum not found");
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
  if (g_data_057ad1b3 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4187779;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Alive_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4187785;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4187791;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x418779d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
    g_data_057ad1b3 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41877b3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41877cc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41877db;
  pCVar8 = (CustomLogic_CustomLogicPlayerStatusEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41877f5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41875d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad1b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Dead");
    il2cpp_runtime_helper_023445d0(&"Alive");
    il2cpp_runtime_helper_023445d0(&"Spectating");
    g_data_057ad1b2 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Alive",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Dead",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad1b4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dead_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
        g_data_057ad1b4 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Spectating",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad1b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spectating_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
        g_data_057ad1b5 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPlayerStatusEnum not found");
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
  if (g_data_057ad1b3 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4187779;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Alive_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4187785;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4187791;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x418779d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
    g_data_057ad1b3 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41877b3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41877cc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41877db;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41877f5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Alive
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive (const MethodInfo* method);
// 0x4187760

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this;
  
  if (g_data_057ad1b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Alive_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
    g_data_057ad1b3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return __this;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Dead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead (const MethodInfo* method);
// 0x4187800

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this;
  
  if (g_data_057ad1b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Dead_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
    g_data_057ad1b4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return __this;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Spectating
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating (const MethodInfo* method);
// 0x41878a0

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this;
  
  if (g_data_057ad1b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Spectating_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
    g_data_057ad1b5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return __this;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerStatusEnum_Bindings___cctor (const MethodInfo* method);
// 0x4187940

void CustomLogic_CustomLogicPlayerStatusEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad1b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Dead");
    il2cpp_runtime_helper_023445d0(&"Alive");
    il2cpp_runtime_helper_023445d0(&"Spectating");
    g_data_057ad1b6 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Alive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Spectating",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad441 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    g_data_057ad441 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Alive>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Alive_g____getter_2_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x4187a50

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Alive_g____getter_2_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad441 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    g_data_057ad441 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Dead>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Dead_g____getter_3_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x4187ac0

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Dead_g____getter_3_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad442 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    g_data_057ad442 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Spectating>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Spectating_g____getter_4_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x4187b30

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Spectating_g____getter_4_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad443 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    g_data_057ad443 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerStatusEnum___ctor (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x4187290

void CustomLogic_CustomLogicPlayerStatusEnum___ctor
               (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad1ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad1ac = '\x01';
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


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Alive
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Alive (const MethodInfo* method);
// 0x4187300

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Alive(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad1ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    g_data_057ad1ad = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Dead
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Dead (const MethodInfo* method);
// 0x4187370

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Dead(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad1ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    g_data_057ad1ae = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Spectating
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Spectating (const MethodInfo* method);
// 0x41873e0

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Spectating(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad1af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    g_data_057ad1af = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_ClassName (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x4187450

System_String_o *
CustomLogic_CustomLogicPlayerStatusEnum__get_ClassName
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad1b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PlayerStatusEnum");
    g_data_057ad1b0 = '\x01';
  }
  return "PlayerStatusEnum";
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsAbstract (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x4187480

bool_conflict
CustomLogic_CustomLogicPlayerStatusEnum__get_IsAbstract
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsStatic (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x4187490

bool_conflict
CustomLogic_CustomLogicPlayerStatusEnum__get_IsStatic
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_InheritBaseMembers (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x41874a0

bool_conflict
CustomLogic_CustomLogicPlayerStatusEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


