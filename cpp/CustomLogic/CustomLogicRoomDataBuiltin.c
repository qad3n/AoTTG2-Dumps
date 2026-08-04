// Type: CustomLogic.CustomLogicRoomDataBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRoomDataBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRoomDataBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRoomDataBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRoomDataBuiltin_o* CustomLogic_CustomLogicRoomDataBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41e1ea0

CustomLogic_CustomLogicRoomDataBuiltin_o *
CustomLogic_CustomLogicRoomDataBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicRoomDataBuiltin_o *pCVar9;
  System_ArgumentException_o **ppSVar10;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad77c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicRoomDataBuiltin);
    g_data_057ad77c = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRoomDataBuiltin);
    if (g_data_057ad777 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad777 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicRoomDataBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicRoomDataBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicRoomDataBuiltin_CreateInstance);
  pSVar7 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this_00,uVar6);
  ppSVar10 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad77d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SetProperty");
    il2cpp_runtime_helper_023445d0(&"GetProperty");
    il2cpp_runtime_helper_023445d0(&"Clear");
    g_data_057ad77d = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"SetProperty",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"GetProperty",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad77f == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetProperty_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad77f = '\x01';
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
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicRoomDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
      return pCVar9;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Clear",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad780 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad780 = '\x01';
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
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicRoomDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
      return pCVar9;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicRoomDataBuiltin not found");
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
  if (g_data_057ad77e == '\0') {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e21f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e2205;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e2211;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e221d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetProperty_b__2_0);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e2229;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad77e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e224c;
    il2cpp_runtime_helper_02337ed0();
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e219b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e21b7;
    pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e21d1;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar8;
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e21eb;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
  }
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e2272;
  pCVar9 = (CustomLogic_CustomLogicRoomDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41e228a;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
  return pCVar9;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41e2650

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad782 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad782 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41e26c0

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e26d0

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *defaultValue;
  System_String_o *property;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  long extraout_RDX;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ad783 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad783 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      property = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar2,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        CustomLogic_CustomLogicRoomDataBuiltin__SetProperty(property,__a->m_Items[1],method_00);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad784 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad784 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      pIVar2 = *(Il2CppObject **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar2,MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        defaultValue = *(Il2CppObject **)(extraout_RDX + 0x28);
        if (g_data_057ad779 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetValueOrDefault_String_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057ad779 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar2 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
                           (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98),pIVar2,defaultValue,MethodInfo_Object_GetValueOrDefault_String_Object);
        return pIVar2;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad77a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad77a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad785 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad785 = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0)
    ;
    return extraout_RAX;
  }
  System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e2760

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *defaultValue;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ad784 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad784 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar2,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        defaultValue = __a->m_Items[1];
        if (g_data_057ad779 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetValueOrDefault_String_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057ad779 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar2 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
                           (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98),pIVar2,defaultValue,MethodInfo_Object_GetValueOrDefault_String_Object);
        return pIVar2;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad77a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad77a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad785 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad785 = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0)
    ;
    return extraout_RAX;
  }
  System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__4_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e2860

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__4_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ad77a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad77a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad785 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad785 = '\x01';
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0)
    ;
    return extraout_RAX;
  }
  System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41e1fc0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad77d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SetProperty");
    il2cpp_runtime_helper_023445d0(&"GetProperty");
    il2cpp_runtime_helper_023445d0(&"Clear");
    g_data_057ad77d = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"SetProperty",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"GetProperty",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad77f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetProperty_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad77f = '\x01';
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
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    bVar3 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad780 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad780 = '\x01';
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
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicRoomDataBuiltin not found");
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
  if (g_data_057ad77e == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e21f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e2205;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e2211;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e221d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetProperty_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e2229;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad77e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e224c;
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e219b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e21b7;
    pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e21d1;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar5;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e21eb;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar5);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e2272;
  pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e228a;
  CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty (const MethodInfo* method);
// 0x41e2150

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this;
  
  if (g_data_057ad77e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetProperty_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad77e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty (const MethodInfo* method);
// 0x41e22a0

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this;
  
  if (g_data_057ad77f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetProperty_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad77f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x41e23f0

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this;
  
  if (g_data_057ad780 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad780 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRoomDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41e2540

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057ad781 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"SetProperty");
    il2cpp_runtime_helper_023445d0(&"GetProperty");
    il2cpp_runtime_helper_023445d0(&"Clear");
    g_data_057ad781 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"SetProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Clear",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad782 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad782 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin___ctor (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x41e1bb0

void CustomLogic_CustomLogicRoomDataBuiltin___ctor
               (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad777 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad777 = '\x01';
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


// CustomLogic.CustomLogicRoomDataBuiltin$$SetProperty
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin__SetProperty (System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x41e1c20

void CustomLogic_CustomLogicRoomDataBuiltin__SetProperty
               (System_String_o *property,Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined8 uVar2;
  System_Exception_o *__this_00;
  System_String_o *message;
  Il2CppObject *defaultValue;
  
  if (g_data_057ad778 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ad778 = '\x01';
  }
  if ((((value == (Il2CppObject *)0x0) || (pIVar1 = value->klass, pIVar1 == g_data_057b9be8)) ||
      (pIVar1 == g_data_057b9bb8)) || ((pIVar1 == g_data_057b9c00 || (pIVar1 == g_data_057b9b98)))) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)property,value,MethodInfo_Void_set_Item);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"RoomData.SetProperty only supports null, float, int, string, or bool values.");
  System_Exception___ctor_3cf6120(__this_00,message,(MethodInfo *)0x0);
  defaultValue = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetProperty);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad779 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetValueOrDefault_String_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad779 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
            (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98),(Il2CppObject *)__this_00,defaultValue,MethodInfo_Object_GetValueOrDefault_String_Object);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$GetProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin__GetProperty (System_String_o* property, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x41e1d20

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin__GetProperty
          (System_String_o *property,Il2CppObject *defaultValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057ad779 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetValueOrDefault_String_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad779 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
                     (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                       (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98),(Il2CppObject *)property,defaultValue,
                      MethodInfo_Object_GetValueOrDefault_String_Object);
  return pIVar1;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin__Clear (const MethodInfo* method);
// 0x41e1da0

void CustomLogic_CustomLogicRoomDataBuiltin__Clear(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057ad77a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad77a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(__this,MethodInfo_Void_Clear);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad77b == '\0') {
    il2cpp_runtime_helper_023445d0(&"RoomData");
    g_data_057ad77b = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRoomDataBuiltin__get_ClassName (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x41e1e40

System_String_o *
CustomLogic_CustomLogicRoomDataBuiltin__get_ClassName
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad77b == '\0') {
    il2cpp_runtime_helper_023445d0(&"RoomData");
    g_data_057ad77b = '\x01';
  }
  return "RoomData";
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsAbstract (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x41e1e70

bool_conflict
CustomLogic_CustomLogicRoomDataBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsStatic (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x41e1e80

bool_conflict
CustomLogic_CustomLogicRoomDataBuiltin__get_IsStatic
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x41e1e90

bool_conflict
CustomLogic_CustomLogicRoomDataBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


