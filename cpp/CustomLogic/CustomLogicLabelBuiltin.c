// Type: CustomLogic.CustomLogicLabelBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLabelBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLabelBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLabelBuiltin_o* CustomLogic_CustomLogicLabelBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41ec060

CustomLogic_CustomLogicLabelBuiltin_o *
CustomLogic_CustomLogicLabelBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  undefined4 in_EAX;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar4;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar5;
  System_Func_T__object__o *pSVar6;
  System_Action_T__object__o *pSVar7;
  CustomLogic_CustomLogicLabelBuiltin_o *pCVar8;
  System_ArgumentException_o **ppSVar9;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uStack_18 = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  _uStack_18 = CONCAT44((int)args->max_length,uStack_18);
  pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLabelBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLabelBuiltin_CreateInstance);
  pSVar5 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this,uVar4);
  ppSVar9 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad804 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"EnableRichText");
    g_data_057ad804 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar5,"Text",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar5,"EnableRichText",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad806 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLabelBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EnableRichText_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__EnableRichText_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLabelBuiltin_object);
        g_data_057ad806 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLabelBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLabelBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicLabelBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLabelBuiltin not found");
    message = (System_ArgumentException_o *)
              System_String__Concat_3af7150(pSVar2,(System_String_o *)pSVar5,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar5 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar5,(System_String_o *)message,(MethodInfo *)0x0)
    ;
    uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar5,uVar4);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar9 = (System_ArgumentException_o **)&uStack_18;
    pSVar5 = pSStack_28;
  }
  else {
    ppSVar9 = (System_ArgumentException_o **)&uStack_18;
    pSVar5 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar9 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar9 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar9 + -0x18) = pSVar5;
  if (g_data_057ad805 == '\0') {
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec24a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLabelBuiltin_object);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec256;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_2_0);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec262;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_2_1);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec26e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec27a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec286;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLabelBuiltin_object);
    g_data_057ad805 = '\x01';
  }
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec29c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLabelBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec2b5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec2c4;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLabelBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec2dd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec2ec;
  pCVar8 = (CustomLogic_CustomLogicLabelBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41ec307;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
  return pCVar8;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLabelBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41ec0f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLabelBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_Func_T__object__o *pSVar3;
  System_Action_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad804 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"EnableRichText");
    g_data_057ad804 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"EnableRichText",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad806 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLabelBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EnableRichText_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__EnableRichText_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLabelBuiltin_object);
        g_data_057ad806 = '\x01';
      }
      pSVar3 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLabelBuiltin_object);
      System_Func_object__object____ctor();
      pSVar4 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLabelBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar3,pSVar4,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLabelBuiltin not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar2);
    register0x00000020 = (BADSPACEBASE *)auStack_18;
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad805 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec24a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLabelBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec256;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec262;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec26e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec27a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec286;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLabelBuiltin_object);
    g_data_057ad805 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec29c;
  pSVar3 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLabelBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec2b5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec2c4;
  pSVar4 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLabelBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec2dd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec2ec;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ec307;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar3,pSVar4,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o* CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x41ec230

CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *
CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this;
  
  if (g_data_057ad805 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLabelBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Text_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Text_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLabelBuiltin_object);
    g_data_057ad805 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLabelBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLabelBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o* CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText (const MethodInfo* method);
// 0x41ec310

CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *
CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this;
  
  if (g_data_057ad806 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLabelBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EnableRichText_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__EnableRichText_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLabelBuiltin_object);
    g_data_057ad806 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLabelBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLabelBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41ec3f0

void CustomLogic_CustomLogicLabelBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Slot_T__array *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  uint uVar4;
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *pIVar5;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined8 extraout_RDX;
  MethodInfo_33E0570 *obj;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  long lVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  
  if (g_data_057ad807 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"EnableRichText");
    g_data_057ad807 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  pSVar6 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Text",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"EnableRichText",MethodInfo_Boolean_Add);
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
  if (g_data_057ad808 == '\0') {
    uStack_40 = 0x41ec52f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x41ec53b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad808 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41ec55a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41ec56c;
  __this_00 = MethodInfo_String_ConvertTo_String;
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)obj,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((lVar7 != 0) &&
     (plVar3 = *(long **)(lVar7 + 0x60), obj = (MethodInfo_33E0570 *)0x0, plVar3 != (long *)0x0)) {
    lVar7 = *plVar3;
    (**(code **)(lVar7 + 0xba8))(plVar3,pIVar5,*(undefined8 *)(lVar7 + 0xbb0),lVar7,*(code **)(lVar7 + 0xba8))
    ;
    return;
  }
  uStack_40 = 0x41ec59d;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_33E0570 *)0x0) && (obj[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_40 = CONCAT17(obj[1].virtualMethodPointer[0x3f8],(undefined7)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad809 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad809 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  visualElement = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)__this_00,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((obj != (MethodInfo_33E0570 *)0x0) &&
     (__this_00 = (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0,
     (UnityEngine_UIElements_TextElement_o *)obj[1].virtualMethodPointer !=
     (UnityEngine_UIElements_TextElement_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)obj[1].virtualMethodPointer,uVar4 & 0xff,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad80a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad80a = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this_00,visualElement,(MethodInfo *)0x0);
  __this_00[1].klass = (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,visualElement);
  control = __this_00[1].klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0 (CustomLogic_CustomLogicLabelBuiltin_o* __i, const MethodInfo* method);
// 0x41ec4e0

Il2CppObject *
CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0
          (CustomLogic_CustomLogicLabelBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  long *plVar2;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  uint uVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined4 extraout_var;
  undefined8 in_RDX;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  long lVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
    vtableDispatch = (pUVar1->klass->vtable)._166_get_text.methodPtr;
    pIVar5 = (Il2CppObject *)
             (*vtableDispatch)
                       (pUVar1,(pUVar1->klass->vtable)._166_get_text.method,in_RDX,vtableDispatch);
    return pIVar5;
  }
  lVar6 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad808 == '\0') {
    uStack_28 = 0x41ec52f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x41ec53b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad808 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41ec55a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41ec56c;
  __this = MethodInfo_String_ConvertTo_String;
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((lVar6 != 0) && (plVar2 = *(long **)(lVar6 + 0x60), method = (MethodInfo *)0x0, plVar2 != (long *)0x0))
  {
    lVar6 = *plVar2;
    pIVar5 = (Il2CppObject *)
             (**(code **)(lVar6 + 0xba8))
                       (plVar2,pIVar5,*(undefined8 *)(lVar6 + 0xbb0),lVar6,*(code **)(lVar6 + 0xba8));
    return pIVar5;
  }
  uStack_28 = 0x41ec59d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && (method[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_28 = CONCAT17(method[1].virtualMethodPointer[0x3f8],(undefined7)uStack_28);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad809 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad809 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  visualElement = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)__this,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((method != (MethodInfo *)0x0) &&
     (__this = (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0,
     (UnityEngine_UIElements_TextElement_o *)method[1].virtualMethodPointer !=
     (UnityEngine_UIElements_TextElement_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)method[1].virtualMethodPointer,uVar3 & 0xff,
               (MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad80a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad80a = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this,visualElement,(MethodInfo *)0x0);
  __this[1].klass = (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080(__this + 1,visualElement);
  control = __this[1].klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  bVar4 = UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
                    ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return (Il2CppObject *)CONCAT44(extraout_var,bVar4);
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1 (CustomLogic_CustomLogicLabelBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41ec510

void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1
               (CustomLogic_CustomLogicLabelBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  UnityEngine_UIElements_Label_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  uint uVar3;
  Il2CppObject *pIVar4;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  CustomLogic_CustomLogicVisualElementBuiltin_o *__this;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  undefined8 uStack_20;
  
  if (g_data_057ad808 == '\0') {
    uStack_20 = 0x41ec52f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x41ec53b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad808 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41ec55a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41ec56c;
  __this = MethodInfo_String_ConvertTo_String;
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, __v = (Il2CppObject *)0x0,
     pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
    pUVar2 = pUVar1->klass;
    vtableDispatch = (pUVar2->vtable)._167_set_text.methodPtr;
    (*vtableDispatch)(pUVar1,pIVar4,(pUVar2->vtable)._167_set_text.method,pUVar2,vtableDispatch)
    ;
    return;
  }
  uStack_20 = 0x41ec59d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[6].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT17(*(undefined1 *)&(__v[6].klass)->vtable[0x2c].methodPtr,(undefined7)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad809 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad809 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  visualElement = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)__this,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__v != (Il2CppObject *)0x0) &&
     (__this = (CustomLogic_CustomLogicVisualElementBuiltin_o *)0x0, __v[6].klass != (Il2CppClass *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)__v[6].klass,uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad80a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad80a = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor(__this,visualElement,(MethodInfo *)0x0);
  __this[1].klass = (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080(__this + 1,visualElement);
  control = __this[1].klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0 (CustomLogic_CustomLogicLabelBuiltin_o* __i, const MethodInfo* method);
// 0x41ec5a0

Il2CppObject *
CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0
          (CustomLogic_CustomLogicLabelBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  uint uVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined4 extraout_var;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     ((__i->fields)._label != (UnityEngine_UIElements_Label_o *)0x0)) {
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad809 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad809 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  visualElement = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)method,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_TextElement_o *)(__i->fields)._label, method = (MethodInfo *)0x0,
     __this != (UnityEngine_UIElements_TextElement_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad80a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad80a = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)method,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)method + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)method + 0x60),visualElement);
  control = ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)method + 0x60))->klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  bVar2 = UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
                    ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return (Il2CppObject *)CONCAT44(extraout_var,bVar2);
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1 (CustomLogic_CustomLogicLabelBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41ec5e0

void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1
               (CustomLogic_CustomLogicLabelBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextElement_o *__this;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  uint uVar1;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  
  if (g_data_057ad809 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad809 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  visualElement = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_TextElement_o *)(__i->fields)._label, __v = (Il2CppObject *)0x0,
     __this != (UnityEngine_UIElements_TextElement_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad80a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad80a = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__v,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__v + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__v + 0x60),visualElement);
  control = ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__v + 0x60))->klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin___ctor (CustomLogic_CustomLogicLabelBuiltin_o* __this, UnityEngine_UIElements_Label_o* label, const MethodInfo* method);
// 0x41ebf30

void CustomLogic_CustomLogicLabelBuiltin___ctor
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,UnityEngine_UIElements_Label_o *label,
               MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)label,(MethodInfo *)0x0);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicLabelBuiltin__get_Text (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x41ebf60

System_String_o *
CustomLogic_CustomLogicLabelBuiltin__get_Text
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  long lVar1;
  System_String_o *pSVar2;
  System_String_o *extraout_RAX;
  undefined8 in_RDX;
  byte bVar3;
  UnityEngine_UIElements_Label_o *pUVar4;
  long *plVar5;
  
  bVar3 = (byte)method;
  pUVar4 = (__this->fields)._label;
  if (pUVar4 != (UnityEngine_UIElements_Label_o *)0x0) {
    vtableDispatch = (pUVar4->klass->vtable)._166_get_text.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtableDispatch)
                       (pUVar4,(pUVar4->klass->vtable)._166_get_text.method,in_RDX,vtableDispatch);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)&(pUVar4->fields).m_RenderHints;
  if (plVar5 != (long *)0x0) {
    pSVar2 = (System_String_o *)(**(code **)(*plVar5 + 0xba8))();
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = plVar5[0xc];
  if (lVar1 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x3f8));
  }
  il2cpp_runtime_helper_022b2c90();
  if ((UnityEngine_UIElements_TextElement_o *)plVar5[0xc] != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)plVar5[0xc],(uint)bVar3,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad803 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ad803 = '\x01';
  }
  return "Label";
}


// CustomLogic.CustomLogicLabelBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin__set_Text (CustomLogic_CustomLogicLabelBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ebf90

void CustomLogic_CustomLogicLabelBuiltin__set_Text
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  long lVar1;
  UnityEngine_UIElements_TextElement_o *__this_00;
  byte bVar2;
  UnityEngine_UIElements_Label_o *pUVar3;
  
  pUVar3 = (__this->fields)._label;
  if (pUVar3 != (UnityEngine_UIElements_Label_o *)0x0) {
    vtableDispatch = (pUVar3->klass->vtable)._167_set_text.methodPtr;
    (*vtableDispatch)(pUVar3,value,(pUVar3->klass->vtable)._167_set_text.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar2 = (byte)value;
  lVar1._0_4_ = (pUVar3->fields).m_RenderHints;
  lVar1._4_4_ = (pUVar3->fields).lastLayout.fields.m_XMin;
  if (lVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = *(UnityEngine_UIElements_TextElement_o **)&(pUVar3->fields).m_RenderHints;
  if (__this_00 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,(uint)bVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad803 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ad803 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_EnableRichText
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_EnableRichText (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x41ebfc0

bool_conflict
CustomLogic_CustomLogicLabelBuiltin__get_EnableRichText
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  UnityEngine_UIElements_TextElement_o *__this_00;
  bool_conflict extraout_EAX;
  uint uVar2;
  
  uVar2 = (uint)method;
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pUVar1 >> 8),
                    *(undefined1 *)&(pUVar1->fields)._uitkTextHandle_k__BackingField);
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UnityEngine_UIElements_TextElement_o *)(__this->fields)._label;
  if (__this_00 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,uVar2 & 0xff,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad803 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ad803 = '\x01';
  }
  return (bool_conflict)"Label";
}


// CustomLogic.CustomLogicLabelBuiltin$$set_EnableRichText
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin__set_EnableRichText (CustomLogic_CustomLogicLabelBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x41ebfe0

void CustomLogic_CustomLogicLabelBuiltin__set_EnableRichText
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  UnityEngine_UIElements_TextElement_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_TextElement_o *)(__this->fields)._label;
  if (__this_00 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad803 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ad803 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLabelBuiltin__get_ClassName (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x41ec000

System_String_o *
CustomLogic_CustomLogicLabelBuiltin__get_ClassName
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad803 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ad803 = '\x01';
  }
  return "Label";
}


// CustomLogic.CustomLogicLabelBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_IsAbstract (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x41ec030

bool_conflict
CustomLogic_CustomLogicLabelBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLabelBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_IsStatic (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x41ec040

bool_conflict
CustomLogic_CustomLogicLabelBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x41ec050

bool_conflict
CustomLogic_CustomLogicLabelBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


