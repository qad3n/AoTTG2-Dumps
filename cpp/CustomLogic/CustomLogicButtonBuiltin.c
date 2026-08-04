// Type: CustomLogic.CustomLogicButtonBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicButtonBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicButtonBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicButtonBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41e75a0

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicButtonBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicButtonBuiltin_o *pCVar10;
  System_Func_T__object____object__o *function;
  System_ArgumentException_o **ppSVar11;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  uStack_18 = CONCAT44((int)args->max_length,(undefined4)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicButtonBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicButtonBuiltin_CreateInstance);
  pSVar7 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this,uVar6);
  ppSVar11 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad7bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"OnClick");
    il2cpp_runtime_helper_023445d0(&"EnableRichText");
    g_data_057ad7bd = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Text",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"EnableRichText",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7bf == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicButtonBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EnableRichText_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__EnableRichText_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object);
        g_data_057ad7bf = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicButtonBuiltin_object);
      System_Action_object__object____ctor();
      pCVar10 = (CustomLogic_CustomLogicButtonBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
      return pCVar10;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"OnClick",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7c0 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnClick_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7c0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      pCVar10 = (CustomLogic_CustomLogicButtonBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,function,MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
      return pCVar10;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicButtonBuiltin not found");
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
    ppSVar11 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  else {
    ppSVar11 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar11 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x18) = pSVar7;
  if (g_data_057ad7be == '\0') {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e77da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicButtonBuiltin_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e77e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_2_0);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e77f2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_2_1);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e77fe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e780a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e7816;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object);
    g_data_057ad7be = '\x01';
  }
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e782c;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e7845;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e7854;
  pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicButtonBuiltin_object);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e786d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e787c;
  pCVar10 = (CustomLogic_CustomLogicButtonBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x41e7897;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
  return pCVar10;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41e7d60

void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7c4 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41e7dd0

void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnClick>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings___c_____CreateMethodBinding__OnClick_b__4_0 (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicButtonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41e7de0

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings___c_____CreateMethodBinding__OnClick_b__4_0
          (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicButtonBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  bool_conflict bVar1;
  CustomLogic_UserMethod_o *pCVar2;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined4 extraout_var;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  
  visualElement = (UnityEngine_UIElements_VisualElement_o *)__c;
  if (g_data_057ad7c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7c5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041e7e70;
    __this = (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    visualElement = MethodInfo_UserMethod_ConvertTo_UserMethod;
    pCVar2 = (CustomLogic_UserMethod_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) {
      (__c->fields)._clickEvent = pCVar2;
      il2cpp_runtime_helper_022b4080(&(__c->fields)._clickEvent,pCVar2);
      return (Il2CppObject *)__c;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041e7e70:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad7c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    g_data_057ad7c6 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),visualElement);
  control = ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_string);
  UnityEngine_UIElements_EventCallback_object____ctor();
  bVar1 = UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
                    ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
  return (Il2CppObject *)CONCAT44(extraout_var,bVar1);
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicButtonBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41e7630

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicButtonBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad7bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"OnClick");
    il2cpp_runtime_helper_023445d0(&"EnableRichText");
    g_data_057ad7bd = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"EnableRichText",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7bf == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicButtonBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EnableRichText_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__EnableRichText_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object);
        g_data_057ad7bf = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicButtonBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
    bVar3 = System_String__op_Equality(name,"OnClick",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7c0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnClick_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7c0 = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      __this = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(__this,function,MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)__this;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicButtonBuiltin not found");
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
  if (g_data_057ad7be == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e77da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicButtonBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e77e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e77f2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e77fe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e780a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e7816;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object);
    g_data_057ad7be = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e782c;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e7845;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e7854;
  pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicButtonBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e786d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e787c;
  pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e7897;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x41e77c0

CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this;
  
  if (g_data_057ad7be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicButtonBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object);
    g_data_057ad7be = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicButtonBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText (const MethodInfo* method);
// 0x41e78a0

CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this;
  
  if (g_data_057ad7bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicButtonBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EnableRichText_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__EnableRichText_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object);
    g_data_057ad7bf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicButtonBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreateMethodBinding__OnClick
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick (const MethodInfo* method);
// 0x41e7980

CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *__this;
  
  if (g_data_057ad7c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicButtonBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnClick_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7c0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicButtonBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41e7ad0

void CustomLogic_CustomLogicButtonBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Slot_T__array *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  uint uVar4;
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *pIVar5;
  undefined8 extraout_RDX;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EEB40 *obj_00;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  long lVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  
  if (g_data_057ad7c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"OnClick");
    il2cpp_runtime_helper_023445d0(&"EnableRichText");
    g_data_057ad7c1 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  pSVar6 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Text",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EnableRichText",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OnClick",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (pSVar1 = pSVar6[1].fields._slots, pSVar1 != (System_Collections_Generic_HashSet_Slot_T__array *)0x0)) {
    pIVar2 = (pSVar1->obj).klass;
    vtableDispatch = pIVar2->vtable[0xa6].methodPtr;
    (*vtableDispatch)(pSVar1,pIVar2->vtable[0xa6].method,extraout_RDX,vtableDispatch);
    return;
  }
  lVar7 = 0;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this;
  if (g_data_057ad7c2 == '\0') {
    uStack_40 = 0x41e7c2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x41e7c3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7c2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41e7c5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41e7c6c;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if ((lVar7 != 0) &&
     (plVar3 = *(long **)(lVar7 + 0x60), obj = (MethodInfo_33E0570 *)0x0, plVar3 != (long *)0x0)) {
    lVar7 = *plVar3;
    (**(code **)(lVar7 + 0xba8))(plVar3,pIVar5,*(undefined8 *)(lVar7 + 0xbb0),lVar7,*(code **)(lVar7 + 0xba8))
    ;
    return;
  }
  uStack_40 = 0x41e7c9d;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_33E0570 *)0x0) && (obj[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_40 = CONCAT17(obj[1].virtualMethodPointer[0x3f8],(undefined7)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7c3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((obj != (MethodInfo_33E0570 *)0x0) &&
     ((UnityEngine_UIElements_TextElement_o *)obj[1].virtualMethodPointer !=
      (UnityEngine_UIElements_TextElement_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)obj[1].virtualMethodPointer,uVar4 & 0xff,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7c4 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0 (CustomLogic_CustomLogicButtonBuiltin_o* __i, const MethodInfo* method);
// 0x41e7be0

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0
          (CustomLogic_CustomLogicButtonBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  long *plVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX;
  undefined8 in_RDX;
  MethodInfo_24EEB40 *obj;
  long lVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._button, pUVar1 != (UnityEngine_UIElements_Button_o *)0x0)) {
    vtableDispatch = (pUVar1->klass->vtable)._166_get_text.methodPtr;
    pIVar4 = (Il2CppObject *)
             (*vtableDispatch)
                       (pUVar1,(pUVar1->klass->vtable)._166_get_text.method,in_RDX,vtableDispatch);
    return pIVar4;
  }
  lVar5 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c2 == '\0') {
    uStack_28 = 0x41e7c2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x41e7c3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7c2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41e7c5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41e7c6c;
  obj = MethodInfo_String_ConvertTo_String;
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if ((lVar5 != 0) && (plVar2 = *(long **)(lVar5 + 0x60), method = (MethodInfo *)0x0, plVar2 != (long *)0x0))
  {
    lVar5 = *plVar2;
    pIVar4 = (Il2CppObject *)
             (**(code **)(lVar5 + 0xba8))
                       (plVar2,pIVar4,*(undefined8 *)(lVar5 + 0xbb0),lVar5,*(code **)(lVar5 + 0xba8));
    return pIVar4;
  }
  uStack_28 = 0x41e7c9d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && (method[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_28 = CONCAT17(method[1].virtualMethodPointer[0x3f8],(undefined7)uStack_28);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7c3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((method != (MethodInfo *)0x0) &&
     ((UnityEngine_UIElements_TextElement_o *)method[1].virtualMethodPointer !=
      (UnityEngine_UIElements_TextElement_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)method[1].virtualMethodPointer,uVar3 & 0xff,
               (MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7c4 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1 (CustomLogic_CustomLogicButtonBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41e7c10

void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1
               (CustomLogic_CustomLogicButtonBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  UnityEngine_UIElements_Button_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  uint uVar3;
  Il2CppObject *pIVar4;
  MethodInfo_24EEB40 *obj;
  undefined8 uStack_20;
  
  if (g_data_057ad7c2 == '\0') {
    uStack_20 = 0x41e7c2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x41e7c3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7c2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41e7c5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41e7c6c;
  obj = MethodInfo_String_ConvertTo_String;
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._button, __v = (Il2CppObject *)0x0,
     pUVar1 != (UnityEngine_UIElements_Button_o *)0x0)) {
    pUVar2 = pUVar1->klass;
    vtableDispatch = (pUVar2->vtable)._167_set_text.methodPtr;
    (*vtableDispatch)(pUVar1,pIVar4,(pUVar2->vtable)._167_set_text.method,pUVar2,vtableDispatch)
    ;
    return;
  }
  uStack_20 = 0x41e7c9d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[6].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT17(*(undefined1 *)&(__v[6].klass)->vtable[0x2c].methodPtr,(undefined7)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7c3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__v != (Il2CppObject *)0x0) && (__v[6].klass != (Il2CppClass *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)__v[6].klass,uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7c4 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0 (CustomLogic_CustomLogicButtonBuiltin_o* __i, const MethodInfo* method);
// 0x41e7ca0

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0
          (CustomLogic_CustomLogicButtonBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this;
  uint uVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     ((__i->fields)._button != (UnityEngine_UIElements_Button_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7c3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (__this = (__i->fields)._button, __this != (UnityEngine_UIElements_Button_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7c4 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1 (CustomLogic_CustomLogicButtonBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41e7ce0

void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1
               (CustomLogic_CustomLogicButtonBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this;
  uint uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ad7c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7c3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (__this = (__i->fields)._button, __this != (UnityEngine_UIElements_Button_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7c4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin___ctor (CustomLogic_CustomLogicButtonBuiltin_o* __this, UnityEngine_UIElements_Button_o* button, const MethodInfo* method);
// 0x41e7350

void CustomLogic_CustomLogicButtonBuiltin___ctor
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,UnityEngine_UIElements_Button_o *button,
               MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_Clickable_o *__this_01;
  System_Action_o *value;
  undefined8 extraout_RDX;
  UnityEngine_UIElements_Button_o *pUVar1;
  System_Action_o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *pSVar3;
  System_Int32_array *pSVar4;
  UnityEngine_UIElements_TextElement_o *__this_03;
  undefined8 in_R8;
  undefined8 in_R9;
  
  if (g_data_057ad7ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnClick);
    g_data_057ad7ba = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)button,(MethodInfo *)0x0);
  (__this->fields)._button = button;
  pUVar1 = button;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._button);
  __this_00 = (__this->fields)._button;
  pSVar2 = (System_Action_o *)0x0;
  if (__this_00 != (UnityEngine_UIElements_Button_o *)0x0) {
    __this_01 = UnityEngine_UIElements_Button__get_clickable(__this_00,(MethodInfo *)0x0);
    value = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pUVar1 = (UnityEngine_UIElements_Button_o *)__this;
    pSVar2 = value;
    System_Action___ctor();
    button = (UnityEngine_UIElements_Button_o *)0x0;
    if (__this_01 != (UnityEngine_UIElements_Clickable_o *)0x0) {
      UnityEngine_UIElements_Clickable__add_clicked(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad7bb = '\x01';
  }
  if ((pSVar2->fields).data == (System_DelegateData_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this_02 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
              (__this_02,(CustomLogic_UserMethod_o *)(pSVar2->fields).data,(System_Object_array *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = (__this_02->fields)._callbacks;
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *)0x0) {
    vtableDispatch =
         pSVar3->klass[2].vtable._35_System_Collections_ICollection_get_IsSynchronized.methodPtr;
    (*vtableDispatch)
              (pSVar3,pSVar3->klass[2].vtable._35_System_Collections_ICollection_get_IsSynchronized.method,
               extraout_RDX,vtableDispatch,in_R8,in_R9,__this,button);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = pSVar3[1].fields._buckets;
  if (pSVar4 != (System_Int32_array *)0x0) {
    (*((pSVar4->obj).klass)->vtable[0xa7].methodPtr)();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(pSVar4->m_Items + 0x10) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = *(UnityEngine_UIElements_TextElement_o **)(pSVar4->m_Items + 0x10);
  if (__this_03 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_03,(uint)pUVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(UnityEngine_UIElements_Button_o **)&(__this_03->fields).lastLayout.fields.m_YMin = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$OnClick
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__OnClick (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x41e7400

void CustomLogic_CustomLogicButtonBuiltin__OnClick
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *pSVar1;
  System_Int32_array *pSVar2;
  UnityEngine_UIElements_TextElement_o *__this_01;
  
  if (g_data_057ad7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad7bb = '\x01';
  }
  if ((__this->fields)._clickEvent == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
              (__this_00,(__this->fields)._clickEvent,(System_Object_array *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = (__this_00->fields)._callbacks;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *)0x0) {
    vtableDispatch =
         pSVar1->klass[2].vtable._35_System_Collections_ICollection_get_IsSynchronized.methodPtr;
    (*vtableDispatch)
              (pSVar1,pSVar1->klass[2].vtable._35_System_Collections_ICollection_get_IsSynchronized.method,
               extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar2 = pSVar1[1].fields._buckets;
  if (pSVar2 != (System_Int32_array *)0x0) {
    (*((pSVar2->obj).klass)->vtable[0xa7].methodPtr)();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(pSVar2->m_Items + 0x10) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = *(UnityEngine_UIElements_TextElement_o **)(pSVar2->m_Items + 0x10);
  if (__this_01 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_01,(uint)method & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(__this_01->fields).lastLayout.fields.m_YMin = method;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicButtonBuiltin__get_Text (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x41e7480

System_String_o *
CustomLogic_CustomLogicButtonBuiltin__get_Text
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  long lVar1;
  System_String_o *pSVar2;
  System_String_o *extraout_RAX;
  undefined8 in_RDX;
  UnityEngine_UIElements_Button_o *pUVar3;
  long *plVar4;
  UnityEngine_UIElements_TextElement_o *__this_00;
  
  pUVar3 = (__this->fields)._button;
  if (pUVar3 != (UnityEngine_UIElements_Button_o *)0x0) {
    vtableDispatch = (pUVar3->klass->vtable)._166_get_text.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtableDispatch)
                       (pUVar3,(pUVar3->klass->vtable)._166_get_text.method,in_RDX,vtableDispatch);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)&(pUVar3->fields).m_RenderHints;
  if (plVar4 != (long *)0x0) {
    pSVar2 = (System_String_o *)(**(code **)(*plVar4 + 0xba8))();
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = plVar4[0xc];
  if (lVar1 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x3f8));
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UnityEngine_UIElements_TextElement_o *)plVar4[0xc];
  if (__this_00 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,(uint)method & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(__this_00->fields).lastLayout.fields.m_YMin = method;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).lastLayout.fields.m_YMin);
  return (System_String_o *)__this_00;
}


// CustomLogic.CustomLogicButtonBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__set_Text (CustomLogic_CustomLogicButtonBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41e74b0

void CustomLogic_CustomLogicButtonBuiltin__set_Text
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  long lVar1;
  UnityEngine_UIElements_Button_o *pUVar2;
  UnityEngine_UIElements_TextElement_o *__this_00;
  
  pUVar2 = (__this->fields)._button;
  if (pUVar2 != (UnityEngine_UIElements_Button_o *)0x0) {
    vtableDispatch = (pUVar2->klass->vtable)._167_set_text.methodPtr;
    (*vtableDispatch)(pUVar2,value,(pUVar2->klass->vtable)._167_set_text.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1._0_4_ = (pUVar2->fields).m_RenderHints;
  lVar1._4_4_ = (pUVar2->fields).lastLayout.fields.m_XMin;
  if (lVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = *(UnityEngine_UIElements_TextElement_o **)&(pUVar2->fields).m_RenderHints;
  if (__this_00 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,(uint)value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(System_String_o **)&(__this_00->fields).lastLayout.fields.m_YMin = value;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_EnableRichText
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_EnableRichText (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x41e74e0

bool_conflict
CustomLogic_CustomLogicButtonBuiltin__get_EnableRichText
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  bool_conflict extraout_EAX;
  UnityEngine_UIElements_Button_o *pUVar1;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UIElements_Button_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pUVar1 >> 8),
                    *(undefined1 *)&(pUVar1->fields)._uitkTextHandle_k__BackingField);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UIElements_Button_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)pUVar1,(uint)method & 0xff,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(pUVar1->fields).lastLayout.fields.m_YMin = method;
  il2cpp_runtime_helper_022b4080(&(pUVar1->fields).lastLayout.fields.m_YMin);
  return (bool_conflict)pUVar1;
}


// CustomLogic.CustomLogicButtonBuiltin$$set_EnableRichText
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__set_EnableRichText (CustomLogic_CustomLogicButtonBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x41e7500

void CustomLogic_CustomLogicButtonBuiltin__set_EnableRichText
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  undefined4 in_register_00000034;
  undefined8 uVar1;
  UnityEngine_UIElements_Button_o *__this_00;
  
  uVar1 = CONCAT44(in_register_00000034,value);
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_UIElements_Button_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (__this_00->fields).lastLayout.fields.m_YMin = (float)(int)uVar1;
  (__this_00->fields).lastLayout.fields.m_Width = (float)(int)((ulong)uVar1 >> 0x20);
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$OnClick
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicButtonBuiltin__OnClick (CustomLogic_CustomLogicButtonBuiltin_o* __this, CustomLogic_UserMethod_o* clickEvent, const MethodInfo* method);
// 0x41e7520

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicButtonBuiltin__OnClick_40e7520
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,CustomLogic_UserMethod_o *clickEvent,
          MethodInfo *method)

{
  (__this->fields)._clickEvent = clickEvent;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._clickEvent);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicButtonBuiltin__get_ClassName (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x41e7540

System_String_o *
CustomLogic_CustomLogicButtonBuiltin__get_ClassName
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad7bc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057ad7bc = '\x01';
  }
  return "Button";
}


// CustomLogic.CustomLogicButtonBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_IsAbstract (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x41e7570

bool_conflict
CustomLogic_CustomLogicButtonBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicButtonBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_IsStatic (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x41e7580

bool_conflict
CustomLogic_CustomLogicButtonBuiltin__get_IsStatic
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x41e7590

bool_conflict
CustomLogic_CustomLogicButtonBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


