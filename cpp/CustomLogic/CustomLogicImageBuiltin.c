// Type: CustomLogic.CustomLogicImageBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicImageBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicImageBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicImageBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41eb7b0

CustomLogic_CustomLogicImageBuiltin_o *
CustomLogic_CustomLogicImageBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  bool_conflict bVar3;
  CustomLogic_CustomLogicImageBuiltin_o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  System_Func_T__object____object__o *function;
  System_ArgumentException_o **ppSVar9;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad7fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicImageBuiltin);
    g_data_057ad7fb = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar4 = (CustomLogic_CustomLogicImageBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicImageBuiltin);
    if (g_data_057ad7f8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad7f8 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar4,(MethodInfo *)0x0);
    (pCVar4->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    il2cpp_runtime_helper_022b4080(&(pCVar4->fields)._currentImagePath);
    (pCVar4->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(pCVar4->fields)._currentTexture,0);
    return pCVar4;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicImageBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicImageBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this,uVar7);
  ppSVar9 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad7fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ImagePath");
    il2cpp_runtime_helper_023445d0(&"SetImage");
    g_data_057ad7fc = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar8,"ImagePath",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar8,"SetImage",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = (System_ArgumentException_o *)pSVar5;
      if (g_data_057ad7fe == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicImageBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetImage_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7fe = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicImageBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      pCVar4 = (CustomLogic_CustomLogicImageBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar4,function,MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
      return pCVar4;
    }
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicImageBuiltin not found");
    pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar9 = (System_ArgumentException_o **)&uStack_18;
    pSVar8 = pSStack_28;
  }
  else {
    ppSVar9 = (System_ArgumentException_o **)&uStack_18;
    pSVar8 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar9 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar9 + -0x10) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar9 + -0x18) = pSVar8;
  if (g_data_057ad7fd == '\0') {
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41eba7a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicImageBuiltin_object);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41eba86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ImagePath_g____getter_2);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41eba92;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ImagePath_g____setter_2_1);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41eba9e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ebaaa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ebab6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicImageBuiltin_object);
    g_data_057ad7fd = '\x01';
  }
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ebacc;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicImageBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ebae5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ebaf4;
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicImageBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ebb0d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ebb1c;
  pCVar4 = (CustomLogic_CustomLogicImageBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ebb37;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
  return pCVar4;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41ebe20

void CustomLogic_CustomLogicImageBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad801 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad801 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41ebe90

void CustomLogic_CustomLogicImageBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetImage>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicImageBuiltin_Bindings___c_____CreateMethodBinding__SetImage_b__3_0 (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicImageBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41ebea0

Il2CppObject *
CustomLogic_CustomLogicImageBuiltin_Bindings___c_____CreateMethodBinding__SetImage_b__3_0
          (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicImageBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  
  visualElement = (UnityEngine_UIElements_VisualElement_o *)__c;
  if (g_data_057ad802 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad802 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041ebf27;
    __this = (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    visualElement = MethodInfo_String_ConvertTo_String;
    value = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
      CustomLogic_CustomLogicImageBuiltin__SetImage(__c,value,method_00);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ebf27:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  pIVar1 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),
                              visualElement);
  return pIVar1;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicImageBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41eb920

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicImageBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_T__o *__this;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this_00;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad7fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ImagePath");
    il2cpp_runtime_helper_023445d0(&"SetImage");
    g_data_057ad7fc = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"ImagePath",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"SetImage",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7fe == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicImageBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetImage_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7fe = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicImageBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      __this_00 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(__this_00,function,MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicImageBuiltin not found");
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
  if (g_data_057ad7fd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eba7a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicImageBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eba86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ImagePath_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eba92;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ImagePath_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eba9e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ebaaa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ebab6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicImageBuiltin_object);
    g_data_057ad7fd = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ebacc;
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicImageBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ebae5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ebaf4;
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicImageBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ebb0d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ebb1c;
  __this = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ebb37;
  CustomLogic_CLPropertyBinding_object____ctor(__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)__this;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreatePropertyBinding__ImagePath
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o* CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath (const MethodInfo* method);
// 0x41eba60

CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *
CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *__this;
  
  if (g_data_057ad7fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicImageBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ImagePath_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ImagePath_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicImageBuiltin_object);
    g_data_057ad7fd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicImageBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicImageBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
  return __this;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreateMethodBinding__SetImage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o* CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage (const MethodInfo* method);
// 0x41ebb40

CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *
CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *__this;
  
  if (g_data_057ad7fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicImageBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetImage_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7fe = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicImageBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41ebc90

void CustomLogic_CustomLogicImageBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  System_String_o *value;
  Il2CppObject *__this_00;
  MethodInfo *method_00;
  MethodInfo_33E0570 *obj;
  System_Collections_Generic_HashSet_object__o *__this_01;
  
  if (g_data_057ad7ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"ImagePath");
    il2cpp_runtime_helper_023445d0(&"SetImage");
    g_data_057ad7ff = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  __this_01 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"ImagePath",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SetImage",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad800 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad800 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = (System_String_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    CustomLogic_CustomLogicImageBuiltin__SetImage
              ((CustomLogic_CustomLogicImageBuiltin_o *)__this_01,value,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad801 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad801 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____getter_2_0 (CustomLogic_CustomLogicImageBuiltin_o* __i, const MethodInfo* method);
// 0x41ebd80

Il2CppObject *
CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____getter_2_0
          (CustomLogic_CustomLogicImageBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  if (__i != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentImagePath;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad800 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad800 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = (System_String_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    CustomLogic_CustomLogicImageBuiltin__SetImage(__i,value,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad801 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad801 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____setter_2_1 (CustomLogic_CustomLogicImageBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41ebda0

void CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____setter_2_1
               (CustomLogic_CustomLogicImageBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  Il2CppObject *__this;
  MethodInfo *method_00;
  
  if (g_data_057ad800 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad800 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    CustomLogic_CustomLogicImageBuiltin__SetImage(__i,value,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad801 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad801 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin___ctor (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x41eb4a0

void CustomLogic_CustomLogicImageBuiltin___ctor
               (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad7f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad7f8 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentImagePath);
  (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentTexture,0);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$SetImage
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicImageBuiltin__SetImage (CustomLogic_CustomLogicImageBuiltin_o* __this, System_String_o* imagePath, const MethodInfo* method);
// 0x41eb520

void CustomLogic_CustomLogicImageBuiltin__SetImage
               (CustomLogic_CustomLogicImageBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar2;
  
  if (g_data_057ad7f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Failed to load image at path: ");
    g_data_057ad7f9 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = Utility_Util__IsValidResourcePath(value,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      x = (UnityEngine_Texture2D_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar2,value,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((((char)bVar1 != '\0') && (x != (UnityEngine_Texture2D_o *)0x0)) && (x->klass == TypeInfo_Texture2D)) {
        (__this->fields)._currentTexture = x;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._currentTexture,x);
        (__this->fields)._currentImagePath = value;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._currentImagePath,value);
        return;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality
                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    }
    pSVar2 = System_String__Concat_3ae5ba0("Failed to load image at path: ",value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  }
  else {
    (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    il2cpp_runtime_helper_022b4080(&(__this->fields)._currentImagePath);
    (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._currentTexture,0);
  }
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$get_ImagePath
// il2cpp: System_String_o* CustomLogic_CustomLogicImageBuiltin__get_ImagePath (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x41eb720

System_String_o *
CustomLogic_CustomLogicImageBuiltin__get_ImagePath
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentImagePath;
}


// CustomLogic.CustomLogicImageBuiltin$$set_ImagePath
// il2cpp: void CustomLogic_CustomLogicImageBuiltin__set_ImagePath (CustomLogic_CustomLogicImageBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41eb730

void CustomLogic_CustomLogicImageBuiltin__set_ImagePath
               (CustomLogic_CustomLogicImageBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicImageBuiltin__SetImage(__this,value,method);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$GetTexture
// il2cpp: UnityEngine_Texture2D_o* CustomLogic_CustomLogicImageBuiltin__GetTexture (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x41eb740

UnityEngine_Texture2D_o *
CustomLogic_CustomLogicImageBuiltin__GetTexture
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentTexture;
}


// CustomLogic.CustomLogicImageBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicImageBuiltin__get_ClassName (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x41eb750

System_String_o *
CustomLogic_CustomLogicImageBuiltin__get_ClassName
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad7fa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057ad7fa = '\x01';
  }
  return "Image";
}


// CustomLogic.CustomLogicImageBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_IsAbstract (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x41eb780

bool_conflict
CustomLogic_CustomLogicImageBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicImageBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_IsStatic (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x41eb790

bool_conflict
CustomLogic_CustomLogicImageBuiltin__get_IsStatic
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicImageBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x41eb7a0

bool_conflict
CustomLogic_CustomLogicImageBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


