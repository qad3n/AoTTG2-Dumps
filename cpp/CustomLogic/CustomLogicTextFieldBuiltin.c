// Type: CustomLogic.CustomLogicTextFieldBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTextFieldBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTextFieldBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4210ca0

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCVar11;
  System_Func_T__object____object__o *pSVar12;
  System_ArgumentException_o **ppSVar13;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  uStack_18 = CONCAT44((int)args->max_length,(undefined4)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTextFieldBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTextFieldBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad90e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"RegisterValueChangedEventCallback");
    il2cpp_runtime_helper_023445d0(&"SelectionColor");
    il2cpp_runtime_helper_023445d0(&"Multiline");
    il2cpp_runtime_helper_023445d0(&"CursorColor");
    il2cpp_runtime_helper_023445d0(&"IsDelayed");
    g_data_057ad90e = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0xd147f96b) {
    if (uVar3 < 0x6d3fc92a) {
      if (uVar3 == 0x14e6c5e8) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SelectionColor",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad913 == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SelectionColor_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SelectionColor_g____setter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
            g_data_057ad913 = '\x01';
            message = pSStack_28;
          }
          pSStack_28 = message;
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
          System_Func_object__object____ctor();
          pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
          System_Action_object__object____ctor();
          pCVar11 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x6d3fc929) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsDelayed",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        else {
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        goto CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed;
      }
    }
    else if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad911 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_4_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
          g_data_057ad911 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
        System_Action_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0xd147f96a) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Value",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad912 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
        g_data_057ad912 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0xd989409f) {
    if (uVar3 == 0xd1dd43b5) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad916 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__9);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad916 = '\x01';
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0xd989409e) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"CursorColor",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad914 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CursorColor_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CursorColor_g____setter_7);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
        g_data_057ad914 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xe890d540) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Multiline",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad910 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Multiline_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Multiline_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
        g_data_057ad910 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return pCVar11;
    }
  }
  else if ((uVar3 == 0xf35844be) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"RegisterValueChangedEventCallback",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057ad915 == '\0') {
      pSStack_28 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterValueChangedEventC);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad915 = '\x01';
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
      pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
    }
    pCVar11 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
    return pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTextFieldBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed:
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x18) = pSVar8;
  if (g_data_057ad90f == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x421113a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x4211146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsDelayed_g____getter_2);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x4211152;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IsDelayed_g____setter_2_1);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x421115e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x421116a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x4211176;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
    g_data_057ad90f = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x421118c;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42111a5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42111b4;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42111cd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42111dc;
  pCVar11 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42111f7;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x4211ea0

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad91e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad91e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x4211f10

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterValueChangedEventCallback>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__RegisterValueChangedEventCallback_b__8_0 (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTextFieldBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4211f20

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__RegisterValueChangedEventCallback_b__8_0
          (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTextFieldBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *control;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  Il2CppObject *pIVar1;
  CustomLogic_UserMethod_o *pCVar2;
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  long extraout_RDX;
  CustomLogic_CustomLogicTextFieldBuiltin_o *__this_01;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar3;
  
  __this_01 = __c;
  if (g_data_057ad91f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad91f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_04211fa4:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    pCVar2 = (CustomLogic_UserMethod_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
      if (g_data_057ad864 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string,pCVar2,0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
        g_data_057ad864 = '\x01';
      }
      __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
      pCVar3 = __this_00;
      CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
        (__this_00->fields).changeEvent = pCVar2;
        il2cpp_runtime_helper_022b4080(&__this_00->fields,pCVar2);
        control = (__c->fields)._textField;
        callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
        UnityEngine_UIElements_EventCallback_object____ctor();
        UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
                  ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
        return (Il2CppObject *)__c;
      }
      il2cpp_runtime_helper_022b2c90();
      if (pCVar3[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
        pIVar1 = (Il2CppObject *)(**(code **)((long)((pCVar3[4].klass)->_1).image + 0x858))();
        return pIVar1;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad865 == '\0') {
        il2cpp_runtime_helper_023445d0(&"TextField");
        g_data_057ad865 = '\x01';
      }
      return "TextField";
    }
    goto label_04211fa4;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad920 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad920 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_0421203c;
    __this = *(CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (__this_01 != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify(__this_01,value,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0421203c:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__9_0 (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTextFieldBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4211fb0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__9_0
          (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTextFieldBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  
  if (g_data_057ad920 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad920 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_0421203c;
    __this = (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify(__c,value,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0421203c:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4210d30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad90e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"RegisterValueChangedEventCallback");
    il2cpp_runtime_helper_023445d0(&"SelectionColor");
    il2cpp_runtime_helper_023445d0(&"Multiline");
    il2cpp_runtime_helper_023445d0(&"CursorColor");
    il2cpp_runtime_helper_023445d0(&"IsDelayed");
    g_data_057ad90e = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0xd147f96b) {
    if (uVar3 < 0x6d3fc92a) {
      if (uVar3 == 0x14e6c5e8) {
        bVar4 = System_String__op_Equality(name,"SelectionColor",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad913 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SelectionColor_g____gett);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SelectionColor_g____setter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
            g_data_057ad913 = '\x01';
          }
          pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
          System_Func_object__object____ctor();
          pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
          System_Action_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x6d3fc929) &&
              (bVar4 = System_String__op_Equality(name,"IsDelayed",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed;
      }
    }
    else if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad911 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_4_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
          g_data_057ad911 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xd147f96a) &&
            (bVar4 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad912 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
        g_data_057ad912 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xd989409f) {
    if (uVar3 == 0xd1dd43b5) {
      bVar4 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad916 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__9);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad916 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xd989409e) &&
            (bVar4 = System_String__op_Equality(name,"CursorColor",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad914 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CursorColor_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CursorColor_g____setter_7);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
        g_data_057ad914 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xe890d540) {
    bVar4 = System_String__op_Equality(name,"Multiline",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad910 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Multiline_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Multiline_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
        g_data_057ad910 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xf35844be) &&
          (bVar4 = System_String__op_Equality(name,"RegisterValueChangedEventCallback",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad915 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterValueChangedEventC);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad915 = '\x01';
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTextFieldBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad90f == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x421113a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4211146;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsDelayed_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4211152;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IsDelayed_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x421115e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x421116a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4211176;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
    g_data_057ad90f = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x421118c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42111a5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42111b4;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42111cd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42111dc;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42111f7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__IsDelayed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed (const MethodInfo* method);
// 0x4211120

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (g_data_057ad90f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsDelayed_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IsDelayed_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
    g_data_057ad90f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Multiline
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline (const MethodInfo* method);
// 0x4211200

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (g_data_057ad910 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Multiline_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Multiline_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
    g_data_057ad910 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x42112e0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (g_data_057ad911 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
    g_data_057ad911 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x42113c0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (g_data_057ad912 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
    g_data_057ad912 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__SelectionColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor (const MethodInfo* method);
// 0x42114a0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (g_data_057ad913 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SelectionColor_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SelectionColor_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
    g_data_057ad913 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__CursorColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor (const MethodInfo* method);
// 0x4211580

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (g_data_057ad914 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CursorColor_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CursorColor_g____setter_7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
    g_data_057ad914 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTextFieldBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__RegisterValueChangedEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback (const MethodInfo* method);
// 0x4211660

CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (g_data_057ad915 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterValueChangedEventC);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad915 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x42117b0

CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *__this;
  
  if (g_data_057ad916 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad916 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextFieldBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTextFieldBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x4211900

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___cctor(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool_conflict bVar13;
  uint uVar14;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar15;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar16;
  UnityEngine_UIElements_ITextSelection_o *pUVar17;
  undefined8 uVar18;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  CustomLogic_CustomLogicTextFieldBuiltin_o *__this_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar19;
  Il2CppObject *__this_01;
  CustomLogic_CustomLogicTextFieldBuiltin_o *__this_02;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar20;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar21;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_03;
  CustomLogic_CustomLogicTextFieldBuiltin_o **ppCVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar28;
  MethodInfo_24EEB40 *obj;
  long lVar29;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar30;
  undefined8 unaff_R12;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *unaff_R14;
  undefined8 unaff_R15;
  float fVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar32;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar33;
  UnityEngine_Color_o color;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_b0;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_90;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_70;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCStack_50;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCStack_30;
  undefined8 uStack_20;
  
  if (g_data_057ad917 == '\0') {
    uStack_20 = 0x421191d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4211929;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4211935;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x4211941;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x421194d;
    il2cpp_runtime_helper_023445d0(&"Label");
    uStack_20 = 0x4211959;
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    uStack_20 = 0x4211965;
    il2cpp_runtime_helper_023445d0(&"Value");
    uStack_20 = 0x4211971;
    il2cpp_runtime_helper_023445d0(&"RegisterValueChangedEventCallback");
    uStack_20 = 0x421197d;
    il2cpp_runtime_helper_023445d0(&"SelectionColor");
    uStack_20 = 0x4211989;
    il2cpp_runtime_helper_023445d0(&"Multiline");
    uStack_20 = 0x4211995;
    il2cpp_runtime_helper_023445d0(&"CursorColor");
    uStack_20 = 0x42119a1;
    il2cpp_runtime_helper_023445d0(&"IsDelayed");
    g_data_057ad917 = '\x01';
  }
  uStack_20 = 0x42119b7;
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x42119cc;
  pUVar20 = MethodInfo_HashSet_1_System_String;
  __this_02 = __this_00;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_20 = 0x42119f1;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"IsDelayed",MethodInfo_Boolean_Add);
    uStack_20 = 0x4211a06;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"Multiline",MethodInfo_Boolean_Add);
    uStack_20 = 0x4211a1b;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"Label",MethodInfo_Boolean_Add);
    uStack_20 = 0x4211a30;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"Value",MethodInfo_Boolean_Add);
    uStack_20 = 0x4211a45;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"SelectionColor",MethodInfo_Boolean_Add);
    uStack_20 = 0x4211a5a;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"CursorColor",MethodInfo_Boolean_Add);
    uStack_20 = 0x4211a6f;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"RegisterValueChangedEventCallback",MethodInfo_Boolean_Add);
    uStack_20 = 0x4211a84;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  uStack_20 = 0x4211ab6;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (__this_02 != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    bVar13 = CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed(__this_02,(MethodInfo *)0x0);
    uStack_20 = CONCAT17((char)bVar13,(undefined7)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __this_00;
  if (g_data_057ad918 == '\0') {
    uStack_40 = 0x4211b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_40 = 0x4211b1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad918 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x4211b3a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x4211b4c;
  pUVar19 = MethodInfo_Boolean_ConvertTo_Boolean;
  pUVar21 = pUVar20;
  uVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)pUVar20,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__this_02 == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_40 = 0x4211b6a;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUStack_48 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b7d;
      bVar13 = CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline
                         ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar21,(MethodInfo *)0x0);
      uStack_40 = CONCAT17((char)bVar13,(undefined7)uStack_40);
      pUStack_48 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b96;
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
      return;
    }
    pUStack_48 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b9d;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    pCStack_50 = __this_02;
    pUStack_48 = pUVar20;
    if (g_data_057ad919 == '\0') {
      uStack_60 = 0x4211bbf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      uStack_60 = 0x4211bcb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad919 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_60 = 0x4211bea;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_60 = 0x4211bfc;
    pUVar28 = MethodInfo_Boolean_ConvertTo_Boolean;
    pUVar20 = pUVar19;
    bVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       ((Il2CppObject *)pUVar19,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)CONCAT44(extraout_var_00,bVar13);
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUVar28 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(ulong)(byte)bVar13;
      __this_02 = pCStack_50;
      unaff_R14 = pUStack_48;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline;
    }
    uStack_60 = 0x4211c1a;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__get_Label
                ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar20,(MethodInfo *)0x0);
      return;
    }
    pUStack_68 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211c33;
    uStack_78 = il2cpp_runtime_helper_022b2c90();
    puVar23 = &uStack_78;
    pUStack_70 = pUVar21;
    pUStack_68 = pUVar19;
    if (g_data_057ad91a == '\0') {
      uStack_80 = 0x4211c5f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_80 = 0x4211c6b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_80 = 0x4211c8a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_80 = 0x4211c9c;
    pUVar19 = MethodInfo_String_ConvertTo_String;
    pUVar21 = pUVar28;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar28,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      ppCVar22 = (CustomLogic_CustomLogicTextFieldBuiltin_o **)&uStack_60;
      pUVar21 = pUStack_70;
      pUVar28 = pUVar15;
      unaff_R14 = pUStack_68;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Label;
    }
    uStack_80 = 0x4211cba;
    auVar34 = il2cpp_runtime_helper_022b2c90();
    uStack_80 = auVar34._0_8_;
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUVar19 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__get_Value;
    }
    pUStack_88 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211cd3;
    uStack_98 = il2cpp_runtime_helper_022b2c90();
    pUStack_90 = pUVar20;
    pUStack_88 = pUVar28;
    if (g_data_057ad91b == '\0') {
      uStack_a0 = 0x4211cff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_a0 = 0x4211d0b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_a0 = 0x4211d2a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a0 = 0x4211d3c;
    pUVar28 = MethodInfo_String_ConvertTo_String;
    pUVar20 = pUVar19;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar24 = &uStack_80;
      pUVar20 = pUStack_90;
      pUVar19 = pUVar15;
      pUVar28 = pUStack_88;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Value;
    }
    uStack_a0 = 0x4211d5a;
    uStack_a0 = il2cpp_runtime_helper_022b2c90();
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar20,(MethodInfo *)0x0);
      return;
    }
    pUStack_a8 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211d73;
    uStack_b8 = il2cpp_runtime_helper_022b2c90();
    puVar26 = &uStack_b8;
    pUStack_b0 = pUVar21;
    pUStack_a8 = pUVar19;
    if (g_data_057ad91c == '\0') {
      uStack_c0 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_c0 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_c0 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_c0 = 0x4211ddc;
    obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    pUVar21 = pUVar28;
    pUVar19 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pUVar28,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar25 = &uStack_a0;
      pUVar21 = pUStack_b0;
      pUVar28 = pUStack_a8;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_c0 = 0x4211dfa;
    uStack_c0 = il2cpp_runtime_helper_022b2c90();
    if (pUVar21 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (pUVar21 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
        return;
      }
      puVar27 = &uStack_c0;
      __this_03 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    pUVar19 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    __this_03 = pUVar21;
  }
  else {
    pUVar28 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(ulong)(uVar14 & 0xff);
    uStack_38 = CONCAT44(extraout_var,uVar14);
    if (g_data_057ad85d == '\0') {
      uStack_40 = 0x41f265d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_isDelayed,pUVar28,0);
      g_data_057ad85d = '\x01';
    }
    pUVar20 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this_02->fields)._textField;
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed(pUVar20,uVar14 & 0xff,MethodInfo_Void_set_isDelayed);
      return;
    }
    uStack_40 = 0x41f268b;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    pUVar21 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar20->fields).m_RenderHints;
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextField__get_multiline
                ((UnityEngine_UIElements_TextField_o *)pUVar21,(MethodInfo *)0x0);
      return;
    }
    pUStack_48 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x41f26a7;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline:
    pUVar21 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
               &((UnityEngine_UIElements_TextField_Fields *)&pUVar21->fields)->m_RenderHints;
    pUStack_48 = pUVar15;
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextField__set_multiline
                ((UnityEngine_UIElements_TextField_o *)pUVar21,(uint)pUVar28 & 0xff,(MethodInfo *)0x0);
      return;
    }
    pCStack_50 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x41f26cb;
    il2cpp_runtime_helper_022b2c90();
    ppCVar22 = &pCStack_50;
    pCStack_50 = __this_02;
    if (g_data_057ad85e == '\0') {
      uStack_58 = 0x41f26e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad85e = '\x01';
    }
    pUVar20 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
               &((UnityEngine_UIElements_TextField_Fields *)&pUVar21->fields)->m_RenderHints;
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___get_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar20,MethodInfo_String_get_label);
      return;
    }
    uStack_58 = 0x41f270e;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Label:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)ppCVar22 + -8) = unaff_R14;
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)ppCVar22 + -0x10) = pUVar21;
    puVar23 = (undefined8 *)((long)ppCVar22 + -0x18);
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)ppCVar22 + -0x18) = pUVar15;
    pUVar19 = pUVar28;
    if (g_data_057ad85f == '\0') {
      *(undefined8 *)((long)ppCVar22 + -0x20) = 0x41f272f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad85f = '\x01';
    }
    pUVar21 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
               &((UnityEngine_UIElements_TextField_Fields *)&pUVar20->fields)->m_RenderHints;
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar21,(System_String_o *)pUVar28,
                 MethodInfo_Void_set_label);
      return;
    }
    *(undefined8 *)((long)ppCVar22 + -0x20) = 0x41f275d;
    auVar34 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__get_Value:
    puVar24 = (undefined8 *)((long)puVar23 + -8);
    *(long *)((long)puVar23 + -8) = auVar34._0_8_;
    pUVar21 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar21->fields).m_RenderHints;
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      vtableDispatch = (pUVar21->klass->vtable)._105_get_value.methodPtr;
      (*vtableDispatch)
                (pUVar21,(pUVar21->klass->vtable)._105_get_value.method,auVar34._8_8_,vtableDispatch);
      return;
    }
    *(undefined8 *)((long)puVar23 + -0x10) = 0x41f2783;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Value:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar24 + -8) = pUVar15;
    pUVar21 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar21->fields).m_RenderHints;
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      (*(pUVar21->klass->vtable)._106_set_value.methodPtr)();
      return;
    }
    *(undefined8 *)((long)puVar24 + -0x10) = 0x41f27b3;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar24 + -0x10) = pUVar20;
    puVar25 = (undefined8 *)((long)puVar24 + -0x30);
    if (g_data_057ad860 == '\0') {
      *(undefined8 *)((long)puVar24 + -0x38) = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar24 + -0x38) = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar20 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar21->fields).m_RenderHints;
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar24 + -0x38) = 0x41f2808;
      UVar33 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar20,MethodInfo_Color_get_selectionColor);
      auVar5._8_4_ = extraout_XMM0_Dc;
      auVar5._0_8_ = UVar33.fields._0_8_;
      auVar5._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])((long)puVar24 + -0x20) = auVar5;
      auVar9._8_4_ = in_XMM1_Dc;
      auVar9._0_8_ = UVar33.fields._8_8_;
      auVar9._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)puVar24 + -0x30) = auVar9;
      *(undefined8 *)((long)puVar24 + -0x38) = 0x41f2820;
      pCVar16 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar24 + -0x38) = 0x41f2836;
      color.fields._8_8_ = *(undefined8 *)((long)puVar24 + -0x30);
      color.fields._0_8_ = *(undefined8 *)((long)puVar24 + -0x20);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar16,color,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar24 + -0x38) = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar25 + -8) = pUVar28;
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar25 + -0x10) = pUVar21;
    puVar26 = (undefined8 *)((long)puVar25 + -0x38);
    pUVar15 = pUVar19;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)((long)puVar25 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)((long)puVar25 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_03 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar20->fields).m_RenderHints;
    pUVar28 = pUVar20;
    if (__this_03 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar25 + -0x40) = 0x41f28a1;
      pUVar15 = MethodInfo_ITextSelection_get_textSelection;
      pUVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                          (__this_03,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
      if ((pUVar19 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
         (__this_03 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                       &(pUVar19->fields).
                        _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField
         , __this_03 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        *(undefined8 *)((long)puVar25 + -0x40) = 0x41f28c1;
        UVar33 = Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
        fVar32 = UVar33.fields.b;
        fVar31 = UVar33.fields.r;
        pUVar28 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar17 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar17->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar29) == TypeInfo_ITextSelection) {
                auVar35._8_8_ = pIVar4;
                auVar35._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar29) + 5);
                goto label_041f2937;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar29);
          }
          auVar6._8_4_ = extraout_XMM0_Dc_00;
          auVar6._0_8_ = UVar33.fields._0_8_;
          auVar6._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])((long)puVar25 + -0x28) = auVar6;
          auVar10._8_4_ = in_XMM1_Dc;
          auVar10._0_8_ = UVar33.fields._8_8_;
          auVar10._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])((long)puVar25 + -0x38) = auVar10;
          *(undefined8 *)((long)puVar25 + -0x40) = 0x41f2915;
          auVar35 = il2cpp_runtime_helper_02300d20(pUVar17,TypeInfo_ITextSelection,5);
          fVar32 = *(float *)((long)puVar25 + -0x38);
          fVar31 = *(float *)((long)puVar25 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar35._0_8_;
          (*UNRECOVERED_JUMPTABLE_00)
                    (fVar31,fVar32,pUVar17,auVar35._0_8_[1],auVar35._8_8_,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
    *(undefined8 *)((long)puVar25 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
  }
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -8) = pUVar19;
  puVar27 = (undefined8 *)((long)puVar26 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar26 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar26 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar21 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_03->fields).m_RenderHints;
  if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar26 + -0x30) = 0x41f2998;
    UVar33 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar21,MethodInfo_Color_get_cursorColor);
    auVar7._8_4_ = extraout_XMM0_Dc_01;
    auVar7._0_8_ = UVar33.fields._0_8_;
    auVar7._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar26 + -0x18) = auVar7;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._0_8_ = UVar33.fields._8_8_;
    auVar11._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar26 + -0x28) = auVar11;
    *(undefined8 *)((long)puVar26 + -0x30) = 0x41f29b0;
    pCVar16 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar26 + -0x30) = 0x41f29c6;
    UVar33.fields._8_8_ = *(undefined8 *)((long)puVar26 + -0x28);
    UVar33.fields._0_8_ = *(undefined8 *)((long)puVar26 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar16,UVar33,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar26 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -8) = pUVar28;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -0x10) = __this_03;
  pUVar20 = pUVar15;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar19 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar21->fields).m_RenderHints;
  if (pUVar19 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2a31;
    pUVar20 = MethodInfo_ITextSelection_get_textSelection;
    pUVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                        (pUVar19,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pUVar15 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
       (pUVar19 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                   &(pUVar15->fields).
                    _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
       pUVar19 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pUVar20 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2a51;
      UVar33 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar19,(MethodInfo *)0x0);
      fVar32 = UVar33.fields.b;
      fVar31 = UVar33.fields.r;
      pUVar21 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar17 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar17->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar29 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar29) == TypeInfo_ITextSelection) {
              auVar34._8_8_ = pIVar4;
              auVar34._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar29) + 3);
              goto label_041f2ac7;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar29);
        }
        auVar8._8_4_ = extraout_XMM0_Dc_02;
        auVar8._0_8_ = UVar33.fields._0_8_;
        auVar8._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar27 + -0x28) = auVar8;
        auVar12._8_4_ = in_XMM1_Dc;
        auVar12._0_8_ = UVar33.fields._8_8_;
        auVar12._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar27 + -0x38) = auVar12;
        *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2aa5;
        auVar34 = il2cpp_runtime_helper_02300d20(pUVar17,TypeInfo_ITextSelection,3);
        fVar32 = *(float *)((long)puVar27 + -0x38);
        fVar31 = *(float *)((long)puVar27 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar34._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar31,fVar32,pUVar17,auVar34._0_8_[1],auVar34._8_8_,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2adf;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar27 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -0x48) = pUVar21;
  *(undefined8 *)((long)puVar27 + -0x50) = unaff_R12;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -0x58) = pUVar15;
  *(undefined8 *)((long)puVar27 + -0x60) = uVar18;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b4a;
  pCVar30 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pUVar20;
    *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this->fields,pUVar20);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar19->fields).m_RenderHints;
    *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  *(undefined8 *)((long)puVar27 + -0x68) = 0x41f2bb8;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar27 + -0x68) = uVar18;
  if (pCVar30[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar30[4].klass)->_1).image + 0x858))();
    return;
  }
  *(undefined8 *)((long)puVar27 + -0x70) = 0x41f2be3;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar27 + -0x70) = uVar18;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)((long)puVar27 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____getter_2_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x4211ac0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____getter_2_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool_conflict bVar13;
  uint uVar14;
  Il2CppObject *extraout_RAX;
  undefined4 extraout_var;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar15;
  Il2CppObject *extraout_RAX_00;
  System_String_o *pSVar16;
  Il2CppObject *extraout_RAX_01;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar17;
  UnityEngine_UIElements_ITextSelection_o *pUVar18;
  undefined8 uVar19;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 in_RAX;
  Il2CppObject *pIVar20;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar21;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar22;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar23;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  CustomLogic_CustomLogicTextFieldBuiltin_o **ppCVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar30;
  MethodInfo_24EEB40 *obj;
  long lVar31;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar32;
  undefined8 unaff_R12;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *unaff_R14;
  undefined8 unaff_R15;
  float fVar33;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar34;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar35;
  UnityEngine_Color_o color;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_98;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_78;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_58;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCStack_38;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar13 = CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar13,(undefined7)uStack_8);
    pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar20;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad918 == '\0') {
    uStack_28 = 0x4211b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = 0x4211b1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad918 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x4211b3a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x4211b4c;
  pUVar21 = MethodInfo_Boolean_ConvertTo_Boolean;
  pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)method;
  uVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)method,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_28 = 0x4211b6a;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUStack_30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b7d;
      bVar13 = CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline
                         ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar23,(MethodInfo *)0x0);
      uStack_28 = CONCAT17((char)bVar13,(undefined7)uStack_28);
      pUStack_30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b96;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
      return pIVar20;
    }
    pUStack_30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b9d;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    pCStack_38 = __i;
    pUStack_30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)method;
    if (g_data_057ad919 == '\0') {
      uStack_48 = 0x4211bbf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      uStack_48 = 0x4211bcb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad919 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_48 = 0x4211bea;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_48 = 0x4211bfc;
    pUVar30 = MethodInfo_Boolean_ConvertTo_Boolean;
    pUVar22 = pUVar21;
    bVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       ((Il2CppObject *)pUVar21,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)CONCAT44(extraout_var_01,bVar13);
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUVar30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(ulong)(byte)bVar13;
      __i = pCStack_38;
      unaff_R14 = pUStack_30;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline;
    }
    uStack_48 = 0x4211c1a;
    uStack_48 = il2cpp_runtime_helper_022b2c90();
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pSVar16 = CustomLogic_CustomLogicTextFieldBuiltin__get_Label
                          ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar22,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
    pUStack_50 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211c33;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    puVar25 = &uStack_60;
    pUStack_58 = pUVar23;
    pUStack_50 = pUVar21;
    if (g_data_057ad91a == '\0') {
      uStack_68 = 0x4211c5f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_68 = 0x4211c6b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_68 = 0x4211c8a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = 0x4211c9c;
    pUVar21 = MethodInfo_String_ConvertTo_String;
    pUVar23 = pUVar30;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar30,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      ppCVar24 = (CustomLogic_CustomLogicTextFieldBuiltin_o **)&uStack_48;
      pUVar23 = pUStack_58;
      pUVar30 = pUVar15;
      unaff_R14 = pUStack_50;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Label;
    }
    uStack_68 = 0x4211cba;
    auVar36 = il2cpp_runtime_helper_022b2c90();
    uStack_68 = auVar36._0_8_;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUVar21 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__get_Value;
    }
    pUStack_70 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211cd3;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    pUStack_78 = pUVar22;
    pUStack_70 = pUVar30;
    if (g_data_057ad91b == '\0') {
      uStack_88 = 0x4211cff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_88 = 0x4211d0b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_88 = 0x4211d2a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_88 = 0x4211d3c;
    pUVar30 = MethodInfo_String_ConvertTo_String;
    pUVar22 = pUVar21;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar21,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar26 = &uStack_68;
      pUVar22 = pUStack_78;
      pUVar21 = pUVar15;
      pUVar30 = pUStack_70;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Value;
    }
    uStack_88 = 0x4211d5a;
    uStack_88 = il2cpp_runtime_helper_022b2c90();
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pCVar17 = CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                          ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar22,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar17;
    }
    pUStack_90 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211d73;
    uStack_a0 = il2cpp_runtime_helper_022b2c90();
    puVar28 = &uStack_a0;
    pUStack_98 = pUVar23;
    pUStack_90 = pUVar21;
    if (g_data_057ad91c == '\0') {
      uStack_a8 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_a8 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_a8 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a8 = 0x4211ddc;
    obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    pUVar23 = pUVar30;
    pUVar21 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pUVar30,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar27 = &uStack_88;
      pUVar23 = pUStack_98;
      pUVar30 = pUStack_90;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_a8 = 0x4211dfa;
    uStack_a8 = il2cpp_runtime_helper_022b2c90();
    if (pUVar23 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (pUVar23 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar20,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar20;
        pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar20);
        return pIVar20;
      }
      puVar29 = &uStack_a8;
      __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    pUVar21 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    __this_00 = pUVar23;
  }
  else {
    pUVar30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(ulong)(uVar14 & 0xff);
    uStack_20 = CONCAT44(extraout_var_00,uVar14);
    if (g_data_057ad85d == '\0') {
      uStack_28 = 0x41f265d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_isDelayed,pUVar30,0);
      g_data_057ad85d = '\x01';
    }
    pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed(pUVar23,uVar14 & 0xff,MethodInfo_Void_set_isDelayed);
      return extraout_RAX;
    }
    uStack_28 = 0x41f268b;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      bVar13 = UnityEngine_UIElements_TextField__get_multiline
                         ((UnityEngine_UIElements_TextField_o *)pUVar23,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var,bVar13);
    }
    pUStack_30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x41f26a7;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline:
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
               &((UnityEngine_UIElements_TextField_Fields *)&pUVar23->fields)->m_RenderHints;
    pUStack_30 = pUVar15;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextField__set_multiline
                ((UnityEngine_UIElements_TextField_o *)pUVar23,(uint)pUVar30 & 0xff,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    pCStack_38 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x41f26cb;
    il2cpp_runtime_helper_022b2c90();
    ppCVar24 = &pCStack_38;
    pCStack_38 = __i;
    if (g_data_057ad85e == '\0') {
      uStack_40 = 0x41f26e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad85e = '\x01';
    }
    pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
               &((UnityEngine_UIElements_TextField_Fields *)&pUVar23->fields)->m_RenderHints;
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pSVar16 = UnityEngine_UIElements_BaseField_object___get_label
                          ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar22,MethodInfo_String_get_label);
      return (Il2CppObject *)pSVar16;
    }
    uStack_40 = 0x41f270e;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Label:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)ppCVar24 + -8) = unaff_R14;
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)ppCVar24 + -0x10) = pUVar23;
    puVar25 = (undefined8 *)((long)ppCVar24 + -0x18);
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)ppCVar24 + -0x18) = pUVar15;
    pUVar21 = pUVar30;
    if (g_data_057ad85f == '\0') {
      *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f272f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad85f = '\x01';
    }
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
               &((UnityEngine_UIElements_TextField_Fields *)&pUVar22->fields)->m_RenderHints;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar23,(System_String_o *)pUVar30,
                 MethodInfo_Void_set_label);
      return extraout_RAX_01;
    }
    *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f275d;
    auVar36 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__get_Value:
    puVar26 = (undefined8 *)((long)puVar25 + -8);
    *(long *)((long)puVar25 + -8) = auVar36._0_8_;
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      vtableDispatch = (pUVar23->klass->vtable)._105_get_value.methodPtr;
      pIVar20 = (Il2CppObject *)
                (*vtableDispatch)
                          (pUVar23,(pUVar23->klass->vtable)._105_get_value.method,auVar36._8_8_,
                           vtableDispatch);
      return pIVar20;
    }
    *(undefined8 *)((long)puVar25 + -0x10) = 0x41f2783;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Value:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -8) = pUVar15;
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pIVar20 = (Il2CppObject *)(*(pUVar23->klass->vtable)._106_set_value.methodPtr)();
      return pIVar20;
    }
    *(undefined8 *)((long)puVar26 + -0x10) = 0x41f27b3;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -0x10) = pUVar22;
    puVar27 = (undefined8 *)((long)puVar26 + -0x30);
    if (g_data_057ad860 == '\0') {
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f2808;
      UVar35 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar22,MethodInfo_Color_get_selectionColor);
      auVar5._8_4_ = extraout_XMM0_Dc;
      auVar5._0_8_ = UVar35.fields._0_8_;
      auVar5._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])((long)puVar26 + -0x20) = auVar5;
      auVar9._8_4_ = in_XMM1_Dc;
      auVar9._0_8_ = UVar35.fields._8_8_;
      auVar9._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)puVar26 + -0x30) = auVar9;
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f2820;
      pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f2836;
      color.fields._8_8_ = *(undefined8 *)((long)puVar26 + -0x30);
      color.fields._0_8_ = *(undefined8 *)((long)puVar26 + -0x20);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar17,color,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar17;
    }
    *(undefined8 *)((long)puVar26 + -0x38) = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -8) = pUVar30;
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -0x10) = pUVar23;
    puVar28 = (undefined8 *)((long)puVar27 + -0x38);
    pUVar15 = pUVar21;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)((long)puVar27 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_00 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar22->fields).m_RenderHints;
    pUVar30 = pUVar22;
    if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar27 + -0x40) = 0x41f28a1;
      pUVar15 = MethodInfo_ITextSelection_get_textSelection;
      pUVar18 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                          (__this_00,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
      if ((pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
         (__this_00 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                       &(pUVar21->fields).
                        _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField
         , __this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        *(undefined8 *)((long)puVar27 + -0x40) = 0x41f28c1;
        UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
        fVar34 = UVar35.fields.b;
        fVar33 = UVar35.fields.r;
        pUVar30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar18 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar18->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar31 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar31) == TypeInfo_ITextSelection) {
                auVar37._8_8_ = pIVar4;
                auVar37._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar31) + 5);
                goto label_041f2937;
              }
              lVar31 = lVar31 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar31);
          }
          auVar6._8_4_ = extraout_XMM0_Dc_00;
          auVar6._0_8_ = UVar35.fields._0_8_;
          auVar6._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])((long)puVar27 + -0x28) = auVar6;
          auVar10._8_4_ = in_XMM1_Dc;
          auVar10._0_8_ = UVar35.fields._8_8_;
          auVar10._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])((long)puVar27 + -0x38) = auVar10;
          *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2915;
          auVar37 = il2cpp_runtime_helper_02300d20(pUVar18,TypeInfo_ITextSelection,5);
          fVar34 = *(float *)((long)puVar27 + -0x38);
          fVar33 = *(float *)((long)puVar27 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar37._0_8_;
          pIVar20 = (Il2CppObject *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (fVar33,fVar34,pUVar18,auVar37._0_8_[1],auVar37._8_8_,UNRECOVERED_JUMPTABLE_00);
          return pIVar20;
        }
      }
    }
    *(undefined8 *)((long)puVar27 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
  }
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar28 + -8) = pUVar21;
  puVar29 = (undefined8 *)((long)puVar28 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_00->fields).m_RenderHints;
  if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f2998;
    UVar35 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar23,MethodInfo_Color_get_cursorColor);
    auVar7._8_4_ = extraout_XMM0_Dc_01;
    auVar7._0_8_ = UVar35.fields._0_8_;
    auVar7._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar28 + -0x18) = auVar7;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._0_8_ = UVar35.fields._8_8_;
    auVar11._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar28 + -0x28) = auVar11;
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f29b0;
    pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f29c6;
    UVar35.fields._8_8_ = *(undefined8 *)((long)puVar28 + -0x28);
    UVar35.fields._0_8_ = *(undefined8 *)((long)puVar28 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar17,UVar35,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar17;
  }
  *(undefined8 *)((long)puVar28 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar29 + -8) = pUVar30;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar29 + -0x10) = __this_00;
  pUVar21 = pUVar15;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
  if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2a31;
    pUVar21 = MethodInfo_ITextSelection_get_textSelection;
    pUVar18 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                        (pUVar22,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pUVar15 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
       (pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                   &(pUVar15->fields).
                    _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
       pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pUVar21 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2a51;
      UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar22,(MethodInfo *)0x0);
      fVar34 = UVar35.fields.b;
      fVar33 = UVar35.fields.r;
      pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar18 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar18->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar31 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar31) == TypeInfo_ITextSelection) {
              auVar36._8_8_ = pIVar4;
              auVar36._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar31) + 3);
              goto label_041f2ac7;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar31);
        }
        auVar8._8_4_ = extraout_XMM0_Dc_02;
        auVar8._0_8_ = UVar35.fields._0_8_;
        auVar8._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar29 + -0x28) = auVar8;
        auVar12._8_4_ = in_XMM1_Dc;
        auVar12._0_8_ = UVar35.fields._8_8_;
        auVar12._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar29 + -0x38) = auVar12;
        *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2aa5;
        auVar36 = il2cpp_runtime_helper_02300d20(pUVar18,TypeInfo_ITextSelection,3);
        fVar34 = *(float *)((long)puVar29 + -0x38);
        fVar33 = *(float *)((long)puVar29 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar36._0_8_;
        pIVar20 = (Il2CppObject *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (fVar33,fVar34,pUVar18,auVar36._0_8_[1],auVar36._8_8_,UNRECOVERED_JUMPTABLE_00);
        return pIVar20;
      }
    }
  }
  *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2adf;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar29 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar29 + -0x48) = pUVar23;
  *(undefined8 *)((long)puVar29 + -0x50) = unaff_R12;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar29 + -0x58) = pUVar15;
  *(undefined8 *)((long)puVar29 + -0x60) = uVar19;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b4a;
  pCVar32 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pUVar21;
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this->fields,pUVar21);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar22->fields).m_RenderHints;
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (Il2CppObject *)pUVar22;
  }
  *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2bb8;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar29 + -0x68) = uVar19;
  if (pCVar32[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pIVar20 = (Il2CppObject *)(**(code **)((long)((pCVar32[4].klass)->_1).image + 0x858))();
    return pIVar20;
  }
  *(undefined8 *)((long)puVar29 + -0x70) = 0x41f2be3;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar29 + -0x70) = uVar19;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)((long)puVar29 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____setter_2_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4211af0

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____setter_2_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  bool_conflict bVar14;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar15;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar16;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar17;
  UnityEngine_UIElements_ITextSelection_o *pUVar18;
  undefined8 uVar19;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Il2CppObject *__this_00;
  UnityEngine_UIElements_TextField_o *pUVar20;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar21;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar22;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_01;
  CustomLogic_CustomLogicTextFieldBuiltin_o **ppCVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar29;
  MethodInfo_24EEB40 *obj;
  long lVar30;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar31;
  undefined8 unaff_R12;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *unaff_R14;
  undefined8 unaff_R15;
  float fVar32;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar33;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar34;
  UnityEngine_Color_o color;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_90;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_70;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  UnityEngine_UIElements_TextField_o *pUStack_50;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCStack_30;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (g_data_057ad918 == '\0') {
    uStack_20 = 0x4211b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = 0x4211b1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad918 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x4211b3a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x4211b4c;
  pUVar22 = MethodInfo_Boolean_ConvertTo_Boolean;
  pUVar20 = (UnityEngine_UIElements_TextField_o *)__v;
  uVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_20 = 0x4211b6a;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    if (pUVar20 != (UnityEngine_UIElements_TextField_o *)0x0) {
      pUStack_28 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b7d;
      bVar14 = CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline
                         ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar20,(MethodInfo *)0x0);
      uStack_20 = CONCAT17((char)bVar14,(undefined7)uStack_20);
      pUStack_28 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b96;
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
      return;
    }
    pUStack_28 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211b9d;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    pCStack_30 = __i;
    pUStack_28 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)__v;
    if (g_data_057ad919 == '\0') {
      uStack_40 = 0x4211bbf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      uStack_40 = 0x4211bcb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad919 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x4211bea;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x4211bfc;
    pUVar29 = MethodInfo_Boolean_ConvertTo_Boolean;
    pUVar21 = pUVar22;
    bVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       ((Il2CppObject *)pUVar22,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)CONCAT44(extraout_var_00,bVar14);
    if (pUVar20 != (UnityEngine_UIElements_TextField_o *)0x0) {
      pUVar29 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(ulong)(byte)bVar14;
      __i = pCStack_30;
      unaff_R14 = pUStack_28;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline;
    }
    uStack_40 = 0x4211c1a;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__get_Label
                ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar21,(MethodInfo *)0x0);
      return;
    }
    pUStack_48 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211c33;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    puVar24 = &uStack_58;
    pUStack_50 = pUVar20;
    pUStack_48 = pUVar22;
    if (g_data_057ad91a == '\0') {
      uStack_60 = 0x4211c5f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_60 = 0x4211c6b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_60 = 0x4211c8a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_60 = 0x4211c9c;
    pUVar15 = MethodInfo_String_ConvertTo_String;
    pUVar22 = pUVar29;
    pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar29,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      ppCVar23 = (CustomLogic_CustomLogicTextFieldBuiltin_o **)&uStack_40;
      pUVar20 = pUStack_50;
      pUVar29 = pUVar16;
      unaff_R14 = pUStack_48;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Label;
    }
    uStack_60 = 0x4211cba;
    auVar35 = il2cpp_runtime_helper_022b2c90();
    uStack_60 = auVar35._0_8_;
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__get_Value;
    }
    pUStack_68 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211cd3;
    uStack_78 = il2cpp_runtime_helper_022b2c90();
    pUStack_70 = pUVar21;
    pUStack_68 = pUVar29;
    if (g_data_057ad91b == '\0') {
      uStack_80 = 0x4211cff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_80 = 0x4211d0b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_80 = 0x4211d2a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_80 = 0x4211d3c;
    pUVar29 = MethodInfo_String_ConvertTo_String;
    pUVar21 = pUVar15;
    pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar15,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar25 = &uStack_60;
      pUVar21 = pUStack_70;
      pUVar15 = pUVar16;
      pUVar29 = pUStack_68;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Value;
    }
    uStack_80 = 0x4211d5a;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar21,(MethodInfo *)0x0);
      return;
    }
    pUStack_88 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211d73;
    uStack_98 = il2cpp_runtime_helper_022b2c90();
    puVar27 = &uStack_98;
    pUStack_90 = pUVar22;
    pUStack_88 = pUVar15;
    if (g_data_057ad91c == '\0') {
      uStack_a0 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_a0 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_a0 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a0 = 0x4211ddc;
    obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    pUVar22 = pUVar29;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pUVar29,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar26 = &uStack_80;
      pUVar22 = pUStack_90;
      pUVar29 = pUStack_88;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_a0 = 0x4211dfa;
    uStack_a0 = il2cpp_runtime_helper_022b2c90();
    if (pUVar22 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (pUVar22 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
        return;
      }
      puVar28 = &uStack_a0;
      __this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    __this_01 = pUVar22;
  }
  else {
    pUVar29 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(ulong)(uVar13 & 0xff);
    uStack_18 = CONCAT44(extraout_var,uVar13);
    if (g_data_057ad85d == '\0') {
      uStack_20 = 0x41f265d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_isDelayed,pUVar29,0);
      g_data_057ad85d = '\x01';
    }
    pUVar22 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed(pUVar22,uVar13 & 0xff,MethodInfo_Void_set_isDelayed);
      return;
    }
    uStack_20 = 0x41f268b;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    pUVar20 = *(UnityEngine_UIElements_TextField_o **)&(pUVar22->fields).m_RenderHints;
    if (pUVar20 != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_TextField__get_multiline(pUVar20,(MethodInfo *)0x0);
      return;
    }
    pUStack_28 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x41f26a7;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline:
    pUVar20 = *(UnityEngine_UIElements_TextField_o **)&(pUVar20->fields).m_RenderHints;
    pUStack_28 = pUVar15;
    if (pUVar20 != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_TextField__set_multiline(pUVar20,(uint)pUVar29 & 0xff,(MethodInfo *)0x0);
      return;
    }
    pCStack_30 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x41f26cb;
    il2cpp_runtime_helper_022b2c90();
    ppCVar23 = &pCStack_30;
    pCStack_30 = __i;
    if (g_data_057ad85e == '\0') {
      uStack_38 = 0x41f26e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad85e = '\x01';
    }
    pUVar21 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar20->fields).m_RenderHints;
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___get_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar21,MethodInfo_String_get_label);
      return;
    }
    uStack_38 = 0x41f270e;
    pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Label:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)ppCVar23 + -8) = unaff_R14;
    *(UnityEngine_UIElements_TextField_o **)((long)ppCVar23 + -0x10) = pUVar20;
    puVar24 = (undefined8 *)((long)ppCVar23 + -0x18);
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)ppCVar23 + -0x18) = pUVar16;
    pUVar15 = pUVar29;
    if (g_data_057ad85f == '\0') {
      *(undefined8 *)((long)ppCVar23 + -0x20) = 0x41f272f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad85f = '\x01';
    }
    pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar21->fields).m_RenderHints;
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar22,(System_String_o *)pUVar29,
                 MethodInfo_Void_set_label);
      return;
    }
    *(undefined8 *)((long)ppCVar23 + -0x20) = 0x41f275d;
    auVar35 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__get_Value:
    puVar25 = (undefined8 *)((long)puVar24 + -8);
    *(long *)((long)puVar24 + -8) = auVar35._0_8_;
    pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar22->fields).m_RenderHints;
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      vtableDispatch = (pUVar22->klass->vtable)._105_get_value.methodPtr;
      (*vtableDispatch)
                (pUVar22,(pUVar22->klass->vtable)._105_get_value.method,auVar35._8_8_,vtableDispatch);
      return;
    }
    *(undefined8 *)((long)puVar24 + -0x10) = 0x41f2783;
    pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Value:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar25 + -8) = pUVar16;
    pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar22->fields).m_RenderHints;
    if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      (*(pUVar22->klass->vtable)._106_set_value.methodPtr)();
      return;
    }
    *(undefined8 *)((long)puVar25 + -0x10) = 0x41f27b3;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar25 + -0x10) = pUVar21;
    puVar26 = (undefined8 *)((long)puVar25 + -0x30);
    if (g_data_057ad860 == '\0') {
      *(undefined8 *)((long)puVar25 + -0x38) = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar25 + -0x38) = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar21 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar22->fields).m_RenderHints;
    if (pUVar21 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar25 + -0x38) = 0x41f2808;
      UVar34 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar21,MethodInfo_Color_get_selectionColor);
      auVar5._8_4_ = extraout_XMM0_Dc;
      auVar5._0_8_ = UVar34.fields._0_8_;
      auVar5._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])((long)puVar25 + -0x20) = auVar5;
      auVar9._8_4_ = in_XMM1_Dc;
      auVar9._0_8_ = UVar34.fields._8_8_;
      auVar9._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)puVar25 + -0x30) = auVar9;
      *(undefined8 *)((long)puVar25 + -0x38) = 0x41f2820;
      pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar25 + -0x38) = 0x41f2836;
      color.fields._8_8_ = *(undefined8 *)((long)puVar25 + -0x30);
      color.fields._0_8_ = *(undefined8 *)((long)puVar25 + -0x20);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar17,color,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar25 + -0x38) = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -8) = pUVar29;
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -0x10) = pUVar22;
    puVar27 = (undefined8 *)((long)puVar26 + -0x38);
    pUVar16 = pUVar15;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)((long)puVar26 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)((long)puVar26 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_01 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar21->fields).m_RenderHints;
    pUVar29 = pUVar21;
    if (__this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar26 + -0x40) = 0x41f28a1;
      pUVar16 = MethodInfo_ITextSelection_get_textSelection;
      pUVar18 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                          (__this_01,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
      if ((pUVar15 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
         (__this_01 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                       &(pUVar15->fields).
                        _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField
         , __this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        *(undefined8 *)((long)puVar26 + -0x40) = 0x41f28c1;
        UVar34 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
        fVar33 = UVar34.fields.b;
        fVar32 = UVar34.fields.r;
        pUVar29 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar18 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar18->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar30 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar30) == TypeInfo_ITextSelection) {
                auVar36._8_8_ = pIVar4;
                auVar36._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar30) + 5);
                goto label_041f2937;
              }
              lVar30 = lVar30 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar30);
          }
          auVar6._8_4_ = extraout_XMM0_Dc_00;
          auVar6._0_8_ = UVar34.fields._0_8_;
          auVar6._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])((long)puVar26 + -0x28) = auVar6;
          auVar10._8_4_ = in_XMM1_Dc;
          auVar10._0_8_ = UVar34.fields._8_8_;
          auVar10._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])((long)puVar26 + -0x38) = auVar10;
          *(undefined8 *)((long)puVar26 + -0x40) = 0x41f2915;
          auVar36 = il2cpp_runtime_helper_02300d20(pUVar18,TypeInfo_ITextSelection,5);
          fVar33 = *(float *)((long)puVar26 + -0x38);
          fVar32 = *(float *)((long)puVar26 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar36._0_8_;
          (*UNRECOVERED_JUMPTABLE_00)
                    (fVar32,fVar33,pUVar18,auVar36._0_8_[1],auVar36._8_8_,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
    *(undefined8 *)((long)puVar26 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
  }
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -8) = pUVar15;
  puVar28 = (undefined8 *)((long)puVar27 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar27 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar27 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_01->fields).m_RenderHints;
  if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar27 + -0x30) = 0x41f2998;
    UVar34 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar22,MethodInfo_Color_get_cursorColor);
    auVar7._8_4_ = extraout_XMM0_Dc_01;
    auVar7._0_8_ = UVar34.fields._0_8_;
    auVar7._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar27 + -0x18) = auVar7;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._0_8_ = UVar34.fields._8_8_;
    auVar11._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar27 + -0x28) = auVar11;
    *(undefined8 *)((long)puVar27 + -0x30) = 0x41f29b0;
    pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar27 + -0x30) = 0x41f29c6;
    UVar34.fields._8_8_ = *(undefined8 *)((long)puVar27 + -0x28);
    UVar34.fields._0_8_ = *(undefined8 *)((long)puVar27 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar17,UVar34,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar27 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar28 + -8) = pUVar29;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar28 + -0x10) = __this_01;
  pUVar21 = pUVar16;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar28 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar28 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar29 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar22->fields).m_RenderHints;
  if (pUVar29 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar28 + -0x40) = 0x41f2a31;
    pUVar21 = MethodInfo_ITextSelection_get_textSelection;
    pUVar18 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                        (pUVar29,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pUVar16 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
       (pUVar29 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                   &(pUVar16->fields).
                    _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
       pUVar29 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pUVar21 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      *(undefined8 *)((long)puVar28 + -0x40) = 0x41f2a51;
      UVar34 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar29,(MethodInfo *)0x0);
      fVar33 = UVar34.fields.b;
      fVar32 = UVar34.fields.r;
      pUVar22 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar18 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar18->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar30 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar30) == TypeInfo_ITextSelection) {
              auVar35._8_8_ = pIVar4;
              auVar35._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar30) + 3);
              goto label_041f2ac7;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar30);
        }
        auVar8._8_4_ = extraout_XMM0_Dc_02;
        auVar8._0_8_ = UVar34.fields._0_8_;
        auVar8._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar28 + -0x28) = auVar8;
        auVar12._8_4_ = in_XMM1_Dc;
        auVar12._0_8_ = UVar34.fields._8_8_;
        auVar12._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar28 + -0x38) = auVar12;
        *(undefined8 *)((long)puVar28 + -0x40) = 0x41f2aa5;
        auVar35 = il2cpp_runtime_helper_02300d20(pUVar18,TypeInfo_ITextSelection,3);
        fVar33 = *(float *)((long)puVar28 + -0x38);
        fVar32 = *(float *)((long)puVar28 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar35._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar32,fVar33,pUVar18,auVar35._0_8_[1],auVar35._8_8_,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  *(undefined8 *)((long)puVar28 + -0x40) = 0x41f2adf;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar28 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar28 + -0x48) = pUVar22;
  *(undefined8 *)((long)puVar28 + -0x50) = unaff_R12;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar28 + -0x58) = pUVar16;
  *(undefined8 *)((long)puVar28 + -0x60) = uVar19;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b4a;
  pCVar31 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pUVar21;
    *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this->fields,pUVar21);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar29->fields).m_RenderHints;
    *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  *(undefined8 *)((long)puVar28 + -0x68) = 0x41f2bb8;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar28 + -0x68) = uVar19;
  if (pCVar31[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar31[4].klass)->_1).image + 0x858))();
    return;
  }
  *(undefined8 *)((long)puVar28 + -0x70) = 0x41f2be3;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar28 + -0x70) = uVar19;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)((long)puVar28 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____getter_3_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x4211b70

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____getter_3_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool_conflict bVar13;
  uint uVar14;
  Il2CppObject *extraout_RAX;
  System_String_o *pSVar15;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar16;
  Il2CppObject *extraout_RAX_00;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar17;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar18;
  UnityEngine_UIElements_ITextSelection_o *pUVar19;
  undefined8 uVar20;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 in_RAX;
  Il2CppObject *pIVar21;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar22;
  UnityEngine_UIElements_TextField_o *__this_00;
  UnityEngine_UIElements_BaseField_TValueType__o *__this_01;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar23;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_02;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar30;
  MethodInfo_24EEB40 *obj;
  long lVar31;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar32;
  undefined8 unaff_R12;
  UnityEngine_UIElements_BaseField_TValueType__o *unaff_R14;
  undefined8 unaff_R15;
  float fVar33;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar34;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar35;
  UnityEngine_Color_o color;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_78;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  UnityEngine_UIElements_BaseField_TValueType__o *pUStack_58;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  UnityEngine_UIElements_TextField_o *pUStack_38;
  UnityEngine_UIElements_BaseField_TValueType__o *pUStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar13 = CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar13,(undefined7)uStack_8);
    pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar21;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad919 == '\0') {
    uStack_28 = 0x4211bbf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = 0x4211bcb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad919 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x4211bea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x4211bfc;
  pUVar30 = MethodInfo_Boolean_ConvertTo_Boolean;
  __this_01 = (UnityEngine_UIElements_BaseField_TValueType__o *)method;
  uVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     ((Il2CppObject *)method,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((UnityEngine_UIElements_TextField_o *)__i == (UnityEngine_UIElements_TextField_o *)0x0) {
    uStack_28 = 0x4211c1a;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    if (__this_01 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      pSVar15 = CustomLogic_CustomLogicTextFieldBuiltin__get_Label
                          ((CustomLogic_CustomLogicTextFieldBuiltin_o *)__this_01,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar15;
    }
    pUStack_30 = (UnityEngine_UIElements_BaseField_TValueType__o *)0x4211c33;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    puVar25 = &uStack_40;
    pUStack_38 = (UnityEngine_UIElements_TextField_o *)__i;
    pUStack_30 = (UnityEngine_UIElements_BaseField_TValueType__o *)method;
    if (g_data_057ad91a == '\0') {
      uStack_48 = 0x4211c5f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_48 = 0x4211c6b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_48 = 0x4211c8a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_48 = 0x4211c9c;
    pUVar22 = MethodInfo_String_ConvertTo_String;
    pUVar23 = pUVar30;
    pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar30,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (__this_01 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      puVar24 = &uStack_28;
      __this_00 = pUStack_38;
      pUVar30 = pUVar16;
      unaff_R14 = pUStack_30;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Label;
    }
    uStack_48 = 0x4211cba;
    auVar36 = il2cpp_runtime_helper_022b2c90();
    uStack_48 = auVar36._0_8_;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUVar22 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__get_Value;
    }
    pUStack_50 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211cd3;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    pUStack_58 = __this_01;
    pUStack_50 = pUVar30;
    if (g_data_057ad91b == '\0') {
      uStack_68 = 0x4211cff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_68 = 0x4211d0b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_68 = 0x4211d2a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = 0x4211d3c;
    pUVar30 = MethodInfo_String_ConvertTo_String;
    pUVar16 = pUVar22;
    pUVar17 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar22,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar26 = &uStack_48;
      __this_01 = pUStack_58;
      pUVar22 = pUVar17;
      pUVar30 = pUStack_50;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Value;
    }
    uStack_68 = 0x4211d5a;
    uStack_68 = il2cpp_runtime_helper_022b2c90();
    if (pUVar16 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pCVar18 = CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                          ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar16,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar18;
    }
    pUStack_70 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211d73;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    puVar28 = &uStack_80;
    pUStack_78 = pUVar23;
    pUStack_70 = pUVar22;
    if (g_data_057ad91c == '\0') {
      uStack_88 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_88 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_88 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_88 = 0x4211ddc;
    obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    pUVar23 = pUVar30;
    pUVar22 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pUVar30,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar16 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar27 = &uStack_68;
      pUVar23 = pUStack_78;
      pUVar30 = pUStack_70;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_88 = 0x4211dfa;
    uStack_88 = il2cpp_runtime_helper_022b2c90();
    if (pUVar23 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar17 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (pUVar23 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar21,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar21;
        pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar21);
        return pIVar21;
      }
      puVar29 = &uStack_88;
      __this_02 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pUVar17 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    pUVar22 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    __this_02 = pUVar23;
  }
  else {
    pUVar30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(ulong)(uVar14 & 0xff);
    __this_00 = *(UnityEngine_UIElements_TextField_o **)
                 &(((UnityEngine_UIElements_TextField_o *)__i)->fields).m_RenderHints;
    if (__this_00 != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_TextField__set_multiline(__this_00,uVar14 & 0xff,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_022b2c90();
    puVar24 = (undefined8 *)&stack0xffffffffffffffe8;
    if (g_data_057ad85e == '\0') {
      uStack_20 = 0x41f26e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad85e = '\x01';
    }
    __this_01 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(__this_00->fields).m_RenderHints;
    if (__this_01 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      pSVar15 = UnityEngine_UIElements_BaseField_object___get_label(__this_01,MethodInfo_String_get_label);
      return (Il2CppObject *)pSVar15;
    }
    uStack_20 = 0x41f270e;
    pUVar16 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Label:
    *(UnityEngine_UIElements_BaseField_TValueType__o **)((long)puVar24 + -8) = unaff_R14;
    *(UnityEngine_UIElements_TextField_o **)((long)puVar24 + -0x10) = __this_00;
    puVar25 = (undefined8 *)((long)puVar24 + -0x18);
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar24 + -0x18) = pUVar16;
    pUVar22 = pUVar30;
    if (g_data_057ad85f == '\0') {
      *(undefined8 *)((long)puVar24 + -0x20) = 0x41f272f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad85f = '\x01';
    }
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_01->fields).m_RenderHints;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar23,(System_String_o *)pUVar30,
                 MethodInfo_Void_set_label);
      return extraout_RAX_00;
    }
    *(undefined8 *)((long)puVar24 + -0x20) = 0x41f275d;
    auVar36 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__get_Value:
    puVar26 = (undefined8 *)((long)puVar25 + -8);
    *(long *)((long)puVar25 + -8) = auVar36._0_8_;
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      vtableDispatch = (pUVar23->klass->vtable)._105_get_value.methodPtr;
      pIVar21 = (Il2CppObject *)
                (*vtableDispatch)
                          (pUVar23,(pUVar23->klass->vtable)._105_get_value.method,auVar36._8_8_,
                           vtableDispatch);
      return pIVar21;
    }
    *(undefined8 *)((long)puVar25 + -0x10) = 0x41f2783;
    pUVar17 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Value:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -8) = pUVar17;
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pIVar21 = (Il2CppObject *)(*(pUVar23->klass->vtable)._106_set_value.methodPtr)();
      return pIVar21;
    }
    *(undefined8 *)((long)puVar26 + -0x10) = 0x41f27b3;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_UIElements_BaseField_TValueType__o **)((long)puVar26 + -0x10) = __this_01;
    puVar27 = (undefined8 *)((long)puVar26 + -0x30);
    if (g_data_057ad860 == '\0') {
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar16 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    if (pUVar16 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f2808;
      UVar35 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar16,MethodInfo_Color_get_selectionColor);
      auVar5._8_4_ = extraout_XMM0_Dc;
      auVar5._0_8_ = UVar35.fields._0_8_;
      auVar5._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])((long)puVar26 + -0x20) = auVar5;
      auVar9._8_4_ = in_XMM1_Dc;
      auVar9._0_8_ = UVar35.fields._8_8_;
      auVar9._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)puVar26 + -0x30) = auVar9;
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f2820;
      pCVar18 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar26 + -0x38) = 0x41f2836;
      color.fields._8_8_ = *(undefined8 *)((long)puVar26 + -0x30);
      color.fields._0_8_ = *(undefined8 *)((long)puVar26 + -0x20);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar18,color,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar18;
    }
    *(undefined8 *)((long)puVar26 + -0x38) = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -8) = pUVar30;
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar27 + -0x10) = pUVar23;
    puVar28 = (undefined8 *)((long)puVar27 + -0x38);
    pUVar17 = pUVar22;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)((long)puVar27 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_02 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar16->fields).m_RenderHints;
    pUVar30 = pUVar16;
    if (__this_02 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar27 + -0x40) = 0x41f28a1;
      pUVar17 = MethodInfo_ITextSelection_get_textSelection;
      pUVar19 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                          (__this_02,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
      if ((pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
         (__this_02 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                       &(pUVar22->fields).
                        _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField
         , __this_02 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pUVar17 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        *(undefined8 *)((long)puVar27 + -0x40) = 0x41f28c1;
        UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)__this_02,(MethodInfo *)0x0);
        fVar34 = UVar35.fields.b;
        fVar33 = UVar35.fields.r;
        pUVar30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar19 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar19->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar31 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar31) == TypeInfo_ITextSelection) {
                auVar37._8_8_ = pIVar4;
                auVar37._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar31) + 5);
                goto label_041f2937;
              }
              lVar31 = lVar31 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar31);
          }
          auVar6._8_4_ = extraout_XMM0_Dc_00;
          auVar6._0_8_ = UVar35.fields._0_8_;
          auVar6._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])((long)puVar27 + -0x28) = auVar6;
          auVar10._8_4_ = in_XMM1_Dc;
          auVar10._0_8_ = UVar35.fields._8_8_;
          auVar10._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])((long)puVar27 + -0x38) = auVar10;
          *(undefined8 *)((long)puVar27 + -0x40) = 0x41f2915;
          auVar37 = il2cpp_runtime_helper_02300d20(pUVar19,TypeInfo_ITextSelection,5);
          fVar34 = *(float *)((long)puVar27 + -0x38);
          fVar33 = *(float *)((long)puVar27 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar37._0_8_;
          pIVar21 = (Il2CppObject *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (fVar33,fVar34,pUVar19,auVar37._0_8_[1],auVar37._8_8_,UNRECOVERED_JUMPTABLE_00);
          return pIVar21;
        }
      }
    }
    *(undefined8 *)((long)puVar27 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
  }
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar28 + -8) = pUVar22;
  puVar29 = (undefined8 *)((long)puVar28 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_02->fields).m_RenderHints;
  if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f2998;
    UVar35 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar23,MethodInfo_Color_get_cursorColor);
    auVar7._8_4_ = extraout_XMM0_Dc_01;
    auVar7._0_8_ = UVar35.fields._0_8_;
    auVar7._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar28 + -0x18) = auVar7;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._0_8_ = UVar35.fields._8_8_;
    auVar11._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar28 + -0x28) = auVar11;
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f29b0;
    pCVar18 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar28 + -0x30) = 0x41f29c6;
    UVar35.fields._8_8_ = *(undefined8 *)((long)puVar28 + -0x28);
    UVar35.fields._0_8_ = *(undefined8 *)((long)puVar28 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar18,UVar35,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar18;
  }
  *(undefined8 *)((long)puVar28 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar29 + -8) = pUVar30;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar29 + -0x10) = __this_02;
  pUVar30 = pUVar17;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
  if (pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2a31;
    pUVar30 = MethodInfo_ITextSelection_get_textSelection;
    pUVar19 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                        (pUVar22,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pUVar17 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
       (pUVar22 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                   &(pUVar17->fields).
                    _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
       pUVar22 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pUVar30 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2a51;
      UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar22,(MethodInfo *)0x0);
      fVar34 = UVar35.fields.b;
      fVar33 = UVar35.fields.r;
      pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar19 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar19->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar31 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar31) == TypeInfo_ITextSelection) {
              auVar36._8_8_ = pIVar4;
              auVar36._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar31) + 3);
              goto label_041f2ac7;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar31);
        }
        auVar8._8_4_ = extraout_XMM0_Dc_02;
        auVar8._0_8_ = UVar35.fields._0_8_;
        auVar8._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar29 + -0x28) = auVar8;
        auVar12._8_4_ = in_XMM1_Dc;
        auVar12._0_8_ = UVar35.fields._8_8_;
        auVar12._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar29 + -0x38) = auVar12;
        *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2aa5;
        auVar36 = il2cpp_runtime_helper_02300d20(pUVar19,TypeInfo_ITextSelection,3);
        fVar34 = *(float *)((long)puVar29 + -0x38);
        fVar33 = *(float *)((long)puVar29 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar36._0_8_;
        pIVar21 = (Il2CppObject *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (fVar33,fVar34,pUVar19,auVar36._0_8_[1],auVar36._8_8_,UNRECOVERED_JUMPTABLE_00);
        return pIVar21;
      }
    }
  }
  *(undefined8 *)((long)puVar29 + -0x40) = 0x41f2adf;
  uVar20 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar29 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar29 + -0x48) = pUVar23;
  *(undefined8 *)((long)puVar29 + -0x50) = unaff_R12;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar29 + -0x58) = pUVar17;
  *(undefined8 *)((long)puVar29 + -0x60) = uVar20;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b4a;
  pCVar32 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pUVar30;
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this->fields,pUVar30);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar22->fields).m_RenderHints;
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (Il2CppObject *)pUVar22;
  }
  *(undefined8 *)((long)puVar29 + -0x68) = 0x41f2bb8;
  uVar20 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar29 + -0x68) = uVar20;
  if (pCVar32[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pIVar21 = (Il2CppObject *)(**(code **)((long)((pCVar32[4].klass)->_1).image + 0x858))();
    return pIVar21;
  }
  *(undefined8 *)((long)puVar29 + -0x70) = 0x41f2be3;
  uVar20 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar29 + -0x70) = uVar20;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)((long)puVar29 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____setter_3_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4211ba0

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____setter_3_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar14;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar15;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar16;
  UnityEngine_UIElements_ITextSelection_o *pUVar17;
  undefined8 uVar18;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 in_RAX;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar19;
  Il2CppObject *__this_00;
  UnityEngine_UIElements_TextField_o *__this_01;
  UnityEngine_UIElements_BaseField_TValueType__o *__this_02;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar20;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_03;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar27;
  MethodInfo_24EEB40 *obj;
  long lVar28;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar29;
  undefined8 unaff_R12;
  Il2CppObject *unaff_R14;
  undefined8 unaff_R15;
  float fVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar31;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar32;
  UnityEngine_Color_o color;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_70;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  UnityEngine_UIElements_BaseField_TValueType__o *pUStack_50;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  UnityEngine_UIElements_TextField_o *pUStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (g_data_057ad919 == '\0') {
    uStack_20 = 0x4211bbf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = 0x4211bcb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad919 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x4211bea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x4211bfc;
  pUVar27 = MethodInfo_Boolean_ConvertTo_Boolean;
  __this_02 = (UnityEngine_UIElements_BaseField_TValueType__o *)__v;
  uVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_20 = 0x4211c1a;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    if (__this_02 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__get_Label
                ((CustomLogic_CustomLogicTextFieldBuiltin_o *)__this_02,(MethodInfo *)0x0);
      return;
    }
    pIStack_28 = (Il2CppObject *)0x4211c33;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    puVar22 = &uStack_38;
    pUStack_30 = (UnityEngine_UIElements_TextField_o *)__i;
    pIStack_28 = __v;
    if (g_data_057ad91a == '\0') {
      uStack_40 = 0x4211c5f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_40 = 0x4211c6b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91a = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x4211c8a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x4211c9c;
    pUVar19 = MethodInfo_String_ConvertTo_String;
    pUVar20 = pUVar27;
    pUVar14 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar27,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (__this_02 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      puVar21 = &uStack_20;
      __this_01 = pUStack_30;
      pUVar27 = pUVar14;
      unaff_R14 = pIStack_28;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Label;
    }
    uStack_40 = 0x4211cba;
    auVar33 = il2cpp_runtime_helper_022b2c90();
    uStack_40 = auVar33._0_8_;
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pUVar19 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__get_Value;
    }
    pUStack_48 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211cd3;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    pUStack_50 = __this_02;
    pUStack_48 = pUVar27;
    if (g_data_057ad91b == '\0') {
      uStack_60 = 0x4211cff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      uStack_60 = 0x4211d0b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_60 = 0x4211d2a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_60 = 0x4211d3c;
    pUVar27 = MethodInfo_String_ConvertTo_String;
    pUVar14 = pUVar19;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar19,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar23 = &uStack_40;
      __this_02 = pUStack_50;
      pUVar19 = pUVar15;
      pUVar27 = pUStack_48;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_Value;
    }
    uStack_60 = 0x4211d5a;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    if (pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar14,(MethodInfo *)0x0);
      return;
    }
    pUStack_68 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x4211d73;
    uStack_78 = il2cpp_runtime_helper_022b2c90();
    puVar25 = &uStack_78;
    pUStack_70 = pUVar20;
    pUStack_68 = pUVar19;
    if (g_data_057ad91c == '\0') {
      uStack_80 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_80 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_80 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_80 = 0x4211ddc;
    obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    pUVar20 = pUVar27;
    pUVar19 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)pUVar27,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar24 = &uStack_60;
      pUVar20 = pUStack_70;
      pUVar27 = pUStack_68;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_80 = 0x4211dfa;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    if (pUVar20 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (pUVar20 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
        return;
      }
      puVar26 = &uStack_80;
      __this_03 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    pUVar19 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
    __this_03 = pUVar20;
  }
  else {
    pUVar27 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(ulong)(uVar13 & 0xff);
    __this_01 = (__i->fields)._textField;
    if (__this_01 != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_TextField__set_multiline(__this_01,uVar13 & 0xff,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    puVar21 = (undefined8 *)&stack0xfffffffffffffff0;
    if (g_data_057ad85e == '\0') {
      uStack_18 = 0x41f26e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad85e = '\x01';
    }
    __this_02 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(__this_01->fields).m_RenderHints;
    if (__this_02 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___get_label(__this_02,MethodInfo_String_get_label);
      return;
    }
    uStack_18 = 0x41f270e;
    pUVar14 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Label:
    *(Il2CppObject **)((long)puVar21 + -8) = unaff_R14;
    *(UnityEngine_UIElements_TextField_o **)((long)puVar21 + -0x10) = __this_01;
    puVar22 = (undefined8 *)((long)puVar21 + -0x18);
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar21 + -0x18) = pUVar14;
    pUVar19 = pUVar27;
    if (g_data_057ad85f == '\0') {
      *(undefined8 *)((long)puVar21 + -0x20) = 0x41f272f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad85f = '\x01';
    }
    pUVar20 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_02->fields).m_RenderHints;
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar20,(System_String_o *)pUVar27,
                 MethodInfo_Void_set_label);
      return;
    }
    *(undefined8 *)((long)puVar21 + -0x20) = 0x41f275d;
    auVar33 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__get_Value:
    puVar23 = (undefined8 *)((long)puVar22 + -8);
    *(long *)((long)puVar22 + -8) = auVar33._0_8_;
    pUVar20 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar20->fields).m_RenderHints;
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      vtableDispatch = (pUVar20->klass->vtable)._105_get_value.methodPtr;
      (*vtableDispatch)
                (pUVar20,(pUVar20->klass->vtable)._105_get_value.method,auVar33._8_8_,vtableDispatch);
      return;
    }
    *(undefined8 *)((long)puVar22 + -0x10) = 0x41f2783;
    pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Value:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar23 + -8) = pUVar15;
    pUVar20 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar20->fields).m_RenderHints;
    if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      (*(pUVar20->klass->vtable)._106_set_value.methodPtr)();
      return;
    }
    *(undefined8 *)((long)puVar23 + -0x10) = 0x41f27b3;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_UIElements_BaseField_TValueType__o **)((long)puVar23 + -0x10) = __this_02;
    puVar24 = (undefined8 *)((long)puVar23 + -0x30);
    if (g_data_057ad860 == '\0') {
      *(undefined8 *)((long)puVar23 + -0x38) = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar23 + -0x38) = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar14 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar20->fields).m_RenderHints;
    if (pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar23 + -0x38) = 0x41f2808;
      UVar32 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar14,MethodInfo_Color_get_selectionColor);
      auVar5._8_4_ = extraout_XMM0_Dc;
      auVar5._0_8_ = UVar32.fields._0_8_;
      auVar5._12_4_ = extraout_XMM0_Dd;
      *(undefined1 (*) [16])((long)puVar23 + -0x20) = auVar5;
      auVar9._8_4_ = in_XMM1_Dc;
      auVar9._0_8_ = UVar32.fields._8_8_;
      auVar9._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)puVar23 + -0x30) = auVar9;
      *(undefined8 *)((long)puVar23 + -0x38) = 0x41f2820;
      pCVar16 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      *(undefined8 *)((long)puVar23 + -0x38) = 0x41f2836;
      color.fields._8_8_ = *(undefined8 *)((long)puVar23 + -0x30);
      color.fields._0_8_ = *(undefined8 *)((long)puVar23 + -0x20);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar16,color,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar23 + -0x38) = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar24 + -8) = pUVar27;
    *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar24 + -0x10) = pUVar20;
    puVar25 = (undefined8 *)((long)puVar24 + -0x38);
    pUVar15 = pUVar19;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)((long)puVar24 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)((long)puVar24 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_03 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar14->fields).m_RenderHints;
    pUVar27 = pUVar14;
    if (__this_03 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)((long)puVar24 + -0x40) = 0x41f28a1;
      pUVar15 = MethodInfo_ITextSelection_get_textSelection;
      pUVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                          (__this_03,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
      if ((pUVar19 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
         (__this_03 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                       &(pUVar19->fields).
                        _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField
         , __this_03 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        *(undefined8 *)((long)puVar24 + -0x40) = 0x41f28c1;
        UVar32 = Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
        fVar31 = UVar32.fields.b;
        fVar30 = UVar32.fields.r;
        pUVar27 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar17 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar17->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar28 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar28) == TypeInfo_ITextSelection) {
                auVar34._8_8_ = pIVar4;
                auVar34._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar28) + 5);
                goto label_041f2937;
              }
              lVar28 = lVar28 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar28);
          }
          auVar6._8_4_ = extraout_XMM0_Dc_00;
          auVar6._0_8_ = UVar32.fields._0_8_;
          auVar6._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])((long)puVar24 + -0x28) = auVar6;
          auVar10._8_4_ = in_XMM1_Dc;
          auVar10._0_8_ = UVar32.fields._8_8_;
          auVar10._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])((long)puVar24 + -0x38) = auVar10;
          *(undefined8 *)((long)puVar24 + -0x40) = 0x41f2915;
          auVar34 = il2cpp_runtime_helper_02300d20(pUVar17,TypeInfo_ITextSelection,5);
          fVar31 = *(float *)((long)puVar24 + -0x38);
          fVar30 = *(float *)((long)puVar24 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar34._0_8_;
          (*UNRECOVERED_JUMPTABLE_00)
                    (fVar30,fVar31,pUVar17,auVar34._0_8_[1],auVar34._8_8_,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
    *(undefined8 *)((long)puVar24 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
  }
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar25 + -8) = pUVar19;
  puVar26 = (undefined8 *)((long)puVar25 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar25 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar25 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar20 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_03->fields).m_RenderHints;
  if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar25 + -0x30) = 0x41f2998;
    UVar32 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar20,MethodInfo_Color_get_cursorColor);
    auVar7._8_4_ = extraout_XMM0_Dc_01;
    auVar7._0_8_ = UVar32.fields._0_8_;
    auVar7._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar25 + -0x18) = auVar7;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._0_8_ = UVar32.fields._8_8_;
    auVar11._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar25 + -0x28) = auVar11;
    *(undefined8 *)((long)puVar25 + -0x30) = 0x41f29b0;
    pCVar16 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar25 + -0x30) = 0x41f29c6;
    UVar32.fields._8_8_ = *(undefined8 *)((long)puVar25 + -0x28);
    UVar32.fields._0_8_ = *(undefined8 *)((long)puVar25 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar16,UVar32,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar25 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -8) = pUVar27;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -0x10) = __this_03;
  pUVar27 = pUVar15;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar26 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar26 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar19 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar20->fields).m_RenderHints;
  if (pUVar19 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar26 + -0x40) = 0x41f2a31;
    pUVar27 = MethodInfo_ITextSelection_get_textSelection;
    pUVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                        (pUVar19,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pUVar15 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) &&
       (pUVar19 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                   &(pUVar15->fields).
                    _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
       pUVar19 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pUVar27 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      *(undefined8 *)((long)puVar26 + -0x40) = 0x41f2a51;
      UVar32 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar19,(MethodInfo *)0x0);
      fVar31 = UVar32.fields.b;
      fVar30 = UVar32.fields.r;
      pUVar20 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar17 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar17->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar28 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar28) == TypeInfo_ITextSelection) {
              auVar33._8_8_ = pIVar4;
              auVar33._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar28) + 3);
              goto label_041f2ac7;
            }
            lVar28 = lVar28 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar28);
        }
        auVar8._8_4_ = extraout_XMM0_Dc_02;
        auVar8._0_8_ = UVar32.fields._0_8_;
        auVar8._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar26 + -0x28) = auVar8;
        auVar12._8_4_ = in_XMM1_Dc;
        auVar12._0_8_ = UVar32.fields._8_8_;
        auVar12._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar26 + -0x38) = auVar12;
        *(undefined8 *)((long)puVar26 + -0x40) = 0x41f2aa5;
        auVar33 = il2cpp_runtime_helper_02300d20(pUVar17,TypeInfo_ITextSelection,3);
        fVar31 = *(float *)((long)puVar26 + -0x38);
        fVar30 = *(float *)((long)puVar26 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar33._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar30,fVar31,pUVar17,auVar33._0_8_[1],auVar33._8_8_,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  *(undefined8 *)((long)puVar26 + -0x40) = 0x41f2adf;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar26 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -0x48) = pUVar20;
  *(undefined8 *)((long)puVar26 + -0x50) = unaff_R12;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar26 + -0x58) = pUVar15;
  *(undefined8 *)((long)puVar26 + -0x60) = uVar18;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b4a;
  pCVar29 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pUVar27;
    *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this->fields,pUVar27);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar19->fields).m_RenderHints;
    *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  *(undefined8 *)((long)puVar26 + -0x68) = 0x41f2bb8;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar26 + -0x68) = uVar18;
  if (pCVar29[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar29[4].klass)->_1).image + 0x858))();
    return;
  }
  *(undefined8 *)((long)puVar26 + -0x70) = 0x41f2be3;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar26 + -0x70) = uVar18;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)((long)puVar26 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_4_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x4211c20

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_4_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar11;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar12;
  UnityEngine_UIElements_ITextSelection_o *pUVar13;
  undefined8 uVar14;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  System_String_o *pSVar15;
  UnityEngine_UIElements_TextField_o *pUVar16;
  UnityEngine_UIElements_TextField_o *pUVar17;
  UnityEngine_UIElements_TextField_o *pUVar18;
  long *plVar19;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar23;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *obj;
  MethodInfo_24EEB40 *obj_00;
  long lVar24;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar25;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar26;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar28;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar29;
  UnityEngine_Color_o color;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCStack_38;
  UnityEngine_UIElements_TextField_o *pUStack_30;
  undefined8 uStack_28;
  UnityEngine_UIElements_TextField_o *pUStack_20;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    pSVar15 = CustomLogic_CustomLogicTextFieldBuiltin__get_Label(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar15;
  }
  pUStack_20 = (UnityEngine_UIElements_TextField_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad91a == '\0') {
    uStack_28 = 0x4211c5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x4211c6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad91a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x4211c8a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x4211c9c;
  pUVar23 = MethodInfo_String_ConvertTo_String;
  pUVar18 = (UnityEngine_UIElements_TextField_o *)method;
  pUVar16 = (UnityEngine_UIElements_TextField_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_28 = 0x4211cba;
    auVar30 = il2cpp_runtime_helper_022b2c90();
    uStack_28 = auVar30._0_8_;
    if (pUVar18 != (UnityEngine_UIElements_TextField_o *)0x0) {
      pUVar17 = (UnityEngine_UIElements_TextField_o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__get_Value;
    }
    pUStack_30 = (UnityEngine_UIElements_TextField_o *)0x4211cd3;
    auStack_48._8_8_ = il2cpp_runtime_helper_022b2c90();
    pCStack_38 = __i;
    pUStack_30 = (UnityEngine_UIElements_TextField_o *)method;
    if (g_data_057ad91b == '\0') {
      auStack_48._0_8_ = 0x4211cff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      auStack_48._0_8_ = 0x4211d0b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      auStack_48._0_8_ = 0x4211d2a;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_48._0_8_ = 0x4211d3c;
    obj = MethodInfo_String_ConvertTo_String;
    pUVar26 = pUVar23;
    pUVar16 = (UnityEngine_UIElements_TextField_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar23,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    __i = pCStack_38;
    pUVar17 = pUVar16;
    method = (MethodInfo *)pUStack_30;
    if (pUVar18 != (UnityEngine_UIElements_TextField_o *)0x0)
    goto CustomLogic_CustomLogicTextFieldBuiltin__set_Value;
    auStack_48._0_8_ = 0x4211d5a;
    auStack_48._0_8_ = il2cpp_runtime_helper_022b2c90();
    if (pUVar26 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pCVar12 = CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                          ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar26,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar12;
    }
    auStack_58._8_8_ = 0x4211d73;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    auVar30._8_8_ = 0;
    auVar30._0_8_ = pUVar23;
    auStack_58 = auVar30 << 0x40;
    puVar21 = &uStack_60;
    if (g_data_057ad91c == '\0') {
      uStack_68 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_68 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_68 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = 0x4211ddc;
    obj_00 = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    pUVar23 = obj;
    pUVar17 = (UnityEngine_UIElements_TextField_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar26 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar20 = auStack_48;
      plVar19 = (long *)auStack_58._0_8_;
      method = (MethodInfo *)auStack_58._8_8_;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_68 = 0x4211dfa;
    uStack_68 = il2cpp_runtime_helper_022b2c90();
    if (pUVar23 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar18 = (UnityEngine_UIElements_TextField_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (pUVar23 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar11,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar11;
        pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar11);
        return pIVar11;
      }
      puVar22 = &uStack_68;
      __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pUVar18 = (UnityEngine_UIElements_TextField_o *)0x0;
    pUVar17 = (UnityEngine_UIElements_TextField_o *)0x0;
    __this_00 = pUVar23;
  }
  else {
    pUVar17 = pUVar16;
    pUStack_20 = pUVar16;
    if (g_data_057ad85f == '\0') {
      uStack_28 = 0x41f272f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label,pUVar16,0);
      g_data_057ad85f = '\x01';
    }
    pUVar18 = (__i->fields)._textField;
    if (pUVar18 != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar18,(System_String_o *)pUVar16,
                 MethodInfo_Void_set_label);
      return extraout_RAX;
    }
    uStack_28 = 0x41f275d;
    auVar30 = il2cpp_runtime_helper_022b2c90();
    method = (MethodInfo *)pUVar16;
CustomLogic_CustomLogicTextFieldBuiltin__get_Value:
    uStack_28 = auVar30._0_8_;
    pUVar18 = *(UnityEngine_UIElements_TextField_o **)&(pUVar18->fields).m_RenderHints;
    if (pUVar18 != (UnityEngine_UIElements_TextField_o *)0x0) {
      vtableDispatch = (pUVar18->klass->vtable)._105_get_value.methodPtr;
      pIVar11 = (Il2CppObject *)
                (*vtableDispatch)
                          (pUVar18,(pUVar18->klass->vtable)._105_get_value.method,auVar30._8_8_,
                           vtableDispatch);
      return pIVar11;
    }
    pUStack_30 = (UnityEngine_UIElements_TextField_o *)0x41f2783;
    pUVar16 = (UnityEngine_UIElements_TextField_o *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Value:
    plVar19 = *(long **)&(pUVar18->fields).m_RenderHints;
    pUStack_30 = pUVar16;
    if (plVar19 != (long *)0x0) {
      pIVar11 = (Il2CppObject *)(**(code **)(*plVar19 + 0x7d8))();
      return pIVar11;
    }
    pCStack_38 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x41f27b3;
    il2cpp_runtime_helper_022b2c90();
    puVar20 = auStack_58;
    pCStack_38 = __i;
    if (g_data_057ad860 == '\0') {
      uStack_60 = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      uStack_60 = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar26 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar19[0xc];
    if (pUVar26 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      uStack_60 = 0x41f2808;
      UVar29 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar26,MethodInfo_Color_get_selectionColor);
      auStack_48._8_4_ = extraout_XMM0_Dc;
      auStack_48._0_8_ = UVar29.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd;
      auStack_58._8_4_ = in_XMM1_Dc;
      auStack_58._0_8_ = UVar29.fields._8_8_;
      auStack_58._12_4_ = in_XMM1_Dd;
      uStack_60 = 0x41f2820;
      pCVar12 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar31 = auStack_48;
      auVar30 = auStack_58;
      uStack_60 = 0x41f2836;
      UVar29.fields.b = (float)auStack_58._0_4_;
      UVar29.fields.a = (float)auStack_58._4_4_;
      UVar29.fields.r = (float)auStack_48._0_4_;
      UVar29.fields.g = (float)auStack_48._4_4_;
      auStack_58 = auVar30;
      auStack_48 = auVar31;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar12,UVar29,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar12;
    }
    uStack_60 = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(MethodInfo **)(puVar20 + -8) = method;
    *(long **)(puVar20 + -0x10) = plVar19;
    puVar21 = (undefined8 *)(puVar20 + -0x38);
    pUVar18 = pUVar17;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)(puVar20 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)(puVar20 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_00 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar26->fields).m_RenderHints;
    obj = pUVar26;
    if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)(puVar20 + -0x40) = 0x41f28a1;
      pUVar18 = MethodInfo_ITextSelection_get_textSelection;
      pUVar13 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                          (__this_00,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
      if ((pUVar17 != (UnityEngine_UIElements_TextField_o *)0x0) &&
         (__this_00 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                       &(pUVar17->fields).
                        _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField
         , __this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pUVar18 = (UnityEngine_UIElements_TextField_o *)0x0;
        *(undefined8 *)(puVar20 + -0x40) = 0x41f28c1;
        UVar29 = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
        fVar28 = UVar29.fields.b;
        fVar27 = UVar29.fields.r;
        obj = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar13 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar13->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar24 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar24) == TypeInfo_ITextSelection) {
                auVar31._8_8_ = pIVar4;
                auVar31._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar24) + 5);
                goto label_041f2937;
              }
              lVar24 = lVar24 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar24);
          }
          auVar5._8_4_ = extraout_XMM0_Dc_00;
          auVar5._0_8_ = UVar29.fields._0_8_;
          auVar5._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])(puVar20 + -0x28) = auVar5;
          auVar8._8_4_ = in_XMM1_Dc;
          auVar8._0_8_ = UVar29.fields._8_8_;
          auVar8._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])(puVar20 + -0x38) = auVar8;
          *(undefined8 *)(puVar20 + -0x40) = 0x41f2915;
          auVar31 = il2cpp_runtime_helper_02300d20(pUVar13,TypeInfo_ITextSelection,5);
          fVar28 = *(float *)(puVar20 + -0x38);
          fVar27 = *(float *)(puVar20 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar31._0_8_;
          pIVar11 = (Il2CppObject *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (fVar27,fVar28,pUVar13,auVar31._0_8_[1],auVar31._8_8_,UNRECOVERED_JUMPTABLE_00);
          return pIVar11;
        }
      }
    }
    *(undefined8 *)(puVar20 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
  }
  *(UnityEngine_UIElements_TextField_o **)((long)puVar21 + -8) = pUVar17;
  puVar22 = (undefined8 *)((long)puVar21 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar21 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar21 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_00->fields).m_RenderHints;
  if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar21 + -0x30) = 0x41f2998;
    UVar29 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar23,MethodInfo_Color_get_cursorColor);
    auVar6._8_4_ = extraout_XMM0_Dc_01;
    auVar6._0_8_ = UVar29.fields._0_8_;
    auVar6._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar21 + -0x18) = auVar6;
    auVar9._8_4_ = in_XMM1_Dc;
    auVar9._0_8_ = UVar29.fields._8_8_;
    auVar9._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar21 + -0x28) = auVar9;
    *(undefined8 *)((long)puVar21 + -0x30) = 0x41f29b0;
    pCVar12 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar21 + -0x30) = 0x41f29c6;
    color.fields._8_8_ = *(undefined8 *)((long)puVar21 + -0x28);
    color.fields._0_8_ = *(undefined8 *)((long)puVar21 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar12,color,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar12;
  }
  *(undefined8 *)((long)puVar21 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar22 + -8) = obj;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar22 + -0x10) = __this_00;
  pUVar16 = pUVar18;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar22 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar22 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar26 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
  if (pUVar26 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar22 + -0x40) = 0x41f2a31;
    pUVar16 = MethodInfo_ITextSelection_get_textSelection;
    pUVar13 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                        (pUVar26,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pUVar18 != (UnityEngine_UIElements_TextField_o *)0x0) &&
       (pUVar26 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
                   &(pUVar18->fields).
                    _UnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCount_k__BackingField,
       pUVar26 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pUVar16 = (UnityEngine_UIElements_TextField_o *)0x0;
      *(undefined8 *)((long)puVar22 + -0x40) = 0x41f2a51;
      UVar29 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar26,(MethodInfo *)0x0);
      fVar28 = UVar29.fields.b;
      fVar27 = UVar29.fields.r;
      pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar13 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar13->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar24) == TypeInfo_ITextSelection) {
              auVar32._8_8_ = pIVar4;
              auVar32._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar24) + 3);
              goto label_041f2ac7;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar24);
        }
        auVar7._8_4_ = extraout_XMM0_Dc_02;
        auVar7._0_8_ = UVar29.fields._0_8_;
        auVar7._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar22 + -0x28) = auVar7;
        auVar10._8_4_ = in_XMM1_Dc;
        auVar10._0_8_ = UVar29.fields._8_8_;
        auVar10._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar22 + -0x38) = auVar10;
        *(undefined8 *)((long)puVar22 + -0x40) = 0x41f2aa5;
        auVar32 = il2cpp_runtime_helper_02300d20(pUVar13,TypeInfo_ITextSelection,3);
        fVar28 = *(float *)((long)puVar22 + -0x38);
        fVar27 = *(float *)((long)puVar22 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar32._0_8_;
        pIVar11 = (Il2CppObject *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (fVar27,fVar28,pUVar13,auVar32._0_8_[1],auVar32._8_8_,UNRECOVERED_JUMPTABLE_00);
        return pIVar11;
      }
    }
  }
  *(undefined8 *)((long)puVar22 + -0x40) = 0x41f2adf;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar22 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar22 + -0x48) = pUVar23;
  *(undefined8 *)((long)puVar22 + -0x50) = unaff_R12;
  *(UnityEngine_UIElements_TextField_o **)((long)puVar22 + -0x58) = pUVar18;
  *(undefined8 *)((long)puVar22 + -0x60) = uVar14;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b4a;
  pCVar25 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2bb8;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)puVar22 + -0x68) = uVar14;
    if (pCVar25[4].klass == (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
      *(undefined8 *)((long)puVar22 + -0x70) = 0x41f2be3;
      uVar14 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)puVar22 + -0x70) = uVar14;
      if (g_data_057ad865 == '\0') {
        *(undefined8 *)((long)puVar22 + -0x78) = 0x41f2c06;
        il2cpp_runtime_helper_023445d0(&"TextField");
        g_data_057ad865 = '\x01';
      }
      return "TextField";
    }
    pIVar11 = (Il2CppObject *)(**(code **)((long)((pCVar25[4].klass)->_1).image + 0x858))();
    return pIVar11;
  }
  (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pUVar16;
  *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b62;
  il2cpp_runtime_helper_022b4080(&__this->fields,pUVar16);
  control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar26->fields).m_RenderHints;
  *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b75;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
  *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2b8f;
  UnityEngine_UIElements_EventCallback_object____ctor();
  *(undefined8 *)((long)puVar22 + -0x68) = 0x41f2ba4;
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
            (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
  return (Il2CppObject *)pUVar26;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_4_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4211c40

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_4_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  CustomLogic_CustomLogicColorBuiltin_o *pCVar11;
  UnityEngine_UIElements_ITextSelection_o *pUVar12;
  undefined8 uVar13;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *in_RAX;
  MethodInfo_28EE4E0 *pMVar14;
  MethodInfo_28EE4E0 *pMVar15;
  Il2CppObject *__this_00;
  long *plVar16;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_01;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar20;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *obj;
  MethodInfo_24EEB40 *obj_00;
  long lVar21;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar22;
  UnityEngine_UIElements_TextField_o *__this_02;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar23;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar25;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar26;
  UnityEngine_Color_o color;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCStack_30;
  MethodInfo_28EE4E0 *pMStack_28;
  undefined8 uStack_20;
  MethodInfo_28EE4E0 *pMStack_18;
  
  pMStack_18 = in_RAX;
  if (g_data_057ad91a == '\0') {
    uStack_20 = 0x4211c5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x4211c6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad91a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x4211c8a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x4211c9c;
  pUVar20 = MethodInfo_String_ConvertTo_String;
  __this_02 = (UnityEngine_UIElements_TextField_o *)__v;
  pMVar14 = (MethodInfo_28EE4E0 *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    uStack_20 = 0x4211cba;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    uStack_20 = auVar27._0_8_;
    if (__this_02 != (UnityEngine_UIElements_TextField_o *)0x0) {
      pMVar15 = (MethodInfo_28EE4E0 *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__get_Value;
    }
    pMStack_28 = (MethodInfo_28EE4E0 *)0x4211cd3;
    auStack_40._8_8_ = il2cpp_runtime_helper_022b2c90();
    pCStack_30 = __i;
    pMStack_28 = (MethodInfo_28EE4E0 *)__v;
    if (g_data_057ad91b == '\0') {
      auStack_40._0_8_ = 0x4211cff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      auStack_40._0_8_ = 0x4211d0b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      auStack_40._0_8_ = 0x4211d2a;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_40._0_8_ = 0x4211d3c;
    obj = MethodInfo_String_ConvertTo_String;
    pUVar23 = pUVar20;
    pMVar14 = (MethodInfo_28EE4E0 *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pUVar20,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    __i = pCStack_30;
    pMVar15 = pMVar14;
    __v = (Il2CppObject *)pMStack_28;
    if (__this_02 != (UnityEngine_UIElements_TextField_o *)0x0)
    goto CustomLogic_CustomLogicTextFieldBuiltin__set_Value;
    auStack_40._0_8_ = 0x4211d5a;
    auStack_40._0_8_ = il2cpp_runtime_helper_022b2c90();
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar23,(MethodInfo *)0x0);
      return;
    }
    auStack_50._8_8_ = 0x4211d73;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    auVar27._8_8_ = 0;
    auVar27._0_8_ = pUVar20;
    auStack_50 = auVar27 << 0x40;
    puVar18 = &uStack_58;
    if (g_data_057ad91c == '\0') {
      uStack_60 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_60 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_60 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_60 = 0x4211ddc;
    obj_00 = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    pUVar20 = obj;
    pMVar15 = (MethodInfo_28EE4E0 *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar17 = auStack_40;
      plVar16 = (long *)auStack_50._0_8_;
      __v = (Il2CppObject *)auStack_50._8_8_;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_60 = 0x4211dfa;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    if (pUVar20 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar14 = (MethodInfo_28EE4E0 *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (pUVar20 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
        return;
      }
      puVar19 = &uStack_60;
      __this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pMVar14 = (MethodInfo_28EE4E0 *)0x0;
    pMVar15 = (MethodInfo_28EE4E0 *)0x0;
    __this_01 = pUVar20;
  }
  else {
    pMVar15 = pMVar14;
    pMStack_18 = pMVar14;
    if (g_data_057ad85f == '\0') {
      uStack_20 = 0x41f272f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label,pMVar14,0);
      g_data_057ad85f = '\x01';
    }
    __this_02 = (__i->fields)._textField;
    if (__this_02 != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_02,(System_String_o *)pMVar14,
                 MethodInfo_Void_set_label);
      return;
    }
    uStack_20 = 0x41f275d;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    __v = (Il2CppObject *)pMVar14;
CustomLogic_CustomLogicTextFieldBuiltin__get_Value:
    uStack_20 = auVar27._0_8_;
    __this_02 = *(UnityEngine_UIElements_TextField_o **)&(__this_02->fields).m_RenderHints;
    if (__this_02 != (UnityEngine_UIElements_TextField_o *)0x0) {
      vtableDispatch = (__this_02->klass->vtable)._105_get_value.methodPtr;
      (*vtableDispatch)
                (__this_02,(__this_02->klass->vtable)._105_get_value.method,auVar27._8_8_,
                 vtableDispatch);
      return;
    }
    pMStack_28 = (MethodInfo_28EE4E0 *)0x41f2783;
    pMVar14 = (MethodInfo_28EE4E0 *)il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Value:
    plVar16 = *(long **)&(__this_02->fields).m_RenderHints;
    pMStack_28 = pMVar14;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x7d8))();
      return;
    }
    pCStack_30 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x41f27b3;
    il2cpp_runtime_helper_022b2c90();
    puVar17 = auStack_50;
    pCStack_30 = __i;
    if (g_data_057ad860 == '\0') {
      uStack_58 = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      uStack_58 = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar16[0xc];
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      uStack_58 = 0x41f2808;
      UVar26 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar23,MethodInfo_Color_get_selectionColor);
      auStack_40._8_4_ = extraout_XMM0_Dc;
      auStack_40._0_8_ = UVar26.fields._0_8_;
      auStack_40._12_4_ = extraout_XMM0_Dd;
      auStack_50._8_4_ = in_XMM1_Dc;
      auStack_50._0_8_ = UVar26.fields._8_8_;
      auStack_50._12_4_ = in_XMM1_Dd;
      uStack_58 = 0x41f2820;
      pCVar11 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar28 = auStack_40;
      auVar27 = auStack_50;
      uStack_58 = 0x41f2836;
      UVar26.fields.b = (float)auStack_50._0_4_;
      UVar26.fields.a = (float)auStack_50._4_4_;
      UVar26.fields.r = (float)auStack_40._0_4_;
      UVar26.fields.g = (float)auStack_40._4_4_;
      auStack_50 = auVar27;
      auStack_40 = auVar28;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar11,UVar26,(MethodInfo *)0x0);
      return;
    }
    uStack_58 = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(Il2CppObject **)(puVar17 + -8) = __v;
    *(long **)(puVar17 + -0x10) = plVar16;
    puVar18 = (undefined8 *)(puVar17 + -0x38);
    pMVar14 = pMVar15;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)(puVar17 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)(puVar17 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_01 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    obj = pUVar23;
    if (__this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)(puVar17 + -0x40) = 0x41f28a1;
      pMVar14 = MethodInfo_ITextSelection_get_textSelection;
      pUVar12 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(__this_01,MethodInfo_ITextSelection_get_textSelection);
      if ((pMVar15 != (MethodInfo_28EE4E0 *)0x0) &&
         (__this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar15->parameters,
         __this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pMVar14 = (MethodInfo_28EE4E0 *)0x0;
        *(undefined8 *)(puVar17 + -0x40) = 0x41f28c1;
        UVar26 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
        fVar25 = UVar26.fields.b;
        fVar24 = UVar26.fields.r;
        obj = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar12 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar12->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar21 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar21) == TypeInfo_ITextSelection) {
                auVar28._8_8_ = pIVar4;
                auVar28._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar21) + 5);
                goto label_041f2937;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar21);
          }
          auVar5._8_4_ = extraout_XMM0_Dc_00;
          auVar5._0_8_ = UVar26.fields._0_8_;
          auVar5._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])(puVar17 + -0x28) = auVar5;
          auVar8._8_4_ = in_XMM1_Dc;
          auVar8._0_8_ = UVar26.fields._8_8_;
          auVar8._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])(puVar17 + -0x38) = auVar8;
          *(undefined8 *)(puVar17 + -0x40) = 0x41f2915;
          auVar28 = il2cpp_runtime_helper_02300d20(pUVar12,TypeInfo_ITextSelection,5);
          fVar25 = *(float *)(puVar17 + -0x38);
          fVar24 = *(float *)(puVar17 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar28._0_8_;
          (*UNRECOVERED_JUMPTABLE_00)
                    (fVar24,fVar25,pUVar12,auVar28._0_8_[1],auVar28._8_8_,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
    *(undefined8 *)(puVar17 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
  }
  *(MethodInfo_28EE4E0 **)((long)puVar18 + -8) = pMVar15;
  puVar19 = (undefined8 *)((long)puVar18 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar18 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar18 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar20 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_01->fields).m_RenderHints;
  if (pUVar20 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar18 + -0x30) = 0x41f2998;
    UVar26 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar20,MethodInfo_Color_get_cursorColor);
    auVar6._8_4_ = extraout_XMM0_Dc_01;
    auVar6._0_8_ = UVar26.fields._0_8_;
    auVar6._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar18 + -0x18) = auVar6;
    auVar9._8_4_ = in_XMM1_Dc;
    auVar9._0_8_ = UVar26.fields._8_8_;
    auVar9._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar18 + -0x28) = auVar9;
    *(undefined8 *)((long)puVar18 + -0x30) = 0x41f29b0;
    pCVar11 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar18 + -0x30) = 0x41f29c6;
    color.fields._8_8_ = *(undefined8 *)((long)puVar18 + -0x28);
    color.fields._0_8_ = *(undefined8 *)((long)puVar18 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar11,color,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar18 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar19 + -8) = obj;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar19 + -0x10) = __this_01;
  pMVar15 = pMVar14;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar19 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar19 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar20->fields).m_RenderHints;
  if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar19 + -0x40) = 0x41f2a31;
    pMVar15 = MethodInfo_ITextSelection_get_textSelection;
    pUVar12 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar23,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar14 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar14->parameters,
       pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar15 = (MethodInfo_28EE4E0 *)0x0;
      *(undefined8 *)((long)puVar19 + -0x40) = 0x41f2a51;
      UVar26 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar23,(MethodInfo *)0x0);
      fVar25 = UVar26.fields.b;
      fVar24 = UVar26.fields.r;
      pUVar20 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar12 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar12->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar21 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar21) == TypeInfo_ITextSelection) {
              auVar29._8_8_ = pIVar4;
              auVar29._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar21) + 3);
              goto label_041f2ac7;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar21);
        }
        auVar7._8_4_ = extraout_XMM0_Dc_02;
        auVar7._0_8_ = UVar26.fields._0_8_;
        auVar7._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar19 + -0x28) = auVar7;
        auVar10._8_4_ = in_XMM1_Dc;
        auVar10._0_8_ = UVar26.fields._8_8_;
        auVar10._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar19 + -0x38) = auVar10;
        *(undefined8 *)((long)puVar19 + -0x40) = 0x41f2aa5;
        auVar29 = il2cpp_runtime_helper_02300d20(pUVar12,TypeInfo_ITextSelection,3);
        fVar25 = *(float *)((long)puVar19 + -0x38);
        fVar24 = *(float *)((long)puVar19 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar29._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar24,fVar25,pUVar12,auVar29._0_8_[1],auVar29._8_8_,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  *(undefined8 *)((long)puVar19 + -0x40) = 0x41f2adf;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar19 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar19 + -0x48) = pUVar20;
  *(undefined8 *)((long)puVar19 + -0x50) = unaff_R12;
  *(MethodInfo_28EE4E0 **)((long)puVar19 + -0x58) = pMVar14;
  *(undefined8 *)((long)puVar19 + -0x60) = uVar13;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b4a;
  pCVar22 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2bb8;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)puVar19 + -0x68) = uVar13;
    if (pCVar22[4].klass == (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
      *(undefined8 *)((long)puVar19 + -0x70) = 0x41f2be3;
      uVar13 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)puVar19 + -0x70) = uVar13;
      if (g_data_057ad865 == '\0') {
        *(undefined8 *)((long)puVar19 + -0x78) = 0x41f2c06;
        il2cpp_runtime_helper_023445d0(&"TextField");
        g_data_057ad865 = '\x01';
      }
      return;
    }
    (**(code **)((long)((pCVar22[4].klass)->_1).image + 0x858))();
    return;
  }
  (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar15;
  *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b62;
  il2cpp_runtime_helper_022b4080(&__this->fields,pMVar15);
  control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar23->fields).m_RenderHints;
  *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b75;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
  *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2b8f;
  UnityEngine_UIElements_EventCallback_object____ctor();
  *(undefined8 *)((long)puVar19 + -0x68) = 0x41f2ba4;
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
            (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_5_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x4211cc0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_5_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  Il2CppObject *pIVar12;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar13;
  UnityEngine_UIElements_ITextSelection_o *pUVar14;
  undefined8 uVar15;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *pMVar16;
  MethodInfo_28EE4E0 *pMVar17;
  undefined8 in_RDX;
  UnityEngine_UIElements_TextField_o *pUVar18;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *obj;
  MethodInfo_24EEB40 *obj_00;
  long lVar22;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar23;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar24;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_01;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar26;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar27;
  UnityEngine_Color_o color;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    auStack_28._8_8_ = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad91b == '\0') {
      auStack_28._0_8_ = 0x4211cff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
      auStack_28._0_8_ = 0x4211d0b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91b = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      auStack_28._0_8_ = 0x4211d2a;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_28._0_8_ = 0x4211d3c;
    obj = MethodInfo_String_ConvertTo_String;
    pUVar24 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)method;
    pMVar16 = (MethodInfo_28EE4E0 *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((UnityEngine_UIElements_TextField_o *)__i != (UnityEngine_UIElements_TextField_o *)0x0)
    goto CustomLogic_CustomLogicTextFieldBuiltin__set_Value;
    auStack_28._0_8_ = 0x4211d5a;
    auStack_28._0_8_ = il2cpp_runtime_helper_022b2c90();
    if (pUVar24 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pCVar13 = CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                          ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar24,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar13;
    }
    auStack_38._8_8_ = 0x4211d73;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    auVar11._8_8_ = 0;
    auVar11._0_8_ = method;
    auStack_38 = auVar11 << 0x40;
    puVar20 = &uStack_40;
    if (g_data_057ad91c == '\0') {
      uStack_48 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_48 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_48 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_48 = 0x4211ddc;
    obj_00 = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    __this_01 = obj;
    pMVar16 = (MethodInfo_28EE4E0 *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar24 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar19 = auStack_28;
      pUVar18 = (UnityEngine_UIElements_TextField_o *)auStack_38._0_8_;
      unaff_R14 = auStack_38._8_8_;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_48 = 0x4211dfa;
    uStack_48 = il2cpp_runtime_helper_022b2c90();
    if (__this_01 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = (MethodInfo_28EE4E0 *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (__this_01 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar12,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar12;
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar12);
        return pIVar12;
      }
      puVar21 = &uStack_48;
      __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pMVar17 = (MethodInfo_28EE4E0 *)0x0;
    pMVar16 = (MethodInfo_28EE4E0 *)0x0;
    __this_00 = __this_01;
  }
  else {
    pMVar16 = (MethodInfo_28EE4E0 *)0x0;
    __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)(__i->fields)._textField;
    if ((UnityEngine_UIElements_TextField_o *)__i != (UnityEngine_UIElements_TextField_o *)0x0) {
      vtableDispatch =
           (((UnityEngine_UIElements_TextField_o *)__i)->klass->vtable)._105_get_value.methodPtr;
      pIVar12 = (Il2CppObject *)
                (*vtableDispatch)
                          (__i,(((UnityEngine_UIElements_TextField_o *)__i)->klass->vtable)._105_get_value.
                               method,in_RDX,vtableDispatch);
      return pIVar12;
    }
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_Value:
    pUVar18 = *(UnityEngine_UIElements_TextField_o **)
               &(((UnityEngine_UIElements_TextField_o *)__i)->fields).m_RenderHints;
    if (pUVar18 != (UnityEngine_UIElements_TextField_o *)0x0) {
      pIVar12 = (Il2CppObject *)(*(pUVar18->klass->vtable)._106_set_value.methodPtr)();
      return pIVar12;
    }
    il2cpp_runtime_helper_022b2c90();
    puVar19 = auStack_38;
    if (g_data_057ad860 == '\0') {
      uStack_40 = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      uStack_40 = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar24 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar18->fields).m_RenderHints;
    if (pUVar24 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      uStack_40 = 0x41f2808;
      UVar27 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar24,MethodInfo_Color_get_selectionColor);
      auStack_28._8_4_ = extraout_XMM0_Dc;
      auStack_28._0_8_ = UVar27.fields._0_8_;
      auStack_28._12_4_ = extraout_XMM0_Dd;
      auStack_38._8_4_ = in_XMM1_Dc;
      auStack_38._0_8_ = UVar27.fields._8_8_;
      auStack_38._12_4_ = in_XMM1_Dd;
      uStack_40 = 0x41f2820;
      pCVar13 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar28 = auStack_28;
      auVar11 = auStack_38;
      uStack_40 = 0x41f2836;
      UVar27.fields.b = (float)auStack_38._0_4_;
      UVar27.fields.a = (float)auStack_38._4_4_;
      UVar27.fields.r = (float)auStack_28._0_4_;
      UVar27.fields.g = (float)auStack_28._4_4_;
      auStack_38 = auVar11;
      auStack_28 = auVar28;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar13,UVar27,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar13;
    }
    uStack_40 = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(undefined8 *)(puVar19 + -8) = unaff_R14;
    *(UnityEngine_UIElements_TextField_o **)(puVar19 + -0x10) = pUVar18;
    puVar20 = (undefined8 *)(puVar19 + -0x38);
    pMVar17 = pMVar16;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)(puVar19 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)(puVar19 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_00 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar24->fields).m_RenderHints;
    obj = pUVar24;
    if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)(puVar19 + -0x40) = 0x41f28a1;
      pMVar17 = MethodInfo_ITextSelection_get_textSelection;
      pUVar14 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(__this_00,MethodInfo_ITextSelection_get_textSelection);
      if ((pMVar16 != (MethodInfo_28EE4E0 *)0x0) &&
         (__this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar16->parameters,
         __this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pMVar17 = (MethodInfo_28EE4E0 *)0x0;
        *(undefined8 *)(puVar19 + -0x40) = 0x41f28c1;
        UVar27 = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
        fVar26 = UVar27.fields.b;
        fVar25 = UVar27.fields.r;
        obj = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar14 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar14->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar22 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar22) == TypeInfo_ITextSelection) {
                auVar28._8_8_ = pIVar4;
                auVar28._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar22) + 5);
                goto label_041f2937;
              }
              lVar22 = lVar22 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar22);
          }
          auVar5._8_4_ = extraout_XMM0_Dc_00;
          auVar5._0_8_ = UVar27.fields._0_8_;
          auVar5._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])(puVar19 + -0x28) = auVar5;
          auVar8._8_4_ = in_XMM1_Dc;
          auVar8._0_8_ = UVar27.fields._8_8_;
          auVar8._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])(puVar19 + -0x38) = auVar8;
          *(undefined8 *)(puVar19 + -0x40) = 0x41f2915;
          auVar28 = il2cpp_runtime_helper_02300d20(pUVar14,TypeInfo_ITextSelection,5);
          fVar26 = *(float *)(puVar19 + -0x38);
          fVar25 = *(float *)(puVar19 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar28._0_8_;
          pIVar12 = (Il2CppObject *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (fVar25,fVar26,pUVar14,auVar28._0_8_[1],auVar28._8_8_,UNRECOVERED_JUMPTABLE_00);
          return pIVar12;
        }
      }
    }
    *(undefined8 *)(puVar19 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
  }
  *(MethodInfo_28EE4E0 **)((long)puVar20 + -8) = pMVar16;
  puVar21 = (undefined8 *)((long)puVar20 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar20 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar20 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  __this_01 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_00->fields).m_RenderHints;
  if (__this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar20 + -0x30) = 0x41f2998;
    UVar27 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(__this_01,MethodInfo_Color_get_cursorColor);
    auVar6._8_4_ = extraout_XMM0_Dc_01;
    auVar6._0_8_ = UVar27.fields._0_8_;
    auVar6._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar20 + -0x18) = auVar6;
    auVar9._8_4_ = in_XMM1_Dc;
    auVar9._0_8_ = UVar27.fields._8_8_;
    auVar9._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar20 + -0x28) = auVar9;
    *(undefined8 *)((long)puVar20 + -0x30) = 0x41f29b0;
    pCVar13 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar20 + -0x30) = 0x41f29c6;
    color.fields._8_8_ = *(undefined8 *)((long)puVar20 + -0x28);
    color.fields._0_8_ = *(undefined8 *)((long)puVar20 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar13,color,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar13;
  }
  *(undefined8 *)((long)puVar20 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar21 + -8) = obj;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar21 + -0x10) = __this_00;
  pMVar16 = pMVar17;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar21 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar21 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar24 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_01->fields).m_RenderHints;
  if (pUVar24 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar21 + -0x40) = 0x41f2a31;
    pMVar16 = MethodInfo_ITextSelection_get_textSelection;
    pUVar14 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar24,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar17 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar24 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar17->parameters,
       pUVar24 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar16 = (MethodInfo_28EE4E0 *)0x0;
      *(undefined8 *)((long)puVar21 + -0x40) = 0x41f2a51;
      UVar27 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar24,(MethodInfo *)0x0);
      fVar26 = UVar27.fields.b;
      fVar25 = UVar27.fields.r;
      __this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar14 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar14->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar22 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar22) == TypeInfo_ITextSelection) {
              auVar29._8_8_ = pIVar4;
              auVar29._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar22) + 3);
              goto label_041f2ac7;
            }
            lVar22 = lVar22 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar22);
        }
        auVar7._8_4_ = extraout_XMM0_Dc_02;
        auVar7._0_8_ = UVar27.fields._0_8_;
        auVar7._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar21 + -0x28) = auVar7;
        auVar10._8_4_ = in_XMM1_Dc;
        auVar10._0_8_ = UVar27.fields._8_8_;
        auVar10._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar21 + -0x38) = auVar10;
        *(undefined8 *)((long)puVar21 + -0x40) = 0x41f2aa5;
        auVar29 = il2cpp_runtime_helper_02300d20(pUVar14,TypeInfo_ITextSelection,3);
        fVar26 = *(float *)((long)puVar21 + -0x38);
        fVar25 = *(float *)((long)puVar21 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar29._0_8_;
        pIVar12 = (Il2CppObject *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (fVar25,fVar26,pUVar14,auVar29._0_8_[1],auVar29._8_8_,UNRECOVERED_JUMPTABLE_00);
        return pIVar12;
      }
    }
  }
  *(undefined8 *)((long)puVar21 + -0x40) = 0x41f2adf;
  uVar15 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar21 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar21 + -0x48) = __this_01;
  *(undefined8 *)((long)puVar21 + -0x50) = unaff_R12;
  *(MethodInfo_28EE4E0 **)((long)puVar21 + -0x58) = pMVar17;
  *(undefined8 *)((long)puVar21 + -0x60) = uVar15;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b4a;
  pCVar23 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2bb8;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)puVar21 + -0x68) = uVar15;
    if (pCVar23[4].klass == (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
      *(undefined8 *)((long)puVar21 + -0x70) = 0x41f2be3;
      uVar15 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)puVar21 + -0x70) = uVar15;
      if (g_data_057ad865 == '\0') {
        *(undefined8 *)((long)puVar21 + -0x78) = 0x41f2c06;
        il2cpp_runtime_helper_023445d0(&"TextField");
        g_data_057ad865 = '\x01';
      }
      return "TextField";
    }
    pIVar12 = (Il2CppObject *)(**(code **)((long)((pCVar23[4].klass)->_1).image + 0x858))();
    return pIVar12;
  }
  (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar16;
  *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b62;
  il2cpp_runtime_helper_022b4080(&__this->fields,pMVar16);
  control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar24->fields).m_RenderHints;
  *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b75;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
  *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2b8f;
  UnityEngine_UIElements_EventCallback_object____ctor();
  *(undefined8 *)((long)puVar21 + -0x68) = 0x41f2ba4;
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
            (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
  return (Il2CppObject *)pUVar24;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_5_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4211ce0

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_5_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  CustomLogic_CustomLogicColorBuiltin_o *pCVar12;
  UnityEngine_UIElements_ITextSelection_o *pUVar13;
  undefined8 uVar14;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *pMVar15;
  MethodInfo_28EE4E0 *pMVar16;
  Il2CppObject *__this_00;
  UnityEngine_UIElements_TextField_o *pUVar17;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_01;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *obj;
  MethodInfo_24EEB40 *obj_00;
  long lVar21;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar22;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar23;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_02;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar25;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar26;
  UnityEngine_Color_o color;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  if (g_data_057ad91b == '\0') {
    auStack_20._0_8_ = 0x4211cff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    auStack_20._0_8_ = 0x4211d0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad91b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_20._0_8_ = 0x4211d2a;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_20._0_8_ = 0x4211d3c;
  obj = MethodInfo_String_ConvertTo_String;
  pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)__v;
  pMVar15 = (MethodInfo_28EE4E0 *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    auStack_20._0_8_ = 0x4211d5a;
    auStack_20._0_8_ = il2cpp_runtime_helper_022b2c90();
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
                ((CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar23,(MethodInfo *)0x0);
      return;
    }
    auStack_30._8_8_ = 0x4211d73;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    auVar11._8_8_ = 0;
    auVar11._0_8_ = __v;
    auStack_30 = auVar11 << 0x40;
    puVar19 = &uStack_38;
    if (g_data_057ad91c == '\0') {
      uStack_40 = 0x4211d9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      uStack_40 = 0x4211dab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91c = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x4211dca;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x4211ddc;
    obj_00 = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
    __this_02 = obj;
    pMVar15 = (MethodInfo_28EE4E0 *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      puVar18 = auStack_20;
      pUVar17 = (UnityEngine_UIElements_TextField_o *)auStack_30._0_8_;
      unaff_R14 = auStack_30._8_8_;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor;
    }
    uStack_40 = 0x4211dfa;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if (__this_02 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar16 = (MethodInfo_28EE4E0 *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (__this_02 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
        return;
      }
      puVar20 = &uStack_40;
      __this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pMVar16 = (MethodInfo_28EE4E0 *)0x0;
    pMVar15 = (MethodInfo_28EE4E0 *)0x0;
    __this_01 = __this_02;
  }
  else {
    pUVar17 = (__i->fields)._textField;
    if (pUVar17 != (UnityEngine_UIElements_TextField_o *)0x0) {
      vtableDispatch = (pUVar17->klass->vtable)._106_set_value.methodPtr;
      (*vtableDispatch)
                (pUVar17,pMVar15,(pUVar17->klass->vtable)._106_set_value.method,vtableDispatch);
      return;
    }
    il2cpp_runtime_helper_022b2c90(0,pMVar15,0);
    puVar18 = auStack_30;
    if (g_data_057ad860 == '\0') {
      uStack_38 = 0x41f27dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      uStack_38 = 0x41f27e9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
      g_data_057ad860 = '\x01';
    }
    pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar17->fields).m_RenderHints;
    if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      uStack_38 = 0x41f2808;
      UVar26 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar23,MethodInfo_Color_get_selectionColor);
      auStack_20._8_4_ = extraout_XMM0_Dc;
      auStack_20._0_8_ = UVar26.fields._0_8_;
      auStack_20._12_4_ = extraout_XMM0_Dd;
      auStack_30._8_4_ = in_XMM1_Dc;
      auStack_30._0_8_ = UVar26.fields._8_8_;
      auStack_30._12_4_ = in_XMM1_Dd;
      uStack_38 = 0x41f2820;
      pCVar12 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar28 = auStack_20;
      auVar11 = auStack_30;
      uStack_38 = 0x41f2836;
      color.fields.b = (float)auStack_30._0_4_;
      color.fields.a = (float)auStack_30._4_4_;
      color.fields.r = (float)auStack_20._0_4_;
      color.fields.g = (float)auStack_20._4_4_;
      auStack_30 = auVar11;
      auStack_20 = auVar28;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar12,color,(MethodInfo *)0x0);
      return;
    }
    uStack_38 = 0x41f2844;
    il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor:
    *(undefined8 *)(puVar18 + -8) = unaff_R14;
    *(UnityEngine_UIElements_TextField_o **)(puVar18 + -0x10) = pUVar17;
    puVar19 = (undefined8 *)(puVar18 + -0x38);
    pMVar16 = pMVar15;
    if (g_data_057ad861 == '\0') {
      *(undefined8 *)(puVar18 + -0x40) = 0x41f2872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
      *(undefined8 *)(puVar18 + -0x40) = 0x41f287e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    __this_01 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar23->fields).m_RenderHints;
    if (__this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      *(undefined8 *)(puVar18 + -0x40) = 0x41f28a1;
      pMVar16 = MethodInfo_ITextSelection_get_textSelection;
      pUVar13 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(__this_01,MethodInfo_ITextSelection_get_textSelection);
      if ((pMVar15 != (MethodInfo_28EE4E0 *)0x0) &&
         (__this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar15->parameters,
         __this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pMVar16 = (MethodInfo_28EE4E0 *)0x0;
        *(undefined8 *)(puVar18 + -0x40) = 0x41f28c1;
        UVar26 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
        fVar25 = UVar26.fields.b;
        fVar24 = UVar26.fields.r;
        pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
        if (pUVar13 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar13->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar21 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar21) == TypeInfo_ITextSelection) {
                auVar27._8_8_ = pIVar4;
                auVar27._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar21) + 5);
                goto label_041f2937;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar21);
          }
          auVar5._8_4_ = extraout_XMM0_Dc_00;
          auVar5._0_8_ = UVar26.fields._0_8_;
          auVar5._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])(puVar18 + -0x28) = auVar5;
          auVar8._8_4_ = in_XMM1_Dc;
          auVar8._0_8_ = UVar26.fields._8_8_;
          auVar8._12_4_ = in_XMM1_Dd;
          *(undefined1 (*) [16])(puVar18 + -0x38) = auVar8;
          *(undefined8 *)(puVar18 + -0x40) = 0x41f2915;
          auVar27 = il2cpp_runtime_helper_02300d20(pUVar13,TypeInfo_ITextSelection,5);
          fVar25 = *(float *)(puVar18 + -0x38);
          fVar24 = *(float *)(puVar18 + -0x28);
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar27._0_8_;
          (*UNRECOVERED_JUMPTABLE_00)
                    (fVar24,fVar25,pUVar13,auVar27._0_8_[1],auVar27._8_8_,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
    *(undefined8 *)(puVar18 + -0x40) = 0x41f294f;
    il2cpp_runtime_helper_022b2c90();
    obj = pUVar23;
  }
  *(MethodInfo_28EE4E0 **)((long)puVar19 + -8) = pMVar15;
  puVar20 = (undefined8 *)((long)puVar19 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar19 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar19 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  __this_02 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_01->fields).m_RenderHints;
  if (__this_02 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar19 + -0x30) = 0x41f2998;
    UVar26 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(__this_02,MethodInfo_Color_get_cursorColor);
    auVar6._8_4_ = extraout_XMM0_Dc_01;
    auVar6._0_8_ = UVar26.fields._0_8_;
    auVar6._12_4_ = extraout_XMM0_Dd_01;
    *(undefined1 (*) [16])((long)puVar19 + -0x18) = auVar6;
    auVar9._8_4_ = in_XMM1_Dc;
    auVar9._0_8_ = UVar26.fields._8_8_;
    auVar9._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar19 + -0x28) = auVar9;
    *(undefined8 *)((long)puVar19 + -0x30) = 0x41f29b0;
    pCVar12 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar19 + -0x30) = 0x41f29c6;
    UVar26.fields._8_8_ = *(undefined8 *)((long)puVar19 + -0x28);
    UVar26.fields._0_8_ = *(undefined8 *)((long)puVar19 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar12,UVar26,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar19 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar20 + -8) = obj;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar20 + -0x10) = __this_01;
  pMVar15 = pMVar16;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)((long)puVar20 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)((long)puVar20 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar23 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_02->fields).m_RenderHints;
  if (pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar20 + -0x40) = 0x41f2a31;
    pMVar15 = MethodInfo_ITextSelection_get_textSelection;
    pUVar13 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar23,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar16 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar23 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar16->parameters,
       pUVar23 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar15 = (MethodInfo_28EE4E0 *)0x0;
      *(undefined8 *)((long)puVar20 + -0x40) = 0x41f2a51;
      UVar26 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar23,(MethodInfo *)0x0);
      fVar25 = UVar26.fields.b;
      fVar24 = UVar26.fields.r;
      __this_02 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar13 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar13->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar21 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar21) == TypeInfo_ITextSelection) {
              auVar28._8_8_ = pIVar4;
              auVar28._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar21) + 3);
              goto label_041f2ac7;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar21);
        }
        auVar7._8_4_ = extraout_XMM0_Dc_02;
        auVar7._0_8_ = UVar26.fields._0_8_;
        auVar7._12_4_ = extraout_XMM0_Dd_02;
        *(undefined1 (*) [16])((long)puVar20 + -0x28) = auVar7;
        auVar10._8_4_ = in_XMM1_Dc;
        auVar10._0_8_ = UVar26.fields._8_8_;
        auVar10._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])((long)puVar20 + -0x38) = auVar10;
        *(undefined8 *)((long)puVar20 + -0x40) = 0x41f2aa5;
        auVar28 = il2cpp_runtime_helper_02300d20(pUVar13,TypeInfo_ITextSelection,3);
        fVar25 = *(float *)((long)puVar20 + -0x38);
        fVar24 = *(float *)((long)puVar20 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar28._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar24,fVar25,pUVar13,auVar28._0_8_[1],auVar28._8_8_,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  *(undefined8 *)((long)puVar20 + -0x40) = 0x41f2adf;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar20 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)((long)puVar20 + -0x48) = __this_02;
  *(undefined8 *)((long)puVar20 + -0x50) = unaff_R12;
  *(MethodInfo_28EE4E0 **)((long)puVar20 + -0x58) = pMVar16;
  *(undefined8 *)((long)puVar20 + -0x60) = uVar14;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b4a;
  pCVar22 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar15;
    *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this->fields,pMVar15);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar23->fields).m_RenderHints;
    *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  *(undefined8 *)((long)puVar20 + -0x68) = 0x41f2bb8;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar20 + -0x68) = uVar14;
  if (pCVar22[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar22[4].klass)->_1).image + 0x858))();
    return;
  }
  *(undefined8 *)((long)puVar20 + -0x70) = 0x41f2be3;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar20 + -0x70) = uVar14;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)((long)puVar20 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____getter_6_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x4211d60

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____getter_6_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_UIElements_ITextSelection_o *pUVar9;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar12;
  MethodInfo_28EE4E0 *pMVar13;
  MethodInfo_28EE4E0 *pMVar14;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  MethodInfo_24EEB40 *obj;
  long lVar18;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar19;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar20;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 auStack_e0 [8];
  float afStack_a0 [10];
  undefined8 auStack_78 [7];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    pCVar12 = CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar12;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  puVar16 = &uStack_20;
  if (g_data_057ad91c == '\0') {
    auStack_30._8_8_ = 0x4211d9f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    auStack_30._8_8_ = 0x4211dab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad91c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_30._8_8_ = 0x4211dca;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_30._8_8_ = 0x4211ddc;
  obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)method;
  pMVar13 = (MethodInfo_28EE4E0 *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if ((UnityEngine_UIElements_TextInputBaseField_TValueType__o *)__i ==
      (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    auStack_30._8_8_ = 0x4211dfa;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    auStack_30._8_8_ = uVar11;
    if (__this_00 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      auStack_30._0_8_ = 0x4211e13;
      auStack_40._0_8_ = il2cpp_runtime_helper_022b2c90();
      auStack_30._0_8_ = method;
      auStack_40._8_8_ = 0;
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar14 = (MethodInfo_28EE4E0 *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (__this_00 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar10,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar10;
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar10);
        return pIVar10;
      }
      puVar17 = auStack_30 + 8;
      pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)auStack_40._8_8_;
      __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)auStack_30._0_8_;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pMVar14 = (MethodInfo_28EE4E0 *)0x0;
    pMVar13 = (MethodInfo_28EE4E0 *)0x0;
    pUVar15 = __this_00;
    __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)method;
  }
  else {
    puVar16 = (undefined8 *)auStack_40;
    pMVar14 = pMVar13;
    if (g_data_057ad861 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection,pMVar13,0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    pUVar15 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
               &(((UnityEngine_UIElements_TextInputBaseField_TValueType__o *)__i)->fields).m_RenderHints;
    if (pUVar15 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pMVar14 = MethodInfo_ITextSelection_get_textSelection;
      pUVar9 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar15,MethodInfo_ITextSelection_get_textSelection);
      if ((pMVar13 != (MethodInfo_28EE4E0 *)0x0) &&
         (pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar13->parameters,
         pUVar15 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pMVar14 = (MethodInfo_28EE4E0 *)0x0;
        UVar22 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar15,(MethodInfo *)0x0);
        fVar21 = UVar22.fields.b;
        fVar20 = UVar22.fields.r;
        __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0;
        if (pUVar9 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar9->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar18 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar18) == TypeInfo_ITextSelection) {
                auVar23._8_8_ = pIVar4;
                auVar23._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar18) + 5);
                goto label_041f2937;
              }
              lVar18 = lVar18 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar18);
          }
          auStack_30._8_4_ = extraout_XMM0_Dc;
          auStack_30._0_8_ = UVar22.fields._0_8_;
          auStack_30._12_4_ = extraout_XMM0_Dd;
          auStack_40._8_4_ = in_XMM1_Dc;
          auStack_40._0_8_ = UVar22.fields._8_8_;
          auStack_40._12_4_ = in_XMM1_Dd;
          auVar23 = il2cpp_runtime_helper_02300d20(pUVar9,TypeInfo_ITextSelection,5);
          fVar20 = (float)auStack_30._0_4_;
          fVar21 = (float)auStack_40._0_4_;
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar23._0_8_;
          pIVar10 = (Il2CppObject *)
                    (*UNRECOVERED_JUMPTABLE_00)
                              (fVar20,fVar21,pUVar9,auVar23._0_8_[1],auVar23._8_8_,UNRECOVERED_JUMPTABLE_00);
          return pIVar10;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  *(MethodInfo_28EE4E0 **)((long)puVar16 + -8) = pMVar13;
  puVar17 = (undefined1 *)((long)puVar16 + -0x28);
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)((long)puVar16 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar16 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  __this_00 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar15->fields).m_RenderHints;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)((long)puVar16 + -0x30) = 0x41f2998;
    UVar22 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(__this_00,MethodInfo_Color_get_cursorColor);
    auVar5._8_4_ = extraout_XMM0_Dc_00;
    auVar5._0_8_ = UVar22.fields._0_8_;
    auVar5._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])((long)puVar16 + -0x18) = auVar5;
    auVar7._8_4_ = in_XMM1_Dc;
    auVar7._0_8_ = UVar22.fields._8_8_;
    auVar7._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])((long)puVar16 + -0x28) = auVar7;
    *(undefined8 *)((long)puVar16 + -0x30) = 0x41f29b0;
    pCVar12 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)((long)puVar16 + -0x30) = 0x41f29c6;
    UVar22.fields._8_8_ = *(undefined8 *)((long)puVar16 + -0x28);
    UVar22.fields._0_8_ = *(undefined8 *)((long)puVar16 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar12,UVar22,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar12;
  }
  *(undefined8 *)((long)puVar16 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(CustomLogic_CustomLogicTextFieldBuiltin_o **)(puVar17 + -8) = __i;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)(puVar17 + -0x10) = pUVar15;
  pMVar13 = pMVar14;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)(puVar17 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)(puVar17 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar15 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_00->fields).m_RenderHints;
  if (pUVar15 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)(puVar17 + -0x40) = 0x41f2a31;
    pMVar13 = MethodInfo_ITextSelection_get_textSelection;
    pUVar9 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar15,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar14 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar15 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar14->parameters,
       pUVar15 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar13 = (MethodInfo_28EE4E0 *)0x0;
      *(undefined8 *)(puVar17 + -0x40) = 0x41f2a51;
      UVar22 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar15,(MethodInfo *)0x0);
      fVar20 = UVar22.fields.b;
      fVar21 = UVar22.fields.r;
      __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar9 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar9->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar18) == TypeInfo_ITextSelection) {
              auVar24._8_8_ = pIVar4;
              auVar24._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar18) + 3);
              goto label_041f2ac7;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar18);
        }
        auVar6._8_4_ = extraout_XMM0_Dc_01;
        auVar6._0_8_ = UVar22.fields._0_8_;
        auVar6._12_4_ = extraout_XMM0_Dd_01;
        *(undefined1 (*) [16])(puVar17 + -0x28) = auVar6;
        auVar8._8_4_ = in_XMM1_Dc;
        auVar8._0_8_ = UVar22.fields._8_8_;
        auVar8._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])(puVar17 + -0x38) = auVar8;
        *(undefined8 *)(puVar17 + -0x40) = 0x41f2aa5;
        auVar24 = il2cpp_runtime_helper_02300d20(pUVar9,TypeInfo_ITextSelection,3);
        fVar20 = *(float *)(puVar17 + -0x38);
        fVar21 = *(float *)(puVar17 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar24._0_8_;
        pIVar10 = (Il2CppObject *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (fVar21,fVar20,pUVar9,auVar24._0_8_[1],auVar24._8_8_,UNRECOVERED_JUMPTABLE_00);
        return pIVar10;
      }
    }
  }
  *(undefined8 *)(puVar17 + -0x40) = 0x41f2adf;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar17 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)(puVar17 + -0x48) = __this_00;
  *(undefined8 *)(puVar17 + -0x50) = unaff_R12;
  *(MethodInfo_28EE4E0 **)(puVar17 + -0x58) = pMVar14;
  *(undefined8 *)(puVar17 + -0x60) = uVar11;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)(puVar17 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)(puVar17 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)(puVar17 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)(puVar17 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)(puVar17 + -0x68) = 0x41f2b3d;
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  *(undefined8 *)(puVar17 + -0x68) = 0x41f2b4a;
  pCVar19 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar13;
    *(undefined8 *)(puVar17 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this->fields,pMVar13);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar15->fields).m_RenderHints;
    *(undefined8 *)(puVar17 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)(puVar17 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)(puVar17 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (Il2CppObject *)pUVar15;
  }
  *(undefined8 *)(puVar17 + -0x68) = 0x41f2bb8;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar17 + -0x68) = uVar11;
  if (pCVar19[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pIVar10 = (Il2CppObject *)(**(code **)((long)((pCVar19[4].klass)->_1).image + 0x858))();
    return pIVar10;
  }
  *(undefined8 *)(puVar17 + -0x70) = 0x41f2be3;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar17 + -0x70) = uVar11;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)(puVar17 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____setter_6_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4211d80

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____setter_6_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_UIElements_ITextSelection_o *pUVar9;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  undefined8 uVar10;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *pMVar11;
  MethodInfo_28EE4E0 *pMVar12;
  Il2CppObject *__this_01;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  MethodInfo_24EEB40 *obj;
  long lVar16;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar17;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_02;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar18;
  float fVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_d8 [8];
  float afStack_98 [10];
  undefined8 auStack_70 [7];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  
  puVar14 = auStack_18;
  if (g_data_057ad91c == '\0') {
    auStack_28._8_8_ = 0x4211d9f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    auStack_28._8_8_ = 0x4211dab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad91c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    auStack_28._8_8_ = 0x4211dca;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_28._8_8_ = 0x4211ddc;
  obj = MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
  __this_02 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)__v;
  pMVar11 = (MethodInfo_28EE4E0 *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    auStack_28._8_8_ = 0x4211dfa;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    auStack_28._8_8_ = uVar10;
    if (__this_02 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      auStack_28._0_8_ = 0x4211e13;
      auStack_38._0_8_ = il2cpp_runtime_helper_022b2c90();
      auStack_28._0_8_ = __v;
      auStack_38._8_8_ = 0;
      if (g_data_057ad91d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad91d = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar12 = (MethodInfo_28EE4E0 *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (__this_02 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad91e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad91e = '\x01';
        }
        __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
        return;
      }
      puVar15 = auStack_28 + 8;
      pUVar13 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)auStack_38._8_8_;
      __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)auStack_28._0_8_;
      goto CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor;
    }
    pMVar12 = (MethodInfo_28EE4E0 *)0x0;
    pMVar11 = (MethodInfo_28EE4E0 *)0x0;
    pUVar13 = __this_02;
    __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)__v;
  }
  else {
    puVar14 = auStack_38;
    pMVar12 = pMVar11;
    if (g_data_057ad861 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection,pMVar11,0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
      g_data_057ad861 = '\x01';
    }
    pUVar13 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (pUVar13 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      pMVar12 = MethodInfo_ITextSelection_get_textSelection;
      pUVar9 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar13,MethodInfo_ITextSelection_get_textSelection);
      if ((pMVar11 != (MethodInfo_28EE4E0 *)0x0) &&
         (pUVar13 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar11->parameters,
         pUVar13 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
        pMVar12 = (MethodInfo_28EE4E0 *)0x0;
        UVar20 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar13,(MethodInfo *)0x0);
        fVar19 = UVar20.fields.b;
        fVar18 = UVar20.fields.r;
        __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0;
        if (pUVar9 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
          pUVar3 = pUVar9->klass;
          uVar1._0_1_ = (pUVar3->_2).rank;
          uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pUVar3->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar16) == TypeInfo_ITextSelection) {
                auVar21._8_8_ = pIVar4;
                auVar21._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar16) + 5);
                goto label_041f2937;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar16);
          }
          auStack_28._8_4_ = extraout_XMM0_Dc;
          auStack_28._0_8_ = UVar20.fields._0_8_;
          auStack_28._12_4_ = extraout_XMM0_Dd;
          auStack_38._8_4_ = in_XMM1_Dc;
          auStack_38._0_8_ = UVar20.fields._8_8_;
          auStack_38._12_4_ = in_XMM1_Dd;
          auVar21 = il2cpp_runtime_helper_02300d20(pUVar9,TypeInfo_ITextSelection,5);
          fVar18 = (float)auStack_28._0_4_;
          fVar19 = (float)auStack_38._0_4_;
label_041f2937:
          UNRECOVERED_JUMPTABLE_00 = (code *)*auVar21._0_8_;
          (*UNRECOVERED_JUMPTABLE_00)
                    (fVar18,fVar19,pUVar9,auVar21._0_8_[1],auVar21._8_8_,UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  *(MethodInfo_28EE4E0 **)(puVar14 + -8) = pMVar11;
  puVar15 = puVar14 + -0x28;
  if (g_data_057ad862 == '\0') {
    *(undefined8 *)(puVar14 + -0x30) = 0x41f296d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)(puVar14 + -0x30) = 0x41f2979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  __this_02 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar13->fields).m_RenderHints;
  if (__this_02 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)(puVar14 + -0x30) = 0x41f2998;
    UVar20 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(__this_02,MethodInfo_Color_get_cursorColor);
    auVar5._8_4_ = extraout_XMM0_Dc_00;
    auVar5._0_8_ = UVar20.fields._0_8_;
    auVar5._12_4_ = extraout_XMM0_Dd_00;
    *(undefined1 (*) [16])(puVar14 + -0x18) = auVar5;
    auVar7._8_4_ = in_XMM1_Dc;
    auVar7._0_8_ = UVar20.fields._8_8_;
    auVar7._12_4_ = in_XMM1_Dd;
    *(undefined1 (*) [16])(puVar14 + -0x28) = auVar7;
    *(undefined8 *)(puVar14 + -0x30) = 0x41f29b0;
    __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    *(undefined8 *)(puVar14 + -0x30) = 0x41f29c6;
    UVar20.fields._8_8_ = *(undefined8 *)(puVar14 + -0x28);
    UVar20.fields._0_8_ = *(undefined8 *)(puVar14 + -0x18);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,UVar20,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar14 + -0x30) = 0x41f29d4;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor:
  *(CustomLogic_CustomLogicTextFieldBuiltin_o **)(puVar15 + -8) = __i;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)(puVar15 + -0x10) = pUVar13;
  pMVar11 = pMVar12;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)(puVar15 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)(puVar15 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar13 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(__this_02->fields).m_RenderHints;
  if (pUVar13 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)(puVar15 + -0x40) = 0x41f2a31;
    pMVar11 = MethodInfo_ITextSelection_get_textSelection;
    pUVar9 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar13,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar12 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar13 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar12->parameters,
       pUVar13 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar11 = (MethodInfo_28EE4E0 *)0x0;
      *(undefined8 *)(puVar15 + -0x40) = 0x41f2a51;
      UVar20 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar13,(MethodInfo *)0x0);
      fVar18 = UVar20.fields.b;
      fVar19 = UVar20.fields.r;
      __this_02 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0;
      if (pUVar9 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar9->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar16) == TypeInfo_ITextSelection) {
              auVar22._8_8_ = pIVar4;
              auVar22._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar16) + 3);
              goto label_041f2ac7;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar16);
        }
        auVar6._8_4_ = extraout_XMM0_Dc_01;
        auVar6._0_8_ = UVar20.fields._0_8_;
        auVar6._12_4_ = extraout_XMM0_Dd_01;
        *(undefined1 (*) [16])(puVar15 + -0x28) = auVar6;
        auVar8._8_4_ = in_XMM1_Dc;
        auVar8._0_8_ = UVar20.fields._8_8_;
        auVar8._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])(puVar15 + -0x38) = auVar8;
        *(undefined8 *)(puVar15 + -0x40) = 0x41f2aa5;
        auVar22 = il2cpp_runtime_helper_02300d20(pUVar9,TypeInfo_ITextSelection,3);
        fVar18 = *(float *)(puVar15 + -0x38);
        fVar19 = *(float *)(puVar15 + -0x28);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar22._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar19,fVar18,pUVar9,auVar22._0_8_[1],auVar22._8_8_,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  *(undefined8 *)(puVar15 + -0x40) = 0x41f2adf;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar15 + -0x40) = unaff_R15;
  *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)(puVar15 + -0x48) = __this_02;
  *(undefined8 *)(puVar15 + -0x50) = unaff_R12;
  *(MethodInfo_28EE4E0 **)(puVar15 + -0x58) = pMVar12;
  *(undefined8 *)(puVar15 + -0x60) = uVar10;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)(puVar15 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)(puVar15 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)(puVar15 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)(puVar15 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)(puVar15 + -0x68) = 0x41f2b3d;
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  *(undefined8 *)(puVar15 + -0x68) = 0x41f2b4a;
  pCVar17 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar11;
    *(undefined8 *)(puVar15 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar11);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar13->fields).m_RenderHints;
    *(undefined8 *)(puVar15 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)(puVar15 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)(puVar15 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  *(undefined8 *)(puVar15 + -0x68) = 0x41f2bb8;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar15 + -0x68) = uVar10;
  if (pCVar17[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar17[4].klass)->_1).image + 0x858))();
    return;
  }
  *(undefined8 *)(puVar15 + -0x70) = 0x41f2be3;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar15 + -0x70) = uVar10;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)(puVar15 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____getter_7_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x4211e00

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____getter_7_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_ITextSelection_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  code *vtableDispatch;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  UnityEngine_UIElements_ITextSelection_o *pUVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *pMVar9;
  CustomLogic_CustomLogicTextFieldBuiltin_o *unaff_RBX;
  undefined1 *puVar10;
  MethodInfo_28EE4E0 *pMVar11;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar12;
  long lVar13;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar14;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar17;
  UnityEngine_Color_o color;
  undefined1 auVar18 [16];
  undefined1 auStack_28 [16];
  
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    auStack_28._8_8_ = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad91d == '\0') {
      auStack_28._0_8_ = 0x4211e3f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      auStack_28._0_8_ = 0x4211e4b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad91d = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      auStack_28._0_8_ = 0x4211e6a;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_28._0_8_ = 0x4211e7c;
    pMVar9 = (MethodInfo_28EE4E0 *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if ((UnityEngine_UIElements_TextInputBaseField_TValueType__o *)__i ==
        (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      auStack_28._0_8_ = 0x4211e9a;
      il2cpp_runtime_helper_022b2c90();
      auStack_28._0_8_ = method;
      if (g_data_057ad91e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad91e = '\x01';
      }
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar7,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
      return pIVar7;
    }
    puVar10 = &stack0xfffffffffffffff8;
  }
  else {
    pMVar9 = (MethodInfo_28EE4E0 *)0x0;
    puVar10 = auStack_28;
    if (g_data_057ad862 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
      g_data_057ad862 = '\x01';
    }
    pUVar12 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar12,MethodInfo_Color_get_cursorColor);
      auStack_28._8_4_ = in_XMM1_Dc;
      auStack_28._0_8_ = UVar17.fields._8_8_;
      auStack_28._12_4_ = in_XMM1_Dd;
      __this = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      auVar18 = auStack_28;
      color.fields.b = (float)auStack_28._0_4_;
      color.fields.a = (float)auStack_28._4_4_;
      color.fields.r = (float)(int)UVar17.fields._0_8_;
      color.fields.g = (float)(int)((ulong)UVar17.fields._0_8_ >> 0x20);
      auStack_28 = auVar18;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this,color,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = __i;
    __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)pUVar12;
  }
  *(undefined8 *)(puVar10 + -8) = unaff_R14;
  *(CustomLogic_CustomLogicTextFieldBuiltin_o **)(puVar10 + -0x10) = unaff_RBX;
  pMVar11 = pMVar9;
  if (g_data_057ad863 == '\0') {
    *(undefined8 *)(puVar10 + -0x40) = 0x41f2a02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    *(undefined8 *)(puVar10 + -0x40) = 0x41f2a0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar12 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)
             &(((UnityEngine_UIElements_TextInputBaseField_TValueType__o *)__i)->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    *(undefined8 *)(puVar10 + -0x40) = 0x41f2a31;
    pMVar11 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar12,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar9 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar12 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar9->parameters,
       pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar11 = (MethodInfo_28EE4E0 *)0x0;
      *(undefined8 *)(puVar10 + -0x40) = 0x41f2a51;
      UVar17 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar12,(MethodInfo *)0x0);
      fVar16 = UVar17.fields.b;
      fVar15 = UVar17.fields.r;
      __i = (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0;
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar2 = pUVar6->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_ITextSelection) {
              auVar18._8_8_ = pIVar3;
              auVar18._0_8_ = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar13) + 3);
              goto label_041f2ac7;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar13);
        }
        auVar4._8_4_ = extraout_XMM0_Dc;
        auVar4._0_8_ = UVar17.fields._0_8_;
        auVar4._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar10 + -0x28) = auVar4;
        auVar5._8_4_ = in_XMM1_Dc;
        auVar5._0_8_ = UVar17.fields._8_8_;
        auVar5._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])(puVar10 + -0x38) = auVar5;
        *(undefined8 *)(puVar10 + -0x40) = 0x41f2aa5;
        auVar18 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,3);
        fVar16 = *(float *)(puVar10 + -0x38);
        fVar15 = *(float *)(puVar10 + -0x28);
label_041f2ac7:
        vtableDispatch = (code *)*auVar18._0_8_;
        pIVar7 = (Il2CppObject *)
                 (*vtableDispatch)
                           (fVar15,fVar16,pUVar6,auVar18._0_8_[1],auVar18._8_8_,vtableDispatch);
        return pIVar7;
      }
    }
  }
  *(undefined8 *)(puVar10 + -0x40) = 0x41f2adf;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar10 + -0x40) = unaff_R15;
  *(CustomLogic_CustomLogicTextFieldBuiltin_o **)(puVar10 + -0x48) = __i;
  *(undefined8 *)(puVar10 + -0x50) = unaff_R12;
  *(MethodInfo_28EE4E0 **)(puVar10 + -0x58) = pMVar9;
  *(undefined8 *)(puVar10 + -0x60) = uVar8;
  if (g_data_057ad864 == '\0') {
    *(undefined8 *)(puVar10 + -0x68) = 0x41f2b03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)(puVar10 + -0x68) = 0x41f2b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    *(undefined8 *)(puVar10 + -0x68) = 0x41f2b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    *(undefined8 *)(puVar10 + -0x68) = 0x41f2b27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  *(undefined8 *)(puVar10 + -0x68) = 0x41f2b3d;
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  *(undefined8 *)(puVar10 + -0x68) = 0x41f2b4a;
  pCVar14 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar11;
    *(undefined8 *)(puVar10 + -0x68) = 0x41f2b62;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar11);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar12->fields).m_RenderHints;
    *(undefined8 *)(puVar10 + -0x68) = 0x41f2b75;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    *(undefined8 *)(puVar10 + -0x68) = 0x41f2b8f;
    UnityEngine_UIElements_EventCallback_object____ctor();
    *(undefined8 *)(puVar10 + -0x68) = 0x41f2ba4;
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (Il2CppObject *)pUVar12;
  }
  *(undefined8 *)(puVar10 + -0x68) = 0x41f2bb8;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar10 + -0x68) = uVar8;
  if (pCVar14[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pIVar7 = (Il2CppObject *)(**(code **)((long)((pCVar14[4].klass)->_1).image + 0x858))();
    return pIVar7;
  }
  *(undefined8 *)(puVar10 + -0x70) = 0x41f2be3;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar10 + -0x70) = uVar8;
  if (g_data_057ad865 == '\0') {
    *(undefined8 *)(puVar10 + -0x78) = 0x41f2c06;
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____setter_7_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4211e20

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____setter_7_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_ITextSelection_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  code *vtableDispatch;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  UnityEngine_UIElements_ITextSelection_o *pUVar4;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *pMVar5;
  Il2CppObject *__this_00;
  MethodInfo_28EE4E0 *pMVar6;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_01;
  long lVar7;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar8;
  UnityEngine_Color_o UVar9;
  undefined1 auVar10 [16];
  
  if (g_data_057ad91d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad91d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = (MethodInfo_28EE4E0 *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad91e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad91e = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
    return;
  }
  pMVar6 = pMVar5;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection,pMVar5,0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  __this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
  if (__this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar6 = MethodInfo_ITextSelection_get_textSelection;
    pUVar4 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(__this_01,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar5 != (MethodInfo_28EE4E0 *)0x0) &&
       (__this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar5->parameters,
       __this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar6 = (MethodInfo_28EE4E0 *)0x0;
      UVar9 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_ITextSelection) {
              auVar10._8_8_ = pIVar3;
              auVar10._0_8_ = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 3);
              goto label_041f2ac7;
            }
            lVar7 = lVar7 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar7);
        }
        auVar10 = il2cpp_runtime_helper_02300d20(pUVar4,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar10._0_8_;
        (*vtableDispatch)
                  (UVar9.fields.r,UVar9.fields.b,pUVar4,auVar10._0_8_[1],auVar10._8_8_,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0)
  ;
  pCVar8 = __this;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar6;
    il2cpp_runtime_helper_022b4080(&__this->fields,pMVar6);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(__this_01->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar8[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar8[4].klass)->_1).image + 0x858))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x4212050

void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$<RegisterValueChangedEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___RegisterValueChangedEventCallback_b__0 (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, UnityEngine_UIElements_ChangeEvent_string__o* evt, const MethodInfo* method);
// 0x4212060

void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___RegisterValueChangedEventCallback_b__0
               (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this,
               UnityEngine_UIElements_ChangeEvent_string__o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  System_Object_array *parameterValues;
  long lVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_01;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  
  if (g_data_057ad921 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_newValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_previousValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad921 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).changeEvent;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((evt == (UnityEngine_UIElements_ChangeEvent_string__o *)0x0) ||
     (parameterValues == (System_Object_array *)0x0)) {
label_0421218b:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar1 = (evt->fields)._newValue_k__BackingField;
    if (pSVar1 != (System_String_o *)0x0) {
      lVar2 = il2cpp_runtime_helper_023051f0(pSVar1);
      if (lVar2 == 0) goto label_04212195;
    }
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = (Il2CppObject *)pSVar1;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      pSVar1 = (evt->fields)._previousValue_k__BackingField;
      if (pSVar1 != (System_String_o *)0x0) {
        lVar2 = il2cpp_runtime_helper_023051f0(pSVar1);
        if (lVar2 == 0) goto label_04212195;
      }
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = (Il2CppObject *)pSVar1;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1);
        if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                    (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
          return;
        }
        goto label_0421218b;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_04212195:
  __this_01 = (CustomLogic_CustomLogicVisualElementBuiltin_o *)il2cpp_runtime_helper_0231b270();
  visualElement = (UnityEngine_UIElements_VisualElement_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  method_00 = extraout_RDX;
  if (g_data_057ad922 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Boolean);
    g_data_057ad922 = '\x01';
    method_00 = extraout_RDX_00;
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_01,visualElement,method_00);
  __this_01[1].klass = (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080(__this_01 + 1,visualElement);
  control = __this_01[1].klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_bool);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_bool_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Boolean);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___ctor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, UnityEngine_UIElements_TextField_o* textField, const MethodInfo* method);
// 0x41f25d0

void CustomLogic_CustomLogicTextFieldBuiltin___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,
               UnityEngine_UIElements_TextField_o *textField,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)textField,(MethodInfo *)0x0);
  (__this->fields)._textField = textField;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._textField,textField);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsDelayed
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f2600

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  code *vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  System_String_o *pSVar6;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar7;
  UnityEngine_UIElements_ITextSelection_o *pUVar8;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 extraout_RDX;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar11;
  UnityEngine_UIElements_TextField_o *pUVar12;
  UnityEngine_UIElements_BaseField_TValueType__o *pUVar13;
  long *plVar14;
  long lVar15;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar16;
  undefined8 in_R8;
  undefined8 in_R9;
  UnityEngine_Color_o UVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (g_data_057ad85c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_isDelayed);
    g_data_057ad85c = '\x01';
  }
  pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    bVar5 = UnityEngine_UIElements_TextInputBaseField_object___get_isDelayed(pUVar11,MethodInfo_Boolean_get_isDelayed);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = method;
  if (g_data_057ad85d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_isDelayed);
    g_data_057ad85d = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed(pUVar11,(uint)method & 0xff,MethodInfo_Void_set_isDelayed)
    ;
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = *(UnityEngine_UIElements_TextField_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_TextField_o *)0x0) {
    bVar5 = UnityEngine_UIElements_TextField__get_multiline(pUVar12,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = *(UnityEngine_UIElements_TextField_o **)&(pUVar12->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_TextField__set_multiline(pUVar12,(uint)pMVar9 & 0xff,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad85e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad85e = '\x01';
  }
  pUVar13 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(pUVar12->fields).m_RenderHints;
  if (pUVar13 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    pSVar6 = UnityEngine_UIElements_BaseField_object___get_label(pUVar13,MethodInfo_String_get_label);
    return (bool_conflict)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar9;
  if (g_data_057ad85f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad85f = '\x01';
  }
  pUVar13 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(pUVar13->fields).m_RenderHints;
  if (pUVar13 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label(pUVar13,(System_String_o *)pMVar9,MethodInfo_Void_set_label);
    return extraout_EAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar14 = *(long **)&(pUVar13->fields).m_RenderHints;
  if (plVar14 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar14 + 0x7c8);
    bVar5 = (*vtableDispatch)
                      (plVar14,*(undefined8 *)(*plVar14 + 2000),extraout_RDX,vtableDispatch,in_R8,in_R9
                       ,pUVar12);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar14 = (long *)plVar14[0xc];
  if (plVar14 != (long *)0x0) {
    bVar5 = (**(code **)(*plVar14 + 0x7d8))();
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar14[0xc];
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar11,MethodInfo_Color_get_selectionColor);
    pCVar7 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar7,UVar17,(MethodInfo *)0x0);
    return (bool_conflict)pCVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar10;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar9 = MethodInfo_ITextSelection_get_textSelection;
    pUVar8 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar11,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar10 != (MethodInfo *)0x0) &&
       (pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar10->parameters,
       pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar9 = (MethodInfo *)0x0;
      UVar17 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar11,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar8->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar15) == TypeInfo_ITextSelection) {
              auVar18._8_8_ = pIVar4;
              auVar18._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar15) + 5);
              goto label_041f2937;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar15);
        }
        auVar18 = il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_ITextSelection,5);
label_041f2937:
        vtableDispatch = (code *)*auVar18._0_8_;
        bVar5 = (*vtableDispatch)
                          (UVar17.fields.r,UVar17.fields.b,pUVar8,auVar18._0_8_[1],auVar18._8_8_,
                           vtableDispatch);
        return bVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar11,MethodInfo_Color_get_cursorColor);
    pCVar7 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar7,UVar17,(MethodInfo *)0x0);
    return (bool_conflict)pCVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar9;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar10 = MethodInfo_ITextSelection_get_textSelection;
    pUVar8 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar11,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar9 != (MethodInfo *)0x0) &&
       (pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar9->parameters,
       pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar10 = (MethodInfo *)0x0;
      UVar17 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar11,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar8->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar15) == TypeInfo_ITextSelection) {
              auVar19._8_8_ = pIVar4;
              auVar19._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar15) + 3);
              goto label_041f2ac7;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar15);
        }
        auVar19 = il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar19._0_8_;
        bVar5 = (*vtableDispatch)
                          (UVar17.fields.r,UVar17.fields.b,pUVar8,auVar19._0_8_[1],auVar19._8_8_,
                           vtableDispatch);
        return bVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar16 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar10;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar10);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar11->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (bool_conflict)pUVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar16[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    bVar5 = (**(code **)((long)((pCVar16[4].klass)->_1).image + 0x858))();
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return (bool_conflict)"TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_IsDelayed
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_IsDelayed (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x41f2640

void CustomLogic_CustomLogicTextFieldBuiltin__set_IsDelayed
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  code *vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar5;
  UnityEngine_UIElements_ITextSelection_o *pUVar6;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo_28EE4E0 *pMVar7;
  MethodInfo_28EE4E0 *pMVar8;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar9;
  UnityEngine_UIElements_TextField_o *pUVar10;
  UnityEngine_UIElements_BaseField_TValueType__o *pUVar11;
  long *plVar12;
  long lVar13;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar14;
  undefined8 in_R8;
  undefined8 in_R9;
  UnityEngine_Color_o UVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  pMVar7 = (MethodInfo_28EE4E0 *)CONCAT44(in_register_00000034,value);
  if (g_data_057ad85d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_isDelayed);
    g_data_057ad85d = '\x01';
  }
  pUVar9 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed(pUVar9,value & 0xff,MethodInfo_Void_set_isDelayed);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_TextField_o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_TextField__get_multiline(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_TextField_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_TextField__set_multiline(pUVar10,(uint)pMVar7 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad85e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad85e = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___get_label(pUVar11,MethodInfo_String_get_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  if (g_data_057ad85f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad85f = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label(pUVar11,(System_String_o *)pMVar7,MethodInfo_Void_set_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar12 = *(long **)&(pUVar11->fields).m_RenderHints;
  if (plVar12 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar12 + 0x7c8);
    (*vtableDispatch)
              (plVar12,*(undefined8 *)(*plVar12 + 2000),extraout_RDX,vtableDispatch,in_R8,in_R9,pUVar10
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar12 = (long *)plVar12[0xc];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x7d8))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar9 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar12[0xc];
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar15 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar9,MethodInfo_Color_get_selectionColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = pMVar8;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar7 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar9,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar8 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar9 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar8->parameters,
       pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar7 = (MethodInfo_28EE4E0 *)0x0;
      UVar15 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar9,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_ITextSelection) {
              auVar16._8_8_ = pIVar4;
              auVar16._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar13) + 5);
              goto label_041f2937;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar13);
        }
        auVar16 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,5);
label_041f2937:
        vtableDispatch = (code *)*auVar16._0_8_;
        (*vtableDispatch)
                  (UVar15.fields.r,UVar15.fields.b,pUVar6,auVar16._0_8_[1],auVar16._8_8_,vtableDispatch
                  );
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar15 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar9,MethodInfo_Color_get_cursorColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar8 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar9,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar7 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar9 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar7->parameters,
       pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar8 = (MethodInfo_28EE4E0 *)0x0;
      UVar15 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar9,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_ITextSelection) {
              auVar17._8_8_ = pIVar4;
              auVar17._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar13) + 3);
              goto label_041f2ac7;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar13);
        }
        auVar17 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar17._0_8_;
        (*vtableDispatch)
                  (UVar15.fields.r,UVar15.fields.b,pUVar6,auVar17._0_8_[1],auVar17._8_8_,vtableDispatch
                  );
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar14 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar8;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar8);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar9->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar14[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar14[4].klass)->_1).image + 0x858))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Multiline
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f2690

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  code *vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_String_o *pSVar6;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar7;
  UnityEngine_UIElements_ITextSelection_o *pUVar8;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 extraout_RDX;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  UnityEngine_UIElements_TextField_o *pUVar11;
  UnityEngine_UIElements_BaseField_TValueType__o *pUVar12;
  long *plVar13;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar14;
  long lVar15;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar16;
  undefined8 in_R8;
  undefined8 in_R9;
  UnityEngine_Color_o UVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  pUVar11 = (__this->fields)._textField;
  if (pUVar11 != (UnityEngine_UIElements_TextField_o *)0x0) {
    bVar5 = UnityEngine_UIElements_TextField__get_multiline(pUVar11,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_TextField_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_TextField__set_multiline(pUVar11,(uint)method & 0xff,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad85e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad85e = '\x01';
  }
  pUVar12 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    pSVar6 = UnityEngine_UIElements_BaseField_object___get_label(pUVar12,MethodInfo_String_get_label);
    return (bool_conflict)pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = method;
  if (g_data_057ad85f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad85f = '\x01';
  }
  pUVar12 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(pUVar12->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label(pUVar12,(System_String_o *)method,MethodInfo_Void_set_label);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar13 = *(long **)&(pUVar12->fields).m_RenderHints;
  if (plVar13 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar13 + 0x7c8);
    bVar5 = (*vtableDispatch)
                      (plVar13,*(undefined8 *)(*plVar13 + 2000),extraout_RDX,vtableDispatch,in_R8,in_R9
                       ,pUVar11);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar13 = (long *)plVar13[0xc];
  if (plVar13 != (long *)0x0) {
    bVar5 = (**(code **)(*plVar13 + 0x7d8))();
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar14 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar13[0xc];
  if (pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar14,MethodInfo_Color_get_selectionColor);
    pCVar7 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar7,UVar17,(MethodInfo *)0x0);
    return (bool_conflict)pCVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar10;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar14 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar14->fields).m_RenderHints;
  if (pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar9 = MethodInfo_ITextSelection_get_textSelection;
    pUVar8 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar14,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar10 != (MethodInfo *)0x0) &&
       (pUVar14 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar10->parameters,
       pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar9 = (MethodInfo *)0x0;
      UVar17 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar14,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar8->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar15) == TypeInfo_ITextSelection) {
              auVar18._8_8_ = pIVar4;
              auVar18._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar15) + 5);
              goto label_041f2937;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar15);
        }
        auVar18 = il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_ITextSelection,5);
label_041f2937:
        vtableDispatch = (code *)*auVar18._0_8_;
        bVar5 = (*vtableDispatch)
                          (UVar17.fields.r,UVar17.fields.b,pUVar8,auVar18._0_8_[1],auVar18._8_8_,
                           vtableDispatch);
        return bVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar14 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar14->fields).m_RenderHints;
  if (pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar17 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar14,MethodInfo_Color_get_cursorColor);
    pCVar7 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar7,UVar17,(MethodInfo *)0x0);
    return (bool_conflict)pCVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar9;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar14 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar14->fields).m_RenderHints;
  if (pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar10 = MethodInfo_ITextSelection_get_textSelection;
    pUVar8 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar14,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar9 != (MethodInfo *)0x0) &&
       (pUVar14 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar9->parameters,
       pUVar14 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar10 = (MethodInfo *)0x0;
      UVar17 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar14,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar8->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar15) == TypeInfo_ITextSelection) {
              auVar19._8_8_ = pIVar4;
              auVar19._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar15) + 3);
              goto label_041f2ac7;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar15);
        }
        auVar19 = il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar19._0_8_;
        bVar5 = (*vtableDispatch)
                          (UVar17.fields.r,UVar17.fields.b,pUVar8,auVar19._0_8_[1],auVar19._8_8_,
                           vtableDispatch);
        return bVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar16 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar10;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar10);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar14->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (bool_conflict)pUVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar16[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    bVar5 = (**(code **)((long)((pCVar16[4].klass)->_1).image + 0x858))();
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return (bool_conflict)"TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Multiline
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x41f26b0

void CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  code *vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar5;
  UnityEngine_UIElements_ITextSelection_o *pUVar6;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo_28EE4E0 *pMVar7;
  MethodInfo_28EE4E0 *pMVar8;
  UnityEngine_UIElements_TextField_o *__this_01;
  UnityEngine_UIElements_BaseField_TValueType__o *pUVar9;
  long *plVar10;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar11;
  long lVar12;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar13;
  undefined8 in_R8;
  undefined8 in_R9;
  UnityEngine_Color_o UVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  pMVar7 = (MethodInfo_28EE4E0 *)CONCAT44(in_register_00000034,value);
  __this_01 = (__this->fields)._textField;
  if (__this_01 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_TextField__set_multiline(__this_01,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad85e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad85e = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(__this_01->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___get_label(pUVar9,MethodInfo_String_get_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  if (g_data_057ad85f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad85f = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label(pUVar9,(System_String_o *)pMVar7,MethodInfo_Void_set_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar10 = *(long **)&(pUVar9->fields).m_RenderHints;
  if (plVar10 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar10 + 0x7c8);
    (*vtableDispatch)
              (plVar10,*(undefined8 *)(*plVar10 + 2000),extraout_RDX,vtableDispatch,in_R8,in_R9,
               __this_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar10 = (long *)plVar10[0xc];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x7d8))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar10[0xc];
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar14 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar11,MethodInfo_Color_get_selectionColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = pMVar8;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar7 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar11,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar8 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar8->parameters,
       pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar7 = (MethodInfo_28EE4E0 *)0x0;
      UVar14 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar11,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_ITextSelection) {
              auVar15._8_8_ = pIVar4;
              auVar15._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 5);
              goto label_041f2937;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar12);
        }
        auVar15 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,5);
label_041f2937:
        vtableDispatch = (code *)*auVar15._0_8_;
        (*vtableDispatch)
                  (UVar14.fields.r,UVar14.fields.b,pUVar6,auVar15._0_8_[1],auVar15._8_8_,vtableDispatch
                  );
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar14 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar11,MethodInfo_Color_get_cursorColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar8 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar11,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar7 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar7->parameters,
       pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar8 = (MethodInfo_28EE4E0 *)0x0;
      UVar14 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar11,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_ITextSelection) {
              auVar16._8_8_ = pIVar4;
              auVar16._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 3);
              goto label_041f2ac7;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        auVar16 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar16._0_8_;
        (*vtableDispatch)
                  (UVar14.fields.r,UVar14.fields.b,pUVar6,auVar16._0_8_[1],auVar16._8_8_,vtableDispatch
                  );
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar13 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar8;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar8);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar11->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar13[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar13[4].klass)->_1).image + 0x858))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_Label (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f26d0

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_Label
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  code *vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  System_String_o *pSVar5;
  System_String_o *extraout_RAX;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar6;
  UnityEngine_UIElements_ITextSelection_o *pUVar7;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 extraout_RDX;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  UnityEngine_UIElements_TextField_o *__this_01;
  UnityEngine_UIElements_BaseField_TValueType__o *__this_02;
  long *plVar10;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar11;
  long lVar12;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar13;
  undefined8 in_R8;
  undefined8 in_R9;
  UnityEngine_Color_o UVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (g_data_057ad85e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad85e = '\x01';
  }
  __this_01 = (__this->fields)._textField;
  if (__this_01 != (UnityEngine_UIElements_TextField_o *)0x0) {
    pSVar5 = UnityEngine_UIElements_BaseField_object___get_label
                       ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,MethodInfo_String_get_label);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = method;
  if (g_data_057ad85f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad85f = '\x01';
  }
  __this_02 = *(UnityEngine_UIElements_BaseField_TValueType__o **)&(__this_01->fields).m_RenderHints;
  if (__this_02 != (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label(__this_02,(System_String_o *)method,MethodInfo_Void_set_label);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar10 = *(long **)&(__this_02->fields).m_RenderHints;
  if (plVar10 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar10 + 0x7c8);
    pSVar5 = (System_String_o *)
             (*vtableDispatch)
                       (plVar10,*(undefined8 *)(*plVar10 + 2000),extraout_RDX,vtableDispatch,in_R8,
                        in_R9,__this);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar10 = (long *)plVar10[0xc];
  if (plVar10 != (long *)0x0) {
    pSVar5 = (System_String_o *)(**(code **)(*plVar10 + 0x7d8))();
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar10[0xc];
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar14 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar11,MethodInfo_Color_get_selectionColor);
    pCVar6 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar6,UVar14,(MethodInfo *)0x0);
    return (System_String_o *)pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar9;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar8 = MethodInfo_ITextSelection_get_textSelection;
    pUVar7 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar11,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar9 != (MethodInfo *)0x0) &&
       (pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar9->parameters,
       pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar8 = (MethodInfo *)0x0;
      UVar14 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar11,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar7->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_ITextSelection) {
              auVar15._8_8_ = pIVar4;
              auVar15._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 5);
              goto label_041f2937;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar12);
        }
        auVar15 = il2cpp_runtime_helper_02300d20(pUVar7,TypeInfo_ITextSelection,5);
label_041f2937:
        vtableDispatch = (code *)*auVar15._0_8_;
        pSVar5 = (System_String_o *)
                 (*vtableDispatch)
                           (UVar14.fields.r,UVar14.fields.b,pUVar7,auVar15._0_8_[1],auVar15._8_8_,
                            vtableDispatch);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar14 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar11,MethodInfo_Color_get_cursorColor);
    pCVar6 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar6,UVar14,(MethodInfo *)0x0);
    return (System_String_o *)pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar8;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar11 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar9 = MethodInfo_ITextSelection_get_textSelection;
    pUVar7 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar11,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar8 != (MethodInfo *)0x0) &&
       (pUVar11 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar8->parameters,
       pUVar11 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar9 = (MethodInfo *)0x0;
      UVar14 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar11,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar7->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_ITextSelection) {
              auVar16._8_8_ = pIVar4;
              auVar16._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 3);
              goto label_041f2ac7;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        auVar16 = il2cpp_runtime_helper_02300d20(pUVar7,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar16._0_8_;
        pSVar5 = (System_String_o *)
                 (*vtableDispatch)
                           (UVar14.fields.r,UVar14.fields.b,pUVar7,auVar16._0_8_[1],auVar16._8_8_,
                            vtableDispatch);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar13 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar9;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar9);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar11->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (System_String_o *)pUVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar13[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pSVar5 = (System_String_o *)(**(code **)((long)((pCVar13[4].klass)->_1).image + 0x858))();
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Label (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41f2710

void CustomLogic_CustomLogicTextFieldBuiltin__set_Label
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  code *vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar5;
  UnityEngine_UIElements_ITextSelection_o *pUVar6;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 extraout_RDX;
  MethodInfo_28EE4E0 *pMVar7;
  MethodInfo_28EE4E0 *pMVar8;
  UnityEngine_UIElements_TextField_o *__this_01;
  long *plVar9;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar10;
  long lVar11;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar12;
  UnityEngine_Color_o UVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  pMVar8 = (MethodInfo_28EE4E0 *)value;
  if (g_data_057ad85f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad85f = '\x01';
  }
  __this_01 = (__this->fields)._textField;
  if (__this_01 != (UnityEngine_UIElements_TextField_o *)0x0) {
    UnityEngine_UIElements_BaseField_object___set_label
              ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,value,MethodInfo_Void_set_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar9 = *(long **)&(__this_01->fields).m_RenderHints;
  if (plVar9 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar9 + 0x7c8);
    (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 2000),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar9 = (long *)plVar9[0xc];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x7d8))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar10 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar9[0xc];
  if (pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar13 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar10,MethodInfo_Color_get_selectionColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = pMVar8;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar10 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar7 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar10,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar8 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar10 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar8->parameters,
       pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar7 = (MethodInfo_28EE4E0 *)0x0;
      UVar13 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar10,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_ITextSelection) {
              auVar14._8_8_ = pIVar4;
              auVar14._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar11) + 5);
              goto label_041f2937;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar11);
        }
        auVar14 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,5);
label_041f2937:
        vtableDispatch = (code *)*auVar14._0_8_;
        (*vtableDispatch)
                  (UVar13.fields.r,UVar13.fields.b,pUVar6,auVar14._0_8_[1],auVar14._8_8_,vtableDispatch
                  );
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar10 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar13 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar10,MethodInfo_Color_get_cursorColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar10 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar8 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar10,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar7 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar10 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar7->parameters,
       pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar8 = (MethodInfo_28EE4E0 *)0x0;
      UVar13 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar10,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_ITextSelection) {
              auVar15._8_8_ = pIVar4;
              auVar15._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar11) + 3);
              goto label_041f2ac7;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar11);
        }
        auVar15 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar15._0_8_;
        (*vtableDispatch)
                  (UVar13.fields.r,UVar13.fields.b,pUVar6,auVar15._0_8_[1],auVar15._8_8_,vtableDispatch
                  );
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar12 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar8;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar8);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar10->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar12[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar12[4].klass)->_1).image + 0x858))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Value
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_Value (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f2760

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_Value
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  System_String_o *pSVar5;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar6;
  UnityEngine_UIElements_ITextSelection_o *pUVar7;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 in_RDX;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  UnityEngine_UIElements_TextField_o *pUVar10;
  long *plVar11;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar12;
  long lVar13;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar14;
  UnityEngine_Color_o UVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  pUVar10 = (__this->fields)._textField;
  if (pUVar10 != (UnityEngine_UIElements_TextField_o *)0x0) {
    vtableDispatch = (pUVar10->klass->vtable)._105_get_value.methodPtr;
    pSVar5 = (System_String_o *)
             (*vtableDispatch)
                       (pUVar10,(pUVar10->klass->vtable)._105_get_value.method,in_RDX,vtableDispatch);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar11 = *(long **)&(pUVar10->fields).m_RenderHints;
  if (plVar11 != (long *)0x0) {
    pSVar5 = (System_String_o *)(**(code **)(*plVar11 + 0x7d8))();
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar12 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)plVar11[0xc];
  if (pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar15 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar12,MethodInfo_Color_get_selectionColor);
    pCVar6 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar6,UVar15,(MethodInfo *)0x0);
    return (System_String_o *)pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = method;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar12 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar12->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar8 = MethodInfo_ITextSelection_get_textSelection;
    pUVar7 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar12,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((method != (MethodInfo *)0x0) &&
       (pUVar12 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)method->parameters,
       pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar8 = (MethodInfo *)0x0;
      UVar15 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar12,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar7->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_ITextSelection) {
              auVar16._8_8_ = pIVar4;
              auVar16._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar13) + 5);
              goto label_041f2937;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar13);
        }
        auVar16 = il2cpp_runtime_helper_02300d20(pUVar7,TypeInfo_ITextSelection,5);
label_041f2937:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar16._0_8_;
        pSVar5 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (UVar15.fields.r,UVar15.fields.b,pUVar7,auVar16._0_8_[1],auVar16._8_8_,
                            UNRECOVERED_JUMPTABLE_00);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar12 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar12->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar15 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar12,MethodInfo_Color_get_cursorColor);
    pCVar6 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar6,UVar15,(MethodInfo *)0x0);
    return (System_String_o *)pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar8;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar12 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar12->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar9 = MethodInfo_ITextSelection_get_textSelection;
    pUVar7 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar12,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar8 != (MethodInfo *)0x0) &&
       (pUVar12 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar8->parameters,
       pUVar12 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar9 = (MethodInfo *)0x0;
      UVar15 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar12,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar7->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_ITextSelection) {
              auVar17._8_8_ = pIVar4;
              auVar17._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar13) + 3);
              goto label_041f2ac7;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar13);
        }
        auVar17 = il2cpp_runtime_helper_02300d20(pUVar7,TypeInfo_ITextSelection,3);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar17._0_8_;
        pSVar5 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (UVar15.fields.r,UVar15.fields.b,pUVar7,auVar17._0_8_[1],auVar17._8_8_,
                            UNRECOVERED_JUMPTABLE_00);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar14 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar9;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar9);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar12->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (System_String_o *)pUVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar14[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pSVar5 = (System_String_o *)(**(code **)((long)((pCVar14[4].klass)->_1).image + 0x858))();
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Value (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41f2790

void CustomLogic_CustomLogicTextFieldBuiltin__set_Value
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar5;
  UnityEngine_UIElements_ITextSelection_o *pUVar6;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *pMVar7;
  MethodInfo_28EE4E0 *pMVar8;
  UnityEngine_UIElements_TextField_o *pUVar9;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar10;
  long lVar11;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar12;
  UnityEngine_Color_o UVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  pUVar9 = (__this->fields)._textField;
  if (pUVar9 != (UnityEngine_UIElements_TextField_o *)0x0) {
    vtableDispatch = (pUVar9->klass->vtable)._106_set_value.methodPtr;
    (*vtableDispatch)(pUVar9,value,(pUVar9->klass->vtable)._106_set_value.method,vtableDispatch)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar10 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar13 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar10,MethodInfo_Color_get_selectionColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = (MethodInfo_28EE4E0 *)value;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar10 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar7 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar10,MethodInfo_ITextSelection_get_textSelection);
    if (((MethodInfo_28EE4E0 *)value != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar10 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)
                  ((MethodInfo_28EE4E0 *)value)->parameters,
       pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar7 = (MethodInfo_28EE4E0 *)0x0;
      UVar13 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar10,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_ITextSelection) {
              auVar14._8_8_ = pIVar4;
              auVar14._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar11) + 5);
              goto label_041f2937;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar11);
        }
        auVar14 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,5);
label_041f2937:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar14._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (UVar13.fields.r,UVar13.fields.b,pUVar6,auVar14._0_8_[1],auVar14._8_8_,
                   UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar10 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar13 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar10,MethodInfo_Color_get_cursorColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar10 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar8 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar10,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar7 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar10 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar7->parameters,
       pUVar10 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar8 = (MethodInfo_28EE4E0 *)0x0;
      UVar13 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar10,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_ITextSelection) {
              auVar15._8_8_ = pIVar4;
              auVar15._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar11) + 3);
              goto label_041f2ac7;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar11);
        }
        auVar15 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,3);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar15._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (UVar13.fields.r,UVar13.fields.b,pUVar6,auVar15._0_8_[1],auVar15._8_8_,
                   UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar12 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar8;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar8);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar10->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar12[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar12[4].klass)->_1).image + 0x858))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_SelectionColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f27c0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar5;
  UnityEngine_UIElements_ITextSelection_o *pUVar6;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar9;
  long lVar10;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar11;
  UnityEngine_Color_o UVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (g_data_057ad860 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_selectionColor);
    g_data_057ad860 = '\x01';
  }
  pUVar9 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar12 = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor(pUVar9,MethodInfo_Color_get_selectionColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar12,(MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = method;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar7 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar9,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((method != (MethodInfo *)0x0) &&
       (pUVar9 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)method->parameters,
       pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar7 = (MethodInfo *)0x0;
      UVar12 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar9,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_ITextSelection) {
              auVar13._8_8_ = pIVar4;
              auVar13._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar10) + 5);
              goto label_041f2937;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar10);
        }
        auVar13 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,5);
label_041f2937:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar13._0_8_;
        pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (UVar12.fields.r,UVar12.fields.b,pUVar6,auVar13._0_8_[1],auVar13._8_8_,
                            UNRECOVERED_JUMPTABLE_00);
        return pCVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar12 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar9,MethodInfo_Color_get_cursorColor);
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar5,UVar12,(MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar9 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar8 = MethodInfo_ITextSelection_get_textSelection;
    pUVar6 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar9,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar7 != (MethodInfo *)0x0) &&
       (pUVar9 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar7->parameters,
       pUVar9 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar8 = (MethodInfo *)0x0;
      UVar12 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar9,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar6->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_ITextSelection) {
              auVar14._8_8_ = pIVar4;
              auVar14._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar10) + 3);
              goto label_041f2ac7;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar10);
        }
        auVar14 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_ITextSelection,3);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar14._0_8_;
        pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (UVar12.fields.r,UVar12.fields.b,pUVar6,auVar14._0_8_[1],auVar14._8_8_,
                            UNRECOVERED_JUMPTABLE_00);
        return pCVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar11 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar8;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar8);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar9->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (CustomLogic_CustomLogicColorBuiltin_o *)pUVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar11[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)
             (**(code **)((long)((pCVar11[4].klass)->_1).image + 0x858))();
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_SelectionColor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x41f2850

void CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value
               ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_UIElements_ITextSelection_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  UnityEngine_UIElements_ITextSelection_o *pUVar5;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_01;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *pMVar6;
  MethodInfo_28EE4E0 *pMVar7;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar8;
  long lVar9;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar10;
  UnityEngine_Color_o UVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pMVar6 = (MethodInfo_28EE4E0 *)value;
  if (g_data_057ad861 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad861 = '\x01';
  }
  pUVar8 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (pUVar8 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar6 = MethodInfo_ITextSelection_get_textSelection;
    pUVar5 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar8,MethodInfo_ITextSelection_get_textSelection);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (pUVar8 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(value->fields).Value,
       pUVar8 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar6 = (MethodInfo_28EE4E0 *)0x0;
      UVar11 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar8,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar5->klass;
        uVar1._0_1_ = (pUVar3->_2).rank;
        uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar9) == TypeInfo_ITextSelection) {
              auVar12._8_8_ = pIVar4;
              auVar12._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar9) + 5);
              goto label_041f2937;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar9);
        }
        auVar12 = il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_ITextSelection,5);
label_041f2937:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar12._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (UVar11.fields.r,UVar11.fields.b,pUVar5,auVar12._0_8_[1],auVar12._8_8_,
                   UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar8 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar8->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar11 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar8,MethodInfo_Color_get_cursorColor);
    __this_00 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(__this_00,UVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = pMVar6;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar8 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar8->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar7 = MethodInfo_ITextSelection_get_textSelection;
    pUVar5 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(pUVar8,MethodInfo_ITextSelection_get_textSelection);
    if ((pMVar6 != (MethodInfo_28EE4E0 *)0x0) &&
       (pUVar8 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)pMVar6->parameters,
       pUVar8 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar7 = (MethodInfo_28EE4E0 *)0x0;
      UVar11 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar8,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar3 = pUVar5->klass;
        uVar2._0_1_ = (pUVar3->_2).rank;
        uVar2._1_1_ = (pUVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pUVar3->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar9) == TypeInfo_ITextSelection) {
              auVar13._8_8_ = pIVar4;
              auVar13._0_8_ = pUVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar9) + 3);
              goto label_041f2ac7;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar9);
        }
        auVar13 = il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_ITextSelection,3);
label_041f2ac7:
        UNRECOVERED_JUMPTABLE_00 = (code *)*auVar13._0_8_;
        (*UNRECOVERED_JUMPTABLE_00)
                  (UVar11.fields.r,UVar11.fields.b,pUVar5,auVar13._0_8_[1],auVar13._8_8_,
                   UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar10 = __this_01;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_01->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar7;
    il2cpp_runtime_helper_022b4080(&__this_01->fields,pMVar7);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar8->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar10[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar10[4].klass)->_1).image + 0x858))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_CursorColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__get_CursorColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f2950

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_CursorColor
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_ITextSelection_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  code *vtableDispatch;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar4;
  UnityEngine_UIElements_ITextSelection_o *pUVar5;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *pMVar6;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *pUVar7;
  long lVar8;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar9;
  UnityEngine_Color_o UVar10;
  undefined1 auVar11 [16];
  
  if (g_data_057ad862 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_cursorColor);
    g_data_057ad862 = '\x01';
  }
  pUVar7 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (pUVar7 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    UVar10 = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor(pUVar7,MethodInfo_Color_get_cursorColor);
    pCVar4 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60(pCVar4,UVar10,(MethodInfo *)0x0);
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = method;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  pUVar7 = *(UnityEngine_UIElements_TextInputBaseField_TValueType__o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar6 = MethodInfo_ITextSelection_get_textSelection;
    pUVar5 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                       (pUVar7,(MethodInfo_28EE4E0 *)MethodInfo_ITextSelection_get_textSelection);
    if ((method != (MethodInfo *)0x0) &&
       (pUVar7 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)method->parameters,
       pUVar7 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar6 = (MethodInfo *)0x0;
      UVar10 = Utility_Color255__ToColor((Utility_Color255_o *)pUVar7,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar2 = pUVar5->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_ITextSelection) {
              auVar11._8_8_ = pIVar3;
              auVar11._0_8_ = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 3);
              goto label_041f2ac7;
            }
            lVar8 = lVar8 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar8);
        }
        auVar11 = il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar11._0_8_;
        pCVar4 = (CustomLogic_CustomLogicColorBuiltin_o *)
                 (*vtableDispatch)
                           (UVar10.fields.r,UVar10.fields.b,pUVar5,auVar11._0_8_[1],auVar11._8_8_,
                            vtableDispatch);
        return pCVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar9 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar6;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar6);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(pUVar7->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return (CustomLogic_CustomLogicColorBuiltin_o *)pUVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar9[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pCVar4 = (CustomLogic_CustomLogicColorBuiltin_o *)
             (**(code **)((long)((pCVar9[4].klass)->_1).image + 0x858))();
    return pCVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_CursorColor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x41f29e0

void CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value
               ,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UIElements_ITextSelection_c *pUVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  code *vtableDispatch;
  UnityEngine_UIElements_INotifyValueChanged_T__o *control;
  UnityEngine_UIElements_ITextSelection_o *pUVar4;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo_28EE4E0 *pMVar5;
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_01;
  long lVar6;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar7;
  UnityEngine_Color_o UVar8;
  undefined1 auVar9 [16];
  
  pMVar5 = (MethodInfo_28EE4E0 *)value;
  if (g_data_057ad863 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITextSelection);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ITextSelection_get_textSelection);
    g_data_057ad863 = '\x01';
  }
  __this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    pMVar5 = MethodInfo_ITextSelection_get_textSelection;
    pUVar4 = UnityEngine_UIElements_TextInputBaseField_object___get_textSelection(__this_01,MethodInfo_ITextSelection_get_textSelection);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(value->fields).Value,
       __this_01 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0)) {
      pMVar5 = (MethodInfo_28EE4E0 *)0x0;
      UVar8 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_UIElements_ITextSelection_o *)0x0) {
        pUVar2 = pUVar4->klass;
        uVar1._0_1_ = (pUVar2->_2).rank;
        uVar1._1_1_ = (pUVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pUVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_ITextSelection) {
              auVar9._8_8_ = pIVar3;
              auVar9._0_8_ = pUVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar6) + 3);
              goto label_041f2ac7;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        auVar9 = il2cpp_runtime_helper_02300d20(pUVar4,TypeInfo_ITextSelection,3);
label_041f2ac7:
        vtableDispatch = (code *)*auVar9._0_8_;
        (*vtableDispatch)
                  (UVar8.fields.r,UVar8.fields.b,pUVar4,auVar9._0_8_[1],auVar9._8_8_,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar7 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = (CustomLogic_UserMethod_o *)pMVar5;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pMVar5);
    control = *(UnityEngine_UIElements_INotifyValueChanged_T__o **)&(__this_01->fields).m_RenderHints;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              (control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar7[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    (**(code **)((long)((pCVar7[4].klass)->_1).image + 0x858))();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$RegisterValueChangedEventCallback
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_UserMethod_o* changeEvent, const MethodInfo* method);
// 0x41f2ae0

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_UserMethod_o *changeEvent,
          MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *control;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCVar1;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *pCVar2;
  
  if (g_data_057ad864 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterValueChangedEventCallback_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad864 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pCVar2 = __this_00;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).changeEvent = changeEvent;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,changeEvent);
    control = (__this->fields)._textField;
    callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
    UnityEngine_UIElements_EventCallback_object____ctor();
    UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
              ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pCVar2[4].klass != (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_c *)0x0) {
    pCVar1 = (CustomLogic_CustomLogicTextFieldBuiltin_o *)
             (**(code **)((long)((pCVar2[4].klass)->_1).image + 0x858))();
    return pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41f2bc0

void CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
    (*vtableDispatch)
              (pUVar1,value,(pUVar1->klass->vtable)._114_SetValueWithoutNotify.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_ClassName (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f2bf0

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_ClassName
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad865 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextField");
    g_data_057ad865 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsAbstract (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f2c20

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsStatic (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f2c30

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_IsStatic
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x41f2c40

bool_conflict
CustomLogic_CustomLogicTextFieldBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


