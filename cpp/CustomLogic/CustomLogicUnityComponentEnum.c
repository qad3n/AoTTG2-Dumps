// Type: CustomLogic.CustomLogicUnityComponentEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUnityComponentEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicUnityComponentEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUnityComponentEnum_o* CustomLogic_CustomLogicUnityComponentEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41af500

CustomLogic_CustomLogicUnityComponentEnum_o *
CustomLogic_CustomLogicUnityComponentEnum_Factory__CreateInstance
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
  System_Func_T__object__o *getter;
  CustomLogic_CustomLogicUnityComponentEnum_o *__this_01;
  undefined8 *puVar7;
  undefined8 uStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad4f8 == '\0') {
    pSStack_20 = (System_String_o *)0x41af51c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUnityComponentEnum);
    g_data_057ad4f8 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41af597;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41af546;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicUnityComponentEnum);
    if (g_data_057ad4f5 == '\0') {
      pSStack_20 = (System_String_o *)0x41af55e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad4f5 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41af57d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41af587;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicUnityComponentEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41af59f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41af5b2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41af5c1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicUnityComponentEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41af5d0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41af5e0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41af5ef;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41af5f7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x41af607;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41af613;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicUnityComponentEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41af61e;
  pSVar6 = __this_00;
  uStack_30 = il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  puVar7 = &uStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad4f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ad4f9 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"VideoPlayer",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicUnityComponentEnum not found");
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
      puVar7 = &uStack_18;
      pSVar6 = pSStack_28;
      pSVar2 = pSStack_20;
    }
    else {
      puVar7 = &uStack_18;
      pSVar6 = pSStack_28;
      pSVar2 = pSStack_20;
    }
  }
  *(System_String_o **)((long)puVar7 + -8) = pSVar2;
  *(System_ArgumentException_o **)((long)puVar7 + -0x10) = pSVar6;
  *(undefined8 **)((long)puVar7 + -0x18) = puVar5;
  if (g_data_057ad4fa == '\0') {
    *(undefined8 *)((long)puVar7 + -0x20) = 0x41af719;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VideoPlayer_g____getter);
    *(undefined8 *)((long)puVar7 + -0x20) = 0x41af725;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnum);
    *(undefined8 *)((long)puVar7 + -0x20) = 0x41af731;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
    *(undefined8 *)((long)puVar7 + -0x20) = 0x41af73d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUnityComponentEnum_object);
    g_data_057ad4fa = '\x01';
  }
  *(undefined8 *)((long)puVar7 + -0x20) = 0x41af753;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUnityComponentEnum_object);
  *(undefined8 *)((long)puVar7 + -0x20) = 0x41af76c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)puVar7 + -0x20) = 0x41af77b;
  __this_01 = (CustomLogic_CustomLogicUnityComponentEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
  *(undefined8 *)((long)puVar7 + -0x20) = 0x41af795;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnum);
  return __this_01;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUnityComponentEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41af620

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUnityComponentEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_T__o *__this;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad4f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ad4f9 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"VideoPlayer",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicUnityComponentEnum not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar2 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
    register0x00000020 = (BADSPACEBASE *)auStack_18;
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
  if (g_data_057ad4fa == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41af719;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VideoPlayer_g____getter);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41af725;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41af731;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41af73d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUnityComponentEnum_object);
    g_data_057ad4fa = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41af753;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUnityComponentEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41af76c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41af77b;
  __this = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41af795;
  CustomLogic_CLPropertyBinding_object____ctor(__this,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnum);
  return (CustomLogic_ICLMemberBinding_o *)__this;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$__CreatePropertyBinding__VideoPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o* CustomLogic_CustomLogicUnityComponentEnum_Bindings____CreatePropertyBinding__VideoPlayer (const MethodInfo* method);
// 0x41af700

CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *
CustomLogic_CustomLogicUnityComponentEnum_Bindings____CreatePropertyBinding__VideoPlayer(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *__this;
  
  if (g_data_057ad4fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VideoPlayer_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUnityComponentEnum_object);
    g_data_057ad4fa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUnityComponentEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnum);
  return __this;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentEnum_Bindings___cctor (const MethodInfo* method);
// 0x41af7a0

void CustomLogic_CustomLogicUnityComponentEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad4fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ad4fb = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"VideoPlayer",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad4f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ad4f6 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$<__CreatePropertyBinding__VideoPlayer>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUnityComponentEnum_Bindings_____CreatePropertyBinding__VideoPlayer_g____getter_2_0 (CustomLogic_CustomLogicUnityComponentEnum_o* __i, const MethodInfo* method);
// 0x41af860

Il2CppObject *
CustomLogic_CustomLogicUnityComponentEnum_Bindings_____CreatePropertyBinding__VideoPlayer_g____getter_2_0
          (CustomLogic_CustomLogicUnityComponentEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ad4f6 = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicUnityComponentEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentEnum___ctor (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x41af400

void CustomLogic_CustomLogicUnityComponentEnum___ctor
               (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad4f5 = '\x01';
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


// CustomLogic.CustomLogicUnityComponentEnum$$get_VideoPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer (const MethodInfo* method);
// 0x41af470

System_String_o * CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer(MethodInfo *method)

{
  if (g_data_057ad4f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VideoPlayer");
    g_data_057ad4f6 = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUnityComponentEnum__get_ClassName (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x41af4a0

System_String_o *
CustomLogic_CustomLogicUnityComponentEnum__get_ClassName
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad4f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"UnityComponentEnum");
    g_data_057ad4f7 = '\x01';
  }
  return "UnityComponentEnum";
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_IsAbstract (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x41af4d0

bool_conflict
CustomLogic_CustomLogicUnityComponentEnum__get_IsAbstract
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_IsStatic (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x41af4e0

bool_conflict
CustomLogic_CustomLogicUnityComponentEnum__get_IsStatic
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_InheritBaseMembers (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x41af4f0

bool_conflict
CustomLogic_CustomLogicUnityComponentEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


