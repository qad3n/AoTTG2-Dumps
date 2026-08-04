// Type: CustomLogic.CustomLogicPersistentDataBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPersistentDataBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPersistentDataBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicPersistentDataBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPersistentDataBuiltin_o* CustomLogic_CustomLogicPersistentDataBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41db3d0

CustomLogic_CustomLogicPersistentDataBuiltin_o *
CustomLogic_CustomLogicPersistentDataBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CustomLogicPersistentDataBuiltin_o *pCVar10;
  System_ArgumentException_o **ppSVar11;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad73a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPersistentDataBuiltin);
    g_data_057ad73a = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPersistentDataBuiltin);
    if (g_data_057ad731 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad731 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicPersistentDataBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicPersistentDataBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPersistentDataBuiltin_CreateInstance);
  pSVar8 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar11 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad73b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"IsValidFileName");
    il2cpp_runtime_helper_023445d0(&"SetProperty");
    il2cpp_runtime_helper_023445d0(&"GetProperty");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"SaveToFile");
    il2cpp_runtime_helper_023445d0(&"FileExists");
    il2cpp_runtime_helper_023445d0(&"LoadFromFile");
    g_data_057ad73b = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x38dfc974) {
    if (uVar3 == 0x4a57fc2) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Clear",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad740 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad740 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicPersistentDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        return pCVar10;
      }
    }
    else if (uVar3 == 0xb488604) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsValidFileName",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad741 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsValidFileName_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad741 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicPersistentDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar3 == 0x38dfc973) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"FileExists",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad742 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FileExists_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad742 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicPersistentDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
      return pCVar10;
    }
  }
  else if (uVar3 < 0x8f246a28) {
    if (uVar3 == 0x8f246a27) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SaveToFile",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad73f == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SaveToFile_b__5_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad73f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CustomLogicPersistentDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        return pCVar10;
      }
    }
    else if ((uVar3 == 0x3fc653c7) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"LoadFromFile",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad73e == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LoadFromFile_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad73e = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicPersistentDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
      return pCVar10;
    }
  }
  else if (uVar3 == 0xb6e34446) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetProperty",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad73d == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetProperty_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad73d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CustomLogicPersistentDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
      return pCVar10;
    }
  }
  else if ((uVar3 == 0xecbfdf0a) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetProperty",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      ppSVar11 = (System_ArgumentException_o **)&uStack_18;
      pSVar8 = pSStack_28;
    }
    else {
      ppSVar11 = (System_ArgumentException_o **)&uStack_18;
      pSVar8 = pSStack_28;
    }
    goto CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPersistentDataBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty:
  *(undefined8 *)((long)ppSVar11 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar11 + -0x10) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x18) = pSVar8;
  if (g_data_057ad73c == '\0') {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db909;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db915;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db921;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db92d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetProperty_b__2_0);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad73c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db95c;
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db8ab;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db8c7;
    pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db8e1;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db8fb;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
  }
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db982;
  pCVar10 = (CustomLogic_CustomLogicPersistentDataBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41db99a;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
  return pCVar10;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41dc330

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad744 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad744 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41dc3a0

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41dc3b0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *defaultValue;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  uint uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  long extraout_RDX;
  long lVar6;
  MethodInfo *method_01;
  long lVar7;
  MethodInfo *method_02;
  long extraout_RDX_00;
  long extraout_RDX_01;
  MethodInfo *method_03;
  Il2CppObject *unaff_R14;
  undefined1 auVar8 [16];
  undefined1 uStack_89;
  long lStack_88;
  undefined1 uStack_71;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  Il2CppObject *pIStack_50;
  undefined8 uStack_48;
  long lStack_40;
  Il2CppObject *pIStack_38;
  System_Object_array *pSStack_30;
  Il2CppObject *pIStack_28;
  
  if (g_data_057ad745 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad745 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (unaff_R14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty(pSVar4,__a->m_Items[1],method_00);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __a;
  pIStack_28 = unaff_R14;
  if (g_data_057ad746 == '\0') {
    pIStack_38 = (Il2CppObject *)0x41dc45d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pIStack_38 = (Il2CppObject *)0x41dc469;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad746 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      unaff_R14 = *(Il2CppObject **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_38 = (Il2CppObject *)0x41dc49f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_38 = (Il2CppObject *)0x41dc4b1;
      pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (unaff_R14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        defaultValue = *(Il2CppObject **)(extraout_RDX + 0x28);
        if (g_data_057ad733 == '\0') {
          pIStack_38 = (Il2CppObject *)0x41dc4d3;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetValueOrDefault_String_Object);
          pIStack_38 = (Il2CppObject *)0x41dc4df;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057ad733 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          pIStack_38 = (Il2CppObject *)0x41dc4fe;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar5 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
                           (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0),pIVar5,defaultValue,MethodInfo_Object_GetValueOrDefault_String_Object);
        return pIVar5;
      }
    }
    pIStack_38 = (Il2CppObject *)0x41dc52e;
    il2cpp_runtime_helper_022b2ca0();
  }
  pIStack_38 = (Il2CppObject *)0x41dc533;
  auVar8 = il2cpp_runtime_helper_022b2c90();
  lVar6 = auVar8._8_8_;
  uStack_48 = auVar8._0_8_;
  lStack_40 = extraout_RDX;
  pIStack_38 = unaff_R14;
  if (g_data_057ad747 == '\0') {
    pIStack_50 = (Il2CppObject *)0x41dc55c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    pIStack_50 = (Il2CppObject *)0x41dc568;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pIStack_50 = (Il2CppObject *)0x41dc574;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad747 = '\x01';
  }
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      unaff_R14 = *(Il2CppObject **)(lVar6 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_50 = (Il2CppObject *)0x41dc5a2;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_50 = (Il2CppObject *)0x41dc5b4;
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (unaff_R14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar6 + 0x18)) {
        pIStack_50 = (Il2CppObject *)0x41dc5d0;
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (*(Il2CppObject **)(lVar6 + 0x28),MethodInfo_Boolean_ConvertTo_Boolean);
        pIStack_50 = (Il2CppObject *)0x41dc5db;
        CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile(pSVar4,uVar2 & 0xff,method_01);
        return (Il2CppObject *)0x0;
      }
    }
    pIStack_50 = (Il2CppObject *)0x41dc5ea;
    il2cpp_runtime_helper_022b2ca0();
  }
  pIStack_50 = (Il2CppObject *)0x41dc5ef;
  auVar8 = il2cpp_runtime_helper_022b2c90();
  lVar7 = auVar8._8_8_;
  uStack_60 = auVar8._0_8_;
  lStack_58 = lVar6;
  pIStack_50 = unaff_R14;
  if (g_data_057ad748 == '\0') {
    lStack_68 = 0x41dc60c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    lStack_68 = 0x41dc618;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_68 = 0x41dc624;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad748 = '\x01';
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      pIVar5 = *(Il2CppObject **)(lVar7 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_68 = 0x41dc652;
        il2cpp_runtime_helper_02337ed0();
      }
      lStack_68 = 0x41dc664;
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar7 + 0x18)) {
        lStack_68 = 0x41dc680;
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (*(Il2CppObject **)(lVar7 + 0x28),MethodInfo_Boolean_ConvertTo_Boolean);
        lStack_68 = 0x41dc68b;
        CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile(pSVar4,uVar2 & 0xff,method_02);
        return (Il2CppObject *)0x0;
      }
    }
    lStack_68 = 0x41dc69a;
    il2cpp_runtime_helper_022b2ca0();
  }
  lStack_68 = 0x41dc69f;
  il2cpp_runtime_helper_022b2c90();
  lStack_68 = lVar7;
  if (g_data_057ad736 == '\0') {
    puStack_70 = (undefined8 *)0x41dc6ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    puStack_70 = (undefined8 *)0x41dc6fb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad736 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    puStack_70 = (undefined8 *)0x41dc71a;
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    puStack_70 = (undefined8 *)0x41dc6df;
    System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
    return (Il2CppObject *)0x0;
  }
  puStack_70 = (undefined8 *)0x41dc735;
  il2cpp_runtime_helper_022b2c90();
  puStack_70 = &TypeInfo_CustomLogicManager;
  if (g_data_057ad749 == '\0') {
    lStack_88 = 0x41dc75d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_88 = 0x41dc769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad749 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    lStack_88 = 0x41dc816;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      lStack_88 = 0x41dc79f;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_88 = 0x41dc7b1;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (g_data_057ad737 == '\0') {
      lStack_88 = 0x41dc7c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad737 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      lStack_88 = 0x41dc7e8;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_88 = 0x41dc7f2;
    bVar3 = Utility_Util__IsValidFileName(pSVar4,(MethodInfo *)0x0);
    uStack_71 = (undefined1)bVar3;
    lStack_88 = 0x41dc80b;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_71);
    return pIVar5;
  }
  lStack_88 = 0x41dc81b;
  il2cpp_runtime_helper_022b2ca0();
  lStack_88 = extraout_RDX_00;
  if (g_data_057ad74a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad74a = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_03 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    bVar3 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(pSVar4,method_03);
    uStack_89 = (undefined1)bVar3;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_89);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad74b = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41dc440

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *defaultValue;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  uint uVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  long lVar6;
  MethodInfo *method_00;
  long lVar7;
  MethodInfo *method_01;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *method_02;
  Il2CppObject *unaff_R14;
  undefined1 auVar8 [16];
  undefined1 uStack_71;
  long lStack_70;
  undefined1 uStack_59;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  Il2CppObject *pIStack_20;
  
  if (g_data_057ad746 == '\0') {
    pIStack_20 = (Il2CppObject *)0x41dc45d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pIStack_20 = (Il2CppObject *)0x41dc469;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad746 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_20 = (Il2CppObject *)0x41dc49f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_20 = (Il2CppObject *)0x41dc4b1;
      pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (unaff_R14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        defaultValue = __a->m_Items[1];
        if (g_data_057ad733 == '\0') {
          pIStack_20 = (Il2CppObject *)0x41dc4d3;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetValueOrDefault_String_Object);
          pIStack_20 = (Il2CppObject *)0x41dc4df;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057ad733 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          pIStack_20 = (Il2CppObject *)0x41dc4fe;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar4 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
                           (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0),pIVar4,defaultValue,MethodInfo_Object_GetValueOrDefault_String_Object);
        return pIVar4;
      }
    }
    pIStack_20 = (Il2CppObject *)0x41dc52e;
    il2cpp_runtime_helper_022b2ca0();
  }
  pIStack_20 = (Il2CppObject *)0x41dc533;
  auVar8 = il2cpp_runtime_helper_022b2c90();
  lVar6 = auVar8._8_8_;
  uStack_30 = auVar8._0_8_;
  pSStack_28 = __a;
  pIStack_20 = unaff_R14;
  if (g_data_057ad747 == '\0') {
    pIStack_38 = (Il2CppObject *)0x41dc55c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    pIStack_38 = (Il2CppObject *)0x41dc568;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pIStack_38 = (Il2CppObject *)0x41dc574;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad747 = '\x01';
  }
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      unaff_R14 = *(Il2CppObject **)(lVar6 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_38 = (Il2CppObject *)0x41dc5a2;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_38 = (Il2CppObject *)0x41dc5b4;
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (unaff_R14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar6 + 0x18)) {
        pIStack_38 = (Il2CppObject *)0x41dc5d0;
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (*(Il2CppObject **)(lVar6 + 0x28),MethodInfo_Boolean_ConvertTo_Boolean);
        pIStack_38 = (Il2CppObject *)0x41dc5db;
        CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile(pSVar5,uVar2 & 0xff,method_00);
        return (Il2CppObject *)0x0;
      }
    }
    pIStack_38 = (Il2CppObject *)0x41dc5ea;
    il2cpp_runtime_helper_022b2ca0();
  }
  pIStack_38 = (Il2CppObject *)0x41dc5ef;
  auVar8 = il2cpp_runtime_helper_022b2c90();
  lVar7 = auVar8._8_8_;
  uStack_48 = auVar8._0_8_;
  lStack_40 = lVar6;
  pIStack_38 = unaff_R14;
  if (g_data_057ad748 == '\0') {
    lStack_50 = 0x41dc60c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    lStack_50 = 0x41dc618;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_50 = 0x41dc624;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad748 = '\x01';
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_50 = 0x41dc652;
        il2cpp_runtime_helper_02337ed0();
      }
      lStack_50 = 0x41dc664;
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar7 + 0x18)) {
        lStack_50 = 0x41dc680;
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (*(Il2CppObject **)(lVar7 + 0x28),MethodInfo_Boolean_ConvertTo_Boolean);
        lStack_50 = 0x41dc68b;
        CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile(pSVar5,uVar2 & 0xff,method_01);
        return (Il2CppObject *)0x0;
      }
    }
    lStack_50 = 0x41dc69a;
    il2cpp_runtime_helper_022b2ca0();
  }
  lStack_50 = 0x41dc69f;
  il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar7;
  if (g_data_057ad736 == '\0') {
    puStack_58 = (undefined8 *)0x41dc6ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    puStack_58 = (undefined8 *)0x41dc6fb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad736 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    puStack_58 = (undefined8 *)0x41dc71a;
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    puStack_58 = (undefined8 *)0x41dc6df;
    System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
    return (Il2CppObject *)0x0;
  }
  puStack_58 = (undefined8 *)0x41dc735;
  il2cpp_runtime_helper_022b2c90();
  puStack_58 = &TypeInfo_CustomLogicManager;
  if (g_data_057ad749 == '\0') {
    lStack_70 = 0x41dc75d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_70 = 0x41dc769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad749 = '\x01';
  }
  if (extraout_RDX == 0) {
    lStack_70 = 0x41dc816;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar4 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      lStack_70 = 0x41dc79f;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_70 = 0x41dc7b1;
    pSVar5 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (g_data_057ad737 == '\0') {
      lStack_70 = 0x41dc7c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad737 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      lStack_70 = 0x41dc7e8;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_70 = 0x41dc7f2;
    bVar3 = Utility_Util__IsValidFileName(pSVar5,(MethodInfo *)0x0);
    uStack_59 = (undefined1)bVar3;
    lStack_70 = 0x41dc80b;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_59);
    return pIVar4;
  }
  lStack_70 = 0x41dc81b;
  il2cpp_runtime_helper_022b2ca0();
  lStack_70 = extraout_RDX;
  if (g_data_057ad74a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad74a = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar4 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_02 = MethodInfo_String_ConvertTo_String;
    pSVar5 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    bVar3 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(pSVar5,method_02);
    uStack_71 = (undefined1)bVar3;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_71);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad74b = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromFile>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__LoadFromFile_b__4_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41dc540

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__LoadFromFile_b__4_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  uint uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  long lVar6;
  MethodInfo *method_01;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *method_02;
  Il2CppObject *unaff_R14;
  undefined1 auVar7 [16];
  undefined1 uStack_59;
  long lStack_58;
  undefined1 uStack_41;
  undefined8 *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  Il2CppObject *pIStack_20;
  
  if (g_data_057ad747 == '\0') {
    pIStack_20 = (Il2CppObject *)0x41dc55c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    pIStack_20 = (Il2CppObject *)0x41dc568;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pIStack_20 = (Il2CppObject *)0x41dc574;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad747 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pIStack_20 = (Il2CppObject *)0x41dc5a2;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_20 = (Il2CppObject *)0x41dc5b4;
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (unaff_R14,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        pIStack_20 = (Il2CppObject *)0x41dc5d0;
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
        pIStack_20 = (Il2CppObject *)0x41dc5db;
        CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile(pSVar4,uVar2 & 0xff,method_00);
        return (Il2CppObject *)0x0;
      }
    }
    pIStack_20 = (Il2CppObject *)0x41dc5ea;
    il2cpp_runtime_helper_022b2ca0();
  }
  pIStack_20 = (Il2CppObject *)0x41dc5ef;
  auVar7 = il2cpp_runtime_helper_022b2c90();
  lVar6 = auVar7._8_8_;
  uStack_30 = auVar7._0_8_;
  pSStack_28 = __a;
  pIStack_20 = unaff_R14;
  if (g_data_057ad748 == '\0') {
    lStack_38 = 0x41dc60c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    lStack_38 = 0x41dc618;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_38 = 0x41dc624;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad748 = '\x01';
  }
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      pIVar5 = *(Il2CppObject **)(lVar6 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        lStack_38 = 0x41dc652;
        il2cpp_runtime_helper_02337ed0();
      }
      lStack_38 = 0x41dc664;
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(lVar6 + 0x18)) {
        lStack_38 = 0x41dc680;
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (*(Il2CppObject **)(lVar6 + 0x28),MethodInfo_Boolean_ConvertTo_Boolean);
        lStack_38 = 0x41dc68b;
        CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile(pSVar4,uVar2 & 0xff,method_01);
        return (Il2CppObject *)0x0;
      }
    }
    lStack_38 = 0x41dc69a;
    il2cpp_runtime_helper_022b2ca0();
  }
  lStack_38 = 0x41dc69f;
  il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar6;
  if (g_data_057ad736 == '\0') {
    puStack_40 = (undefined8 *)0x41dc6ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    puStack_40 = (undefined8 *)0x41dc6fb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad736 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    puStack_40 = (undefined8 *)0x41dc71a;
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    puStack_40 = (undefined8 *)0x41dc6df;
    System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
    return (Il2CppObject *)0x0;
  }
  puStack_40 = (undefined8 *)0x41dc735;
  il2cpp_runtime_helper_022b2c90();
  puStack_40 = &TypeInfo_CustomLogicManager;
  if (g_data_057ad749 == '\0') {
    lStack_58 = 0x41dc75d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_58 = 0x41dc769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad749 = '\x01';
  }
  if (extraout_RDX == 0) {
    lStack_58 = 0x41dc816;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      lStack_58 = 0x41dc79f;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_58 = 0x41dc7b1;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (g_data_057ad737 == '\0') {
      lStack_58 = 0x41dc7c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad737 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      lStack_58 = 0x41dc7e8;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_58 = 0x41dc7f2;
    bVar3 = Utility_Util__IsValidFileName(pSVar4,(MethodInfo *)0x0);
    uStack_41 = (undefined1)bVar3;
    lStack_58 = 0x41dc80b;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
    return pIVar5;
  }
  lStack_58 = 0x41dc81b;
  il2cpp_runtime_helper_022b2ca0();
  lStack_58 = extraout_RDX;
  if (g_data_057ad74a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad74a = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_02 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    bVar3 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(pSVar4,method_02);
    uStack_59 = (undefined1)bVar3;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_59);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad74b = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToFile>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SaveToFile_b__5_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41dc5f0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SaveToFile_b__5_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  uint uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *method_01;
  undefined1 uStack_41;
  long lStack_40;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  System_Object_array *pSStack_20;
  
  if (g_data_057ad748 == '\0') {
    pSStack_20 = (System_Object_array *)0x41dc60c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    pSStack_20 = (System_Object_array *)0x41dc618;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pSStack_20 = (System_Object_array *)0x41dc624;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad748 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar5 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_20 = (System_Object_array *)0x41dc652;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_20 = (System_Object_array *)0x41dc664;
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        pSStack_20 = (System_Object_array *)0x41dc680;
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
        pSStack_20 = (System_Object_array *)0x41dc68b;
        CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile(pSVar4,uVar2 & 0xff,method_00);
        return (Il2CppObject *)0x0;
      }
    }
    pSStack_20 = (System_Object_array *)0x41dc69a;
    il2cpp_runtime_helper_022b2ca0();
  }
  pSStack_20 = (System_Object_array *)0x41dc69f;
  il2cpp_runtime_helper_022b2c90();
  pSStack_20 = __a;
  if (g_data_057ad736 == '\0') {
    puStack_28 = (undefined8 *)0x41dc6ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    puStack_28 = (undefined8 *)0x41dc6fb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad736 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    puStack_28 = (undefined8 *)0x41dc71a;
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    puStack_28 = (undefined8 *)0x41dc6df;
    System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
    return (Il2CppObject *)0x0;
  }
  puStack_28 = (undefined8 *)0x41dc735;
  il2cpp_runtime_helper_022b2c90();
  puStack_28 = &TypeInfo_CustomLogicManager;
  if (g_data_057ad749 == '\0') {
    lStack_40 = 0x41dc75d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_40 = 0x41dc769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad749 = '\x01';
  }
  if (extraout_RDX == 0) {
    lStack_40 = 0x41dc816;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      lStack_40 = 0x41dc79f;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_40 = 0x41dc7b1;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (g_data_057ad737 == '\0') {
      lStack_40 = 0x41dc7c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad737 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      lStack_40 = 0x41dc7e8;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_40 = 0x41dc7f2;
    bVar3 = Utility_Util__IsValidFileName(pSVar4,(MethodInfo *)0x0);
    uStack_29 = (undefined1)bVar3;
    lStack_40 = 0x41dc80b;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_29);
    return pIVar5;
  }
  lStack_40 = 0x41dc81b;
  il2cpp_runtime_helper_022b2ca0();
  lStack_40 = extraout_RDX;
  if (g_data_057ad74a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad74a = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    bVar3 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(pSVar4,method_01);
    uStack_41 = (undefined1)bVar3;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_41);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad74b = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41dc6a0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *method_00;
  undefined1 uStack_29;
  long lStack_28;
  undefined1 uStack_11;
  undefined8 *puStack_10;
  
  if (g_data_057ad736 == '\0') {
    puStack_10 = (undefined8 *)0x41dc6ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    puStack_10 = (undefined8 *)0x41dc6fb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad736 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    puStack_10 = (undefined8 *)0x41dc71a;
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    puStack_10 = (undefined8 *)0x41dc6df;
    System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
    return (Il2CppObject *)0x0;
  }
  puStack_10 = (undefined8 *)0x41dc735;
  il2cpp_runtime_helper_022b2c90();
  puStack_10 = &TypeInfo_CustomLogicManager;
  if (g_data_057ad749 == '\0') {
    lStack_28 = 0x41dc75d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_28 = 0x41dc769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad749 = '\x01';
  }
  if (extraout_RDX == 0) {
    lStack_28 = 0x41dc816;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar4 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      lStack_28 = 0x41dc79f;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_28 = 0x41dc7b1;
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (g_data_057ad737 == '\0') {
      lStack_28 = 0x41dc7c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad737 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      lStack_28 = 0x41dc7e8;
      il2cpp_runtime_helper_02337ed0();
    }
    lStack_28 = 0x41dc7f2;
    bVar2 = Utility_Util__IsValidFileName(pSVar3,(MethodInfo *)0x0);
    uStack_11 = (undefined1)bVar2;
    lStack_28 = 0x41dc80b;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_11);
    return pIVar4;
  }
  lStack_28 = 0x41dc81b;
  il2cpp_runtime_helper_022b2ca0();
  lStack_28 = extraout_RDX;
  if (g_data_057ad74a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad74a = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    pIVar4 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = MethodInfo_String_ConvertTo_String;
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    bVar2 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(pSVar3,method_00);
    uStack_29 = (undefined1)bVar2;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_29);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad74b = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsValidFileName>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__IsValidFileName_b__7_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41dc740

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__IsValidFileName_b__7_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  long extraout_RDX;
  MethodInfo *method_00;
  undefined1 uStack_21;
  System_Object_array *pSStack_20;
  undefined1 uStack_9;
  
  if (g_data_057ad749 == '\0') {
    pSStack_20 = (System_Object_array *)0x41dc75d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pSStack_20 = (System_Object_array *)0x41dc769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad749 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    pSStack_20 = (System_Object_array *)0x41dc816;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_20 = (System_Object_array *)0x41dc79f;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_Object_array *)0x41dc7b1;
    pSVar2 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (g_data_057ad737 == '\0') {
      pSStack_20 = (System_Object_array *)0x41dc7c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad737 = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      pSStack_20 = (System_Object_array *)0x41dc7e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_Object_array *)0x41dc7f2;
    bVar1 = Utility_Util__IsValidFileName(pSVar2,(MethodInfo *)0x0);
    uStack_9 = (undefined1)bVar1;
    pSStack_20 = (System_Object_array *)0x41dc80b;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_9);
    return pIVar3;
  }
  pSStack_20 = (System_Object_array *)0x41dc81b;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_20 = __a;
  if (g_data_057ad74a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad74a = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = MethodInfo_String_ConvertTo_String;
    pSVar2 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    bVar1 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(pSVar2,method_00);
    uStack_21 = (undefined1)bVar1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_21);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad74b = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__FileExists>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__FileExists_b__8_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41dc820

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__FileExists_b__8_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *fileName;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (g_data_057ad74a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad74a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = MethodInfo_String_ConvertTo_String;
    fileName = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar2,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    bVar1 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(fileName,method_00);
    local_9 = (undefined1)bVar1;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_9);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad74b = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41db4f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_Func_T__object____object__o *pSVar6;
  CustomLogic_CLMethodBinding_T__o *pCVar7;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad73b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"IsValidFileName");
    il2cpp_runtime_helper_023445d0(&"SetProperty");
    il2cpp_runtime_helper_023445d0(&"GetProperty");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"SaveToFile");
    il2cpp_runtime_helper_023445d0(&"FileExists");
    il2cpp_runtime_helper_023445d0(&"LoadFromFile");
    g_data_057ad73b = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x38dfc974) {
    if (uVar3 == 0x4a57fc2) {
      bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad740 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad740 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0xb488604) {
      bVar4 = System_String__op_Equality(name,"IsValidFileName",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad741 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsValidFileName_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad741 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0x38dfc973) &&
            (bVar4 = System_String__op_Equality(name,"FileExists",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad742 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FileExists_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad742 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 < 0x8f246a28) {
    if (uVar3 == 0x8f246a27) {
      bVar4 = System_String__op_Equality(name,"SaveToFile",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad73f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SaveToFile_b__5_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad73f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0x3fc653c7) &&
            (bVar4 = System_String__op_Equality(name,"LoadFromFile",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad73e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LoadFromFile_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad73e = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 == 0xb6e34446) {
    bVar4 = System_String__op_Equality(name,"GetProperty",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad73d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetProperty_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad73d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if ((uVar3 == 0xecbfdf0a) &&
          (bVar4 = System_String__op_Equality(name,"SetProperty",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPersistentDataBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad73c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db909;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db915;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db921;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db92d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetProperty_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad73c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db95c;
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db8ab;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db8c7;
    pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db8e1;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar6;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db8fb;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar6);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db982;
  pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41db99a;
  CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty (const MethodInfo* method);
// 0x41db860

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (g_data_057ad73c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetProperty_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad73c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty (const MethodInfo* method);
// 0x41db9b0

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (g_data_057ad73d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetProperty_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad73d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__LoadFromFile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile (const MethodInfo* method);
// 0x41dbb00

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (g_data_057ad73e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LoadFromFile_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad73e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SaveToFile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile (const MethodInfo* method);
// 0x41dbc50

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (g_data_057ad73f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SaveToFile_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad73f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x41dbda0

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (g_data_057ad740 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad740 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__IsValidFileName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName (const MethodInfo* method);
// 0x41dbef0

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (g_data_057ad741 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__IsValidFileName_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad741 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__FileExists
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists (const MethodInfo* method);
// 0x41dc040

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this;
  
  if (g_data_057ad742 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__FileExists_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad742 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPersistentDataBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPersistentDataBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41dc190

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057ad743 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"IsValidFileName");
    il2cpp_runtime_helper_023445d0(&"SetProperty");
    il2cpp_runtime_helper_023445d0(&"GetProperty");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"SaveToFile");
    il2cpp_runtime_helper_023445d0(&"FileExists");
    il2cpp_runtime_helper_023445d0(&"LoadFromFile");
    g_data_057ad743 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"SetProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"GetProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"LoadFromFile",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SaveToFile",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Clear",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"IsValidFileName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"FileExists",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad744 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad744 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___c___cctor (const MethodInfo* method);
// 0x41dc8c0

void CustomLogic_CustomLogicPersistentDataBuiltin___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad74b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad74b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___c___ctor (CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, const MethodInfo* method);
// 0x41dc930

void CustomLogic_CustomLogicPersistentDataBuiltin___c___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$<SaveToFile>b__4_0
// il2cpp: System_DateTime_o CustomLogic_CustomLogicPersistentDataBuiltin___c___SaveToFile_b__4_0 (CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, System_IO_FileInfo_o* x, const MethodInfo* method);
// 0x41dc940

System_DateTime_o
CustomLogic_CustomLogicPersistentDataBuiltin___c___SaveToFile_b__4_0
          (CustomLogic_CustomLogicPersistentDataBuiltin___c_o *__this,System_IO_FileInfo_o *x,
          MethodInfo *method)

{
  int iVar1;
  System_DateTime_o SVar2;
  System_DateTime_o extraout_RAX;
  System_DateTime_o extraout_RAX_00;
  
  if (x != (System_IO_FileInfo_o *)0x0) {
    SVar2 = System_IO_FileSystemInfo__get_LastWriteTime((System_IO_FileSystemInfo_o *)x,(MethodInfo *)0x0);
    return (System_DateTime_o)SVar2.fields._dateData;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad74c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad74c = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return (System_DateTime_o)extraout_RAX.fields._dateData;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return (System_DateTime_o)extraout_RAX_00.fields._dateData;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___ctor (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x41d9b90

void CustomLogic_CustomLogicPersistentDataBuiltin___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad731 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad731 = '\x01';
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


// CustomLogic.CustomLogicPersistentDataBuiltin$$SetProperty
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty (System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x41d9c00

void CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty
               (System_String_o *property,Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined8 uVar2;
  System_Exception_o *__this_00;
  System_String_o *message;
  Il2CppObject *defaultValue;
  
  if (g_data_057ad732 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ad732 = '\x01';
  }
  if ((((value == (Il2CppObject *)0x0) || (pIVar1 = value->klass, pIVar1 == g_data_057b9be8)) ||
      (pIVar1 == g_data_057b9bb8)) || ((pIVar1 == g_data_057b9c00 || (pIVar1 == g_data_057b9b98)))) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)property,value,MethodInfo_Void_set_Item);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"PersistentData.SetProperty only supports null, float, int, string, or bool values.");
  System_Exception___ctor_3cf6120(__this_00,message,(MethodInfo *)0x0);
  defaultValue = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetProperty);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad733 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetValueOrDefault_String_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad733 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
            (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0),(Il2CppObject *)__this_00,defaultValue,MethodInfo_Object_GetValueOrDefault_String_Object);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$GetProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin__GetProperty (System_String_o* property, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x41d9d00

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin__GetProperty
          (System_String_o *property,Il2CppObject *defaultValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057ad733 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetValueOrDefault_String_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad733 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
                     (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                       (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0),(Il2CppObject *)property,defaultValue,
                      MethodInfo_Object_GetValueOrDefault_String_Object);
  return pIVar1;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$LoadFromFile
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile (System_String_o* fileName, bool encrypted, const MethodInfo* method);
// 0x41d9d80

void CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile
               (System_String_o *fileName,bool_conflict encrypted,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_05;
  char cVar9;
  bool_conflict bVar10;
  undefined4 uVar11;
  System_String_o *pSVar12;
  _union_233249 __this_06;
  long *plVar13;
  SimpleAES_o *pSVar14;
  System_String_array *pSVar15;
  System_String_o *pSVar16;
  undefined8 uVar17;
  Il2CppRGCTXData *__this_07;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_08;
  Il2CppObject *pIVar18;
  char *pcVar19;
  System_String_o **ppSVar20;
  System_IO_DirectoryInfo_o *__this_09;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar21;
  SimpleJSONFixed_JSONString_o *__this_10;
  System_Exception_o *__this_11;
  VirtualInvokeData *pVVar22;
  Il2CppClass *pIVar23;
  int iVar24;
  long *plVar25;
  Il2CppRGCTXData *fileName_00;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  _union_233249 unaff_R12;
  long *plVar29;
  MethodInfo *method_00;
  System_String_o *unaff_R15;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  System_IO_FileInfo_array *pSVar32;
  undefined4 in_stack_fffffffffffffe78;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar33;
  System_String_o *pSStack_168;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_160;
  Il2CppRGCTXData *pIStack_148;
  _union_233249 _Stack_140;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_138;
  MethodInfo *pMStack_130;
  System_String_o *pSStack_128;
  SimpleAES_o *pSStack_120;
  undefined8 in_stack_fffffffffffffee8;
  float in_stack_fffffffffffffef0;
  undefined4 in_stack_fffffffffffffef4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef8;
  InvokerMethod in_stack_ffffffffffffff00;
  Il2CppObject *in_stack_ffffffffffffff08;
  Il2CppClass *in_stack_ffffffffffffff10;
  Il2CppType *in_stack_ffffffffffffff18;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff20;
  _union_13 in_stack_ffffffffffffff28;
  _union_14 local_d0;
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  method_00 = (MethodInfo *)(ulong)(uint)encrypted;
  if (g_data_057ad734 == '\0') {
    pSStack_120 = (SimpleAES_o *)0x41d9db0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_120 = (SimpleAES_o *)0x41d9dbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_120 = (SimpleAES_o *)0x41d9dc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    pSStack_120 = (SimpleAES_o *)0x41d9dd4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_120 = (SimpleAES_o *)0x41d9de0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    pSStack_120 = (SimpleAES_o *)0x41d9dec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    pSStack_120 = (SimpleAES_o *)0x41d9df8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SimpleAES);
    pSStack_120 = (SimpleAES_o *)0x41d9e04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    pSStack_120 = (SimpleAES_o *)0x41d9e10;
    il2cpp_runtime_helper_023445d0(&"int");
    pSStack_120 = (SimpleAES_o *)0x41d9e1c;
    il2cpp_runtime_helper_023445d0(&"string");
    pSStack_120 = (SimpleAES_o *)0x41d9e28;
    il2cpp_runtime_helper_023445d0(&"bool");
    pSStack_120 = (SimpleAES_o *)0x41d9e34;
    il2cpp_runtime_helper_023445d0(&".txt");
    pSStack_120 = (SimpleAES_o *)0x41d9e40;
    il2cpp_runtime_helper_023445d0(&"float");
    pSStack_120 = (SimpleAES_o *)0x41d9e4c;
    il2cpp_runtime_helper_023445d0(&"1");
    g_data_057ad734 = '\x01';
  }
  local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (Il2CppObject *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  plVar25 = &TypeInfo_FolderPaths;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pSStack_120 = (SimpleAES_o *)0x41d9ebe;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_120 = (SimpleAES_o *)0x41d9ed4;
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48),(MethodInfo *)0x0);
  plVar29 = &TypeInfo_CustomLogicManager;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStack_120 = (SimpleAES_o *)0x41d9eed;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_041da363:
    pSStack_120 = (SimpleAES_o *)0x41da368;
    il2cpp_runtime_helper_022b2c90();
label_041da368:
    pSStack_120 = (SimpleAES_o *)0x41da36d;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pSStack_120 = (SimpleAES_o *)0x41d9f17;
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar6,MethodInfo_Void_Clear);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      pSStack_120 = (SimpleAES_o *)0x41d9f2f;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_120 = (SimpleAES_o *)0x41d9f39;
    bVar10 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        pSStack_120 = (SimpleAES_o *)0x41d9f53;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar25 = *(long **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
      pSStack_120 = (SimpleAES_o *)0x41d9f76;
      pSVar12 = System_String__Concat_3ae5ba0(fileName,".txt",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
        pSStack_120 = (SimpleAES_o *)0x41d9f91;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_120 = (SimpleAES_o *)0x41d9f9e;
      pSVar12 = System_IO_Path__Combine((System_String_o *)plVar25,pSVar12,(MethodInfo *)0x0);
      pSStack_120 = (SimpleAES_o *)0x41d9fab;
      bVar10 = System_IO_File__Exists(pSVar12,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      pSStack_120 = (SimpleAES_o *)0x41d9fbd;
      pSVar12 = System_IO_File__ReadAllText(pSVar12,(MethodInfo *)0x0);
      if ((char)encrypted != '\0') {
        pSStack_120 = (SimpleAES_o *)0x41d9fd4;
        plVar25 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_SimpleAES);
        pSStack_120 = (SimpleAES_o *)0x41d9fe1;
        SimpleAES___ctor((SimpleAES_o *)plVar25,(MethodInfo *)0x0);
        if ((SimpleAES_o *)plVar25 == (SimpleAES_o *)0x0) goto label_041da363;
        pSStack_120 = (SimpleAES_o *)0x41d9ff7;
        pSVar12 = SimpleAES__Decrypt((SimpleAES_o *)plVar25,pSVar12,(MethodInfo *)0x0);
      }
      pSStack_120 = (SimpleAES_o *)0x41da004;
      __this_06.genericMethod = SimpleJSONFixed_JSON__Parse(pSVar12,(MethodInfo *)0x0);
      if (__this_06.genericMethod != (System_String_o *)0x0) {
        pSStack_120 = (SimpleAES_o *)0x41da01f;
        SimpleJSONFixed_JSONNode__get_Keys
                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,
                   __this_06.genericMethod,(MethodInfo *)0x0);
        local_38 = local_d0;
        local_78 = (Il2CppMethodPointer)CONCAT44(in_stack_fffffffffffffef4,in_stack_fffffffffffffef0);
        pSStack_120 = (SimpleAES_o *)0x41da074;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffef0;
        __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffef4;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_ffffffffffffff00;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_ffffffffffffff08
        ;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
        pSStack_70 = in_stack_fffffffffffffef8;
        local_68 = in_stack_ffffffffffffff00;
        pIStack_60 = in_stack_ffffffffffffff08;
        local_58 = in_stack_ffffffffffffff10;
        pIStack_50 = in_stack_ffffffffffffff18;
        local_48 = in_stack_ffffffffffffff20;
        _Stack_40 = in_stack_ffffffffffffff28;
        SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this_02,
                   (MethodInfo *)&local_78);
        local_c8._64_8_ = local_d0;
        local_c8._0_8_ = CONCAT44(in_stack_fffffffffffffef4,in_stack_fffffffffffffef0);
        pSStack_120 = (SimpleAES_o *)0x41da0b8;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffef0;
        __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffef4;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_ffffffffffffff00;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_ffffffffffffff08
        ;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
        local_c8._8_8_ = in_stack_fffffffffffffef8;
        local_c8._16_8_ = in_stack_ffffffffffffff00;
        local_c8._24_8_ = in_stack_ffffffffffffff08;
        local_c8._32_8_ = in_stack_ffffffffffffff10;
        local_c8._40_8_ = in_stack_ffffffffffffff18;
        local_c8._48_8_ = in_stack_ffffffffffffff20;
        local_c8._56_8_ = in_stack_ffffffffffffff28;
        bVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_03,(MethodInfo *)local_c8);
        if ((char)bVar10 != '\0') {
          method_00 = (MethodInfo *)local_c8;
          do {
            plVar29 = &TypeInfo_CustomLogicManager;
            pSStack_120 = (SimpleAES_o *)0x41da0da;
            __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffef0
            ;
            __this_04.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
            __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffef4
            ;
            __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
            __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_ffffffffffffff00;
            __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 in_stack_ffffffffffffff08;
            __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
            __this_04.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
            __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
            __this_04.fields.m_Enumerator.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
            pSVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_04,method_00);
            pSStack_120 = (SimpleAES_o *)0x41da0f4;
            plVar13 = (long *)(**(code **)(*(long *)__this_06.genericMethod + 0x1a8))
                                        (__this_06.genericMethod,pSVar12,
                                         *(undefined8 *)(*(long *)__this_06.genericMethod + 0x1b0));
            unaff_R12.genericMethod = __this_06.genericMethod;
            if (plVar13 == (long *)0x0) goto label_041da363;
            pSStack_120 = (SimpleAES_o *)0x41da110;
            pSVar14 = (SimpleAES_o *)
                      (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            if (pSVar14 == (SimpleAES_o *)0x0) goto label_041da363;
            pSStack_120 = (SimpleAES_o *)0x41da12d;
            pSVar15 = System_String__Split((System_String_o *)pSVar14,0x3a,0,(MethodInfo *)0x0);
            plVar25 = (long *)pSVar14;
            if (pSVar15 == (System_String_array *)0x0) goto label_041da363;
            if ((int)pSVar15->max_length == 0) goto label_041da368;
            unaff_R15 = pSVar15->m_Items[0];
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              pSStack_120 = (SimpleAES_o *)0x41da156;
              il2cpp_runtime_helper_02337ed0();
            }
            plVar29 = *(long **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
            pSStack_120 = (SimpleAES_o *)0x41da17c;
            bVar10 = System_String__op_Equality(unaff_R15,"float",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              pSStack_120 = (SimpleAES_o *)0x41da1e4;
              bVar10 = System_String__op_Equality(unaff_R15,"int",(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                pSStack_120 = (SimpleAES_o *)0x41da244;
                bVar10 = System_String__op_Equality(unaff_R15,"string",(MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  pSStack_120 = (SimpleAES_o *)0x41da27f;
                  bVar10 = System_String__op_Equality(unaff_R15,"bool",(MethodInfo *)0x0);
                  if ((char)bVar10 == '\0') {
                    plVar25 = &TypeInfo_CustomLogicManager;
                    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                      pSStack_120 = (SimpleAES_o *)0x41da2e8;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
                    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_041da363;
                    pSStack_120 = (SimpleAES_o *)0x41da311;
                    pSVar16 = (System_String_o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        (pSVar6,(Il2CppObject *)pSVar12,MethodInfo_Object_get_Item);
                  }
                  else {
                    pSStack_120 = (SimpleAES_o *)0x41da298;
                    pSVar16 = System_String__Substring_3af8da0
                                        ((System_String_o *)pSVar14,5,
                                         *(int *)&(pSVar14->fields).decryptor + -5,(MethodInfo *)0x0);
                    pSStack_120 = (SimpleAES_o *)0x41da2ac;
                    bVar10 = System_String__op_Equality(pSVar16,"1",(MethodInfo *)0x0);
                    in_stack_fffffffffffffef0 =
                         (float)CONCAT31((int3)((uint)in_stack_fffffffffffffef0 >> 8),(char)bVar10);
                    pSStack_120 = (SimpleAES_o *)0x41da2c5;
                    pSVar16 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xfffffffffffffef0);
                  }
                }
                else {
                  pSStack_120 = (SimpleAES_o *)0x41da25d;
                  pSVar16 = System_String__Substring_3af8da0
                                      ((System_String_o *)pSVar14,7,*(int *)&(pSVar14->fields).decryptor + -7,
                                       (MethodInfo *)0x0);
                }
              }
              else {
                pSStack_120 = (SimpleAES_o *)0x41da1fd;
                pSVar16 = System_String__Substring_3af8da0
                                    ((System_String_o *)pSVar14,4,*(int *)&(pSVar14->fields).decryptor + -4,
                                     (MethodInfo *)0x0);
                pSStack_120 = (SimpleAES_o *)0x41da207;
                in_stack_fffffffffffffef0 = (float)System_Int32__Parse(pSVar16,(MethodInfo *)0x0);
                pSStack_120 = (SimpleAES_o *)0x41da220;
                pSVar16 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xfffffffffffffef0);
              }
            }
            else {
              pSStack_120 = (SimpleAES_o *)0x41da195;
              pSVar16 = System_String__Substring_3af8da0
                                  ((System_String_o *)pSVar14,6,*(int *)&(pSVar14->fields).decryptor + -6,
                                   (MethodInfo *)0x0);
              pSStack_120 = (SimpleAES_o *)0x41da19f;
              in_stack_fffffffffffffef0 = System_Single__Parse(pSVar16,(MethodInfo *)0x0);
              pSStack_120 = (SimpleAES_o *)0x41da1ba;
              pSVar16 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&stack0xfffffffffffffef0);
            }
            if ((System_Collections_Generic_Dictionary_object__object__o *)plVar29 ==
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041da363;
            pSStack_120 = (SimpleAES_o *)0x41da338;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)plVar29,
                       (Il2CppObject *)pSVar12,(Il2CppObject *)pSVar16,MethodInfo_Void_set_Item);
            pSStack_120 = (SimpleAES_o *)0x41da342;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffef0
            ;
            __this_05.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffef4
            ;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_ffffffffffffff00;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 in_stack_ffffffffffffff08;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
            __this_05.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
            __this_05.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
            __this_05.fields.m_Enumerator.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
            bVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_05,method_00);
          } while ((char)bVar10 != '\0');
        }
        return;
      }
      goto label_041da363;
    }
  }
  pSStack_120 = (SimpleAES_o *)0x41da379;
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_120 = (SimpleAES_o *)0x41da381;
  __this_07 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(uVar17);
  pSStack_120 = (SimpleAES_o *)0x41da390;
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"PersistentData.LoadFromFile only supports legal fileName characters.");
  pSStack_120 = (SimpleAES_o *)0x41da39d;
  System_Exception___ctor_3cf6120((System_Exception_o *)__this_07,pSVar12,(MethodInfo *)0x0);
  pSStack_120 = (SimpleAES_o *)0x41da3a9;
  uVar11 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LoadFromFile);
  pSStack_120 = (SimpleAES_o *)0x41da3b4;
  fileName_00 = __this_07;
  il2cpp_runtime_helper_022b2b10();
  pIStack_148 = __this_07;
  _Stack_140 = unaff_R12;
  pSStack_138 = (System_Collections_Generic_Dictionary_object__object__o *)plVar29;
  pMStack_130 = method_00;
  pSStack_128 = unaff_R15;
  pSStack_120 = (SimpleAES_o *)plVar25;
  if (g_data_057ad735 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DirectoryInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_IO_FileInfo_OrderByDescendin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_IO_FileInfo_Skip_FileInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_FileInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_FileInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_FileInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SimpleAES);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DateTime_SaveToFile_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"int:");
    il2cpp_runtime_helper_023445d0(&"bool:");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"float:");
    il2cpp_runtime_helper_023445d0(&"string:");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ad735 = '\x01';
  }
  plVar25 = &TypeInfo_FolderPaths;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = Utility_Util__IsValidFileName((System_String_o *)fileName_00,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
    pSVar16 = System_String__Concat_3ae5ba0((System_String_o *)fileName_00,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = System_IO_Path__Combine(pSVar12,pSVar16,(MethodInfo *)0x0);
    plVar25 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)plVar25,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
    if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar32 = (System_IO_FileInfo_array *)plVar25,
       __this_08 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar6,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
       pSStack_168 = pSVar12,
       __this_08 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                (&SStack_160,__this_08,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      unaff_R12.genericMethod = &g_data_057b9b70;
      pSVar33 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                SStack_160.fields._dictionary;
label_041da6c5:
      while( true ) {
        if (pSVar32 == (System_IO_FileInfo_array *)0x0) {
          do {
            do {
              __this_00.fields._index = in_stack_fffffffffffffe78;
              __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar32;
              __this_00.fields._version = uVar11;
              __this_00.fields._currentKey = (Il2CppObject *)pSVar33;
              bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 (__this_00,(MethodInfo_3251B20 *)&stack0xfffffffffffffe80);
              if ((char)bVar10 == '\0') goto label_041da9c1;
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041dad86;
              pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar6,SStack_160.fields._currentKey,MethodInfo_Object_get_Item);
              auVar31._8_8_ = g_data_057b9be8;
              auVar31._0_8_ = pIVar18;
            } while (pIVar18 == (Il2CppObject *)0x0);
            pIVar23 = pIVar18->klass;
            if (pIVar23 == g_data_057b9be8) goto label_041dad95;
            if (pIVar23 == g_data_057b9bb8) goto label_041da8df;
            if (pIVar23 == g_data_057b9c00) goto label_041da950;
          } while (pIVar23 != g_data_057b9b98);
        }
        else {
          do {
            while( true ) {
              do {
                __this.fields._index = in_stack_fffffffffffffe78;
                __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar32;
                __this.fields._version = uVar11;
                __this.fields._currentKey = (Il2CppObject *)pSVar33;
                bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                   (__this,(MethodInfo_3251B20 *)&stack0xfffffffffffffe80);
                if ((char)bVar10 == '\0') goto label_041da9c1;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_041dad86;
                pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar6,SStack_160.fields._currentKey,MethodInfo_Object_get_Item);
                pSVar12 = "float:";
              } while (pIVar18 == (Il2CppObject *)0x0);
              pIVar23 = pIVar18->klass;
              if (pIVar23 != g_data_057b9be8) break;
              pSVar16 = (System_String_o *)
                        (*g_data_057b9be8->vtable[3].methodPtr)(pIVar18,g_data_057b9be8->vtable[3].method);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar16,(MethodInfo *)0x0);
              plVar25 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
              SimpleJSONFixed_JSONString___ctor
                        ((SimpleJSONFixed_JSONString_o *)plVar25,pSVar12,(MethodInfo *)0x0);
              pIVar23 = (pSVar32->obj).klass;
              (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_20_Add).methodPtr)
                        (pSVar32,SStack_160.fields._currentKey,plVar25,
                         (((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_20_Add).method);
            }
            if (pIVar23 == g_data_057b9bb8) goto label_041da8df;
            if (pIVar23 == g_data_057b9c00) goto label_041da950;
          } while (pIVar23 != g_data_057b9b98);
        }
        pcVar19 = (char *)il2cpp_runtime_helper_02305440(pIVar18);
        ppSVar20 = &"1";
        if (*pcVar19 == '\0') {
          ppSVar20 = (System_String_o **)&"0";
        }
        pSVar12 = System_String__Concat_3ae5ba0("bool:",*ppSVar20,(MethodInfo *)0x0);
        plVar25 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
        SimpleJSONFixed_JSONString___ctor((SimpleJSONFixed_JSONString_o *)plVar25,pSVar12,(MethodInfo *)0x0);
        if (pSVar32 == (System_IO_FileInfo_array *)0x0) break;
        pIVar23 = (pSVar32->obj).klass;
        (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_20_Add).methodPtr)
                  (pSVar32,SStack_160.fields._currentKey,plVar25,
                   (((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_20_Add).method);
      }
      goto label_041dade0;
    }
    goto label_041dad90;
  }
label_041dadef:
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
  puVar27 = &"PersistentData.SaveToFile only supports legal fileName characters.";
label_041dae2d:
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar27);
  System_Exception___ctor_3cf6120(__this_11,pSVar12,(MethodInfo *)0x0);
  uVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SaveToFile);
  il2cpp_runtime_helper_022b2b10(__this_11,uVar17);
label_041dae56:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar30 = il2cpp_runtime_helper_022fefe0();
    iVar24 = 0;
    if (auVar30._8_4_ != 1) break;
    plVar29 = (long *)__cxa_begin_catch();
    lVar28 = *plVar29;
    __cxa_end_catch();
label_041dacf2:
    if ((System_IO_FileInfo_array *)plVar25 != (System_IO_FileInfo_array *)0x0) {
      pIVar23 = (((System_IO_FileInfo_array *)plVar25)->obj).klass;
      uVar4._0_1_ = (pIVar23->_2).rank;
      uVar4._1_1_ = (pIVar23->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar8 = (pIVar23->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar26) == TypeInfo_IDisposable) {
            pVVar22 = &((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_0_Equals +
                      *(int *)((long)&pIVar8->offset + lVar26);
            goto label_041dad4d;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar26);
      }
      pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
label_041dad4d:
      (*pVVar22->methodPtr)(plVar25,pVVar22->method);
    }
    if (lVar28 == 0) {
      if ((iVar24 == 0x1a) || (iVar24 == 0)) {
        System_IO_File__WriteAllText(pSStack_168,unaff_R12.genericMethod,(MethodInfo *)0x0);
      }
      return;
    }
  }
  if ((System_IO_FileInfo_array *)plVar25 != (System_IO_FileInfo_array *)0x0) {
    pIVar23 = (((System_IO_FileInfo_array *)plVar25)->obj).klass;
    uVar5._0_1_ = (pIVar23->_2).rank;
    uVar5._1_1_ = (pIVar23->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar8 = (pIVar23->_1).interfaceOffsets;
      lVar28 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar28) == TypeInfo_IDisposable) {
          pVVar22 = &((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_0_Equals +
                    *(int *)((long)&pIVar8->offset + lVar28);
          goto label_041db0ed;
        }
        lVar28 = lVar28 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar28);
    }
    pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
label_041db0ed:
    (*pVVar22->methodPtr)(plVar25,pVVar22->method);
  }
  _Unwind_Resume(auVar30._0_8_);
label_041da9c1:
  __this_01.fields._index = in_stack_fffffffffffffe78;
  __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar32;
  __this_01.fields._version = uVar11;
  __this_01.fields._currentKey = (Il2CppObject *)pSVar33;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_01,(MethodInfo_3251B10 *)&stack0xfffffffffffffe80);
  cVar9 = (char)uVar11;
  plVar25 = &TypeInfo_FolderPaths;
  if (pSVar32 == (System_IO_FileInfo_array *)0x0) goto label_041dad90;
  pIVar23 = (pSVar32->obj).klass;
  unaff_R12.genericMethod =
       (void *)(*(((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_30_ToString).methodPtr)
                         (pSVar32,4,
                          (((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_30_ToString).method);
  if (cVar9 != '\0') {
    pSVar14 = (SimpleAES_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SimpleAES);
    SimpleAES___ctor(pSVar14,(MethodInfo *)0x0);
    if (pSVar14 == (SimpleAES_o *)0x0) goto label_041dad90;
    unaff_R12.genericMethod = SimpleAES__Encrypt(pSVar14,unaff_R12.genericMethod,(MethodInfo *)0x0);
  }
  if (unaff_R12.genericMethod == (System_String_o *)0x0) goto label_041dad90;
  if (1000000 < *(int *)&((SimpleJSONFixed_JSONNode_o *)((long)unaff_R12.genericMethod + 0x10))->klass) {
    uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_11 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
    puVar27 = &"PersistentData.SaveToFile exceeded 1 mb limit.";
    goto label_041dae2d;
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar25 = *(long **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
  __this_09 = (System_IO_DirectoryInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DirectoryInfo);
  System_IO_DirectoryInfo___ctor(__this_09,(System_String_o *)plVar25,(MethodInfo *)0x0);
  if (__this_09 == (System_IO_DirectoryInfo_o *)0x0) goto label_041dad90;
  plVar25 = (long *)System_IO_DirectoryInfo__GetFiles(__this_09,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_FileInfo_DateTime);
    System_Func_object__DateTime____ctor();
    lVar28 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar28 + 8) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar28 + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderByDescending_object__DateTime_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)plVar25,keySelector,MethodInfo_IOrderedEnumerable_1_System_IO_FileInfo_OrderByDescendin);
  pSVar21 = System_Linq_Enumerable__Skip_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,100,MethodInfo_IEnumerable_1_System_IO_FileInfo_Skip_FileInfo);
  if (pSVar21 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) goto label_041dad90;
  pSVar7 = pSVar21->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  if ((ulong)uVar1 == 0) goto label_041dabbf;
  pIVar8 = (pSVar7->_1).interfaceOffsets;
  lVar28 = 0;
  goto label_041dabb0;
  while (lVar28 = lVar28 + 0x10, (ulong)uVar1 << 4 != lVar28) {
label_041dabb0:
    if (*(long *)((long)&pIVar8->interfaceType + lVar28) == TypeInfo_IEnumerable_FileInfo) {
      pVVar22 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar28);
      goto label_041dabe1;
    }
  }
label_041dabbf:
  pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar21,TypeInfo_IEnumerable_FileInfo,0);
label_041dabe1:
  plVar25 = (long *)(*pVVar22->methodPtr)(pSVar21,pVVar22->method);
  if ((System_IO_FileInfo_array *)plVar25 != (System_IO_FileInfo_array *)0x0) {
    lVar28 = 0;
    do {
      pIVar23 = (((System_IO_FileInfo_array *)plVar25)->obj).klass;
      uVar2._0_1_ = (pIVar23->_2).rank;
      uVar2._1_1_ = (pIVar23->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pIVar23->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar26) == TypeInfo_IEnumerator) {
            pVVar22 = &((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_0_Equals +
                      *(int *)((long)&pIVar8->offset + lVar26);
            goto label_041dac63;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar26);
      }
      pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IEnumerator,0);
label_041dac63:
      cVar9 = (*pVVar22->methodPtr)(plVar25,pVVar22->method);
      if (cVar9 == '\0') {
        iVar24 = 0x1a;
        goto label_041dacf2;
      }
      pIVar23 = (((System_IO_FileInfo_array *)plVar25)->obj).klass;
      uVar3._0_1_ = (pIVar23->_2).rank;
      uVar3._1_1_ = (pIVar23->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pIVar23->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar26) == TypeInfo_IEnumerator_FileInfo) {
            pVVar22 = &((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_0_Equals +
                      *(int *)((long)&pIVar8->offset + lVar26);
            goto label_041dacc3;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar26);
      }
      pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IEnumerator_FileInfo,0);
label_041dacc3:
      plVar29 = (long *)(*pVVar22->methodPtr)(plVar25,pVVar22->method);
      if (plVar29 == (long *)0x0) goto label_041dad8b;
      (**(code **)(*plVar29 + 0x1e8))(plVar29,*(undefined8 *)(*plVar29 + 0x1f0));
    } while( true );
  }
  goto label_041dae56;
label_041dad86:
  il2cpp_runtime_helper_022b2c90();
label_041dad8b:
  il2cpp_runtime_helper_022b2c90();
label_041dad90:
  auVar31 = il2cpp_runtime_helper_022b2c90();
label_041dad95:
  pSVar12 = "float:";
  pSVar16 = (System_String_o *)
            (**(code **)(auVar31._8_8_ + 0x168))(auVar31._0_8_,*(undefined8 *)(auVar31._8_8_ + 0x170));
  pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar16,(MethodInfo *)0x0);
  __this_10 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_10,pSVar12,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_041dade0:
  il2cpp_runtime_helper_022b2c90();
label_041dade5:
  il2cpp_runtime_helper_022b2c90();
label_041dadea:
  il2cpp_runtime_helper_022b2c90();
  goto label_041dadef;
label_041da8df:
  pSVar12 = "int:";
  pSVar16 = (System_String_o *)(*pIVar23->vtable[3].methodPtr)(pIVar18,pIVar23->vtable[3].method);
  pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar16,(MethodInfo *)0x0);
  plVar25 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor((SimpleJSONFixed_JSONString_o *)plVar25,pSVar12,(MethodInfo *)0x0);
  if (pSVar32 == (System_IO_FileInfo_array *)0x0) goto label_041dade5;
  pIVar23 = (pSVar32->obj).klass;
  (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_20_Add).methodPtr)
            (pSVar32,SStack_160.fields._currentKey,plVar25,
             (((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_20_Add).method);
  goto label_041da6c5;
label_041da950:
  pSVar12 = "string:";
  pSVar16 = (System_String_o *)(*pIVar23->vtable[3].methodPtr)(pIVar18,pIVar23->vtable[3].method);
  pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar16,(MethodInfo *)0x0);
  plVar25 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor((SimpleJSONFixed_JSONString_o *)plVar25,pSVar12,(MethodInfo *)0x0);
  if (pSVar32 == (System_IO_FileInfo_array *)0x0) goto label_041dadea;
  pIVar23 = (pSVar32->obj).klass;
  (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_20_Add).methodPtr)
            (pSVar32,SStack_160.fields._currentKey,plVar25,
             (((SimpleJSONFixed_JSONObject_VTable *)pIVar23->vtable)->_20_Add).method);
  goto label_041da6c5;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$SaveToFile
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile (System_String_o* fileName, bool encrypted, const MethodInfo* method);
// 0x41da3c0

void CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile
               (System_String_o *fileName,bool_conflict encrypted,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  char cVar9;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  Il2CppObject *pIVar13;
  char *pcVar14;
  undefined8 *puVar15;
  SimpleAES_o *__this_03;
  System_IO_DirectoryInfo_o *__this_04;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar16;
  SimpleJSONFixed_JSONString_o *__this_05;
  undefined8 uVar17;
  System_Exception_o *__this_06;
  long *plVar18;
  VirtualInvokeData *pVVar19;
  Il2CppClass *pIVar20;
  int iVar21;
  long *__this_07;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  System_String_o *unaff_R12;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  System_IO_FileInfo_array *pSVar27;
  undefined4 in_stack_ffffffffffffff90;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar28;
  System_String_o *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (g_data_057ad735 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DirectoryInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_IO_FileInfo_OrderByDescendin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_IO_FileInfo_Skip_FileInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_FileInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_FileInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_FileInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SimpleAES);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DateTime_SaveToFile_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"int:");
    il2cpp_runtime_helper_023445d0(&"bool:");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"float:");
    il2cpp_runtime_helper_023445d0(&"string:");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ad735 = '\x01';
  }
  __this_07 = &TypeInfo_FolderPaths;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
    pSVar11 = System_String__Concat_3ae5ba0(fileName,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = System_IO_Path__Combine(pSVar12,pSVar11,(MethodInfo *)0x0);
    __this_07 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this_07,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
    if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar27 = (System_IO_FileInfo_array *)__this_07,
       __this_02 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar6,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
       local_50 = pSVar12,
       __this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                (&local_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      unaff_R12 = (System_String_o *)&g_data_057b9b70;
      pSVar28 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                local_48.fields._dictionary;
label_041da6c5:
      while( true ) {
        if (pSVar27 == (System_IO_FileInfo_array *)0x0) {
          do {
            do {
              __this_00.fields._index = in_stack_ffffffffffffff90;
              __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar27;
              __this_00.fields._version = encrypted;
              __this_00.fields._currentKey = (Il2CppObject *)pSVar28;
              bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
              if ((char)bVar10 == '\0') goto label_041da9c1;
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041dad86;
              pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar6,local_48.fields._currentKey,MethodInfo_Object_get_Item);
              auVar26._8_8_ = g_data_057b9be8;
              auVar26._0_8_ = pIVar13;
            } while (pIVar13 == (Il2CppObject *)0x0);
            pIVar20 = pIVar13->klass;
            if (pIVar20 == g_data_057b9be8) goto label_041dad95;
            if (pIVar20 == g_data_057b9bb8) goto label_041da8df;
            if (pIVar20 == g_data_057b9c00) goto label_041da950;
          } while (pIVar20 != g_data_057b9b98);
        }
        else {
          do {
            while( true ) {
              do {
                __this.fields._index = in_stack_ffffffffffffff90;
                __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar27;
                __this.fields._version = encrypted;
                __this.fields._currentKey = (Il2CppObject *)pSVar28;
                bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                   (__this,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
                if ((char)bVar10 == '\0') goto label_041da9c1;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_041dad86;
                pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar6,local_48.fields._currentKey,MethodInfo_Object_get_Item);
                pSVar12 = "float:";
              } while (pIVar13 == (Il2CppObject *)0x0);
              pIVar20 = pIVar13->klass;
              if (pIVar20 != g_data_057b9be8) break;
              pSVar11 = (System_String_o *)
                        (*g_data_057b9be8->vtable[3].methodPtr)(pIVar13,g_data_057b9be8->vtable[3].method);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar11,(MethodInfo *)0x0);
              __this_07 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
              SimpleJSONFixed_JSONString___ctor
                        ((SimpleJSONFixed_JSONString_o *)__this_07,pSVar12,(MethodInfo *)0x0);
              pIVar20 = (pSVar27->obj).klass;
              (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_20_Add).methodPtr)
                        (pSVar27,local_48.fields._currentKey,__this_07,
                         (((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_20_Add).method);
            }
            if (pIVar20 == g_data_057b9bb8) goto label_041da8df;
            if (pIVar20 == g_data_057b9c00) goto label_041da950;
          } while (pIVar20 != g_data_057b9b98);
        }
        pcVar14 = (char *)il2cpp_runtime_helper_02305440(pIVar13);
        puVar15 = &"1";
        if (*pcVar14 == '\0') {
          puVar15 = &"0";
        }
        pSVar12 = System_String__Concat_3ae5ba0("bool:",(System_String_o *)*puVar15,(MethodInfo *)0x0);
        __this_07 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
        SimpleJSONFixed_JSONString___ctor((SimpleJSONFixed_JSONString_o *)__this_07,pSVar12,(MethodInfo *)0x0)
        ;
        if (pSVar27 == (System_IO_FileInfo_array *)0x0) break;
        pIVar20 = (pSVar27->obj).klass;
        (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_20_Add).methodPtr)
                  (pSVar27,local_48.fields._currentKey,__this_07,
                   (((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_20_Add).method);
      }
      goto label_041dade0;
    }
    goto label_041dad90;
  }
label_041dadef:
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_06 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
  puVar23 = &"PersistentData.SaveToFile only supports legal fileName characters.";
label_041dae2d:
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar23);
  System_Exception___ctor_3cf6120(__this_06,pSVar12,(MethodInfo *)0x0);
  uVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SaveToFile);
  il2cpp_runtime_helper_022b2b10(__this_06,uVar17);
label_041dae56:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar25 = il2cpp_runtime_helper_022fefe0();
    iVar21 = 0;
    if (auVar25._8_4_ != 1) break;
    plVar18 = (long *)__cxa_begin_catch();
    lVar24 = *plVar18;
    __cxa_end_catch();
label_041dacf2:
    if ((System_IO_FileInfo_array *)__this_07 != (System_IO_FileInfo_array *)0x0) {
      pIVar20 = (((System_IO_FileInfo_array *)__this_07)->obj).klass;
      uVar4._0_1_ = (pIVar20->_2).rank;
      uVar4._1_1_ = (pIVar20->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar8 = (pIVar20->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar22) == TypeInfo_IDisposable) {
            pVVar19 = &((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_0_Equals +
                      *(int *)((long)&pIVar8->offset + lVar22);
            goto label_041dad4d;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar22);
      }
      pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IDisposable,0);
label_041dad4d:
      (*pVVar19->methodPtr)(__this_07,pVVar19->method);
    }
    if (lVar24 == 0) {
      if ((iVar21 == 0x1a) || (iVar21 == 0)) {
        System_IO_File__WriteAllText(local_50,unaff_R12,(MethodInfo *)0x0);
      }
      return;
    }
  }
  if ((System_IO_FileInfo_array *)__this_07 != (System_IO_FileInfo_array *)0x0) {
    pIVar20 = (((System_IO_FileInfo_array *)__this_07)->obj).klass;
    uVar5._0_1_ = (pIVar20->_2).rank;
    uVar5._1_1_ = (pIVar20->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar8 = (pIVar20->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar24) == TypeInfo_IDisposable) {
          pVVar19 = &((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_0_Equals +
                    *(int *)((long)&pIVar8->offset + lVar24);
          goto label_041db0ed;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar24);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IDisposable,0);
label_041db0ed:
    (*pVVar19->methodPtr)(__this_07,pVVar19->method);
  }
  _Unwind_Resume(auVar25._0_8_);
label_041da9c1:
  __this_01.fields._index = in_stack_ffffffffffffff90;
  __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar27;
  __this_01.fields._version = encrypted;
  __this_01.fields._currentKey = (Il2CppObject *)pSVar28;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
  cVar9 = (char)encrypted;
  __this_07 = &TypeInfo_FolderPaths;
  if (pSVar27 == (System_IO_FileInfo_array *)0x0) goto label_041dad90;
  pIVar20 = (pSVar27->obj).klass;
  unaff_R12 = (System_String_o *)
              (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_30_ToString).methodPtr)
                        (pSVar27,4,
                         (((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_30_ToString).method);
  if (cVar9 != '\0') {
    __this_03 = (SimpleAES_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SimpleAES);
    SimpleAES___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 == (SimpleAES_o *)0x0) goto label_041dad90;
    unaff_R12 = SimpleAES__Encrypt(__this_03,unaff_R12,(MethodInfo *)0x0);
  }
  if (unaff_R12 == (System_String_o *)0x0) goto label_041dad90;
  if (1000000 < (unaff_R12->fields)._stringLength) {
    uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_06 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
    puVar23 = &"PersistentData.SaveToFile exceeded 1 mb limit.";
    goto label_041dae2d;
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_07 = *(long **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
  __this_04 = (System_IO_DirectoryInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DirectoryInfo);
  System_IO_DirectoryInfo___ctor(__this_04,(System_String_o *)__this_07,(MethodInfo *)0x0);
  if (__this_04 == (System_IO_DirectoryInfo_o *)0x0) goto label_041dad90;
  __this_07 = (long *)System_IO_DirectoryInfo__GetFiles(__this_04,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_FileInfo_DateTime);
    System_Func_object__DateTime____ctor();
    lVar24 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar24 + 8) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar24 + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderByDescending_object__DateTime_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)__this_07,keySelector,MethodInfo_IOrderedEnumerable_1_System_IO_FileInfo_OrderByDescendin)
  ;
  pSVar16 = System_Linq_Enumerable__Skip_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,100,MethodInfo_IEnumerable_1_System_IO_FileInfo_Skip_FileInfo);
  if (pSVar16 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) goto label_041dad90;
  pSVar7 = pSVar16->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  if ((ulong)uVar1 == 0) goto label_041dabbf;
  pIVar8 = (pSVar7->_1).interfaceOffsets;
  lVar24 = 0;
  goto label_041dabb0;
  while (lVar24 = lVar24 + 0x10, (ulong)uVar1 << 4 != lVar24) {
label_041dabb0:
    if (*(long *)((long)&pIVar8->interfaceType + lVar24) == TypeInfo_IEnumerable_FileInfo) {
      pVVar19 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar24);
      goto label_041dabe1;
    }
  }
label_041dabbf:
  pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar16,TypeInfo_IEnumerable_FileInfo,0);
label_041dabe1:
  __this_07 = (long *)(*pVVar19->methodPtr)(pSVar16,pVVar19->method);
  if ((System_IO_FileInfo_array *)__this_07 != (System_IO_FileInfo_array *)0x0) {
    lVar24 = 0;
    do {
      pIVar20 = (((System_IO_FileInfo_array *)__this_07)->obj).klass;
      uVar2._0_1_ = (pIVar20->_2).rank;
      uVar2._1_1_ = (pIVar20->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pIVar20->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar22) == TypeInfo_IEnumerator) {
            pVVar19 = &((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_0_Equals +
                      *(int *)((long)&pIVar8->offset + lVar22);
            goto label_041dac63;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar22);
      }
      pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerator,0);
label_041dac63:
      cVar9 = (*pVVar19->methodPtr)(__this_07,pVVar19->method);
      if (cVar9 == '\0') {
        iVar21 = 0x1a;
        goto label_041dacf2;
      }
      pIVar20 = (((System_IO_FileInfo_array *)__this_07)->obj).klass;
      uVar3._0_1_ = (pIVar20->_2).rank;
      uVar3._1_1_ = (pIVar20->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pIVar20->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar22) == TypeInfo_IEnumerator_FileInfo) {
            pVVar19 = &((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_0_Equals +
                      *(int *)((long)&pIVar8->offset + lVar22);
            goto label_041dacc3;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar22);
      }
      pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerator_FileInfo,0);
label_041dacc3:
      plVar18 = (long *)(*pVVar19->methodPtr)(__this_07,pVVar19->method);
      if (plVar18 == (long *)0x0) goto label_041dad8b;
      (**(code **)(*plVar18 + 0x1e8))(plVar18,*(undefined8 *)(*plVar18 + 0x1f0));
    } while( true );
  }
  goto label_041dae56;
label_041dad86:
  il2cpp_runtime_helper_022b2c90();
label_041dad8b:
  il2cpp_runtime_helper_022b2c90();
label_041dad90:
  auVar26 = il2cpp_runtime_helper_022b2c90();
label_041dad95:
  pSVar12 = "float:";
  pSVar11 = (System_String_o *)
            (**(code **)(auVar26._8_8_ + 0x168))(auVar26._0_8_,*(undefined8 *)(auVar26._8_8_ + 0x170));
  pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar11,(MethodInfo *)0x0);
  __this_05 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_05,pSVar12,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_041dade0:
  il2cpp_runtime_helper_022b2c90();
label_041dade5:
  il2cpp_runtime_helper_022b2c90();
label_041dadea:
  il2cpp_runtime_helper_022b2c90();
  goto label_041dadef;
label_041da8df:
  pSVar12 = "int:";
  pSVar11 = (System_String_o *)(*pIVar20->vtable[3].methodPtr)(pIVar13,pIVar20->vtable[3].method);
  pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar11,(MethodInfo *)0x0);
  __this_07 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor((SimpleJSONFixed_JSONString_o *)__this_07,pSVar12,(MethodInfo *)0x0);
  if (pSVar27 == (System_IO_FileInfo_array *)0x0) goto label_041dade5;
  pIVar20 = (pSVar27->obj).klass;
  (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_20_Add).methodPtr)
            (pSVar27,local_48.fields._currentKey,__this_07,
             (((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_20_Add).method);
  goto label_041da6c5;
label_041da950:
  pSVar12 = "string:";
  pSVar11 = (System_String_o *)(*pIVar20->vtable[3].methodPtr)(pIVar13,pIVar20->vtable[3].method);
  pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar11,(MethodInfo *)0x0);
  __this_07 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor((SimpleJSONFixed_JSONString_o *)__this_07,pSVar12,(MethodInfo *)0x0);
  if (pSVar27 == (System_IO_FileInfo_array *)0x0) goto label_041dadea;
  pIVar20 = (pSVar27->obj).klass;
  (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_20_Add).methodPtr)
            (pSVar27,local_48.fields._currentKey,__this_07,
             (((SimpleJSONFixed_JSONObject_VTable *)pIVar20->vtable)->_20_Add).method);
  goto label_041da6c5;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__Clear (const MethodInfo* method);
// 0x41db130

void CustomLogic_CustomLogicPersistentDataBuiltin__Clear(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057ad736 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ad736 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad737 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ad737 = '\x01';
      iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      Utility_Util__IsValidFileName((System_String_o *)__this,(MethodInfo *)0x0);
      return;
    }
    Utility_Util__IsValidFileName((System_String_o *)__this,(MethodInfo *)0x0);
    return;
  }
  System_Collections_Generic_Dictionary_object__object___Clear(__this,MethodInfo_Void_Clear);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$IsValidFileName
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__IsValidFileName (System_String_o* fileName, const MethodInfo* method);
// 0x41db1d0

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__IsValidFileName(System_String_o *fileName,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (g_data_057ad737 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ad737 = '\x01';
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  bVar2 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$FileExists
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__FileExists (System_String_o* fileName, const MethodInfo* method);
// 0x41db240

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(System_String_o *fileName,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *path2;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_Exception_o *__this;
  
  if (g_data_057ad738 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&".txt");
    g_data_057ad738 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x48);
    path2 = System_String__Concat_3ae5ba0(fileName,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = System_IO_Path__Combine(pSVar2,path2,(MethodInfo *)0x0);
    bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"PersistentData.FileExists only supports legal fileName characters.");
  System_Exception___ctor_3cf6120(__this,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_FileExists);
  il2cpp_runtime_helper_022b2b10(__this,uVar3);
  if (g_data_057ad739 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PersistentData");
    g_data_057ad739 = '\x01';
  }
  return (bool_conflict)"PersistentData";
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPersistentDataBuiltin__get_ClassName (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x41db370

System_String_o *
CustomLogic_CustomLogicPersistentDataBuiltin__get_ClassName
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad739 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PersistentData");
    g_data_057ad739 = '\x01';
  }
  return "PersistentData";
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsAbstract (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x41db3a0

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsStatic (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x41db3b0

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x41db3c0

bool_conflict
CustomLogic_CustomLogicPersistentDataBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


