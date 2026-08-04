// Type: CustomLogic.CustomLogicDropdownBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDropdownBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicDropdownBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41e8ad0

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined4 in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *pSVar9;
  System_Action_T__object__o *pSVar10;
  System_Func_T__object____object__o *pSVar11;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar12;
  System_ArgumentException_o **ppSVar13;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  uStack_18 = CONCAT44((int)args->max_length,(undefined4)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicDropdownBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicDropdownBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad7d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"RemoveChoice");
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"AddChoice");
    il2cpp_runtime_helper_023445d0(&"Index");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Choices");
    il2cpp_runtime_helper_023445d0(&"ClearChoices");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"SetIndexWithoutNotify");
    g_data_057ad7d4 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x7ed1d727) {
    if (uVar3 < 0x19e378c0) {
      if (uVar3 == 0x337847e) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"RemoveChoice",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad7dd == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveChoice_b__10_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad7dd = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = message;
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          else {
            pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          if (pSVar11 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar11;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar11);
          }
          pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          return pCVar12;
        }
      }
      else if ((uVar3 == 0x19e378bf) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"AddChoice",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad7dc == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AddChoice_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad7dc = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = message;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar11 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar11;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar11);
        }
        pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        return pCVar12;
      }
    }
    else if (uVar3 == 0x31359a62) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetIndexWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad7db == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetIndexWithoutNotify_b__8);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad7db = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = message;
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar11 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar11;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar11);
        }
        pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        return pCVar12;
      }
    }
    else if (uVar3 == 0x3dac88df) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Choices",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad7d8 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Choices_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Choices_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
          g_data_057ad7d8 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        System_Action_object__object____ctor();
        pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        return pCVar12;
      }
    }
    else if ((uVar3 == 0x7ed1d726) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ClearChoices",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7de == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearChoices_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7de = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar11 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar11;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar11);
      }
      pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      return pCVar12;
    }
  }
  else if (uVar3 < 0xaec7ae4c) {
    if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        else {
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        goto CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label;
      }
    }
    else if ((uVar3 == 0xaec7ae4b) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Index",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7d7 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Index_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Index_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        g_data_057ad7d7 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
      System_Action_object__object____ctor();
      pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
      return pCVar12;
    }
  }
  else if (uVar3 == 0xd147f96a) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Value",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7d6 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        g_data_057ad7d6 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
      System_Action_object__object____ctor();
      pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
      return pCVar12;
    }
  }
  else if (uVar3 == 0xd1dd43b5) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7da == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__7);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7da = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar11 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar11;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar11);
      }
      pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      return pCVar12;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"OnValueChanged",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057ad7d9 == '\0') {
      pSStack_28 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__6_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad7d9 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_28 = message;
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar11 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar11;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar11);
    }
    pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar12,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    return pCVar12;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicDropdownBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label:
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x18) = pSVar8;
  if (g_data_057ad7d5 == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e903a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e9046;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e9052;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e905e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e906a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e9076;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
    g_data_057ad7d5 = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e908c;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e90a5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e90b4;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e90cd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e90dc;
  pCVar12 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41e90f7;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar12,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return pCVar12;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41ea100

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad7e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7e4 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41ea170

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41ea180

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  int32_t index;
  CustomLogic_CustomLogicEvaluator_c *pCVar7;
  CustomLogic_CustomLogicEvaluator_c *pCVar8;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar9;
  CustomLogic_UserMethod_o *pCVar10;
  Il2CppObject *pIVar11;
  CustomLogic_CustomLogicEvaluator_c *item;
  CustomLogic_CustomLogicEvaluator_c *pCVar12;
  long extraout_RDX;
  CustomLogic_CustomLogicEvaluator_c *extraout_RDX_00;
  MethodInfo *method_00;
  CustomLogic_CustomLogicEvaluator_c *extraout_RDX_01;
  long extraout_RDX_02;
  CustomLogic_CustomLogicEvaluator_c **ppCVar13;
  CustomLogic_CustomLogicEvaluator_c *item_00;
  CustomLogic_CustomLogicEvaluator_c *pCVar14;
  UnityEngine_UIElements_DropdownField_o *visualElement;
  long *plVar15;
  CustomLogic_CustomLogicEvaluator_c *unaff_R12;
  CustomLogic_CustomLogicEvaluator_c *unaff_R15;
  CustomLogic_CustomLogicEvaluator_c *pCStack_70;
  CustomLogic_CustomLogicEvaluator_c *pCStack_68;
  
  pCVar12 = (CustomLogic_CustomLogicEvaluator_c *)__c;
  plVar15 = (long *)__this;
  if (g_data_057ad7e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041ea20b:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    plVar15 = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar12 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    pCVar10 = (CustomLogic_UserMethod_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)plVar15,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar10;
      il2cpp_runtime_helper_022b4080(&(__c->fields)._valueChangedEvent,pCVar10);
      return (Il2CppObject *)__c;
    }
    goto label_041ea20b;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar14 = pCVar12;
  if (g_data_057ad7e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e6 = '\x01';
  }
  if (extraout_RDX == 0) {
label_041ea2b6:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    plVar15 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar14 = MethodInfo_String_ConvertTo_String;
    pIVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)plVar15,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pCVar12 != (CustomLogic_CustomLogicEvaluator_c *)0x0) &&
       (plVar5 = (pCVar12->_1).generic_class, plVar15 = (long *)0x0, plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x858))(plVar5,pIVar11,*(undefined8 *)(*plVar5 + 0x860));
      return (Il2CppObject *)0x0;
    }
    goto label_041ea2b6;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar12 = pCVar14;
  if (g_data_057ad7e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e7 = '\x01';
  }
  pCVar7 = extraout_RDX_00;
  if (extraout_RDX_00 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_041ea344:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&(extraout_RDX_00->_1).namespaze != 0) {
    pCVar7 = (extraout_RDX_00->_1).byval_arg.data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar12 = MethodInfo_Int32_ConvertTo_Int32;
    plVar15 = (long *)pCVar7;
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)pCVar7,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (pCVar14 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
      CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify
                ((CustomLogic_CustomLogicDropdownBuiltin_o *)pCVar14,index,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_041ea344;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar14 = pCVar12;
  if (g_data_057ad7e8 == '\0') {
    pCStack_68 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea36f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    pCStack_68 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea37b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e8 = '\x01';
  }
  pCVar8 = extraout_RDX_01;
  if (extraout_RDX_01 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_041ea3d2:
    pCStack_68 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea3d7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&(extraout_RDX_01->_1).namespaze != 0) {
    pCVar8 = (extraout_RDX_01->_1).byval_arg.data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_68 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea3a9;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_68 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea3bb;
    pCVar14 = MethodInfo_String_ConvertTo_String;
    plVar15 = (long *)pCVar8;
    item = (CustomLogic_CustomLogicEvaluator_c *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)pCVar8,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pCVar12 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
      ppCVar13 = &pCStack_70;
      item_00 = item;
      pCStack_70 = item;
      pCStack_68 = pCVar7;
      if (g_data_057ad7cf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7cf = '\x01';
      }
      plVar15 = (pCVar12->_1).generic_class;
      pCVar14 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
      if (plVar15 != (long *)0x0) {
        unaff_R12 = (CustomLogic_CustomLogicEvaluator_c *)
                    (**(code **)(*plVar15 + 0x898))(plVar15,*(undefined8 *)(*plVar15 + 0x8a0));
        pCVar7 = (CustomLogic_CustomLogicEvaluator_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        item_00 = unaff_R12;
        pCVar14 = pCVar7;
        System_Collections_Generic_List_object____ctor_362ba10
                  ((System_Collections_Generic_List_object__o *)pCVar7,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_List_1_System_String);
        lVar6 = MethodInfo_Void_Add;
        if (pCVar7 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
          piVar1 = (int *)((long)&(pCVar7->_1).namespaze + 4);
          *piVar1 = *piVar1 + 1;
          pcVar3 = (pCVar7->_1).name;
          if (pcVar3 != (char *)0x0) {
            uVar2 = *(uint *)&(pCVar7->_1).namespaze;
            if (uVar2 < *(uint *)(pcVar3 + 0x18)) {
              *(uint *)&(pCVar7->_1).namespaze = uVar2 + 1;
              *(CustomLogic_CustomLogicEvaluator_c **)(pcVar3 + (long)(int)uVar2 * 8 + 0x20) = item;
              item_00 = item;
              il2cpp_runtime_helper_022b4080(pcVar3 + (long)(int)uVar2 * 8 + 0x20);
              plVar15 = (pCVar12->_1).generic_class;
              if (plVar15 != (long *)0x0) {
label_041e888b:
                (**(code **)(*plVar15 + 0x8a8))(plVar15,pCVar7,*(undefined8 *)(*plVar15 + 0x8b0));
                return (Il2CppObject *)pCVar12;
              }
              pCVar14 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
            }
            else {
              item_00 = item;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pCVar7,(Il2CppObject *)item,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              plVar15 = (pCVar12->_1).generic_class;
              pCVar14 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
              if (plVar15 != (long *)0x0) goto label_041e888b;
            }
          }
        }
      }
      pCVar8 = (CustomLogic_CustomLogicEvaluator_c *)il2cpp_runtime_helper_022b2c90();
      unaff_R15 = pCVar12;
      goto CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice;
    }
    goto label_041ea3d2;
  }
  pCStack_68 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea3dc;
  il2cpp_runtime_helper_022b2ca0();
  pCVar7 = pCVar14;
  pCStack_70 = pCVar8;
  pCStack_68 = pCVar12;
  if (g_data_057ad7e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e9 = '\x01';
  }
  if (extraout_RDX_02 != 0) {
    if (*(int *)(extraout_RDX_02 + 0x18) == 0) goto label_041ea467;
    plVar15 = *(long **)(extraout_RDX_02 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar7 = MethodInfo_String_ConvertTo_String;
    pCVar8 = (CustomLogic_CustomLogicEvaluator_c *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)plVar15,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pCVar14 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
      ppCVar13 = (CustomLogic_CustomLogicEvaluator_c **)&stack0xffffffffffffffa0;
      pCVar7 = pCStack_70;
      item_00 = pCVar8;
      item = pCStack_68;
CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice:
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar13 + -8) = unaff_R15;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar13 + -0x10) = item;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar13 + -0x18) = unaff_R12;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar13 + -0x20) = pCVar7;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar13 + -0x28) = pCVar8;
      if (g_data_057ad7d0 == '\0') {
        *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e88e3;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e88ef;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e88fb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d0 = '\x01';
      }
      plVar15 = (pCVar14->_1).generic_class;
      pCVar12 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
      if (plVar15 != (long *)0x0) {
        uVar9 = *(undefined8 *)(*plVar15 + 0x8a0);
        pcVar4 = *(code **)(*plVar15 + 0x898);
        *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e891b;
        collection = (System_Collections_Generic_IEnumerable_T__o *)(*pcVar4)(plVar15,uVar9);
        *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e892d;
        pCVar7 = (CustomLogic_CustomLogicEvaluator_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e8945;
        pCVar12 = pCVar7;
        System_Collections_Generic_List_object____ctor_362ba10
                  ((System_Collections_Generic_List_object__o *)pCVar7,collection,MethodInfo_List_1_System_String);
        if (pCVar7 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
          *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e895f;
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)pCVar7,(Il2CppObject *)item_00,MethodInfo_Boolean_Remove)
          ;
          plVar15 = (pCVar14->_1).generic_class;
          pCVar12 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
          if (plVar15 != (long *)0x0) {
            uVar9 = *(undefined8 *)(*plVar15 + 0x8b0);
            pcVar4 = *(code **)(*plVar15 + 0x8a8);
            *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e897b;
            (*pcVar4)(plVar15,pCVar7,uVar9);
            return (Il2CppObject *)pCVar14;
          }
        }
      }
      *(undefined8 *)((long)ppCVar13 + -0x30) = 0x41e898f;
      il2cpp_runtime_helper_022b2c90();
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar13 + -0x30) = pCVar14;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar13 + -0x38) = item_00;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar13 + -0x40) = pCVar7;
      if (g_data_057ad7d1 == '\0') {
        *(undefined8 *)((long)ppCVar13 + -0x48) = 0x41e89ad;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        *(undefined8 *)((long)ppCVar13 + -0x48) = 0x41e89b9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d1 = '\x01';
      }
      plVar15 = (pCVar12->_1).generic_class;
      *(undefined8 *)((long)ppCVar13 + -0x48) = 0x41e89d3;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      *(undefined8 *)((long)ppCVar13 + -0x48) = 0x41e89e8;
      System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
      if (plVar15 != (long *)0x0) {
        uVar9 = *(undefined8 *)(*plVar15 + 0x8b0);
        pcVar4 = *(code **)(*plVar15 + 0x8a8);
        *(undefined8 *)((long)ppCVar13 + -0x48) = 0x41e8a03;
        (*pcVar4)(plVar15,__this_00,uVar9);
        return (Il2CppObject *)pCVar12;
      }
      *(undefined8 *)((long)ppCVar13 + -0x48) = 0x41e8a11;
      uVar9 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppCVar13 + -0x48) = uVar9;
      if (g_data_057ad7d2 == '\0') {
        *(undefined8 *)((long)ppCVar13 + -0x50) = 0x41e8a36;
        il2cpp_runtime_helper_023445d0(&"Dropdown");
        g_data_057ad7d2 = '\x01';
      }
      return "Dropdown";
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ea467:
  il2cpp_runtime_helper_022b2ca0();
  visualElement = (UnityEngine_UIElements_DropdownField_o *)0x0;
  if (pCVar7 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
    if (g_data_057ad7d1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7d1 = '\x01';
    }
    plVar5 = (pCVar7->_1).generic_class;
    pCVar12 = (CustomLogic_CustomLogicEvaluator_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    visualElement = MethodInfo_List_1_System_String;
    plVar15 = (long *)pCVar12;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pCVar12,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x8a8))(plVar5,pCVar12,*(undefined8 *)(*plVar5 + 0x8b0));
      return (Il2CppObject *)pCVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)plVar15,
             (UnityEngine_UIElements_VisualElement_o *)visualElement,(MethodInfo *)0x0);
  (((CustomLogic_CustomLogicEvaluator_c *)plVar15)->_1).generic_class = visualElement;
  il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicEvaluator_c *)plVar15)->_1).generic_class,visualElement);
  (((CustomLogic_CustomLogicEvaluator_c *)plVar15)->_1).typeMetadataHandle =
       (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pIVar11 = (Il2CppObject *)
            il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicEvaluator_c *)plVar15)->_1).typeMetadataHandle);
  return pIVar11;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41ea220

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  int32_t index;
  CustomLogic_CustomLogicEvaluator_c *pCVar7;
  CustomLogic_CustomLogicEvaluator_c *pCVar8;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicEvaluator_c *item;
  CustomLogic_CustomLogicEvaluator_c *pCVar11;
  CustomLogic_CustomLogicEvaluator_c *extraout_RDX;
  MethodInfo *method_00;
  CustomLogic_CustomLogicEvaluator_c *extraout_RDX_00;
  long extraout_RDX_01;
  CustomLogic_CustomLogicEvaluator_c **ppCVar12;
  CustomLogic_CustomLogicEvaluator_c *item_00;
  CustomLogic_CustomLogicEvaluator_c *pCVar13;
  UnityEngine_UIElements_DropdownField_o *pUVar14;
  long *plVar15;
  CustomLogic_CustomLogicEvaluator_c *unaff_R12;
  CustomLogic_CustomLogicEvaluator_c *unaff_R15;
  CustomLogic_CustomLogicEvaluator_c *pCStack_58;
  CustomLogic_CustomLogicEvaluator_c *pCStack_50;
  
  pCVar11 = (CustomLogic_CustomLogicEvaluator_c *)__c;
  plVar15 = (long *)__this;
  if (g_data_057ad7e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041ea2b6:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    plVar15 = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar11 = MethodInfo_String_ConvertTo_String;
    pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)plVar15,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) &&
       (pUVar14 = (__c->fields)._dropdown, plVar15 = (long *)0x0,
       pUVar14 != (UnityEngine_UIElements_DropdownField_o *)0x0)) {
      (*(pUVar14->klass->vtable)._114_SetValueWithoutNotify.methodPtr)
                (pUVar14,pIVar10,(pUVar14->klass->vtable)._114_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
    goto label_041ea2b6;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar13 = pCVar11;
  if (g_data_057ad7e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e7 = '\x01';
  }
  pCVar7 = extraout_RDX;
  if (extraout_RDX == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_041ea344:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&(extraout_RDX->_1).namespaze != 0) {
    pCVar7 = (extraout_RDX->_1).byval_arg.data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar13 = MethodInfo_Int32_ConvertTo_Int32;
    plVar15 = (long *)pCVar7;
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)pCVar7,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (pCVar11 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
      CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify
                ((CustomLogic_CustomLogicDropdownBuiltin_o *)pCVar11,index,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_041ea344;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar11 = pCVar13;
  if (g_data_057ad7e8 == '\0') {
    pCStack_50 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea36f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    pCStack_50 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea37b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e8 = '\x01';
  }
  pCVar8 = extraout_RDX_00;
  if (extraout_RDX_00 == (CustomLogic_CustomLogicEvaluator_c *)0x0) {
label_041ea3d2:
    pCStack_50 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea3d7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&(extraout_RDX_00->_1).namespaze != 0) {
    pCVar8 = (extraout_RDX_00->_1).byval_arg.data;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_50 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea3a9;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_50 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea3bb;
    pCVar11 = MethodInfo_String_ConvertTo_String;
    plVar15 = (long *)pCVar8;
    item = (CustomLogic_CustomLogicEvaluator_c *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)pCVar8,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pCVar13 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
      ppCVar12 = &pCStack_58;
      item_00 = item;
      pCStack_58 = item;
      pCStack_50 = pCVar7;
      if (g_data_057ad7cf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7cf = '\x01';
      }
      plVar15 = (pCVar13->_1).generic_class;
      pCVar11 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
      if (plVar15 != (long *)0x0) {
        unaff_R12 = (CustomLogic_CustomLogicEvaluator_c *)
                    (**(code **)(*plVar15 + 0x898))(plVar15,*(undefined8 *)(*plVar15 + 0x8a0));
        pCVar7 = (CustomLogic_CustomLogicEvaluator_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        item_00 = unaff_R12;
        pCVar11 = pCVar7;
        System_Collections_Generic_List_object____ctor_362ba10
                  ((System_Collections_Generic_List_object__o *)pCVar7,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_List_1_System_String);
        lVar6 = MethodInfo_Void_Add;
        if (pCVar7 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
          piVar1 = (int *)((long)&(pCVar7->_1).namespaze + 4);
          *piVar1 = *piVar1 + 1;
          pcVar3 = (pCVar7->_1).name;
          if (pcVar3 != (char *)0x0) {
            uVar2 = *(uint *)&(pCVar7->_1).namespaze;
            if (uVar2 < *(uint *)(pcVar3 + 0x18)) {
              *(uint *)&(pCVar7->_1).namespaze = uVar2 + 1;
              *(CustomLogic_CustomLogicEvaluator_c **)(pcVar3 + (long)(int)uVar2 * 8 + 0x20) = item;
              item_00 = item;
              il2cpp_runtime_helper_022b4080(pcVar3 + (long)(int)uVar2 * 8 + 0x20);
              plVar15 = (pCVar13->_1).generic_class;
              if (plVar15 != (long *)0x0) {
label_041e888b:
                (**(code **)(*plVar15 + 0x8a8))(plVar15,pCVar7,*(undefined8 *)(*plVar15 + 0x8b0));
                return (Il2CppObject *)pCVar13;
              }
              pCVar11 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
            }
            else {
              item_00 = item;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pCVar7,(Il2CppObject *)item,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              plVar15 = (pCVar13->_1).generic_class;
              pCVar11 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
              if (plVar15 != (long *)0x0) goto label_041e888b;
            }
          }
        }
      }
      pCVar8 = (CustomLogic_CustomLogicEvaluator_c *)il2cpp_runtime_helper_022b2c90();
      unaff_R15 = pCVar13;
      goto CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice;
    }
    goto label_041ea3d2;
  }
  pCStack_50 = (CustomLogic_CustomLogicEvaluator_c *)0x41ea3dc;
  il2cpp_runtime_helper_022b2ca0();
  pCVar7 = pCVar11;
  pCStack_58 = pCVar8;
  pCStack_50 = pCVar13;
  if (g_data_057ad7e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar15 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e9 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    if (*(int *)(extraout_RDX_01 + 0x18) == 0) goto label_041ea467;
    plVar15 = *(long **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar7 = MethodInfo_String_ConvertTo_String;
    pCVar8 = (CustomLogic_CustomLogicEvaluator_c *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)plVar15,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pCVar11 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
      ppCVar12 = (CustomLogic_CustomLogicEvaluator_c **)&stack0xffffffffffffffb8;
      pCVar7 = pCStack_58;
      item_00 = pCVar8;
      item = pCStack_50;
CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice:
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar12 + -8) = unaff_R15;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar12 + -0x10) = item;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar12 + -0x18) = unaff_R12;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar12 + -0x20) = pCVar7;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar12 + -0x28) = pCVar8;
      if (g_data_057ad7d0 == '\0') {
        *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e88e3;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e88ef;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e88fb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d0 = '\x01';
      }
      plVar15 = (pCVar11->_1).generic_class;
      pCVar13 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
      if (plVar15 != (long *)0x0) {
        uVar9 = *(undefined8 *)(*plVar15 + 0x8a0);
        pcVar4 = *(code **)(*plVar15 + 0x898);
        *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e891b;
        collection = (System_Collections_Generic_IEnumerable_T__o *)(*pcVar4)(plVar15,uVar9);
        *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e892d;
        pCVar7 = (CustomLogic_CustomLogicEvaluator_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e8945;
        pCVar13 = pCVar7;
        System_Collections_Generic_List_object____ctor_362ba10
                  ((System_Collections_Generic_List_object__o *)pCVar7,collection,MethodInfo_List_1_System_String);
        if (pCVar7 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
          *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e895f;
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)pCVar7,(Il2CppObject *)item_00,MethodInfo_Boolean_Remove)
          ;
          plVar15 = (pCVar11->_1).generic_class;
          pCVar13 = (CustomLogic_CustomLogicEvaluator_c *)0x0;
          if (plVar15 != (long *)0x0) {
            uVar9 = *(undefined8 *)(*plVar15 + 0x8b0);
            pcVar4 = *(code **)(*plVar15 + 0x8a8);
            *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e897b;
            (*pcVar4)(plVar15,pCVar7,uVar9);
            return (Il2CppObject *)pCVar11;
          }
        }
      }
      *(undefined8 *)((long)ppCVar12 + -0x30) = 0x41e898f;
      il2cpp_runtime_helper_022b2c90();
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar12 + -0x30) = pCVar11;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar12 + -0x38) = item_00;
      *(CustomLogic_CustomLogicEvaluator_c **)((long)ppCVar12 + -0x40) = pCVar7;
      if (g_data_057ad7d1 == '\0') {
        *(undefined8 *)((long)ppCVar12 + -0x48) = 0x41e89ad;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        *(undefined8 *)((long)ppCVar12 + -0x48) = 0x41e89b9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d1 = '\x01';
      }
      plVar15 = (pCVar13->_1).generic_class;
      *(undefined8 *)((long)ppCVar12 + -0x48) = 0x41e89d3;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      *(undefined8 *)((long)ppCVar12 + -0x48) = 0x41e89e8;
      System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
      if (plVar15 != (long *)0x0) {
        uVar9 = *(undefined8 *)(*plVar15 + 0x8b0);
        pcVar4 = *(code **)(*plVar15 + 0x8a8);
        *(undefined8 *)((long)ppCVar12 + -0x48) = 0x41e8a03;
        (*pcVar4)(plVar15,__this_00,uVar9);
        return (Il2CppObject *)pCVar13;
      }
      *(undefined8 *)((long)ppCVar12 + -0x48) = 0x41e8a11;
      uVar9 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppCVar12 + -0x48) = uVar9;
      if (g_data_057ad7d2 == '\0') {
        *(undefined8 *)((long)ppCVar12 + -0x50) = 0x41e8a36;
        il2cpp_runtime_helper_023445d0(&"Dropdown");
        g_data_057ad7d2 = '\x01';
      }
      return "Dropdown";
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ea467:
  il2cpp_runtime_helper_022b2ca0();
  pUVar14 = (UnityEngine_UIElements_DropdownField_o *)0x0;
  if (pCVar7 != (CustomLogic_CustomLogicEvaluator_c *)0x0) {
    if (g_data_057ad7d1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7d1 = '\x01';
    }
    plVar5 = (pCVar7->_1).generic_class;
    pCVar11 = (CustomLogic_CustomLogicEvaluator_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pUVar14 = MethodInfo_List_1_System_String;
    plVar15 = (long *)pCVar11;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pCVar11,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x8a8))(plVar5,pCVar11,*(undefined8 *)(*plVar5 + 0x8b0));
      return (Il2CppObject *)pCVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)plVar15,
             (UnityEngine_UIElements_VisualElement_o *)pUVar14,(MethodInfo *)0x0);
  (((CustomLogic_CustomLogicEvaluator_c *)plVar15)->_1).generic_class = pUVar14;
  il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicEvaluator_c *)plVar15)->_1).generic_class,pUVar14);
  (((CustomLogic_CustomLogicEvaluator_c *)plVar15)->_1).typeMetadataHandle =
       (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pIVar10 = (Il2CppObject *)
            il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicEvaluator_c *)plVar15)->_1).typeMetadataHandle);
  return pIVar10;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIndexWithoutNotify>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetIndexWithoutNotify_b__8_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41ea2c0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetIndexWithoutNotify_b__8_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  Il2CppArrayBounds *pIVar3;
  code *pcVar4;
  long lVar5;
  int32_t index;
  System_Object_array *pSVar6;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar7;
  System_Object_array *pSVar8;
  System_Object_array *pSVar9;
  Il2CppObject *pIVar10;
  MethodInfo *method_00;
  System_Object_array *extraout_RDX;
  long extraout_RDX_00;
  System_Object_array **ppSVar11;
  System_Object_array *item;
  System_Object_array *pSVar12;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  long *plVar13;
  System_Object_array *unaff_R12;
  System_Object_array *unaff_R15;
  System_Object_array *pSStack_40;
  System_Object_array *pSStack_38;
  
  pSVar9 = (System_Object_array *)__c;
  if (g_data_057ad7e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041ea344:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = MethodInfo_Int32_ConvertTo_Int32;
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)__a;
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)__a,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify(__c,index,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_041ea344;
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar12 = pSVar9;
  if (g_data_057ad7e8 == '\0') {
    pSStack_38 = (System_Object_array *)0x41ea36f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_38 = (System_Object_array *)0x41ea37b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e8 = '\x01';
  }
  pSVar6 = extraout_RDX;
  if (extraout_RDX == (System_Object_array *)0x0) {
label_041ea3d2:
    pSStack_38 = (System_Object_array *)0x41ea3d7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&extraout_RDX->max_length != 0) {
    pSVar6 = (System_Object_array *)extraout_RDX->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_38 = (System_Object_array *)0x41ea3a9;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_38 = (System_Object_array *)0x41ea3bb;
    pSVar12 = MethodInfo_String_ConvertTo_String;
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)pSVar6;
    pSVar8 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)pSVar6,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pSVar9 != (System_Object_array *)0x0) {
      ppSVar11 = &pSStack_40;
      item = pSVar8;
      pSStack_40 = pSVar8;
      pSStack_38 = __a;
      if (g_data_057ad7cf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7cf = '\x01';
      }
      plVar13 = ((Il2CppType *)pSVar9->m_Items)[4].data;
      pSVar12 = (System_Object_array *)0x0;
      if (plVar13 != (long *)0x0) {
        unaff_R12 = (System_Object_array *)
                    (**(code **)(*plVar13 + 0x898))(plVar13,*(undefined8 *)(*plVar13 + 0x8a0));
        __a = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        item = unaff_R12;
        pSVar12 = __a;
        System_Collections_Generic_List_object____ctor_362ba10
                  ((System_Collections_Generic_List_object__o *)__a,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_List_1_System_String);
        lVar5 = MethodInfo_Void_Add;
        if (__a != (System_Object_array *)0x0) {
          piVar1 = (int *)((long)&__a->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar3 = __a->bounds;
          if (pIVar3 != (Il2CppArrayBounds *)0x0) {
            uVar2 = *(uint *)&__a->max_length;
            if (uVar2 < (uint)pIVar3[1].lower_bound) {
              *(uint *)&__a->max_length = uVar2 + 1;
              (&pIVar3[2].length)[(int)uVar2] = (il2cpp_array_size_t)pSVar8;
              item = pSVar8;
              il2cpp_runtime_helper_022b4080(&pIVar3[2].length + (int)uVar2);
              plVar13 = ((Il2CppType *)pSVar9->m_Items)[4].data;
              if (plVar13 != (long *)0x0) {
label_041e888b:
                (**(code **)(*plVar13 + 0x8a8))(plVar13,__a,*(undefined8 *)(*plVar13 + 0x8b0));
                return &pSVar9->obj;
              }
              pSVar12 = (System_Object_array *)0x0;
            }
            else {
              item = pSVar8;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__a,(Il2CppObject *)pSVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              plVar13 = ((Il2CppType *)pSVar9->m_Items)[4].data;
              pSVar12 = (System_Object_array *)0x0;
              if (plVar13 != (long *)0x0) goto label_041e888b;
            }
          }
        }
      }
      pSVar6 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
      unaff_R15 = pSVar9;
      goto CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice;
    }
    goto label_041ea3d2;
  }
  pSStack_38 = (System_Object_array *)0x41ea3dc;
  il2cpp_runtime_helper_022b2ca0();
  pSVar8 = pSVar12;
  pSStack_40 = pSVar6;
  pSStack_38 = pSVar9;
  if (g_data_057ad7e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e9 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) == 0) goto label_041ea467;
    __this = *(CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = MethodInfo_String_ConvertTo_String;
    pSVar6 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pSVar12 != (System_Object_array *)0x0) {
      ppSVar11 = (System_Object_array **)&stack0xffffffffffffffd0;
      __a = pSStack_40;
      item = pSVar6;
      pSVar8 = pSStack_38;
CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice:
      *(System_Object_array **)((long)ppSVar11 + -8) = unaff_R15;
      *(System_Object_array **)((long)ppSVar11 + -0x10) = pSVar8;
      *(System_Object_array **)((long)ppSVar11 + -0x18) = unaff_R12;
      *(System_Object_array **)((long)ppSVar11 + -0x20) = __a;
      *(System_Object_array **)((long)ppSVar11 + -0x28) = pSVar6;
      if (g_data_057ad7d0 == '\0') {
        *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e88e3;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e88ef;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e88fb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d0 = '\x01';
      }
      plVar13 = ((Il2CppType *)pSVar12->m_Items)[4].data;
      pSVar9 = (System_Object_array *)0x0;
      if (plVar13 != (long *)0x0) {
        uVar7 = *(undefined8 *)(*plVar13 + 0x8a0);
        pcVar4 = *(code **)(*plVar13 + 0x898);
        *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e891b;
        collection = (System_Collections_Generic_IEnumerable_T__o *)(*pcVar4)(plVar13,uVar7);
        *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e892d;
        __a = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e8945;
        pSVar9 = __a;
        System_Collections_Generic_List_object____ctor_362ba10
                  ((System_Collections_Generic_List_object__o *)__a,collection,MethodInfo_List_1_System_String);
        if (__a != (System_Object_array *)0x0) {
          *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e895f;
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__a,&item->obj,MethodInfo_Boolean_Remove);
          plVar13 = ((Il2CppType *)pSVar12->m_Items)[4].data;
          pSVar9 = (System_Object_array *)0x0;
          if (plVar13 != (long *)0x0) {
            uVar7 = *(undefined8 *)(*plVar13 + 0x8b0);
            pcVar4 = *(code **)(*plVar13 + 0x8a8);
            *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e897b;
            (*pcVar4)(plVar13,__a,uVar7);
            return &pSVar12->obj;
          }
        }
      }
      *(undefined8 *)((long)ppSVar11 + -0x30) = 0x41e898f;
      il2cpp_runtime_helper_022b2c90();
      *(System_Object_array **)((long)ppSVar11 + -0x30) = pSVar12;
      *(System_Object_array **)((long)ppSVar11 + -0x38) = item;
      *(System_Object_array **)((long)ppSVar11 + -0x40) = __a;
      if (g_data_057ad7d1 == '\0') {
        *(undefined8 *)((long)ppSVar11 + -0x48) = 0x41e89ad;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        *(undefined8 *)((long)ppSVar11 + -0x48) = 0x41e89b9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d1 = '\x01';
      }
      plVar13 = (long *)pSVar9->m_Items[8];
      *(undefined8 *)((long)ppSVar11 + -0x48) = 0x41e89d3;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      *(undefined8 *)((long)ppSVar11 + -0x48) = 0x41e89e8;
      System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
      if (plVar13 != (long *)0x0) {
        uVar7 = *(undefined8 *)(*plVar13 + 0x8b0);
        pcVar4 = *(code **)(*plVar13 + 0x8a8);
        *(undefined8 *)((long)ppSVar11 + -0x48) = 0x41e8a03;
        (*pcVar4)(plVar13,__this_00,uVar7);
        return &pSVar9->obj;
      }
      *(undefined8 *)((long)ppSVar11 + -0x48) = 0x41e8a11;
      uVar7 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppSVar11 + -0x48) = uVar7;
      if (g_data_057ad7d2 == '\0') {
        *(undefined8 *)((long)ppSVar11 + -0x50) = 0x41e8a36;
        il2cpp_runtime_helper_023445d0(&"Dropdown");
        g_data_057ad7d2 = '\x01';
      }
      return "Dropdown";
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ea467:
  il2cpp_runtime_helper_022b2ca0();
  visualElement = (UnityEngine_UIElements_VisualElement_o *)0x0;
  if (pSVar8 != (System_Object_array *)0x0) {
    if (g_data_057ad7d1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7d1 = '\x01';
    }
    plVar13 = ((Il2CppType *)pSVar8->m_Items)[4].data;
    pSVar9 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    visualElement = MethodInfo_List_1_System_String;
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)pSVar9;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar9,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x8a8))(plVar13,pSVar9,*(undefined8 *)(*plVar13 + 0x8b0));
      return &pSVar8->obj;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,visualElement,(MethodInfo *)0x0);
  ((Il2CppType *)((System_Object_array *)__this)->m_Items)[4].data = visualElement;
  il2cpp_runtime_helper_022b4080((Il2CppType *)((System_Object_array *)__this)->m_Items + 4,visualElement);
  *(void **)((long)((Il2CppType *)((System_Object_array *)__this)->m_Items + 4) + 8) =
       (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pIVar10 = (Il2CppObject *)
            il2cpp_runtime_helper_022b4080((void **)((long)((Il2CppType *)((System_Object_array *)__this)->m_Items + 4) +
                                        8));
  return pIVar10;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddChoice>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__AddChoice_b__9_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41ea350

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__AddChoice_b__9_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  Il2CppArrayBounds *pIVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  long lVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar8;
  System_Object_array *pSVar9;
  System_Object_array *pSVar10;
  Il2CppObject *pIVar11;
  long extraout_RDX;
  System_Object_array *unaff_RBX;
  System_Object_array **ppSVar12;
  System_Object_array *item;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  UnityEngine_UIElements_DropdownField_o *pUVar13;
  long *__this_01;
  System_Object_array *unaff_R12;
  CustomLogic_CustomLogicDropdownBuiltin_o *unaff_R15;
  System_Object_array *pSStack_28;
  System_Object_array *pSStack_20;
  
  pSVar10 = (System_Object_array *)__c;
  __this_01 = (long *)__this;
  if (g_data_057ad7e8 == '\0') {
    pSStack_20 = (System_Object_array *)0x41ea36f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    pSStack_20 = (System_Object_array *)0x41ea37b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041ea3d2:
    pSStack_20 = (System_Object_array *)0x41ea3d7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_20 = (System_Object_array *)0x41ea3a9;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_Object_array *)0x41ea3bb;
    pSVar10 = MethodInfo_String_ConvertTo_String;
    __this_01 = (long *)__a;
    pSVar9 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      ppSVar12 = &pSStack_28;
      item = pSVar9;
      pSStack_28 = pSVar9;
      pSStack_20 = unaff_RBX;
      if (g_data_057ad7cf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7cf = '\x01';
      }
      pUVar13 = (__c->fields)._dropdown;
      pSVar10 = (System_Object_array *)0x0;
      if (pUVar13 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        unaff_R12 = (System_Object_array *)
                    (*(pUVar13->klass->vtable)._118_get_choices.methodPtr)
                              (pUVar13,(pUVar13->klass->vtable)._118_get_choices.method);
        unaff_RBX = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        item = unaff_R12;
        pSVar10 = unaff_RBX;
        System_Collections_Generic_List_object____ctor_362ba10
                  ((System_Collections_Generic_List_object__o *)unaff_RBX,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_List_1_System_String);
        lVar6 = MethodInfo_Void_Add;
        if (unaff_RBX != (System_Object_array *)0x0) {
          piVar1 = (int *)((long)&unaff_RBX->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar3 = unaff_RBX->bounds;
          if (pIVar3 != (Il2CppArrayBounds *)0x0) {
            uVar2 = (uint)unaff_RBX->max_length;
            if (uVar2 < (uint)pIVar3[1].lower_bound) {
              *(uint *)&unaff_RBX->max_length = uVar2 + 1;
              (&pIVar3[2].length)[(int)uVar2] = (il2cpp_array_size_t)pSVar9;
              item = pSVar9;
              il2cpp_runtime_helper_022b4080(&pIVar3[2].length + (int)uVar2);
              pUVar13 = (__c->fields)._dropdown;
              if (pUVar13 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
label_041e888b:
                (*(pUVar13->klass->vtable)._119_set_choices.methodPtr)
                          (pUVar13,unaff_RBX,(pUVar13->klass->vtable)._119_set_choices.method);
                return (Il2CppObject *)__c;
              }
              pSVar10 = (System_Object_array *)0x0;
            }
            else {
              item = pSVar9;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)unaff_RBX,(Il2CppObject *)pSVar9,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              pUVar13 = (__c->fields)._dropdown;
              pSVar10 = (System_Object_array *)0x0;
              if (pUVar13 != (UnityEngine_UIElements_DropdownField_o *)0x0) goto label_041e888b;
            }
          }
        }
      }
      pSVar7 = (System_Object_array *)il2cpp_runtime_helper_022b2c90();
      unaff_R15 = __c;
      goto CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice;
    }
    goto label_041ea3d2;
  }
  pSStack_20 = (System_Object_array *)0x41ea3dc;
  il2cpp_runtime_helper_022b2ca0();
  pSVar9 = pSVar10;
  pSStack_28 = __a;
  pSStack_20 = (System_Object_array *)__c;
  if (g_data_057ad7e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e9 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041ea467;
    __this_01 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = MethodInfo_String_ConvertTo_String;
    pSVar7 = (System_Object_array *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this_01,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pSVar10 != (System_Object_array *)0x0) {
      ppSVar12 = (System_Object_array **)&stack0xffffffffffffffe8;
      unaff_RBX = pSStack_28;
      item = pSVar7;
      pSVar9 = pSStack_20;
CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice:
      *(CustomLogic_CustomLogicDropdownBuiltin_o **)((long)ppSVar12 + -8) = unaff_R15;
      *(System_Object_array **)((long)ppSVar12 + -0x10) = pSVar9;
      *(System_Object_array **)((long)ppSVar12 + -0x18) = unaff_R12;
      *(System_Object_array **)((long)ppSVar12 + -0x20) = unaff_RBX;
      *(System_Object_array **)((long)ppSVar12 + -0x28) = pSVar7;
      if (g_data_057ad7d0 == '\0') {
        *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e88e3;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e88ef;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e88fb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d0 = '\x01';
      }
      pIVar11 = pSVar10->m_Items[8];
      pSVar9 = (System_Object_array *)0x0;
      if (pIVar11 != (Il2CppObject *)0x0) {
        pMVar4 = pIVar11->klass->vtable[0x76].method;
        pIVar5 = pIVar11->klass->vtable[0x76].methodPtr;
        *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e891b;
        collection = (System_Collections_Generic_IEnumerable_T__o *)(*pIVar5)(pIVar11,pMVar4);
        *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e892d;
        unaff_RBX = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e8945;
        pSVar9 = unaff_RBX;
        System_Collections_Generic_List_object____ctor_362ba10
                  ((System_Collections_Generic_List_object__o *)unaff_RBX,collection,MethodInfo_List_1_System_String);
        if (unaff_RBX != (System_Object_array *)0x0) {
          *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e895f;
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)unaff_RBX,&item->obj,MethodInfo_Boolean_Remove);
          pIVar11 = pSVar10->m_Items[8];
          pSVar9 = (System_Object_array *)0x0;
          if (pIVar11 != (Il2CppObject *)0x0) {
            pMVar4 = pIVar11->klass->vtable[0x77].method;
            pIVar5 = pIVar11->klass->vtable[0x77].methodPtr;
            *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e897b;
            (*pIVar5)(pIVar11,unaff_RBX,pMVar4);
            return &pSVar10->obj;
          }
        }
      }
      *(undefined8 *)((long)ppSVar12 + -0x30) = 0x41e898f;
      il2cpp_runtime_helper_022b2c90();
      *(System_Object_array **)((long)ppSVar12 + -0x30) = pSVar10;
      *(System_Object_array **)((long)ppSVar12 + -0x38) = item;
      *(System_Object_array **)((long)ppSVar12 + -0x40) = unaff_RBX;
      if (g_data_057ad7d1 == '\0') {
        *(undefined8 *)((long)ppSVar12 + -0x48) = 0x41e89ad;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        *(undefined8 *)((long)ppSVar12 + -0x48) = 0x41e89b9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d1 = '\x01';
      }
      pIVar11 = pSVar9->m_Items[8];
      *(undefined8 *)((long)ppSVar12 + -0x48) = 0x41e89d3;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      *(undefined8 *)((long)ppSVar12 + -0x48) = 0x41e89e8;
      System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
      if (pIVar11 != (Il2CppObject *)0x0) {
        pMVar4 = pIVar11->klass->vtable[0x77].method;
        pIVar5 = pIVar11->klass->vtable[0x77].methodPtr;
        *(undefined8 *)((long)ppSVar12 + -0x48) = 0x41e8a03;
        (*pIVar5)(pIVar11,__this_00,pMVar4);
        return &pSVar9->obj;
      }
      *(undefined8 *)((long)ppSVar12 + -0x48) = 0x41e8a11;
      uVar8 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)ppSVar12 + -0x48) = uVar8;
      if (g_data_057ad7d2 == '\0') {
        *(undefined8 *)((long)ppSVar12 + -0x50) = 0x41e8a36;
        il2cpp_runtime_helper_023445d0(&"Dropdown");
        g_data_057ad7d2 = '\x01';
      }
      return "Dropdown";
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ea467:
  il2cpp_runtime_helper_022b2ca0();
  visualElement = (UnityEngine_UIElements_VisualElement_o *)0x0;
  if (pSVar9 != (System_Object_array *)0x0) {
    if (g_data_057ad7d1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7d1 = '\x01';
    }
    pIVar11 = pSVar9->m_Items[8];
    pSVar10 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    visualElement = MethodInfo_List_1_System_String;
    __this_01 = (long *)pSVar10;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar10,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (pIVar11 != (Il2CppObject *)0x0) {
      (*pIVar11->klass->vtable[0x77].methodPtr)(pIVar11,pSVar10,pIVar11->klass->vtable[0x77].method);
      return &pSVar9->obj;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_01,visualElement,(MethodInfo *)0x0);
  ((System_Object_array *)__this_01)->m_Items[8] = (Il2CppObject *)visualElement;
  il2cpp_runtime_helper_022b4080(((System_Object_array *)__this_01)->m_Items + 8,visualElement);
  ((System_Object_array *)__this_01)->m_Items[9] = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(((System_Object_array *)__this_01)->m_Items + 9);
  return pIVar11;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveChoice>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__RemoveChoice_b__10_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41ea3e0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__RemoveChoice_b__10_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Object_array *pSVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *pSVar4;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar6;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  System_Collections_Generic_List_object__o *pSVar7;
  long *plVar8;
  
  pCVar6 = __c;
  if (g_data_057ad7e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar8 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7e9 = '\x01';
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)plVar8;
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041ea467;
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar6 = MethodInfo_String_ConvertTo_String;
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      if (g_data_057ad7d0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d0 = '\x01';
      }
      pUVar1 = (__c->fields)._dropdown;
      pSVar7 = (System_Collections_Generic_List_object__o *)0x0;
      if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        collection = (System_Collections_Generic_IEnumerable_T__o *)
                     (*(pUVar1->klass->vtable)._118_get_choices.methodPtr)
                               (pUVar1,(pUVar1->klass->vtable)._118_get_choices.method);
        pSVar4 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        pSVar7 = pSVar4;
        System_Collections_Generic_List_object____ctor_362ba10(pSVar4,collection,MethodInfo_List_1_System_String);
        if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___Remove(pSVar4,pIVar5,MethodInfo_Boolean_Remove);
          pUVar1 = (__c->fields)._dropdown;
          pSVar7 = (System_Collections_Generic_List_object__o *)0x0;
          if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
            (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
                      (pUVar1,pSVar4,(pUVar1->klass->vtable)._119_set_choices.method);
            return (Il2CppObject *)__c;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7d1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057ad7d1 = '\x01';
      }
      pSVar2 = pSVar7[2].fields._items;
      pSVar4 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(pSVar4,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
      if (pSVar2 != (System_Object_array *)0x0) {
        pIVar3 = (pSVar2->obj).klass;
        (*pIVar3->vtable[0x77].methodPtr)(pSVar2,pSVar4,pIVar3->vtable[0x77].method);
        return (Il2CppObject *)pSVar7;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7d2 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Dropdown");
        g_data_057ad7d2 = '\x01';
      }
      return "Dropdown";
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ea467:
  il2cpp_runtime_helper_022b2ca0();
  visualElement = (UnityEngine_UIElements_VisualElement_o *)0x0;
  if (pCVar6 != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (g_data_057ad7d1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7d1 = '\x01';
    }
    pUVar1 = (pCVar6->fields)._dropdown;
    __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    visualElement = MethodInfo_List_1_System_String;
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)__this_00;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
                (pUVar1,__this_00,(pUVar1->klass->vtable)._119_set_choices.method);
      return (Il2CppObject *)pCVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),visualElement);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->monitor =
       (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pIVar5 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080(&((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->
                               monitor);
  return pIVar5;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearChoices>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__ClearChoices_b__11_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41ea470

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__ClearChoices_b__11_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  
  visualElement = (UnityEngine_UIElements_VisualElement_o *)0x0;
  if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (g_data_057ad7d1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7d1 = '\x01';
    }
    pUVar1 = (__c->fields)._dropdown;
    __this_00 = (CustomLogic_CustomLogicVisualElementBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    visualElement = MethodInfo_List_1_System_String;
    __this = (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)__this_00;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
                (pUVar1,__this_00,(pUVar1->klass->vtable)._119_set_choices.method);
      return (Il2CppObject *)__c;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),visualElement);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->monitor =
       (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pIVar2 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080(&((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->
                               monitor);
  return pIVar2;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDropdownBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41e8b60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_Func_T__object__o *pSVar6;
  System_Action_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad7d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"RemoveChoice");
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"AddChoice");
    il2cpp_runtime_helper_023445d0(&"Index");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Choices");
    il2cpp_runtime_helper_023445d0(&"ClearChoices");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"SetIndexWithoutNotify");
    g_data_057ad7d4 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7ed1d727) {
    if (uVar3 < 0x19e378c0) {
      if (uVar3 == 0x337847e) {
        bVar4 = System_String__op_Equality(name,"RemoveChoice",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad7dd == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveChoice_b__10_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad7dd = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x19e378bf) &&
              (bVar4 = System_String__op_Equality(name,"AddChoice",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad7dc == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AddChoice_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad7dc = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x31359a62) {
      bVar4 = System_String__op_Equality(name,"SetIndexWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad7db == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetIndexWithoutNotify_b__8);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad7db = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x3dac88df) {
      bVar4 = System_String__op_Equality(name,"Choices",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad7d8 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Choices_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Choices_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
          g_data_057ad7d8 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x7ed1d726) &&
            (bVar4 = System_String__op_Equality(name,"ClearChoices",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7de == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearChoices_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7de = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xaec7ae4c) {
    if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label;
      }
    }
    else if ((uVar3 == 0xaec7ae4b) &&
            (bVar4 = System_String__op_Equality(name,"Index",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7d7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Index_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Index_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        g_data_057ad7d7 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xd147f96a) {
    bVar4 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7d6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        g_data_057ad7d6 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xd1dd43b5) {
    bVar4 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7da == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__7);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7da = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad7d9 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__6_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad7d9 = '\x01';
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicDropdownBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad7d5 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e903a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e9046;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e9052;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e905e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e906a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e9076;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
    g_data_057ad7d5 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e908c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e90a5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e90b4;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e90cd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e90dc;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e90f7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x41e9020

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
    g_data_057ad7d5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x41e9100

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
    g_data_057ad7d6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Index
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index (const MethodInfo* method);
// 0x41e91e0

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Index_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Index_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
    g_data_057ad7d7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Choices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices (const MethodInfo* method);
// 0x41e92c0

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Choices_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Choices_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
    g_data_057ad7d8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x41e93a0

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7d9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x41e94f0

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7da == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7da = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetIndexWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify (const MethodInfo* method);
// 0x41e9640

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7db == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetIndexWithoutNotify_b__8);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7db = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__AddChoice
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice (const MethodInfo* method);
// 0x41e9790

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AddChoice_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7dc = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__RemoveChoice
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice (const MethodInfo* method);
// 0x41e98e0

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7dd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveChoice_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7dd = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__ClearChoices
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices (const MethodInfo* method);
// 0x41e9a30

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (g_data_057ad7de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearChoices_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7de = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41e9b80

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_HashSet_Slot_T__array *__this;
  Il2CppMethodPointer pIVar4;
  code *vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar5;
  int32_t value;
  CustomLogic_CustomLogicListBuiltin_o *__this_10;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  System_Collections_Generic_HashSet_object__o *__this_11;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  Il2CppObject *pIVar9;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EEB40 *obj_00;
  MethodInfo_24EEB40 *obj_01;
  MethodInfo_24EE950 *obj_02;
  long lVar10;
  MethodInfo_33E0570 *pMVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  System_Collections_Generic_List_T__o *pSVar15;
  System_Collections_Generic_List_T__o *pSStack_d0;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_c8;
  System_Collections_Generic_List_T__o *pSVar16;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff40;
  Il2CppType **ppIVar17;
  Il2CppRGCTXData *item;
  int32_t iStack_64;
  long lStack_60;
  undefined8 uStack_58;
  System_Collections_Generic_HashSet_object__o *pSStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  System_Collections_Generic_HashSet_object__o *pSStack_38;
  
  if (g_data_057ad7df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"RemoveChoice");
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"AddChoice");
    il2cpp_runtime_helper_023445d0(&"Index");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Choices");
    il2cpp_runtime_helper_023445d0(&"ClearChoices");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"SetIndexWithoutNotify");
    g_data_057ad7df = '\x01';
  }
  __this_11 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  pSVar8 = __this_11;
  System_Collections_Generic_HashSet_object____ctor(__this_11,MethodInfo_HashSet_1_System_String);
  if (__this_11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_11,"Label",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"Index",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"Choices",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"OnValueChanged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"SetIndexWithoutNotify",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"AddChoice",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"RemoveChoice",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_11,"ClearChoices",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_11;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_11);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057ad7c8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad7c8 = '\x01';
    }
    __this = pSVar8[1].fields._slots;
    __this_11 = pSVar8;
    if (__this != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
      UnityEngine_UIElements_BaseField_object___get_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,MethodInfo_String_get_label);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSStack_38 = __this_11;
  if (g_data_057ad7e0 == '\0') {
    uStack_40 = 0x41e9df0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x41e9dfc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41e9e1b;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41e9e2d;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pMVar11 = obj;
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if (lVar10 != 0) {
    if (g_data_057ad7c9 == '\0') {
      uStack_40 = 0x41e9e4a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad7c9 = '\x01';
    }
    pMVar11 = (MethodInfo_33E0570 *)0x0;
    __this_11 = pSVar8;
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar10 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar10 + 0x60),(System_String_o *)pSVar8
                 ,MethodInfo_Void_set_label);
      return;
    }
  }
  uStack_40 = 0x41e9e76;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  uStack_40 = auVar13._0_8_;
  if ((pMVar11 != (MethodInfo_33E0570 *)0x0) &&
     (pIVar4 = pMVar11[1].virtualMethodPointer, pIVar4 != (Il2CppMethodPointer)0x0)) {
    vtableDispatch = *(code **)(*(long *)pIVar4 + 0x7c8);
    (*vtableDispatch)
              (pIVar4,*(undefined8 *)(*(long *)pIVar4 + 2000),auVar13._8_8_,vtableDispatch);
    return;
  }
  lVar10 = 0;
  pMStack_48 = (MethodInfo_33E0570 *)0x41e9ea8;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pSStack_50 = __this_11;
  pMStack_48 = obj;
  if (g_data_057ad7e1 == '\0') {
    lStack_60 = 0x41e9ecf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_60 = 0x41e9edb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    lStack_60 = 0x41e9efa;
    il2cpp_runtime_helper_02337ed0();
  }
  lStack_60 = 0x41e9f0c;
  obj_01 = MethodInfo_String_ConvertTo_String;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
  if (lVar10 != 0) {
    plVar7 = *(long **)(lVar10 + 0x60);
    obj_00 = (MethodInfo_24EEB40 *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      (**(code **)(lVar10 + 0x7d8))
                (plVar7,pIVar9,*(undefined8 *)(lVar10 + 0x7e0),lVar10,*(code **)(lVar10 + 0x7d8));
      return;
    }
  }
  lStack_60 = 0x41e9f3d;
  il2cpp_runtime_helper_022b2c90();
  lStack_60 = lVar10;
  if (obj_00 != (MethodInfo_24EEB40 *)0x0) {
    if (g_data_057ad7ca == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
      g_data_057ad7ca = '\x01';
    }
    if ((UnityEngine_UIElements_PopupField_T__o *)obj_00[1].virtualMethodPointer !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      iStack_64 = UnityEngine_UIElements_PopupField_object___get_index
                            ((UnityEngine_UIElements_PopupField_T__o *)obj_00[1].virtualMethodPointer,
                             MethodInfo_Int32_get_index);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_64);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_02 = MethodInfo_Int32_ConvertTo_Int32;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_01,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar10 != 0) {
    if (g_data_057ad7cb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
      g_data_057ad7cb = '\x01';
    }
    obj_01 = (MethodInfo_24EEB40 *)0x0;
    if (*(UnityEngine_UIElements_PopupField_T__o **)(lVar10 + 0x60) !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index
                (*(UnityEngine_UIElements_PopupField_T__o **)(lVar10 + 0x60),value,MethodInfo_Void_set_index);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj_01 == (MethodInfo_24EEB40 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad7e3 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_02,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    if (obj_01 == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7e4 == '\0') {
        pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7e4 = '\x01';
      }
      pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
      return;
    }
    if (g_data_057ad7cd == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7cd = '\x01';
    }
    pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pSVar15 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_System_String);
    if ((pIVar9 != (Il2CppObject *)0x0) && (pIVar9[3].klass != (Il2CppClass *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_d0,
                 (System_Collections_Generic_List_object__o *)pIVar9[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      pSVar16 = pSStack_d0;
      pSVar14 = pSStack_c8;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_06.fields._8_8_ = pSVar14, __this_06.fields._list = pSVar16,
              __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff40,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18),
              (char)bVar5 != '\0') {
          if (in_stack_ffffffffffffff40 != (System_Collections_Generic_List_T__o *)0x0) {
            pIVar9 = (Il2CppObject *)
                     (*((Il2CppClass *)in_stack_ffffffffffffff40->klass)->vtable[3].methodPtr)
                               (in_stack_ffffffffffffff40,
                                ((Il2CppClass *)in_stack_ffffffffffffff40->klass)->vtable[3].method);
            lVar10 = MethodInfo_Void_Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar6->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_041e85dc;
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar6->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar9;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar9);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar6,pIVar9,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
label_041e858b:
        __this_07.fields._8_8_ = pSVar14;
        __this_07.fields._list = pSVar16;
        __this_07.fields._current = (Il2CppObject *)in_stack_ffffffffffffff40;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
        pSVar15 = in_stack_ffffffffffffff40;
        goto label_041e859d;
      }
      do {
        __this_05.fields._8_8_ = pSVar14;
        __this_05.fields._list = pSVar16;
        __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff40;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
        if ((char)bVar5 == '\0') goto label_041e858b;
      } while (in_stack_ffffffffffffff40 == (System_Collections_Generic_List_T__o *)0x0);
      (*((Il2CppClass *)in_stack_ffffffffffffff40->klass)->vtable[3].methodPtr)
                (in_stack_ffffffffffffff40,((Il2CppClass *)in_stack_ffffffffffffff40->klass)->vtable[3].method
                );
      il2cpp_runtime_helper_022b2c90();
label_041e85dc:
      il2cpp_runtime_helper_022b2c90();
      pSVar15 = in_stack_ffffffffffffff40;
    }
    do {
      auVar12 = il2cpp_runtime_helper_022b2c90();
      if (auVar12._8_4_ != 1) {
label_041e8649:
        __this_09.fields._8_8_ = pSVar14;
        __this_09.fields._list = pSVar16;
        __this_09.fields._current = (Il2CppObject *)pSVar15;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
        _Unwind_Resume(auVar12._0_8_);
      }
      plVar7 = (long *)__cxa_begin_catch(auVar12._0_8_);
      lVar10 = *plVar7;
      __cxa_end_catch();
      __this_08.fields._8_8_ = pSVar14;
      __this_08.fields._list = pSVar16;
      __this_08.fields._current = (Il2CppObject *)pSVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
      if (lVar10 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar10);
        goto label_041e8649;
      }
label_041e859d:
      pIVar4 = obj_01[1].virtualMethodPointer;
      if (pIVar4 != (Il2CppMethodPointer)0x0) {
        (**(code **)(*(long *)pIVar4 + 0x8a8))(pIVar4,pSVar6,*(undefined8 *)(*(long *)pIVar4 + 0x8b0));
        return;
      }
    } while( true );
  }
  if (g_data_057ad7cc == '\0') {
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8203;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e820f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
  ppIVar17 = (Il2CppType **)0x0;
  item = (Il2CppRGCTXData *)0x0;
  pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8235;
  __this_10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8242;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_10,(MethodInfo *)0x0);
  pIVar4 = obj_01[1].virtualMethodPointer;
  if (pIVar4 != (Il2CppMethodPointer)0x0) {
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e825f;
    pSVar6 = (System_Collections_Generic_List_object__o *)
             (**(code **)(*(long *)pIVar4 + 0x898))(pIVar4,*(undefined8 *)(*(long *)pIVar4 + 0x8a0));
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e827d;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff40,pSVar6,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      if (__this_10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82bf;
          __this_00.fields._8_8_ = ppIVar17;
          __this_00.fields._list = pSVar16;
          __this_00.fields._current = (Il2CppObject *)item;
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40);
          lVar10 = MethodInfo_Void_Add;
          if ((char)bVar5 == '\0') break;
          pSVar6 = (__this_10->fields).List;
          if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
            pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8346;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8346;
          }
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar6->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
            pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8341;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8341;
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8303;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82b4;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar6,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
label_041e831b:
        pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e832d;
        __this_02.fields._8_8_ = ppIVar17;
        __this_02.fields._list = pSVar16;
        __this_02.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
        return;
      }
      pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8317;
      __this_01.fields._8_8_ = ppIVar17;
      __this_01.fields._list = pSVar16;
      __this_01.fields._current = (Il2CppObject *)item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40);
      if ((char)bVar5 == '\0') goto label_041e831b;
      goto label_041e834b;
    }
  }
label_041e8346:
  pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e834b;
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8350;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8388;
    plVar7 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar10 = *plVar7;
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8390;
    __cxa_end_catch();
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83a2;
    __this_03.fields._8_8_ = ppIVar17;
    __this_03.fields._list = pSVar16;
    __this_03.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
    if (lVar10 == 0) {
      return;
    }
    pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83af;
    il2cpp_runtime_helper_022fefe0(lVar10);
  }
  pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83c8;
  __this_04.fields._8_8_ = ppIVar17;
  __this_04.fields._list = pSVar16;
  __this_04.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
  pSStack_c8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83d5;
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x41e9d80

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_UIElements_DropdownField_o *__this;
  Il2CppMethodPointer pIVar4;
  code *vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar5;
  int32_t value;
  CustomLogic_CustomLogicListBuiltin_o *__this_10;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  System_String_o *pSVar8;
  CustomLogic_CustomLogicDropdownBuiltin_o *value_00;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar9;
  Il2CppObject *extraout_RAX_00;
  CustomLogic_CustomLogicDropdownBuiltin_o *unaff_RBX;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEB40 *obj_00;
  MethodInfo_24EE950 *obj_01;
  long lVar10;
  MethodInfo *pMVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  System_Collections_Generic_List_T__o *pSVar15;
  System_Collections_Generic_List_T__o *pSStack_b8;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_b0;
  System_Collections_Generic_List_T__o *pSVar16;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff58;
  Il2CppType **ppIVar17;
  Il2CppRGCTXData *item;
  int32_t iStack_4c;
  long lStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCStack_20;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (g_data_057ad7c8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad7c8 = '\x01';
    }
    __this = (__i->fields)._dropdown;
    unaff_RBX = __i;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      pSVar8 = UnityEngine_UIElements_BaseField_object___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,MethodInfo_String_get_label);
      return (Il2CppObject *)pSVar8;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCStack_20 = unaff_RBX;
  if (g_data_057ad7e0 == '\0') {
    uStack_28 = 0x41e9df0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x41e9dfc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41e9e1b;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41e9e2d;
  obj = MethodInfo_String_ConvertTo_String;
  pMVar11 = method;
  value_00 = (CustomLogic_CustomLogicDropdownBuiltin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if (lVar10 != 0) {
    if (g_data_057ad7c9 == '\0') {
      uStack_28 = 0x41e9e4a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad7c9 = '\x01';
    }
    pMVar11 = (MethodInfo *)0x0;
    unaff_RBX = value_00;
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar10 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar10 + 0x60),
                 (System_String_o *)value_00,MethodInfo_Void_set_label);
      return extraout_RAX;
    }
  }
  uStack_28 = 0x41e9e76;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  uStack_28 = auVar13._0_8_;
  if ((pMVar11 != (MethodInfo *)0x0) &&
     (pIVar4 = pMVar11[1].virtualMethodPointer, pIVar4 != (Il2CppMethodPointer)0x0)) {
    vtableDispatch = *(code **)(*(long *)pIVar4 + 0x7c8);
    pIVar9 = (Il2CppObject *)
             (*vtableDispatch)
                       (pIVar4,*(undefined8 *)(*(long *)pIVar4 + 2000),auVar13._8_8_,vtableDispatch);
    return pIVar9;
  }
  lVar10 = 0;
  pMStack_30 = (MethodInfo *)0x41e9ea8;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = unaff_RBX;
  pMStack_30 = method;
  if (g_data_057ad7e1 == '\0') {
    lStack_48 = 0x41e9ecf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_48 = 0x41e9edb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    lStack_48 = 0x41e9efa;
    il2cpp_runtime_helper_02337ed0();
  }
  lStack_48 = 0x41e9f0c;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if (lVar10 != 0) {
    plVar7 = *(long **)(lVar10 + 0x60);
    obj = (MethodInfo_24EEB40 *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      pIVar9 = (Il2CppObject *)
               (**(code **)(lVar10 + 0x7d8))
                         (plVar7,pIVar9,*(undefined8 *)(lVar10 + 0x7e0),lVar10,*(code **)(lVar10 + 0x7d8));
      return pIVar9;
    }
  }
  lStack_48 = 0x41e9f3d;
  il2cpp_runtime_helper_022b2c90();
  lStack_48 = lVar10;
  if (obj != (MethodInfo_24EEB40 *)0x0) {
    if (g_data_057ad7ca == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
      g_data_057ad7ca = '\x01';
    }
    if ((UnityEngine_UIElements_PopupField_T__o *)obj[1].virtualMethodPointer !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      iStack_4c = UnityEngine_UIElements_PopupField_object___get_index
                            ((UnityEngine_UIElements_PopupField_T__o *)obj[1].virtualMethodPointer,
                             MethodInfo_Int32_get_index);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_4c);
      return pIVar9;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_01 = MethodInfo_Int32_ConvertTo_Int32;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar10 != 0) {
    if (g_data_057ad7cb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
      g_data_057ad7cb = '\x01';
    }
    obj_00 = (MethodInfo_24EEB40 *)0x0;
    if (*(UnityEngine_UIElements_PopupField_T__o **)(lVar10 + 0x60) !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index
                (*(UnityEngine_UIElements_PopupField_T__o **)(lVar10 + 0x60),value,MethodInfo_Void_set_index);
      return extraout_RAX_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj_00 == (MethodInfo_24EEB40 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad7e3 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_01,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    if (obj_00 == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7e4 == '\0') {
        pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7e4 = '\x01';
      }
      pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
      return pIVar9;
    }
    if (g_data_057ad7cd == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7cd = '\x01';
    }
    pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pSVar15 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_System_String);
    if ((pIVar9 != (Il2CppObject *)0x0) && (pIVar9[3].klass != (Il2CppClass *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_b8,
                 (System_Collections_Generic_List_object__o *)pIVar9[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      pSVar16 = pSStack_b8;
      pSVar14 = pSStack_b0;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_06.fields._8_8_ = pSVar14, __this_06.fields._list = pSVar16,
              __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff58,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30),
              (char)bVar5 != '\0') {
          if (in_stack_ffffffffffffff58 != (System_Collections_Generic_List_T__o *)0x0) {
            pIVar9 = (Il2CppObject *)
                     (*((Il2CppClass *)in_stack_ffffffffffffff58->klass)->vtable[3].methodPtr)
                               (in_stack_ffffffffffffff58,
                                ((Il2CppClass *)in_stack_ffffffffffffff58->klass)->vtable[3].method);
            lVar10 = MethodInfo_Void_Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar6->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_041e85dc;
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar6->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar9;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar9);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar6,pIVar9,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
label_041e858b:
        __this_07.fields._8_8_ = pSVar14;
        __this_07.fields._list = pSVar16;
        __this_07.fields._current = (Il2CppObject *)in_stack_ffffffffffffff58;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
        pSVar15 = in_stack_ffffffffffffff58;
        goto label_041e859d;
      }
      do {
        __this_05.fields._8_8_ = pSVar14;
        __this_05.fields._list = pSVar16;
        __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff58;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30);
        if ((char)bVar5 == '\0') goto label_041e858b;
      } while (in_stack_ffffffffffffff58 == (System_Collections_Generic_List_T__o *)0x0);
      (*((Il2CppClass *)in_stack_ffffffffffffff58->klass)->vtable[3].methodPtr)
                (in_stack_ffffffffffffff58,((Il2CppClass *)in_stack_ffffffffffffff58->klass)->vtable[3].method
                );
      il2cpp_runtime_helper_022b2c90();
label_041e85dc:
      il2cpp_runtime_helper_022b2c90();
      pSVar15 = in_stack_ffffffffffffff58;
    }
    do {
      auVar12 = il2cpp_runtime_helper_022b2c90();
      if (auVar12._8_4_ != 1) {
label_041e8649:
        __this_09.fields._8_8_ = pSVar14;
        __this_09.fields._list = pSVar16;
        __this_09.fields._current = (Il2CppObject *)pSVar15;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
        _Unwind_Resume(auVar12._0_8_);
      }
      plVar7 = (long *)__cxa_begin_catch(auVar12._0_8_);
      lVar10 = *plVar7;
      __cxa_end_catch();
      __this_08.fields._8_8_ = pSVar14;
      __this_08.fields._list = pSVar16;
      __this_08.fields._current = (Il2CppObject *)pSVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
      if (lVar10 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar10);
        goto label_041e8649;
      }
label_041e859d:
      pIVar4 = obj_00[1].virtualMethodPointer;
      if (pIVar4 != (Il2CppMethodPointer)0x0) {
        pIVar9 = (Il2CppObject *)
                 (**(code **)(*(long *)pIVar4 + 0x8a8))
                           (pIVar4,pSVar6,*(undefined8 *)(*(long *)pIVar4 + 0x8b0));
        return pIVar9;
      }
    } while( true );
  }
  if (g_data_057ad7cc == '\0') {
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8203;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e820f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
  ppIVar17 = (Il2CppType **)0x0;
  item = (Il2CppRGCTXData *)0x0;
  pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8235;
  __this_10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8242;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_10,(MethodInfo *)0x0);
  pIVar4 = obj_00[1].virtualMethodPointer;
  if (pIVar4 != (Il2CppMethodPointer)0x0) {
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e825f;
    pSVar6 = (System_Collections_Generic_List_object__o *)
             (**(code **)(*(long *)pIVar4 + 0x898))(pIVar4,*(undefined8 *)(*(long *)pIVar4 + 0x8a0));
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e827d;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff58,pSVar6,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      if (__this_10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82bf;
          __this_00.fields._8_8_ = ppIVar17;
          __this_00.fields._list = pSVar16;
          __this_00.fields._current = (Il2CppObject *)item;
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
          lVar10 = MethodInfo_Void_Add;
          if ((char)bVar5 == '\0') break;
          pSVar6 = (__this_10->fields).List;
          if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
            pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8346;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8346;
          }
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar6->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
            pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8341;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8341;
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8303;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82b4;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar6,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
label_041e831b:
        pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e832d;
        __this_02.fields._8_8_ = ppIVar17;
        __this_02.fields._list = pSVar16;
        __this_02.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
        return (Il2CppObject *)__this_10;
      }
      pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8317;
      __this_01.fields._8_8_ = ppIVar17;
      __this_01.fields._list = pSVar16;
      __this_01.fields._current = (Il2CppObject *)item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
      if ((char)bVar5 == '\0') goto label_041e831b;
      goto label_041e834b;
    }
  }
label_041e8346:
  pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e834b;
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8350;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8388;
    plVar7 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar10 = *plVar7;
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8390;
    __cxa_end_catch();
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83a2;
    __this_03.fields._8_8_ = ppIVar17;
    __this_03.fields._list = pSVar16;
    __this_03.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
    if (lVar10 == 0) {
      return (Il2CppObject *)__this_10;
    }
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83af;
    il2cpp_runtime_helper_022fefe0(lVar10);
  }
  pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83c8;
  __this_04.fields._8_8_ = ppIVar17;
  __this_04.fields._list = pSVar16;
  __this_04.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
  pSStack_b0 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83d5;
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41e9dd0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppMethodPointer pIVar3;
  System_Object_array *pSVar4;
  UnityEngine_UIElements_DropdownField_o *__this;
  Il2CppClass *pIVar5;
  void *pvVar6;
  code *vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar7;
  int32_t value;
  CustomLogic_CustomLogicListBuiltin_o *__this_10;
  System_Collections_Generic_List_object__o *pSVar8;
  long *plVar9;
  System_String_o *value_00;
  Il2CppObject *pIVar10;
  System_String_o *unaff_RBX;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEB40 *obj_00;
  MethodInfo_24EE950 *obj_01;
  long lVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  System_Collections_Generic_List_T__o *pSVar15;
  System_Collections_Generic_List_T__o *pSStack_b0;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_a8;
  System_Collections_Generic_List_T__o *pSVar16;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff60;
  Il2CppType **ppIVar17;
  Il2CppRGCTXData *item;
  int32_t iStack_44;
  long lStack_40;
  undefined8 uStack_38;
  System_String_o *pSStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ad7e0 == '\0') {
    uStack_20 = 0x41e9df0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x41e9dfc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41e9e1b;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41e9e2d;
  obj = MethodInfo_String_ConvertTo_String;
  pIVar10 = __v;
  value_00 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (g_data_057ad7c9 == '\0') {
      uStack_20 = 0x41e9e4a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad7c9 = '\x01';
    }
    __this = (__i->fields)._dropdown;
    pIVar10 = (Il2CppObject *)0x0;
    unaff_RBX = value_00;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value_00,MethodInfo_Void_set_label);
      return;
    }
  }
  uStack_20 = 0x41e9e76;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = auVar13._0_8_;
  if ((pIVar10 != (Il2CppObject *)0x0) && (pIVar5 = pIVar10[6].klass, pIVar5 != (Il2CppClass *)0x0)) {
    pvVar6 = (pIVar5->_1).image;
    vtableDispatch = *(code **)((long)pvVar6 + 0x7c8);
    (*vtableDispatch)(pIVar5,*(undefined8 *)((long)pvVar6 + 2000),auVar13._8_8_,vtableDispatch);
    return;
  }
  lVar11 = 0;
  pIStack_28 = (Il2CppObject *)0x41e9ea8;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = unaff_RBX;
  pIStack_28 = __v;
  if (g_data_057ad7e1 == '\0') {
    lStack_40 = 0x41e9ecf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_40 = 0x41e9edb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    lStack_40 = 0x41e9efa;
    il2cpp_runtime_helper_02337ed0();
  }
  lStack_40 = 0x41e9f0c;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if (lVar11 != 0) {
    plVar9 = *(long **)(lVar11 + 0x60);
    obj = (MethodInfo_24EEB40 *)0x0;
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      (**(code **)(lVar11 + 0x7d8))
                (plVar9,pIVar10,*(undefined8 *)(lVar11 + 0x7e0),lVar11,*(code **)(lVar11 + 0x7d8));
      return;
    }
  }
  lStack_40 = 0x41e9f3d;
  il2cpp_runtime_helper_022b2c90();
  lStack_40 = lVar11;
  if (obj != (MethodInfo_24EEB40 *)0x0) {
    if (g_data_057ad7ca == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
      g_data_057ad7ca = '\x01';
    }
    if ((UnityEngine_UIElements_PopupField_T__o *)obj[1].virtualMethodPointer !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      iStack_44 = UnityEngine_UIElements_PopupField_object___get_index
                            ((UnityEngine_UIElements_PopupField_T__o *)obj[1].virtualMethodPointer,
                             MethodInfo_Int32_get_index);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_44);
      return;
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_01 = MethodInfo_Int32_ConvertTo_Int32;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar11 != 0) {
    if (g_data_057ad7cb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
      g_data_057ad7cb = '\x01';
    }
    obj_00 = (MethodInfo_24EEB40 *)0x0;
    if (*(UnityEngine_UIElements_PopupField_T__o **)(lVar11 + 0x60) !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index
                (*(UnityEngine_UIElements_PopupField_T__o **)(lVar11 + 0x60),value,MethodInfo_Void_set_index);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj_00 == (MethodInfo_24EEB40 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad7e3 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_01,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    if (obj_00 == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7e4 == '\0') {
        pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7e4 = '\x01';
      }
      pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
      System_Object___ctor(pIVar10,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar10;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar10);
      return;
    }
    if (g_data_057ad7cd == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7cd = '\x01';
    }
    pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pSVar15 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
    if ((pIVar10 != (Il2CppObject *)0x0) && (pIVar10[3].klass != (Il2CppClass *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_b0,
                 (System_Collections_Generic_List_object__o *)pIVar10[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      pSVar16 = pSStack_b0;
      pSVar14 = pSStack_a8;
      if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_06.fields._8_8_ = pSVar14, __this_06.fields._list = pSVar16,
              __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff60,
              bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38),
              (char)bVar7 != '\0') {
          if (in_stack_ffffffffffffff60 != (System_Collections_Generic_List_T__o *)0x0) {
            pIVar10 = (Il2CppObject *)
                      (*((Il2CppClass *)in_stack_ffffffffffffff60->klass)->vtable[3].methodPtr)
                                (in_stack_ffffffffffffff60,
                                 ((Il2CppClass *)in_stack_ffffffffffffff60->klass)->vtable[3].method);
            lVar11 = MethodInfo_Void_Add;
            piVar1 = &(pSVar8->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar8->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_041e85dc;
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = pIVar10;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pIVar10);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar8,pIVar10,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
label_041e858b:
        __this_07.fields._8_8_ = pSVar14;
        __this_07.fields._list = pSVar16;
        __this_07.fields._current = (Il2CppObject *)in_stack_ffffffffffffff60;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
        pSVar15 = in_stack_ffffffffffffff60;
        goto label_041e859d;
      }
      do {
        __this_05.fields._8_8_ = pSVar14;
        __this_05.fields._list = pSVar16;
        __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff60;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38);
        if ((char)bVar7 == '\0') goto label_041e858b;
      } while (in_stack_ffffffffffffff60 == (System_Collections_Generic_List_T__o *)0x0);
      (*((Il2CppClass *)in_stack_ffffffffffffff60->klass)->vtable[3].methodPtr)
                (in_stack_ffffffffffffff60,((Il2CppClass *)in_stack_ffffffffffffff60->klass)->vtable[3].method
                );
      il2cpp_runtime_helper_022b2c90();
label_041e85dc:
      il2cpp_runtime_helper_022b2c90();
      pSVar15 = in_stack_ffffffffffffff60;
    }
    do {
      auVar12 = il2cpp_runtime_helper_022b2c90();
      if (auVar12._8_4_ != 1) {
label_041e8649:
        __this_09.fields._8_8_ = pSVar14;
        __this_09.fields._list = pSVar16;
        __this_09.fields._current = (Il2CppObject *)pSVar15;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
        _Unwind_Resume(auVar12._0_8_);
      }
      plVar9 = (long *)__cxa_begin_catch(auVar12._0_8_);
      lVar11 = *plVar9;
      __cxa_end_catch();
      __this_08.fields._8_8_ = pSVar14;
      __this_08.fields._list = pSVar16;
      __this_08.fields._current = (Il2CppObject *)pSVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
      if (lVar11 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar11);
        goto label_041e8649;
      }
label_041e859d:
      pIVar3 = obj_00[1].virtualMethodPointer;
      if (pIVar3 != (Il2CppMethodPointer)0x0) {
        (**(code **)(*(long *)pIVar3 + 0x8a8))(pIVar3,pSVar8,*(undefined8 *)(*(long *)pIVar3 + 0x8b0));
        return;
      }
    } while( true );
  }
  if (g_data_057ad7cc == '\0') {
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8203;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e820f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
  ppIVar17 = (Il2CppType **)0x0;
  item = (Il2CppRGCTXData *)0x0;
  pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8235;
  __this_10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8242;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_10,(MethodInfo *)0x0);
  pIVar3 = obj_00[1].virtualMethodPointer;
  if (pIVar3 != (Il2CppMethodPointer)0x0) {
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e825f;
    pSVar8 = (System_Collections_Generic_List_object__o *)
             (**(code **)(*(long *)pIVar3 + 0x898))(pIVar3,*(undefined8 *)(*(long *)pIVar3 + 0x8a0));
    if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e827d;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff60,pSVar8,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      if (__this_10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82bf;
          __this_00.fields._8_8_ = ppIVar17;
          __this_00.fields._list = pSVar16;
          __this_00.fields._current = (Il2CppObject *)item;
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
          lVar11 = MethodInfo_Void_Add;
          if ((char)bVar7 == '\0') break;
          pSVar8 = (__this_10->fields).List;
          if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
            pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8346;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8346;
          }
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar8->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) {
            pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8341;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8341;
          }
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
            pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8303;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
          }
          else {
            pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82b4;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar8,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
label_041e831b:
        pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e832d;
        __this_02.fields._8_8_ = ppIVar17;
        __this_02.fields._list = pSVar16;
        __this_02.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
        return;
      }
      pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8317;
      __this_01.fields._8_8_ = ppIVar17;
      __this_01.fields._list = pSVar16;
      __this_01.fields._current = (Il2CppObject *)item;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
      if ((char)bVar7 == '\0') goto label_041e831b;
      goto label_041e834b;
    }
  }
label_041e8346:
  pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e834b;
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8350;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8388;
    plVar9 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar11 = *plVar9;
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8390;
    __cxa_end_catch();
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83a2;
    __this_03.fields._8_8_ = ppIVar17;
    __this_03.fields._list = pSVar16;
    __this_03.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    if (lVar11 == 0) {
      return;
    }
    pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83af;
    il2cpp_runtime_helper_022fefe0(lVar11);
  }
  pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83c8;
  __this_04.fields._8_8_ = ppIVar17;
  __this_04.fields._list = pSVar16;
  __this_04.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  pSStack_a8 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83d5;
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x41e9e80

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_UIElements_DropdownField_o *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  bool_conflict bVar5;
  int32_t value;
  CustomLogic_CustomLogicListBuiltin_o *__this_09;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *extraout_RAX;
  undefined8 in_RDX;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EE950 *obj_00;
  long lVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  System_Collections_Generic_List_T__o *pSVar12;
  System_Collections_Generic_List_T__o *pSStack_98;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_90;
  System_Collections_Generic_List_T__o *pSVar13;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff78;
  Il2CppType **ppIVar14;
  Il2CppRGCTXData *item;
  int32_t iStack_2c;
  long lStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) &&
     (pUVar4 = (__i->fields)._dropdown, pUVar4 != (UnityEngine_UIElements_DropdownField_o *)0x0)) {
    vtableDispatch = (pUVar4->klass->vtable)._105_get_value.methodPtr;
    pIVar8 = (Il2CppObject *)
             (*vtableDispatch)
                       (pUVar4,(pUVar4->klass->vtable)._105_get_value.method,in_RDX,vtableDispatch);
    return pIVar8;
  }
  lVar9 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7e1 == '\0') {
    lStack_28 = 0x41e9ecf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    lStack_28 = 0x41e9edb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    lStack_28 = 0x41e9efa;
    il2cpp_runtime_helper_02337ed0();
  }
  lStack_28 = 0x41e9f0c;
  obj = MethodInfo_String_ConvertTo_String;
  pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if (lVar9 != 0) {
    plVar7 = *(long **)(lVar9 + 0x60);
    method = (MethodInfo *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      pIVar8 = (Il2CppObject *)
               (**(code **)(lVar9 + 0x7d8))
                         (plVar7,pIVar8,*(undefined8 *)(lVar9 + 0x7e0),lVar9,*(code **)(lVar9 + 0x7d8));
      return pIVar8;
    }
  }
  lStack_28 = 0x41e9f3d;
  il2cpp_runtime_helper_022b2c90();
  lStack_28 = lVar9;
  if (method != (MethodInfo *)0x0) {
    if (g_data_057ad7ca == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
      g_data_057ad7ca = '\x01';
    }
    if ((UnityEngine_UIElements_PopupField_T__o *)method[1].virtualMethodPointer !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      iStack_2c = UnityEngine_UIElements_PopupField_object___get_index
                            ((UnityEngine_UIElements_PopupField_T__o *)method[1].virtualMethodPointer,
                             MethodInfo_Int32_get_index);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2c);
      return pIVar8;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar9 != 0) {
    if (g_data_057ad7cb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
      g_data_057ad7cb = '\x01';
    }
    obj = (MethodInfo_24EEB40 *)0x0;
    if (*(UnityEngine_UIElements_PopupField_T__o **)(lVar9 + 0x60) !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index
                (*(UnityEngine_UIElements_PopupField_T__o **)(lVar9 + 0x60),value,MethodInfo_Void_set_index);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj == (MethodInfo_24EEB40 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad7e3 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    if (obj == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7e4 == '\0') {
        pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7e4 = '\x01';
      }
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
      System_Object___ctor(pIVar8,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
      return pIVar8;
    }
    if (g_data_057ad7cd == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7cd = '\x01';
    }
    pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_System_String);
    if ((pIVar8 != (Il2CppObject *)0x0) && (pIVar8[3].klass != (Il2CppClass *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_98,
                 (System_Collections_Generic_List_object__o *)pIVar8[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      pSVar13 = pSStack_98;
      pSVar11 = pSStack_90;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_05.fields._8_8_ = pSVar11, __this_05.fields._list = pSVar13,
              __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff78,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50),
              (char)bVar5 != '\0') {
          if (in_stack_ffffffffffffff78 != (System_Collections_Generic_List_T__o *)0x0) {
            pIVar8 = (Il2CppObject *)
                     (*((Il2CppClass *)in_stack_ffffffffffffff78->klass)->vtable[3].methodPtr)
                               (in_stack_ffffffffffffff78,
                                ((Il2CppClass *)in_stack_ffffffffffffff78->klass)->vtable[3].method);
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar6->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_041e85dc;
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar6->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar8;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar8);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar6,pIVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
label_041e858b:
        __this_06.fields._8_8_ = pSVar11;
        __this_06.fields._list = pSVar13;
        __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff78;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
        pSVar12 = in_stack_ffffffffffffff78;
        goto label_041e859d;
      }
      do {
        __this_04.fields._8_8_ = pSVar11;
        __this_04.fields._list = pSVar13;
        __this_04.fields._current = (Il2CppObject *)in_stack_ffffffffffffff78;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
        if ((char)bVar5 == '\0') goto label_041e858b;
      } while (in_stack_ffffffffffffff78 == (System_Collections_Generic_List_T__o *)0x0);
      (*((Il2CppClass *)in_stack_ffffffffffffff78->klass)->vtable[3].methodPtr)
                (in_stack_ffffffffffffff78,((Il2CppClass *)in_stack_ffffffffffffff78->klass)->vtable[3].method
                );
      il2cpp_runtime_helper_022b2c90();
label_041e85dc:
      il2cpp_runtime_helper_022b2c90();
      pSVar12 = in_stack_ffffffffffffff78;
    }
    do {
      auVar10 = il2cpp_runtime_helper_022b2c90();
      if (auVar10._8_4_ != 1) {
label_041e8649:
        __this_08.fields._8_8_ = pSVar11;
        __this_08.fields._list = pSVar13;
        __this_08.fields._current = (Il2CppObject *)pSVar12;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
        _Unwind_Resume(auVar10._0_8_);
      }
      plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
      lVar9 = *plVar7;
      __cxa_end_catch();
      __this_07.fields._8_8_ = pSVar11;
      __this_07.fields._list = pSVar13;
      __this_07.fields._current = (Il2CppObject *)pSVar12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
      if (lVar9 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar9);
        goto label_041e8649;
      }
label_041e859d:
      vtableDispatch = obj[1].virtualMethodPointer;
      if (vtableDispatch != (Il2CppMethodPointer)0x0) {
        pIVar8 = (Il2CppObject *)
                 (**(code **)(*(long *)vtableDispatch + 0x8a8))
                           (vtableDispatch,pSVar6,
                            *(undefined8 *)(*(long *)vtableDispatch + 0x8b0));
        return pIVar8;
      }
    } while( true );
  }
  if (g_data_057ad7cc == '\0') {
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8203;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e820f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  ppIVar14 = (Il2CppType **)0x0;
  item = (Il2CppRGCTXData *)0x0;
  pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8235;
  __this_09 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8242;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_09,(MethodInfo *)0x0);
  vtableDispatch = obj[1].virtualMethodPointer;
  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e825f;
    pSVar6 = (System_Collections_Generic_List_object__o *)
             (**(code **)(*(long *)vtableDispatch + 0x898))
                       (vtableDispatch,*(undefined8 *)(*(long *)vtableDispatch + 0x8a0));
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e827d;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,pSVar6,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      if (__this_09 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82bf;
          __this.fields._8_8_ = ppIVar14;
          __this.fields._list = pSVar13;
          __this.fields._current = (Il2CppObject *)item;
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
          lVar9 = MethodInfo_Void_Add;
          if ((char)bVar5 == '\0') break;
          pSVar6 = (__this_09->fields).List;
          if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
            pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8346;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8346;
          }
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar6->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
            pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8341;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8341;
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8303;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82b4;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar6,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
label_041e831b:
        pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e832d;
        __this_01.fields._8_8_ = ppIVar14;
        __this_01.fields._list = pSVar13;
        __this_01.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        return (Il2CppObject *)__this_09;
      }
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8317;
      __this_00.fields._8_8_ = ppIVar14;
      __this_00.fields._list = pSVar13;
      __this_00.fields._current = (Il2CppObject *)item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
      if ((char)bVar5 == '\0') goto label_041e831b;
      goto label_041e834b;
    }
  }
label_041e8346:
  pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e834b;
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8350;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8388;
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar9 = *plVar7;
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8390;
    __cxa_end_catch();
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83a2;
    __this_02.fields._8_8_ = ppIVar14;
    __this_02.fields._list = pSVar13;
    __this_02.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar9 == 0) {
      return (Il2CppObject *)__this_09;
    }
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83af;
    il2cpp_runtime_helper_022fefe0(lVar9);
  }
  pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83c8;
  __this_03.fields._8_8_ = ppIVar14;
  __this_03.fields._list = pSVar13;
  __this_03.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  pSStack_90 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83d5;
  _Unwind_Resume(auVar10._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41e9eb0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_UIElements_DropdownField_o *pUVar4;
  UnityEngine_UIElements_DropdownField_c *pUVar5;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  bool_conflict bVar6;
  int32_t value;
  CustomLogic_CustomLogicListBuiltin_o *__this_09;
  System_Collections_Generic_List_object__o *pSVar7;
  long *plVar8;
  Il2CppObject *pIVar9;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EE950 *obj_00;
  long lVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_List_T__o *pSVar13;
  System_Collections_Generic_List_T__o *pSStack_90;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_88;
  System_Collections_Generic_List_T__o *pSVar14;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff80;
  Il2CppType **ppIVar15;
  Il2CppRGCTXData *item;
  int32_t iStack_24;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCStack_20;
  
  if (g_data_057ad7e1 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x41e9ecf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pCStack_20 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x41e9edb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pCStack_20 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x41e9efa;
    il2cpp_runtime_helper_02337ed0();
  }
  pCStack_20 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x41e9f0c;
  obj = MethodInfo_String_ConvertTo_String;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    pUVar4 = (__i->fields)._dropdown;
    __v = (Il2CppObject *)0x0;
    if (pUVar4 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      pUVar5 = pUVar4->klass;
      vtableDispatch = (pUVar5->vtable)._106_set_value.methodPtr;
      (*vtableDispatch)
                (pUVar4,pIVar9,(pUVar5->vtable)._106_set_value.method,pUVar5,vtableDispatch);
      return;
    }
  }
  pCStack_20 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x41e9f3d;
  il2cpp_runtime_helper_022b2c90();
  pCStack_20 = __i;
  if (__v != (Il2CppObject *)0x0) {
    if (g_data_057ad7ca == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
      g_data_057ad7ca = '\x01';
    }
    if (__v[6].klass != (Il2CppClass *)0x0) {
      iStack_24 = UnityEngine_UIElements_PopupField_object___get_index
                            ((UnityEngine_UIElements_PopupField_T__o *)__v[6].klass,MethodInfo_Int32_get_index);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_24);
      return;
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar10 != 0) {
    if (g_data_057ad7cb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
      g_data_057ad7cb = '\x01';
    }
    obj = (MethodInfo_24EEB40 *)0x0;
    if (*(UnityEngine_UIElements_PopupField_T__o **)(lVar10 + 0x60) !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index
                (*(UnityEngine_UIElements_PopupField_T__o **)(lVar10 + 0x60),value,MethodInfo_Void_set_index);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (obj == (MethodInfo_24EEB40 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad7e3 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    if (obj == (MethodInfo_24EEB40 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7e4 == '\0') {
        pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7e4 = '\x01';
      }
      pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
      return;
    }
    if (g_data_057ad7cd == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7cd = '\x01';
    }
    pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_System_String);
    if ((pIVar9 != (Il2CppObject *)0x0) && (pIVar9[3].klass != (Il2CppClass *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_90,
                 (System_Collections_Generic_List_object__o *)pIVar9[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      pSVar14 = pSStack_90;
      pSVar12 = pSStack_88;
      if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_05.fields._8_8_ = pSVar12, __this_05.fields._list = pSVar14,
              __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff80,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58),
              (char)bVar6 != '\0') {
          if (in_stack_ffffffffffffff80 != (System_Collections_Generic_List_T__o *)0x0) {
            pIVar9 = (Il2CppObject *)
                     (*((Il2CppClass *)in_stack_ffffffffffffff80->klass)->vtable[3].methodPtr)
                               (in_stack_ffffffffffffff80,
                                ((Il2CppClass *)in_stack_ffffffffffffff80->klass)->vtable[3].method);
            lVar10 = MethodInfo_Void_Add;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar7->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_041e85dc;
            uVar2 = (pSVar7->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar7->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar9;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar9);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar7,pIVar9,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
label_041e858b:
        __this_06.fields._8_8_ = pSVar12;
        __this_06.fields._list = pSVar14;
        __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff80;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
        pSVar13 = in_stack_ffffffffffffff80;
        goto label_041e859d;
      }
      do {
        __this_04.fields._8_8_ = pSVar12;
        __this_04.fields._list = pSVar14;
        __this_04.fields._current = (Il2CppObject *)in_stack_ffffffffffffff80;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
        if ((char)bVar6 == '\0') goto label_041e858b;
      } while (in_stack_ffffffffffffff80 == (System_Collections_Generic_List_T__o *)0x0);
      (*((Il2CppClass *)in_stack_ffffffffffffff80->klass)->vtable[3].methodPtr)
                (in_stack_ffffffffffffff80,((Il2CppClass *)in_stack_ffffffffffffff80->klass)->vtable[3].method
                );
      il2cpp_runtime_helper_022b2c90();
label_041e85dc:
      il2cpp_runtime_helper_022b2c90();
      pSVar13 = in_stack_ffffffffffffff80;
    }
    do {
      auVar11 = il2cpp_runtime_helper_022b2c90();
      if (auVar11._8_4_ != 1) {
label_041e8649:
        __this_08.fields._8_8_ = pSVar12;
        __this_08.fields._list = pSVar14;
        __this_08.fields._current = (Il2CppObject *)pSVar13;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
        _Unwind_Resume(auVar11._0_8_);
      }
      plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
      lVar10 = *plVar8;
      __cxa_end_catch();
      __this_07.fields._8_8_ = pSVar12;
      __this_07.fields._list = pSVar14;
      __this_07.fields._current = (Il2CppObject *)pSVar13;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
      if (lVar10 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar10);
        goto label_041e8649;
      }
label_041e859d:
      vtableDispatch = obj[1].virtualMethodPointer;
      if (vtableDispatch != (Il2CppMethodPointer)0x0) {
        (**(code **)(*(long *)vtableDispatch + 0x8a8))
                  (vtableDispatch,pSVar7,*(undefined8 *)(*(long *)vtableDispatch + 0x8b0));
        return;
      }
    } while( true );
  }
  if (g_data_057ad7cc == '\0') {
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8203;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e820f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
  ppIVar15 = (Il2CppType **)0x0;
  item = (Il2CppRGCTXData *)0x0;
  pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8235;
  __this_09 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8242;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_09,(MethodInfo *)0x0);
  vtableDispatch = obj[1].virtualMethodPointer;
  if (vtableDispatch != (Il2CppMethodPointer)0x0) {
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e825f;
    pSVar7 = (System_Collections_Generic_List_object__o *)
             (**(code **)(*(long *)vtableDispatch + 0x898))
                       (vtableDispatch,*(undefined8 *)(*(long *)vtableDispatch + 0x8a0));
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e827d;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,pSVar7,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      if (__this_09 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82bf;
          __this.fields._8_8_ = ppIVar15;
          __this.fields._list = pSVar14;
          __this.fields._current = (Il2CppObject *)item;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
          lVar10 = MethodInfo_Void_Add;
          if ((char)bVar6 == '\0') break;
          pSVar7 = (__this_09->fields).List;
          if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
            pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8346;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8346;
          }
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar7->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
            pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8341;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8341;
          }
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8303;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82b4;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar7,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
label_041e831b:
        pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e832d;
        __this_01.fields._8_8_ = ppIVar15;
        __this_01.fields._list = pSVar14;
        __this_01.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
        return;
      }
      pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8317;
      __this_00.fields._8_8_ = ppIVar15;
      __this_00.fields._list = pSVar14;
      __this_00.fields._current = (Il2CppObject *)item;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
      if ((char)bVar6 == '\0') goto label_041e831b;
      goto label_041e834b;
    }
  }
label_041e8346:
  pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e834b;
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8350;
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8388;
    plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar10 = *plVar8;
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8390;
    __cxa_end_catch();
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83a2;
    __this_02.fields._8_8_ = ppIVar15;
    __this_02.fields._list = pSVar14;
    __this_02.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar10 == 0) {
      return;
    }
    pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83af;
    il2cpp_runtime_helper_022fefe0(lVar10);
  }
  pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83c8;
  __this_03.fields._8_8_ = ppIVar15;
  __this_03.fields._list = pSVar14;
  __this_03.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  pSStack_88 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83d5;
  _Unwind_Resume(auVar11._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____getter_4_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x41e9f40

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____getter_4_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppMethodPointer pIVar3;
  System_Object_array *pSVar4;
  UnityEngine_UIElements_PopupField_T__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar5;
  int32_t value;
  CustomLogic_CustomLogicListBuiltin_o *__this_10;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *extraout_RAX;
  MethodInfo_24EE950 *obj;
  long lVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  System_Collections_Generic_List_T__o *pSVar12;
  System_Collections_Generic_List_T__o *pSStack_78;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_70;
  System_Collections_Generic_List_T__o *pSVar13;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff98;
  Il2CppType **ppIVar14;
  Il2CppRGCTXData *item;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (g_data_057ad7ca == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
      g_data_057ad7ca = '\x01';
    }
    __this = (UnityEngine_UIElements_PopupField_T__o *)(__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      local_c = UnityEngine_UIElements_PopupField_object___get_index(__this,MethodInfo_Int32_get_index);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_c);
      return pIVar8;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_Int32_ConvertTo_Int32;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar9 != 0) {
    if (g_data_057ad7cb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
      g_data_057ad7cb = '\x01';
    }
    method = (MethodInfo *)0x0;
    if (*(UnityEngine_UIElements_PopupField_T__o **)(lVar9 + 0x60) !=
        (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index
                (*(UnityEngine_UIElements_PopupField_T__o **)(lVar9 + 0x60),value,MethodInfo_Void_set_index);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (method == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad7e3 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    if (method == (MethodInfo *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7e4 == '\0') {
        pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7e4 = '\x01';
      }
      pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
      System_Object___ctor(pIVar8,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
      return pIVar8;
    }
    if (g_data_057ad7cd == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7cd = '\x01';
    }
    pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_System_String);
    if ((pIVar8 != (Il2CppObject *)0x0) && (pIVar8[3].klass != (Il2CppClass *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_78,
                 (System_Collections_Generic_List_object__o *)pIVar8[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      pSVar13 = pSStack_78;
      pSVar11 = pSStack_70;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_06.fields._8_8_ = pSVar11, __this_06.fields._list = pSVar13,
              __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff98,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70),
              (char)bVar5 != '\0') {
          if (in_stack_ffffffffffffff98 != (System_Collections_Generic_List_T__o *)0x0) {
            pIVar8 = (Il2CppObject *)
                     (*((Il2CppClass *)in_stack_ffffffffffffff98->klass)->vtable[3].methodPtr)
                               (in_stack_ffffffffffffff98,
                                ((Il2CppClass *)in_stack_ffffffffffffff98->klass)->vtable[3].method);
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar6->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_041e85dc;
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (pSVar6->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = pIVar8;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pIVar8);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar6,pIVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
label_041e858b:
        __this_07.fields._8_8_ = pSVar11;
        __this_07.fields._list = pSVar13;
        __this_07.fields._current = (Il2CppObject *)in_stack_ffffffffffffff98;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
        pSVar12 = in_stack_ffffffffffffff98;
        goto label_041e859d;
      }
      do {
        __this_05.fields._8_8_ = pSVar11;
        __this_05.fields._list = pSVar13;
        __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff98;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
        if ((char)bVar5 == '\0') goto label_041e858b;
      } while (in_stack_ffffffffffffff98 == (System_Collections_Generic_List_T__o *)0x0);
      (*((Il2CppClass *)in_stack_ffffffffffffff98->klass)->vtable[3].methodPtr)
                (in_stack_ffffffffffffff98,((Il2CppClass *)in_stack_ffffffffffffff98->klass)->vtable[3].method
                );
      il2cpp_runtime_helper_022b2c90();
label_041e85dc:
      il2cpp_runtime_helper_022b2c90();
      pSVar12 = in_stack_ffffffffffffff98;
    }
    do {
      auVar10 = il2cpp_runtime_helper_022b2c90();
      if (auVar10._8_4_ != 1) {
label_041e8649:
        __this_09.fields._8_8_ = pSVar11;
        __this_09.fields._list = pSVar13;
        __this_09.fields._current = (Il2CppObject *)pSVar12;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
        _Unwind_Resume(auVar10._0_8_);
      }
      plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
      lVar9 = *plVar7;
      __cxa_end_catch();
      __this_08.fields._8_8_ = pSVar11;
      __this_08.fields._list = pSVar13;
      __this_08.fields._current = (Il2CppObject *)pSVar12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
      if (lVar9 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar9);
        goto label_041e8649;
      }
label_041e859d:
      pIVar3 = method[1].virtualMethodPointer;
      if (pIVar3 != (Il2CppMethodPointer)0x0) {
        pIVar8 = (Il2CppObject *)
                 (**(code **)(*(long *)pIVar3 + 0x8a8))
                           (pIVar3,pSVar6,*(undefined8 *)(*(long *)pIVar3 + 0x8b0));
        return pIVar8;
      }
    } while( true );
  }
  if (g_data_057ad7cc == '\0') {
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8203;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e820f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  ppIVar14 = (Il2CppType **)0x0;
  item = (Il2CppRGCTXData *)0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8235;
  __this_10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8242;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_10,(MethodInfo *)0x0);
  pIVar3 = method[1].virtualMethodPointer;
  if (pIVar3 != (Il2CppMethodPointer)0x0) {
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e825f;
    pSVar6 = (System_Collections_Generic_List_object__o *)
             (**(code **)(*(long *)pIVar3 + 0x898))(pIVar3,*(undefined8 *)(*(long *)pIVar3 + 0x8a0));
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e827d;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,pSVar6,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      if (__this_10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82bf;
          __this_00.fields._8_8_ = ppIVar14;
          __this_00.fields._list = pSVar13;
          __this_00.fields._current = (Il2CppObject *)item;
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
          lVar9 = MethodInfo_Void_Add;
          if ((char)bVar5 == '\0') break;
          pSVar6 = (__this_10->fields).List;
          if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
            pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8346;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8346;
          }
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar6->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) {
            pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8341;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8341;
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
            pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8303;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
          }
          else {
            pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82b4;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar6,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
label_041e831b:
        pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e832d;
        __this_02.fields._8_8_ = ppIVar14;
        __this_02.fields._list = pSVar13;
        __this_02.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return (Il2CppObject *)__this_10;
      }
      pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8317;
      __this_01.fields._8_8_ = ppIVar14;
      __this_01.fields._list = pSVar13;
      __this_01.fields._current = (Il2CppObject *)item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar5 == '\0') goto label_041e831b;
      goto label_041e834b;
    }
  }
label_041e8346:
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e834b;
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8350;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8388;
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar9 = *plVar7;
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8390;
    __cxa_end_catch();
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83a2;
    __this_03.fields._8_8_ = ppIVar14;
    __this_03.fields._list = pSVar13;
    __this_03.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar9 == 0) {
      return (Il2CppObject *)__this_10;
    }
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83af;
    il2cpp_runtime_helper_022fefe0(lVar9);
  }
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83c8;
  __this_04.fields._8_8_ = ppIVar14;
  __this_04.fields._list = pSVar13;
  __this_04.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83d5;
  _Unwind_Resume(auVar10._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____setter_4_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41e9fb0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____setter_4_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  void *pvVar4;
  System_Object_array *pSVar5;
  long lVar6;
  UnityEngine_UIElements_PopupField_T__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar7;
  int32_t value;
  CustomLogic_CustomLogicListBuiltin_o *__this_10;
  System_Collections_Generic_List_object__o *pSVar8;
  Il2CppObject *pIVar9;
  long *plVar10;
  MethodInfo_24EE950 *obj;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_List_T__o *pSVar13;
  System_Collections_Generic_List_T__o *pSStack_60;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_58;
  System_Collections_Generic_List_T__o *pSVar14;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffffb0;
  Il2CppType **ppIVar15;
  Il2CppRGCTXData *item;
  
  if (g_data_057ad7e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_Int32_ConvertTo_Int32;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (g_data_057ad7cb == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
      g_data_057ad7cb = '\x01';
    }
    __this = (UnityEngine_UIElements_PopupField_T__o *)(__i->fields)._dropdown;
    __v = (Il2CppObject *)0x0;
    if (__this != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index(__this,value,MethodInfo_Void_set_index);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__v == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad7e3 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    if (__v == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7e4 == '\0') {
        pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7e4 = '\x01';
      }
      pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
      return;
    }
    if (g_data_057ad7cd == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7cd = '\x01';
    }
    pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
    if ((pIVar9 != (Il2CppObject *)0x0) && (pIVar9[3].klass != (Il2CppClass *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_60,
                 (System_Collections_Generic_List_object__o *)pIVar9[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      pSVar14 = pSStack_60;
      pSVar12 = pSStack_58;
      if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_06.fields._8_8_ = pSVar12, __this_06.fields._list = pSVar14,
              __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffffb0,
              bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88),
              (char)bVar7 != '\0') {
          if (in_stack_ffffffffffffffb0 != (System_Collections_Generic_List_T__o *)0x0) {
            pIVar9 = (Il2CppObject *)
                     (*((Il2CppClass *)in_stack_ffffffffffffffb0->klass)->vtable[3].methodPtr)
                               (in_stack_ffffffffffffffb0,
                                ((Il2CppClass *)in_stack_ffffffffffffffb0->klass)->vtable[3].method);
            lVar6 = MethodInfo_Void_Add;
            piVar1 = &(pSVar8->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (pSVar8->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto label_041e85dc;
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pSVar5->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pSVar5->m_Items[(int)uVar2] = pIVar9;
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,pIVar9);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar8,pIVar9,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
label_041e858b:
        __this_07.fields._8_8_ = pSVar12;
        __this_07.fields._list = pSVar14;
        __this_07.fields._current = (Il2CppObject *)in_stack_ffffffffffffffb0;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
        pSVar13 = in_stack_ffffffffffffffb0;
        goto label_041e859d;
      }
      do {
        __this_05.fields._8_8_ = pSVar12;
        __this_05.fields._list = pSVar14;
        __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffffb0;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
        if ((char)bVar7 == '\0') goto label_041e858b;
      } while (in_stack_ffffffffffffffb0 == (System_Collections_Generic_List_T__o *)0x0);
      (*((Il2CppClass *)in_stack_ffffffffffffffb0->klass)->vtable[3].methodPtr)
                (in_stack_ffffffffffffffb0,((Il2CppClass *)in_stack_ffffffffffffffb0->klass)->vtable[3].method
                );
      il2cpp_runtime_helper_022b2c90();
label_041e85dc:
      il2cpp_runtime_helper_022b2c90();
      pSVar13 = in_stack_ffffffffffffffb0;
    }
    do {
      auVar11 = il2cpp_runtime_helper_022b2c90();
      if (auVar11._8_4_ != 1) {
label_041e8649:
        __this_09.fields._8_8_ = pSVar12;
        __this_09.fields._list = pSVar14;
        __this_09.fields._current = (Il2CppObject *)pSVar13;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
        _Unwind_Resume(auVar11._0_8_);
      }
      plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
      lVar6 = *plVar10;
      __cxa_end_catch();
      __this_08.fields._8_8_ = pSVar12;
      __this_08.fields._list = pSVar14;
      __this_08.fields._current = (Il2CppObject *)pSVar13;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      if (lVar6 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar6);
        goto label_041e8649;
      }
label_041e859d:
      pIVar3 = __v[6].klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pvVar4 = (pIVar3->_1).image;
        (**(code **)((long)pvVar4 + 0x8a8))(pIVar3,pSVar8,*(undefined8 *)((long)pvVar4 + 0x8b0));
        return;
      }
    } while( true );
  }
  if (g_data_057ad7cc == '\0') {
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8203;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e820f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
  ppIVar15 = (Il2CppType **)0x0;
  item = (Il2CppRGCTXData *)0x0;
  pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8235;
  __this_10 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8242;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_10,(MethodInfo *)0x0);
  pIVar3 = __v[6].klass;
  if (pIVar3 != (Il2CppClass *)0x0) {
    pvVar4 = (pIVar3->_1).image;
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e825f;
    pSVar8 = (System_Collections_Generic_List_object__o *)
             (**(code **)((long)pvVar4 + 0x898))(pIVar3,*(undefined8 *)((long)pvVar4 + 0x8a0));
    if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e827d;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,pSVar8,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      if (__this_10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82bf;
          __this_00.fields._8_8_ = ppIVar15;
          __this_00.fields._list = pSVar14;
          __this_00.fields._current = (Il2CppObject *)item;
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb0);
          lVar6 = MethodInfo_Void_Add;
          if ((char)bVar7 == '\0') break;
          pSVar8 = (__this_10->fields).List;
          if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
            pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8346;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8346;
          }
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (pSVar8->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
            pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8341;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8341;
          }
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8303;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
          }
          else {
            pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82b4;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar8,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
label_041e831b:
        pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e832d;
        __this_02.fields._8_8_ = ppIVar15;
        __this_02.fields._list = pSVar14;
        __this_02.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
        return;
      }
      pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8317;
      __this_01.fields._8_8_ = ppIVar15;
      __this_01.fields._list = pSVar14;
      __this_01.fields._current = (Il2CppObject *)item;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb0);
      if ((char)bVar7 == '\0') goto label_041e831b;
      goto label_041e834b;
    }
  }
label_041e8346:
  pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e834b;
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8350;
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8388;
    plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar6 = *plVar10;
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8390;
    __cxa_end_catch();
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83a2;
    __this_03.fields._8_8_ = ppIVar15;
    __this_03.fields._list = pSVar14;
    __this_03.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
    if (lVar6 == 0) {
      return;
    }
    pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83af;
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83c8;
  __this_04.fields._8_8_ = ppIVar15;
  __this_04.fields._list = pSVar14;
  __this_04.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
  pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83d5;
  _Unwind_Resume(auVar11._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____getter_5_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x41ea060

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____getter_5_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_09;
  System_Collections_Generic_List_object__o *pSVar7;
  Il2CppObject *pIVar8;
  long *plVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  System_Collections_Generic_List_T__o *pSVar12;
  System_Collections_Generic_List_T__o *pSStack_48;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_40;
  System_Collections_Generic_List_T__o *pSVar13;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffffc8;
  Il2CppType **ppIVar14;
  Il2CppRGCTXData *item;
  
  if (__i == (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad7e3 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    if (__i == (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad7e4 == '\0') {
        pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7e4 = '\x01';
      }
      pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
      System_Object___ctor(pIVar8,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
      return pIVar8;
    }
    if (g_data_057ad7cd == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      g_data_057ad7cd = '\x01';
    }
    pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
    pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_System_String);
    if ((pIVar8 != (Il2CppObject *)0x0) && (pIVar8[3].klass != (Il2CppClass *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_48,
                 (System_Collections_Generic_List_object__o *)pIVar8[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
      pSVar13 = pSStack_48;
      pSVar11 = pSStack_40;
      if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_05.fields._8_8_ = pSVar11, __this_05.fields._list = pSVar13,
              __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc8,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0),
              (char)bVar6 != '\0') {
          if (in_stack_ffffffffffffffc8 != (System_Collections_Generic_List_T__o *)0x0) {
            pIVar8 = (Il2CppObject *)
                     (*((Il2CppClass *)in_stack_ffffffffffffffc8->klass)->vtable[3].methodPtr)
                               (in_stack_ffffffffffffffc8,
                                ((Il2CppClass *)in_stack_ffffffffffffffc8->klass)->vtable[3].method);
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar7->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_041e85dc;
            uVar2 = (pSVar7->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (pSVar7->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = pIVar8;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pIVar8);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar7,pIVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
label_041e858b:
        __this_06.fields._8_8_ = pSVar11;
        __this_06.fields._list = pSVar13;
        __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc8;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
        pSVar12 = in_stack_ffffffffffffffc8;
        goto label_041e859d;
      }
      do {
        __this_04.fields._8_8_ = pSVar11;
        __this_04.fields._list = pSVar13;
        __this_04.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc8;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
        if ((char)bVar6 == '\0') goto label_041e858b;
      } while (in_stack_ffffffffffffffc8 == (System_Collections_Generic_List_T__o *)0x0);
      (*((Il2CppClass *)in_stack_ffffffffffffffc8->klass)->vtable[3].methodPtr)
                (in_stack_ffffffffffffffc8,((Il2CppClass *)in_stack_ffffffffffffffc8->klass)->vtable[3].method
                );
      il2cpp_runtime_helper_022b2c90();
label_041e85dc:
      il2cpp_runtime_helper_022b2c90();
      pSVar12 = in_stack_ffffffffffffffc8;
    }
    do {
      auVar10 = il2cpp_runtime_helper_022b2c90();
      if (auVar10._8_4_ != 1) {
label_041e8649:
        __this_08.fields._8_8_ = pSVar11;
        __this_08.fields._list = pSVar13;
        __this_08.fields._current = (Il2CppObject *)pSVar12;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
        _Unwind_Resume(auVar10._0_8_);
      }
      plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
      lVar5 = *plVar9;
      __cxa_end_catch();
      __this_07.fields._8_8_ = pSVar11;
      __this_07.fields._list = pSVar13;
      __this_07.fields._current = (Il2CppObject *)pSVar12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      if (lVar5 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar5);
        goto label_041e8649;
      }
label_041e859d:
      pUVar3 = (__i->fields)._dropdown;
      if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        pIVar8 = (Il2CppObject *)
                 (*(pUVar3->klass->vtable)._119_set_choices.methodPtr)
                           (pUVar3,pSVar7,(pUVar3->klass->vtable)._119_set_choices.method);
        return pIVar8;
      }
    } while( true );
  }
  if (g_data_057ad7cc == '\0') {
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e81f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8203;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e820f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  ppIVar14 = (Il2CppType **)0x0;
  item = (Il2CppRGCTXData *)0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8235;
  __this_09 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8242;
  CustomLogic_CustomLogicListBuiltin___ctor(__this_09,(MethodInfo *)0x0);
  pUVar3 = (__i->fields)._dropdown;
  if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e825f;
    pSVar7 = (System_Collections_Generic_List_object__o *)
             (*(pUVar3->klass->vtable)._118_get_choices.methodPtr)
                       (pUVar3,(pUVar3->klass->vtable)._118_get_choices.method);
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e827d;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,pSVar7,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      if (__this_09 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82bf;
          __this.fields._8_8_ = ppIVar14;
          __this.fields._list = pSVar13;
          __this.fields._current = (Il2CppObject *)item;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
          lVar5 = MethodInfo_Void_Add;
          if ((char)bVar6 == '\0') break;
          pSVar7 = (__this_09->fields).List;
          if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
            pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8346;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8346;
          }
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar7->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) {
            pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8341;
            il2cpp_runtime_helper_022b2c90();
            goto label_041e8341;
          }
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
            pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8303;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
          }
          else {
            pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e82b4;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar7,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
label_041e831b:
        pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e832d;
        __this_01.fields._8_8_ = ppIVar14;
        __this_01.fields._list = pSVar13;
        __this_01.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        return (Il2CppObject *)__this_09;
      }
      pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8317;
      __this_00.fields._8_8_ = ppIVar14;
      __this_00.fields._list = pSVar13;
      __this_00.fields._current = (Il2CppObject *)item;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar6 == '\0') goto label_041e831b;
      goto label_041e834b;
    }
  }
label_041e8346:
  pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e834b;
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8350;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8388;
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar5 = *plVar9;
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e8390;
    __cxa_end_catch();
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83a2;
    __this_02.fields._8_8_ = ppIVar14;
    __this_02.fields._list = pSVar13;
    __this_02.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar5 == 0) {
      return (Il2CppObject *)__this_09;
    }
    pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83af;
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83c8;
  __this_03.fields._8_8_ = ppIVar14;
  __this_03.fields._list = pSVar13;
  __this_03.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  pSStack_40 = (System_Collections_Generic_List_Enumerator_T__c *)0x41e83d5;
  _Unwind_Resume(auVar10._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____setter_5_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41ea080

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____setter_5_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_UIElements_DropdownField_o *pUVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_04;
  long *plVar7;
  Il2CppObject *pIVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  undefined1 auStack_40 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSStack_38;
  Il2CppType *pIStack_30;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCStack_28;
  
  if (g_data_057ad7e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7e3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicListBuiltin);
  if (__i == (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    pIStack_30 = (Il2CppType *)il2cpp_runtime_helper_022b2c90();
    pCStack_28 = __i;
    if (g_data_057ad7e4 == '\0') {
      pSStack_38 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea119;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad7e4 = '\x01';
    }
    pSStack_38 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea12f;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    pSStack_38 = (System_Collections_Generic_List_Enumerator_T__c *)0x41ea13c;
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
    return;
  }
  if (g_data_057ad7cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7cd = '\x01';
  }
  auVar10 = (undefined1  [8])0x0;
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
  if ((pIVar8 != (Il2CppObject *)0x0) && (pIVar8[3].klass != (Il2CppClass *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_40,
               (System_Collections_Generic_List_object__o *)pIVar8[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    auVar10 = auStack_40;
    pSVar11 = pSStack_38;
    pIVar12 = pIStack_30;
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      while (__this_00.fields._8_8_ = pSVar11,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)auVar10,
            __this_00.fields._current = (Il2CppObject *)pIVar12,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar6 != '\0')
      {
        if (pIVar12 != (Il2CppType *)0x0) {
          pIVar8 = (Il2CppObject *)
                   (*pIVar12->data->vtable[3].methodPtr)(pIVar12,pIVar12->data->vtable[3].method);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_04->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_041e85dc;
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar8;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_04,pIVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
label_041e858b:
      __this_01.fields._8_8_ = pSVar11;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)auVar10;
      __this_01.fields._current = (Il2CppObject *)pIVar12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      goto label_041e859d;
    }
    do {
      __this.fields._8_8_ = pSVar11;
      __this.fields._list = (System_Collections_Generic_List_T__o *)auVar10;
      __this.fields._current = (Il2CppObject *)pIVar12;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar6 == '\0') goto label_041e858b;
    } while (pIVar12 == (Il2CppType *)0x0);
    (*pIVar12->data->vtable[3].methodPtr)(pIVar12,pIVar12->data->vtable[3].method);
    il2cpp_runtime_helper_022b2c90();
label_041e85dc:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_041e8649:
      __this_03.fields._8_8_ = pSVar11;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)auVar10;
      __this_03.fields._current = (Il2CppObject *)pIVar12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pSVar11;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)auVar10;
    __this_02.fields._current = (Il2CppObject *)pIVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_041e8649;
    }
label_041e859d:
    pUVar4 = (__i->fields)._dropdown;
    if (pUVar4 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar4->klass->vtable)._119_set_choices.methodPtr)
                (pUVar4,__this_04,(pUVar4->klass->vtable)._119_set_choices.method);
      return;
    }
  } while( true );
}


// CustomLogic.CustomLogicDropdownBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin___ctor (CustomLogic_CustomLogicDropdownBuiltin_o* __this, UnityEngine_UIElements_DropdownField_o* dropdown, const MethodInfo* method);
// 0x41e7e80

void CustomLogic_CustomLogicDropdownBuiltin___ctor
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               UnityEngine_UIElements_DropdownField_o *dropdown,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  
  if (g_data_057ad7c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    g_data_057ad7c6 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)dropdown,(MethodInfo *)0x0);
  (__this->fields)._dropdown = dropdown;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._dropdown,dropdown);
  control = (__this->fields)._dropdown;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41e7f30

void CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  code *vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  long lVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  int32_t value_00;
  System_String_o *value_01;
  System_String_o *pSVar8;
  UnityEngine_UIElements_BaseField_TValueType__o *pUVar9;
  UnityEngine_UIElements_PopupField_T__o *pUVar10;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppObject *item;
  
  if (g_data_057ad7c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad7c7 = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    userMethod = (__this->fields)._valueChangedEvent;
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar4 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar4 == (System_Object_array *)0x0) {
label_041e8017:
    il2cpp_runtime_helper_022b2c90();
label_041e801c:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((value == (System_String_o *)0x0) || (lVar5 = il2cpp_runtime_helper_023051f0(value), lVar5 != 0)) {
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = (Il2CppObject *)value;
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                  (__this_00,userMethod,pSVar4,(MethodInfo *)0x0);
        return;
      }
      goto label_041e8017;
    }
    goto label_041e801c;
  }
  lVar5 = il2cpp_runtime_helper_0231b270();
  value_01 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad7c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad7c8 = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar5 + 0x60);
  if (pUVar9 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___get_label(pUVar9,MethodInfo_String_get_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar8 = value_01;
  if (g_data_057ad7c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad7c9 = '\x01';
  }
  value_00 = (int32_t)pSVar8;
  pUVar9 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label(pUVar9,value_01,MethodInfo_Void_set_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar7 = *(long **)&(pUVar9->fields).m_RenderHints;
  if (plVar7 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar7 + 0x7c8);
    (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 2000),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar7 = (long *)plVar7[0xc];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x7d8))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
    g_data_057ad7ca = '\x01';
  }
  pUVar10 = (UnityEngine_UIElements_PopupField_T__o *)plVar7[0xc];
  if (pUVar10 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___get_index(pUVar10,MethodInfo_Int32_get_index);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
    g_data_057ad7cb = '\x01';
  }
  pUVar10 = *(UnityEngine_UIElements_PopupField_T__o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___set_index(pUVar10,value_00,MethodInfo_Void_set_index);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,(MethodInfo *)0x0);
  plVar7 = *(long **)&(pUVar10->fields).m_RenderHints;
  if ((plVar7 != (long *)0x0) &&
     (pSVar6 = (System_Collections_Generic_List_object__o *)
               (**(code **)(*plVar7 + 0x898))(plVar7,*(undefined8 *)(*plVar7 + 0x8a0)),
     pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff50,pSVar6,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator
              );
    if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._8_8_ = pIVar13;
      __this_02.fields._list = pSVar12;
      __this_02.fields._current = item;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
      if ((char)bVar3 != '\0') goto label_041e834b;
    }
    else {
      while (__this_01.fields._8_8_ = pIVar13, __this_01.fields._list = pSVar12,
            __this_01.fields._current = item,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50), lVar5 = MethodInfo_Void_Add
            , (char)bVar3 != '\0') {
        pSVar6 = (__this_06->fields).List;
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8346;
        }
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar6->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8341;
        }
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar6,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_03.fields._8_8_ = pIVar13;
    __this_03.fields._list = pSVar12;
    __this_03.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    return;
  }
label_041e8346:
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar13;
    __this_04.fields._list = pSVar12;
    __this_04.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_05.fields._8_8_ = pIVar13;
  __this_05.fields._list = pSVar12;
  __this_05.fields._current = item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  _Unwind_Resume(auVar11._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_Label (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e8030

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Label
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  code *vtableDispatch;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t iVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_o *extraout_RAX;
  undefined4 extraout_var;
  System_String_o *extraout_RAX_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_List_object__o *pSVar8;
  long *plVar9;
  undefined8 extraout_RDX;
  MethodInfo *pMVar10;
  UnityEngine_UIElements_DropdownField_o *__this_06;
  UnityEngine_UIElements_BaseField_TValueType__o *__this_07;
  UnityEngine_UIElements_PopupField_T__o *pUVar11;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  Il2CppMethodPointer pIVar14;
  Il2CppObject *item;
  
  if (g_data_057ad7c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad7c8 = '\x01';
  }
  __this_06 = (__this->fields)._dropdown;
  if (__this_06 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    pSVar7 = UnityEngine_UIElements_BaseField_object___get_label
                       ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_06,MethodInfo_String_get_label);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = method;
  if (g_data_057ad7c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad7c9 = '\x01';
  }
  iVar5 = (int32_t)pMVar10;
  __this_07 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(__this_06->fields).m_RenderHints;
  if (__this_07 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label(__this_07,(System_String_o *)method,MethodInfo_Void_set_label);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar9 = *(long **)&(__this_07->fields).m_RenderHints;
  if (plVar9 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar9 + 0x7c8);
    pSVar7 = (System_String_o *)
             (*vtableDispatch)
                       (plVar9,*(undefined8 *)(*plVar9 + 2000),extraout_RDX,vtableDispatch);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar9 = (long *)plVar9[0xc];
  if (plVar9 != (long *)0x0) {
    pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x7d8))();
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
    g_data_057ad7ca = '\x01';
  }
  pUVar11 = (UnityEngine_UIElements_PopupField_T__o *)plVar9[0xc];
  if (pUVar11 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    iVar5 = UnityEngine_UIElements_PopupField_object___get_index(pUVar11,MethodInfo_Int32_get_index);
    return (System_String_o *)CONCAT44(extraout_var,iVar5);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
    g_data_057ad7cb = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_PopupField_T__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___set_index(pUVar11,iVar5,MethodInfo_Void_set_index);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  plVar9 = *(long **)&(pUVar11->fields).m_RenderHints;
  if ((plVar9 != (long *)0x0) &&
     (pSVar8 = (System_Collections_Generic_List_object__o *)
               (**(code **)(*plVar9 + 0x898))(plVar9,*(undefined8 *)(*plVar9 + 0x8a0)),
     pSVar8 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,pSVar8,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator
              );
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._8_8_ = pIVar14;
      __this_01.fields._list = pSVar13;
      __this_01.fields._current = item;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
      if ((char)bVar6 != '\0') goto label_041e834b;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar14, __this_00.fields._list = pSVar13,
            __this_00.fields._current = item,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78), lVar4 = MethodInfo_Void_Add
            , (char)bVar6 != '\0') {
        pSVar8 = (__this_05->fields).List;
        if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8346;
        }
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar8->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8341;
        }
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar8,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = pIVar14;
    __this_02.fields._list = pSVar13;
    __this_02.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    return (System_String_o *)__this_05;
  }
label_041e8346:
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar4 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar14;
    __this_03.fields._list = pSVar13;
    __this_03.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar4 == 0) {
      return (System_String_o *)__this_05;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar14;
  __this_04.fields._list = pSVar13;
  __this_04.fields._current = item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Label (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41e8070

void CustomLogic_CustomLogicDropdownBuiltin__set_Label
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  code *vtableDispatch;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  int32_t value_00;
  System_String_o *pSVar8;
  UnityEngine_UIElements_DropdownField_o *__this_06;
  UnityEngine_UIElements_PopupField_T__o *pUVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppObject *item;
  
  pSVar8 = value;
  if (g_data_057ad7c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad7c9 = '\x01';
  }
  value_00 = (int32_t)pSVar8;
  __this_06 = (__this->fields)._dropdown;
  if (__this_06 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label
              ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_06,value,MethodInfo_Void_set_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar7 = *(long **)&(__this_06->fields).m_RenderHints;
  if (plVar7 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar7 + 0x7c8);
    (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 2000),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar7 = (long *)plVar7[0xc];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x7d8))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
    g_data_057ad7ca = '\x01';
  }
  pUVar9 = (UnityEngine_UIElements_PopupField_T__o *)plVar7[0xc];
  if (pUVar9 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___get_index(pUVar9,MethodInfo_Int32_get_index);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
    g_data_057ad7cb = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_PopupField_T__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___set_index(pUVar9,value_00,MethodInfo_Void_set_index);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  plVar7 = *(long **)&(pUVar9->fields).m_RenderHints;
  if ((plVar7 != (long *)0x0) &&
     (pSVar6 = (System_Collections_Generic_List_object__o *)
               (**(code **)(*plVar7 + 0x898))(plVar7,*(undefined8 *)(*plVar7 + 0x8a0)),
     pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,pSVar6,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator
              );
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._8_8_ = pIVar12;
      __this_01.fields._list = pSVar11;
      __this_01.fields._current = item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
      if ((char)bVar5 != '\0') goto label_041e834b;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar12, __this_00.fields._list = pSVar11,
            __this_00.fields._current = item,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80), lVar4 = MethodInfo_Void_Add
            , (char)bVar5 != '\0') {
        pSVar6 = (__this_05->fields).List;
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8346;
        }
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar6->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8341;
        }
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar6,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._list = pSVar11;
    __this_02.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    return;
  }
label_041e8346:
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._list = pSVar11;
    __this_03.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar12;
  __this_04.fields._list = pSVar11;
  __this_04.fields._current = item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar10._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Value
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_Value (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e80c0

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Value
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t iVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  undefined4 extraout_var;
  System_String_o *extraout_RAX;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_List_object__o *pSVar8;
  long *plVar9;
  undefined8 in_RDX;
  UnityEngine_UIElements_DropdownField_o *pUVar10;
  UnityEngine_UIElements_PopupField_T__o *pUVar11;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *item;
  
  iVar5 = (int32_t)method;
  pUVar10 = (__this->fields)._dropdown;
  if (pUVar10 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    vtableDispatch = (pUVar10->klass->vtable)._105_get_value.methodPtr;
    pSVar7 = (System_String_o *)
             (*vtableDispatch)
                       (pUVar10,(pUVar10->klass->vtable)._105_get_value.method,in_RDX,vtableDispatch);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar9 = *(long **)&(pUVar10->fields).m_RenderHints;
  if (plVar9 != (long *)0x0) {
    pSVar7 = (System_String_o *)(**(code **)(*plVar9 + 0x7d8))();
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
    g_data_057ad7ca = '\x01';
  }
  pUVar11 = (UnityEngine_UIElements_PopupField_T__o *)plVar9[0xc];
  if (pUVar11 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    iVar5 = UnityEngine_UIElements_PopupField_object___get_index(pUVar11,MethodInfo_Int32_get_index);
    return (System_String_o *)CONCAT44(extraout_var,iVar5);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
    g_data_057ad7cb = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_PopupField_T__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___set_index(pUVar11,iVar5,MethodInfo_Void_set_index);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  vtableDispatch = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  plVar9 = *(long **)&(pUVar11->fields).m_RenderHints;
  if ((plVar9 != (long *)0x0) &&
     (pSVar8 = (System_Collections_Generic_List_object__o *)
               (**(code **)(*plVar9 + 0x898))(plVar9,*(undefined8 *)(*plVar9 + 0x8a0)),
     pSVar8 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,pSVar8,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator
              );
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._8_8_ = vtableDispatch;
      __this_01.fields._list = pSVar13;
      __this_01.fields._current = item;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar6 != '\0') goto label_041e834b;
    }
    else {
      while (__this_00.fields._8_8_ = vtableDispatch, __this_00.fields._list = pSVar13,
            __this_00.fields._current = item,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), lVar4 = MethodInfo_Void_Add
            , (char)bVar6 != '\0') {
        pSVar8 = (__this_05->fields).List;
        if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8346;
        }
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar8->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8341;
        }
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar8,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = vtableDispatch;
    __this_02.fields._list = pSVar13;
    __this_02.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    return (System_String_o *)__this_05;
  }
label_041e8346:
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar4 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._8_8_ = vtableDispatch;
    __this_03.fields._list = pSVar13;
    __this_03.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar4 == 0) {
      return (System_String_o *)__this_05;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = vtableDispatch;
  __this_04.fields._list = pSVar13;
  __this_04.fields._current = item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Value (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41e80f0

void CustomLogic_CustomLogicDropdownBuiltin__set_Value
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  int32_t value_00;
  UnityEngine_UIElements_DropdownField_o *pUVar8;
  UnityEngine_UIElements_PopupField_T__o *pUVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *item;
  
  pUVar8 = (__this->fields)._dropdown;
  if (pUVar8 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    vtableDispatch = (pUVar8->klass->vtable)._106_set_value.methodPtr;
    (*vtableDispatch)(pUVar8,value,(pUVar8->klass->vtable)._106_set_value.method,vtableDispatch)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  value_00 = (int32_t)value;
  if (g_data_057ad7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
    g_data_057ad7ca = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_PopupField_T__o **)&(pUVar8->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___get_index(pUVar9,MethodInfo_Int32_get_index);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
    g_data_057ad7cb = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_PopupField_T__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___set_index(pUVar9,value_00,MethodInfo_Void_set_index);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  vtableDispatch = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  plVar7 = *(long **)&(pUVar9->fields).m_RenderHints;
  if ((plVar7 != (long *)0x0) &&
     (pSVar6 = (System_Collections_Generic_List_object__o *)
               (**(code **)(*plVar7 + 0x898))(plVar7,*(undefined8 *)(*plVar7 + 0x8a0)),
     pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,pSVar6,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator
              );
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._8_8_ = vtableDispatch;
      __this_01.fields._list = pSVar11;
      __this_01.fields._current = item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
      if ((char)bVar5 != '\0') goto label_041e834b;
    }
    else {
      while (__this_00.fields._8_8_ = vtableDispatch, __this_00.fields._list = pSVar11,
            __this_00.fields._current = item,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0), lVar4 = MethodInfo_Void_Add
            , (char)bVar5 != '\0') {
        pSVar6 = (__this_05->fields).List;
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8346;
        }
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar6->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8341;
        }
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar6,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = vtableDispatch;
    __this_02.fields._list = pSVar11;
    __this_02.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    return;
  }
label_041e8346:
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = vtableDispatch;
    __this_03.fields._list = pSVar11;
    __this_03.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = vtableDispatch;
  __this_04.fields._list = pSVar11;
  __this_04.fields._current = item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  _Unwind_Resume(auVar10._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Index
// il2cpp: int32_t CustomLogic_CustomLogicDropdownBuiltin__get_Index (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e8120

int32_t CustomLogic_CustomLogicDropdownBuiltin__get_Index
                  (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t iVar5;
  int32_t extraout_EAX;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_List_object__o *pSVar7;
  long *plVar8;
  UnityEngine_UIElements_PopupField_T__o *pUVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppObject *item;
  
  iVar5 = (int32_t)method;
  if (g_data_057ad7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_index);
    g_data_057ad7ca = '\x01';
  }
  pUVar9 = (UnityEngine_UIElements_PopupField_T__o *)(__this->fields)._dropdown;
  if (pUVar9 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    iVar5 = UnityEngine_UIElements_PopupField_object___get_index(pUVar9,MethodInfo_Int32_get_index);
    return iVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
    g_data_057ad7cb = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_PopupField_T__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___set_index(pUVar9,iVar5,MethodInfo_Void_set_index);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  plVar8 = *(long **)&(pUVar9->fields).m_RenderHints;
  if ((plVar8 != (long *)0x0) &&
     (pSVar7 = (System_Collections_Generic_List_object__o *)
               (**(code **)(*plVar8 + 0x898))(plVar8,*(undefined8 *)(*plVar8 + 0x8a0)),
     pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa8,pSVar7,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator
              );
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._8_8_ = pIVar12;
      __this_01.fields._list = pSVar11;
      __this_01.fields._current = item;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar6 != '\0') goto label_041e834b;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar12, __this_00.fields._list = pSVar11,
            __this_00.fields._current = item,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), lVar4 = MethodInfo_Void_Add
            , (char)bVar6 != '\0') {
        pSVar7 = (__this_05->fields).List;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8346;
        }
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar7->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8341;
        }
        uVar2 = (pSVar7->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar7->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar7,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._list = pSVar11;
    __this_02.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
label_041e832d:
    return (int32_t)__this_05;
  }
label_041e8346:
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._list = pSVar11;
    __this_03.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar4 == 0) goto label_041e832d;
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar12;
  __this_04.fields._list = pSVar11;
  __this_04.fields._current = item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar10._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Index
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Index (CustomLogic_CustomLogicDropdownBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x41e8160

void CustomLogic_CustomLogicDropdownBuiltin__set_Index
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  UnityEngine_UIElements_PopupField_T__o *__this_06;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppObject *item;
  
  if (g_data_057ad7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_index);
    g_data_057ad7cb = '\x01';
  }
  __this_06 = (UnityEngine_UIElements_PopupField_T__o *)(__this->fields)._dropdown;
  if (__this_06 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField_object___set_index(__this_06,value,MethodInfo_Void_set_index);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  plVar7 = *(long **)&(__this_06->fields).m_RenderHints;
  if ((plVar7 != (long *)0x0) &&
     (pSVar6 = (System_Collections_Generic_List_object__o *)
               (**(code **)(*plVar7 + 0x898))(plVar7,*(undefined8 *)(*plVar7 + 0x8a0)),
     pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,pSVar6,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator
              );
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._8_8_ = pIVar10;
      __this_01.fields._list = pSVar9;
      __this_01.fields._current = item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb0);
      if ((char)bVar5 != '\0') goto label_041e834b;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar10, __this_00.fields._list = pSVar9,
            __this_00.fields._current = item,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb0), lVar4 = MethodInfo_Void_Add
            , (char)bVar5 != '\0') {
        pSVar6 = (__this_05->fields).List;
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8346;
        }
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar6->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8341;
        }
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar6,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._list = pSVar9;
    __this_02.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
    return;
  }
label_041e8346:
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._list = pSVar9;
    __this_03.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar10;
  __this_04.fields._list = pSVar9;
  __this_04.fields._current = item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
  _Unwind_Resume(auVar8._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Choices
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__get_Choices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e81b0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Choices
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_List_object__o *pSVar7;
  long *plVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppObject *item;
  
  if (g_data_057ad7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ad7cc = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._dropdown;
  if ((pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
     (pSVar7 = (System_Collections_Generic_List_object__o *)
               (*(pUVar3->klass->vtable)._118_get_choices.methodPtr)
                         (pUVar3,(pUVar3->klass->vtable)._118_get_choices.method),
     pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,pSVar7,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator
              );
    if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_01.fields._8_8_ = pIVar11;
      __this_01.fields._list = pSVar10;
      __this_01.fields._current = item;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar6 != '\0') goto label_041e834b;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar11, __this_00.fields._list = pSVar10,
            __this_00.fields._current = item,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), lVar5 = MethodInfo_Void_Add
            , (char)bVar6 != '\0') {
        pSVar7 = (__this_05->fields).List;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
label_041e8341:
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8346;
        }
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar7->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_041e8341;
        }
        uVar2 = (pSVar7->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar7->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar7,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._list = pSVar10;
    __this_02.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    return __this_05;
  }
label_041e8346:
  il2cpp_runtime_helper_022b2c90();
label_041e834b:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = pSVar10;
    __this_03.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar5 == 0) {
      return __this_05;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._list = pSVar10;
  __this_04.fields._current = item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar9._0_8_);
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Choices
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Choices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x41e83f0

void CustomLogic_CustomLogicDropdownBuiltin__set_Choices
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,CustomLogic_CustomLogicListBuiltin_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  UnityEngine_UIElements_DropdownField_o *pUVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_06;
  Il2CppObject *item;
  long *plVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  undefined1 auStack_40 [16];
  Il2CppType *pIStack_30;
  
  if (g_data_057ad7cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7cd = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_06,MethodInfo_List_1_System_String);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_40,__this_00,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    pSVar9 = (System_Collections_Generic_List_T__o *)auStack_40._0_8_;
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_40._8_8_;
    pIVar11 = pIStack_30;
    if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
      while (__this_02.fields._8_8_ = pSVar10, __this_02.fields._list = pSVar9,
            __this_02.fields._current = (Il2CppObject *)pIVar11,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar6 != '\0')
      {
        if (pIVar11 != (Il2CppType *)0x0) {
          item = (Il2CppObject *)
                 (*pIVar11->data->vtable[3].methodPtr)(pIVar11,pIVar11->data->vtable[3].method);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_06->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_06->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_041e85dc;
          uVar2 = (__this_06->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_06->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_06,item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
label_041e858b:
      __this_03.fields._8_8_ = pSVar10;
      __this_03.fields._list = pSVar9;
      __this_03.fields._current = (Il2CppObject *)pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      goto label_041e859d;
    }
    do {
      __this_01.fields._8_8_ = pSVar10;
      __this_01.fields._list = pSVar9;
      __this_01.fields._current = (Il2CppObject *)pIVar11;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar6 == '\0') goto label_041e858b;
    } while (pIVar11 == (Il2CppType *)0x0);
    (*pIVar11->data->vtable[3].methodPtr)(pIVar11,pIVar11->data->vtable[3].method);
    il2cpp_runtime_helper_022b2c90();
label_041e85dc:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_041e8649:
      __this_05.fields._8_8_ = pSVar10;
      __this_05.fields._list = pSVar9;
      __this_05.fields._current = (Il2CppObject *)pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pSVar10;
    __this_04.fields._list = pSVar9;
    __this_04.fields._current = (Il2CppObject *)pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_041e8649;
    }
label_041e859d:
    pUVar4 = (__this->fields)._dropdown;
    if (pUVar4 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar4->klass->vtable)._119_set_choices.methodPtr)
                (pUVar4,__this_06,(pUVar4->klass->vtable)._119_set_choices.method);
      return;
    }
  } while( true );
}


// CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged (CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x41e8680

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged_40e8680
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41e86a0

void CustomLogic_CustomLogicDropdownBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  long lVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  Il2CppObject *pIVar8;
  System_String_o *item;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  int index;
  System_String_o *item_00;
  UnityEngine_UIElements_DropdownField_o *pUVar10;
  long *plVar11;
  
  pUVar10 = (__this->fields)._dropdown;
  if (pUVar10 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    vtableDispatch = (pUVar10->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
    (*vtableDispatch)
              (pUVar10,value,(pUVar10->klass->vtable)._114_SetValueWithoutNotify.method,vtableDispatch)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  item_00 = value;
  if (g_data_057ad7ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057ad7ce = '\x01';
  }
  index = (int)value;
  if (index < 0) {
    return;
  }
  plVar11 = *(long **)&(pUVar10->fields).m_RenderHints;
  if (plVar11 != (long *)0x0) {
    item_00 = *(System_String_o **)(*plVar11 + 0x8a0);
    lVar6 = (**(code **)(*plVar11 + 0x898))();
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) <= index) {
        return;
      }
      plVar3 = *(long **)&(pUVar10->fields).m_RenderHints;
      if (plVar3 != (long *)0x0) {
        item_00 = *(System_String_o **)(*plVar3 + 0x8a0);
        plVar11 = plVar3;
        pSVar7 = (System_Collections_Generic_List_object__o *)(**(code **)(*plVar3 + 0x898))();
        if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
          pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar7,index,MethodInfo_String_get_Item);
          lVar6 = *plVar3;
          (**(code **)(lVar6 + 0x858))
                    (plVar3,pIVar8,*(undefined8 *)(lVar6 + 0x860),lVar6,*(code **)(lVar6 + 0x858));
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  item = item_00;
  if (g_data_057ad7cf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7cf = '\x01';
  }
  plVar3 = (long *)plVar11[0xc];
  pSVar7 = (System_Collections_Generic_List_object__o *)0x0;
  if (plVar3 != (long *)0x0) {
    item = (System_String_o *)(**(code **)(*plVar3 + 0x898))(plVar3,*(undefined8 *)(*plVar3 + 0x8a0));
    pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar7 = pSVar9;
    System_Collections_Generic_List_object____ctor_362ba10
              (pSVar9,(System_Collections_Generic_IEnumerable_T__o *)item,MethodInfo_List_1_System_String);
    lVar6 = MethodInfo_Void_Add;
    if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar9->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar9->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item_00;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
          plVar11 = (long *)plVar11[0xc];
          if (plVar11 != (long *)0x0) {
label_041e888b:
            (**(code **)(*plVar11 + 0x8a8))(plVar11,pSVar9,*(undefined8 *)(*plVar11 + 0x8b0));
            return;
          }
          pSVar7 = (System_Collections_Generic_List_object__o *)0x0;
          item = item_00;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar9,(Il2CppObject *)item_00,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          plVar11 = (long *)plVar11[0xc];
          pSVar7 = (System_Collections_Generic_List_object__o *)0x0;
          item = item_00;
          if (plVar11 != (long *)0x0) goto label_041e888b;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d0 = '\x01';
  }
  pSVar4 = pSVar7[2].fields._items;
  pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
  if (pSVar4 != (System_Object_array *)0x0) {
    pIVar5 = (pSVar4->obj).klass;
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*pIVar5->vtable[0x76].methodPtr)(pSVar4,pIVar5->vtable[0x76].method);
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar9 = __this_00;
    System_Collections_Generic_List_object____ctor_362ba10(__this_00,collection,MethodInfo_List_1_System_String);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      pSVar4 = pSVar7[2].fields._items;
      pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
      if (pSVar4 != (System_Object_array *)0x0) {
        pIVar5 = (pSVar4->obj).klass;
        (*pIVar5->vtable[0x77].methodPtr)(pSVar4,__this_00,pIVar5->vtable[0x77].method);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d1 = '\x01';
  }
  pSVar4 = pSVar9[2].fields._items;
  pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_System_String);
  if (pSVar4 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7d2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Dropdown");
      g_data_057ad7d2 = '\x01';
    }
    return;
  }
  pIVar5 = (pSVar4->obj).klass;
  (*pIVar5->vtable[0x77].methodPtr)(pSVar4,pSVar7,pIVar5->vtable[0x77].method);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$SetIndexWithoutNotify
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify (CustomLogic_CustomLogicDropdownBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x41e86d0

void CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  UnityEngine_UIElements_DropdownField_c *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  System_Object_array *pSVar5;
  Il2CppClass *pIVar6;
  long lVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  Il2CppObject *pIVar9;
  MethodInfo *item;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo *item_00;
  UnityEngine_UIElements_DropdownField_o *pUVar11;
  long *plVar12;
  
  item_00 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  if (g_data_057ad7ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057ad7ce = '\x01';
    method = extraout_RDX;
  }
  if (index < 0) {
    return;
  }
  pUVar11 = (__this->fields)._dropdown;
  if (pUVar11 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    item_00 = (pUVar11->klass->vtable)._118_get_choices.method;
    lVar7 = (*(pUVar11->klass->vtable)._118_get_choices.methodPtr)(pUVar11,item_00,method);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) <= index) {
        return;
      }
      pUVar3 = (__this->fields)._dropdown;
      if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        item_00 = (pUVar3->klass->vtable)._118_get_choices.method;
        pUVar11 = pUVar3;
        pSVar8 = (System_Collections_Generic_List_object__o *)
                 (*(pUVar3->klass->vtable)._118_get_choices.methodPtr)();
        if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
          pIVar9 = System_Collections_Generic_List_object___get_Item(pSVar8,index,MethodInfo_String_get_Item);
          pUVar4 = pUVar3->klass;
          vtableDispatch = (pUVar4->vtable)._114_SetValueWithoutNotify.methodPtr;
          (*vtableDispatch)
                    (pUVar3,pIVar9,(pUVar4->vtable)._114_SetValueWithoutNotify.method,pUVar4,
                     vtableDispatch);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  item = item_00;
  if (g_data_057ad7cf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7cf = '\x01';
  }
  plVar12 = *(long **)&(pUVar11->fields).m_RenderHints;
  pSVar8 = (System_Collections_Generic_List_object__o *)0x0;
  if (plVar12 != (long *)0x0) {
    item = (MethodInfo *)(**(code **)(*plVar12 + 0x898))(plVar12,*(undefined8 *)(*plVar12 + 0x8a0));
    pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar8 = pSVar10;
    System_Collections_Generic_List_object____ctor_362ba10
              (pSVar10,(System_Collections_Generic_IEnumerable_T__o *)item,MethodInfo_List_1_System_String);
    lVar7 = MethodInfo_Void_Add;
    if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (pSVar10->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (pSVar10->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (pSVar10->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item_00;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
          plVar12 = *(long **)&(pUVar11->fields).m_RenderHints;
          if (plVar12 != (long *)0x0) {
label_041e888b:
            (**(code **)(*plVar12 + 0x8a8))(plVar12,pSVar10,*(undefined8 *)(*plVar12 + 0x8b0));
            return;
          }
          pSVar8 = (System_Collections_Generic_List_object__o *)0x0;
          item = item_00;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar10,(Il2CppObject *)item_00,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          plVar12 = *(long **)&(pUVar11->fields).m_RenderHints;
          pSVar8 = (System_Collections_Generic_List_object__o *)0x0;
          item = item_00;
          if (plVar12 != (long *)0x0) goto label_041e888b;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d0 = '\x01';
  }
  pSVar5 = pSVar8[2].fields._items;
  pSVar10 = (System_Collections_Generic_List_object__o *)0x0;
  if (pSVar5 != (System_Object_array *)0x0) {
    pIVar6 = (pSVar5->obj).klass;
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*pIVar6->vtable[0x76].methodPtr)(pSVar5,pIVar6->vtable[0x76].method);
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar10 = __this_00;
    System_Collections_Generic_List_object____ctor_362ba10(__this_00,collection,MethodInfo_List_1_System_String);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove(__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      pSVar5 = pSVar8[2].fields._items;
      pSVar10 = (System_Collections_Generic_List_object__o *)0x0;
      if (pSVar5 != (System_Object_array *)0x0) {
        pIVar6 = (pSVar5->obj).klass;
        (*pIVar6->vtable[0x77].methodPtr)(pSVar5,__this_00,pIVar6->vtable[0x77].method);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d1 = '\x01';
  }
  pSVar5 = pSVar10[2].fields._items;
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
  if (pSVar5 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7d2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Dropdown");
      g_data_057ad7d2 = '\x01';
    }
    return;
  }
  pIVar6 = (pSVar5->obj).klass;
  (*pIVar6->vtable[0x77].methodPtr)(pSVar5,pSVar8,pIVar6->vtable[0x77].method);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$AddChoice
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__AddChoice (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* choice, const MethodInfo* method);
// 0x41e8790

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__AddChoice
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *choice,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  System_String_o *item;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar5;
  System_Collections_Generic_IEnumerable_T__o *collection;
  CustomLogic_CustomLogicDropdownBuiltin_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_RDX;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar6;
  UnityEngine_UIElements_DropdownField_o *pUVar7;
  
  item = choice;
  if (g_data_057ad7cf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7cf = '\x01';
    method = extraout_RDX;
  }
  pUVar7 = (__this->fields)._dropdown;
  pCVar6 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0;
  if (pUVar7 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    item = (System_String_o *)
           (*(pUVar7->klass->vtable)._118_get_choices.methodPtr)
                     (pUVar7,(pUVar7->klass->vtable)._118_get_choices.method,method);
    pCVar5 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pCVar6 = pCVar5;
    System_Collections_Generic_List_object____ctor_362ba10
              ((System_Collections_Generic_List_object__o *)pCVar5,
               (System_Collections_Generic_IEnumerable_T__o *)item,MethodInfo_List_1_System_String);
    lVar4 = MethodInfo_Void_Add;
    if (pCVar5 != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      piVar1 = (int32_t *)((long)&(pCVar5->fields).Variables + 4);
      *piVar1 = *piVar1 + 1;
      lVar3 = *(long *)&pCVar5->fields;
      if (lVar3 != 0) {
        uVar2 = *(uint *)&(pCVar5->fields).Variables;
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)&(pCVar5->fields).Variables = uVar2 + 1;
          *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8) = choice;
          il2cpp_runtime_helper_022b4080(lVar3 + (long)(int)uVar2 * 8 + 0x20);
          pUVar7 = (__this->fields)._dropdown;
          if (pUVar7 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
label_041e888b:
            (*(pUVar7->klass->vtable)._119_set_choices.methodPtr)
                      (pUVar7,pCVar5,(pUVar7->klass->vtable)._119_set_choices.method);
            return __this;
          }
          pCVar6 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0;
          item = choice;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pCVar5,(Il2CppObject *)choice,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          pUVar7 = (__this->fields)._dropdown;
          pCVar6 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0;
          item = choice;
          if (pUVar7 != (UnityEngine_UIElements_DropdownField_o *)0x0) goto label_041e888b;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d0 = '\x01';
  }
  pUVar7 = (pCVar6->fields)._dropdown;
  pCVar5 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0;
  if (pUVar7 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(pUVar7->klass->vtable)._118_get_choices.methodPtr)
                           (pUVar7,(pUVar7->klass->vtable)._118_get_choices.method);
    __this_00 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pCVar5 = __this_00;
    System_Collections_Generic_List_object____ctor_362ba10
              ((System_Collections_Generic_List_object__o *)__this_00,collection,MethodInfo_List_1_System_String);
    if (__this_00 != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      pUVar7 = (pCVar6->fields)._dropdown;
      pCVar5 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0;
      if (pUVar7 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        (*(pUVar7->klass->vtable)._119_set_choices.methodPtr)
                  (pUVar7,__this_00,(pUVar7->klass->vtable)._119_set_choices.method);
        return pCVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d1 = '\x01';
  }
  pUVar7 = (pCVar5->fields)._dropdown;
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
  if (pUVar7 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    (*(pUVar7->klass->vtable)._119_set_choices.methodPtr)
              (pUVar7,__this_01,(pUVar7->klass->vtable)._119_set_choices.method);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057ad7d2 = '\x01';
  }
  return "Dropdown";
}


// CustomLogic.CustomLogicDropdownBuiltin$$RemoveChoice
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* choice, const MethodInfo* method);
// 0x41e88c0

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *choice,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_IEnumerable_T__o *collection;
  CustomLogic_CustomLogicDropdownBuiltin_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_RDX;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar2;
  
  if (g_data_057ad7d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d0 = '\x01';
    method = extraout_RDX;
  }
  pUVar1 = (__this->fields)._dropdown;
  pCVar2 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0;
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(pUVar1->klass->vtable)._118_get_choices.methodPtr)
                           (pUVar1,(pUVar1->klass->vtable)._118_get_choices.method,method);
    __this_00 = (CustomLogic_CustomLogicDropdownBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pCVar2 = __this_00;
    System_Collections_Generic_List_object____ctor_362ba10
              ((System_Collections_Generic_List_object__o *)__this_00,collection,MethodInfo_List_1_System_String);
    if (__this_00 != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)choice,MethodInfo_Boolean_Remove);
      pUVar1 = (__this->fields)._dropdown;
      pCVar2 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0;
      if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
                  (pUVar1,__this_00,(pUVar1->klass->vtable)._119_set_choices.method);
        return __this;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d1 = '\x01';
  }
  pUVar1 = (pCVar2->fields)._dropdown;
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
              (pUVar1,__this_01,(pUVar1->klass->vtable)._119_set_choices.method);
    return pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057ad7d2 = '\x01';
  }
  return "Dropdown";
}


// CustomLogic.CustomLogicDropdownBuiltin$$ClearChoices
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__ClearChoices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e8990

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__ClearChoices
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057ad7d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad7d1 = '\x01';
  }
  pUVar1 = (__this->fields)._dropdown;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
              (pUVar1,__this_00,(pUVar1->klass->vtable)._119_set_choices.method);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057ad7d2 = '\x01';
  }
  return "Dropdown";
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_ClassName (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e8a20

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_ClassName
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad7d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057ad7d2 = '\x01';
  }
  return "Dropdown";
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_IsAbstract (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e8a50

bool_conflict
CustomLogic_CustomLogicDropdownBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_IsStatic (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e8a60

bool_conflict
CustomLogic_CustomLogicDropdownBuiltin__get_IsStatic
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x41e8a70

bool_conflict
CustomLogic_CustomLogicDropdownBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDropdownBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_string__o* evt, const MethodInfo* method);
// 0x41e8a80

void CustomLogic_CustomLogicDropdownBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_string__o *evt,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *pSVar9;
  System_Action_T__object__o *pSVar10;
  CustomLogic_CLPropertyBinding_T__o *pCVar11;
  System_Func_T__object____object__o *pSVar12;
  CustomLogic_CLMethodBinding_T__o *pCVar13;
  MethodInfo *extraout_RDX;
  System_ArgumentException_o **ppSVar14;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar15;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_48;
  System_ArgumentException_o *pSStack_40;
  undefined8 uStack_30;
  UnityEngine_UIElements_ChangeEvent_string__o *pUStack_28;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCStack_20;
  
  pCVar15 = __this;
  if (g_data_057ad7d3 == '\0') {
    pCVar15 = (CustomLogic_CustomLogicDropdownBuiltin_o *)&MethodInfo_String_get_newValue;
    pCStack_20 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x41e8a9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7d3 = '\x01';
    method = extraout_RDX;
  }
  if (evt != (UnityEngine_UIElements_ChangeEvent_string__o *)0x0) {
    CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged
              (__this,(evt->fields)._newValue_k__BackingField,method);
    return;
  }
  pCStack_20 = (CustomLogic_CustomLogicDropdownBuiltin_o *)0x41e8ac3;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pUStack_28 = evt;
  pCStack_20 = __this;
  il2cpp_runtime_helper_01f681a0();
  uStack_30 = CONCAT44(*(undefined4 *)&(pCVar15->fields).Variables,(undefined4)uStack_30);
  pSVar5 = System_Int32__ToString((int)&uStack_30 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicDropdownBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this_00,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicDropdownBuiltin_CreateInstance);
  pSVar8 = __this_00;
  pSStack_48 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar14 = &pSStack_48;
  pSStack_40 = __this_00;
  if (g_data_057ad7d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"RemoveChoice");
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"AddChoice");
    il2cpp_runtime_helper_023445d0(&"Index");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Choices");
    il2cpp_runtime_helper_023445d0(&"ClearChoices");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"SetIndexWithoutNotify");
    g_data_057ad7d4 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x7ed1d727) {
    if (uVar3 < 0x19e378c0) {
      if (uVar3 == 0x337847e) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"RemoveChoice",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_48 = pSStack_40;
          if (g_data_057ad7dd == '\0') {
            pSStack_40 = message;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RemoveChoice_b__10_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad7dd = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = message;
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
            pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar12;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar12);
          }
          pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          return;
        }
      }
      else if ((uVar3 == 0x19e378bf) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"AddChoice",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = pSStack_40;
        if (g_data_057ad7dc == '\0') {
          pSStack_40 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AddChoice_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad7dc = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = message;
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
        }
        pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        return;
      }
    }
    else if (uVar3 == 0x31359a62) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetIndexWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = pSStack_40;
        if (g_data_057ad7db == '\0') {
          pSStack_40 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetIndexWithoutNotify_b__8);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad7db = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = message;
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
        }
        pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        return;
      }
    }
    else if (uVar3 == 0x3dac88df) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Choices",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = pSStack_40;
        if (g_data_057ad7d8 == '\0') {
          pSStack_40 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Choices_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Choices_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
          g_data_057ad7d8 = '\x01';
          message = pSStack_40;
        }
        pSStack_40 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        System_Action_object__object____ctor();
        pCVar11 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        return;
      }
    }
    else if ((uVar3 == 0x7ed1d726) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ClearChoices",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad7de == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ClearChoices_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7de = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = message;
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar12);
      }
      pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      return;
    }
  }
  else if (uVar3 < 0xaec7ae4c) {
    if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar14 = (System_ArgumentException_o **)&uStack_30;
          pSVar8 = pSStack_40;
        }
        else {
          ppSVar14 = (System_ArgumentException_o **)&uStack_30;
          pSVar8 = pSStack_40;
        }
        goto CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label;
      }
    }
    else if ((uVar3 == 0xaec7ae4b) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Index",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad7d7 == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Index_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Index_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        g_data_057ad7d7 = '\x01';
        message = pSStack_40;
      }
      pSStack_40 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
      return;
    }
  }
  else if (uVar3 == 0xd147f96a) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Value",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad7d6 == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
        g_data_057ad7d6 = '\x01';
        message = pSStack_40;
      }
      pSStack_40 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
      return;
    }
  }
  else if (uVar3 == 0xd1dd43b5) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad7da == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__7);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7da = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = message;
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
      }
      pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      return;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"OnValueChanged",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_48 = pSStack_40;
    if (g_data_057ad7d9 == '\0') {
      pSStack_40 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__6_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad7d9 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_40 = message;
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
      pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
    }
    pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    return;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicDropdownBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label:
  *(undefined8 *)((long)ppSVar14 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar14 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar14 + -0x18) = pSVar8;
  if (g_data_057ad7d5 == '\0') {
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e903a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicDropdownBuiltin_object);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e9046;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e9052;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e905e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e906a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e9076;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDropdownBuiltin_object);
    g_data_057ad7d5 = '\x01';
  }
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e908c;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDropdownBuiltin_object);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e90a5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e90b4;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicDropdownBuiltin_object);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e90cd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e90dc;
  pCVar11 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41e90f7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return;
}


