// Type: CustomLogic.CustomLogicServicesBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicServicesBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicServicesBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicServicesBuiltin_o* CustomLogic_CustomLogicServicesBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41e3a60

CustomLogic_CustomLogicServicesBuiltin_o *
CustomLogic_CustomLogicServicesBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  bool_conflict bVar3;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object____object__o *pSVar8;
  CustomLogic_CustomLogicServicesBuiltin_o *pCVar9;
  System_ArgumentException_o **ppSVar10;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad796 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicServicesBuiltin);
    g_data_057ad796 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicServicesBuiltin);
    if (g_data_057ad785 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad785 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicServicesBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicServicesBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicServicesBuiltin_CreateInstance);
  pSVar7 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this_00,uVar6);
  ppSVar10 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad797 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"CheckPermissions");
    il2cpp_runtime_helper_023445d0(&"Put");
    il2cpp_runtime_helper_023445d0(&"Post");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Get");
    il2cpp_runtime_helper_023445d0(&"GetSecret");
    g_data_057ad797 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"CheckPermissions",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"GetSecret",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad799 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetSecret_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad799 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicServicesBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return pCVar9;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Get",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad79a == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad79a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicServicesBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return pCVar9;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Post",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad79b == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Post_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad79b = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicServicesBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return pCVar9;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Put",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad79c == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Put_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad79c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicServicesBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return pCVar9;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Delete",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad79d == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Delete_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad79d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicServicesBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return pCVar9;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicServicesBuiltin not found");
    pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar7,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar7,uVar6);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar10 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  else {
    ppSVar10 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar10 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar10 + -0x10) = pSVar4;
  *(System_ArgumentException_o **)((long)ppSVar10 + -0x18) = pSVar7;
  if (g_data_057ad798 == '\0') {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3e99;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3ea5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3eb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3ebd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__CheckPermissions_b__2_0);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3ec9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad798 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3eec;
    il2cpp_runtime_helper_02337ed0();
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3e3b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3e57;
    pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3e71;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar8;
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3e8b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
  }
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3f12;
  pCVar9 = (CustomLogic_CustomLogicServicesBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e3f2a;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
  return pCVar9;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41e4740

void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad79f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad79f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41e47b0

void CustomLogic_CustomLogicServicesBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__CheckPermissions>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__CheckPermissions_b__2_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e47c0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__CheckPermissions_b__2_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_MonoBehaviour_o *pUVar2;
  Settings_AdvancedSettings_o *pSVar3;
  long lVar4;
  code *vtableDispatch;
  uint16_t c;
  int32_t iVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  System_Exception_o *__this_00;
  System_Uri_o *__this_01;
  System_Uri_o *__this_02;
  System_ArgumentException_o *pSVar11;
  MethodInfo *pMVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *pIVar14;
  UnityEngine_Coroutine_o *pUVar15;
  System_Collections_IEnumerator_o *pSVar16;
  System_ArgumentException_o *__this_03;
  System_String_Fields SVar17;
  System_String_o *pSVar18;
  Il2CppClass *pIVar19;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar20;
  MethodInfo *pMVar21;
  CustomLogic_UserMethod_o *pCVar22;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_String_Fields extraout_RDX;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX_00;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_01;
  void *extraout_RDX_02;
  MethodInfo *method_03;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long extraout_RDX_07;
  int index;
  undefined4 uVar23;
  System_String_Fields SVar24;
  void *pvVar25;
  long *plVar26;
  System_ArgumentException_o **ppSVar27;
  long lVar28;
  MethodInfo *method_04;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  System_ArgumentException_o *pSVar29;
  MethodInfo *unaff_R14;
  undefined1 auVar30 [16];
  MethodInfo *pMStack_40;
  undefined1 uStack_19;
  System_String_o *pSStack_18;
  
  plVar26 = (long *)__this;
  if (g_data_057ad7a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar26 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a0 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041e48ca:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar20 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar20,MethodInfo_String_ConvertTo_String);
    pSStack_18 = (System_String_o *)0x0;
    if (g_data_057ad787 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      g_data_057ad787 = '\x01';
    }
    pSStack_18 = (System_String_o *)0x0;
    pMVar21 = (MethodInfo *)&stack0xffffffffffffffe8;
    il2cpp_runtime_helper_022b4080(pMVar21,0);
    bVar7 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar21);
    uStack_19 = 0;
    if ((char)bVar7 == '\0') {
label_041e48a9:
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_19);
      return pIVar20;
    }
    pSVar3 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    plVar26 = (long *)0x0;
    if (pSVar3 != (Settings_AdvancedSettings_o *)0x0) {
      bVar7 = Settings_AdvancedSettings__TryGetServiceUrl
                        (pSVar3,(System_String_o *)unaff_R14,&stack0xffffffffffffffe8,(MethodInfo *)0x0);
      uStack_19 = (undefined1)bVar7;
      goto label_041e48a9;
    }
    goto label_041e48ca;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad7a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar26 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a1 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
label_041e4953:
    il2cpp_runtime_helper_022b2ca0();
    pMStack_40 = unaff_R14;
    if (g_data_057ad7a2 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
      plVar26 = &TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a2 = '\x01';
    }
    if (extraout_RDX_04 != 0) {
      if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
        plVar26 = *(long **)(extraout_RDX_04 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar26,MethodInfo_String_ConvertTo_String);
        if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
          plVar26 = *(long **)(extraout_RDX_04 + 0x28);
          pSVar9 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar26,MethodInfo_String_ConvertTo_String);
          if (2 < *(uint *)(extraout_RDX_04 + 0x18)) {
            pCVar22 = (CustomLogic_UserMethod_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (*(Il2CppObject **)(extraout_RDX_04 + 0x30),MethodInfo_UserMethod_ConvertTo_UserMethod);
            CustomLogic_CustomLogicServicesBuiltin__Get(pSVar8,pSVar9,pCVar22,method);
            return (Il2CppObject *)0x0;
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      ppSVar27 = &"application/json";
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a3 = '\x01';
      plVar26 = (long *)ppSVar27;
    }
    if (extraout_RDX_05 != 0) {
      if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
        plVar26 = *(long **)(extraout_RDX_05 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar26,MethodInfo_String_ConvertTo_String);
        if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
          plVar26 = *(long **)(extraout_RDX_05 + 0x28);
          pSVar9 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar26,MethodInfo_String_ConvertTo_String);
          if (2 < *(uint *)(extraout_RDX_05 + 0x18)) {
            pSVar18 = (System_String_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (*(Il2CppObject **)(extraout_RDX_05 + 0x30),MethodInfo_String_ConvertTo_String);
            pSVar11 = "application/json";
            if (*(int *)(extraout_RDX_05 + 0x18) < 4) {
              pCVar22 = (CustomLogic_UserMethod_o *)0x0;
            }
            else {
              pIVar20 = *(Il2CppObject **)(extraout_RDX_05 + 0x38);
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pCVar22 = (CustomLogic_UserMethod_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar20,MethodInfo_UserMethod_ConvertTo_UserMethod);
              if (4 < *(int *)(extraout_RDX_05 + 0x18)) {
                pIVar20 = *(Il2CppObject **)(extraout_RDX_05 + 0x40);
                if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar11 = (System_ArgumentException_o *)
                          CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar20,MethodInfo_String_ConvertTo_String);
              }
            }
            CustomLogic_CustomLogicServicesBuiltin__Post
                      (pSVar8,pSVar9,pSVar18,pCVar22,(System_String_o *)pSVar11,in_R9);
            return (Il2CppObject *)0x0;
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7a4 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
      plVar26 = &TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a4 = '\x01';
    }
    if (extraout_RDX_06 != 0) {
      if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
        plVar26 = *(long **)(extraout_RDX_06 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar26,MethodInfo_String_ConvertTo_String);
        if (1 < *(uint *)(extraout_RDX_06 + 0x18)) {
          plVar26 = *(long **)(extraout_RDX_06 + 0x28);
          pSVar9 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar26,MethodInfo_String_ConvertTo_String);
          if (2 < *(uint *)(extraout_RDX_06 + 0x18)) {
            pSVar18 = (System_String_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (*(Il2CppObject **)(extraout_RDX_06 + 0x30),MethodInfo_String_ConvertTo_String);
            if (*(int *)(extraout_RDX_06 + 0x18) < 4) {
              pCVar22 = (CustomLogic_UserMethod_o *)0x0;
            }
            else {
              pIVar20 = *(Il2CppObject **)(extraout_RDX_06 + 0x38);
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pCVar22 = (CustomLogic_UserMethod_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar20,MethodInfo_UserMethod_ConvertTo_UserMethod);
            }
            CustomLogic_CustomLogicServicesBuiltin__Put(pSVar8,pSVar9,pSVar18,pCVar22,in_R8);
            return (Il2CppObject *)0x0;
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7a5 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
      plVar26 = &TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a5 = '\x01';
    }
    if (extraout_RDX_07 != 0) {
      if (*(int *)(extraout_RDX_07 + 0x18) != 0) {
        plVar26 = *(long **)(extraout_RDX_07 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar26,MethodInfo_String_ConvertTo_String);
        if (1 < *(uint *)(extraout_RDX_07 + 0x18)) {
          pSVar9 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (*(Il2CppObject **)(extraout_RDX_07 + 0x28),MethodInfo_String_ConvertTo_String);
          if (*(int *)(extraout_RDX_07 + 0x18) < 3) {
            pCVar22 = (CustomLogic_UserMethod_o *)0x0;
          }
          else {
            pIVar20 = *(Il2CppObject **)(extraout_RDX_07 + 0x30);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar22 = (CustomLogic_UserMethod_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar20,MethodInfo_UserMethod_ConvertTo_UserMethod);
          }
          CustomLogic_CustomLogicServicesBuiltin__Delete(pSVar8,pSVar9,pCVar22,method);
          return (Il2CppObject *)0x0;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    uVar1 = *(uint *)&((Il2CppObject *)((long)plVar26 + 0x10))->klass;
    pIVar20 = (Il2CppObject *)(ulong)uVar1;
    if ((uVar1 == 1) || (uVar1 == 0xfffffffd)) {
      if (g_data_057ad7a7 == '\0') {
        pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023445d0();
        g_data_057ad7a7 = '\x01';
      }
      *(undefined4 *)&((Il2CppObject *)((long)plVar26 + 0x10))->klass = 0xffffffff;
      pIVar13 = ((Il2CppObject *)((long)plVar26 + 0x30))->klass;
      if (pIVar13 != (Il2CppClass *)0x0) {
        pvVar25 = (pIVar13->_1).image;
        if ((ulong)*(ushort *)((long)pvVar25 + 0x12e) != 0) {
          lVar4 = *(long *)((long)pvVar25 + 0xb0);
          lVar28 = 0;
          do {
            if (*(long *)(lVar4 + lVar28) == TypeInfo_IDisposable) {
              auVar30._8_8_ = lVar4;
              auVar30._0_8_ = (long)pvVar25 + (long)*(int *)(lVar4 + 8 + lVar28) * 0x10 + 0x138;
              goto label_041e4e4f;
            }
            lVar28 = lVar28 + 0x10;
          } while ((ulong)*(ushort *)((long)pvVar25 + 0x12e) << 4 != lVar28);
        }
        auVar30 = il2cpp_runtime_helper_02300d20(pIVar13,TypeInfo_IDisposable,0);
label_041e4e4f:
        vtableDispatch = (code *)*auVar30._0_8_;
        pIVar20 = (Il2CppObject *)
                  (*vtableDispatch)(pIVar13,auVar30._0_8_[1],auVar30._8_8_,vtableDispatch);
        return pIVar20;
      }
    }
    return pIVar20;
  }
  if (*(int *)(extraout_RDX_03 + 0x18) == 0) goto label_041e4953;
  pIVar20 = *(Il2CppObject **)(extraout_RDX_03 + 0x20);
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar20,MethodInfo_String_ConvertTo_String);
  plVar26 = (long *)pMVar21;
  if (g_data_057ad789 == '\0') {
    plVar26 = &TypeInfo_SettingsManager;
    pMStack_40 = pMVar21;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad789 = '\x01';
  }
  pMStack_40 = (MethodInfo *)0x0;
  bVar7 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)plVar26);
  if ((char)bVar7 == '\0') {
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
  }
  else {
    pSVar3 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (pSVar3 == (Settings_AdvancedSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar7 = Settings_AdvancedSettings__TryGetSecretValue
                        (pSVar3,(System_String_o *)pMVar21,(System_String_o **)&pMStack_40,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (Il2CppObject *)pMStack_40;
      }
    }
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No secret registered for key '");
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"'.");
    method = (MethodInfo *)0x0;
    pSVar8 = System_String__Concat_3af7150(pSVar8,(System_String_o *)pMVar21,pSVar9,(MethodInfo *)0x0);
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
  }
  System_Exception___ctor_3cf6120(__this_00,pSVar8,(MethodInfo *)0x0);
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSecret);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"..");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad78a = '\x01';
  }
  if (__this_00 == (System_Exception_o *)0x0) {
label_041e3080:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar7 = System_String__EndsWith((System_String_o *)__this_00,"/",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      __this_00 = (System_Exception_o *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_00,"/",(MethodInfo *)0x0);
    }
    __this_01 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
    System_Uri___ctor(__this_01,(System_String_o *)__this_00,(MethodInfo *)0x0);
    bVar7 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (__this_01 != (System_Uri_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (__this_01->klass->vtable)._3_ToString.methodPtr;
        pMVar21 = (__this_01->klass->vtable)._3_ToString.method;
        __this_02 = __this_01;
label_041e3074:
        pIVar20 = (Il2CppObject *)(*UNRECOVERED_JUMPTABLE_00)(__this_02,pMVar21);
        return pIVar20;
      }
      goto label_041e3080;
    }
    if (pSVar8 == (System_String_o *)0x0) goto label_041e3080;
    bVar7 = System_String__Contains(pSVar8,"..",(MethodInfo *)0x0);
    if (((char)bVar7 == '\0') &&
       (bVar7 = System_String__Contains(pSVar8,"\\",(MethodInfo *)0x0), (char)bVar7 == '\0')) {
      if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = System_Uri__IsWellFormedUriString(pSVar8,1,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        __this_02 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
        method = (MethodInfo *)0x0;
        System_Uri___ctor_4872840(__this_02,__this_01,pSVar8,(MethodInfo *)0x0);
        if (((__this_02 != (System_Uri_o *)0x0) &&
            (pSVar8 = System_Uri__get_Host(__this_02,(MethodInfo *)0x0), __this_01 != (System_Uri_o *)0x0)) &&
           (pSVar9 = System_Uri__get_Host(__this_01,(MethodInfo *)0x0), pSVar8 != (System_String_o *)0x0)) {
          method = (MethodInfo *)0x0;
          bVar7 = System_String__Equals_3af4de0(pSVar8,pSVar9,5,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            pSVar8 = System_Uri__get_Scheme(__this_02,(MethodInfo *)0x0);
            pSVar9 = System_Uri__get_Scheme(__this_01,(MethodInfo *)0x0);
            bVar7 = System_String__op_Inequality(pSVar8,pSVar9,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              iVar5 = System_Uri__get_Port(__this_02,(MethodInfo *)0x0);
              iVar6 = System_Uri__get_Port(__this_01,(MethodInfo *)0x0);
              if (iVar5 == iVar6) {
                UNRECOVERED_JUMPTABLE_00 = (__this_02->klass->vtable)._3_ToString.methodPtr;
                pMVar21 = (__this_02->klass->vtable)._3_ToString.method;
                goto label_041e3074;
              }
            }
          }
          uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
          pSVar11 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
          pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Route escapes the base service URL.");
          System_InvalidOperationException___ctor_3cb6af0
                    ((System_InvalidOperationException_o *)pSVar11,pSVar8,(MethodInfo *)0x0);
          goto label_041e30e7;
        }
        goto label_041e3080;
      }
    }
  }
  uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar11 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_3c12490(pSVar11,pSVar8,(MethodInfo *)0x0);
label_041e30e7:
  pMVar12 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetEndpoint);
  il2cpp_runtime_helper_022b2b10();
  pMVar21 = pMVar12;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar8 = CustomLogic_CustomLogicServicesBuiltin__CheckMe((System_String_o *)pSVar11,pMVar21);
  pIVar13 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar8,(System_String_o *)pMVar12,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar24._stringLength = 0;
  SVar24._firstChar = 0;
  SVar24._6_2_ = 0;
  pIVar20 = pIVar14;
  System_Object___ctor(pIVar14,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar14[1].klass = 0;
  if (pIVar14 != (Il2CppObject *)0x0) {
    pIVar14[2].klass = pIVar13;
    il2cpp_runtime_helper_022b4080(pIVar14 + 2,pIVar13);
    pIVar20 = (Il2CppObject *)&pIVar14[2].monitor;
    pIVar14[2].monitor = (void *)extraout_RDX;
    SVar24 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          (pUVar2,(System_Collections_IEnumerator_o *)pIVar14,(MethodInfo *)0x0);
      return (Il2CppObject *)pUVar15;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar21 = (MethodInfo *)0x0;
  pSVar8 = pSVar9;
  System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
  (pSVar9->fields)._stringLength = 0;
  if (pSVar9 != (System_String_o *)0x0) {
    pSVar9[1].monitor = pIVar20;
    il2cpp_runtime_helper_022b4080(&pSVar9[1].monitor,pIVar20);
    pSVar9[1].fields = SVar24;
    il2cpp_runtime_helper_022b4080(&pSVar9[1].fields,SVar24);
    return (Il2CppObject *)pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar21;
  method_04 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar8 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar8,pMVar12);
  pSVar11 = (System_ArgumentException_o *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar8,(System_String_o *)pMVar21,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar13 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar21);
  pSVar16 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                      ((System_String_o *)pSVar11,data,(CustomLogic_UserMethod_o *)method,
                       (System_String_o *)pIVar13,method_04);
  if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar2,pSVar16,(MethodInfo *)0x0);
    return (Il2CppObject *)pUVar15;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar17._stringLength = 0;
  SVar17._firstChar = 0;
  SVar17._6_2_ = 0;
  __this_03 = pSVar11;
  bVar7 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar11,(MethodInfo *)0x0);
  pSVar29 = "application/json";
  if ((char)bVar7 == '\0') {
    if (pSVar11 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar19 = pIVar13;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar21 = (MethodInfo *)0x0;
      pSVar8 = pSVar9;
      System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      (pSVar9->fields)._stringLength = 0;
      if (pSVar9 != (System_String_o *)0x0) {
        pSVar9[1].monitor = __this_03;
        il2cpp_runtime_helper_022b4080(&pSVar9[1].monitor,__this_03);
        pSVar9[1].fields = SVar17;
        il2cpp_runtime_helper_022b4080(&pSVar9[1].fields,SVar17);
        pSVar9[2].monitor = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(&pSVar9[2].monitor,extraout_RDX_00);
        pSVar9[2].klass = (System_String_c *)pIVar13;
        il2cpp_runtime_helper_022b4080(pSVar9 + 2,pIVar13);
        return (Il2CppObject *)pSVar9;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar13 = pIVar19;
      pMVar12 = pMVar21;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar8 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar8,pMVar12);
      pSVar8 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar8,(System_String_o *)pMVar21,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar24 = data_00;
      pSVar16 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar8,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pIVar19,
                           (MethodInfo *)pIVar13);
      if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar2,pSVar16,(MethodInfo *)0x0);
        return (Il2CppObject *)pUVar15;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar21 = (MethodInfo *)0x0;
      pSVar9 = pSVar18;
      System_Object___ctor((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
      (pSVar18->fields)._stringLength = 0;
      if (pSVar18 != (System_String_o *)0x0) {
        pSVar18[1].monitor = pSVar8;
        il2cpp_runtime_helper_022b4080(&pSVar18[1].monitor,pSVar8);
        pSVar18[1].fields = SVar24;
        il2cpp_runtime_helper_022b4080(&pSVar18[1].fields,SVar24);
        pSVar18[2].klass = (System_String_c *)extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(pSVar18 + 2,extraout_RDX_01);
        return (Il2CppObject *)pSVar18;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar12 = pMVar21;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar8 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar9,pMVar12);
      pSVar8 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar8,(System_String_o *)pMVar21,method_03);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      pvVar25 = (void *)0x0;
      pIVar13 = pIVar19;
      System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar19->_1).name = 0;
      if (pIVar19 != (Il2CppClass *)0x0) {
        (pIVar19->_1).byval_arg.data = pSVar8;
        il2cpp_runtime_helper_022b4080(&(pIVar19->_1).byval_arg,pSVar8);
        pIVar13 = (Il2CppClass *)&(pIVar19->_1).byval_arg.bits;
        *(void **)&(pIVar19->_1).byval_arg.bits = extraout_RDX_02;
        pvVar25 = extraout_RDX_02;
        il2cpp_runtime_helper_022b4080();
        if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar2,(System_Collections_IEnumerator_o *)pIVar19,(MethodInfo *)0x0);
          return (Il2CppObject *)pUVar15;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      uVar23 = 0;
      pIVar20 = pIVar14;
      System_Object___ctor(pIVar14,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar14[1].klass = 0;
      if (pIVar14 != (Il2CppObject *)0x0) {
        pIVar14[2].klass = pIVar13;
        il2cpp_runtime_helper_022b4080(pIVar14 + 2,pIVar13);
        pIVar14[2].monitor = pvVar25;
        il2cpp_runtime_helper_022b4080(&pIVar14[2].monitor,pvVar25);
        return pIVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar20,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar20[1].klass = uVar23;
      return extraout_RAX;
    }
    index = 0;
    pSVar29 = pSVar11;
    if (0 < *(int *)&(pSVar11->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)pSVar11,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar7 != '\0') {
          uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_03 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
          pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this_03,pSVar8,(MethodInfo *)0x0);
          SVar17 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(pSVar11->fields)._className);
    }
  }
  return (Il2CppObject *)pSVar29;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetSecret>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__GetSecret_b__3_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e48e0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__GetSecret_b__3_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Settings_AdvancedSettings_o *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar2;
  long lVar3;
  code *vtableDispatch;
  uint16_t c;
  bool_conflict bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_Exception_o *__this_01;
  System_Uri_o *__this_02;
  System_Uri_o *__this_03;
  Il2CppObject *pIVar10;
  System_ArgumentException_o *pSVar11;
  MethodInfo *pMVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *pIVar14;
  UnityEngine_Coroutine_o *pUVar15;
  System_Collections_IEnumerator_o *pSVar16;
  System_ArgumentException_o *__this_04;
  System_String_Fields SVar17;
  System_String_o *pSVar18;
  Il2CppClass *pIVar19;
  Il2CppObject *extraout_RAX;
  MethodInfo *pMVar20;
  CustomLogic_UserMethod_o *pCVar21;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_String_Fields extraout_RDX;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX_00;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_01;
  void *extraout_RDX_02;
  MethodInfo *method_03;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  int index;
  undefined4 uVar22;
  System_String_Fields SVar23;
  void *pvVar24;
  long *plVar25;
  System_ArgumentException_o **ppSVar26;
  long lVar27;
  MethodInfo *method_04;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  System_ArgumentException_o *pSVar28;
  undefined1 auVar29 [16];
  
  plVar25 = (long *)__this;
  if (g_data_057ad7a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar25 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_041e4953:
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057ad7a2 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
      plVar25 = &TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a2 = '\x01';
    }
    if (extraout_RDX_03 != 0) {
      if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
        plVar25 = *(long **)(extraout_RDX_03 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar25,MethodInfo_String_ConvertTo_String);
        if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
          plVar25 = *(long **)(extraout_RDX_03 + 0x28);
          pSVar8 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar25,MethodInfo_String_ConvertTo_String);
          if (2 < *(uint *)(extraout_RDX_03 + 0x18)) {
            pCVar21 = (CustomLogic_UserMethod_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (*(Il2CppObject **)(extraout_RDX_03 + 0x30),MethodInfo_UserMethod_ConvertTo_UserMethod);
            CustomLogic_CustomLogicServicesBuiltin__Get(pSVar7,pSVar8,pCVar21,method);
            return (Il2CppObject *)0x0;
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      ppSVar26 = &"application/json";
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a3 = '\x01';
      plVar25 = (long *)ppSVar26;
    }
    if (extraout_RDX_04 != 0) {
      if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
        plVar25 = *(long **)(extraout_RDX_04 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar25,MethodInfo_String_ConvertTo_String);
        if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
          plVar25 = *(long **)(extraout_RDX_04 + 0x28);
          pSVar8 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar25,MethodInfo_String_ConvertTo_String);
          if (2 < *(uint *)(extraout_RDX_04 + 0x18)) {
            pSVar18 = (System_String_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (*(Il2CppObject **)(extraout_RDX_04 + 0x30),MethodInfo_String_ConvertTo_String);
            pSVar11 = "application/json";
            if (*(int *)(extraout_RDX_04 + 0x18) < 4) {
              pCVar21 = (CustomLogic_UserMethod_o *)0x0;
            }
            else {
              pIVar10 = *(Il2CppObject **)(extraout_RDX_04 + 0x38);
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pCVar21 = (CustomLogic_UserMethod_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar10,MethodInfo_UserMethod_ConvertTo_UserMethod);
              if (4 < *(int *)(extraout_RDX_04 + 0x18)) {
                pIVar10 = *(Il2CppObject **)(extraout_RDX_04 + 0x40);
                if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar11 = (System_ArgumentException_o *)
                          CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar10,MethodInfo_String_ConvertTo_String);
              }
            }
            CustomLogic_CustomLogicServicesBuiltin__Post
                      (pSVar7,pSVar8,pSVar18,pCVar21,(System_String_o *)pSVar11,in_R9);
            return (Il2CppObject *)0x0;
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7a4 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
      plVar25 = &TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a4 = '\x01';
    }
    if (extraout_RDX_05 != 0) {
      if (*(int *)(extraout_RDX_05 + 0x18) != 0) {
        plVar25 = *(long **)(extraout_RDX_05 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar25,MethodInfo_String_ConvertTo_String);
        if (1 < *(uint *)(extraout_RDX_05 + 0x18)) {
          plVar25 = *(long **)(extraout_RDX_05 + 0x28);
          pSVar8 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar25,MethodInfo_String_ConvertTo_String);
          if (2 < *(uint *)(extraout_RDX_05 + 0x18)) {
            pSVar18 = (System_String_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (*(Il2CppObject **)(extraout_RDX_05 + 0x30),MethodInfo_String_ConvertTo_String);
            if (*(int *)(extraout_RDX_05 + 0x18) < 4) {
              pCVar21 = (CustomLogic_UserMethod_o *)0x0;
            }
            else {
              pIVar10 = *(Il2CppObject **)(extraout_RDX_05 + 0x38);
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pCVar21 = (CustomLogic_UserMethod_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar10,MethodInfo_UserMethod_ConvertTo_UserMethod);
            }
            CustomLogic_CustomLogicServicesBuiltin__Put(pSVar7,pSVar8,pSVar18,pCVar21,in_R8);
            return (Il2CppObject *)0x0;
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7a5 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
      plVar25 = &TypeInfo_CustomLogicEvaluator;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a5 = '\x01';
    }
    if (extraout_RDX_06 != 0) {
      if (*(int *)(extraout_RDX_06 + 0x18) != 0) {
        plVar25 = *(long **)(extraout_RDX_06 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)plVar25,MethodInfo_String_ConvertTo_String);
        if (1 < *(uint *)(extraout_RDX_06 + 0x18)) {
          pSVar8 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (*(Il2CppObject **)(extraout_RDX_06 + 0x28),MethodInfo_String_ConvertTo_String);
          if (*(int *)(extraout_RDX_06 + 0x18) < 3) {
            pCVar21 = (CustomLogic_UserMethod_o *)0x0;
          }
          else {
            pIVar10 = *(Il2CppObject **)(extraout_RDX_06 + 0x30);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar21 = (CustomLogic_UserMethod_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar10,MethodInfo_UserMethod_ConvertTo_UserMethod);
          }
          CustomLogic_CustomLogicServicesBuiltin__Delete(pSVar7,pSVar8,pCVar21,method);
          return (Il2CppObject *)0x0;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    uVar1 = *(uint *)&((Il2CppObject *)((long)plVar25 + 0x10))->klass;
    pIVar10 = (Il2CppObject *)(ulong)uVar1;
    if ((uVar1 == 1) || (uVar1 == 0xfffffffd)) {
      if (g_data_057ad7a7 == '\0') {
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023445d0();
        g_data_057ad7a7 = '\x01';
      }
      *(undefined4 *)&((Il2CppObject *)((long)plVar25 + 0x10))->klass = 0xffffffff;
      pIVar13 = ((Il2CppObject *)((long)plVar25 + 0x30))->klass;
      if (pIVar13 != (Il2CppClass *)0x0) {
        pvVar24 = (pIVar13->_1).image;
        if ((ulong)*(ushort *)((long)pvVar24 + 0x12e) != 0) {
          lVar3 = *(long *)((long)pvVar24 + 0xb0);
          lVar27 = 0;
          do {
            if (*(long *)(lVar3 + lVar27) == TypeInfo_IDisposable) {
              auVar29._8_8_ = lVar3;
              auVar29._0_8_ = (long)pvVar24 + (long)*(int *)(lVar3 + 8 + lVar27) * 0x10 + 0x138;
              goto label_041e4e4f;
            }
            lVar27 = lVar27 + 0x10;
          } while ((ulong)*(ushort *)((long)pvVar24 + 0x12e) << 4 != lVar27);
        }
        auVar29 = il2cpp_runtime_helper_02300d20(pIVar13,TypeInfo_IDisposable,0);
label_041e4e4f:
        vtableDispatch = (code *)*auVar29._0_8_;
        pIVar10 = (Il2CppObject *)
                  (*vtableDispatch)(pIVar13,auVar29._0_8_[1],auVar29._8_8_,vtableDispatch);
        return pIVar10;
      }
    }
    return pIVar10;
  }
  if ((int)__a->max_length == 0) goto label_041e4953;
  pIVar10 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar10,MethodInfo_String_ConvertTo_String);
  plVar25 = (long *)pMVar20;
  if (g_data_057ad789 == '\0') {
    plVar25 = &TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad789 = '\x01';
  }
  bVar4 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)plVar25);
  if ((char)bVar4 == '\0') {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
  }
  else {
    __this_00 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (__this_00 == (Settings_AdvancedSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar4 = Settings_AdvancedSettings__TryGetSecretValue
                        (__this_00,(System_String_o *)pMVar20,(System_String_o **)&stack0xffffffffffffffe8,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return (Il2CppObject *)0x0;
      }
    }
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No secret registered for key '");
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"'.");
    method = (MethodInfo *)0x0;
    pSVar7 = System_String__Concat_3af7150(pSVar7,(System_String_o *)pMVar20,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  }
  System_Exception___ctor_3cf6120(__this_01,pSVar7,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSecret);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"..");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad78a = '\x01';
  }
  if (__this_01 == (System_Exception_o *)0x0) {
label_041e3080:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar4 = System_String__EndsWith((System_String_o *)__this_01,"/",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      __this_01 = (System_Exception_o *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_01,"/",(MethodInfo *)0x0);
    }
    __this_02 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
    System_Uri___ctor(__this_02,(System_String_o *)__this_01,(MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (__this_02 != (System_Uri_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (__this_02->klass->vtable)._3_ToString.methodPtr;
        pMVar20 = (__this_02->klass->vtable)._3_ToString.method;
        __this_03 = __this_02;
label_041e3074:
        pIVar10 = (Il2CppObject *)(*UNRECOVERED_JUMPTABLE_00)(__this_03,pMVar20);
        return pIVar10;
      }
      goto label_041e3080;
    }
    if (pSVar7 == (System_String_o *)0x0) goto label_041e3080;
    bVar4 = System_String__Contains(pSVar7,"..",(MethodInfo *)0x0);
    if (((char)bVar4 == '\0') &&
       (bVar4 = System_String__Contains(pSVar7,"\\",(MethodInfo *)0x0), (char)bVar4 == '\0')) {
      if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = System_Uri__IsWellFormedUriString(pSVar7,1,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        __this_03 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
        method = (MethodInfo *)0x0;
        System_Uri___ctor_4872840(__this_03,__this_02,pSVar7,(MethodInfo *)0x0);
        if (((__this_03 != (System_Uri_o *)0x0) &&
            (pSVar7 = System_Uri__get_Host(__this_03,(MethodInfo *)0x0), __this_02 != (System_Uri_o *)0x0)) &&
           (pSVar8 = System_Uri__get_Host(__this_02,(MethodInfo *)0x0), pSVar7 != (System_String_o *)0x0)) {
          method = (MethodInfo *)0x0;
          bVar4 = System_String__Equals_3af4de0(pSVar7,pSVar8,5,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pSVar7 = System_Uri__get_Scheme(__this_03,(MethodInfo *)0x0);
            pSVar8 = System_Uri__get_Scheme(__this_02,(MethodInfo *)0x0);
            bVar4 = System_String__op_Inequality(pSVar7,pSVar8,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              iVar5 = System_Uri__get_Port(__this_03,(MethodInfo *)0x0);
              iVar6 = System_Uri__get_Port(__this_02,(MethodInfo *)0x0);
              if (iVar5 == iVar6) {
                UNRECOVERED_JUMPTABLE_00 = (__this_03->klass->vtable)._3_ToString.methodPtr;
                pMVar20 = (__this_03->klass->vtable)._3_ToString.method;
                goto label_041e3074;
              }
            }
          }
          uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
          pSVar11 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
          pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Route escapes the base service URL.");
          System_InvalidOperationException___ctor_3cb6af0
                    ((System_InvalidOperationException_o *)pSVar11,pSVar7,(MethodInfo *)0x0);
          goto label_041e30e7;
        }
        goto label_041e3080;
      }
    }
  }
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar11 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_3c12490(pSVar11,pSVar7,(MethodInfo *)0x0);
label_041e30e7:
  pMVar12 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetEndpoint);
  il2cpp_runtime_helper_022b2b10();
  pMVar20 = pMVar12;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe((System_String_o *)pSVar11,pMVar20);
  pIVar13 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar7,(System_String_o *)pMVar12,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar23._stringLength = 0;
  SVar23._firstChar = 0;
  SVar23._6_2_ = 0;
  pIVar10 = pIVar14;
  System_Object___ctor(pIVar14,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar14[1].klass = 0;
  if (pIVar14 != (Il2CppObject *)0x0) {
    pIVar14[2].klass = pIVar13;
    il2cpp_runtime_helper_022b4080(pIVar14 + 2,pIVar13);
    pIVar10 = (Il2CppObject *)&pIVar14[2].monitor;
    pIVar14[2].monitor = (void *)extraout_RDX;
    SVar23 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          (pUVar2,(System_Collections_IEnumerator_o *)pIVar14,(MethodInfo *)0x0);
      return (Il2CppObject *)pUVar15;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar20 = (MethodInfo *)0x0;
  pSVar7 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  (pSVar8->fields)._stringLength = 0;
  if (pSVar8 != (System_String_o *)0x0) {
    pSVar8[1].monitor = pIVar10;
    il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor,pIVar10);
    pSVar8[1].fields = SVar23;
    il2cpp_runtime_helper_022b4080(&pSVar8[1].fields,SVar23);
    return (Il2CppObject *)pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar20;
  method_04 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar7,pMVar12);
  pSVar11 = (System_ArgumentException_o *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar7,(System_String_o *)pMVar20,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar13 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar20);
  pSVar16 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                      ((System_String_o *)pSVar11,data,(CustomLogic_UserMethod_o *)method,
                       (System_String_o *)pIVar13,method_04);
  if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar2,pSVar16,(MethodInfo *)0x0);
    return (Il2CppObject *)pUVar15;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar17._stringLength = 0;
  SVar17._firstChar = 0;
  SVar17._6_2_ = 0;
  __this_04 = pSVar11;
  bVar4 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar11,(MethodInfo *)0x0);
  pSVar28 = "application/json";
  if ((char)bVar4 == '\0') {
    if (pSVar11 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar19 = pIVar13;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar20 = (MethodInfo *)0x0;
      pSVar7 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      (pSVar8->fields)._stringLength = 0;
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8[1].monitor = __this_04;
        il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor,__this_04);
        pSVar8[1].fields = SVar17;
        il2cpp_runtime_helper_022b4080(&pSVar8[1].fields,SVar17);
        pSVar8[2].monitor = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(&pSVar8[2].monitor,extraout_RDX_00);
        pSVar8[2].klass = (System_String_c *)pIVar13;
        il2cpp_runtime_helper_022b4080(pSVar8 + 2,pIVar13);
        return (Il2CppObject *)pSVar8;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar13 = pIVar19;
      pMVar12 = pMVar20;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar7,pMVar12);
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar7,(System_String_o *)pMVar20,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar23 = data_00;
      pSVar16 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar7,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pIVar19,
                           (MethodInfo *)pIVar13);
      if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar2,pSVar16,(MethodInfo *)0x0);
        return (Il2CppObject *)pUVar15;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar20 = (MethodInfo *)0x0;
      pSVar8 = pSVar18;
      System_Object___ctor((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
      (pSVar18->fields)._stringLength = 0;
      if (pSVar18 != (System_String_o *)0x0) {
        pSVar18[1].monitor = pSVar7;
        il2cpp_runtime_helper_022b4080(&pSVar18[1].monitor,pSVar7);
        pSVar18[1].fields = SVar23;
        il2cpp_runtime_helper_022b4080(&pSVar18[1].fields,SVar23);
        pSVar18[2].klass = (System_String_c *)extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(pSVar18 + 2,extraout_RDX_01);
        return (Il2CppObject *)pSVar18;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar12 = pMVar20;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar8,pMVar12);
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar7,(System_String_o *)pMVar20,method_03);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      pvVar24 = (void *)0x0;
      pIVar13 = pIVar19;
      System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar19->_1).name = 0;
      if (pIVar19 != (Il2CppClass *)0x0) {
        (pIVar19->_1).byval_arg.data = pSVar7;
        il2cpp_runtime_helper_022b4080(&(pIVar19->_1).byval_arg,pSVar7);
        pIVar13 = (Il2CppClass *)&(pIVar19->_1).byval_arg.bits;
        *(void **)&(pIVar19->_1).byval_arg.bits = extraout_RDX_02;
        pvVar24 = extraout_RDX_02;
        il2cpp_runtime_helper_022b4080();
        if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar15 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar2,(System_Collections_IEnumerator_o *)pIVar19,(MethodInfo *)0x0);
          return (Il2CppObject *)pUVar15;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      uVar22 = 0;
      pIVar10 = pIVar14;
      System_Object___ctor(pIVar14,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar14[1].klass = 0;
      if (pIVar14 != (Il2CppObject *)0x0) {
        pIVar14[2].klass = pIVar13;
        il2cpp_runtime_helper_022b4080(pIVar14 + 2,pIVar13);
        pIVar14[2].monitor = pvVar24;
        il2cpp_runtime_helper_022b4080(&pIVar14[2].monitor,pvVar24);
        return pIVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar10,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar10[1].klass = uVar22;
      return extraout_RAX;
    }
    index = 0;
    pSVar28 = pSVar11;
    if (0 < *(int *)&(pSVar11->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)pSVar11,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar4 != '\0') {
          uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_04 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
          pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this_04,pSVar7,(MethodInfo *)0x0);
          SVar17 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(pSVar11->fields)._className);
    }
  }
  return (Il2CppObject *)pSVar28;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e4960

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  long lVar4;
  code *vtableDispatch;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  CustomLogic_UserMethod_o *pCVar7;
  System_String_o *data;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long lVar10;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  undefined1 auVar11 [16];
  
  if (g_data_057ad7a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)__a->m_Items[1];
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          pCVar7 = (CustomLogic_UserMethod_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[2],MethodInfo_UserMethod_ConvertTo_UserMethod);
          CustomLogic_CustomLogicServicesBuiltin__Get(pSVar5,pSVar6,pCVar7,method);
          return (Il2CppObject *)0x0;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&"application/json";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a3 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (2 < *(uint *)(extraout_RDX + 0x18)) {
          data = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX + 0x30),MethodInfo_String_ConvertTo_String);
          pSVar8 = "application/json";
          if (*(int *)(extraout_RDX + 0x18) < 4) {
            pCVar7 = (CustomLogic_UserMethod_o *)0x0;
          }
          else {
            pIVar9 = *(Il2CppObject **)(extraout_RDX + 0x38);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar7 = (CustomLogic_UserMethod_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar9,MethodInfo_UserMethod_ConvertTo_UserMethod);
            if (4 < *(int *)(extraout_RDX + 0x18)) {
              pIVar9 = *(Il2CppObject **)(extraout_RDX + 0x40);
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar8 = (System_String_o *)
                       CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar9,MethodInfo_String_ConvertTo_String);
            }
          }
          CustomLogic_CustomLogicServicesBuiltin__Post(pSVar5,pSVar6,data,pCVar7,pSVar8,in_R9);
          return (Il2CppObject *)0x0;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a4 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (2 < *(uint *)(extraout_RDX_00 + 0x18)) {
          pSVar8 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (*(Il2CppObject **)(extraout_RDX_00 + 0x30),MethodInfo_String_ConvertTo_String);
          if (*(int *)(extraout_RDX_00 + 0x18) < 4) {
            pCVar7 = (CustomLogic_UserMethod_o *)0x0;
          }
          else {
            pIVar9 = *(Il2CppObject **)(extraout_RDX_00 + 0x38);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar7 = (CustomLogic_UserMethod_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar9,MethodInfo_UserMethod_ConvertTo_UserMethod);
          }
          CustomLogic_CustomLogicServicesBuiltin__Put(pSVar5,pSVar6,pSVar8,pCVar7,in_R8);
          return (Il2CppObject *)0x0;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a5 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_01 + 0x28),MethodInfo_String_ConvertTo_String);
        if (*(int *)(extraout_RDX_01 + 0x18) < 3) {
          pCVar7 = (CustomLogic_UserMethod_o *)0x0;
        }
        else {
          pIVar9 = *(Il2CppObject **)(extraout_RDX_01 + 0x30);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar7 = (CustomLogic_UserMethod_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar9,MethodInfo_UserMethod_ConvertTo_UserMethod);
        }
        CustomLogic_CustomLogicServicesBuiltin__Delete(pSVar5,pSVar6,pCVar7,method);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uVar1 = *(uint *)&((Il2CppObject *)(__this + 1))->klass;
  pIVar9 = (Il2CppObject *)(ulong)uVar1;
  if ((uVar1 == 1) || (uVar1 == 0xfffffffd)) {
    if (g_data_057ad7a7 == '\0') {
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023445d0();
      g_data_057ad7a7 = '\x01';
    }
    *(undefined4 *)&((Il2CppObject *)(__this + 1))->klass = 0xffffffff;
    pIVar2 = ((Il2CppObject *)(__this + 3))->klass;
    if (pIVar2 != (Il2CppClass *)0x0) {
      pvVar3 = (pIVar2->_1).image;
      if ((ulong)*(ushort *)((long)pvVar3 + 0x12e) != 0) {
        lVar4 = *(long *)((long)pvVar3 + 0xb0);
        lVar10 = 0;
        do {
          if (*(long *)(lVar4 + lVar10) == TypeInfo_IDisposable) {
            auVar11._8_8_ = lVar4;
            auVar11._0_8_ = (long)pvVar3 + (long)*(int *)(lVar4 + 8 + lVar10) * 0x10 + 0x138;
            goto label_041e4e4f;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar3 + 0x12e) << 4 != lVar10);
      }
      auVar11 = il2cpp_runtime_helper_02300d20(pIVar2,TypeInfo_IDisposable,0);
label_041e4e4f:
      vtableDispatch = (code *)*auVar11._0_8_;
      pIVar9 = (Il2CppObject *)
               (*vtableDispatch)(pIVar2,auVar11._0_8_[1],auVar11._8_8_,vtableDispatch);
      return pIVar9;
    }
  }
  return pIVar9;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Post>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Post_b__5_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e4a30

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Post_b__5_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  long lVar4;
  code *vtableDispatch;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *data;
  CustomLogic_UserMethod_o *pCVar7;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar10;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  undefined1 auVar11 [16];
  
  if (g_data_057ad7a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&"application/json";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)__a->m_Items[1];
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          data = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          pSVar8 = "application/json";
          if ((int)__a->max_length < 4) {
            pCVar7 = (CustomLogic_UserMethod_o *)0x0;
          }
          else {
            pIVar9 = __a->m_Items[3];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar7 = (CustomLogic_UserMethod_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar9,MethodInfo_UserMethod_ConvertTo_UserMethod);
            if (4 < (int)__a->max_length) {
              pIVar9 = __a->m_Items[4];
              if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar8 = (System_String_o *)
                       CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar9,MethodInfo_String_ConvertTo_String);
            }
          }
          CustomLogic_CustomLogicServicesBuiltin__Post(pSVar5,pSVar6,data,pCVar7,pSVar8,in_R9);
          return (Il2CppObject *)0x0;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a4 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (2 < *(uint *)(extraout_RDX + 0x18)) {
          pSVar8 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (*(Il2CppObject **)(extraout_RDX + 0x30),MethodInfo_String_ConvertTo_String);
          if (*(int *)(extraout_RDX + 0x18) < 4) {
            pCVar7 = (CustomLogic_UserMethod_o *)0x0;
          }
          else {
            pIVar9 = *(Il2CppObject **)(extraout_RDX + 0x38);
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar7 = (CustomLogic_UserMethod_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar9,MethodInfo_UserMethod_ConvertTo_UserMethod);
          }
          CustomLogic_CustomLogicServicesBuiltin__Put(pSVar5,pSVar6,pSVar8,pCVar7,in_R8);
          return (Il2CppObject *)0x0;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a5 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_00 + 0x28),MethodInfo_String_ConvertTo_String);
        if (*(int *)(extraout_RDX_00 + 0x18) < 3) {
          pCVar7 = (CustomLogic_UserMethod_o *)0x0;
        }
        else {
          pIVar9 = *(Il2CppObject **)(extraout_RDX_00 + 0x30);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar7 = (CustomLogic_UserMethod_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar9,MethodInfo_UserMethod_ConvertTo_UserMethod);
        }
        CustomLogic_CustomLogicServicesBuiltin__Delete(pSVar5,pSVar6,pCVar7,method);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uVar1 = *(uint *)&((Il2CppObject *)(__this + 1))->klass;
  pIVar9 = (Il2CppObject *)(ulong)uVar1;
  if ((uVar1 == 1) || (uVar1 == 0xfffffffd)) {
    if (g_data_057ad7a7 == '\0') {
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023445d0();
      g_data_057ad7a7 = '\x01';
    }
    *(undefined4 *)&((Il2CppObject *)(__this + 1))->klass = 0xffffffff;
    pIVar2 = ((Il2CppObject *)(__this + 3))->klass;
    if (pIVar2 != (Il2CppClass *)0x0) {
      pvVar3 = (pIVar2->_1).image;
      if ((ulong)*(ushort *)((long)pvVar3 + 0x12e) != 0) {
        lVar4 = *(long *)((long)pvVar3 + 0xb0);
        lVar10 = 0;
        do {
          if (*(long *)(lVar4 + lVar10) == TypeInfo_IDisposable) {
            auVar11._8_8_ = lVar4;
            auVar11._0_8_ = (long)pvVar3 + (long)*(int *)(lVar4 + 8 + lVar10) * 0x10 + 0x138;
            goto label_041e4e4f;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar3 + 0x12e) << 4 != lVar10);
      }
      auVar11 = il2cpp_runtime_helper_02300d20(pIVar2,TypeInfo_IDisposable,0);
label_041e4e4f:
      vtableDispatch = (code *)*auVar11._0_8_;
      pIVar9 = (Il2CppObject *)
               (*vtableDispatch)(pIVar2,auVar11._0_8_[1],auVar11._8_8_,vtableDispatch);
      return pIVar9;
    }
  }
  return pIVar9;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Put>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Put_b__6_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e4ba0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Put_b__6_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  long lVar4;
  code *vtableDispatch;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *data;
  CustomLogic_UserMethod_o *pCVar7;
  Il2CppObject *pIVar8;
  long extraout_RDX;
  long lVar9;
  MethodInfo *in_R8;
  undefined1 auVar10 [16];
  
  if (g_data_057ad7a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)__a->m_Items[1];
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          data = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          if ((int)__a->max_length < 4) {
            pCVar7 = (CustomLogic_UserMethod_o *)0x0;
          }
          else {
            pIVar8 = __a->m_Items[3];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar7 = (CustomLogic_UserMethod_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar8,MethodInfo_UserMethod_ConvertTo_UserMethod);
          }
          CustomLogic_CustomLogicServicesBuiltin__Put(pSVar5,pSVar6,data,pCVar7,in_R8);
          return (Il2CppObject *)0x0;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a5 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        pSVar6 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX + 0x28),MethodInfo_String_ConvertTo_String);
        if (*(int *)(extraout_RDX + 0x18) < 3) {
          pCVar7 = (CustomLogic_UserMethod_o *)0x0;
        }
        else {
          pIVar8 = *(Il2CppObject **)(extraout_RDX + 0x30);
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar7 = (CustomLogic_UserMethod_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar8,MethodInfo_UserMethod_ConvertTo_UserMethod);
        }
        CustomLogic_CustomLogicServicesBuiltin__Delete(pSVar5,pSVar6,pCVar7,method);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uVar1 = *(uint *)&((Il2CppObject *)(__this + 1))->klass;
  pIVar8 = (Il2CppObject *)(ulong)uVar1;
  if ((uVar1 == 1) || (uVar1 == 0xfffffffd)) {
    if (g_data_057ad7a7 == '\0') {
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023445d0();
      g_data_057ad7a7 = '\x01';
    }
    *(undefined4 *)&((Il2CppObject *)(__this + 1))->klass = 0xffffffff;
    pIVar2 = ((Il2CppObject *)(__this + 3))->klass;
    if (pIVar2 != (Il2CppClass *)0x0) {
      pvVar3 = (pIVar2->_1).image;
      if ((ulong)*(ushort *)((long)pvVar3 + 0x12e) != 0) {
        lVar4 = *(long *)((long)pvVar3 + 0xb0);
        lVar9 = 0;
        do {
          if (*(long *)(lVar4 + lVar9) == TypeInfo_IDisposable) {
            auVar10._8_8_ = lVar4;
            auVar10._0_8_ = (long)pvVar3 + (long)*(int *)(lVar4 + 8 + lVar9) * 0x10 + 0x138;
            goto label_041e4e4f;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar3 + 0x12e) << 4 != lVar9);
      }
      auVar10 = il2cpp_runtime_helper_02300d20(pIVar2,TypeInfo_IDisposable,0);
label_041e4e4f:
      vtableDispatch = (code *)*auVar10._0_8_;
      pIVar8 = (Il2CppObject *)
               (*vtableDispatch)(pIVar2,auVar10._0_8_[1],auVar10._8_8_,vtableDispatch);
      return pIVar8;
    }
  }
  return pIVar8;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings.<>c$$<__CreateMethodBinding__Delete>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Delete_b__7_0 (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicServicesBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e4cb0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin_Bindings___c_____CreateMethodBinding__Delete_b__7_0
          (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicServicesBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  long lVar4;
  code *vtableDispatch;
  System_String_o *service;
  System_String_o *route;
  CustomLogic_UserMethod_o *callback;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (g_data_057ad7a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicServicesBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      service = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        route = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if ((int)__a->max_length < 3) {
          callback = (CustomLogic_UserMethod_o *)0x0;
        }
        else {
          pIVar5 = __a->m_Items[2];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          callback = (CustomLogic_UserMethod_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,MethodInfo_UserMethod_ConvertTo_UserMethod);
        }
        CustomLogic_CustomLogicServicesBuiltin__Delete(service,route,callback,method);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uVar1 = *(uint *)&((Il2CppObject *)(__this + 1))->klass;
  pIVar5 = (Il2CppObject *)(ulong)uVar1;
  if ((uVar1 == 1) || (uVar1 == 0xfffffffd)) {
    if (g_data_057ad7a7 == '\0') {
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023445d0();
      g_data_057ad7a7 = '\x01';
    }
    *(undefined4 *)&((Il2CppObject *)(__this + 1))->klass = 0xffffffff;
    pIVar2 = ((Il2CppObject *)(__this + 3))->klass;
    if (pIVar2 != (Il2CppClass *)0x0) {
      pvVar3 = (pIVar2->_1).image;
      if ((ulong)*(ushort *)((long)pvVar3 + 0x12e) != 0) {
        lVar4 = *(long *)((long)pvVar3 + 0xb0);
        lVar6 = 0;
        do {
          if (*(long *)(lVar4 + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = lVar4;
            auVar7._0_8_ = (long)pvVar3 + (long)*(int *)(lVar4 + 8 + lVar6) * 0x10 + 0x138;
            goto label_041e4e4f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar3 + 0x12e) << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pIVar2,TypeInfo_IDisposable,0);
label_041e4e4f:
      vtableDispatch = (code *)*auVar7._0_8_;
      pIVar5 = (Il2CppObject *)
               (*vtableDispatch)(pIVar2,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return pIVar5;
    }
  }
  return pIVar5;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicServicesBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41e3b80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicServicesBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_Func_T__object____object__o *pSVar5;
  CustomLogic_CLMethodBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad797 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"CheckPermissions");
    il2cpp_runtime_helper_023445d0(&"Put");
    il2cpp_runtime_helper_023445d0(&"Post");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Get");
    il2cpp_runtime_helper_023445d0(&"GetSecret");
    g_data_057ad797 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"CheckPermissions",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"GetSecret",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad799 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetSecret_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad799 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    bVar3 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad79a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad79a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    bVar3 = System_String__op_Equality(name,"Post",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad79b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Post_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad79b = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    bVar3 = System_String__op_Equality(name,"Put",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad79c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Put_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad79c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    bVar3 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad79d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Delete_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad79d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicServicesBuiltin not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar4);
    register0x00000020 = (BADSPACEBASE *)auStack_18;
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad798 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3e99;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3ea5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3eb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3ebd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__CheckPermissions_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3ec9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad798 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3eec;
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3e3b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3e57;
    pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3e71;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar5;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3e8b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar5);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3f12;
  pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e3f2a;
  CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__CheckPermissions
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__CheckPermissions (const MethodInfo* method);
// 0x41e3df0

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__CheckPermissions(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this;
  
  if (g_data_057ad798 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__CheckPermissions_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad798 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__GetSecret
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__GetSecret (const MethodInfo* method);
// 0x41e3f40

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__GetSecret(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this;
  
  if (g_data_057ad799 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetSecret_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad799 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x41e4090

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this;
  
  if (g_data_057ad79a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad79a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Post
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Post (const MethodInfo* method);
// 0x41e41e0

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Post(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this;
  
  if (g_data_057ad79b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Post_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad79b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Put
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Put (const MethodInfo* method);
// 0x41e4330

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Put(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this;
  
  if (g_data_057ad79c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Put_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad79c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$__CreateMethodBinding__Delete
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o* CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Delete (const MethodInfo* method);
// 0x41e4480

CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *
CustomLogic_CustomLogicServicesBuiltin_Bindings____CreateMethodBinding__Delete(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *__this;
  
  if (g_data_057ad79d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Delete_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad79d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicServicesBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicServicesBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicServicesBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicServicesBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicServicesBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41e45d0

void CustomLogic_CustomLogicServicesBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057ad79e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"CheckPermissions");
    il2cpp_runtime_helper_023445d0(&"Put");
    il2cpp_runtime_helper_023445d0(&"Post");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Get");
    il2cpp_runtime_helper_023445d0(&"GetSecret");
    g_data_057ad79e = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"CheckPermissions",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetSecret",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Get",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Post",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Put",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Delete",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad79f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad79f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16___ctor (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41e3850

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16___ctor
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x41e4db0

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  UnityEngine_Networking_UnityWebRequest_o *pUVar3;
  UnityEngine_Networking_UnityWebRequest_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057ad7a7 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a7 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields)._www_5__2;
    if (pUVar3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar4 = pUVar3->klass;
      uVar1._0_1_ = (pUVar4->_2).rank;
      uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pUVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar6);
            goto label_041e4e4f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pUVar3,TypeInfo_IDisposable,0);
label_041e4e4f:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pUVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__MoveNext (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x41e4e60

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__MoveNext
          (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o **ppUVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  UnityEngine_Networking_UnityWebRequest_c *pUVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  int32_t iVar7;
  UnityEngine_Networking_UnityWebRequest_o *pUVar8;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar9;
  System_String_o *pSVar10;
  System_Object_array *parameterValues;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  Il2CppMethodPointer *ppIVar14;
  MethodInfo *method_00;
  long lVar15;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 auVar16 [12];
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (g_data_057ad7a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Result);
    g_data_057ad7a6 = '\x01';
  }
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields)._www_5__2;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_041e5143;
    }
    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    method_00 = (MethodInfo *)0x0;
    iVar7 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar8,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._www_5__2;
    if (iVar7 != 1) {
      pSVar10 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON(*ppUVar1,method_00);
    }
    userMethod = (__this->fields).callback;
    if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
label_041e5097:
      if (g_data_057ad7a7 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ad7a7 = '\x01';
      }
      (__this->fields).__1__state = -1;
      pUVar8 = (__this->fields)._www_5__2;
      if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar5 = pUVar8->klass;
        uVar2._0_1_ = (pUVar5->_2).rank;
        uVar2._1_1_ = (pUVar5->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar6 = (pUVar5->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar11) == TypeInfo_IDisposable) {
              ppIVar14 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar11)].methodPtr;
              goto label_041e511d;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar11);
        }
        ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_041e511d:
        (**ppIVar14)(pUVar8,(MethodInfo *)ppIVar14[1]);
      }
      *ppUVar1 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar1,0);
      return 0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      userMethod = (__this->fields).callback;
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    if (parameterValues == (System_Object_array *)0x0) goto label_041e514d;
    if ((pSVar10 == (System_String_o *)0x0) ||
       (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,(((parameterValues->obj).klass)->_1).element_class), lVar11 != 0))
    {
      if ((int)parameterValues->max_length == 0) goto label_041e5152;
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar10;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if (*ppUVar1 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_041e5157;
      iStack_38 = UnityEngine_Networking_UnityWebRequest__get_result(*ppUVar1,(MethodInfo *)0x0);
      SStack_48.klass = TypeInfo_Result;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      pSVar10 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,(((parameterValues->obj).klass)->_1).element_class), lVar11 == 0
         )) goto label_041e5175;
      if ((uint)parameterValues->max_length < 2) goto label_041e515c;
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar10;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,pSVar10);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        goto label_041e5097;
      }
      goto label_041e5161;
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pUVar8 = UnityEngine_Networking_UnityWebRequest__Delete((__this->fields).uri,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._www_5__2;
    (__this->fields)._www_5__2 = pUVar8;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar8);
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields)._www_5__2;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
label_041e5143:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar8,0xf,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar9 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*ppUVar1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar9);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)ppUVar1 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041e514d:
    il2cpp_runtime_helper_022b2c90();
label_041e5152:
    il2cpp_runtime_helper_022b2ca0();
label_041e5157:
    il2cpp_runtime_helper_022b2c90();
label_041e515c:
    il2cpp_runtime_helper_022b2ca0();
label_041e5161:
    il2cpp_runtime_helper_022b2c90();
  }
  uVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar12,0);
label_041e5175:
  uVar12 = il2cpp_runtime_helper_0231b270();
  auVar16 = il2cpp_runtime_helper_022b2b10(uVar12,0);
  uVar12 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(uVar12);
    lVar11 = *plVar13;
    __cxa_end_catch();
    if (lVar11 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234c30(__this);
    uVar12 = il2cpp_runtime_helper_022fefe0();
    if (lVar11 != 0) {
      iVar4 = (__this->fields).__1__state;
      if ((iVar4 == 1) || (iVar4 == -3)) {
        if (g_data_057ad7a7 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057ad7a7 = '\x01';
        }
        (__this->fields).__1__state = -1;
        pUVar8 = (__this->fields)._www_5__2;
        if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          pUVar5 = pUVar8->klass;
          uVar3._0_1_ = (pUVar5->_2).rank;
          uVar3._1_1_ = (pUVar5->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar6 = (pUVar5->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IDisposable) {
                ppIVar14 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar15)].methodPtr;
                goto label_041e52e7;
              }
              lVar15 = lVar15 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar15);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_041e52e7:
          (**ppIVar14)(pUVar8,(MethodInfo *)ppIVar14[1]);
        }
      }
      uVar12 = il2cpp_runtime_helper_022fefe0(lVar11);
    }
  }
  _Unwind_Resume(uVar12);
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x41e5310

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ad7a7 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a7 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._www_5__2;
  if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_041e539f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_041e539f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x41e53b0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x41e53c0

void CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<DeleteRequest>d__16$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o* __this, const MethodInfo* method);
// 0x41e5400

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicServicesBuiltin__DeleteRequest_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13___ctor (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41e37f0

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13___ctor
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x41e5410

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  UnityEngine_Networking_UnityWebRequest_o *pUVar3;
  UnityEngine_Networking_UnityWebRequest_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057ad7a9 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7a9 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields)._webRequest_5__2;
    if (pUVar3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar4 = pUVar3->klass;
      uVar1._0_1_ = (pUVar4->_2).rank;
      uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pUVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar6);
            goto label_041e54af;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pUVar3,TypeInfo_IDisposable,0);
label_041e54af:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pUVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__MoveNext (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x41e54c0

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__MoveNext
          (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o **ppUVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  UnityEngine_Networking_UnityWebRequest_c *pUVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  int32_t iVar7;
  UnityEngine_Networking_UnityWebRequest_o *pUVar8;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar9;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_String_o *pSVar10;
  System_Object_array *parameterValues;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  Il2CppMethodPointer *ppIVar14;
  MethodInfo *method_00;
  long lVar15;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 auVar16 [12];
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (g_data_057ad7a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Result);
    g_data_057ad7a8 = '\x01';
  }
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields)._webRequest_5__2;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_041e57b3;
    }
    method_00 = (MethodInfo *)0x0;
    iVar7 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar8,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._webRequest_5__2;
    pUVar8 = *ppUVar1;
    if (iVar7 == 1) {
      if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_041e57d6;
      __this_01 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(pUVar8,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        pSVar10 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
        goto label_041e55e5;
      }
      goto label_041e57db;
    }
    pSVar10 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON(pUVar8,method_00);
label_041e55e5:
    userMethod = (__this->fields).callback;
    if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
label_041e5704:
      if (g_data_057ad7a9 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ad7a9 = '\x01';
      }
      (__this->fields).__1__state = -1;
      pUVar8 = (__this->fields)._webRequest_5__2;
      if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar5 = pUVar8->klass;
        uVar2._0_1_ = (pUVar5->_2).rank;
        uVar2._1_1_ = (pUVar5->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar6 = (pUVar5->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar11) == TypeInfo_IDisposable) {
              ppIVar14 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar11)].methodPtr;
              goto label_041e578d;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar11);
        }
        ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_041e578d:
        (**ppIVar14)(pUVar8,(MethodInfo *)ppIVar14[1]);
      }
      *ppUVar1 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar1,0);
      return 0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      userMethod = (__this->fields).callback;
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    if (parameterValues == (System_Object_array *)0x0) goto label_041e57bd;
    if ((pSVar10 == (System_String_o *)0x0) ||
       (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,(((parameterValues->obj).klass)->_1).element_class), lVar11 != 0))
    {
      if ((int)parameterValues->max_length == 0) goto label_041e57c2;
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar10;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if (*ppUVar1 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_041e57c7;
      iStack_38 = UnityEngine_Networking_UnityWebRequest__get_result(*ppUVar1,(MethodInfo *)0x0);
      SStack_48.klass = TypeInfo_Result;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      pSVar10 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,(((parameterValues->obj).klass)->_1).element_class), lVar11 == 0
         )) goto label_041e57ef;
      if ((uint)parameterValues->max_length < 2) goto label_041e57cc;
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar10;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,pSVar10);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        goto label_041e5704;
      }
      goto label_041e57d1;
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pUVar8 = UnityEngine_Networking_UnityWebRequest__Get((__this->fields).uri,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._webRequest_5__2;
    (__this->fields)._webRequest_5__2 = pUVar8;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar8);
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields)._webRequest_5__2;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
label_041e57b3:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar8,0xf,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar9 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*ppUVar1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar9);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)ppUVar1 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041e57bd:
    il2cpp_runtime_helper_022b2c90();
label_041e57c2:
    il2cpp_runtime_helper_022b2ca0();
label_041e57c7:
    il2cpp_runtime_helper_022b2c90();
label_041e57cc:
    il2cpp_runtime_helper_022b2ca0();
label_041e57d1:
    il2cpp_runtime_helper_022b2c90();
label_041e57d6:
    il2cpp_runtime_helper_022b2c90();
label_041e57db:
    il2cpp_runtime_helper_022b2c90();
  }
  uVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar12,0);
label_041e57ef:
  uVar12 = il2cpp_runtime_helper_0231b270();
  auVar16 = il2cpp_runtime_helper_022b2b10(uVar12,0);
  uVar12 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(uVar12);
    lVar11 = *plVar13;
    __cxa_end_catch();
    if (lVar11 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234ce0(__this);
    uVar12 = il2cpp_runtime_helper_022fefe0();
    if (lVar11 != 0) {
      iVar4 = (__this->fields).__1__state;
      if ((iVar4 == 1) || (iVar4 == -3)) {
        if (g_data_057ad7a9 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057ad7a9 = '\x01';
        }
        (__this->fields).__1__state = -1;
        pUVar8 = (__this->fields)._webRequest_5__2;
        if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          pUVar5 = pUVar8->klass;
          uVar3._0_1_ = (pUVar5->_2).rank;
          uVar3._1_1_ = (pUVar5->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar6 = (pUVar5->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IDisposable) {
                ppIVar14 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar15)].methodPtr;
                goto label_041e598b;
              }
              lVar15 = lVar15 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar15);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_041e598b:
          (**ppIVar14)(pUVar8,(MethodInfo *)ppIVar14[1]);
        }
      }
      uVar12 = il2cpp_runtime_helper_022fefe0(lVar11);
    }
  }
  _Unwind_Resume(uVar12);
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x41e59b0

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ad7a9 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7a9 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._webRequest_5__2;
  if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_041e5a3f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_041e5a3f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x41e5a50

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x41e5a60

void CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<GetRequest>d__13$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o* __this, const MethodInfo* method);
// 0x41e5aa0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicServicesBuiltin__GetRequest_d__13_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14___ctor (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41e3810

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14___ctor
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x41e5ab0

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  UnityEngine_Networking_UnityWebRequest_o *pUVar3;
  UnityEngine_Networking_UnityWebRequest_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057ad7ab == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7ab = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields)._www_5__2;
    if (pUVar3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar4 = pUVar3->klass;
      uVar1._0_1_ = (pUVar4->_2).rank;
      uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pUVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar6);
            goto label_041e5b4f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pUVar3,TypeInfo_IDisposable,0);
label_041e5b4f:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pUVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__MoveNext (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x41e5b60

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__MoveNext
          (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o **ppUVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  UnityEngine_Networking_UnityWebRequest_c *pUVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  int32_t iVar7;
  UnityEngine_Networking_UnityWebRequest_o *pUVar8;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar9;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_String_o *pSVar10;
  System_Object_array *parameterValues;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  Il2CppMethodPointer *ppIVar14;
  MethodInfo *method_00;
  long lVar15;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 auVar16 [12];
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (g_data_057ad7aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Result);
    g_data_057ad7aa = '\x01';
  }
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields)._www_5__2;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_041e5e53;
    }
    method_00 = (MethodInfo *)0x0;
    iVar7 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar8,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._www_5__2;
    pUVar8 = *ppUVar1;
    if (iVar7 == 1) {
      if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_041e5e76;
      __this_01 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(pUVar8,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        pSVar10 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
        goto label_041e5c8d;
      }
      goto label_041e5e7b;
    }
    pSVar10 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON(pUVar8,method_00);
label_041e5c8d:
    userMethod = (__this->fields).callback;
    if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
label_041e5dac:
      if (g_data_057ad7ab == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ad7ab = '\x01';
      }
      (__this->fields).__1__state = -1;
      pUVar8 = (__this->fields)._www_5__2;
      if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar5 = pUVar8->klass;
        uVar2._0_1_ = (pUVar5->_2).rank;
        uVar2._1_1_ = (pUVar5->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar6 = (pUVar5->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar11) == TypeInfo_IDisposable) {
              ppIVar14 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar11)].methodPtr;
              goto label_041e5e2d;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar11);
        }
        ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_041e5e2d:
        (**ppIVar14)(pUVar8,(MethodInfo *)ppIVar14[1]);
      }
      *ppUVar1 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar1,0);
      return 0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      userMethod = (__this->fields).callback;
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    if (parameterValues == (System_Object_array *)0x0) goto label_041e5e5d;
    if ((pSVar10 == (System_String_o *)0x0) ||
       (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,(((parameterValues->obj).klass)->_1).element_class), lVar11 != 0))
    {
      if ((int)parameterValues->max_length == 0) goto label_041e5e62;
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar10;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if (*ppUVar1 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_041e5e67;
      iStack_38 = UnityEngine_Networking_UnityWebRequest__get_result(*ppUVar1,(MethodInfo *)0x0);
      SStack_48.klass = TypeInfo_Result;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      pSVar10 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,(((parameterValues->obj).klass)->_1).element_class), lVar11 == 0
         )) goto label_041e5e8f;
      if ((uint)parameterValues->max_length < 2) goto label_041e5e6c;
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar10;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,pSVar10);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        goto label_041e5dac;
      }
      goto label_041e5e71;
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pUVar8 = UnityEngine_Networking_UnityWebRequest__Post
                       ((__this->fields).uri,(__this->fields).data,(__this->fields).format,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._www_5__2;
    (__this->fields)._www_5__2 = pUVar8;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar8);
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields)._www_5__2;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
label_041e5e53:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar8,0xf,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar9 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*ppUVar1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar9);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)ppUVar1 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041e5e5d:
    il2cpp_runtime_helper_022b2c90();
label_041e5e62:
    il2cpp_runtime_helper_022b2ca0();
label_041e5e67:
    il2cpp_runtime_helper_022b2c90();
label_041e5e6c:
    il2cpp_runtime_helper_022b2ca0();
label_041e5e71:
    il2cpp_runtime_helper_022b2c90();
label_041e5e76:
    il2cpp_runtime_helper_022b2c90();
label_041e5e7b:
    il2cpp_runtime_helper_022b2c90();
  }
  uVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar12,0);
label_041e5e8f:
  uVar12 = il2cpp_runtime_helper_0231b270();
  auVar16 = il2cpp_runtime_helper_022b2b10(uVar12,0);
  uVar12 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(uVar12);
    lVar11 = *plVar13;
    __cxa_end_catch();
    if (lVar11 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234d90(__this);
    uVar12 = il2cpp_runtime_helper_022fefe0();
    if (lVar11 != 0) {
      iVar4 = (__this->fields).__1__state;
      if ((iVar4 == 1) || (iVar4 == -3)) {
        if (g_data_057ad7ab == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057ad7ab = '\x01';
        }
        (__this->fields).__1__state = -1;
        pUVar8 = (__this->fields)._www_5__2;
        if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          pUVar5 = pUVar8->klass;
          uVar3._0_1_ = (pUVar5->_2).rank;
          uVar3._1_1_ = (pUVar5->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar6 = (pUVar5->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IDisposable) {
                ppIVar14 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar15)].methodPtr;
                goto label_041e602b;
              }
              lVar15 = lVar15 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar15);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_041e602b:
          (**ppIVar14)(pUVar8,(MethodInfo *)ppIVar14[1]);
        }
      }
      uVar12 = il2cpp_runtime_helper_022fefe0(lVar11);
    }
  }
  _Unwind_Resume(uVar12);
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x41e6050

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ad7ab == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7ab = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._www_5__2;
  if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_041e60df;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_041e60df:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x41e60f0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x41e6100

void CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PostRequest>d__14$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o* __this, const MethodInfo* method);
// 0x41e6140

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicServicesBuiltin__PostRequest_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15___ctor (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41e3830

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15___ctor
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_IDisposable_Dispose (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x41e6150

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_IDisposable_Dispose
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  UnityEngine_Networking_UnityWebRequest_o *pUVar3;
  UnityEngine_Networking_UnityWebRequest_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057ad7ad == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ad7ad = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields)._www_5__2;
    if (pUVar3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar4 = pUVar3->klass;
      uVar1._0_1_ = (pUVar4->_2).rank;
      uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pUVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar6);
            goto label_041e61ef;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pUVar3,TypeInfo_IDisposable,0);
label_041e61ef:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pUVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__MoveNext (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x41e6200

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__MoveNext
          (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o **ppUVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  UnityEngine_Networking_UnityWebRequest_c *pUVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  int32_t iVar7;
  UnityEngine_Networking_UnityWebRequest_o *pUVar8;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar9;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  System_String_o *pSVar10;
  System_Object_array *parameterValues;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  Il2CppMethodPointer *ppIVar14;
  MethodInfo *method_00;
  long lVar15;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 auVar16 [12];
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (g_data_057ad7ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Result);
    g_data_057ad7ac = '\x01';
  }
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields)._www_5__2;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_041e64f3;
    }
    method_00 = (MethodInfo *)0x0;
    iVar7 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar8,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._www_5__2;
    pUVar8 = *ppUVar1;
    if (iVar7 == 1) {
      if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_041e6516;
      __this_01 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(pUVar8,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        pSVar10 = UnityEngine_Networking_DownloadHandler__get_text(__this_01,(MethodInfo *)0x0);
        goto label_041e6329;
      }
      goto label_041e651b;
    }
    pSVar10 = CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON(pUVar8,method_00);
label_041e6329:
    userMethod = (__this->fields).callback;
    if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
label_041e6448:
      if (g_data_057ad7ad == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ad7ad = '\x01';
      }
      (__this->fields).__1__state = -1;
      pUVar8 = (__this->fields)._www_5__2;
      if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar5 = pUVar8->klass;
        uVar2._0_1_ = (pUVar5->_2).rank;
        uVar2._1_1_ = (pUVar5->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar6 = (pUVar5->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar11) == TypeInfo_IDisposable) {
              ppIVar14 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar11)].methodPtr;
              goto label_041e64cd;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar11);
        }
        ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_041e64cd:
        (**ppIVar14)(pUVar8,(MethodInfo *)ppIVar14[1]);
      }
      *ppUVar1 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar1,0);
      return 0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      userMethod = (__this->fields).callback;
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    if (parameterValues == (System_Object_array *)0x0) goto label_041e64fd;
    if ((pSVar10 == (System_String_o *)0x0) ||
       (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,(((parameterValues->obj).klass)->_1).element_class), lVar11 != 0))
    {
      if ((int)parameterValues->max_length == 0) goto label_041e6502;
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar10;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if (*ppUVar1 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_041e6507;
      iStack_38 = UnityEngine_Networking_UnityWebRequest__get_result(*ppUVar1,(MethodInfo *)0x0);
      SStack_48.klass = TypeInfo_Result;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      pSVar10 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      if ((pSVar10 != (System_String_o *)0x0) &&
         (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,(((parameterValues->obj).klass)->_1).element_class), lVar11 == 0
         )) goto label_041e652f;
      if ((uint)parameterValues->max_length < 2) goto label_041e650c;
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar10;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,pSVar10);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        goto label_041e6448;
      }
      goto label_041e6511;
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pUVar8 = UnityEngine_Networking_UnityWebRequest__Put
                       ((__this->fields).uri,(__this->fields).data,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._www_5__2;
    (__this->fields)._www_5__2 = pUVar8;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar8);
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields)._www_5__2;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
label_041e64f3:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar8,0xf,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar9 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*ppUVar1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar9);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)ppUVar1 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041e64fd:
    il2cpp_runtime_helper_022b2c90();
label_041e6502:
    il2cpp_runtime_helper_022b2ca0();
label_041e6507:
    il2cpp_runtime_helper_022b2c90();
label_041e650c:
    il2cpp_runtime_helper_022b2ca0();
label_041e6511:
    il2cpp_runtime_helper_022b2c90();
label_041e6516:
    il2cpp_runtime_helper_022b2c90();
label_041e651b:
    il2cpp_runtime_helper_022b2c90();
  }
  uVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar12,0);
label_041e652f:
  uVar12 = il2cpp_runtime_helper_0231b270();
  auVar16 = il2cpp_runtime_helper_022b2b10(uVar12,0);
  uVar12 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(uVar12);
    lVar11 = *plVar13;
    __cxa_end_catch();
    if (lVar11 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234e40(__this);
    uVar12 = il2cpp_runtime_helper_022fefe0();
    if (lVar11 != 0) {
      iVar4 = (__this->fields).__1__state;
      if ((iVar4 == 1) || (iVar4 == -3)) {
        if (g_data_057ad7ad == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057ad7ad = '\x01';
        }
        (__this->fields).__1__state = -1;
        pUVar8 = (__this->fields)._www_5__2;
        if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          pUVar5 = pUVar8->klass;
          uVar3._0_1_ = (pUVar5->_2).rank;
          uVar3._1_1_ = (pUVar5->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar6 = (pUVar5->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IDisposable) {
                ppIVar14 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar15)].methodPtr;
                goto label_041e66cb;
              }
              lVar15 = lVar15 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar15);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_041e66cb:
          (**ppIVar14)(pUVar8,(MethodInfo *)ppIVar14[1]);
        }
      }
      uVar12 = il2cpp_runtime_helper_022fefe0(lVar11);
    }
  }
  _Unwind_Resume(uVar12);
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15____m__Finally1 (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x41e66f0

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15____m__Finally1
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ad7ad == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7ad = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._www_5__2;
  if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_041e677f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_041e677f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x41e6790

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x41e67a0

void CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicServicesBuiltin.<PutRequest>d__15$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o* __this, const MethodInfo* method);
// 0x41e67e0

Il2CppObject *
CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicServicesBuiltin__PutRequest_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicServicesBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin___ctor (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x41e2900

void CustomLogic_CustomLogicServicesBuiltin___ctor
               (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad785 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad785 = '\x01';
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


// CustomLogic.CustomLogicServicesBuiltin$$IsAllowedToRunBase
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase (const MethodInfo* method);
// 0x41e2970

bool_conflict CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(MethodInfo *method)

{
  char cVar1;
  long lVar2;
  UnityEngine_MonoBehaviour_o *pUVar3;
  uint16_t c;
  bool_conflict bVar4;
  int32_t iVar5;
  int32_t iVar6;
  bool_conflict extraout_EAX;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Settings_AdvancedSettings_o *pSVar9;
  undefined8 uVar10;
  System_Exception_o *pSVar11;
  System_Uri_o *__this;
  System_Uri_o *__this_00;
  System_ArgumentException_o *pSVar12;
  MethodInfo *pMVar13;
  Il2CppClass *pIVar14;
  Il2CppObject *pIVar15;
  UnityEngine_Coroutine_o *pUVar16;
  System_Collections_IEnumerator_o *pSVar17;
  System_ArgumentException_o *__this_01;
  System_String_Fields SVar18;
  System_String_o *__this_02;
  Il2CppClass *pIVar19;
  CustomLogic_UserMethod_o *in_RCX;
  Il2CppMethodPointer vtableDispatch;
  System_String_Fields extraout_RDX;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX_00;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_01;
  void *extraout_RDX_02;
  MethodInfo *method_03;
  int index;
  undefined4 uVar20;
  MethodInfo *in_RSI;
  System_String_Fields SVar21;
  MethodInfo *pMVar22;
  void *pvVar23;
  Settings_AdvancedSettings_o *pSVar24;
  System_Exception_o *key;
  long *method_04;
  Il2CppObject *pIVar25;
  MethodInfo *in_R8;
  MethodInfo *method_05;
  System_ArgumentException_o *pSVar26;
  System_String_o *pSStack_78;
  undefined8 uStack_70;
  System_Exception_o *pSStack_68;
  System_String_o *pSStack_60;
  System_Exception_o *pSStack_58;
  Settings_AdvancedSettings_o *pSStack_50;
  System_String_o *pSStack_48;
  Il2CppClass *pIStack_40;
  System_String_o *pSStack_30;
  
  if (g_data_057ad786 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ad786 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)((long)TypeInfo_CustomLogicManager[7].fields + 0x20);
    pSVar7 = TypeInfo_CustomLogicManager;
  }
  else {
    cVar1 = *(char *)((long)TypeInfo_CustomLogicManager[7].fields + 0x20);
    pSVar7 = TypeInfo_CustomLogicManager;
  }
  if (cVar1 == '\0') {
    TypeInfo_CustomLogicManager = pSVar7;
    return 0;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    TypeInfo_CustomLogicManager = pSVar7;
    return (bool_conflict)CONCAT71(0x5577f,*(char *)(lVar2 + 0x11) != '\0');
  }
  TypeInfo_CustomLogicManager = pSVar7;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad787 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
  }
  in_RSI->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar22 = in_RSI;
  il2cpp_runtime_helper_022b4080(in_RSI,0);
  bVar4 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar22);
  if ((char)bVar4 == '\0') {
    return 0;
  }
  pSVar24 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (pSVar24 != (Settings_AdvancedSettings_o *)0x0) {
    bVar4 = Settings_AdvancedSettings__TryGetServiceUrl
                      (pSVar24,pSVar7,(System_String_o **)in_RSI,(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar22 = (MethodInfo *)&stack0xffffffffffffffb8;
  pSStack_30 = pSVar7;
  if (g_data_057ad788 == '\0') {
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2af1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    g_data_057ad788 = '\x01';
  }
  pSStack_48 = (System_String_o *)0x0;
  pIStack_40 = (Il2CppClass *)0x0;
  if (g_data_057ad787 == '\0') {
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2b1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
  }
  pSStack_48 = (System_String_o *)0x0;
  pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2b37;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb8,0);
  pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2b3c;
  bVar4 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar22);
  if ((char)bVar4 == '\0') {
label_041e2c4b:
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c57;
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c5f;
    pSVar11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c6e;
    pSVar9 = (Settings_AdvancedSettings_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to run services. Requires being the master client, services enabled, and the service key registered in Advanced Configuration.");
  }
  else {
    pSVar9 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (pSVar9 == (Settings_AdvancedSettings_o *)0x0) {
label_041e2c46:
      pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c4b;
      il2cpp_runtime_helper_022b2c90();
      goto label_041e2c4b;
    }
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2b72;
    bVar4 = Settings_AdvancedSettings__TryGetServiceUrl
                      (pSVar9,(System_String_o *)pSVar24,&stack0xffffffffffffffb8,(MethodInfo *)0x0);
    pSVar7 = pSStack_48;
    if ((char)bVar4 == '\0') goto label_041e2c4b;
    if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
      pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2b96;
      il2cpp_runtime_helper_02337ed0();
    }
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2baa;
    bVar4 = System_Uri__TryCreate(pSVar7,1,(System_Uri_o **)&stack0xffffffffffffffc0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (pIStack_40 != (Il2CppClass *)0x0) {
        pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2bc7;
        pSVar7 = System_Uri__get_Scheme((System_Uri_o *)pIStack_40,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
          pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2bdb;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2bf3;
        bVar4 = System_String__op_Inequality
                          (pSVar7,*(System_String_o **)(*(long *)(TypeInfo_Uri + 0xb8) + 0x18),
                           (MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_041e2c38:
          return (bool_conflict)pSStack_48;
        }
        if (pIStack_40 != (Il2CppClass *)0x0) {
          pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c08;
          pSVar7 = System_Uri__get_Scheme((System_Uri_o *)pIStack_40,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
            pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c1c;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c34;
          bVar4 = System_String__op_Inequality
                            (pSVar7,*(System_String_o **)(*(long *)(TypeInfo_Uri + 0xb8) + 0x20),
                             (MethodInfo *)0x0);
          if ((char)bVar4 == '\0') goto label_041e2c38;
          goto label_041e2c76;
        }
      }
      goto label_041e2c46;
    }
label_041e2c76:
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c82;
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Service '");
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2c91;
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' is not registered to a valid http/https URL.");
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2ca1;
    pSVar9 = (Settings_AdvancedSettings_o *)
             System_String__Concat_3af7150(pSVar7,(System_String_o *)pSVar24,pSVar8,(MethodInfo *)0x0);
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2cb0;
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2cb8;
    pSVar11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
    pSVar24 = pSVar9;
  }
  pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2cc8;
  System_Exception___ctor_3cf6120(pSVar11,(System_String_o *)pSVar9,(MethodInfo *)0x0);
  pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2cd4;
  uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_CheckMe);
  pSStack_50 = (Settings_AdvancedSettings_o *)0x41e2cdf;
  key = pSVar11;
  il2cpp_runtime_helper_022b2b10(pSVar11,uVar10);
  pMVar22 = (MethodInfo *)&pSStack_60;
  pSStack_60 = (System_String_o *)0x0;
  pSStack_58 = pSVar11;
  pSStack_50 = pSVar24;
  if (g_data_057ad787 == '\0') {
    pSStack_68 = (System_Exception_o *)0x41e2d04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
  }
  pSStack_60 = (System_String_o *)0x0;
  pSStack_68 = (System_Exception_o *)0x41e2d1f;
  il2cpp_runtime_helper_022b4080(&pSStack_60,0);
  pSStack_68 = (System_Exception_o *)0x41e2d24;
  bVar4 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar22);
  if ((char)bVar4 == '\0') {
    return 0;
  }
  pMVar22 = *(MethodInfo **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (pMVar22 != (MethodInfo *)0x0) {
    pSStack_68 = (System_Exception_o *)0x41e2d52;
    bVar4 = Settings_AdvancedSettings__TryGetServiceUrl
                      ((Settings_AdvancedSettings_o *)pMVar22,(System_String_o *)key,&pSStack_60,
                       (MethodInfo *)0x0);
    return bVar4;
  }
  pSStack_68 = (System_Exception_o *)0x41e2d63;
  pSStack_78 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  uStack_70 = 0;
  method_04 = (long *)pMVar22;
  pSStack_68 = key;
  if (g_data_057ad789 == '\0') {
    method_04 = &TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad789 = '\x01';
  }
  pSStack_78 = (System_String_o *)0x0;
  bVar4 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)method_04);
  if ((char)bVar4 == '\0') {
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
  }
  else {
    pSVar24 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (pSVar24 == (Settings_AdvancedSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar4 = Settings_AdvancedSettings__TryGetSecretValue
                        (pSVar24,(System_String_o *)pMVar22,&pSStack_78,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return (bool_conflict)pSStack_78;
      }
    }
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No secret registered for key '");
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"'.");
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSVar7 = System_String__Concat_3af7150(pSVar7,(System_String_o *)pMVar22,pSVar8,(MethodInfo *)0x0);
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
  }
  System_Exception___ctor_3cf6120(pSVar11,pSVar7,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSecret);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"..");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad78a = '\x01';
  }
  if (pSVar11 == (System_Exception_o *)0x0) {
label_041e3080:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar4 = System_String__EndsWith((System_String_o *)pSVar11,"/",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pSVar11 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar11,"/",(MethodInfo *)0x0);
    }
    __this = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
    System_Uri___ctor(__this,(System_String_o *)pSVar11,(MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (__this != (System_Uri_o *)0x0) {
        vtableDispatch = (__this->klass->vtable)._3_ToString.methodPtr;
        pMVar22 = (__this->klass->vtable)._3_ToString.method;
        __this_00 = __this;
label_041e3074:
        bVar4 = (*vtableDispatch)(__this_00,pMVar22);
        return bVar4;
      }
      goto label_041e3080;
    }
    if (pSVar7 == (System_String_o *)0x0) goto label_041e3080;
    bVar4 = System_String__Contains(pSVar7,"..",(MethodInfo *)0x0);
    if (((char)bVar4 == '\0') &&
       (bVar4 = System_String__Contains(pSVar7,"\\",(MethodInfo *)0x0), (char)bVar4 == '\0')) {
      if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = System_Uri__IsWellFormedUriString(pSVar7,1,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        __this_00 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
        in_RCX = (CustomLogic_UserMethod_o *)0x0;
        System_Uri___ctor_4872840(__this_00,__this,pSVar7,(MethodInfo *)0x0);
        if (((__this_00 != (System_Uri_o *)0x0) &&
            (pSVar7 = System_Uri__get_Host(__this_00,(MethodInfo *)0x0), __this != (System_Uri_o *)0x0)) &&
           (pSVar8 = System_Uri__get_Host(__this,(MethodInfo *)0x0), pSVar7 != (System_String_o *)0x0)) {
          in_RCX = (CustomLogic_UserMethod_o *)0x0;
          bVar4 = System_String__Equals_3af4de0(pSVar7,pSVar8,5,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pSVar7 = System_Uri__get_Scheme(__this_00,(MethodInfo *)0x0);
            pSVar8 = System_Uri__get_Scheme(__this,(MethodInfo *)0x0);
            bVar4 = System_String__op_Inequality(pSVar7,pSVar8,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              iVar5 = System_Uri__get_Port(__this_00,(MethodInfo *)0x0);
              iVar6 = System_Uri__get_Port(__this,(MethodInfo *)0x0);
              if (iVar5 == iVar6) {
                vtableDispatch = (__this_00->klass->vtable)._3_ToString.methodPtr;
                pMVar22 = (__this_00->klass->vtable)._3_ToString.method;
                goto label_041e3074;
              }
            }
          }
          uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
          pSVar12 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
          pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Route escapes the base service URL.");
          System_InvalidOperationException___ctor_3cb6af0
                    ((System_InvalidOperationException_o *)pSVar12,pSVar7,(MethodInfo *)0x0);
          goto label_041e30e7;
        }
        goto label_041e3080;
      }
    }
  }
  uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar12 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_3c12490(pSVar12,pSVar7,(MethodInfo *)0x0);
label_041e30e7:
  pMVar13 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetEndpoint);
  il2cpp_runtime_helper_022b2b10();
  pMVar22 = pMVar13;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe((System_String_o *)pSVar12,pMVar22);
  pIVar14 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar7,(System_String_o *)pMVar13,method_00);
  if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_CustomLogicManager[7].fields;
  }
  else {
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_CustomLogicManager[7].fields;
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar21._stringLength = 0;
  SVar21._firstChar = 0;
  SVar21._6_2_ = 0;
  pIVar25 = pIVar15;
  System_Object___ctor(pIVar15,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar15[1].klass = 0;
  if (pIVar15 != (Il2CppObject *)0x0) {
    pIVar15[2].klass = pIVar14;
    il2cpp_runtime_helper_022b4080(pIVar15 + 2,pIVar14);
    pIVar25 = (Il2CppObject *)&pIVar15[2].monitor;
    pIVar15[2].monitor = (void *)extraout_RDX;
    SVar21 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          (pUVar3,(System_Collections_IEnumerator_o *)pIVar15,(MethodInfo *)0x0);
      return (bool_conflict)pUVar16;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar22 = (MethodInfo *)0x0;
  pSVar7 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  (pSVar8->fields)._stringLength = 0;
  if (pSVar8 != (System_String_o *)0x0) {
    pSVar8[1].monitor = pIVar25;
    il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor,pIVar25);
    pSVar8[1].fields = SVar21;
    il2cpp_runtime_helper_022b4080(&pSVar8[1].fields,SVar21);
    return (bool_conflict)pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar22;
  method_05 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar7,pMVar13);
  pSVar12 = (System_ArgumentException_o *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar7,(System_String_o *)pMVar22,method_01);
  if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_CustomLogicManager[7].fields;
  pIVar14 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar22);
  pSVar17 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                      ((System_String_o *)pSVar12,data,in_RCX,(System_String_o *)pIVar14,method_05);
  if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar3,pSVar17,(MethodInfo *)0x0);
    return (bool_conflict)pUVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar18._stringLength = 0;
  SVar18._firstChar = 0;
  SVar18._6_2_ = 0;
  __this_01 = pSVar12;
  bVar4 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar12,(MethodInfo *)0x0);
  pSVar26 = "application/json";
  if ((char)bVar4 == '\0') {
    if (pSVar12 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar19 = pIVar14;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar22 = (MethodInfo *)0x0;
      pSVar7 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      (pSVar8->fields)._stringLength = 0;
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8[1].monitor = __this_01;
        il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor,__this_01);
        pSVar8[1].fields = SVar18;
        il2cpp_runtime_helper_022b4080(&pSVar8[1].fields,SVar18);
        pSVar8[2].monitor = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(&pSVar8[2].monitor,extraout_RDX_00);
        pSVar8[2].klass = (System_String_c *)pIVar14;
        il2cpp_runtime_helper_022b4080(pSVar8 + 2,pIVar14);
        return (bool_conflict)pSVar8;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar14 = pIVar19;
      pMVar13 = pMVar22;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar7,pMVar13);
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar7,(System_String_o *)pMVar22,method_02);
      if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_CustomLogicManager[7].fields;
      SVar21 = data_00;
      pSVar17 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar7,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pIVar19,
                           (MethodInfo *)pIVar14);
      if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar3,pSVar17,(MethodInfo *)0x0);
        return (bool_conflict)pUVar16;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_02 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar22 = (MethodInfo *)0x0;
      pSVar8 = __this_02;
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      (__this_02->fields)._stringLength = 0;
      if (__this_02 != (System_String_o *)0x0) {
        __this_02[1].monitor = pSVar7;
        il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,pSVar7);
        __this_02[1].fields = SVar21;
        il2cpp_runtime_helper_022b4080(&__this_02[1].fields,SVar21);
        __this_02[2].klass = (System_String_c *)extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(__this_02 + 2,extraout_RDX_01);
        return (bool_conflict)__this_02;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar13 = pMVar22;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar8,pMVar13);
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar7,(System_String_o *)pMVar22,method_03);
      if (*(int *)((long)&TypeInfo_CustomLogicManager[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_CustomLogicManager[7].fields;
      }
      else {
        pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_CustomLogicManager[7].fields;
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      pvVar23 = (void *)0x0;
      pIVar14 = pIVar19;
      System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar19->_1).name = 0;
      if (pIVar19 != (Il2CppClass *)0x0) {
        (pIVar19->_1).byval_arg.data = pSVar7;
        il2cpp_runtime_helper_022b4080(&(pIVar19->_1).byval_arg,pSVar7);
        pIVar14 = (Il2CppClass *)&(pIVar19->_1).byval_arg.bits;
        *(void **)&(pIVar19->_1).byval_arg.bits = extraout_RDX_02;
        pvVar23 = extraout_RDX_02;
        il2cpp_runtime_helper_022b4080();
        if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar3,(System_Collections_IEnumerator_o *)pIVar19,(MethodInfo *)0x0);
          return (bool_conflict)pUVar16;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      uVar20 = 0;
      pIVar25 = pIVar15;
      System_Object___ctor(pIVar15,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar15[1].klass = 0;
      if (pIVar15 != (Il2CppObject *)0x0) {
        pIVar15[2].klass = pIVar14;
        il2cpp_runtime_helper_022b4080(pIVar15 + 2,pIVar14);
        pIVar15[2].monitor = pvVar23;
        il2cpp_runtime_helper_022b4080(&pIVar15[2].monitor,pvVar23);
        return (bool_conflict)pIVar15;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar25,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar25[1].klass = uVar20;
      return extraout_EAX;
    }
    index = 0;
    pSVar26 = pSVar12;
    if (0 < *(int *)&(pSVar12->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)pSVar12,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar4 != '\0') {
          uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
          pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this_01,pSVar7,(MethodInfo *)0x0);
          SVar18 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(pSVar12->fields)._className);
    }
  }
  return (bool_conflict)pSVar26;
}


// CustomLogic.CustomLogicServicesBuiltin$$IsAllowedToRun
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRun (System_String_o* service, System_String_o** baseUrl, const MethodInfo* method);
// 0x41e2a50

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRun
          (System_String_o *service,System_String_o **baseUrl,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint16_t c;
  bool_conflict bVar2;
  int32_t iVar3;
  int32_t iVar4;
  bool_conflict extraout_EAX;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Settings_AdvancedSettings_o *pSVar7;
  undefined8 uVar8;
  System_Exception_o *pSVar9;
  System_Uri_o *__this;
  System_Uri_o *__this_00;
  System_ArgumentException_o *pSVar10;
  MethodInfo *pMVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Coroutine_o *pUVar14;
  System_Collections_IEnumerator_o *pSVar15;
  System_ArgumentException_o *__this_01;
  System_String_Fields SVar16;
  System_String_o *__this_02;
  Il2CppClass *pIVar17;
  CustomLogic_UserMethod_o *in_RCX;
  Il2CppMethodPointer vtableDispatch;
  MethodInfo *extraout_RDX;
  System_String_Fields extraout_RDX_00;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX_01;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_02;
  void *extraout_RDX_03;
  MethodInfo *method_03;
  int index;
  undefined4 uVar18;
  System_String_Fields SVar19;
  MethodInfo *pMVar20;
  void *pvVar21;
  Settings_AdvancedSettings_o *pSVar22;
  System_Exception_o *key;
  long *method_04;
  Il2CppObject *pIVar23;
  MethodInfo *in_R8;
  MethodInfo *method_05;
  System_ArgumentException_o *pSVar24;
  System_String_o *pSStack_70;
  undefined8 uStack_68;
  System_Exception_o *pSStack_60;
  System_String_o *pSStack_58;
  System_Exception_o *pSStack_50;
  Settings_AdvancedSettings_o *pSStack_48;
  System_String_o *pSStack_40;
  Il2CppClass *pIStack_38;
  Il2CppType *pIStack_30;
  System_String_o *pSStack_28;
  
  if (g_data_057ad787 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
    method = extraout_RDX;
  }
  *baseUrl = (System_String_o *)0x0;
  pMVar20 = (MethodInfo *)baseUrl;
  il2cpp_runtime_helper_022b4080(baseUrl,0,method);
  bVar2 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar20);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  pSVar22 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (pSVar22 != (Settings_AdvancedSettings_o *)0x0) {
    bVar2 = Settings_AdvancedSettings__TryGetServiceUrl(pSVar22,service,baseUrl,(MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar20 = (MethodInfo *)&stack0xffffffffffffffc0;
  pIStack_30 = (Il2CppType *)baseUrl;
  pSStack_28 = service;
  if (g_data_057ad788 == '\0') {
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2af1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    g_data_057ad788 = '\x01';
  }
  pSStack_40 = (System_String_o *)0x0;
  pIStack_38 = (Il2CppClass *)0x0;
  if (g_data_057ad787 == '\0') {
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2b1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
  }
  pSStack_40 = (System_String_o *)0x0;
  pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2b37;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffc0,0);
  pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2b3c;
  bVar2 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar20);
  if ((char)bVar2 == '\0') {
label_041e2c4b:
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c57;
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c5f;
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c6e;
    pSVar7 = (Settings_AdvancedSettings_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to run services. Requires being the master client, services enabled, and the service key registered in Advanced Configuration.");
  }
  else {
    pSVar7 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (pSVar7 == (Settings_AdvancedSettings_o *)0x0) {
label_041e2c46:
      pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c4b;
      il2cpp_runtime_helper_022b2c90();
      goto label_041e2c4b;
    }
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2b72;
    bVar2 = Settings_AdvancedSettings__TryGetServiceUrl
                      (pSVar7,(System_String_o *)pSVar22,&stack0xffffffffffffffc0,(MethodInfo *)0x0);
    pSVar5 = pSStack_40;
    if ((char)bVar2 == '\0') goto label_041e2c4b;
    if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
      pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2b96;
      il2cpp_runtime_helper_02337ed0();
    }
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2baa;
    bVar2 = System_Uri__TryCreate(pSVar5,1,(System_Uri_o **)&stack0xffffffffffffffc8,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pIStack_38 != (Il2CppClass *)0x0) {
        pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2bc7;
        pSVar5 = System_Uri__get_Scheme((System_Uri_o *)pIStack_38,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
          pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2bdb;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2bf3;
        bVar2 = System_String__op_Inequality
                          (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_Uri + 0xb8) + 0x18),
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
label_041e2c38:
          return (bool_conflict)pSStack_40;
        }
        if (pIStack_38 != (Il2CppClass *)0x0) {
          pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c08;
          pSVar5 = System_Uri__get_Scheme((System_Uri_o *)pIStack_38,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
            pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c1c;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c34;
          bVar2 = System_String__op_Inequality
                            (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_Uri + 0xb8) + 0x20),
                             (MethodInfo *)0x0);
          if ((char)bVar2 == '\0') goto label_041e2c38;
          goto label_041e2c76;
        }
      }
      goto label_041e2c46;
    }
label_041e2c76:
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c82;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Service '");
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2c91;
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' is not registered to a valid http/https URL.");
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2ca1;
    pSVar7 = (Settings_AdvancedSettings_o *)
             System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar22,pSVar6,(MethodInfo *)0x0);
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2cb0;
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2cb8;
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
    pSVar22 = pSVar7;
  }
  pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2cc8;
  System_Exception___ctor_3cf6120(pSVar9,(System_String_o *)pSVar7,(MethodInfo *)0x0);
  pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2cd4;
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_CheckMe);
  pSStack_48 = (Settings_AdvancedSettings_o *)0x41e2cdf;
  key = pSVar9;
  il2cpp_runtime_helper_022b2b10(pSVar9,uVar8);
  pMVar20 = (MethodInfo *)&pSStack_58;
  pSStack_58 = (System_String_o *)0x0;
  pSStack_50 = pSVar9;
  pSStack_48 = pSVar22;
  if (g_data_057ad787 == '\0') {
    pSStack_60 = (System_Exception_o *)0x41e2d04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
  }
  pSStack_58 = (System_String_o *)0x0;
  pSStack_60 = (System_Exception_o *)0x41e2d1f;
  il2cpp_runtime_helper_022b4080(&pSStack_58,0);
  pSStack_60 = (System_Exception_o *)0x41e2d24;
  bVar2 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar20);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  pMVar20 = *(MethodInfo **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (pMVar20 != (MethodInfo *)0x0) {
    pSStack_60 = (System_Exception_o *)0x41e2d52;
    bVar2 = Settings_AdvancedSettings__TryGetServiceUrl
                      ((Settings_AdvancedSettings_o *)pMVar20,(System_String_o *)key,&pSStack_58,
                       (MethodInfo *)0x0);
    return bVar2;
  }
  pSStack_60 = (System_Exception_o *)0x41e2d63;
  pSStack_70 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  uStack_68 = 0;
  method_04 = (long *)pMVar20;
  pSStack_60 = key;
  if (g_data_057ad789 == '\0') {
    method_04 = &TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad789 = '\x01';
  }
  pSStack_70 = (System_String_o *)0x0;
  bVar2 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)method_04);
  if ((char)bVar2 == '\0') {
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
  }
  else {
    pSVar22 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (pSVar22 == (Settings_AdvancedSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar2 = Settings_AdvancedSettings__TryGetSecretValue
                        (pSVar22,(System_String_o *)pMVar20,&pSStack_70,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (bool_conflict)pSStack_70;
      }
    }
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No secret registered for key '");
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"'.");
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pMVar20,pSVar6,(MethodInfo *)0x0);
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
  }
  System_Exception___ctor_3cf6120(pSVar9,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSecret);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"..");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad78a = '\x01';
  }
  if (pSVar9 == (System_Exception_o *)0x0) {
label_041e3080:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = System_String__EndsWith((System_String_o *)pSVar9,"/",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar9 = (System_Exception_o *)
               System_String__Concat_3ae5ba0((System_String_o *)pSVar9,"/",(MethodInfo *)0x0);
    }
    __this = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
    System_Uri___ctor(__this,(System_String_o *)pSVar9,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (__this != (System_Uri_o *)0x0) {
        vtableDispatch = (__this->klass->vtable)._3_ToString.methodPtr;
        pMVar20 = (__this->klass->vtable)._3_ToString.method;
        __this_00 = __this;
label_041e3074:
        bVar2 = (*vtableDispatch)(__this_00,pMVar20);
        return bVar2;
      }
      goto label_041e3080;
    }
    if (pSVar5 == (System_String_o *)0x0) goto label_041e3080;
    bVar2 = System_String__Contains(pSVar5,"..",(MethodInfo *)0x0);
    if (((char)bVar2 == '\0') &&
       (bVar2 = System_String__Contains(pSVar5,"\\",(MethodInfo *)0x0), (char)bVar2 == '\0')) {
      if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_Uri__IsWellFormedUriString(pSVar5,1,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        __this_00 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
        in_RCX = (CustomLogic_UserMethod_o *)0x0;
        System_Uri___ctor_4872840(__this_00,__this,pSVar5,(MethodInfo *)0x0);
        if (((__this_00 != (System_Uri_o *)0x0) &&
            (pSVar5 = System_Uri__get_Host(__this_00,(MethodInfo *)0x0), __this != (System_Uri_o *)0x0)) &&
           (pSVar6 = System_Uri__get_Host(__this,(MethodInfo *)0x0), pSVar5 != (System_String_o *)0x0)) {
          in_RCX = (CustomLogic_UserMethod_o *)0x0;
          bVar2 = System_String__Equals_3af4de0(pSVar5,pSVar6,5,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            pSVar5 = System_Uri__get_Scheme(__this_00,(MethodInfo *)0x0);
            pSVar6 = System_Uri__get_Scheme(__this,(MethodInfo *)0x0);
            bVar2 = System_String__op_Inequality(pSVar5,pSVar6,(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              iVar3 = System_Uri__get_Port(__this_00,(MethodInfo *)0x0);
              iVar4 = System_Uri__get_Port(__this,(MethodInfo *)0x0);
              if (iVar3 == iVar4) {
                vtableDispatch = (__this_00->klass->vtable)._3_ToString.methodPtr;
                pMVar20 = (__this_00->klass->vtable)._3_ToString.method;
                goto label_041e3074;
              }
            }
          }
          uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
          pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Route escapes the base service URL.");
          System_InvalidOperationException___ctor_3cb6af0
                    ((System_InvalidOperationException_o *)pSVar10,pSVar5,(MethodInfo *)0x0);
          goto label_041e30e7;
        }
        goto label_041e3080;
      }
    }
  }
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_3c12490(pSVar10,pSVar5,(MethodInfo *)0x0);
label_041e30e7:
  pMVar11 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetEndpoint);
  il2cpp_runtime_helper_022b2b10();
  pMVar20 = pMVar11;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe((System_String_o *)pSVar10,pMVar20);
  pIVar12 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar5,(System_String_o *)pMVar11,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar19._stringLength = 0;
  SVar19._firstChar = 0;
  SVar19._6_2_ = 0;
  pIVar23 = pIVar13;
  System_Object___ctor(pIVar13,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar13[1].klass = 0;
  if (pIVar13 != (Il2CppObject *)0x0) {
    pIVar13[2].klass = pIVar12;
    il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar12);
    pIVar23 = (Il2CppObject *)&pIVar13[2].monitor;
    pIVar13[2].monitor = (void *)extraout_RDX_00;
    SVar19 = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080();
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          (pUVar1,(System_Collections_IEnumerator_o *)pIVar13,(MethodInfo *)0x0);
      return (bool_conflict)pUVar14;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar20 = (MethodInfo *)0x0;
  pSVar5 = pSVar6;
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  (pSVar6->fields)._stringLength = 0;
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6[1].monitor = pIVar23;
    il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,pIVar23);
    pSVar6[1].fields = SVar19;
    il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar19);
    return (bool_conflict)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar20;
  method_05 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar5,pMVar11);
  pSVar10 = (System_ArgumentException_o *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar5,(System_String_o *)pMVar20,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar12 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar20);
  pSVar15 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                      ((System_String_o *)pSVar10,data,in_RCX,(System_String_o *)pIVar12,method_05);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar15,(MethodInfo *)0x0);
    return (bool_conflict)pUVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar16._stringLength = 0;
  SVar16._firstChar = 0;
  SVar16._6_2_ = 0;
  __this_01 = pSVar10;
  bVar2 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar10,(MethodInfo *)0x0);
  pSVar24 = "application/json";
  if ((char)bVar2 == '\0') {
    if (pSVar10 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar17 = pIVar12;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar20 = (MethodInfo *)0x0;
      pSVar5 = pSVar6;
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      (pSVar6->fields)._stringLength = 0;
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6[1].monitor = __this_01;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,__this_01);
        pSVar6[1].fields = SVar16;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar16);
        pSVar6[2].monitor = extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(&pSVar6[2].monitor,extraout_RDX_01);
        pSVar6[2].klass = (System_String_c *)pIVar12;
        il2cpp_runtime_helper_022b4080(pSVar6 + 2,pIVar12);
        return (bool_conflict)pSVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar12 = pIVar17;
      pMVar11 = pMVar20;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar5,pMVar11);
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar5,(System_String_o *)pMVar20,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar19 = data_00;
      pSVar15 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar5,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pIVar17,
                           (MethodInfo *)pIVar12);
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar15,(MethodInfo *)0x0);
        return (bool_conflict)pUVar14;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_02 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar20 = (MethodInfo *)0x0;
      pSVar6 = __this_02;
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      (__this_02->fields)._stringLength = 0;
      if (__this_02 != (System_String_o *)0x0) {
        __this_02[1].monitor = pSVar5;
        il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,pSVar5);
        __this_02[1].fields = SVar19;
        il2cpp_runtime_helper_022b4080(&__this_02[1].fields,SVar19);
        __this_02[2].klass = (System_String_c *)extraout_RDX_02;
        il2cpp_runtime_helper_022b4080(__this_02 + 2,extraout_RDX_02);
        return (bool_conflict)__this_02;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar11 = pMVar20;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar6,pMVar11);
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar5,(System_String_o *)pMVar20,method_03);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      pvVar21 = (void *)0x0;
      pIVar12 = pIVar17;
      System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar17->_1).name = 0;
      if (pIVar17 != (Il2CppClass *)0x0) {
        (pIVar17->_1).byval_arg.data = pSVar5;
        il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg,pSVar5);
        pIVar12 = (Il2CppClass *)&(pIVar17->_1).byval_arg.bits;
        *(void **)&(pIVar17->_1).byval_arg.bits = extraout_RDX_03;
        pvVar21 = extraout_RDX_03;
        il2cpp_runtime_helper_022b4080();
        if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar1,(System_Collections_IEnumerator_o *)pIVar17,(MethodInfo *)0x0);
          return (bool_conflict)pUVar14;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      uVar18 = 0;
      pIVar23 = pIVar13;
      System_Object___ctor(pIVar13,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar13[1].klass = 0;
      if (pIVar13 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(pIVar23,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar23[1].klass = uVar18;
        return extraout_EAX;
      }
      pIVar13[2].klass = pIVar12;
      il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar12);
      pIVar13[2].monitor = pvVar21;
      il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pvVar21);
      return (bool_conflict)pIVar13;
    }
    index = 0;
    pSVar24 = pSVar10;
    if (0 < *(int *)&(pSVar10->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)pSVar10,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar2 != '\0') {
          uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this_01,pSVar5,(MethodInfo *)0x0);
          SVar16 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(pSVar10->fields)._className);
    }
  }
  return (bool_conflict)pSVar24;
}


// CustomLogic.CustomLogicServicesBuiltin$$CheckMe
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__CheckMe (System_String_o* service, const MethodInfo* method);
// 0x41e2ad0

System_String_o * CustomLogic_CustomLogicServicesBuiltin__CheckMe(System_String_o *service,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  UnityEngine_MonoBehaviour_o *pUVar2;
  uint16_t c;
  bool_conflict bVar3;
  uint uVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_Exception_o *pSVar10;
  System_Uri_o *__this;
  System_Uri_o *__this_00;
  System_ArgumentException_o *pSVar11;
  MethodInfo *pMVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *pIVar14;
  System_Collections_IEnumerator_o *pSVar15;
  System_ArgumentException_o *__this_01;
  System_String_Fields SVar16;
  System_String_o *__this_02;
  System_String_o *extraout_RAX;
  CustomLogic_UserMethod_o *in_RCX;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *callback;
  System_String_Fields extraout_RDX;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX_00;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_01;
  System_String_Fields extraout_RDX_02;
  MethodInfo *method_03;
  int index;
  System_String_Fields SVar17;
  MethodInfo *pMVar18;
  System_String_Fields SVar19;
  System_Exception_o *key;
  long *method_04;
  Il2CppObject *pIVar20;
  MethodInfo *in_R8;
  MethodInfo *method_05;
  System_ArgumentException_o *pSVar21;
  System_String_o *local_58;
  undefined8 uStack_50;
  System_Exception_o *pSStack_48;
  undefined1 local_40 [32];
  Il2CppClass *local_20;
  
  pMVar18 = (MethodInfo *)(local_40 + 0x18);
  if (g_data_057ad788 == '\0') {
    local_40._16_8_ = (InvokerMethod)0x41e2af1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    g_data_057ad788 = '\x01';
  }
  local_40._24_8_ = (char *)0x0;
  local_20 = (Il2CppClass *)0x0;
  if (g_data_057ad787 == '\0') {
    local_40._16_8_ = (InvokerMethod)0x41e2b1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
  }
  local_40._24_8_ = (System_String_o *)0x0;
  local_40._16_8_ = (InvokerMethod)0x41e2b37;
  il2cpp_runtime_helper_022b4080(local_40 + 0x18,0);
  local_40._16_8_ = (InvokerMethod)0x41e2b3c;
  bVar3 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar18);
  if ((char)bVar3 == '\0') goto label_041e2c4b;
  pSVar1 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (pSVar1 == (Settings_AdvancedSettings_o *)0x0) goto label_041e2c46;
  in_RCX = (CustomLogic_UserMethod_o *)0x0;
  local_40._16_8_ = (InvokerMethod)0x41e2b72;
  bVar3 = Settings_AdvancedSettings__TryGetServiceUrl
                    (pSVar1,service,(System_String_o **)(local_40 + 0x18),(MethodInfo *)0x0);
  uVar9 = local_40._24_8_;
  if ((char)bVar3 == '\0') {
label_041e2c4b:
    local_40._16_8_ = (InvokerMethod)0x41e2c57;
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    local_40._16_8_ = (InvokerMethod)0x41e2c5f;
    pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    local_40._16_8_ = (InvokerMethod)0x41e2c6e;
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to run services. Requires being the master client, services enabled, and the service key registered in Advanced Configuration.");
  }
  else {
    if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
      local_40._16_8_ = (InvokerMethod)0x41e2b96;
      il2cpp_runtime_helper_02337ed0();
    }
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    local_40._16_8_ = (InvokerMethod)0x41e2baa;
    bVar3 = System_Uri__TryCreate((System_String_o *)uVar9,1,(System_Uri_o **)&local_20,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (local_20 != (Il2CppClass *)0x0) {
        local_40._16_8_ = (InvokerMethod)0x41e2bc7;
        pSVar7 = System_Uri__get_Scheme((System_Uri_o *)local_20,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
          local_40._16_8_ = (InvokerMethod)0x41e2bdb;
          il2cpp_runtime_helper_02337ed0();
        }
        local_40._16_8_ = (InvokerMethod)0x41e2bf3;
        bVar3 = System_String__op_Inequality
                          (pSVar7,*(System_String_o **)(*(long *)(TypeInfo_Uri + 0xb8) + 0x18),
                           (MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return (System_String_o *)local_40._24_8_;
        }
        if (local_20 != (Il2CppClass *)0x0) {
          local_40._16_8_ = (InvokerMethod)0x41e2c08;
          pSVar7 = System_Uri__get_Scheme((System_Uri_o *)local_20,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
            local_40._16_8_ = (InvokerMethod)0x41e2c1c;
            il2cpp_runtime_helper_02337ed0();
          }
          local_40._16_8_ = (InvokerMethod)0x41e2c34;
          bVar3 = System_String__op_Inequality
                            (pSVar7,*(System_String_o **)(*(long *)(TypeInfo_Uri + 0xb8) + 0x20),
                             (MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return (System_String_o *)local_40._24_8_;
          }
          goto label_041e2c76;
        }
      }
label_041e2c46:
      local_40._16_8_ = (InvokerMethod)0x41e2c4b;
      il2cpp_runtime_helper_022b2c90();
      goto label_041e2c4b;
    }
label_041e2c76:
    local_40._16_8_ = (InvokerMethod)0x41e2c82;
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Service '");
    local_40._16_8_ = (InvokerMethod)0x41e2c91;
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' is not registered to a valid http/https URL.");
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    local_40._16_8_ = (InvokerMethod)0x41e2ca1;
    pSVar7 = System_String__Concat_3af7150(pSVar7,service,pSVar8,(MethodInfo *)0x0);
    local_40._16_8_ = (InvokerMethod)0x41e2cb0;
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    local_40._16_8_ = (InvokerMethod)0x41e2cb8;
    pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    service = pSVar7;
  }
  local_40._16_8_ = (InvokerMethod)0x41e2cc8;
  System_Exception___ctor_3cf6120(pSVar10,pSVar7,(MethodInfo *)0x0);
  local_40._16_8_ = (InvokerMethod)0x41e2cd4;
  uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_CheckMe);
  local_40._16_8_ = (InvokerMethod)0x41e2cdf;
  key = pSVar10;
  il2cpp_runtime_helper_022b2b10(pSVar10,uVar9);
  pMVar18 = (MethodInfo *)local_40;
  local_40._0_8_ = (System_String_o *)0x0;
  local_40._8_8_ = pSVar10;
  local_40._16_8_ = service;
  if (g_data_057ad787 == '\0') {
    pSStack_48 = (System_Exception_o *)0x41e2d04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
  }
  local_40._0_8_ = (System_String_o *)0x0;
  pSStack_48 = (System_Exception_o *)0x41e2d1f;
  il2cpp_runtime_helper_022b4080(local_40,0);
  pSStack_48 = (System_Exception_o *)0x41e2d24;
  bVar3 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar18);
  if ((char)bVar3 == '\0') {
    return (System_String_o *)0x0;
  }
  pMVar18 = *(MethodInfo **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (pMVar18 != (MethodInfo *)0x0) {
    pSStack_48 = (System_Exception_o *)0x41e2d52;
    uVar4 = Settings_AdvancedSettings__TryGetServiceUrl
                      ((Settings_AdvancedSettings_o *)pMVar18,(System_String_o *)key,
                       (System_String_o **)local_40,(MethodInfo *)0x0);
    return (System_String_o *)(ulong)uVar4;
  }
  pSStack_48 = (System_Exception_o *)0x41e2d63;
  local_58 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  uStack_50 = 0;
  method_04 = (long *)pMVar18;
  pSStack_48 = key;
  if (g_data_057ad789 == '\0') {
    method_04 = &TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad789 = '\x01';
  }
  local_58 = (System_String_o *)0x0;
  bVar3 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)method_04);
  if ((char)bVar3 == '\0') {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
  }
  else {
    pSVar1 = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (pSVar1 == (Settings_AdvancedSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar3 = Settings_AdvancedSettings__TryGetSecretValue
                        (pSVar1,(System_String_o *)pMVar18,&local_58,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return local_58;
      }
    }
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No secret registered for key '");
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"'.");
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSVar7 = System_String__Concat_3af7150(pSVar7,(System_String_o *)pMVar18,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  }
  System_Exception___ctor_3cf6120(pSVar10,pSVar7,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSecret);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"..");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad78a = '\x01';
  }
  if (pSVar10 == (System_Exception_o *)0x0) {
label_041e3080:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar3 = System_String__EndsWith((System_String_o *)pSVar10,"/",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pSVar10 = (System_Exception_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar10,"/",(MethodInfo *)0x0);
    }
    __this = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
    System_Uri___ctor(__this,(System_String_o *)pSVar10,(MethodInfo *)0x0);
    bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (__this != (System_Uri_o *)0x0) {
        vtableDispatch = (__this->klass->vtable)._3_ToString.methodPtr;
        pMVar18 = (__this->klass->vtable)._3_ToString.method;
        __this_00 = __this;
label_041e3074:
        pSVar7 = (System_String_o *)(*vtableDispatch)(__this_00,pMVar18);
        return pSVar7;
      }
      goto label_041e3080;
    }
    if (pSVar7 == (System_String_o *)0x0) goto label_041e3080;
    bVar3 = System_String__Contains(pSVar7,"..",(MethodInfo *)0x0);
    if (((char)bVar3 == '\0') &&
       (bVar3 = System_String__Contains(pSVar7,"\\",(MethodInfo *)0x0), (char)bVar3 == '\0')) {
      if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = System_Uri__IsWellFormedUriString(pSVar7,1,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        __this_00 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
        in_RCX = (CustomLogic_UserMethod_o *)0x0;
        System_Uri___ctor_4872840(__this_00,__this,pSVar7,(MethodInfo *)0x0);
        if (((__this_00 != (System_Uri_o *)0x0) &&
            (pSVar7 = System_Uri__get_Host(__this_00,(MethodInfo *)0x0), __this != (System_Uri_o *)0x0)) &&
           (pSVar8 = System_Uri__get_Host(__this,(MethodInfo *)0x0), pSVar7 != (System_String_o *)0x0)) {
          in_RCX = (CustomLogic_UserMethod_o *)0x0;
          bVar3 = System_String__Equals_3af4de0(pSVar7,pSVar8,5,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pSVar7 = System_Uri__get_Scheme(__this_00,(MethodInfo *)0x0);
            pSVar8 = System_Uri__get_Scheme(__this,(MethodInfo *)0x0);
            bVar3 = System_String__op_Inequality(pSVar7,pSVar8,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              iVar5 = System_Uri__get_Port(__this_00,(MethodInfo *)0x0);
              iVar6 = System_Uri__get_Port(__this,(MethodInfo *)0x0);
              if (iVar5 == iVar6) {
                vtableDispatch = (__this_00->klass->vtable)._3_ToString.methodPtr;
                pMVar18 = (__this_00->klass->vtable)._3_ToString.method;
                goto label_041e3074;
              }
            }
          }
          uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
          pSVar11 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
          pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Route escapes the base service URL.");
          System_InvalidOperationException___ctor_3cb6af0
                    ((System_InvalidOperationException_o *)pSVar11,pSVar7,(MethodInfo *)0x0);
          goto label_041e30e7;
        }
        goto label_041e3080;
      }
    }
  }
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar11 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_3c12490(pSVar11,pSVar7,(MethodInfo *)0x0);
label_041e30e7:
  pMVar12 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetEndpoint);
  il2cpp_runtime_helper_022b2b10();
  pMVar18 = pMVar12;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe((System_String_o *)pSVar11,pMVar18);
  pIVar13 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar7,(System_String_o *)pMVar12,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar17._stringLength = 0;
  SVar17._firstChar = 0;
  SVar17._6_2_ = 0;
  pIVar20 = pIVar14;
  System_Object___ctor(pIVar14,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar14[1].klass = 0;
  if (pIVar14 != (Il2CppObject *)0x0) {
    pIVar14[2].klass = pIVar13;
    il2cpp_runtime_helper_022b4080(pIVar14 + 2,pIVar13);
    pIVar20 = (Il2CppObject *)&pIVar14[2].monitor;
    pIVar14[2].monitor = (void *)extraout_RDX;
    SVar17 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pSVar7 = (System_String_o *)
               UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         (pUVar2,(System_Collections_IEnumerator_o *)pIVar14,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar18 = (MethodInfo *)0x0;
  pSVar7 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  (pSVar8->fields)._stringLength = 0;
  if (pSVar8 != (System_String_o *)0x0) {
    pSVar8[1].monitor = pIVar20;
    il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor,pIVar20);
    pSVar8[1].fields = SVar17;
    il2cpp_runtime_helper_022b4080(&pSVar8[1].fields,SVar17);
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar18;
  method_05 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar7,pMVar12);
  pSVar11 = (System_ArgumentException_o *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar7,(System_String_o *)pMVar18,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar13 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar18);
  pSVar15 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                      ((System_String_o *)pSVar11,data,in_RCX,(System_String_o *)pIVar13,method_05);
  if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pSVar7 = (System_String_o *)
             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar2,pSVar15,(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar16._stringLength = 0;
  SVar16._firstChar = 0;
  SVar16._6_2_ = 0;
  __this_01 = pSVar11;
  bVar3 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar11,(MethodInfo *)0x0);
  pSVar21 = "application/json";
  if ((char)bVar3 == '\0') {
    if (pSVar11 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      callback = pIVar13;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar18 = (MethodInfo *)0x0;
      pSVar7 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      (pSVar8->fields)._stringLength = 0;
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8[1].monitor = __this_01;
        il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor,__this_01);
        pSVar8[1].fields = SVar16;
        il2cpp_runtime_helper_022b4080(&pSVar8[1].fields,SVar16);
        pSVar8[2].monitor = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(&pSVar8[2].monitor,extraout_RDX_00);
        pSVar8[2].klass = (System_String_c *)pIVar13;
        il2cpp_runtime_helper_022b4080(pSVar8 + 2,pIVar13);
        return pSVar8;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar13 = callback;
      pMVar12 = pMVar18;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar7,pMVar12);
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar7,(System_String_o *)pMVar18,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar17 = data_00;
      pSVar15 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar7,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)callback,
                           (MethodInfo *)pIVar13);
      if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pSVar7 = (System_String_o *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar2,pSVar15,(MethodInfo *)0x0);
        return pSVar7;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_02 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar18 = (MethodInfo *)0x0;
      pSVar8 = __this_02;
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      (__this_02->fields)._stringLength = 0;
      if (__this_02 != (System_String_o *)0x0) {
        __this_02[1].monitor = pSVar7;
        il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,pSVar7);
        __this_02[1].fields = SVar17;
        il2cpp_runtime_helper_022b4080(&__this_02[1].fields,SVar17);
        __this_02[2].klass = (System_String_c *)extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(__this_02 + 2,extraout_RDX_01);
        return __this_02;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar12 = pMVar18;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar8,pMVar12);
      pIVar13 = (Il2CppClass *)
                CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                          (pSVar7,(System_String_o *)pMVar18,method_03);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar2 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      SVar19._stringLength = 0;
      SVar19._firstChar = 0;
      SVar19._6_2_ = 0;
      pIVar20 = pIVar14;
      System_Object___ctor(pIVar14,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar14[1].klass = 0;
      if (pIVar14 != (Il2CppObject *)0x0) {
        pIVar14[2].klass = pIVar13;
        il2cpp_runtime_helper_022b4080(pIVar14 + 2,pIVar13);
        pIVar20 = (Il2CppObject *)&pIVar14[2].monitor;
        pIVar14[2].monitor = (void *)extraout_RDX_02;
        SVar19 = extraout_RDX_02;
        il2cpp_runtime_helper_022b4080();
        if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pSVar7 = (System_String_o *)
                   UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             (pUVar2,(System_Collections_IEnumerator_o *)pIVar14,(MethodInfo *)0x0);
          return pSVar7;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      iVar5 = 0;
      pSVar7 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      (pSVar8->fields)._stringLength = 0;
      if (pSVar8 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
        (pSVar7->fields)._stringLength = iVar5;
        return extraout_RAX;
      }
      pSVar8[1].monitor = pIVar20;
      il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor,pIVar20);
      pSVar8[1].fields = SVar19;
      il2cpp_runtime_helper_022b4080(&pSVar8[1].fields,SVar19);
      return pSVar8;
    }
    index = 0;
    pSVar21 = pSVar11;
    if (0 < *(int *)&(pSVar11->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)pSVar11,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar3 != '\0') {
          uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
          pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this_01,pSVar7,(MethodInfo *)0x0);
          SVar16 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(pSVar11->fields)._className);
    }
  }
  return (System_String_o *)pSVar21;
}


// CustomLogic.CustomLogicServicesBuiltin$$CheckPermissions
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__CheckPermissions (System_String_o* service, const MethodInfo* method);
// 0x41e2ce0

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__CheckPermissions(System_String_o *service,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint16_t c;
  bool_conflict bVar2;
  int32_t iVar3;
  int32_t iVar4;
  bool_conflict extraout_EAX;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_Exception_o *__this_00;
  System_Uri_o *__this_01;
  System_Uri_o *__this_02;
  System_ArgumentException_o *pSVar8;
  MethodInfo *pMVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Coroutine_o *pUVar12;
  System_Collections_IEnumerator_o *pSVar13;
  System_ArgumentException_o *__this_03;
  System_String_Fields SVar14;
  System_String_o *__this_04;
  Il2CppClass *pIVar15;
  CustomLogic_UserMethod_o *in_RCX;
  Il2CppMethodPointer vtableDispatch;
  System_String_Fields extraout_RDX;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX_00;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_01;
  void *extraout_RDX_02;
  MethodInfo *method_03;
  int index;
  undefined4 uVar16;
  System_String_Fields SVar17;
  MethodInfo *pMVar18;
  void *pvVar19;
  long *method_04;
  Il2CppObject *pIVar20;
  MethodInfo *in_R8;
  MethodInfo *method_05;
  System_ArgumentException_o *pSVar21;
  System_String_o *pSStack_30;
  undefined8 uStack_28;
  System_String_o *pSStack_20;
  System_String_o *pSStack_18;
  
  pMVar18 = (MethodInfo *)&stack0xffffffffffffffe8;
  pSStack_18 = (System_String_o *)0x0;
  if (g_data_057ad787 == '\0') {
    pSStack_20 = (System_String_o *)0x41e2d04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad787 = '\x01';
  }
  pSStack_18 = (System_String_o *)0x0;
  pSStack_20 = (System_String_o *)0x41e2d1f;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffe8,0);
  pSStack_20 = (System_String_o *)0x41e2d24;
  bVar2 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase(pMVar18);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  pMVar18 = *(MethodInfo **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (pMVar18 != (MethodInfo *)0x0) {
    pSStack_20 = (System_String_o *)0x41e2d52;
    bVar2 = Settings_AdvancedSettings__TryGetServiceUrl
                      ((Settings_AdvancedSettings_o *)pMVar18,service,&stack0xffffffffffffffe8,
                       (MethodInfo *)0x0);
    return bVar2;
  }
  pSStack_20 = (System_String_o *)0x41e2d63;
  pSStack_30 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  uStack_28 = 0;
  method_04 = (long *)pMVar18;
  pSStack_20 = service;
  if (g_data_057ad789 == '\0') {
    method_04 = &TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad789 = '\x01';
  }
  pSStack_30 = (System_String_o *)0x0;
  bVar2 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)method_04);
  if ((char)bVar2 == '\0') {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
  }
  else {
    __this = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (__this == (Settings_AdvancedSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar2 = Settings_AdvancedSettings__TryGetSecretValue
                        (__this,(System_String_o *)pMVar18,&pSStack_30,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (bool_conflict)pSStack_30;
      }
    }
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No secret registered for key '");
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"'.");
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pMVar18,pSVar6,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  }
  System_Exception___ctor_3cf6120(__this_00,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSecret);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"..");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad78a = '\x01';
  }
  if (__this_00 == (System_Exception_o *)0x0) {
label_041e3080:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = System_String__EndsWith((System_String_o *)__this_00,"/",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_00 = (System_Exception_o *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_00,"/",(MethodInfo *)0x0);
    }
    __this_01 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
    System_Uri___ctor(__this_01,(System_String_o *)__this_00,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (__this_01 != (System_Uri_o *)0x0) {
        vtableDispatch = (__this_01->klass->vtable)._3_ToString.methodPtr;
        pMVar18 = (__this_01->klass->vtable)._3_ToString.method;
        __this_02 = __this_01;
label_041e3074:
        bVar2 = (*vtableDispatch)(__this_02,pMVar18);
        return bVar2;
      }
      goto label_041e3080;
    }
    if (pSVar5 == (System_String_o *)0x0) goto label_041e3080;
    bVar2 = System_String__Contains(pSVar5,"..",(MethodInfo *)0x0);
    if (((char)bVar2 == '\0') &&
       (bVar2 = System_String__Contains(pSVar5,"\\",(MethodInfo *)0x0), (char)bVar2 == '\0')) {
      if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_Uri__IsWellFormedUriString(pSVar5,1,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        __this_02 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
        in_RCX = (CustomLogic_UserMethod_o *)0x0;
        System_Uri___ctor_4872840(__this_02,__this_01,pSVar5,(MethodInfo *)0x0);
        if (((__this_02 != (System_Uri_o *)0x0) &&
            (pSVar5 = System_Uri__get_Host(__this_02,(MethodInfo *)0x0), __this_01 != (System_Uri_o *)0x0)) &&
           (pSVar6 = System_Uri__get_Host(__this_01,(MethodInfo *)0x0), pSVar5 != (System_String_o *)0x0)) {
          in_RCX = (CustomLogic_UserMethod_o *)0x0;
          bVar2 = System_String__Equals_3af4de0(pSVar5,pSVar6,5,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            pSVar5 = System_Uri__get_Scheme(__this_02,(MethodInfo *)0x0);
            pSVar6 = System_Uri__get_Scheme(__this_01,(MethodInfo *)0x0);
            bVar2 = System_String__op_Inequality(pSVar5,pSVar6,(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              iVar3 = System_Uri__get_Port(__this_02,(MethodInfo *)0x0);
              iVar4 = System_Uri__get_Port(__this_01,(MethodInfo *)0x0);
              if (iVar3 == iVar4) {
                vtableDispatch = (__this_02->klass->vtable)._3_ToString.methodPtr;
                pMVar18 = (__this_02->klass->vtable)._3_ToString.method;
                goto label_041e3074;
              }
            }
          }
          uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Route escapes the base service URL.");
          System_InvalidOperationException___ctor_3cb6af0
                    ((System_InvalidOperationException_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
          goto label_041e30e7;
        }
        goto label_041e3080;
      }
    }
  }
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_3c12490(pSVar8,pSVar5,(MethodInfo *)0x0);
label_041e30e7:
  pMVar9 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetEndpoint);
  il2cpp_runtime_helper_022b2b10();
  pMVar18 = pMVar9;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe((System_String_o *)pSVar8,pMVar18);
  pIVar10 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar5,(System_String_o *)pMVar9,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar17._stringLength = 0;
  SVar17._firstChar = 0;
  SVar17._6_2_ = 0;
  pIVar20 = pIVar11;
  System_Object___ctor(pIVar11,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar11[1].klass = 0;
  if (pIVar11 != (Il2CppObject *)0x0) {
    pIVar11[2].klass = pIVar10;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,pIVar10);
    pIVar20 = (Il2CppObject *)&pIVar11[2].monitor;
    pIVar11[2].monitor = (void *)extraout_RDX;
    SVar17 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          (pUVar1,(System_Collections_IEnumerator_o *)pIVar11,(MethodInfo *)0x0);
      return (bool_conflict)pUVar12;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar18 = (MethodInfo *)0x0;
  pSVar5 = pSVar6;
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  (pSVar6->fields)._stringLength = 0;
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6[1].monitor = pIVar20;
    il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,pIVar20);
    pSVar6[1].fields = SVar17;
    il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar17);
    return (bool_conflict)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar18;
  method_05 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar5,pMVar9);
  pSVar8 = (System_ArgumentException_o *)
           CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar5,(System_String_o *)pMVar18,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar10 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar18);
  pSVar13 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                      ((System_String_o *)pSVar8,data,in_RCX,(System_String_o *)pIVar10,method_05);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar13,(MethodInfo *)0x0);
    return (bool_conflict)pUVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar14._stringLength = 0;
  SVar14._firstChar = 0;
  SVar14._6_2_ = 0;
  __this_03 = pSVar8;
  bVar2 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar8,(MethodInfo *)0x0);
  pSVar21 = "application/json";
  if ((char)bVar2 == '\0') {
    if (pSVar8 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar15 = pIVar10;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar18 = (MethodInfo *)0x0;
      pSVar5 = pSVar6;
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      (pSVar6->fields)._stringLength = 0;
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6[1].monitor = __this_03;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,__this_03);
        pSVar6[1].fields = SVar14;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar14);
        pSVar6[2].monitor = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(&pSVar6[2].monitor,extraout_RDX_00);
        pSVar6[2].klass = (System_String_c *)pIVar10;
        il2cpp_runtime_helper_022b4080(pSVar6 + 2,pIVar10);
        return (bool_conflict)pSVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar10 = pIVar15;
      pMVar9 = pMVar18;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar5,pMVar9);
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar5,(System_String_o *)pMVar18,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar17 = data_00;
      pSVar13 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar5,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pIVar15,
                           (MethodInfo *)pIVar10);
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar13,(MethodInfo *)0x0);
        return (bool_conflict)pUVar12;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_04 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar18 = (MethodInfo *)0x0;
      pSVar6 = __this_04;
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      (__this_04->fields)._stringLength = 0;
      if (__this_04 != (System_String_o *)0x0) {
        __this_04[1].monitor = pSVar5;
        il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,pSVar5);
        __this_04[1].fields = SVar17;
        il2cpp_runtime_helper_022b4080(&__this_04[1].fields,SVar17);
        __this_04[2].klass = (System_String_c *)extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(__this_04 + 2,extraout_RDX_01);
        return (bool_conflict)__this_04;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar9 = pMVar18;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar6,pMVar9);
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar5,(System_String_o *)pMVar18,method_03);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      pvVar19 = (void *)0x0;
      pIVar10 = pIVar15;
      System_Object___ctor((Il2CppObject *)pIVar15,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar15->_1).name = 0;
      if (pIVar15 != (Il2CppClass *)0x0) {
        (pIVar15->_1).byval_arg.data = pSVar5;
        il2cpp_runtime_helper_022b4080(&(pIVar15->_1).byval_arg,pSVar5);
        pIVar10 = (Il2CppClass *)&(pIVar15->_1).byval_arg.bits;
        *(void **)&(pIVar15->_1).byval_arg.bits = extraout_RDX_02;
        pvVar19 = extraout_RDX_02;
        il2cpp_runtime_helper_022b4080();
        if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (pUVar1,(System_Collections_IEnumerator_o *)pIVar15,(MethodInfo *)0x0);
          return (bool_conflict)pUVar12;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      uVar16 = 0;
      pIVar20 = pIVar11;
      System_Object___ctor(pIVar11,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar11[1].klass = 0;
      if (pIVar11 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(pIVar20,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar20[1].klass = uVar16;
        return extraout_EAX;
      }
      pIVar11[2].klass = pIVar10;
      il2cpp_runtime_helper_022b4080(pIVar11 + 2,pIVar10);
      pIVar11[2].monitor = pvVar19;
      il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor,pvVar19);
      return (bool_conflict)pIVar11;
    }
    index = 0;
    pSVar21 = pSVar8;
    if (0 < *(int *)&(pSVar8->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)pSVar8,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar2 != '\0') {
          uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_03 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this_03,pSVar5,(MethodInfo *)0x0);
          SVar14 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(pSVar8->fields)._className);
    }
  }
  return (bool_conflict)pSVar21;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetSecret
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetSecret (System_String_o* key, const MethodInfo* method);
// 0x41e2d70

System_String_o * CustomLogic_CustomLogicServicesBuiltin__GetSecret(System_String_o *key,MethodInfo *method)

{
  Settings_AdvancedSettings_o *__this;
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint16_t c;
  bool_conflict bVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_Exception_o *__this_00;
  System_Uri_o *__this_01;
  System_Uri_o *__this_02;
  System_ArgumentException_o *pSVar8;
  MethodInfo *pMVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *pIVar11;
  System_Collections_IEnumerator_o *pSVar12;
  System_ArgumentException_o *__this_03;
  System_String_Fields SVar13;
  System_String_o *__this_04;
  System_String_o *extraout_RAX;
  CustomLogic_UserMethod_o *in_RCX;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *callback;
  System_String_Fields extraout_RDX;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX_00;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_01;
  System_String_Fields extraout_RDX_02;
  MethodInfo *method_03;
  int index;
  System_String_Fields SVar14;
  MethodInfo *pMVar15;
  System_String_Fields SVar16;
  long *method_04;
  Il2CppObject *pIVar17;
  MethodInfo *in_R8;
  MethodInfo *method_05;
  System_ArgumentException_o *pSVar18;
  System_String_o *pSStack_18;
  
  method_04 = (long *)key;
  if (g_data_057ad789 == '\0') {
    method_04 = &TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad789 = '\x01';
  }
  pSStack_18 = (System_String_o *)0x0;
  bVar2 = CustomLogic_CustomLogicServicesBuiltin__IsAllowedToRunBase((MethodInfo *)method_04);
  if ((char)bVar2 == '\0') {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Not allowed to access secrets. Requires being the master client, running locally loaded logic, with services enabled in Advanced Configuration.");
  }
  else {
    __this = *(Settings_AdvancedSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
    if (__this == (Settings_AdvancedSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar2 = Settings_AdvancedSettings__TryGetSecretValue(__this,key,&pSStack_18,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return pSStack_18;
      }
    }
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No secret registered for key '");
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"'.");
    in_RCX = (CustomLogic_UserMethod_o *)0x0;
    pSVar5 = System_String__Concat_3af7150(pSVar5,key,pSVar6,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  }
  System_Exception___ctor_3cf6120(__this_00,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSecret);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"..");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad78a = '\x01';
  }
  if (__this_00 == (System_Exception_o *)0x0) {
label_041e3080:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = System_String__EndsWith((System_String_o *)__this_00,"/",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_00 = (System_Exception_o *)
                  System_String__Concat_3ae5ba0((System_String_o *)__this_00,"/",(MethodInfo *)0x0);
    }
    __this_01 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
    System_Uri___ctor(__this_01,(System_String_o *)__this_00,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (__this_01 != (System_Uri_o *)0x0) {
        vtableDispatch = (__this_01->klass->vtable)._3_ToString.methodPtr;
        pMVar15 = (__this_01->klass->vtable)._3_ToString.method;
        __this_02 = __this_01;
label_041e3074:
        pSVar5 = (System_String_o *)(*vtableDispatch)(__this_02,pMVar15);
        return pSVar5;
      }
      goto label_041e3080;
    }
    if (pSVar5 == (System_String_o *)0x0) goto label_041e3080;
    bVar2 = System_String__Contains(pSVar5,"..",(MethodInfo *)0x0);
    if (((char)bVar2 == '\0') &&
       (bVar2 = System_String__Contains(pSVar5,"\\",(MethodInfo *)0x0), (char)bVar2 == '\0')) {
      if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_Uri__IsWellFormedUriString(pSVar5,1,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        __this_02 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
        in_RCX = (CustomLogic_UserMethod_o *)0x0;
        System_Uri___ctor_4872840(__this_02,__this_01,pSVar5,(MethodInfo *)0x0);
        if (((__this_02 != (System_Uri_o *)0x0) &&
            (pSVar5 = System_Uri__get_Host(__this_02,(MethodInfo *)0x0), __this_01 != (System_Uri_o *)0x0)) &&
           (pSVar6 = System_Uri__get_Host(__this_01,(MethodInfo *)0x0), pSVar5 != (System_String_o *)0x0)) {
          in_RCX = (CustomLogic_UserMethod_o *)0x0;
          bVar2 = System_String__Equals_3af4de0(pSVar5,pSVar6,5,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            pSVar5 = System_Uri__get_Scheme(__this_02,(MethodInfo *)0x0);
            pSVar6 = System_Uri__get_Scheme(__this_01,(MethodInfo *)0x0);
            bVar2 = System_String__op_Inequality(pSVar5,pSVar6,(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              iVar3 = System_Uri__get_Port(__this_02,(MethodInfo *)0x0);
              iVar4 = System_Uri__get_Port(__this_01,(MethodInfo *)0x0);
              if (iVar3 == iVar4) {
                vtableDispatch = (__this_02->klass->vtable)._3_ToString.methodPtr;
                pMVar15 = (__this_02->klass->vtable)._3_ToString.method;
                goto label_041e3074;
              }
            }
          }
          uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Route escapes the base service URL.");
          System_InvalidOperationException___ctor_3cb6af0
                    ((System_InvalidOperationException_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
          goto label_041e30e7;
        }
        goto label_041e3080;
      }
    }
  }
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_3c12490(pSVar8,pSVar5,(MethodInfo *)0x0);
label_041e30e7:
  pMVar9 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetEndpoint);
  il2cpp_runtime_helper_022b2b10();
  pMVar15 = pMVar9;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe((System_String_o *)pSVar8,pMVar15);
  pIVar10 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar5,(System_String_o *)pMVar9,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar14._stringLength = 0;
  SVar14._firstChar = 0;
  SVar14._6_2_ = 0;
  pIVar17 = pIVar11;
  System_Object___ctor(pIVar11,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar11[1].klass = 0;
  if (pIVar11 != (Il2CppObject *)0x0) {
    pIVar11[2].klass = pIVar10;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,pIVar10);
    pIVar17 = (Il2CppObject *)&pIVar11[2].monitor;
    pIVar11[2].monitor = (void *)extraout_RDX;
    SVar14 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pSVar5 = (System_String_o *)
               UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         (pUVar1,(System_Collections_IEnumerator_o *)pIVar11,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar15 = (MethodInfo *)0x0;
  pSVar5 = pSVar6;
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  (pSVar6->fields)._stringLength = 0;
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6[1].monitor = pIVar17;
    il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,pIVar17);
    pSVar6[1].fields = SVar14;
    il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar14);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar15;
  method_05 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar5,pMVar9);
  pSVar8 = (System_ArgumentException_o *)
           CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar5,(System_String_o *)pMVar15,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar10 = (Il2CppClass *)
            CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar15);
  pSVar12 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                      ((System_String_o *)pSVar8,data,in_RCX,(System_String_o *)pIVar10,method_05);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pSVar5 = (System_String_o *)
             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar12,(MethodInfo *)0x0);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar13._stringLength = 0;
  SVar13._firstChar = 0;
  SVar13._6_2_ = 0;
  __this_03 = pSVar8;
  bVar2 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar8,(MethodInfo *)0x0);
  pSVar18 = "application/json";
  if ((char)bVar2 == '\0') {
    if (pSVar8 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      callback = pIVar10;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar15 = (MethodInfo *)0x0;
      pSVar5 = pSVar6;
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      (pSVar6->fields)._stringLength = 0;
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6[1].monitor = __this_03;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,__this_03);
        pSVar6[1].fields = SVar13;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar13);
        pSVar6[2].monitor = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(&pSVar6[2].monitor,extraout_RDX_00);
        pSVar6[2].klass = (System_String_c *)pIVar10;
        il2cpp_runtime_helper_022b4080(pSVar6 + 2,pIVar10);
        return pSVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar10 = callback;
      pMVar9 = pMVar15;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar5,pMVar9);
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar5,(System_String_o *)pMVar15,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar14 = data_00;
      pSVar12 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar5,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)callback,
                           (MethodInfo *)pIVar10);
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pSVar5 = (System_String_o *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar12,(MethodInfo *)0x0);
        return pSVar5;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_04 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar15 = (MethodInfo *)0x0;
      pSVar6 = __this_04;
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      (__this_04->fields)._stringLength = 0;
      if (__this_04 != (System_String_o *)0x0) {
        __this_04[1].monitor = pSVar5;
        il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,pSVar5);
        __this_04[1].fields = SVar14;
        il2cpp_runtime_helper_022b4080(&__this_04[1].fields,SVar14);
        __this_04[2].klass = (System_String_c *)extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(__this_04 + 2,extraout_RDX_01);
        return __this_04;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar9 = pMVar15;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar6,pMVar9);
      pIVar10 = (Il2CppClass *)
                CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                          (pSVar5,(System_String_o *)pMVar15,method_03);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      SVar16._stringLength = 0;
      SVar16._firstChar = 0;
      SVar16._6_2_ = 0;
      pIVar17 = pIVar11;
      System_Object___ctor(pIVar11,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar11[1].klass = 0;
      if (pIVar11 != (Il2CppObject *)0x0) {
        pIVar11[2].klass = pIVar10;
        il2cpp_runtime_helper_022b4080(pIVar11 + 2,pIVar10);
        pIVar17 = (Il2CppObject *)&pIVar11[2].monitor;
        pIVar11[2].monitor = (void *)extraout_RDX_02;
        SVar16 = extraout_RDX_02;
        il2cpp_runtime_helper_022b4080();
        if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pSVar5 = (System_String_o *)
                   UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             (pUVar1,(System_Collections_IEnumerator_o *)pIVar11,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      iVar3 = 0;
      pSVar5 = pSVar6;
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      (pSVar6->fields)._stringLength = 0;
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6[1].monitor = pIVar17;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,pIVar17);
        pSVar6[1].fields = SVar16;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar16);
        return pSVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      (pSVar5->fields)._stringLength = iVar3;
      return extraout_RAX;
    }
    index = 0;
    pSVar18 = pSVar8;
    if (0 < *(int *)&(pSVar8->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)pSVar8,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar2 != '\0') {
          uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_03 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this_03,pSVar5,(MethodInfo *)0x0);
          SVar13 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(pSVar8->fields)._className);
    }
  }
  return (System_String_o *)pSVar18;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetEndpoint
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetEndpoint (System_String_o* baseUrl, System_String_o* route, const MethodInfo* method);
// 0x41e2e80

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
          (System_String_o *baseUrl,System_String_o *route,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint16_t c;
  bool_conflict bVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_Uri_o *__this;
  System_Uri_o *__this_00;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *pSVar7;
  MethodInfo *pMVar8;
  Il2CppClass *pIVar9;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  System_Collections_IEnumerator_o *pSVar12;
  System_ArgumentException_o *__this_01;
  System_String_Fields SVar13;
  System_String_o *__this_02;
  System_String_o *extraout_RAX;
  CustomLogic_UserMethod_o *in_RCX;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *callback;
  System_String_Fields extraout_RDX;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX_00;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_01;
  System_String_Fields extraout_RDX_02;
  MethodInfo *method_03;
  int index;
  System_String_Fields SVar14;
  MethodInfo *pMVar15;
  System_String_Fields SVar16;
  Il2CppObject *pIVar17;
  MethodInfo *in_R8;
  MethodInfo *method_04;
  System_ArgumentException_o *pSVar18;
  
  if (g_data_057ad78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"..");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad78a = '\x01';
  }
  if (baseUrl == (System_String_o *)0x0) {
label_041e3080:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = System_String__EndsWith(baseUrl,"/",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      baseUrl = System_String__Concat_3ae5ba0(baseUrl,"/",(MethodInfo *)0x0);
    }
    __this = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
    System_Uri___ctor(__this,baseUrl,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrWhiteSpace(route,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (__this != (System_Uri_o *)0x0) {
        vtableDispatch = (__this->klass->vtable)._3_ToString.methodPtr;
        pMVar15 = (__this->klass->vtable)._3_ToString.method;
        __this_00 = __this;
label_041e3074:
        pSVar5 = (System_String_o *)(*vtableDispatch)(__this_00,pMVar15);
        return pSVar5;
      }
      goto label_041e3080;
    }
    if (route == (System_String_o *)0x0) goto label_041e3080;
    bVar2 = System_String__Contains(route,"..",(MethodInfo *)0x0);
    if (((char)bVar2 == '\0') &&
       (bVar2 = System_String__Contains(route,"\\",(MethodInfo *)0x0), (char)bVar2 == '\0')) {
      if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_Uri__IsWellFormedUriString(route,1,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        __this_00 = (System_Uri_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Uri);
        in_RCX = (CustomLogic_UserMethod_o *)0x0;
        System_Uri___ctor_4872840(__this_00,__this,route,(MethodInfo *)0x0);
        if (((__this_00 != (System_Uri_o *)0x0) &&
            (pSVar5 = System_Uri__get_Host(__this_00,(MethodInfo *)0x0), __this != (System_Uri_o *)0x0)) &&
           (pSVar11 = System_Uri__get_Host(__this,(MethodInfo *)0x0), pSVar5 != (System_String_o *)0x0)) {
          in_RCX = (CustomLogic_UserMethod_o *)0x0;
          bVar2 = System_String__Equals_3af4de0(pSVar5,pSVar11,5,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            pSVar5 = System_Uri__get_Scheme(__this_00,(MethodInfo *)0x0);
            pSVar11 = System_Uri__get_Scheme(__this,(MethodInfo *)0x0);
            bVar2 = System_String__op_Inequality(pSVar5,pSVar11,(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              iVar3 = System_Uri__get_Port(__this_00,(MethodInfo *)0x0);
              iVar4 = System_Uri__get_Port(__this,(MethodInfo *)0x0);
              if (iVar3 == iVar4) {
                vtableDispatch = (__this_00->klass->vtable)._3_ToString.methodPtr;
                pMVar15 = (__this_00->klass->vtable)._3_ToString.method;
                goto label_041e3074;
              }
            }
          }
          uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
          pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Route escapes the base service URL.");
          System_InvalidOperationException___ctor_3cb6af0
                    ((System_InvalidOperationException_o *)pSVar7,pSVar5,(MethodInfo *)0x0);
          goto label_041e30e7;
        }
        goto label_041e3080;
      }
    }
  }
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid route: must be a relative path without '..' or backslashes.");
  System_ArgumentException___ctor_3c12490(pSVar7,pSVar5,(MethodInfo *)0x0);
label_041e30e7:
  pMVar8 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetEndpoint);
  il2cpp_runtime_helper_022b2b10();
  pMVar15 = pMVar8;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe((System_String_o *)pSVar7,pMVar15);
  pIVar9 = (Il2CppClass *)
           CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar5,(System_String_o *)pMVar8,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar14._stringLength = 0;
  SVar14._firstChar = 0;
  SVar14._6_2_ = 0;
  pIVar17 = pIVar10;
  System_Object___ctor(pIVar10,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar10[1].klass = 0;
  if (pIVar10 != (Il2CppObject *)0x0) {
    pIVar10[2].klass = pIVar9;
    il2cpp_runtime_helper_022b4080(pIVar10 + 2,pIVar9);
    pIVar17 = (Il2CppObject *)&pIVar10[2].monitor;
    pIVar10[2].monitor = (void *)extraout_RDX;
    SVar14 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pSVar5 = (System_String_o *)
               UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         (pUVar1,(System_Collections_IEnumerator_o *)pIVar10,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar15 = (MethodInfo *)0x0;
  pSVar5 = pSVar11;
  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  (pSVar11->fields)._stringLength = 0;
  if (pSVar11 != (System_String_o *)0x0) {
    pSVar11[1].monitor = pIVar17;
    il2cpp_runtime_helper_022b4080(&pSVar11[1].monitor,pIVar17);
    pSVar11[1].fields = SVar14;
    il2cpp_runtime_helper_022b4080(&pSVar11[1].fields,SVar14);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar15;
  method_04 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar5,pMVar8);
  pSVar7 = (System_ArgumentException_o *)
           CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar5,(System_String_o *)pMVar15,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar9 = (Il2CppClass *)
           CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar15);
  pSVar12 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                      ((System_String_o *)pSVar7,data,in_RCX,(System_String_o *)pIVar9,method_04);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pSVar5 = (System_String_o *)
             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar12,(MethodInfo *)0x0);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar13._stringLength = 0;
  SVar13._firstChar = 0;
  SVar13._6_2_ = 0;
  __this_01 = pSVar7;
  bVar2 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar7,(MethodInfo *)0x0);
  pSVar18 = "application/json";
  if ((char)bVar2 == '\0') {
    if (pSVar7 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      callback = pIVar9;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar15 = (MethodInfo *)0x0;
      pSVar5 = pSVar11;
      System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      (pSVar11->fields)._stringLength = 0;
      if (pSVar11 != (System_String_o *)0x0) {
        pSVar11[1].monitor = __this_01;
        il2cpp_runtime_helper_022b4080(&pSVar11[1].monitor,__this_01);
        pSVar11[1].fields = SVar13;
        il2cpp_runtime_helper_022b4080(&pSVar11[1].fields,SVar13);
        pSVar11[2].monitor = extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(&pSVar11[2].monitor,extraout_RDX_00);
        pSVar11[2].klass = (System_String_c *)pIVar9;
        il2cpp_runtime_helper_022b4080(pSVar11 + 2,pIVar9);
        return pSVar11;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar9 = callback;
      pMVar8 = pMVar15;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar5,pMVar8);
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar5,(System_String_o *)pMVar15,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar14 = data_00;
      pSVar12 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar5,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)callback,
                           (MethodInfo *)pIVar9);
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pSVar5 = (System_String_o *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar12,(MethodInfo *)0x0);
        return pSVar5;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_02 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar15 = (MethodInfo *)0x0;
      pSVar11 = __this_02;
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      (__this_02->fields)._stringLength = 0;
      if (__this_02 != (System_String_o *)0x0) {
        __this_02[1].monitor = pSVar5;
        il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,pSVar5);
        __this_02[1].fields = SVar14;
        il2cpp_runtime_helper_022b4080(&__this_02[1].fields,SVar14);
        __this_02[2].klass = (System_String_c *)extraout_RDX_01;
        il2cpp_runtime_helper_022b4080(__this_02 + 2,extraout_RDX_01);
        return __this_02;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar8 = pMVar15;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar11,pMVar8);
      pIVar9 = (Il2CppClass *)
               CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar5,(System_String_o *)pMVar15,method_03);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      SVar16._stringLength = 0;
      SVar16._firstChar = 0;
      SVar16._6_2_ = 0;
      pIVar17 = pIVar10;
      System_Object___ctor(pIVar10,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar10[1].klass = 0;
      if (pIVar10 != (Il2CppObject *)0x0) {
        pIVar10[2].klass = pIVar9;
        il2cpp_runtime_helper_022b4080(pIVar10 + 2,pIVar9);
        pIVar17 = (Il2CppObject *)&pIVar10[2].monitor;
        pIVar10[2].monitor = (void *)extraout_RDX_02;
        SVar16 = extraout_RDX_02;
        il2cpp_runtime_helper_022b4080();
        if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pSVar5 = (System_String_o *)
                   UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             (pUVar1,(System_Collections_IEnumerator_o *)pIVar10,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      iVar3 = 0;
      pSVar5 = pSVar11;
      System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      (pSVar11->fields)._stringLength = 0;
      if (pSVar11 != (System_String_o *)0x0) {
        pSVar11[1].monitor = pIVar17;
        il2cpp_runtime_helper_022b4080(&pSVar11[1].monitor,pIVar17);
        pSVar11[1].fields = SVar16;
        il2cpp_runtime_helper_022b4080(&pSVar11[1].fields,SVar16);
        return pSVar11;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      (pSVar5->fields)._stringLength = iVar3;
      return extraout_RAX;
    }
    index = 0;
    pSVar18 = pSVar7;
    if (0 < *(int *)&(pSVar7->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)pSVar7,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar2 != '\0') {
          uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
          pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this_01,pSVar5,(MethodInfo *)0x0);
          SVar13 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(pSVar7->fields)._className);
    }
  }
  return (System_String_o *)pSVar18;
}


// CustomLogic.CustomLogicServicesBuiltin$$Get
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Get (System_String_o* service, System_String_o* route, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x41e3100

void CustomLogic_CustomLogicServicesBuiltin__Get
               (System_String_o *service,System_String_o *route,CustomLogic_UserMethod_o *callback,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint16_t c;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_ArgumentException_o *uri;
  System_Collections_IEnumerator_o *pSVar7;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  System_String_Fields SVar9;
  System_String_o *__this_00;
  Il2CppClass *pIVar10;
  MethodInfo *method_00;
  System_String_o *data;
  MethodInfo *method_01;
  void *extraout_RDX;
  System_String_Fields data_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_00;
  void *extraout_RDX_01;
  MethodInfo *method_03;
  int index;
  undefined4 uVar11;
  System_String_Fields SVar12;
  MethodInfo *pMVar13;
  MethodInfo *pMVar14;
  void *pvVar15;
  Il2CppObject *pIVar16;
  MethodInfo *in_R8;
  MethodInfo *method_04;
  
  pMVar13 = (MethodInfo *)route;
  if (g_data_057ad78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78b = '\x01';
  }
  pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,pMVar13);
  pIVar4 = (Il2CppClass *)CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar3,route,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  SVar12._stringLength = 0;
  SVar12._firstChar = 0;
  SVar12._6_2_ = 0;
  pIVar16 = pIVar5;
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar5[1].klass = 0;
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(pIVar5 + 2,pIVar4);
    pIVar16 = (Il2CppObject *)&pIVar5[2].monitor;
    pIVar5[2].monitor = callback;
    il2cpp_runtime_helper_022b4080();
    SVar12 = (System_String_Fields)callback;
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar1,(System_Collections_IEnumerator_o *)pIVar5,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar13 = (MethodInfo *)0x0;
  pSVar3 = pSVar6;
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  (pSVar6->fields)._stringLength = 0;
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6[1].monitor = pIVar16;
    il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,pIVar16);
    pSVar6[1].fields = SVar12;
    il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar12);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar13;
  method_04 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar3,pMVar14);
  uri = (System_ArgumentException_o *)
        CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar3,(System_String_o *)pMVar13,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar4 = (Il2CppClass *)
           CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar13);
  pSVar7 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                     ((System_String_o *)uri,data,(CustomLogic_UserMethod_o *)method,(System_String_o *)pIVar4
                      ,method_04);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar9._stringLength = 0;
  SVar9._firstChar = 0;
  SVar9._6_2_ = 0;
  __this = uri;
  bVar2 = System_String__IsNullOrWhiteSpace((System_String_o *)uri,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (uri == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar10 = pIVar4;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar13 = (MethodInfo *)0x0;
      pSVar3 = pSVar6;
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      (pSVar6->fields)._stringLength = 0;
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6[1].monitor = __this;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,__this);
        pSVar6[1].fields = SVar9;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar9);
        pSVar6[2].monitor = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&pSVar6[2].monitor,extraout_RDX);
        pSVar6[2].klass = (System_String_c *)pIVar4;
        il2cpp_runtime_helper_022b4080(pSVar6 + 2,pIVar4);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar4 = pIVar10;
      pMVar14 = pMVar13;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar3,pMVar14);
      pSVar3 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar3,(System_String_o *)pMVar13,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar12 = data_00;
      pSVar7 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                         (pSVar3,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pIVar10,
                          (MethodInfo *)pIVar4);
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar7,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar13 = (MethodInfo *)0x0;
      pSVar6 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._stringLength = 0;
      if (__this_00 != (System_String_o *)0x0) {
        __this_00[1].monitor = pSVar3;
        il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pSVar3);
        __this_00[1].fields = SVar12;
        il2cpp_runtime_helper_022b4080(&__this_00[1].fields,SVar12);
        __this_00[2].klass = (System_String_c *)extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(__this_00 + 2,extraout_RDX_00);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar14 = pMVar13;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar6,pMVar14);
      pSVar3 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar3,(System_String_o *)pMVar13,method_03);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      pvVar15 = (void *)0x0;
      pIVar4 = pIVar10;
      System_Object___ctor((Il2CppObject *)pIVar10,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar10->_1).name = 0;
      if (pIVar10 != (Il2CppClass *)0x0) {
        (pIVar10->_1).byval_arg.data = pSVar3;
        il2cpp_runtime_helper_022b4080(&(pIVar10->_1).byval_arg,pSVar3);
        pIVar4 = (Il2CppClass *)&(pIVar10->_1).byval_arg.bits;
        *(void **)&(pIVar10->_1).byval_arg.bits = extraout_RDX_01;
        pvVar15 = extraout_RDX_01;
        il2cpp_runtime_helper_022b4080();
        if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    (pUVar1,(System_Collections_IEnumerator_o *)pIVar10,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      uVar11 = 0;
      pIVar16 = pIVar5;
      System_Object___ctor(pIVar5,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar5[1].klass = 0;
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar5[2].klass = pIVar4;
        il2cpp_runtime_helper_022b4080(pIVar5 + 2,pIVar4);
        pIVar5[2].monitor = pvVar15;
        il2cpp_runtime_helper_022b4080(&pIVar5[2].monitor,pvVar15);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar16,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar16[1].klass = uVar11;
      return;
    }
    index = 0;
    if (0 < *(int *)&(uri->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)uri,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar2 != '\0') {
          uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
          pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this,pSVar3,(MethodInfo *)0x0);
          SVar9 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(uri->fields)._className);
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$Post
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Post (System_String_o* service, System_String_o* route, System_String_o* data, CustomLogic_UserMethod_o* callback, System_String_o* format, const MethodInfo* method);
// 0x41e32a0

void CustomLogic_CustomLogicServicesBuiltin__Post
               (System_String_o *service,System_String_o *route,System_String_o *data,
               CustomLogic_UserMethod_o *callback,System_String_o *format,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint16_t c;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_ArgumentException_o *uri;
  Il2CppClass *pIVar4;
  System_Collections_IEnumerator_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this;
  System_String_Fields SVar7;
  System_String_o *pSVar8;
  System_String_o *__this_00;
  Il2CppClass *pIVar9;
  Il2CppObject *__this_01;
  MethodInfo *method_00;
  void *extraout_RDX;
  System_String_Fields data_00;
  MethodInfo *method_01;
  Il2CppClass *extraout_RDX_00;
  void *extraout_RDX_01;
  MethodInfo *method_02;
  int index;
  undefined4 uVar10;
  MethodInfo *pMVar11;
  MethodInfo *pMVar12;
  void *pvVar13;
  Il2CppObject *__this_02;
  
  pMVar11 = (MethodInfo *)route;
  pMVar12 = (MethodInfo *)format;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,pMVar11);
  uri = (System_ArgumentException_o *)
        CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar3,route,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar4 = (Il2CppClass *)CustomLogic_CustomLogicServicesBuiltin__GetContentType(format,(MethodInfo *)route);
  pSVar5 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                     ((System_String_o *)uri,data,callback,(System_String_o *)pIVar4,pMVar12);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar7._stringLength = 0;
  SVar7._firstChar = 0;
  SVar7._6_2_ = 0;
  __this = uri;
  bVar2 = System_String__IsNullOrWhiteSpace((System_String_o *)uri,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (uri == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar9 = pIVar4;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar11 = (MethodInfo *)0x0;
      pSVar3 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      (pSVar8->fields)._stringLength = 0;
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8[1].monitor = __this;
        il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor,__this);
        pSVar8[1].fields = SVar7;
        il2cpp_runtime_helper_022b4080(&pSVar8[1].fields,SVar7);
        pSVar8[2].monitor = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&pSVar8[2].monitor,extraout_RDX);
        pSVar8[2].klass = (System_String_c *)pIVar4;
        il2cpp_runtime_helper_022b4080(pSVar8 + 2,pIVar4);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar4 = pIVar9;
      pMVar12 = pMVar11;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar3,pMVar12);
      pSVar3 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar3,(System_String_o *)pMVar11,method_01);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar7 = data_00;
      pSVar5 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                         (pSVar3,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pIVar9,
                          (MethodInfo *)pIVar4);
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar5,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar11 = (MethodInfo *)0x0;
      pSVar8 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._stringLength = 0;
      if (__this_00 != (System_String_o *)0x0) {
        __this_00[1].monitor = pSVar3;
        il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pSVar3);
        __this_00[1].fields = SVar7;
        il2cpp_runtime_helper_022b4080(&__this_00[1].fields,SVar7);
        __this_00[2].klass = (System_String_c *)extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(__this_00 + 2,extraout_RDX_00);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar12 = pMVar11;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar8,pMVar12);
      pSVar3 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar3,(System_String_o *)pMVar11,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      pvVar13 = (void *)0x0;
      pIVar4 = pIVar9;
      System_Object___ctor((Il2CppObject *)pIVar9,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar9->_1).name = 0;
      if (pIVar9 != (Il2CppClass *)0x0) {
        (pIVar9->_1).byval_arg.data = pSVar3;
        il2cpp_runtime_helper_022b4080(&(pIVar9->_1).byval_arg,pSVar3);
        pIVar4 = (Il2CppClass *)&(pIVar9->_1).byval_arg.bits;
        *(void **)&(pIVar9->_1).byval_arg.bits = extraout_RDX_01;
        pvVar13 = extraout_RDX_01;
        il2cpp_runtime_helper_022b4080();
        if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    (pUVar1,(System_Collections_IEnumerator_o *)pIVar9,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      uVar10 = 0;
      __this_02 = __this_01;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].klass = pIVar4;
        il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar4);
        __this_01[2].monitor = pvVar13;
        il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pvVar13);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&__this_02[1].klass = uVar10;
      return;
    }
    index = 0;
    if (0 < *(int *)&(uri->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)uri,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar2 != '\0') {
          uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
          pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this,pSVar3,(MethodInfo *)0x0);
          SVar7 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(uri->fields)._className);
    }
  }
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetContentType
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetContentType (System_String_o* format, const MethodInfo* method);
// 0x41e3350

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__GetContentType(System_String_o *format,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint16_t c;
  bool_conflict bVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this;
  System_String_o *pSVar4;
  System_String_Fields SVar5;
  System_String_o *pSVar6;
  System_Collections_IEnumerator_o *routine;
  System_String_o *__this_00;
  Il2CppClass *pIVar7;
  Il2CppObject *__this_01;
  System_String_o *extraout_RAX;
  Il2CppClass *in_RCX;
  Il2CppClass *method_00;
  void *extraout_RDX;
  System_String_Fields data;
  MethodInfo *method_01;
  Il2CppClass *extraout_RDX_00;
  System_String_Fields extraout_RDX_01;
  MethodInfo *method_02;
  int index;
  int32_t iVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  System_String_Fields SVar11;
  Il2CppObject *pIVar12;
  
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar5._stringLength = 0;
  SVar5._firstChar = 0;
  SVar5._6_2_ = 0;
  __this = (System_ArgumentException_o *)format;
  bVar2 = System_String__IsNullOrWhiteSpace(format,(MethodInfo *)0x0);
  pSVar4 = "application/json";
  if ((char)bVar2 == '\0') {
    if (format == (System_String_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar7 = in_RCX;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar9 = (MethodInfo *)0x0;
      pSVar4 = pSVar6;
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      (pSVar6->fields)._stringLength = 0;
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6[1].monitor = __this;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,__this);
        pSVar6[1].fields = SVar5;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar5);
        pSVar6[2].monitor = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&pSVar6[2].monitor,extraout_RDX);
        pSVar6[2].klass = (System_String_c *)in_RCX;
        il2cpp_runtime_helper_022b4080(pSVar6 + 2,in_RCX);
        return pSVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      method_00 = pIVar7;
      pMVar10 = pMVar9;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar4 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar4,pMVar10);
      pSVar4 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar4,(System_String_o *)pMVar9,method_01)
      ;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar5 = data;
      routine = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                          (pSVar4,(System_String_o *)data,(CustomLogic_UserMethod_o *)pIVar7,
                           (MethodInfo *)method_00);
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pSVar4 = (System_String_o *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,routine,(MethodInfo *)0x0);
        return pSVar4;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar9 = (MethodInfo *)0x0;
      pSVar6 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._stringLength = 0;
      if (__this_00 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pMVar10 = pMVar9;
        if (g_data_057ad78f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057ad78f = '\x01';
        }
        pSVar4 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar6,pMVar10);
        pIVar7 = (Il2CppClass *)
                 CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                           (pSVar4,(System_String_o *)pMVar9,method_02);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
        }
        else {
          pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
        }
        if (g_data_057ad793 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
          g_data_057ad793 = '\x01';
        }
        __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
        SVar11._stringLength = 0;
        SVar11._firstChar = 0;
        SVar11._6_2_ = 0;
        pIVar12 = __this_01;
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        *(undefined4 *)&__this_01[1].klass = 0;
        if (__this_01 != (Il2CppObject *)0x0) {
          __this_01[2].klass = pIVar7;
          il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar7);
          pIVar12 = (Il2CppObject *)&__this_01[2].monitor;
          __this_01[2].monitor = (void *)extraout_RDX_01;
          SVar11 = extraout_RDX_01;
          il2cpp_runtime_helper_022b4080();
          if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
            pSVar4 = (System_String_o *)
                     UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                               (pUVar1,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
            return pSVar4;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad793 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
          g_data_057ad793 = '\x01';
        }
        pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
        iVar8 = 0;
        pSVar4 = pSVar6;
        System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
        (pSVar6->fields)._stringLength = 0;
        if (pSVar6 != (System_String_o *)0x0) {
          pSVar6[1].monitor = pIVar12;
          il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,pIVar12);
          pSVar6[1].fields = SVar11;
          il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar11);
          return pSVar6;
        }
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
        (pSVar4->fields)._stringLength = iVar8;
        return extraout_RAX;
      }
      __this_00[1].monitor = pSVar4;
      il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pSVar4);
      __this_00[1].fields = SVar5;
      il2cpp_runtime_helper_022b4080(&__this_00[1].fields,SVar5);
      __this_00[2].klass = (System_String_c *)extraout_RDX_00;
      il2cpp_runtime_helper_022b4080(__this_00 + 2,extraout_RDX_00);
      return __this_00;
    }
    index = 0;
    pSVar4 = format;
    if (0 < (format->fields)._stringLength) {
      do {
        c = System_String__get_Chars(format,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar2 != '\0') {
          uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
          pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
          SVar5 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < (format->fields)._stringLength);
    }
  }
  return pSVar4;
}


// CustomLogic.CustomLogicServicesBuiltin$$Put
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Put (System_String_o* service, System_String_o* route, System_String_o* data, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x41e3510

void CustomLogic_CustomLogicServicesBuiltin__Put
               (System_String_o *service,System_String_o *route,System_String_o *data,
               CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  System_String_o *pSVar2;
  System_Collections_IEnumerator_o *routine;
  System_String_o *__this;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  Il2CppClass *extraout_RDX;
  void *extraout_RDX_00;
  MethodInfo *method_01;
  undefined4 uVar4;
  MethodInfo *pMVar5;
  void *pvVar6;
  System_String_o *service_00;
  Il2CppClass *pIVar7;
  Il2CppObject *__this_02;
  
  pMVar3 = (MethodInfo *)callback;
  pMVar5 = (MethodInfo *)route;
  if (g_data_057ad78e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78e = '\x01';
  }
  pSVar2 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,pMVar5);
  pSVar2 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar2,route,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  routine = CustomLogic_CustomLogicServicesBuiltin__PutRequest(pSVar2,data,callback,pMVar3);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,routine,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad792 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
    g_data_057ad792 = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
  pMVar3 = (MethodInfo *)0x0;
  service_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._stringLength = 0;
  if (__this != (System_String_o *)0x0) {
    __this[1].monitor = pSVar2;
    il2cpp_runtime_helper_022b4080(&__this[1].monitor,pSVar2);
    __this[1].fields = (System_String_Fields)data;
    il2cpp_runtime_helper_022b4080(&__this[1].fields,data);
    __this[2].klass = (System_String_c *)extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this + 2,extraout_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar5 = pMVar3;
  if (g_data_057ad78f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78f = '\x01';
  }
  pSVar2 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service_00,pMVar5);
  pSVar2 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar2,(System_String_o *)pMVar3,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  pvVar6 = (void *)0x0;
  pIVar7 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pSVar2);
    pIVar7 = (Il2CppClass *)&(__this_00->_1).byval_arg.bits;
    *(void **)&(__this_00->_1).byval_arg.bits = extraout_RDX_00;
    pvVar6 = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080();
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar1,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  uVar4 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar7;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar7);
    __this_01[2].monitor = pvVar6;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pvVar6);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar4;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$Delete
// il2cpp: void CustomLogic_CustomLogicServicesBuiltin__Delete (System_String_o* service, System_String_o* route, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x41e3650

void CustomLogic_CustomLogicServicesBuiltin__Delete
               (System_String_o *service,System_String_o *route,CustomLogic_UserMethod_o *callback,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  System_String_o *pSVar1;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  MethodInfo *method_00;
  undefined4 uVar2;
  MethodInfo *method_01;
  CustomLogic_UserMethod_o *pCVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_02;
  
  method_01 = (MethodInfo *)route;
  if (g_data_057ad78f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78f = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(service,method_01);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,route,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  pCVar3 = (CustomLogic_UserMethod_o *)0x0;
  pIVar4 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pSVar1);
    pIVar4 = (Il2CppClass *)&(__this_00->_1).byval_arg.bits;
    *(CustomLogic_UserMethod_o **)&(__this_00->_1).byval_arg.bits = callback;
    il2cpp_runtime_helper_022b4080();
    pCVar3 = callback;
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  uVar2 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar4);
    __this_01[2].monitor = pCVar3;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pCVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar2;
  return;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__GetRequest (System_String_o* uri, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x41e3220

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__GetRequest
          (System_String_o *uri,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint16_t c;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_ArgumentException_o *uri_00;
  Il2CppClass *pIVar5;
  System_Collections_IEnumerator_o *pSVar6;
  UnityEngine_Coroutine_o *pUVar7;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  System_String_Fields SVar9;
  System_String_o *__this_00;
  Il2CppClass *pIVar10;
  Il2CppObject *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  CustomLogic_UserMethod_o *in_RCX;
  System_String_o *data;
  MethodInfo *method_00;
  void *extraout_RDX;
  System_String_Fields data_00;
  MethodInfo *method_01;
  Il2CppClass *extraout_RDX_00;
  void *extraout_RDX_01;
  MethodInfo *method_02;
  int index;
  undefined4 uVar11;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  void *pvVar14;
  Il2CppObject *__this_02;
  MethodInfo *in_R8;
  MethodInfo *method_03;
  System_ArgumentException_o *pSVar15;
  
  if (g_data_057ad790 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetRequest_d__13);
    g_data_057ad790 = '\x01';
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetRequest_d__13);
  pMVar12 = (MethodInfo *)0x0;
  pSVar4 = pSVar3;
  System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  (pSVar3->fields)._stringLength = 0;
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3[1].monitor = uri;
    il2cpp_runtime_helper_022b4080(&pSVar3[1].monitor,uri);
    pSVar3[1].fields = (System_String_Fields)callback;
    il2cpp_runtime_helper_022b4080(&pSVar3[1].fields,callback);
    return (System_Collections_IEnumerator_o *)pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar12;
  method_03 = in_R8;
  if (g_data_057ad78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78c = '\x01';
  }
  pSVar4 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar4,pMVar13);
  uri_00 = (System_ArgumentException_o *)
           CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar4,(System_String_o *)pMVar12,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  pIVar5 = (Il2CppClass *)
           CustomLogic_CustomLogicServicesBuiltin__GetContentType((System_String_o *)in_R8,pMVar12);
  pSVar6 = CustomLogic_CustomLogicServicesBuiltin__PostRequest
                     ((System_String_o *)uri_00,data,in_RCX,(System_String_o *)pIVar5,method_03);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar6,(MethodInfo *)0x0);
    return (System_Collections_IEnumerator_o *)pUVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad78d == '\0') {
    il2cpp_runtime_helper_023445d0(&"application/json");
    g_data_057ad78d = '\x01';
  }
  SVar9._stringLength = 0;
  SVar9._firstChar = 0;
  SVar9._6_2_ = 0;
  __this = uri_00;
  bVar2 = System_String__IsNullOrWhiteSpace((System_String_o *)uri_00,(MethodInfo *)0x0);
  pSVar15 = "application/json";
  if ((char)bVar2 == '\0') {
    if (uri_00 == (System_ArgumentException_o *)0x0) {
label_041e3441:
      il2cpp_runtime_helper_022b2c90();
      pIVar10 = pIVar5;
      if (g_data_057ad791 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
        g_data_057ad791 = '\x01';
      }
      pSVar3 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
      pMVar12 = (MethodInfo *)0x0;
      pSVar4 = pSVar3;
      System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      (pSVar3->fields)._stringLength = 0;
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3[1].monitor = __this;
        il2cpp_runtime_helper_022b4080(&pSVar3[1].monitor,__this);
        pSVar3[1].fields = SVar9;
        il2cpp_runtime_helper_022b4080(&pSVar3[1].fields,SVar9);
        pSVar3[2].monitor = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&pSVar3[2].monitor,extraout_RDX);
        pSVar3[2].klass = (System_String_c *)pIVar5;
        il2cpp_runtime_helper_022b4080(pSVar3 + 2,pIVar5);
        return (System_Collections_IEnumerator_o *)pSVar3;
      }
      il2cpp_runtime_helper_022b2c90();
      pIVar5 = pIVar10;
      pMVar13 = pMVar12;
      if (g_data_057ad78e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78e = '\x01';
      }
      pSVar4 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar4,pMVar13);
      pSVar4 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar4,(System_String_o *)pMVar12,method_01);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      SVar9 = data_00;
      pSVar6 = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                         (pSVar4,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pIVar10,
                          (MethodInfo *)pIVar5);
      if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,pSVar6,(MethodInfo *)0x0);
        return (System_Collections_IEnumerator_o *)pUVar7;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad792 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
        g_data_057ad792 = '\x01';
      }
      __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
      pMVar12 = (MethodInfo *)0x0;
      pSVar3 = __this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._stringLength = 0;
      if (__this_00 != (System_String_o *)0x0) {
        __this_00[1].monitor = pSVar4;
        il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pSVar4);
        __this_00[1].fields = SVar9;
        il2cpp_runtime_helper_022b4080(&__this_00[1].fields,SVar9);
        __this_00[2].klass = (System_String_c *)extraout_RDX_00;
        il2cpp_runtime_helper_022b4080(__this_00 + 2,extraout_RDX_00);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar13 = pMVar12;
      if (g_data_057ad78f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057ad78f = '\x01';
      }
      pSVar4 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar3,pMVar13);
      pSVar4 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint
                         (pSVar4,(System_String_o *)pMVar12,method_02);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      else {
        pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      pvVar14 = (void *)0x0;
      pIVar5 = pIVar10;
      System_Object___ctor((Il2CppObject *)pIVar10,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar10->_1).name = 0;
      if (pIVar10 != (Il2CppClass *)0x0) {
        (pIVar10->_1).byval_arg.data = pSVar4;
        il2cpp_runtime_helper_022b4080(&(pIVar10->_1).byval_arg,pSVar4);
        pIVar5 = (Il2CppClass *)&(pIVar10->_1).byval_arg.bits;
        *(void **)&(pIVar10->_1).byval_arg.bits = extraout_RDX_01;
        pvVar14 = extraout_RDX_01;
        il2cpp_runtime_helper_022b4080();
        if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             (pUVar1,(System_Collections_IEnumerator_o *)pIVar10,(MethodInfo *)0x0);
          return (System_Collections_IEnumerator_o *)pUVar7;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad793 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
        g_data_057ad793 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
      uVar11 = 0;
      __this_02 = __this_01;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].klass = pIVar5;
        il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar5);
        __this_01[2].monitor = pvVar14;
        il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pvVar14);
        return (System_Collections_IEnumerator_o *)__this_01;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&__this_02[1].klass = uVar11;
      return extraout_RAX;
    }
    index = 0;
    pSVar15 = uri_00;
    if (0 < *(int *)&(uri_00->fields)._className) {
      do {
        c = System_String__get_Chars((System_String_o *)uri_00,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        index = index + 1;
        if ((char)bVar2 != '\0') {
          uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
          __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
          pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid content type: must not contain control characters.");
          System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
          SVar9 = (System_String_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetContentType);
          il2cpp_runtime_helper_022b2b10();
          goto label_041e3441;
        }
      } while (index < *(int *)&(uri_00->fields)._className);
    }
  }
  return (System_Collections_IEnumerator_o *)pSVar15;
}


// CustomLogic.CustomLogicServicesBuiltin$$PostRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__PostRequest (System_String_o* uri, System_String_o* data, CustomLogic_UserMethod_o* callback, System_String_o* format, const MethodInfo* method);
// 0x41e3450

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__PostRequest
          (System_String_o *uri,System_String_o *data,CustomLogic_UserMethod_o *callback,
          System_String_o *format,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar4;
  System_String_o *__this;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  System_String_Fields data_00;
  MethodInfo *method_01;
  Il2CppClass *extraout_RDX;
  void *extraout_RDX_00;
  MethodInfo *method_02;
  undefined4 uVar6;
  MethodInfo *pMVar7;
  MethodInfo *method_03;
  System_String_Fields SVar8;
  void *pvVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *__this_02;
  
  pMVar5 = (MethodInfo *)format;
  if (g_data_057ad791 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PostRequest_d__14);
    g_data_057ad791 = '\x01';
  }
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostRequest_d__14);
  pMVar7 = (MethodInfo *)0x0;
  pSVar3 = pSVar2;
  System_Object___ctor((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  (pSVar2->fields)._stringLength = 0;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2[1].monitor = uri;
    il2cpp_runtime_helper_022b4080(&pSVar2[1].monitor,uri);
    pSVar2[1].fields = (System_String_Fields)data;
    il2cpp_runtime_helper_022b4080(&pSVar2[1].fields,data);
    pSVar2[2].monitor = callback;
    il2cpp_runtime_helper_022b4080(&pSVar2[2].monitor,callback);
    pSVar2[2].klass = (System_String_c *)format;
    il2cpp_runtime_helper_022b4080(pSVar2 + 2,format);
    return (System_Collections_IEnumerator_o *)pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar5;
  method_03 = pMVar7;
  if (g_data_057ad78e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78e = '\x01';
  }
  pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar3,method_03);
  pSVar3 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar3,(System_String_o *)pMVar7,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  SVar8 = data_00;
  routine = CustomLogic_CustomLogicServicesBuiltin__PutRequest
                      (pSVar3,(System_String_o *)data_00,(CustomLogic_UserMethod_o *)pMVar5,method_00);
  if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar1,routine,(MethodInfo *)0x0);
    return (System_Collections_IEnumerator_o *)pUVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad792 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
    g_data_057ad792 = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
  pMVar5 = (MethodInfo *)0x0;
  pSVar2 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._stringLength = 0;
  if (__this != (System_String_o *)0x0) {
    __this[1].monitor = pSVar3;
    il2cpp_runtime_helper_022b4080(&__this[1].monitor,pSVar3);
    __this[1].fields = SVar8;
    il2cpp_runtime_helper_022b4080(&__this[1].fields,SVar8);
    __this[2].klass = (System_String_c *)extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this + 2,extraout_RDX);
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = pMVar5;
  if (g_data_057ad78f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78f = '\x01';
  }
  pSVar3 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar2,pMVar7);
  pSVar3 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar3,(System_String_o *)pMVar5,method_02);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    pUVar1 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  pvVar9 = (void *)0x0;
  pIVar10 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pSVar3);
    pIVar10 = (Il2CppClass *)&(__this_00->_1).byval_arg.bits;
    *(void **)&(__this_00->_1).byval_arg.bits = extraout_RDX_00;
    pvVar9 = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080();
    if (pUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         (pUVar1,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  uVar6 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar10;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar10);
    __this_01[2].monitor = pvVar9;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pvVar9);
    return (System_Collections_IEnumerator_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar6;
  return extraout_RAX;
}


// CustomLogic.CustomLogicServicesBuiltin$$PutRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__PutRequest (System_String_o* uri, System_String_o* data, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x41e35b0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__PutRequest
          (System_String_o *uri,System_String_o *data,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  System_String_o *__this_00;
  System_String_o *pSVar1;
  Il2CppClass *__this_01;
  UnityEngine_Coroutine_o *pUVar2;
  Il2CppObject *__this_02;
  System_Collections_IEnumerator_o *extraout_RAX;
  void *extraout_RDX;
  MethodInfo *method_00;
  undefined4 uVar3;
  MethodInfo *route;
  MethodInfo *method_01;
  void *pvVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *__this_03;
  
  if (g_data_057ad792 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PutRequest_d__15);
    g_data_057ad792 = '\x01';
  }
  __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PutRequest_d__15);
  route = (MethodInfo *)0x0;
  pSVar1 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._stringLength = 0;
  if (__this_00 != (System_String_o *)0x0) {
    __this_00[1].monitor = uri;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,uri);
    __this_00[1].fields = (System_String_Fields)data;
    il2cpp_runtime_helper_022b4080(&__this_00[1].fields,data);
    __this_00[2].klass = (System_String_c *)callback;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,callback);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = route;
  if (g_data_057ad78f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad78f = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__CheckMe(pSVar1,method_01);
  pSVar1 = CustomLogic_CustomLogicServicesBuiltin__GetEndpoint(pSVar1,(System_String_o *)route,method_00);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  pvVar4 = (void *)0x0;
  pIVar5 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->_1).name = 0;
  if (__this_01 != (Il2CppClass *)0x0) {
    (__this_01->_1).byval_arg.data = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg,pSVar1);
    pIVar5 = (Il2CppClass *)&(__this_01->_1).byval_arg.bits;
    *(void **)&(__this_01->_1).byval_arg.bits = extraout_RDX;
    pvVar4 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         (__this,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  uVar3 = 0;
  __this_03 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar5);
    __this_02[2].monitor = pvVar4;
    il2cpp_runtime_helper_022b4080(&__this_02[2].monitor,pvVar4);
    return (System_Collections_IEnumerator_o *)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar3;
  return extraout_RAX;
}


// CustomLogic.CustomLogicServicesBuiltin$$DeleteRequest
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicServicesBuiltin__DeleteRequest (System_String_o* uri, CustomLogic_UserMethod_o* callback, const MethodInfo* method);
// 0x41e3770

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicServicesBuiltin__DeleteRequest
          (System_String_o *uri,CustomLogic_UserMethod_o *callback,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ad793 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteRequest_d__16);
    g_data_057ad793 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteRequest_d__16);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)uri;
    il2cpp_runtime_helper_022b4080(__this + 2,uri);
    __this[2].monitor = callback;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,callback);
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// CustomLogic.CustomLogicServicesBuiltin$$GetWebRequestFailureJSON
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON (UnityEngine_Networking_UnityWebRequest_o* webRequest, const MethodInfo* method);
// 0x41e3870

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__GetWebRequestFailureJSON
          (UnityEngine_Networking_UnityWebRequest_o *webRequest,MethodInfo *method)

{
  undefined8 uVar1;
  SimpleJSONFixed_JSONObject_o *__this;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONString_o *pSVar3;
  System_Enum_o local_40;
  int32_t local_30;
  
  if (g_data_057ad794 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Result);
    il2cpp_runtime_helper_023445d0(&"error");
    il2cpp_runtime_helper_023445d0(&"status");
    g_data_057ad794 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (webRequest != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    local_30 = UnityEngine_Networking_UnityWebRequest__get_result(webRequest,(MethodInfo *)0x0);
    local_40.klass = TypeInfo_Result;
    local_40.monitor = (void *)0xffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    pSVar3 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._20_Add.methodPtr)
                (__this,"status",pSVar3,(__this->klass->vtable)._20_Add.method);
      pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(webRequest,(MethodInfo *)0x0);
      uVar1 = "error";
      if (pSVar2 == (System_String_o *)0x0) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSVar3 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
      SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._20_Add.methodPtr)(__this,uVar1,pSVar3,(__this->klass->vtable)._20_Add.method)
      ;
      pSVar2 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad795 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Service");
    g_data_057ad795 = '\x01';
  }
  return "Service";
}


// CustomLogic.CustomLogicServicesBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicServicesBuiltin__get_ClassName (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x41e3a00

System_String_o *
CustomLogic_CustomLogicServicesBuiltin__get_ClassName
          (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad795 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Service");
    g_data_057ad795 = '\x01';
  }
  return "Service";
}


// CustomLogic.CustomLogicServicesBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_IsAbstract (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x41e3a30

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicServicesBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_IsStatic (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x41e3a40

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__get_IsStatic
          (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicServicesBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicServicesBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicServicesBuiltin_o* __this, const MethodInfo* method);
// 0x41e3a50

bool_conflict
CustomLogic_CustomLogicServicesBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicServicesBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


