// Type: CustomLogic.CustomLogicToggleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicToggleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicToggleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicToggleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4212660

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicToggleBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined4 in_EAX;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar6;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  System_Action_T__object__o *pSVar9;
  CustomLogic_CustomLogicToggleBuiltin_o *pCVar10;
  System_Func_T__object____object__o *pSVar11;
  System_ArgumentException_o **ppSVar12;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  uStack_18 = CONCAT44((int)args->max_length,(undefined4)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicToggleBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToggleBuiltin_CreateInstance);
  pSVar7 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this,uVar6);
  ppSVar12 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad928 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Value");
    g_data_057ad928 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Label",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Text",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad92a == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
        g_data_057ad92a = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar10 = (CustomLogic_CustomLogicToggleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      return pCVar10;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Value",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad92b == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
        g_data_057ad92b = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar10 = (CustomLogic_CustomLogicToggleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      return pCVar10;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"OnValueChanged",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad92c == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad92c = '\x01';
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
        pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar11;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar11);
      }
      pCVar10 = (CustomLogic_CustomLogicToggleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
      return pCVar10;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad92d == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__6);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad92d = '\x01';
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
        pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar11;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar11);
      }
      pCVar10 = (CustomLogic_CustomLogicToggleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
      return pCVar10;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicToggleBuiltin not found");
    message = (System_ArgumentException_o *)
              System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar7,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,(System_String_o *)message,(MethodInfo *)0x0)
    ;
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar7,uVar6);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar12 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  else {
    ppSVar12 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar12 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar12 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar12 + -0x18) = pSVar7;
  if (g_data_057ad929 == '\0') {
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x421293a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4212946;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4212952;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x421295e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x421296a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4212976;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
    g_data_057ad929 = '\x01';
  }
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x421298c;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x42129a5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x42129b4;
  pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x42129cd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x42129dc;
  pCVar10 = (CustomLogic_CustomLogicToggleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x42129f7;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return pCVar10;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x4213220

void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad932 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x4213290

void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__5_0 (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicToggleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42132a0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__5_0
          (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicToggleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  UnityEngine_UIElements_Toggle_o *pUVar4;
  uint uVar5;
  CustomLogic_UserMethod_o *pCVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  CustomLogic_CustomLogicToggleBuiltin_o *pCVar7;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  pCVar7 = __c;
  if (g_data_057ad933 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad933 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_0421332b:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar7 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    pCVar6 = (CustomLogic_UserMethod_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar6;
      il2cpp_runtime_helper_022b4080(&(__c->fields)._valueChangedEvent,pCVar6);
      return (Il2CppObject *)__c;
    }
    goto label_0421332b;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad934 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad934 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_042133db;
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(pIVar3,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((pCVar7 != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
       (pUVar4 = (pCVar7->fields)._toggle, pUVar4 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
      (*(pUVar4->klass->vtable)._114_SetValueWithoutNotify.methodPtr)
                (pUVar4,(ulong)(uVar5 & 0xff),(pUVar4->klass->vtable)._114_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042133db:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad935 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad935 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(CustomLogic_BuiltinClassInstance_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this_00 = *(CustomLogic_BuiltinClassInstance_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((((Il2CppClass *)__this_00->klass)->_2).naturalAligment < bVar1) ||
       ((((Il2CppClass *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057ad936 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ad936 = '\x01';
        iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__6_0 (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicToggleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4213340

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__6_0
          (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicToggleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_Toggle_o *pUVar3;
  uint uVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (g_data_057ad934 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad934 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_042133db;
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((__c != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
       (pUVar3 = (__c->fields)._toggle, pUVar3 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
      (*(pUVar3->klass->vtable)._114_SetValueWithoutNotify.methodPtr)
                (pUVar3,(ulong)(uVar4 & 0xff),(pUVar3->klass->vtable)._114_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042133db:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad935 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad935 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(CustomLogic_BuiltinClassInstance_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this_00 = *(CustomLogic_BuiltinClassInstance_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((((Il2CppClass *)__this_00->klass)->_2).naturalAligment < bVar1) ||
       ((((Il2CppClass *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057ad936 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057ad936 = '\x01';
        iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicToggleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x42126f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicToggleBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_Func_T__object__o *pSVar5;
  System_Action_T__object__o *pSVar6;
  CustomLogic_CLPropertyBinding_T__o *pCVar7;
  System_Func_T__object____object__o *pSVar8;
  CustomLogic_CLMethodBinding_T__o *pCVar9;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad928 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Value");
    g_data_057ad928 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad92a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
        g_data_057ad92a = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
    bVar3 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad92b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
        g_data_057ad92b = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
    bVar3 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad92c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad92c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
      }
      pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
    bVar3 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad92d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__6);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad92d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
      }
      pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicToggleBuiltin not found");
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
  if (g_data_057ad929 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x421293a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4212946;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4212952;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x421295e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x421296a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4212976;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
    g_data_057ad929 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x421298c;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42129a5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42129b4;
  pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42129cd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42129dc;
  pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42129f7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x4212920

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (g_data_057ad929 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
    g_data_057ad929 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x4212a00

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (g_data_057ad92a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
    g_data_057ad92a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x4212ae0

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (g_data_057ad92b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
    g_data_057ad92b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x4212bc0

CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (g_data_057ad92c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad92c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x4212d10

CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (g_data_057ad92d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad92d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x4212e60

void CustomLogic_CustomLogicToggleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Slot_T__array *__this;
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  undefined1 uVar3;
  uint uVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_String_o *value;
  Il2CppObject *__this_01;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EEB40 *obj_00;
  MethodInfo_24EEB40 *obj_01;
  long lVar6;
  MethodInfo_33E0570 *pMVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  System_Collections_Generic_HashSet_object__o *pSStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  System_Collections_Generic_HashSet_object__o *pSStack_38;
  
  if (g_data_057ad92e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Value");
    g_data_057ad92e = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  pSVar5 = __this_00;
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_00,"Label",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Text",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"OnValueChanged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057ad924 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad924 = '\x01';
    }
    __this = pSVar5[1].fields._slots;
    __this_00 = pSVar5;
    if (__this != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
      UnityEngine_UIElements_BaseField_bool___get_label
                ((UnityEngine_UIElements_BaseField_bool__o *)__this,MethodInfo_String_get_label);
      return;
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSStack_38 = __this_00;
  if (g_data_057ad92f == '\0') {
    uStack_40 = 0x4213020;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x421302c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad92f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x421304b;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x421305d;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pMVar7 = obj;
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if (lVar6 != 0) {
    if (g_data_057ad925 == '\0') {
      uStack_40 = 0x421307a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad925 = '\x01';
    }
    pMVar7 = (MethodInfo_33E0570 *)0x0;
    __this_00 = pSVar5;
    if (*(UnityEngine_UIElements_BaseField_bool__o **)(lVar6 + 0x60) !=
        (UnityEngine_UIElements_BaseField_bool__o *)0x0) {
      UnityEngine_UIElements_BaseField_bool___set_label
                (*(UnityEngine_UIElements_BaseField_bool__o **)(lVar6 + 0x60),(System_String_o *)pSVar5,
                 MethodInfo_Void_set_label);
      return;
    }
  }
  uStack_40 = 0x42130a6;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar7 != (MethodInfo_33E0570 *)0x0) &&
     ((UnityEngine_UIElements_BaseBoolField_o *)pMVar7[1].virtualMethodPointer !=
      (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__get_text
              ((UnityEngine_UIElements_BaseBoolField_o *)pMVar7[1].virtualMethodPointer,(MethodInfo *)0x0);
    return;
  }
  lVar6 = 0;
  pMStack_48 = (MethodInfo_33E0570 *)0x42130cc;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pSStack_50 = __this_00;
  pMStack_48 = obj;
  if (g_data_057ad930 == '\0') {
    uStack_60 = (code *)0x42130ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_60 = (code *)0x42130fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad930 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = (code *)0x421311a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = (code *)0x421312c;
  obj_01 = MethodInfo_String_ConvertTo_String;
  value = (System_String_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj_00,MethodInfo_String_ConvertTo_String);
  if ((lVar6 != 0) &&
     (obj_00 = (MethodInfo_24EEB40 *)0x0,
     *(UnityEngine_UIElements_BaseBoolField_o **)(lVar6 + 0x60) !=
     (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__set_text
              (*(UnityEngine_UIElements_BaseBoolField_o **)(lVar6 + 0x60),value,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0;
  uStack_60 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EEB40 *)0x0) &&
     (pIVar1 = obj_00[1].virtualMethodPointer, pIVar1 != (Il2CppMethodPointer)0x0)) {
    uVar3 = (**(code **)(*(long *)pIVar1 + 0x7c8))(pIVar1,*(undefined8 *)(*(long *)pIVar1 + 2000));
    uStack_60 = (code *)CONCAT17(uVar3,(undefined7)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad931 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad931 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar6 != 0) && (plVar2 = *(long **)(lVar6 + 0x60), plVar2 != (long *)0x0)) {
    lVar6 = *plVar2;
    (**(code **)(lVar6 + 0x7d8))
              (plVar2,uVar4 & 0xff,*(undefined8 *)(lVar6 + 0x7e0),lVar6,*(code **)(lVar6 + 0x7d8));
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad932 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x4212fb0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  undefined1 uVar3;
  uint uVar4;
  System_String_o *pSVar5;
  CustomLogic_CustomLogicToggleBuiltin_o *value;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicToggleBuiltin_o *unaff_RBX;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEB40 *obj_00;
  long lVar7;
  MethodInfo *pMVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicToggleBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  CustomLogic_CustomLogicToggleBuiltin_o *pCStack_20;
  
  if (__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    if (g_data_057ad924 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad924 = '\x01';
    }
    __this = (__i->fields)._toggle;
    unaff_RBX = __i;
    if (__this != (UnityEngine_UIElements_Toggle_o *)0x0) {
      pSVar5 = UnityEngine_UIElements_BaseField_bool___get_label
                         ((UnityEngine_UIElements_BaseField_bool__o *)__this,MethodInfo_String_get_label);
      return (Il2CppObject *)pSVar5;
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCStack_20 = unaff_RBX;
  if (g_data_057ad92f == '\0') {
    uStack_28 = 0x4213020;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x421302c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad92f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x421304b;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x421305d;
  obj = MethodInfo_String_ConvertTo_String;
  pMVar8 = method;
  value = (CustomLogic_CustomLogicToggleBuiltin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if (lVar7 != 0) {
    if (g_data_057ad925 == '\0') {
      uStack_28 = 0x421307a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad925 = '\x01';
    }
    pMVar8 = (MethodInfo *)0x0;
    unaff_RBX = value;
    if (*(UnityEngine_UIElements_BaseField_bool__o **)(lVar7 + 0x60) !=
        (UnityEngine_UIElements_BaseField_bool__o *)0x0) {
      UnityEngine_UIElements_BaseField_bool___set_label
                (*(UnityEngine_UIElements_BaseField_bool__o **)(lVar7 + 0x60),(System_String_o *)value,
                 MethodInfo_Void_set_label);
      return extraout_RAX;
    }
  }
  uStack_28 = 0x42130a6;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar8 != (MethodInfo *)0x0) &&
     ((UnityEngine_UIElements_BaseBoolField_o *)pMVar8[1].virtualMethodPointer !=
      (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    pSVar5 = UnityEngine_UIElements_BaseBoolField__get_text
                       ((UnityEngine_UIElements_BaseBoolField_o *)pMVar8[1].virtualMethodPointer,
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  lVar7 = 0;
  pMStack_30 = (MethodInfo *)0x42130cc;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = unaff_RBX;
  pMStack_30 = method;
  if (g_data_057ad930 == '\0') {
    uStack_48 = (code *)0x42130ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_48 = (code *)0x42130fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad930 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = (code *)0x421311a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = (code *)0x421312c;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pSVar5 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if ((lVar7 != 0) &&
     (obj = (MethodInfo_24EEB40 *)0x0,
     *(UnityEngine_UIElements_BaseBoolField_o **)(lVar7 + 0x60) !=
     (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__set_text
              (*(UnityEngine_UIElements_BaseBoolField_o **)(lVar7 + 0x60),pSVar5,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_48 = CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0;
  uStack_48 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EEB40 *)0x0) &&
     (pIVar1 = obj[1].virtualMethodPointer, pIVar1 != (Il2CppMethodPointer)0x0)) {
    uVar3 = (**(code **)(*(long *)pIVar1 + 0x7c8))(pIVar1,*(undefined8 *)(*(long *)pIVar1 + 2000));
    uStack_48 = (code *)CONCAT17(uVar3,(undefined7)uStack_48);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return pIVar6;
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad931 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad931 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar7 != 0) && (plVar2 = *(long **)(lVar7 + 0x60), plVar2 != (long *)0x0)) {
    lVar7 = *plVar2;
    pIVar6 = (Il2CppObject *)
             (**(code **)(lVar7 + 0x7d8))
                       (plVar2,uVar4 & 0xff,*(undefined8 *)(lVar7 + 0x7e0),lVar7,*(code **)(lVar7 + 0x7d8));
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad932 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
  return pIVar6;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4213000

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  undefined1 uVar3;
  uint uVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  System_String_o *unaff_RBX;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEB40 *obj_00;
  long lVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_String_o *pSStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ad92f == '\0') {
    uStack_20 = 0x4213020;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x421302c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad92f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x421304b;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x421305d;
  obj = MethodInfo_String_ConvertTo_String;
  pIVar6 = __v;
  pSVar5 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    if (g_data_057ad925 == '\0') {
      uStack_20 = 0x421307a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad925 = '\x01';
    }
    __this = (__i->fields)._toggle;
    pIVar6 = (Il2CppObject *)0x0;
    unaff_RBX = pSVar5;
    if (__this != (UnityEngine_UIElements_Toggle_o *)0x0) {
      UnityEngine_UIElements_BaseField_bool___set_label
                ((UnityEngine_UIElements_BaseField_bool__o *)__this,pSVar5,MethodInfo_Void_set_label);
      return;
    }
  }
  uStack_20 = 0x42130a6;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar6[6].klass != (Il2CppClass *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__get_text
              ((UnityEngine_UIElements_BaseBoolField_o *)pIVar6[6].klass,(MethodInfo *)0x0);
    return;
  }
  lVar7 = 0;
  pIStack_28 = (Il2CppObject *)0x42130cc;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = unaff_RBX;
  pIStack_28 = __v;
  if (g_data_057ad930 == '\0') {
    uStack_40 = (code *)0x42130ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = (code *)0x42130fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad930 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = (code *)0x421311a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = (code *)0x421312c;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pSVar5 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if ((lVar7 != 0) &&
     (obj = (MethodInfo_24EEB40 *)0x0,
     *(UnityEngine_UIElements_BaseBoolField_o **)(lVar7 + 0x60) !=
     (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__set_text
              (*(UnityEngine_UIElements_BaseBoolField_o **)(lVar7 + 0x60),pSVar5,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0;
  uStack_40 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EEB40 *)0x0) &&
     (pIVar1 = obj[1].virtualMethodPointer, pIVar1 != (Il2CppMethodPointer)0x0)) {
    uVar3 = (**(code **)(*(long *)pIVar1 + 0x7c8))(pIVar1,*(undefined8 *)(*(long *)pIVar1 + 2000));
    uStack_40 = (code *)CONCAT17(uVar3,(undefined7)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad931 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad931 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar7 != 0) && (plVar2 = *(long **)(lVar7 + 0x60), plVar2 != (long *)0x0)) {
    lVar7 = *plVar2;
    (**(code **)(lVar7 + 0x7d8))
              (plVar2,uVar4 & 0xff,*(undefined8 *)(lVar7 + 0x7e0),lVar7,*(code **)(lVar7 + 0x7d8));
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad932 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_3_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x42130b0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_3_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  undefined1 uVar3;
  uint uVar4;
  System_String_o *pSVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar6;
  MethodInfo_24EEB40 *obj;
  long lVar7;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (__this = (__i->fields)._toggle, __this != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    pSVar5 = UnityEngine_UIElements_BaseBoolField__get_text
                       ((UnityEngine_UIElements_BaseBoolField_o *)__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar5;
  }
  lVar7 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad930 == '\0') {
    uStack_28 = (code *)0x42130ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = (code *)0x42130fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad930 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = (code *)0x421311a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = (code *)0x421312c;
  obj = MethodInfo_String_ConvertTo_String;
  pSVar5 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if ((lVar7 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_UIElements_BaseBoolField_o **)(lVar7 + 0x60) !=
     (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__set_text
              (*(UnityEngine_UIElements_BaseBoolField_o **)(lVar7 + 0x60),pSVar5,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0;
  uStack_28 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) &&
     (pIVar1 = method[1].virtualMethodPointer, pIVar1 != (Il2CppMethodPointer)0x0)) {
    uVar3 = (**(code **)(*(long *)pIVar1 + 0x7c8))(pIVar1,*(undefined8 *)(*(long *)pIVar1 + 2000));
    uStack_28 = (code *)CONCAT17(uVar3,(undefined7)uStack_28);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar6;
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad931 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad931 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar7 != 0) && (plVar2 = *(long **)(lVar7 + 0x60), plVar2 != (long *)0x0)) {
    lVar7 = *plVar2;
    pIVar6 = (Il2CppObject *)
             (**(code **)(lVar7 + 0x7d8))
                       (plVar2,uVar4 & 0xff,*(undefined8 *)(lVar7 + 0x7e0),lVar7,*(code **)(lVar7 + 0x7d8));
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad932 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
  return pIVar6;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_3_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x42130d0

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_3_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  Il2CppClass *pIVar1;
  void *pvVar2;
  long *plVar3;
  undefined1 uVar4;
  uint uVar5;
  System_String_o *value;
  Il2CppObject *__this_00;
  MethodInfo_24EEB40 *obj;
  long lVar6;
  undefined8 uStack_20;
  
  if (g_data_057ad930 == '\0') {
    uStack_20 = (code *)0x42130ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = (code *)0x42130fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad930 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = (code *)0x421311a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = (code *)0x421312c;
  obj = MethodInfo_String_ConvertTo_String;
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (__this = (__i->fields)._toggle, __v = (Il2CppObject *)0x0,
     __this != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__set_text
              ((UnityEngine_UIElements_BaseBoolField_o *)__this,value,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0;
  uStack_20 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (pIVar1 = __v[6].klass, pIVar1 != (Il2CppClass *)0x0)) {
    pvVar2 = (pIVar1->_1).image;
    uVar4 = (**(code **)((long)pvVar2 + 0x7c8))(pIVar1,*(undefined8 *)((long)pvVar2 + 2000));
    uStack_20 = (code *)CONCAT17(uVar4,(undefined7)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad931 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad931 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar6 != 0) && (plVar3 = *(long **)(lVar6 + 0x60), plVar3 != (long *)0x0)) {
    lVar6 = *plVar3;
    (**(code **)(lVar6 + 0x7d8))
              (plVar3,uVar5 & 0xff,*(undefined8 *)(lVar6 + 0x7e0),lVar6,*(code **)(lVar6 + 0x7d8));
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad932 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x4213150

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  long *plVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    uStack_8 = in_RAX;
    uVar3 = (*(pUVar1->klass->vtable)._105_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._105_get_value.method);
    uStack_8 = CONCAT17(uVar3,(undefined7)uStack_8);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar5;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad931 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad931 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar6 != 0) && (plVar2 = *(long **)(lVar6 + 0x60), plVar2 != (long *)0x0)) {
    lVar6 = *plVar2;
    pIVar5 = (Il2CppObject *)
             (**(code **)(lVar6 + 0x7d8))
                       (plVar2,uVar4 & 0xff,*(undefined8 *)(lVar6 + 0x7e0),lVar6,*(code **)(lVar6 + 0x7d8));
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad932 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return pIVar5;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_4_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4213190

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_4_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  UnityEngine_UIElements_Toggle_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  uint uVar3;
  Il2CppObject *__this;
  
  if (g_data_057ad931 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad931 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    pUVar2 = pUVar1->klass;
    vtableDispatch = (pUVar2->vtable)._106_set_value.methodPtr;
    (*vtableDispatch)
              (pUVar1,(ulong)(uVar3 & 0xff),(pUVar2->vtable)._106_set_value.method,pUVar2,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad932 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin___ctor (CustomLogic_CustomLogicToggleBuiltin_o* __this, UnityEngine_UIElements_Toggle_o* toggle, const MethodInfo* method);
// 0x42121b0

void CustomLogic_CustomLogicToggleBuiltin___ctor
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,UnityEngine_UIElements_Toggle_o *toggle,
               MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ad922 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Boolean);
    g_data_057ad922 = '\x01';
    method = extraout_RDX;
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)toggle,method);
  (__this->fields)._toggle = toggle;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._toggle,toggle);
  control = (__this->fields)._toggle;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_bool);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_bool_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Boolean);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__OnValueChanged (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x4212310

void CustomLogic_CustomLogicToggleBuiltin__OnValueChanged
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  code *UNRECOVERED_JUMPTABLE_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  System_String_o *value_00;
  System_String_o *value_01;
  UnityEngine_UIElements_BaseField_bool__o *pUVar5;
  UnityEngine_UIElements_BaseBoolField_o *pUVar6;
  long *plVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  CustomLogic_UserMethod_o *userMethod;
  
  if (g_data_057ad923 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad923 = '\x01';
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
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
  if (parameterValues == (System_Object_array *)0x0) {
label_0421240f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar1 != (Il2CppObject *)0x0) && (lVar2 = il2cpp_runtime_helper_023051f0(pIVar1), lVar2 == 0))
    goto label_04212419;
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = pIVar1;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
      goto label_0421240f;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_04212419:
  lVar2 = il2cpp_runtime_helper_0231b270();
  value_00 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ad924 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad924 = '\x01';
  }
  pUVar5 = *(UnityEngine_UIElements_BaseField_bool__o **)(lVar2 + 0x60);
  if (pUVar5 != (UnityEngine_UIElements_BaseField_bool__o *)0x0) {
    UnityEngine_UIElements_BaseField_bool___get_label(pUVar5,MethodInfo_String_get_label);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  value_01 = value_00;
  if (g_data_057ad925 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad925 = '\x01';
  }
  pUVar5 = *(UnityEngine_UIElements_BaseField_bool__o **)&(pUVar5->fields).m_RenderHints;
  if (pUVar5 != (UnityEngine_UIElements_BaseField_bool__o *)0x0) {
    UnityEngine_UIElements_BaseField_bool___set_label(pUVar5,value_00,MethodInfo_Void_set_label);
    return;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = *(UnityEngine_UIElements_BaseBoolField_o **)&(pUVar5->fields).m_RenderHints;
  if (pUVar6 != (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    UnityEngine_UIElements_BaseBoolField__get_text(pUVar6,(MethodInfo *)0x0);
    return;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = *(UnityEngine_UIElements_BaseBoolField_o **)&(pUVar6->fields).m_RenderHints;
  if (pUVar6 == (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    plVar7 = *(long **)&(pUVar6->fields).m_RenderHints;
    if (plVar7 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar7 + 0x7c8);
      (*UNRECOVERED_JUMPTABLE_00)
                (plVar7,*(undefined8 *)(*plVar7 + 2000),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar7 = (long *)plVar7[0xc];
    if (plVar7 == (long *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      plVar7[0xd] = (long)value_01;
      il2cpp_runtime_helper_022b4080(plVar7 + 0xd);
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar7 + 0x7d8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar7,(ulong)value_01 & 0xff,*(undefined8 *)(*plVar7 + 0x7e0),UNRECOVERED_JUMPTABLE_00,in_R8,
               in_R9,uVar4,uVar3);
    return;
  }
  UnityEngine_UIElements_BaseBoolField__set_text(pUVar6,value_01,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_Label (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x4212430

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_Label
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar1;
  System_String_o *extraout_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  System_String_o *extraout_RAX_00;
  undefined8 extraout_RDX;
  MethodInfo *value;
  UnityEngine_UIElements_Toggle_o *__this_00;
  UnityEngine_UIElements_BaseField_bool__o *__this_01;
  UnityEngine_UIElements_BaseBoolField_o *pUVar4;
  long *plVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  
  if (g_data_057ad924 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad924 = '\x01';
  }
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseField_bool___get_label
                       ((UnityEngine_UIElements_BaseField_bool__o *)__this_00,MethodInfo_String_get_label);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  value = method;
  if (g_data_057ad925 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad925 = '\x01';
  }
  __this_01 = *(UnityEngine_UIElements_BaseField_bool__o **)&(__this_00->fields).m_RenderHints;
  if (__this_01 != (UnityEngine_UIElements_BaseField_bool__o *)0x0) {
    UnityEngine_UIElements_BaseField_bool___set_label(__this_01,(System_String_o *)method,MethodInfo_Void_set_label);
    return extraout_RAX;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar4 = *(UnityEngine_UIElements_BaseBoolField_o **)&(__this_01->fields).m_RenderHints;
  if (pUVar4 != (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseBoolField__get_text(pUVar4,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pUVar4 = *(UnityEngine_UIElements_BaseBoolField_o **)&(pUVar4->fields).m_RenderHints;
  if (pUVar4 != (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    UnityEngine_UIElements_BaseBoolField__set_text(pUVar4,(System_String_o *)value,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)&(pUVar4->fields).m_RenderHints;
  if (plVar5 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x7c8);
    pSVar1 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar5,*(undefined8 *)(*plVar5 + 2000),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = (System_String_o *)plVar5[0xc];
  if (pSVar1 != (System_String_o *)0x0) {
    vtableDispatch = pSVar1->klass[2].vtable._13_System_IConvertible_ToByte.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtableDispatch)
                       (pSVar1,(ulong)value & 0xff,
                        pSVar1->klass[2].vtable._13_System_IConvertible_ToByte.method,vtableDispatch,
                        in_R8,in_R9,uVar3,uVar2);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1[4].monitor = value;
  il2cpp_runtime_helper_022b4080(&pSVar1[4].monitor);
  return pSVar1;
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Label (CustomLogic_CustomLogicToggleBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4212470

void CustomLogic_CustomLogicToggleBuiltin__set_Label
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  System_String_o *value_00;
  UnityEngine_UIElements_Toggle_o *__this_00;
  UnityEngine_UIElements_BaseBoolField_o *pUVar3;
  long *plVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  
  value_00 = value;
  if (g_data_057ad925 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad925 = '\x01';
  }
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    UnityEngine_UIElements_BaseField_bool___set_label
              ((UnityEngine_UIElements_BaseField_bool__o *)__this_00,value,MethodInfo_Void_set_label);
    return;
  }
  uVar1 = il2cpp_runtime_helper_022b2c90();
  pUVar3 = *(UnityEngine_UIElements_BaseBoolField_o **)&(__this_00->fields).m_RenderHints;
  if (pUVar3 != (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    UnityEngine_UIElements_BaseBoolField__get_text(pUVar3,(MethodInfo *)0x0);
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar3 = *(UnityEngine_UIElements_BaseBoolField_o **)&(pUVar3->fields).m_RenderHints;
  if (pUVar3 != (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    UnityEngine_UIElements_BaseBoolField__set_text(pUVar3,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)&(pUVar3->fields).m_RenderHints;
  if (plVar4 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x7c8);
    (*UNRECOVERED_JUMPTABLE_00)(plVar4,*(undefined8 *)(*plVar4 + 2000),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = (long *)plVar4[0xc];
  if (plVar4 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x7d8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar4,(ulong)value_00 & 0xff,*(undefined8 *)(*plVar4 + 0x7e0),UNRECOVERED_JUMPTABLE_00,in_R8,
               in_R9,uVar2,uVar1);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4[0xd] = (long)value_00;
  il2cpp_runtime_helper_022b4080(plVar4 + 0xd);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_Text (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x42124c0

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_Text
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar1;
  undefined8 uVar2;
  System_String_o *extraout_RAX;
  undefined8 extraout_RDX;
  UnityEngine_UIElements_Toggle_o *__this_00;
  UnityEngine_UIElements_BaseBoolField_o *__this_01;
  long *plVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseBoolField__get_text
                       ((UnityEngine_UIElements_BaseBoolField_o *)__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  __this_01 = *(UnityEngine_UIElements_BaseBoolField_o **)
               &((UnityEngine_UIElements_BaseBoolField_Fields *)&__this_00->fields)->m_RenderHints;
  if (__this_01 != (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    UnityEngine_UIElements_BaseBoolField__set_text(__this_01,(System_String_o *)method,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar3 = *(long **)&(__this_01->fields).m_RenderHints;
  if (plVar3 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x7c8);
    pSVar1 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar3,*(undefined8 *)(*plVar3 + 2000),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = (System_String_o *)plVar3[0xc];
  if (pSVar1 != (System_String_o *)0x0) {
    vtableDispatch = pSVar1->klass[2].vtable._13_System_IConvertible_ToByte.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtableDispatch)
                       (pSVar1,(ulong)method & 0xff,
                        pSVar1->klass[2].vtable._13_System_IConvertible_ToByte.method,vtableDispatch,
                        in_R8,in_R9,uVar2);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1[4].monitor = method;
  il2cpp_runtime_helper_022b4080(&pSVar1[4].monitor);
  return pSVar1;
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Text (CustomLogic_CustomLogicToggleBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x42124e0

void CustomLogic_CustomLogicToggleBuiltin__set_Text
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 extraout_RDX;
  UnityEngine_UIElements_Toggle_o *__this_00;
  long *plVar1;
  
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    UnityEngine_UIElements_BaseBoolField__set_text
              ((UnityEngine_UIElements_BaseBoolField_o *)__this_00,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar1 = *(long **)&((UnityEngine_UIElements_BaseBoolField_Fields *)&__this_00->fields)->m_RenderHints;
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x7c8);
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,*(undefined8 *)(*plVar1 + 2000),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar1 = (long *)plVar1[0xc];
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x7d8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar1,(ulong)value & 0xff,*(undefined8 *)(*plVar1 + 0x7e0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar1[0xd] = (long)value;
  il2cpp_runtime_helper_022b4080(plVar1 + 0xd);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Value
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_Value (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x4212500

bool_conflict
CustomLogic_CustomLogicToggleBuiltin__get_Value
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  code *vtableDispatch;
  bool_conflict bVar1;
  undefined8 in_RDX;
  UnityEngine_UIElements_Toggle_o *pUVar2;
  long *plVar3;
  
  pUVar2 = (__this->fields)._toggle;
  if (pUVar2 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar2->klass->vtable)._105_get_value.methodPtr;
    bVar1 = (*UNRECOVERED_JUMPTABLE_00)
                      (pUVar2,(pUVar2->klass->vtable)._105_get_value.method,in_RDX,UNRECOVERED_JUMPTABLE_00);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar3 = *(long **)&(pUVar2->fields).m_RenderHints;
  if (plVar3 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar3 + 0x7d8);
    bVar1 = (*vtableDispatch)
                      (plVar3,(ulong)method & 0xff,*(undefined8 *)(*plVar3 + 0x7e0),vtableDispatch);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar3[0xd] = (long)method;
  il2cpp_runtime_helper_022b4080(plVar3 + 0xd);
  return (bool_conflict)plVar3;
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Value (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x4212530

void CustomLogic_CustomLogicToggleBuiltin__set_Value
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined4 in_register_00000034;
  undefined8 uVar1;
  UnityEngine_UIElements_Toggle_o *pUVar2;
  
  uVar1 = CONCAT44(in_register_00000034,value);
  pUVar2 = (__this->fields)._toggle;
  if (pUVar2 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    vtableDispatch = (pUVar2->klass->vtable)._106_set_value.methodPtr;
    (*vtableDispatch)
              (pUVar2,(ulong)(byte)value,(pUVar2->klass->vtable)._106_set_value.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (pUVar2->fields).lastLayout.fields.m_YMin = (float)(int)uVar1;
  (pUVar2->fields).lastLayout.fields.m_Width = (float)(int)((ulong)uVar1 >> 0x20);
  il2cpp_runtime_helper_022b4080(&(pUVar2->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicToggleBuiltin__OnValueChanged (CustomLogic_CustomLogicToggleBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x4212560

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicToggleBuiltin__OnValueChanged_4112560
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x4212580

void CustomLogic_CustomLogicToggleBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 in_register_00000034;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
    (*vtableDispatch)
              (pUVar1,(ulong)(byte)value,(pUVar1->klass->vtable)._114_SetValueWithoutNotify.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0,CONCAT44(in_register_00000034,value));
  if (g_data_057ad926 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Toggle");
    g_data_057ad926 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_ClassName (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x42125b0

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_ClassName
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad926 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Toggle");
    g_data_057ad926 = '\x01';
  }
  return "Toggle";
}


// CustomLogic.CustomLogicToggleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_IsAbstract (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x42125e0

bool_conflict
CustomLogic_CustomLogicToggleBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicToggleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_IsStatic (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x42125f0

bool_conflict
CustomLogic_CustomLogicToggleBuiltin__get_IsStatic
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x4212600

bool_conflict
CustomLogic_CustomLogicToggleBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicToggleBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicToggleBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_bool__o* evt, const MethodInfo* method);
// 0x4212610

void CustomLogic_CustomLogicToggleBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,UnityEngine_UIElements_ChangeEvent_bool__o *evt
               ,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  System_Action_T__object__o *pSVar9;
  CustomLogic_CLPropertyBinding_T__o *pCVar10;
  System_Func_T__object____object__o *pSVar11;
  CustomLogic_CLMethodBinding_T__o *pCVar12;
  MethodInfo *extraout_RDX;
  System_ArgumentException_o **ppSVar13;
  CustomLogic_CustomLogicToggleBuiltin_o *pCVar14;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_48;
  System_ArgumentException_o *pSStack_40;
  undefined8 uStack_30;
  UnityEngine_UIElements_ChangeEvent_bool__o *pUStack_28;
  CustomLogic_CustomLogicToggleBuiltin_o *pCStack_20;
  
  pCVar14 = __this;
  if (g_data_057ad927 == '\0') {
    pCVar14 = (CustomLogic_CustomLogicToggleBuiltin_o *)&MethodInfo_Boolean_get_newValue;
    pCStack_20 = (CustomLogic_CustomLogicToggleBuiltin_o *)0x421262f;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad927 = '\x01';
    method = extraout_RDX;
  }
  if (evt != (UnityEngine_UIElements_ChangeEvent_bool__o *)0x0) {
    CustomLogic_CustomLogicToggleBuiltin__OnValueChanged
              (__this,(uint)*(byte *)((long)&(evt->fields)._previousValue_k__BackingField + 1),method);
    return;
  }
  pCStack_20 = (CustomLogic_CustomLogicToggleBuiltin_o *)0x4212653;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pUStack_28 = evt;
  pCStack_20 = __this;
  il2cpp_runtime_helper_01f681a0();
  uStack_30 = CONCAT44(*(undefined4 *)&(pCVar14->fields).Variables,(undefined4)uStack_30);
  pSVar4 = System_Int32__ToString((int)&uStack_30 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicToggleBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this_00,(System_String_o *)message,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToggleBuiltin_CreateInstance);
  pSVar7 = __this_00;
  pSStack_48 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this_00,uVar6);
  ppSVar13 = &pSStack_48;
  pSStack_40 = __this_00;
  if (g_data_057ad928 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Value");
    g_data_057ad928 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Label",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Text",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad92a == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
        g_data_057ad92a = '\x01';
        message = pSStack_40;
      }
      pSStack_40 = message;
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar10 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      return;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Value",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad92b == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
        g_data_057ad92b = '\x01';
        message = pSStack_40;
      }
      pSStack_40 = message;
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar10 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      return;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"OnValueChanged",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad92c == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad92c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = message;
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
        pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar11;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar11);
      }
      pCVar12 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar12,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
      return;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad92d == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__6);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad92d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = message;
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
        pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar11;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar11);
      }
      pCVar12 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar12,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
      return;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicToggleBuiltin not found");
    message = (System_ArgumentException_o *)
              System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar7,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,(System_String_o *)message,(MethodInfo *)0x0)
    ;
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar7,uVar6);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar13 = (System_ArgumentException_o **)&uStack_30;
    pSVar7 = pSStack_40;
  }
  else {
    ppSVar13 = (System_ArgumentException_o **)&uStack_30;
    pSVar7 = pSStack_40;
  }
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x18) = pSVar7;
  if (g_data_057ad929 == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x421293a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicToggleBuiltin_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x4212946;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x4212952;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x421295e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x421296a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x4212976;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicToggleBuiltin_object);
    g_data_057ad929 = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x421298c;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicToggleBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42129a5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42129b4;
  pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicToggleBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42129cd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42129dc;
  pCVar10 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x42129f7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return;
}


