// Type: CustomLogic.CustomLogicLocaleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLocaleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLocaleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLocaleBuiltin_o* CustomLogic_CustomLogicLocaleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41cf070

CustomLogic_CustomLogicLocaleBuiltin_o *
CustomLogic_CustomLogicLocaleBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  CustomLogic_CustomLogicLocaleBuiltin_o *pCVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  undefined8 *puVar9;
  System_ArgumentException_o *pSVar10;
  System_Func_T__object__o *pSVar11;
  System_Action_T__object__o *setter;
  System_Func_T__object____object__o *pSVar12;
  System_ArgumentException_o **ppSVar13;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad6b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6b2 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLocaleBuiltin);
    CustomLogic_CustomLogicLocaleBuiltin___ctor(pCVar5,method);
    return pCVar5;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar6 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLocaleBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar7,pSVar6,str2,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLocaleBuiltin_CreateInstance);
  pSVar10 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad6b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"DefaultLanguage");
    il2cpp_runtime_helper_023445d0(&"RegisterLanguage");
    il2cpp_runtime_helper_023445d0(&"CurrentLanguage");
    il2cpp_runtime_helper_023445d0(&"RegisterLanguages");
    il2cpp_runtime_helper_023445d0(&"RegisterFallback");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"RemoveFallback");
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ad6b3 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar10,(MethodInfo *)0x0);
  if (uVar3 < 0x5e1c8cab) {
    if (uVar3 < 0x37915e09) {
      if (uVar3 == 0x28b19ea3) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Set",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad6b7 == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__5_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad6b7 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = message;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
          }
          pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
          return pCVar5;
        }
      }
      else if ((uVar3 == 0x37915e08) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"CurrentLanguage",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        puVar9 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar9 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar10 = pSStack_28;
        }
        else {
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar10 = pSStack_28;
        }
        goto CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage;
      }
    }
    else if (uVar3 == 0x5b89647c) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"DefaultLanguage",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad6b5 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLocaleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DefaultLanguage_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DefaultLanguage_g____sette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object);
          g_data_057ad6b5 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object);
        System_Func_object__object____ctor();
        setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLocaleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0x5e1c8caa) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"RegisterLanguage",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad6b8 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterLanguage_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad6b8 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
      }
      pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 < 0x9cbb72c4) {
    if (uVar3 == 0x9cbb72c3) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"RemoveFallback",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad6bb == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveFallback_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad6bb = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = message;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar12);
        }
        pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0x7106e006) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"RegisterFallback",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad6ba == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterFallback_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad6ba = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar12);
      }
      pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 == 0xb6973ef7) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"Get",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad6b6 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad6b6 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
      }
      pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return pCVar5;
    }
  }
  else if ((uVar3 == 0xfff1b99b) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar10,"RegisterLanguages",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057ad6b9 == '\0') {
      pSStack_28 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterLanguages_b__7_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad6b9 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_28 = message;
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    else {
      pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
    }
    pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar5,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    return pCVar5;
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLocaleBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar6,(System_String_o *)pSVar10,pSVar7,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar10 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar10,(System_String_o *)message,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar9 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar10,uVar8);
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage:
  *(System_ArgumentException_o **)((long)ppSVar13 + -8) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = pSVar10;
  *(undefined8 **)((long)ppSVar13 + -0x18) = puVar9;
  if (g_data_057ad6b4 == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41cf569;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CurrentLanguage_g____get);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41cf575;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41cf581;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41cf58d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object);
    g_data_057ad6b4 = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41cf5a3;
  pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41cf5bc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41cf5cb;
  pCVar5 = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41cf5e5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
  return pCVar5;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41d02c0

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad6c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad6c0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41d0330

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d0340

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *key;
  System_String_o *value;
  CustomLogic_CustomLogicDictBuiltin_o *strings;
  Il2CppObject *pIVar5;
  Il2CppObject *value_00;
  Utility_RateLimit_o *__this_00;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar6;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (g_data_057ad6c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar5 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar6 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = CustomLogic_CustomLogicLocaleBuiltin__Get(pSVar4,pMVar6);
      return (Il2CppObject *)pSVar4;
    }
    pSVar4 = CustomLogic_CustomLogicLocaleBuiltin__Get(pSVar4,pMVar6);
    return (Il2CppObject *)pSVar4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c2 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        key = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if (2 < *(uint *)(extraout_RDX + 0x18)) {
          value = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (*(Il2CppObject **)(extraout_RDX + 0x30),(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicLocaleBuiltin__Set(pSVar4,key,value,method);
          return (Il2CppObject *)0x0;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicDictBuiltin_ConvertTo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c3 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        strings = (CustomLogic_CustomLogicDictBuiltin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (*(Il2CppObject **)(extraout_RDX_00 + 0x28),MethodInfo_CustomLogicDictBuiltin_ConvertTo_CustomLogicDictBuiltin);
        pMVar6 = extraout_RDX_01;
        if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar6 = extraout_RDX_02;
        }
        CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage(pSVar4,strings,pMVar6);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c4 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar6 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(pSVar4,pMVar6);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c5 = '\x01';
  }
  if (extraout_RDX_04 == 0) {
label_041d07af:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_04 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX_04 + 0x18)) {
      value_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_04 + 0x28),(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ad6ad != '\0') goto label_041d0725;
label_041d076c:
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        if (g_data_057ad6ad == '\0') goto label_041d076c;
label_041d0725:
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item(pSVar2,pIVar5,value_00,MethodInfo_Void_set_Item);
        return (Il2CppObject *)0x0;
      }
      goto label_041d07af;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c6 = '\x01';
  }
  if (extraout_RDX_05 != 0) {
    if (*(int *)(extraout_RDX_05 + 0x18) == 0) goto label_041d08e9;
    pIVar5 = *(Il2CppObject **)(extraout_RDX_05 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad6ae != '\0') goto label_041d085b;
label_041d08a1:
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057ad6ae = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      if (g_data_057ad6ae == '\0') goto label_041d08a1;
label_041d085b:
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar2,pIVar5,MethodInfo_Boolean_Remove);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041d08e9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RateLimit);
    g_data_057ad6c7 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RateLimit);
  if ((char)bVar3 == '\0') {
    Utility_RateLimit___ctor(__this_00,0x14,1.0,(MethodInfo *)0x0);
    uVar8 = 300;
    uVar7 = 300;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    Utility_RateLimit___ctor(__this_00,0x28,1.0,(MethodInfo *)0x0);
    uVar8 = 1000;
    uVar7 = 1000;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar7 = uVar8;
  }
  **(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicMapBuiltin + 0xb8),__this_00);
  pIVar5 = *(Il2CppObject **)(TypeInfo_CustomLogicMapBuiltin + 0xb8);
  *(undefined4 *)((long)&pIVar5->monitor + 4) = uVar7;
  return pIVar5;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d03f0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *key;
  System_String_o *value;
  CustomLogic_CustomLogicDictBuiltin_o *strings;
  Il2CppObject *pIVar5;
  Il2CppObject *value_00;
  Utility_RateLimit_o *__this_00;
  long extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar6;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (g_data_057ad6c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)__a->m_Items[1];
        key = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          value = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[2],(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicLocaleBuiltin__Set(pSVar4,key,value,method);
          return (Il2CppObject *)0x0;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicDictBuiltin_ConvertTo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c3 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        strings = (CustomLogic_CustomLogicDictBuiltin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (*(Il2CppObject **)(extraout_RDX + 0x28),MethodInfo_CustomLogicDictBuiltin_ConvertTo_CustomLogicDictBuiltin);
        pMVar6 = extraout_RDX_00;
        if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar6 = extraout_RDX_01;
        }
        CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage(pSVar4,strings,pMVar6);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c4 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar6 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(pSVar4,pMVar6);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c5 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
label_041d07af:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_03 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX_03 + 0x18)) {
      value_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (*(Il2CppObject **)(extraout_RDX_03 + 0x28),(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ad6ad != '\0') goto label_041d0725;
label_041d076c:
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        if (g_data_057ad6ad == '\0') goto label_041d076c;
label_041d0725:
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item(pSVar2,pIVar5,value_00,MethodInfo_Void_set_Item);
        return (Il2CppObject *)0x0;
      }
      goto label_041d07af;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c6 = '\x01';
  }
  if (extraout_RDX_04 != 0) {
    if (*(int *)(extraout_RDX_04 + 0x18) == 0) goto label_041d08e9;
    pIVar5 = *(Il2CppObject **)(extraout_RDX_04 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad6ae != '\0') goto label_041d085b;
label_041d08a1:
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057ad6ae = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      if (g_data_057ad6ae == '\0') goto label_041d08a1;
label_041d085b:
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar2,pIVar5,MethodInfo_Boolean_Remove);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041d08e9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RateLimit);
    g_data_057ad6c7 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RateLimit);
  if ((char)bVar3 == '\0') {
    Utility_RateLimit___ctor(__this_00,0x14,1.0,(MethodInfo *)0x0);
    uVar8 = 300;
    uVar7 = 300;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    Utility_RateLimit___ctor(__this_00,0x28,1.0,(MethodInfo *)0x0);
    uVar8 = 1000;
    uVar7 = 1000;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar7 = uVar8;
  }
  **(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicMapBuiltin + 0xb8),__this_00);
  pIVar5 = *(Il2CppObject **)(TypeInfo_CustomLogicMapBuiltin + 0xb8);
  *(undefined4 *)((long)&pIVar5->monitor + 4) = uVar7;
  return pIVar5;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguage>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguage_b__6_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d04e0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguage_b__6_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  CustomLogic_CustomLogicDictBuiltin_o *strings;
  Il2CppObject *pIVar5;
  Il2CppObject *value;
  Utility_RateLimit_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (g_data_057ad6c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicDictBuiltin_ConvertTo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        strings = (CustomLogic_CustomLogicDictBuiltin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[1],MethodInfo_CustomLogicDictBuiltin_ConvertTo_CustomLogicDictBuiltin);
        pMVar6 = extraout_RDX;
        if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar6 = extraout_RDX_00;
        }
        CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage(pSVar4,strings,pMVar6);
        return (Il2CppObject *)0x0;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c4 = '\x01';
  }
  if (extraout_RDX_01 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    pIVar5 = *(Il2CppObject **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar6 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(pSVar4,pMVar6);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c5 = '\x01';
  }
  if (extraout_RDX_02 == 0) {
label_041d07af:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_02 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX_02 + 0x18)) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (*(Il2CppObject **)(extraout_RDX_02 + 0x28),(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ad6ad != '\0') goto label_041d0725;
label_041d076c:
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        if (g_data_057ad6ad == '\0') goto label_041d076c;
label_041d0725:
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item(pSVar2,pIVar5,value,MethodInfo_Void_set_Item);
        return (Il2CppObject *)0x0;
      }
      goto label_041d07af;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c6 = '\x01';
  }
  if (extraout_RDX_03 != 0) {
    if (*(int *)(extraout_RDX_03 + 0x18) == 0) goto label_041d08e9;
    pIVar5 = *(Il2CppObject **)(extraout_RDX_03 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar5,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad6ae != '\0') goto label_041d085b;
label_041d08a1:
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057ad6ae = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      if (g_data_057ad6ae == '\0') goto label_041d08a1;
label_041d085b:
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar2,pIVar5,MethodInfo_Boolean_Remove);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041d08e9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RateLimit);
    g_data_057ad6c7 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RateLimit);
  if ((char)bVar3 == '\0') {
    Utility_RateLimit___ctor(__this_00,0x14,1.0,(MethodInfo *)0x0);
    uVar8 = 300;
    uVar7 = 300;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    Utility_RateLimit___ctor(__this_00,0x28,1.0,(MethodInfo *)0x0);
    uVar8 = 1000;
    uVar7 = 1000;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar7 = uVar8;
  }
  **(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicMapBuiltin + 0xb8),__this_00);
  pIVar5 = *(Il2CppObject **)(TypeInfo_CustomLogicMapBuiltin + 0xb8);
  *(undefined4 *)((long)&pIVar5->monitor + 4) = uVar7;
  return pIVar5;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguages>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguages_b__7_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d05c0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguages_b__7_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pattern;
  Il2CppObject *pIVar4;
  Il2CppObject *value;
  Utility_RateLimit_o *__this_00;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined4 uVar5;
  undefined4 uVar6;
  MethodInfo *method_00;
  
  if (g_data_057ad6c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar4 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = MethodInfo_String_ConvertTo_String;
    pattern = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(pattern,method_00);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c5 = '\x01';
  }
  if (extraout_RDX == 0) {
label_041d07af:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (1 < *(uint *)(extraout_RDX + 0x18)) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (*(Il2CppObject **)(extraout_RDX + 0x28),(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ad6ad != '\0') goto label_041d0725;
label_041d076c:
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        if (g_data_057ad6ad == '\0') goto label_041d076c;
label_041d0725:
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item(pSVar2,pIVar4,value,MethodInfo_Void_set_Item);
        return (Il2CppObject *)0x0;
      }
      goto label_041d07af;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c6 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) == 0) goto label_041d08e9;
    pIVar4 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad6ae != '\0') goto label_041d085b;
label_041d08a1:
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057ad6ae = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      if (g_data_057ad6ae == '\0') goto label_041d08a1;
label_041d085b:
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar2,pIVar4,MethodInfo_Boolean_Remove);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041d08e9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RateLimit);
    g_data_057ad6c7 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RateLimit);
  if ((char)bVar3 == '\0') {
    Utility_RateLimit___ctor(__this_00,0x14,1.0,(MethodInfo *)0x0);
    uVar6 = 300;
    uVar5 = 300;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    Utility_RateLimit___ctor(__this_00,0x28,1.0,(MethodInfo *)0x0);
    uVar6 = 1000;
    uVar5 = 1000;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar5 = uVar6;
  }
  **(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicMapBuiltin + 0xb8),__this_00);
  pIVar4 = *(Il2CppObject **)(TypeInfo_CustomLogicMapBuiltin + 0xb8);
  *(undefined4 *)((long)&pIVar4->monitor + 4) = uVar5;
  return pIVar4;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFallback>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterFallback_b__8_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d0670

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterFallback_b__8_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *value;
  Utility_RateLimit_o *__this_00;
  long extraout_RDX;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (g_data_057ad6c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041d07af:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ad6ad != '\0') goto label_041d0725;
label_041d076c:
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        if (g_data_057ad6ad == '\0') goto label_041d076c;
label_041d0725:
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item(pSVar2,pIVar4,value,MethodInfo_Void_set_Item);
        return (Il2CppObject *)0x0;
      }
      goto label_041d07af;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c6 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041d08e9;
    pIVar4 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar4,MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad6ae != '\0') goto label_041d085b;
label_041d08a1:
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057ad6ae = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      if (g_data_057ad6ae == '\0') goto label_041d08a1;
label_041d085b:
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar2,pIVar4,MethodInfo_Boolean_Remove);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041d08e9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RateLimit);
    g_data_057ad6c7 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RateLimit);
  if ((char)bVar3 == '\0') {
    Utility_RateLimit___ctor(__this_00,0x14,1.0,(MethodInfo *)0x0);
    uVar6 = 300;
    uVar5 = 300;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    Utility_RateLimit___ctor(__this_00,0x28,1.0,(MethodInfo *)0x0);
    uVar6 = 1000;
    uVar5 = 1000;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar5 = uVar6;
  }
  **(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicMapBuiltin + 0xb8),__this_00);
  pIVar4 = *(Il2CppObject **)(TypeInfo_CustomLogicMapBuiltin + 0xb8);
  *(undefined4 *)((long)&pIVar4->monitor + 4) = uVar5;
  return pIVar4;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveFallback>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RemoveFallback_b__9_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41d07c0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RemoveFallback_b__9_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Utility_RateLimit_o *__this_01;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (g_data_057ad6c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicLocaleBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad6c6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041d08e9;
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad6ae != '\0') goto label_041d085b;
label_041d08a1:
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057ad6ae = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      if (g_data_057ad6ae == '\0') goto label_041d08a1;
label_041d085b:
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    __this = (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(__this_00,pIVar3,MethodInfo_Boolean_Remove);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041d08e9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad6c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RateLimit);
    g_data_057ad6c7 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  __this_01 = (Utility_RateLimit_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RateLimit);
  if ((char)bVar2 == '\0') {
    Utility_RateLimit___ctor(__this_01,0x14,1.0,(MethodInfo *)0x0);
    uVar5 = 300;
    uVar4 = 300;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    Utility_RateLimit___ctor(__this_01,0x28,1.0,(MethodInfo *)0x0);
    uVar5 = 1000;
    uVar4 = 1000;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar4 = uVar5;
  }
  **(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicMapBuiltin + 0xb8),__this_01);
  pIVar3 = *(Il2CppObject **)(TypeInfo_CustomLogicMapBuiltin + 0xb8);
  *(undefined4 *)((long)&pIVar3->monitor + 4) = uVar4;
  return pIVar3;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLocaleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41cf160

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  undefined8 *puVar5;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar6;
  System_Func_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Action_T__object__o *setter;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad6b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"DefaultLanguage");
    il2cpp_runtime_helper_023445d0(&"RegisterLanguage");
    il2cpp_runtime_helper_023445d0(&"CurrentLanguage");
    il2cpp_runtime_helper_023445d0(&"RegisterLanguages");
    il2cpp_runtime_helper_023445d0(&"RegisterFallback");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"RemoveFallback");
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ad6b3 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x5e1c8cab) {
    if (uVar3 < 0x37915e09) {
      if (uVar3 == 0x28b19ea3) {
        bVar4 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad6b7 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__5_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad6b7 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x37915e08) &&
              (bVar4 = System_String__op_Equality(name,"CurrentLanguage",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        puVar5 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage;
      }
    }
    else if (uVar3 == 0x5b89647c) {
      bVar4 = System_String__op_Equality(name,"DefaultLanguage",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad6b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLocaleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DefaultLanguage_g____get);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DefaultLanguage_g____sette);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object);
          g_data_057ad6b5 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object);
        System_Func_object__object____ctor();
        setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLocaleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x5e1c8caa) &&
            (bVar4 = System_String__op_Equality(name,"RegisterLanguage",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad6b8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterLanguage_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad6b8 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0x9cbb72c4) {
    if (uVar3 == 0x9cbb72c3) {
      bVar4 = System_String__op_Equality(name,"RemoveFallback",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad6bb == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveFallback_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad6bb = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x7106e006) &&
            (bVar4 = System_String__op_Equality(name,"RegisterFallback",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad6ba == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterFallback_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad6ba = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xb6973ef7) {
    bVar4 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad6b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad6b6 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xfff1b99b) &&
          (bVar4 = System_String__op_Equality(name,"RegisterLanguages",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad6b9 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterLanguages_b__7_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad6b9 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLocaleBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar5 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar6);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar5;
  if (g_data_057ad6b4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cf569;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CurrentLanguage_g____get);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cf575;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cf581;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cf58d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object);
    g_data_057ad6b4 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cf5a3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cf5bc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cf5cb;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41cf5e5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__CurrentLanguage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage (const MethodInfo* method);
// 0x41cf550

CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (g_data_057ad6b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CurrentLanguage_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object);
    g_data_057ad6b4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__DefaultLanguage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage (const MethodInfo* method);
// 0x41cf5f0

CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (g_data_057ad6b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLocaleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DefaultLanguage_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DefaultLanguage_g____sette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object);
    g_data_057ad6b5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLocaleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x41cf6d0

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (g_data_057ad6b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad6b6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x41cf820

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (g_data_057ad6b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad6b7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage (const MethodInfo* method);
// 0x41cf970

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (g_data_057ad6b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterLanguage_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad6b8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguages
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages (const MethodInfo* method);
// 0x41cfac0

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (g_data_057ad6b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterLanguages_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad6b9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterFallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback (const MethodInfo* method);
// 0x41cfc10

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (g_data_057ad6ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterFallback_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad6ba = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RemoveFallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback (const MethodInfo* method);
// 0x41cfd60

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (g_data_057ad6bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveFallback_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad6bb = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLocaleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41cfeb0

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad6bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"DefaultLanguage");
    il2cpp_runtime_helper_023445d0(&"RegisterLanguage");
    il2cpp_runtime_helper_023445d0(&"CurrentLanguage");
    il2cpp_runtime_helper_023445d0(&"RegisterLanguages");
    il2cpp_runtime_helper_023445d0(&"RegisterFallback");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"RemoveFallback");
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ad6bc = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"CurrentLanguage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"DefaultLanguage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Get",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RegisterLanguage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RegisterLanguages",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RegisterFallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RemoveFallback",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6bd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad6a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad6a6 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6be = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad867 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad867 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    return;
  }
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__CurrentLanguage>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__CurrentLanguage_g____getter_2_0 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, const MethodInfo* method);
// 0x41d0070

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__CurrentLanguage_g____getter_2_0
          (CustomLogic_CustomLogicLocaleBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (g_data_057ad6bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6bd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad6a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad6a6 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    return *(Il2CppObject **)(lVar2 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6be = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad867 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad867 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
  }
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____getter_3_0 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, const MethodInfo* method);
// 0x41d0120

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____getter_3_0
          (CustomLogic_CustomLogicLocaleBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad6be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6be = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad867 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad867 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____setter_3_1 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41d01d0

void CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____setter_3_1
               (CustomLogic_CustomLogicLocaleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  
  if (g_data_057ad6bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6bf = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad866 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
  *(Il2CppObject **)(lVar2 + 0x10) = pIVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pIVar3);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin___ctor (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x41cdfd0

void CustomLogic_CustomLogicLocaleBuiltin___ctor
               (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *value;
  System_String_o *pSVar4;
  
  if (g_data_057ad6a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a5 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  value = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce1b0;
  if (g_data_057ad866 == '\0') goto label_041ce1c2;
label_041ce053:
  iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    *(System_String_o **)(lVar2 + 0x10) = value;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,value);
    pSVar4 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    value = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (g_data_057ad6ad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057ad6ad = '\x01';
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) != 0) goto label_041ce0a3;
label_041ce0e3:
      il2cpp_runtime_helper_02337ed0();
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) goto label_041ce0e3;
label_041ce0a3:
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)pSVar4,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      pSVar4 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      value = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      if (g_data_057ad6ad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ad6ad = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      else {
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
      }
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,(Il2CppObject *)pSVar4,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_041ce1b0:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ad866 != '\0') goto label_041ce053;
label_041ce1c2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad866 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  } while( true );
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_CurrentLanguage
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_CurrentLanguage (const MethodInfo* method);
// 0x41ce2a0

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__get_CurrentLanguage(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (g_data_057ad6a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad6a6 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    return *(System_String_o **)(lVar2 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_DefaultLanguage
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_DefaultLanguage (const MethodInfo* method);
// 0x41ce300

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__get_DefaultLanguage(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad6a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLocaleBuiltin$$set_DefaultLanguage
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__set_DefaultLanguage (System_String_o* value, const MethodInfo* method);
// 0x41ce370

void CustomLogic_CustomLogicLocaleBuiltin__set_DefaultLanguage(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ad6a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,value);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$Get
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__Get (System_String_o* key, const MethodInfo* method);
// 0x41ce3d0

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__Get(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  uint capacity;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_Exception_o *__this_05;
  Il2CppObject *pIVar6;
  _union_249689 __this_06;
  _union_249689 key_00;
  System_String_o *extraout_RAX;
  CustomLogic_CustomLogicListBuiltin_o *pCVar7;
  Il2CppObject *key_01;
  System_String_o *extraout_RAX_00;
  long *plVar8;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  Il2CppObject **value_00;
  MethodInfo_3106990 **unaff_RBP;
  _union_249689 __this_07;
  System_Exception_o *str1;
  _union_249689 key_02;
  MethodInfo_3106990 **unaff_R13;
  undefined1 auVar10 [12];
  ulong in_stack_fffffffffffffed0;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_fffffffffffffed8;
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppObject *pIStack_110;
  Il2CppObject *pIStack_108;
  System_Collections_Generic_List_Enumerator_T__o SStack_100;
  _union_249689 _Stack_e8;
  _union_249689 _Stack_e0;
  long *plStack_d8;
  Il2CppObject *pIStack_d0;
  _union_249689 _Stack_c8;
  MethodInfo_3106990 **ppMStack_c0;
  _union_249689 _Stack_b0;
  _union_249689 _Stack_a8;
  Il2CppObject *pIStack_a0;
  MethodInfo_3106990 **ppMStack_98;
  System_String_o *pSStack_90;
  long *plStack_88;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_80;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_78;
  Il2CppObject *pIStack_70;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_68;
  Il2CppObject *apIStack_60 [3];
  System_Exception_o *pSStack_48;
  
  if (g_data_057ad6a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad6a9 = '\x01';
    in_RDX = extraout_RDX;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar4 = *(System_String_o **)(lVar2 + 0x18);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    pSVar4 = CustomLogic_CustomLogicLocaleBuiltin__ResolveString(key,pSVar4,in_RDX);
    if (pSVar4 != (System_String_o *)0x0) {
      return pSVar4;
    }
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Localized string not found: ");
  pSVar4 = System_String__Concat_3ae5ba0(pSVar4,key,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_05 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(__this_05,pSVar4,(MethodInfo *)0x0);
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_Get);
  str1 = __this_05;
  il2cpp_runtime_helper_022b2b10();
  pSStack_48 = __this_05;
  if (g_data_057ad6af == '\0') {
    plStack_88 = (long *)0x41ce4e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    plStack_88 = (long *)0x41ce4f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    plStack_88 = (long *)0x41ce501;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057ad6af = '\x01';
  }
  pSStack_68 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  apIStack_60[2] = (Il2CppObject *)0x0;
  pIStack_70 = (Il2CppObject *)0x0;
  pSStack_78 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  apIStack_60[1] = (Il2CppObject *)0x0;
  pSStack_80 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  apIStack_60[0] = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    plStack_88 = (long *)0x41ce55e;
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_041ce732:
    plStack_88 = (long *)0x41ce737;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_R13 = &MethodInfo_Boolean_TryGetValue;
    plStack_88 = (long *)0x41ce58c;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),pIVar6,(Il2CppObject **)&pSStack_68,MethodInfo_Boolean_TryGetValue
                      );
    if ((char)bVar3 != '\0') {
      if (pSStack_68 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
      value_00 = apIStack_60 + 2;
      plStack_88 = (long *)0x41ce5b8;
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSStack_68,(Il2CppObject *)str1,value_00,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 != '\0') goto label_041ce720;
    }
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      plStack_88 = (long *)0x41ce5d1;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8)
    ;
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
    unaff_RBP = &MethodInfo_Boolean_TryGetValue;
    plStack_88 = (long *)0x41ce600;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar9,pIVar6,&pIStack_70,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        plStack_88 = (long *)0x41ce615;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
      plStack_88 = (long *)0x41ce63e;
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),pIStack_70,(Il2CppObject **)&pSStack_78,
                         MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 != '\0') {
        if (pSStack_78 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
        value_00 = apIStack_60 + 1;
        plStack_88 = (long *)0x41ce664;
        bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSStack_78,(Il2CppObject *)str1,value_00,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar3 != '\0') goto label_041ce720;
      }
    }
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      plStack_88 = (long *)0x41ce6a3;
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
      if (g_data_057ad867 != '\0') goto label_041ce68b;
label_041ce6b9:
      plStack_88 = (long *)0x41ce6c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      g_data_057ad867 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
      if (g_data_057ad867 == '\0') goto label_041ce6b9;
label_041ce68b:
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      plStack_88 = (long *)0x41ce6d9;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
    plStack_88 = (long *)0x41ce6fb;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar9,*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10),
                       (Il2CppObject **)&pSStack_80,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 != '\0') {
      if (pSStack_80 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
      value_00 = apIStack_60;
      plStack_88 = (long *)0x41ce71c;
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSStack_80,(Il2CppObject *)str1,value_00,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 != '\0') {
label_041ce720:
        return (System_String_o *)*value_00;
      }
    }
  }
  plStack_88 = (long *)0x41ce743;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Locale string not found: ");
  plStack_88 = (long *)0x41ce750;
  pSVar4 = System_String__Concat_3ae5ba0(pSVar4,(System_String_o *)str1,(MethodInfo *)0x0);
  plStack_88 = (long *)0x41ce75f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  plStack_88 = (long *)0x41ce767;
  __this_06.genericMethod = (void *)il2cpp_runtime_helper_023052d0(uVar5);
  plStack_88 = (long *)0x41ce777;
  System_Exception___ctor_3cf6120(__this_06.genericMethod,pSVar4,(MethodInfo *)0x0);
  plStack_88 = (long *)0x41ce783;
  key_00.genericMethod = (void *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_ResolveString);
  plStack_88 = (long *)0x41ce78e;
  key_02.genericMethod = __this_06.genericMethod;
  il2cpp_runtime_helper_022b2b10();
  plStack_88 = &TypeInfo_CustomLogicLocaleBuiltin;
  __this_07 = key_00;
  _Stack_a8.genericMethod = __this_06.genericMethod;
  pIStack_a0 = pIVar6;
  ppMStack_98 = unaff_R13;
  pSStack_90 = pSVar4;
  if (g_data_057ad6aa == '\0') {
    ppMStack_c0 = (MethodInfo_3106990 **)0x41ce7bb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    ppMStack_c0 = (MethodInfo_3106990 **)0x41ce7c7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    ppMStack_c0 = (MethodInfo_3106990 **)0x41ce7d3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    ppMStack_c0 = (MethodInfo_3106990 **)0x41ce7df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    ppMStack_c0 = (MethodInfo_3106990 **)0x41ce7eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    ppMStack_c0 = (MethodInfo_3106990 **)0x41ce7f7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    g_data_057ad6aa = '\x01';
  }
  _Stack_b0.genericMethod = (void *)0x0;
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    ppMStack_c0 = (MethodInfo_3106990 **)0x41ce820;
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ppMStack_c0 = (MethodInfo_3106990 **)0x41ce84e;
    __this_07 = key_02;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),key_02.genericMethod,&_Stack_b0.genericMethod,
                       MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 == '\0') {
      ppMStack_c0 = (MethodInfo_3106990 **)0x41ce861;
      __this_06.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
      ppMStack_c0 = (MethodInfo_3106990 **)0x41ce876;
      __this_07 = MethodInfo_Dictionary_2_System_String_System_String;
      System_Collections_Generic_Dictionary_object__object____ctor
                (__this_06.genericMethod,MethodInfo_Dictionary_2_System_String_System_String.genericMethod);
      _Stack_b0.genericMethod = __this_06.genericMethod;
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        ppMStack_c0 = (MethodInfo_3106990 **)0x41ce88d;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce8e4;
      ppMStack_c0 = (MethodInfo_3106990 **)0x41ce8b7;
      __this_07 = key_02;
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),key_02.genericMethod,_Stack_b0.genericMethod,
                 MethodInfo_Void_set_Item);
    }
    if (_Stack_b0.genericMethod != (void *)0x0) {
      ppMStack_c0 = (MethodInfo_3106990 **)0x41ce8d6;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (_Stack_b0.genericMethod,key_00.genericMethod,value,MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
  }
label_041ce8e4:
  pIVar6 = (Il2CppObject *)0x0;
  ppMStack_c0 = (MethodInfo_3106990 **)0x41ce8e9;
  il2cpp_runtime_helper_022b2c90();
  plStack_d8 = &TypeInfo_CustomLogicLocaleBuiltin;
  _Stack_e8 = __this_06;
  _Stack_e0 = key_02;
  pIStack_d0 = value;
  _Stack_c8 = key_00;
  ppMStack_c0 = unaff_RBP;
  if (g_data_057ad6ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ad6ab = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_110 = (Il2CppObject *)0x0;
  if (__this_07.genericMethod == (void *)0x0) goto label_041ceb35;
  capacity = CustomLogic_CustomLogicDictBuiltin__get_Count(__this_07.genericMethod,(MethodInfo *)0x0);
  key_01 = (Il2CppObject *)(ulong)capacity;
  in_stack_fffffffffffffed8 =
       (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_3104210
            (in_stack_fffffffffffffed8,capacity,MethodInfo_Dictionary_2_System_String_System_String);
  pCVar7 = CustomLogic_CustomLogicDictBuiltin__get_Keys(__this_07.genericMethod,(MethodInfo *)0x0);
  if (pCVar7 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_041ceb35;
  __this = (pCVar7->fields).List;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_041ceb35;
  System_Collections_Generic_List_object___GetEnumerator(&SStack_100,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
  pIStack_110 = SStack_100.fields._current;
  pIStack_108 = pIVar6;
  if (in_stack_fffffffffffffed8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01.fields._index = 0;
    __this_01.fields._version = 0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
    __this_01.fields._current = (Il2CppObject *)SStack_100.fields._list;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee0);
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_100.fields._list;
    if ((char)bVar3 != '\0') goto label_041ceb3a;
  }
  else {
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_100.fields._list;
    while (__this_00.fields._8_8_ = in_stack_fffffffffffffed8,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0,
          __this_00.fields._current = (Il2CppObject *)pSVar11,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee0), (char)bVar3 != '\0') {
      if (SStack_100.fields._current == (Il2CppObject *)0x0) goto label_041ceb44;
      key_01 = (Il2CppObject *)
               (*(SStack_100.fields._current)->klass->vtable[3].methodPtr)
                         (SStack_100.fields._current,(SStack_100.fields._current)->klass->vtable[3].method);
      pIVar6 = CustomLogic_CustomLogicDictBuiltin__Get
                         (__this_07.genericMethod,SStack_100.fields._current,(Il2CppObject *)0x0,
                          (MethodInfo *)0x0);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_041ceb70;
      pIVar6 = (Il2CppObject *)(*pIVar6->klass->vtable[3].methodPtr)(pIVar6,pIVar6->klass->vtable[3].method);
      System_Collections_Generic_Dictionary_object__object___set_Item
                (in_stack_fffffffffffffed8,key_01,pIVar6,MethodInfo_Void_set_Item);
    }
  }
  __this_02.fields._8_8_ = in_stack_fffffffffffffed8;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
  __this_02.fields._current = (Il2CppObject *)pSVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
  do {
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),pIStack_108,(Il2CppObject *)in_stack_fffffffffffffed8,
                 MethodInfo_Void_set_Item);
      return extraout_RAX_00;
    }
label_041ceb35:
    il2cpp_runtime_helper_022b2c90();
label_041ceb3a:
    key_01 = pIStack_110;
    if (pIStack_110 == (Il2CppObject *)0x0) {
label_041ceb44:
      il2cpp_runtime_helper_022b2c90();
    }
    (*key_01->klass->vtable[3].methodPtr)(key_01,key_01->klass->vtable[3].method);
    pIVar6 = CustomLogic_CustomLogicDictBuiltin__Get
                       (__this_07.genericMethod,key_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
label_041ceb70:
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    }
    (*pIVar6->klass->vtable[3].methodPtr)(pIVar6,pIVar6->klass->vtable[3].method);
    auVar10 = il2cpp_runtime_helper_022b2c90();
    __this_07 = auVar10._0_8_;
    if (auVar10._8_4_ != 1) goto label_041cec37;
    plVar8 = (long *)__cxa_begin_catch(__this_07.genericMethod);
    lVar2 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_fffffffffffffed8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
    __this_03.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
  } while (lVar2 == 0);
  il2cpp_runtime_helper_022fefe0(lVar2);
label_041cec37:
  __this_04.fields._8_8_ = in_stack_fffffffffffffed8;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
  __this_04.fields._current = (Il2CppObject *)pSVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
  _Unwind_Resume(__this_07.genericMethod);
}


// CustomLogic.CustomLogicLocaleBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__Set (System_String_o* language, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x41ce790

void CustomLogic_CustomLogicLocaleBuiltin__Set
               (System_String_o *language,System_String_o *key,System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  uint capacity;
  CustomLogic_CustomLogicListBuiltin_o *pCVar3;
  Il2CppObject *key_00;
  Il2CppObject *pIVar4;
  long *plVar5;
  Il2CppRGCTXData *unaff_RBX;
  MethodInfo_31041B0 *__this_05;
  undefined1 auVar6 [12];
  ulong in_stack_ffffffffffffff50;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_ffffffffffffff58;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppObject *pIStack_90;
  Il2CppObject *pIStack_88;
  System_Collections_Generic_List_Enumerator_T__o SStack_80;
  Il2CppRGCTXData *pIStack_68;
  _union_249689 _Stack_60;
  long *plStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  Il2CppRGCTXData *local_30;
  
  __this_05 = (MethodInfo_31041B0 *)key;
  if (g_data_057ad6aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    g_data_057ad6aa = '\x01';
  }
  local_30 = (Il2CppRGCTXData *)0x0;
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_05 = (MethodInfo_31041B0 *)language;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),(Il2CppObject *)language,
                       (Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 == '\0') {
      unaff_RBX = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
      __this_05 = MethodInfo_Dictionary_2_System_String_System_String;
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)unaff_RBX,MethodInfo_Dictionary_2_System_String_System_String);
      local_30 = unaff_RBX;
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce8e4;
      __this_05 = (MethodInfo_31041B0 *)language;
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),(Il2CppObject *)language,(Il2CppObject *)local_30,
                 MethodInfo_Void_set_Item);
    }
    if (local_30 != (Il2CppRGCTXData *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)local_30,(Il2CppObject *)key,
                 (Il2CppObject *)value,MethodInfo_Void_set_Item);
      return;
    }
  }
label_041ce8e4:
  pIVar4 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  plStack_58 = &TypeInfo_CustomLogicLocaleBuiltin;
  pIStack_68 = unaff_RBX;
  _Stack_60 = (_union_249689)language;
  pSStack_50 = value;
  pSStack_48 = key;
  if (g_data_057ad6ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ad6ab = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_90 = (Il2CppObject *)0x0;
  if (__this_05 == (MethodInfo_31041B0 *)0x0) goto label_041ceb35;
  capacity = CustomLogic_CustomLogicDictBuiltin__get_Count
                       ((CustomLogic_CustomLogicDictBuiltin_o *)__this_05,(MethodInfo *)0x0);
  key_00 = (Il2CppObject *)(ulong)capacity;
  in_stack_ffffffffffffff58 =
       (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_3104210
            (in_stack_ffffffffffffff58,capacity,MethodInfo_Dictionary_2_System_String_System_String);
  pCVar3 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                     ((CustomLogic_CustomLogicDictBuiltin_o *)__this_05,(MethodInfo *)0x0);
  if (pCVar3 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_041ceb35;
  __this = (pCVar3->fields).List;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_041ceb35;
  System_Collections_Generic_List_object___GetEnumerator(&SStack_80,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
  pIStack_90 = SStack_80.fields._current;
  pIStack_88 = pIVar4;
  if (in_stack_ffffffffffffff58 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01.fields._index = 0;
    __this_01.fields._version = 0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
    __this_01.fields._current = (Il2CppObject *)SStack_80.fields._list;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_80.fields._list;
    if ((char)bVar2 != '\0') goto label_041ceb3a;
  }
  else {
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_80.fields._list;
    while (__this_00.fields._8_8_ = in_stack_ffffffffffffff58,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50,
          __this_00.fields._current = (Il2CppObject *)pSVar7,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60), (char)bVar2 != '\0') {
      if (SStack_80.fields._current == (Il2CppObject *)0x0) goto label_041ceb44;
      key_00 = (Il2CppObject *)
               (*(SStack_80.fields._current)->klass->vtable[3].methodPtr)
                         (SStack_80.fields._current,(SStack_80.fields._current)->klass->vtable[3].method);
      pIVar4 = CustomLogic_CustomLogicDictBuiltin__Get
                         ((CustomLogic_CustomLogicDictBuiltin_o *)__this_05,SStack_80.fields._current,
                          (Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_041ceb70;
      pIVar4 = (Il2CppObject *)(*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
      System_Collections_Generic_Dictionary_object__object___set_Item
                (in_stack_ffffffffffffff58,key_00,pIVar4,MethodInfo_Void_set_Item);
    }
  }
  __this_02.fields._8_8_ = in_stack_ffffffffffffff58;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
  __this_02.fields._current = (Il2CppObject *)pSVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  do {
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),pIStack_88,(Il2CppObject *)in_stack_ffffffffffffff58,
                 MethodInfo_Void_set_Item);
      return;
    }
label_041ceb35:
    il2cpp_runtime_helper_022b2c90();
label_041ceb3a:
    key_00 = pIStack_90;
    if (pIStack_90 == (Il2CppObject *)0x0) {
label_041ceb44:
      il2cpp_runtime_helper_022b2c90();
    }
    (*key_00->klass->vtable[3].methodPtr)(key_00,key_00->klass->vtable[3].method);
    pIVar4 = CustomLogic_CustomLogicDictBuiltin__Get
                       ((CustomLogic_CustomLogicDictBuiltin_o *)__this_05,key_00,(Il2CppObject *)0x0,
                        (MethodInfo *)0x0);
    if (pIVar4 == (Il2CppObject *)0x0) {
label_041ceb70:
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    }
    (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
    auVar6 = il2cpp_runtime_helper_022b2c90();
    __this_05 = auVar6._0_8_;
    if (auVar6._8_4_ != 1) goto label_041cec37;
    plVar5 = (long *)__cxa_begin_catch(__this_05);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_ffffffffffffff58;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
    __this_03.fields._current = (Il2CppObject *)pSVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  } while (lVar1 == 0);
  il2cpp_runtime_helper_022fefe0(lVar1);
label_041cec37:
  __this_04.fields._8_8_ = in_stack_ffffffffffffff58;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
  __this_04.fields._current = (Il2CppObject *)pSVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  _Unwind_Resume(__this_05);
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguage
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage (System_String_o* language, CustomLogic_CustomLogicDictBuiltin_o* strings, const MethodInfo* method);
// 0x41ce8f0

void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage
               (System_String_o *language,CustomLogic_CustomLogicDictBuiltin_o *strings,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  uint capacity;
  bool_conflict bVar2;
  CustomLogic_CustomLogicListBuiltin_o *pCVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  ulong in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppObject *local_58;
  System_String_o *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ad6ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ad6ab = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (strings == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) goto label_041ceb35;
  capacity = CustomLogic_CustomLogicDictBuiltin__get_Count(strings,(MethodInfo *)0x0);
  pIVar4 = (Il2CppObject *)(ulong)capacity;
  in_stack_ffffffffffffff90 =
       (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_3104210
            (in_stack_ffffffffffffff90,capacity,MethodInfo_Dictionary_2_System_String_System_String);
  pCVar3 = CustomLogic_CustomLogicDictBuiltin__get_Keys(strings,(MethodInfo *)0x0);
  if (pCVar3 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_041ceb35;
  __this = (pCVar3->fields).List;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_041ceb35;
  System_Collections_Generic_List_object___GetEnumerator(&local_48,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
  local_58 = local_48.fields._current;
  local_50 = language;
  if (in_stack_ffffffffffffff90 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01.fields._index = 0;
    __this_01.fields._version = 0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_01.fields._current = (Il2CppObject *)local_48.fields._list;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    if ((char)bVar2 != '\0') goto label_041ceb3a;
  }
  else {
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    while (__this_00.fields._8_8_ = in_stack_ffffffffffffff90,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
          __this_00.fields._current = (Il2CppObject *)pSVar8,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar2 != '\0') {
      if (local_48.fields._current == (Il2CppObject *)0x0) goto label_041ceb44;
      pIVar4 = (Il2CppObject *)
               (*(local_48.fields._current)->klass->vtable[3].methodPtr)
                         (local_48.fields._current,(local_48.fields._current)->klass->vtable[3].method);
      pIVar5 = CustomLogic_CustomLogicDictBuiltin__Get
                         (strings,local_48.fields._current,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_041ceb70;
      pIVar5 = (Il2CppObject *)(*pIVar5->klass->vtable[3].methodPtr)(pIVar5,pIVar5->klass->vtable[3].method);
      System_Collections_Generic_Dictionary_object__object___set_Item
                (in_stack_ffffffffffffff90,pIVar4,pIVar5,MethodInfo_Void_set_Item);
    }
  }
  __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_02.fields._current = (Il2CppObject *)pSVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  do {
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),(Il2CppObject *)local_50,
                 (Il2CppObject *)in_stack_ffffffffffffff90,MethodInfo_Void_set_Item);
      return;
    }
label_041ceb35:
    il2cpp_runtime_helper_022b2c90();
label_041ceb3a:
    pIVar4 = local_58;
    if (local_58 == (Il2CppObject *)0x0) {
label_041ceb44:
      il2cpp_runtime_helper_022b2c90();
    }
    (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
    pIVar4 = CustomLogic_CustomLogicDictBuiltin__Get(strings,pIVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (pIVar4 == (Il2CppObject *)0x0) {
label_041ceb70:
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    }
    (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
    auVar7 = il2cpp_runtime_helper_022b2c90();
    strings = auVar7._0_8_;
    if (auVar7._8_4_ != 1) goto label_041cec37;
    plVar6 = (long *)__cxa_begin_catch(strings);
    lVar1 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_03.fields._current = (Il2CppObject *)pSVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (lVar1 == 0);
  il2cpp_runtime_helper_022fefe0(lVar1);
label_041cec37:
  __this_04.fields._8_8_ = in_stack_ffffffffffffff90;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_04.fields._current = (Il2CppObject *)pSVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(strings);
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguages
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages (System_String_o* pattern, const MethodInfo* method);
// 0x41cec70

void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(System_String_o *pattern,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this_03;
  long *plVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar10;
  
  if (g_data_057ad6ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Dictio);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad6ac = '\x01';
  }
  pIVar8 = (Il2CppObject *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pSVar10 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = UI_UIManager__GetLocaleCategoryStrings(pattern,(MethodInfo *)0x0);
  if (__this_03 != (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&stack0xffffffffffffffa8,
               (System_Collections_Generic_Dictionary_object__object__o *)__this_03,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Dictio);
    while( true ) {
      __this.fields._8_8_ = pIVar7;
      __this.fields._dictionary = pSVar6;
      __this.fields._current.fields.key = pIVar8;
      __this.fields._current.fields.value = pIVar9;
      __this.fields._32_8_ = pSVar10;
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this,(MethodInfo_3251160 *)&stack0xffffffffffffffa8);
      if ((char)bVar2 == '\0') {
        __this_00.fields._8_8_ = pIVar7;
        __this_00.fields._dictionary = pSVar6;
        __this_00.fields._current.fields.key = pIVar8;
        __this_00.fields._current.fields.value = pIVar9;
        __this_00.fields._32_8_ = pSVar10;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_00,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
        return;
      }
      auVar5 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),auVar5._0_8_,auVar5._8_8_,MethodInfo_Void_set_Item);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar7;
    __this_01.fields._dictionary = pSVar6;
    __this_01.fields._current.fields.key = pIVar8;
    __this_01.fields._current.fields.value = pIVar9;
    __this_01.fields._32_8_ = pSVar10;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._8_8_ = pIVar7;
  __this_02.fields._dictionary = pSVar6;
  __this_02.fields._current.fields.key = pIVar8;
  __this_02.fields._current.fields.value = pIVar9;
  __this_02.fields._32_8_ = pSVar10;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar4._0_8_);
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterFallback
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback (System_String_o* fromLanguage, System_String_o* toLanguage, const MethodInfo* method);
// 0x41ce200

void CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback
               (System_String_o *fromLanguage,System_String_o *toLanguage,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar2;
  
  if (g_data_057ad6ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ad6ad = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8)
    ;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8)
    ;
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___TryInsert
              (__this,(Il2CppObject *)fromLanguage,(Il2CppObject *)toLanguage,'\x01',
               *(MethodInfo_3105A00 **)(*(long *)(*(long *)(MethodInfo_Void_set_Item + 0x20) + 0xc0) + 0x110));
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad6a6 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    g_data_057ad6a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    return;
  }
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$RemoveFallback
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RemoveFallback (System_String_o* fromLanguage, const MethodInfo* method);
// 0x41cee90

void CustomLogic_CustomLogicLocaleBuiltin__RemoveFallback(System_String_o *fromLanguage,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057ad6ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ad6ae = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8)
    ;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8)
    ;
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this,(Il2CppObject *)fromLanguage,MethodInfo_Boolean_Remove);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad6b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Locale");
    g_data_057ad6b0 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$ResolveString
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__ResolveString (System_String_o* key, System_String_o* requestedLang, const MethodInfo* method);
// 0x41ce4c0

System_String_o *
CustomLogic_CustomLogicLocaleBuiltin__ResolveString
          (System_String_o *key,System_String_o *requestedLang,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *__this;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  uint capacity;
  System_String_o *pSVar4;
  undefined8 uVar5;
  _union_249689 __this_05;
  _union_249689 key_00;
  System_String_o *extraout_RAX;
  CustomLogic_CustomLogicListBuiltin_o *pCVar6;
  Il2CppObject *key_01;
  Il2CppObject *pIVar7;
  System_String_o *extraout_RAX_00;
  long *plVar8;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  Il2CppObject **value_00;
  MethodInfo_3106990 **unaff_RBP;
  _union_249689 __this_06;
  _union_249689 key_02;
  MethodInfo_3106990 **unaff_R13;
  undefined1 auVar10 [12];
  ulong in_stack_fffffffffffffee8;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_fffffffffffffef0;
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppObject *pIStack_f8;
  Il2CppObject *pIStack_f0;
  System_Collections_Generic_List_Enumerator_T__o SStack_e8;
  _union_249689 _Stack_d0;
  _union_249689 _Stack_c8;
  long *plStack_c0;
  Il2CppObject *pIStack_b8;
  _union_249689 _Stack_b0;
  MethodInfo_3106990 **ppMStack_a8;
  _union_249689 _Stack_98;
  _union_249689 _Stack_90;
  System_String_o *pSStack_88;
  MethodInfo_3106990 **ppMStack_80;
  System_String_o *pSStack_78;
  long *plStack_70;
  System_Collections_Generic_Dictionary_object__object__o *local_68;
  System_Collections_Generic_Dictionary_object__object__o *local_60;
  Il2CppObject *local_58;
  System_Collections_Generic_Dictionary_object__object__o *local_50;
  Il2CppObject *local_48 [3];
  
  if (g_data_057ad6af == '\0') {
    plStack_70 = (long *)0x41ce4e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    plStack_70 = (long *)0x41ce4f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    plStack_70 = (long *)0x41ce501;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057ad6af = '\x01';
  }
  local_50 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[2] = (Il2CppObject *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_60 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[1] = (Il2CppObject *)0x0;
  local_68 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[0] = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    plStack_70 = (long *)0x41ce55e;
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_041ce732:
    plStack_70 = (long *)0x41ce737;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_R13 = &MethodInfo_Boolean_TryGetValue;
    plStack_70 = (long *)0x41ce58c;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),(Il2CppObject *)requestedLang,
                       (Il2CppObject **)&local_50,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 != '\0') {
      if (local_50 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
      value_00 = local_48 + 2;
      plStack_70 = (long *)0x41ce5b8;
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (local_50,(Il2CppObject *)key,value_00,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 != '\0') goto label_041ce720;
    }
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      plStack_70 = (long *)0x41ce5d1;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8)
    ;
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
    unaff_RBP = &MethodInfo_Boolean_TryGetValue;
    plStack_70 = (long *)0x41ce600;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar9,(Il2CppObject *)requestedLang,&local_58,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        plStack_70 = (long *)0x41ce615;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
      plStack_70 = (long *)0x41ce63e;
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),local_58,(Il2CppObject **)&local_60,
                         MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 != '\0') {
        if (local_60 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
        value_00 = local_48 + 1;
        plStack_70 = (long *)0x41ce664;
        bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (local_60,(Il2CppObject *)key,value_00,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar3 != '\0') goto label_041ce720;
      }
    }
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      plStack_70 = (long *)0x41ce6a3;
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
      if (g_data_057ad867 != '\0') goto label_041ce68b;
label_041ce6b9:
      plStack_70 = (long *)0x41ce6c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
      g_data_057ad867 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
      if (g_data_057ad867 == '\0') goto label_041ce6b9;
label_041ce68b:
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      plStack_70 = (long *)0x41ce6d9;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
    plStack_70 = (long *)0x41ce6fb;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar9,*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10),
                       (Il2CppObject **)&local_68,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 != '\0') {
      if (local_68 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce732;
      value_00 = local_48;
      plStack_70 = (long *)0x41ce71c;
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (local_68,(Il2CppObject *)key,value_00,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 != '\0') {
label_041ce720:
        return (System_String_o *)*value_00;
      }
    }
  }
  plStack_70 = (long *)0x41ce743;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Locale string not found: ");
  plStack_70 = (long *)0x41ce750;
  pSVar4 = System_String__Concat_3ae5ba0(pSVar4,key,(MethodInfo *)0x0);
  plStack_70 = (long *)0x41ce75f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  plStack_70 = (long *)0x41ce767;
  __this_05.genericMethod = (void *)il2cpp_runtime_helper_023052d0(uVar5);
  plStack_70 = (long *)0x41ce777;
  System_Exception___ctor_3cf6120(__this_05.genericMethod,pSVar4,(MethodInfo *)0x0);
  plStack_70 = (long *)0x41ce783;
  key_00.genericMethod = (void *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_ResolveString);
  plStack_70 = (long *)0x41ce78e;
  key_02.genericMethod = __this_05.genericMethod;
  il2cpp_runtime_helper_022b2b10();
  plStack_70 = &TypeInfo_CustomLogicLocaleBuiltin;
  __this_06 = key_00;
  _Stack_90.genericMethod = __this_05.genericMethod;
  pSStack_88 = requestedLang;
  ppMStack_80 = unaff_R13;
  pSStack_78 = pSVar4;
  if (g_data_057ad6aa == '\0') {
    ppMStack_a8 = (MethodInfo_3106990 **)0x41ce7bb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    ppMStack_a8 = (MethodInfo_3106990 **)0x41ce7c7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    ppMStack_a8 = (MethodInfo_3106990 **)0x41ce7d3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    ppMStack_a8 = (MethodInfo_3106990 **)0x41ce7df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    ppMStack_a8 = (MethodInfo_3106990 **)0x41ce7eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    ppMStack_a8 = (MethodInfo_3106990 **)0x41ce7f7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    g_data_057ad6aa = '\x01';
  }
  _Stack_98.genericMethod = (void *)0x0;
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    ppMStack_a8 = (MethodInfo_3106990 **)0x41ce820;
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ppMStack_a8 = (MethodInfo_3106990 **)0x41ce84e;
    __this_06 = key_02;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),key_02.genericMethod,&_Stack_98.genericMethod,
                       MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 == '\0') {
      ppMStack_a8 = (MethodInfo_3106990 **)0x41ce861;
      __this_05.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
      ppMStack_a8 = (MethodInfo_3106990 **)0x41ce876;
      __this_06 = MethodInfo_Dictionary_2_System_String_System_String;
      System_Collections_Generic_Dictionary_object__object____ctor
                (__this_05.genericMethod,MethodInfo_Dictionary_2_System_String_System_String.genericMethod);
      _Stack_98.genericMethod = __this_05.genericMethod;
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        ppMStack_a8 = (MethodInfo_3106990 **)0x41ce88d;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041ce8e4;
      ppMStack_a8 = (MethodInfo_3106990 **)0x41ce8b7;
      __this_06 = key_02;
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),key_02.genericMethod,_Stack_98.genericMethod,
                 MethodInfo_Void_set_Item);
    }
    if (_Stack_98.genericMethod != (void *)0x0) {
      ppMStack_a8 = (MethodInfo_3106990 **)0x41ce8d6;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (_Stack_98.genericMethod,key_00.genericMethod,value,MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
  }
label_041ce8e4:
  pIVar7 = (Il2CppObject *)0x0;
  ppMStack_a8 = (MethodInfo_3106990 **)0x41ce8e9;
  il2cpp_runtime_helper_022b2c90();
  plStack_c0 = &TypeInfo_CustomLogicLocaleBuiltin;
  _Stack_d0 = __this_05;
  _Stack_c8 = key_02;
  pIStack_b8 = value;
  _Stack_b0 = key_00;
  ppMStack_a8 = unaff_RBP;
  if (g_data_057ad6ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    g_data_057ad6ab = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_f8 = (Il2CppObject *)0x0;
  if (__this_06.genericMethod == (void *)0x0) goto label_041ceb35;
  capacity = CustomLogic_CustomLogicDictBuiltin__get_Count(__this_06.genericMethod,(MethodInfo *)0x0);
  key_01 = (Il2CppObject *)(ulong)capacity;
  in_stack_fffffffffffffef0 =
       (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_3104210
            (in_stack_fffffffffffffef0,capacity,MethodInfo_Dictionary_2_System_String_System_String);
  pCVar6 = CustomLogic_CustomLogicDictBuiltin__get_Keys(__this_06.genericMethod,(MethodInfo *)0x0);
  if (pCVar6 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_041ceb35;
  __this = (pCVar6->fields).List;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_041ceb35;
  System_Collections_Generic_List_object___GetEnumerator(&SStack_e8,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
  pIStack_f8 = SStack_e8.fields._current;
  pIStack_f0 = pIVar7;
  if (in_stack_fffffffffffffef0 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01.fields._index = 0;
    __this_01.fields._version = 0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
    __this_01.fields._current = (Il2CppObject *)SStack_e8.fields._list;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffef8);
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_e8.fields._list;
    if ((char)bVar3 != '\0') goto label_041ceb3a;
  }
  else {
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_e8.fields._list;
    while (__this_00.fields._8_8_ = in_stack_fffffffffffffef0,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8,
          __this_00.fields._current = (Il2CppObject *)pSVar11,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffef8), (char)bVar3 != '\0') {
      if (SStack_e8.fields._current == (Il2CppObject *)0x0) goto label_041ceb44;
      key_01 = (Il2CppObject *)
               (*(SStack_e8.fields._current)->klass->vtable[3].methodPtr)
                         (SStack_e8.fields._current,(SStack_e8.fields._current)->klass->vtable[3].method);
      pIVar7 = CustomLogic_CustomLogicDictBuiltin__Get
                         (__this_06.genericMethod,SStack_e8.fields._current,(Il2CppObject *)0x0,
                          (MethodInfo *)0x0);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_041ceb70;
      pIVar7 = (Il2CppObject *)(*pIVar7->klass->vtable[3].methodPtr)(pIVar7,pIVar7->klass->vtable[3].method);
      System_Collections_Generic_Dictionary_object__object___set_Item
                (in_stack_fffffffffffffef0,key_01,pIVar7,MethodInfo_Void_set_Item);
    }
  }
  __this_02.fields._8_8_ = in_stack_fffffffffffffef0;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
  __this_02.fields._current = (Il2CppObject *)pSVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef8);
  do {
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),pIStack_f0,(Il2CppObject *)in_stack_fffffffffffffef0,
                 MethodInfo_Void_set_Item);
      return extraout_RAX_00;
    }
label_041ceb35:
    il2cpp_runtime_helper_022b2c90();
label_041ceb3a:
    key_01 = pIStack_f8;
    if (pIStack_f8 == (Il2CppObject *)0x0) {
label_041ceb44:
      il2cpp_runtime_helper_022b2c90();
    }
    (*key_01->klass->vtable[3].methodPtr)(key_01,key_01->klass->vtable[3].method);
    pIVar7 = CustomLogic_CustomLogicDictBuiltin__Get
                       (__this_06.genericMethod,key_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (pIVar7 == (Il2CppObject *)0x0) {
label_041ceb70:
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    }
    (*pIVar7->klass->vtable[3].methodPtr)(pIVar7,pIVar7->klass->vtable[3].method);
    auVar10 = il2cpp_runtime_helper_022b2c90();
    __this_06 = auVar10._0_8_;
    if (auVar10._8_4_ != 1) goto label_041cec37;
    plVar8 = (long *)__cxa_begin_catch(__this_06.genericMethod);
    lVar2 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_fffffffffffffef0;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
    __this_03.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef8);
  } while (lVar2 == 0);
  il2cpp_runtime_helper_022fefe0(lVar2);
label_041cec37:
  __this_04.fields._8_8_ = in_stack_fffffffffffffef0;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
  __this_04.fields._current = (Il2CppObject *)pSVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef8);
  _Unwind_Resume(__this_06.genericMethod);
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_ClassName (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x41cef30

System_String_o *
CustomLogic_CustomLogicLocaleBuiltin__get_ClassName
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad6b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Locale");
    g_data_057ad6b0 = '\x01';
  }
  return "Locale";
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_IsAbstract (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x41cef60

bool_conflict
CustomLogic_CustomLogicLocaleBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_IsStatic (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x41cef70

bool_conflict
CustomLogic_CustomLogicLocaleBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x41cef80

bool_conflict
CustomLogic_CustomLogicLocaleBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLocaleBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin___cctor (const MethodInfo* method);
// 0x41cef90

void CustomLogic_CustomLogicLocaleBuiltin___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (g_data_057ad6b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_string);
    g_data_057ad6b1 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
  **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  return;
}


