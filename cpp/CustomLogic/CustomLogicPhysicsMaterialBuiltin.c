// Type: CustomLogic.CustomLogicPhysicsMaterialBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicsMaterialBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40f5dd0

CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  bool_conflict bVar3;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *pSVar9;
  System_Action_T__object__o *pSVar10;
  System_Func_T__object____object__o *function;
  System_ArgumentException_o **ppSVar11;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ac7db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPhysicsMaterialBuiltin);
    g_data_057ac7db = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar4 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPhysicsMaterialBuiltin);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)pCVar4,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return pCVar4;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicPhysicsMaterialBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPhysicsMaterialBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this,uVar7);
  ppSVar11 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac7dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Bounciness");
    il2cpp_runtime_helper_023445d0(&"Setup");
    il2cpp_runtime_helper_023445d0(&"StaticFriction");
    il2cpp_runtime_helper_023445d0(&"BounceCombine");
    il2cpp_runtime_helper_023445d0(&"DynamicFriction");
    il2cpp_runtime_helper_023445d0(&"FrictionCombine");
    g_data_057ac7dc = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar8,"StaticFriction",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar8,"DynamicFriction",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac7de == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DynamicFriction_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DynamicFriction_g____sette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
        g_data_057ac7de = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
      System_Action_object__object____ctor();
      pCVar4 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return pCVar4;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar8,"Bounciness",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac7df == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bounciness_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Bounciness_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
        g_data_057ac7df = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
      System_Action_object__object____ctor();
      pCVar4 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return pCVar4;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar8,"FrictionCombine",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = message;
      if (g_data_057ac7e0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrictionCombine_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__FrictionCombine_g____sette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
        g_data_057ac7e0 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
      System_Action_object__object____ctor();
      pCVar4 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return pCVar4;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar8,"BounceCombine",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = message;
      if (g_data_057ac7e1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BounceCombine_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__BounceCombine_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
        g_data_057ac7e1 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
      System_Action_object__object____ctor();
      pCVar4 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return pCVar4;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar8,"Setup",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac7e2 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Setup_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac7e2 = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      pCVar4 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar4,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return pCVar4;
    }
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPhysicsMaterialBuiltin not found");
    message = (System_ArgumentException_o *)
              System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,(System_String_o *)message,(MethodInfo *)0x0)
    ;
    uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar11 = (System_ArgumentException_o **)&uStack_18;
    pSVar8 = pSStack_28;
  }
  else {
    ppSVar11 = (System_ArgumentException_o **)&uStack_18;
    pSVar8 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar11 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar11 + -0x18) = pSVar8;
  if (g_data_057ac7dd == '\0') {
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f614a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f6156;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StaticFriction_g____gett);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f6162;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__StaticFriction_g____setter);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f616e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f617a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f6186;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
    g_data_057ac7dd = '\x01';
  }
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f619c;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f61b5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f61c4;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f61dd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f61ec;
  pCVar4 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  *(undefined8 *)((long)ppSVar11 + -0x20) = 0x40f6207;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
  return pCVar4;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40f6c10

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac7e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac7e9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40f6c80

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$<__CreateMethodBinding__Setup>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_____CreateMethodBinding__Setup_b__7_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40f6c90

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_____CreateMethodBinding__Setup_b__7_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  uint uVar1;
  Il2CppObject *extraout_RAX;
  
  if (g_data_057ac7ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7ea = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_040f6d22;
    __this = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)__this,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((__c != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value,
       __this = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *)0x0,
       __this_00 != (Map_CustomPhysicsMaterial_o *)0x0)) {
      Map_CustomPhysicsMaterial__Setup(__this_00,uVar1 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040f6d22:
  il2cpp_runtime_helper_022b2ca0();
  *(undefined1 *)
   &(((CustomLogic_BuiltinComponentInstance_o *)((long)__this + 0x38))->fields)._containsTypeOverride = 1;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40f5ec0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ac7dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Bounciness");
    il2cpp_runtime_helper_023445d0(&"Setup");
    il2cpp_runtime_helper_023445d0(&"StaticFriction");
    il2cpp_runtime_helper_023445d0(&"BounceCombine");
    il2cpp_runtime_helper_023445d0(&"DynamicFriction");
    il2cpp_runtime_helper_023445d0(&"FrictionCombine");
    g_data_057ac7dc = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"StaticFriction",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"DynamicFriction",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7de == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DynamicFriction_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DynamicFriction_g____sette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
        g_data_057ac7de = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
    bVar3 = System_String__op_Equality(name,"Bounciness",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7df == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bounciness_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Bounciness_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
        g_data_057ac7df = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
    bVar3 = System_String__op_Equality(name,"FrictionCombine",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7e0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrictionCombine_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__FrictionCombine_g____sette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
        g_data_057ac7e0 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
    bVar3 = System_String__op_Equality(name,"BounceCombine",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7e1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BounceCombine_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__BounceCombine_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
        g_data_057ac7e1 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
    bVar3 = System_String__op_Equality(name,"Setup",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7e2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Setup_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac7e2 = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      __this = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)__this;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicPhysicsMaterialBuiltin not found");
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
  if (g_data_057ac7dd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f614a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f6156;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StaticFriction_g____gett);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f6162;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__StaticFriction_g____setter);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f616e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f617a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f6186;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
    g_data_057ac7dd = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f619c;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f61b5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f61c4;
  pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f61dd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f61ec;
  pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f6207;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__StaticFriction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction (const MethodInfo* method);
// 0x40f6130

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (g_data_057ac7dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__StaticFriction_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__StaticFriction_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
    g_data_057ac7dd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__DynamicFriction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction (const MethodInfo* method);
// 0x40f6210

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (g_data_057ac7de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DynamicFriction_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DynamicFriction_g____sette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
    g_data_057ac7de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__Bounciness
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness (const MethodInfo* method);
// 0x40f62f0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (g_data_057ac7df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Bounciness_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Bounciness_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
    g_data_057ac7df = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__FrictionCombine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine (const MethodInfo* method);
// 0x40f63d0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (g_data_057ac7e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrictionCombine_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__FrictionCombine_g____sette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
    g_data_057ac7e0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__BounceCombine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine (const MethodInfo* method);
// 0x40f64b0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (g_data_057ac7e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BounceCombine_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__BounceCombine_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
    g_data_057ac7e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreateMethodBinding__Setup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup (const MethodInfo* method);
// 0x40f6590

CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (g_data_057ac7e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Setup_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac7e2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40f66e0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___cctor(MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  Map_CustomPhysicsMaterial_o *__this;
  bool_conflict bVar2;
  int32_t iVar3;
  uint uVar4;
  undefined8 uVar5;
  UnityEngine_MonoBehaviour_c *pUVar6;
  UnityEngine_MonoBehaviour_o *pUVar7;
  System_Object_array *pSVar8;
  System_Collections_Generic_HashSet_object__o *pSVar9;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  MethodInfo_33E0570 *extraout_RAX_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Il2CppObject *__this_00;
  uint uVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  System_Collections_Generic_HashSet_object__o **ppSVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 unaff_RBP;
  MethodInfo_33E0570 *pMVar16;
  MethodInfo_33E0570 *pMVar17;
  ulong uVar18;
  MethodInfo_33E0570 *pMVar19;
  MethodInfo_24EE950 *obj;
  UnityEngine_PhysicMaterial_o *pUVar20;
  UnityEngine_MonoBehaviour_o *__this_01;
  System_Collections_Generic_HashSet_object__o *pSVar21;
  long lVar22;
  undefined8 unaff_R12;
  MethodInfo_33E0570 *unaff_R14;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar23;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  System_Collections_Generic_HashSet_object__o *pSStack_90;
  MethodInfo_33E0570 *pMStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  System_Collections_Generic_HashSet_object__o *pSStack_70;
  MethodInfo_33E0570 *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  System_Collections_Generic_HashSet_object__o *pSStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  undefined8 uStack_20;
  
  if (g_data_057ac7e3 == '\0') {
    uStack_20 = (code *)0x40f66f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = (code *)0x40f6705;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x40f6711;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = (code *)0x40f671d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = (code *)0x40f6729;
    il2cpp_runtime_helper_023445d0(&"Bounciness");
    uStack_20 = (code *)0x40f6735;
    il2cpp_runtime_helper_023445d0(&"Setup");
    uStack_20 = (code *)0x40f6741;
    il2cpp_runtime_helper_023445d0(&"StaticFriction");
    uStack_20 = (code *)0x40f674d;
    il2cpp_runtime_helper_023445d0(&"BounceCombine");
    uStack_20 = (code *)0x40f6759;
    il2cpp_runtime_helper_023445d0(&"DynamicFriction");
    uStack_20 = (code *)0x40f6765;
    il2cpp_runtime_helper_023445d0(&"FrictionCombine");
    g_data_057ac7e3 = '\x01';
  }
  uStack_20 = (code *)0x40f677b;
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = (code *)0x40f6790;
  pMVar16 = MethodInfo_HashSet_1_System_String;
  pSVar11 = pSVar9;
  System_Collections_Generic_HashSet_object____ctor(pSVar9,MethodInfo_HashSet_1_System_String);
  if (pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = (code *)0x40f67b5;
    System_Collections_Generic_HashSet_object___Add(pSVar9,"StaticFriction",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x40f67ca;
    System_Collections_Generic_HashSet_object___Add(pSVar9,"DynamicFriction",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x40f67df;
    System_Collections_Generic_HashSet_object___Add(pSVar9,"Bounciness",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x40f67f4;
    System_Collections_Generic_HashSet_object___Add(pSVar9,"FrictionCombine",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x40f6809;
    System_Collections_Generic_HashSet_object___Add(pSVar9,"BounceCombine",MethodInfo_Boolean_Add);
    uStack_20 = (code *)0x40f681e;
    System_Collections_Generic_HashSet_object___Add(pSVar9,"Setup",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = pSVar9;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),pSVar9);
    return;
  }
  uStack_20 = 
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____getter_2_0
  ;
  uStack_20 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (__this = *(Map_CustomPhysicsMaterial_o **)&(pSVar11->fields)._version,
     __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    fVar23 = Map_CustomPhysicsMaterial__get_StaticFriction(__this,(MethodInfo *)0x0);
    uStack_20 = (code *)CONCAT44(fVar23,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = pSVar9;
  if (g_data_057ac7e4 == '\0') {
    uStack_40 = 0x40f68af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40f68bb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40f68da;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40f68ec;
  pMVar17 = MethodInfo_Single_ConvertTo_Single;
  pMVar19 = pMVar16;
  fVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pMVar16,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_040f6908:
    uStack_40 = 0x40f690d;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar19 != (MethodInfo_33E0570 *)0x0) && (pMVar19->rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_48 = (MethodInfo_33E0570 *)0x40f6926;
      fVar23 = Map_CustomPhysicsMaterial__get_DynamicFriction
                         ((Map_CustomPhysicsMaterial_o *)pMVar19->rgctx_data,(MethodInfo *)0x0);
      uStack_40 = CONCAT44(fVar23,(undefined4)uStack_40);
      pMStack_48 = (MethodInfo_33E0570 *)0x40f6941;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
      return;
    }
    pSVar9 = (System_Collections_Generic_HashSet_object__o *)0x0;
    pMStack_48 = (MethodInfo_33E0570 *)0x40f6948;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    pSStack_50 = pSVar11;
    pMStack_48 = pMVar16;
    if (g_data_057ac7e5 == '\0') {
      uStack_60 = 0x40f696f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      uStack_60 = 0x40f697b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e5 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_60 = 0x40f699a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_60 = 0x40f69ac;
    pMVar19 = MethodInfo_Single_ConvertTo_Single;
    pMVar16 = pMVar17;
    fVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       ((Il2CppObject *)pMVar17,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if (pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      pUVar20 = *(UnityEngine_PhysicMaterial_o **)&(pSVar9->fields)._version;
      pMVar16 = (MethodInfo_33E0570 *)0x0;
      if (pUVar20 == (UnityEngine_PhysicMaterial_o *)0x0) goto label_040f69c8;
      uVar18 = 0;
      puVar13 = &uStack_40;
      uVar5 = extraout_RAX_00;
      pSVar11 = pSStack_50;
      unaff_R14 = pMStack_48;
      goto Map_CustomPhysicsMaterial__set_DynamicFriction;
    }
label_040f69c8:
    uStack_60 = 0x40f69cd;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar16 != (MethodInfo_33E0570 *)0x0) && (pMVar16->rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_68 = (MethodInfo_33E0570 *)0x40f69e6;
      fVar23 = Map_CustomPhysicsMaterial__get_Bounciness
                         ((Map_CustomPhysicsMaterial_o *)pMVar16->rgctx_data,(MethodInfo *)0x0);
      uStack_60 = CONCAT44(fVar23,(undefined4)uStack_60);
      pMStack_68 = (MethodInfo_33E0570 *)0x40f6a01;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
      return;
    }
    pSVar21 = (System_Collections_Generic_HashSet_object__o *)0x0;
    pMStack_68 = (MethodInfo_33E0570 *)0x40f6a08;
    uStack_78 = il2cpp_runtime_helper_022b2c90();
    pSStack_70 = pSVar9;
    pMStack_68 = pMVar17;
    if (g_data_057ac7e6 == '\0') {
      uStack_80 = 0x40f6a2f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      uStack_80 = 0x40f6a3b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e6 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_80 = 0x40f6a5a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_80 = 0x40f6a6c;
    pMVar17 = MethodInfo_Single_ConvertTo_Single;
    pMVar16 = pMVar19;
    fVar23 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       ((Il2CppObject *)pMVar19,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    unaff_R14 = pMStack_68;
    pSVar11 = pSStack_70;
    if (pSVar21 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      lVar22 = *(long *)&(pSVar21->fields)._version;
      pMVar16 = (MethodInfo_33E0570 *)0x0;
      if (lVar22 != 0) {
        uVar18 = 0;
        pUVar20 = *(UnityEngine_PhysicMaterial_o **)(lVar22 + 0x20);
        if (pUVar20 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__set_bounciness(pUVar20,fVar23,(MethodInfo *)0x0);
          return;
        }
        pSStack_70 = (System_Collections_Generic_HashSet_object__o *)0x4097367;
        pMStack_68 = extraout_RAX_01;
        pSStack_70 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_022b2c90();
        ppSVar12 = &pSStack_70;
        pUVar20 = pUVar20[1].monitor;
        if (pUVar20 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__get_staticFriction(pUVar20,(MethodInfo *)0x0);
          return;
        }
        uStack_78 = 0x4097387;
        uVar5 = il2cpp_runtime_helper_022b2c90();
        fVar23 = extraout_XMM0_Da;
        goto Map_CustomPhysicsMaterial__set_StaticFriction;
      }
    }
    uStack_80 = 0x40f6a8d;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar16 != (MethodInfo_33E0570 *)0x0) && (pMVar16->rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_88 = (MethodInfo_33E0570 *)0x40f6aa6;
      iVar3 = Map_CustomPhysicsMaterial__get_FrictionCombine
                        ((Map_CustomPhysicsMaterial_o *)pMVar16->rgctx_data,(MethodInfo *)0x0);
      uStack_80 = CONCAT44(iVar3,(undefined4)uStack_80);
      pMStack_88 = (MethodInfo_33E0570 *)0x40f6abf;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_80 + 4);
      return;
    }
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
    pMStack_88 = (MethodInfo_33E0570 *)0x40f6ac6;
    uStack_98 = il2cpp_runtime_helper_022b2c90();
    pSStack_90 = pSVar21;
    pMStack_88 = pMVar19;
    if (g_data_057ac7e7 == '\0') {
      uStack_a0 = 0x40f6aef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_a0 = 0x40f6afb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e7 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_a0 = 0x40f6b1a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a0 = 0x40f6b2c;
    obj = MethodInfo_Int32_ConvertTo_Int32;
    pMVar16 = pMVar17;
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar17,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var,uVar4);
    if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_040f6b4a:
      uStack_a0 = 0x40f6b4f;
      uStack_a0 = il2cpp_runtime_helper_022b2c90();
      if ((pMVar16 != (MethodInfo_33E0570 *)0x0) && (pMVar16->rgctx_data != (Il2CppRGCTXData *)0x0)) {
        iVar3 = Map_CustomPhysicsMaterial__get_BounceCombine
                          ((Map_CustomPhysicsMaterial_o *)pMVar16->rgctx_data,(MethodInfo *)0x0);
        uStack_a0 = CONCAT44(iVar3,(undefined4)uStack_a0);
        il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a0 + 4);
        return;
      }
      lVar22 = 0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7e8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ac7e8 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
      uVar5 = CONCAT44(extraout_var_00,uVar4);
      if ((lVar22 == 0) ||
         (pUVar20 = *(UnityEngine_PhysicMaterial_o **)(lVar22 + 0x38),
         pUVar20 == (UnityEngine_PhysicMaterial_o *)0x0)) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7e9 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac7e9 = '\x01';
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
        return;
      }
      uVar18 = (ulong)uVar4;
      puVar15 = &uStack_a0;
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
    pUVar20 = *(UnityEngine_PhysicMaterial_o **)&(pSVar11->fields)._version;
    pMVar16 = (MethodInfo_33E0570 *)0x0;
    if (pUVar20 == (UnityEngine_PhysicMaterial_o *)0x0) goto label_040f6b4a;
    uVar18 = (ulong)uVar4;
    puVar14 = &uStack_80;
    pSVar11 = pSStack_90;
    pMVar17 = pMStack_88;
  }
  else {
    pUVar20 = *(UnityEngine_PhysicMaterial_o **)&(pSVar11->fields)._version;
    pMVar19 = (MethodInfo_33E0570 *)0x0;
    if (pUVar20 == (UnityEngine_PhysicMaterial_o *)0x0) goto label_040f6908;
    uVar18 = 0;
    ppSVar12 = (System_Collections_Generic_HashSet_object__o **)&uStack_20;
    uVar5 = extraout_RAX;
    pSVar11 = pSStack_30;
Map_CustomPhysicsMaterial__set_StaticFriction:
    *(undefined8 *)((long)ppSVar12 + -8) = uVar5;
    pUVar20 = pUVar20[1].monitor;
    if (pUVar20 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar20,fVar23,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)ppSVar12 + -0x10) = 0x40973a7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar13 = (undefined8 *)((long)ppSVar12 + -0x10);
    *(undefined8 *)((long)ppSVar12 + -0x10) = uVar5;
    pUVar20 = pUVar20[1].monitor;
    if (pUVar20 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar20,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)ppSVar12 + -0x18) = 0x40973c7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    fVar23 = extraout_XMM0_Da_00;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)puVar13 + -8) = uVar5;
    pUVar20 = pUVar20[1].monitor;
    if (pUVar20 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar20,fVar23,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar13 + -0x10) = 0x40973e7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar14 = (undefined8 *)((long)puVar13 + -0x10);
    *(undefined8 *)((long)puVar13 + -0x10) = uVar5;
    pUVar20 = pUVar20[1].monitor;
    if (pUVar20 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine(pUVar20,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar13 + -0x18) = 0x4097407;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    pMVar17 = unaff_R14;
  }
  *(undefined8 *)((long)puVar14 + -8) = uVar5;
  pUVar20 = pUVar20[1].monitor;
  if (pUVar20 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar20,(int32_t)uVar18,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar14 + -0x10) = 0x4097427;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  puVar15 = (undefined8 *)((long)puVar14 + -0x10);
  *(undefined8 *)((long)puVar14 + -0x10) = uVar5;
  pUVar20 = pUVar20[1].monitor;
  if (pUVar20 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar20,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar14 + -0x18) = 0x4097447;
  uVar5 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar15 + -8) = uVar5;
  __this_01 = pUVar20[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)uVar18,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar15 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar15 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar15 + -0x18) = unaff_R15;
  *(MethodInfo_33E0570 **)((long)puVar15 + -0x20) = pMVar17;
  *(undefined8 *)((long)puVar15 + -0x28) = unaff_R12;
  *(System_Collections_Generic_HashSet_object__o **)((long)puVar15 + -0x30) = pSVar11;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar15 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar15 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar15 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar15 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40974cd;
  pUVar6 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar6,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = pUVar6;
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40974f7;
  pUVar7 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar18 == '\0') {
      *(undefined8 *)((long)puVar15 + -0x38) = 0x409756e;
      pUVar7 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar15 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar15 + -0x38) = 0x4097595;
      __this_01 = pUVar7;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar15 + -0x38) = 0x4097517;
      pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar7;
      if (pSVar8 != (System_Object_array *)0x0) {
        uVar4 = (uint)pSVar8->max_length;
        if (0 < (int)uVar4) {
          uVar10 = 0;
          do {
            __this_01 = pUVar7;
            if (uVar4 <= uVar10) goto label_040975c2;
            pUVar7 = (UnityEngine_MonoBehaviour_o *)pSVar8->m_Items[(int)uVar10];
            __this_01 = pUVar7;
            if (pUVar7 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar6 = pUVar1->klass;
            *(undefined8 *)((long)puVar15 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar6,
                       (MethodInfo *)0x0);
            uVar10 = uVar10 + 1;
            uVar4 = (uint)pSVar8->max_length;
          } while ((int)uVar10 < (int)uVar4);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____getter_2_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x40f6850

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____getter_2_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  Map_CustomPhysicsMaterial_o *__this;
  int32_t iVar3;
  bool_conflict bVar4;
  undefined4 in_EAX;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  undefined8 uVar5;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  undefined4 extraout_var;
  Il2CppObject *extraout_RAX_04;
  undefined4 extraout_var_00;
  Il2CppObject *extraout_RAX_05;
  UnityEngine_MonoBehaviour_c *pUVar6;
  UnityEngine_MonoBehaviour_o *pUVar7;
  System_Object_array *pSVar8;
  undefined4 extraout_var_01;
  Il2CppObject *extraout_RAX_06;
  Il2CppObject *extraout_RAX_07;
  Il2CppObject *pIVar9;
  undefined8 extraout_RAX_08;
  undefined8 extraout_RAX_09;
  MethodInfo *extraout_RAX_10;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  uint uVar10;
  long unaff_RBX;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 unaff_RBP;
  MethodInfo *pMVar15;
  ulong uVar16;
  MethodInfo *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_PhysicMaterial_o *pUVar17;
  UnityEngine_MonoBehaviour_o *__this_00;
  long lVar18;
  MethodInfo *pMVar19;
  long lVar20;
  undefined8 unaff_R12;
  MethodInfo *unaff_R14;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar21;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  MethodInfo *pMStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_8;
  float fStack_4;
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    uStack_8 = in_EAX;
    fVar21 = Map_CustomPhysicsMaterial__get_StaticFriction(__this,(MethodInfo *)0x0);
    _uStack_8 = CONCAT44(fVar21,uStack_8);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_4);
    return pIVar9;
  }
  lVar18 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7e4 == '\0') {
    uStack_28 = 0x40f68af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40f68bb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40f68da;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40f68ec;
  pMVar15 = MethodInfo_Single_ConvertTo_Single;
  pMVar19 = method;
  fVar21 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (lVar18 == 0) {
label_040f6908:
    uStack_28 = 0x40f690d;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar19 != (MethodInfo *)0x0) && ((pMVar19->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_30 = (MethodInfo *)0x40f6926;
      fVar21 = Map_CustomPhysicsMaterial__get_DynamicFriction
                         ((Map_CustomPhysicsMaterial_o *)(pMVar19->field7_0x38).rgctx_data,(MethodInfo *)0x0);
      uStack_28 = CONCAT44(fVar21,(undefined4)uStack_28);
      pMStack_30 = (MethodInfo *)0x40f6941;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
      return pIVar9;
    }
    lVar20 = 0;
    pMStack_30 = (MethodInfo *)0x40f6948;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    lStack_38 = lVar18;
    pMStack_30 = method;
    if (g_data_057ac7e5 == '\0') {
      uStack_48 = 0x40f696f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      uStack_48 = 0x40f697b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e5 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_48 = 0x40f699a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_48 = 0x40f69ac;
    obj = MethodInfo_Single_ConvertTo_Single;
    pMVar19 = pMVar15;
    fVar21 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       ((Il2CppObject *)pMVar15,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if (lVar20 != 0) {
      pUVar17 = *(UnityEngine_PhysicMaterial_o **)(lVar20 + 0x38);
      pMVar19 = (MethodInfo *)0x0;
      if (pUVar17 == (UnityEngine_PhysicMaterial_o *)0x0) goto label_040f69c8;
      uVar16 = 0;
      puVar12 = &uStack_28;
      uVar5 = extraout_RAX_09;
      unaff_RBX = lStack_38;
      unaff_R14 = pMStack_30;
      goto Map_CustomPhysicsMaterial__set_DynamicFriction;
    }
label_040f69c8:
    uStack_48 = 0x40f69cd;
    uStack_48 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar19 != (MethodInfo *)0x0) && ((pMVar19->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_50 = (MethodInfo *)0x40f69e6;
      fVar21 = Map_CustomPhysicsMaterial__get_Bounciness
                         ((Map_CustomPhysicsMaterial_o *)(pMVar19->field7_0x38).rgctx_data,(MethodInfo *)0x0);
      uStack_48 = CONCAT44(fVar21,(undefined4)uStack_48);
      pMStack_50 = (MethodInfo *)0x40f6a01;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
      return pIVar9;
    }
    lVar18 = 0;
    pMStack_50 = (MethodInfo *)0x40f6a08;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    lStack_58 = lVar20;
    pMStack_50 = pMVar15;
    if (g_data_057ac7e6 == '\0') {
      uStack_68 = 0x40f6a2f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      uStack_68 = 0x40f6a3b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e6 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_68 = 0x40f6a5a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = 0x40f6a6c;
    pMVar15 = MethodInfo_Single_ConvertTo_Single;
    pMVar19 = obj;
    fVar21 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    unaff_R14 = pMStack_50;
    unaff_RBX = lStack_58;
    if (lVar18 != 0) {
      pMVar19 = (MethodInfo *)0x0;
      if (*(long *)(lVar18 + 0x38) != 0) {
        uVar16 = 0;
        pUVar17 = *(UnityEngine_PhysicMaterial_o **)(*(long *)(lVar18 + 0x38) + 0x20);
        if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__set_bounciness(pUVar17,fVar21,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        lStack_58 = 0x4097367;
        pMStack_50 = extraout_RAX_10;
        lStack_58 = il2cpp_runtime_helper_022b2c90();
        plVar11 = &lStack_58;
        pUVar17 = pUVar17[1].monitor;
        if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__get_staticFriction(pUVar17,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
        uStack_60 = 0x4097387;
        uVar5 = il2cpp_runtime_helper_022b2c90();
        fVar21 = extraout_XMM0_Da;
        goto Map_CustomPhysicsMaterial__set_StaticFriction;
      }
    }
    uStack_68 = 0x40f6a8d;
    uStack_68 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar19 != (MethodInfo *)0x0) && ((pMVar19->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_70 = (MethodInfo *)0x40f6aa6;
      iVar3 = Map_CustomPhysicsMaterial__get_FrictionCombine
                        ((Map_CustomPhysicsMaterial_o *)(pMVar19->field7_0x38).rgctx_data,(MethodInfo *)0x0);
      uStack_68 = CONCAT44(iVar3,(undefined4)uStack_68);
      pMStack_70 = (MethodInfo *)0x40f6abf;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_68 + 4);
      return pIVar9;
    }
    unaff_RBX = 0;
    pMStack_70 = (MethodInfo *)0x40f6ac6;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    lStack_78 = lVar18;
    pMStack_70 = obj;
    if (g_data_057ac7e7 == '\0') {
      uStack_88 = 0x40f6aef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_88 = 0x40f6afb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e7 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_88 = 0x40f6b1a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_88 = 0x40f6b2c;
    obj_00 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar19 = pMVar15;
    uVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar15,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var_02,uVar10);
    if (unaff_RBX == 0) {
label_040f6b4a:
      uStack_88 = 0x40f6b4f;
      uStack_88 = il2cpp_runtime_helper_022b2c90();
      if ((pMVar19 != (MethodInfo *)0x0) && ((pMVar19->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
        iVar3 = Map_CustomPhysicsMaterial__get_BounceCombine
                          ((Map_CustomPhysicsMaterial_o *)(pMVar19->field7_0x38).rgctx_data,(MethodInfo *)0x0)
        ;
        uStack_88 = CONCAT44(iVar3,(undefined4)uStack_88);
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_88 + 4);
        return pIVar9;
      }
      lVar18 = 0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7e8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ac7e8 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
      uVar5 = CONCAT44(extraout_var_03,uVar10);
      if ((lVar18 == 0) ||
         (pUVar17 = *(UnityEngine_PhysicMaterial_o **)(lVar18 + 0x38),
         pUVar17 == (UnityEngine_PhysicMaterial_o *)0x0)) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7e9 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac7e9 = '\x01';
        }
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar9,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
        return pIVar9;
      }
      uVar16 = (ulong)uVar10;
      puVar14 = &uStack_88;
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
    pUVar17 = *(UnityEngine_PhysicMaterial_o **)(unaff_RBX + 0x38);
    pMVar19 = (MethodInfo *)0x0;
    if (pUVar17 == (UnityEngine_PhysicMaterial_o *)0x0) goto label_040f6b4a;
    uVar16 = (ulong)uVar10;
    puVar13 = &uStack_68;
    unaff_RBX = lStack_78;
    pMVar15 = pMStack_70;
  }
  else {
    pUVar17 = *(UnityEngine_PhysicMaterial_o **)(lVar18 + 0x38);
    pMVar19 = (MethodInfo *)0x0;
    if (pUVar17 == (UnityEngine_PhysicMaterial_o *)0x0) goto label_040f6908;
    uVar16 = 0;
    plVar11 = (long *)&uStack_8;
    uVar5 = extraout_RAX_08;
Map_CustomPhysicsMaterial__set_StaticFriction:
    *(undefined8 *)((long)plVar11 + -8) = uVar5;
    pUVar17 = pUVar17[1].monitor;
    if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar17,fVar21,(MethodInfo *)0x0);
      return extraout_RAX_01;
    }
    *(undefined8 *)((long)plVar11 + -0x10) = 0x40973a7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar12 = (undefined8 *)((long)plVar11 + -0x10);
    *(undefined8 *)((long)plVar11 + -0x10) = uVar5;
    pUVar17 = pUVar17[1].monitor;
    if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar17,(MethodInfo *)0x0);
      return extraout_RAX_02;
    }
    *(undefined8 *)((long)plVar11 + -0x18) = 0x40973c7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    fVar21 = extraout_XMM0_Da_00;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)puVar12 + -8) = uVar5;
    pUVar17 = pUVar17[1].monitor;
    if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar17,fVar21,(MethodInfo *)0x0);
      return extraout_RAX_03;
    }
    *(undefined8 *)((long)puVar12 + -0x10) = 0x40973e7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar13 = (undefined8 *)((long)puVar12 + -0x10);
    *(undefined8 *)((long)puVar12 + -0x10) = uVar5;
    pUVar17 = pUVar17[1].monitor;
    if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
      iVar3 = UnityEngine_PhysicMaterial__get_frictionCombine(pUVar17,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var,iVar3);
    }
    *(undefined8 *)((long)puVar12 + -0x18) = 0x4097407;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    pMVar15 = unaff_R14;
  }
  *(undefined8 *)((long)puVar13 + -8) = uVar5;
  pUVar17 = pUVar17[1].monitor;
  if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar17,(int32_t)uVar16,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  *(undefined8 *)((long)puVar13 + -0x10) = 0x4097427;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  puVar14 = (undefined8 *)((long)puVar13 + -0x10);
  *(undefined8 *)((long)puVar13 + -0x10) = uVar5;
  pUVar17 = pUVar17[1].monitor;
  if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
    iVar3 = UnityEngine_PhysicMaterial__get_bounceCombine(pUVar17,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var_00,iVar3);
  }
  *(undefined8 *)((long)puVar13 + -0x18) = 0x4097447;
  uVar5 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar14 + -8) = uVar5;
  __this_00 = pUVar17[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)uVar16,(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  *(undefined8 *)((long)puVar14 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar14 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar14 + -0x18) = unaff_R15;
  *(MethodInfo **)((long)puVar14 + -0x20) = pMVar15;
  *(undefined8 *)((long)puVar14 + -0x28) = unaff_R12;
  *(long *)((long)puVar14 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar14 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar14 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar14 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar14 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar14 + -0x38) = 0x40974cd;
  pUVar6 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar14 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar6,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar6;
  *(undefined8 *)((long)puVar14 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar14 + -0x38) = 0x40974f7;
  pUVar7 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar16 == '\0') {
      *(undefined8 *)((long)puVar14 + -0x38) = 0x409756e;
      pUVar7 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar14 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar14 + -0x38) = 0x4097595;
      __this_00 = pUVar7;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_01,bVar4);
      }
      if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
    else {
      *(undefined8 *)((long)puVar14 + -0x38) = 0x4097517;
      pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar7;
      if (pSVar8 != (System_Object_array *)0x0) {
        uVar10 = (uint)pSVar8->max_length;
        pIVar9 = (Il2CppObject *)(ulong)uVar10;
        if (0 < (int)uVar10) {
          uVar10 = 0;
          do {
            __this_00 = pUVar7;
            if ((uint)pIVar9 <= uVar10) goto label_040975c2;
            pUVar7 = (UnityEngine_MonoBehaviour_o *)pSVar8->m_Items[(int)uVar10];
            __this_00 = pUVar7;
            if (pUVar7 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar6 = pUVar1->klass;
            *(undefined8 *)((long)puVar14 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar6,
                       (MethodInfo *)0x0);
            uVar10 = uVar10 + 1;
            uVar2 = (uint)pSVar8->max_length;
            pIVar9 = (Il2CppObject *)(ulong)uVar2;
          } while ((int)uVar10 < (int)uVar2);
        }
        return pIVar9;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar14 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar14 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX_07;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____setter_2_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f6890

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____setter_2_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  uint uVar4;
  undefined8 uVar5;
  UnityEngine_MonoBehaviour_c *pUVar6;
  UnityEngine_MonoBehaviour_o *pUVar7;
  System_Object_array *pSVar8;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  MethodInfo_24EED20 *extraout_RAX_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Il2CppObject *pIVar9;
  uint uVar10;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *unaff_RBX;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 unaff_RBP;
  MethodInfo_24EED20 *pMVar14;
  ulong uVar15;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EED20 *pMVar16;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_PhysicMaterial_o *pUVar17;
  Map_CustomPhysicsMaterial_o *pMVar18;
  UnityEngine_MonoBehaviour_o *__this;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCVar19;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCVar20;
  long lVar21;
  undefined8 unaff_R12;
  MethodInfo_24EED20 *unaff_R14;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar22;
  undefined8 uStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCStack_70;
  MethodInfo_24EED20 *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCStack_50;
  MethodInfo_24EED20 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCStack_30;
  MethodInfo_24EED20 *pMStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac7e4 == '\0') {
    uStack_20 = 0x40f68af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40f68bb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f68da;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f68ec;
  pMVar14 = MethodInfo_Single_ConvertTo_Single;
  pIVar9 = __v;
  fVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
label_040f6908:
    uStack_20 = 0x40f690d;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    if ((pIVar9 != (Il2CppObject *)0x0) && (pIVar9[3].monitor != (Map_CustomPhysicsMaterial_o *)0x0)) {
      pMStack_28 = (MethodInfo_24EED20 *)0x40f6926;
      fVar22 = Map_CustomPhysicsMaterial__get_DynamicFriction(pIVar9[3].monitor,(MethodInfo *)0x0);
      uStack_20 = CONCAT44(fVar22,(undefined4)uStack_20);
      pMStack_28 = (MethodInfo_24EED20 *)0x40f6941;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
      return;
    }
    pCVar19 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0;
    pMStack_28 = (MethodInfo_24EED20 *)0x40f6948;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    pCStack_30 = __i;
    pMStack_28 = (MethodInfo_24EED20 *)__v;
    if (g_data_057ac7e5 == '\0') {
      uStack_40 = 0x40f696f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      uStack_40 = 0x40f697b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e5 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x40f699a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x40f69ac;
    obj = MethodInfo_Single_ConvertTo_Single;
    pMVar16 = pMVar14;
    fVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar14,MethodInfo_Single_ConvertTo_Single);
    if (pCVar19 != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
      pMVar18 = (pCVar19->fields).Value;
      pMVar16 = (MethodInfo_24EED20 *)0x0;
      if (pMVar18 == (Map_CustomPhysicsMaterial_o *)0x0) goto label_040f69c8;
      uVar15 = 0;
      puVar11 = &uStack_20;
      uVar5 = extraout_RAX_00;
      unaff_RBX = pCStack_30;
      unaff_R14 = pMStack_28;
      goto Map_CustomPhysicsMaterial__set_DynamicFriction;
    }
label_040f69c8:
    uStack_40 = 0x40f69cd;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar16 != (MethodInfo_24EED20 *)0x0) &&
       ((Map_CustomPhysicsMaterial_o *)pMVar16->rgctx_data != (Map_CustomPhysicsMaterial_o *)0x0)) {
      pMStack_48 = (MethodInfo_24EED20 *)0x40f69e6;
      fVar22 = Map_CustomPhysicsMaterial__get_Bounciness
                         ((Map_CustomPhysicsMaterial_o *)pMVar16->rgctx_data,(MethodInfo *)0x0);
      uStack_40 = CONCAT44(fVar22,(undefined4)uStack_40);
      pMStack_48 = (MethodInfo_24EED20 *)0x40f6a01;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
      return;
    }
    pCVar20 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0;
    pMStack_48 = (MethodInfo_24EED20 *)0x40f6a08;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    pCStack_50 = pCVar19;
    pMStack_48 = pMVar14;
    if (g_data_057ac7e6 == '\0') {
      uStack_60 = 0x40f6a2f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      uStack_60 = 0x40f6a3b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e6 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_60 = 0x40f6a5a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_60 = 0x40f6a6c;
    pMVar16 = MethodInfo_Single_ConvertTo_Single;
    pMVar14 = obj;
    fVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
    unaff_R14 = pMStack_48;
    unaff_RBX = pCStack_50;
    if (pCVar20 != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
      pMVar18 = (pCVar20->fields).Value;
      pMVar14 = (MethodInfo_24EED20 *)0x0;
      if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
        uVar15 = 0;
        pUVar17 = (pMVar18->fields)._material;
        if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__set_bounciness(pUVar17,fVar22,(MethodInfo *)0x0);
          return;
        }
        pCStack_50 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x4097367;
        pMStack_48 = extraout_RAX_01;
        pCStack_50 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_022b2c90();
        register0x00000020 = (BADSPACEBASE *)&pCStack_50;
        pMVar18 = pUVar17[1].monitor;
        if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__get_staticFriction
                    ((UnityEngine_PhysicMaterial_o *)pMVar18,(MethodInfo *)0x0);
          return;
        }
        uStack_58 = 0x4097387;
        uVar5 = il2cpp_runtime_helper_022b2c90();
        fVar22 = extraout_XMM0_Da;
        goto Map_CustomPhysicsMaterial__set_StaticFriction;
      }
    }
    uStack_60 = 0x40f6a8d;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar14 != (MethodInfo_24EED20 *)0x0) &&
       ((Map_CustomPhysicsMaterial_o *)pMVar14->rgctx_data != (Map_CustomPhysicsMaterial_o *)0x0)) {
      pMStack_68 = (MethodInfo_24EED20 *)0x40f6aa6;
      iVar3 = Map_CustomPhysicsMaterial__get_FrictionCombine
                        ((Map_CustomPhysicsMaterial_o *)pMVar14->rgctx_data,(MethodInfo *)0x0);
      uStack_60 = CONCAT44(iVar3,(undefined4)uStack_60);
      pMStack_68 = (MethodInfo_24EED20 *)0x40f6abf;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
      return;
    }
    unaff_RBX = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0;
    pMStack_68 = (MethodInfo_24EED20 *)0x40f6ac6;
    uStack_78 = il2cpp_runtime_helper_022b2c90();
    pCStack_70 = pCVar20;
    pMStack_68 = obj;
    if (g_data_057ac7e7 == '\0') {
      uStack_80 = 0x40f6aef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_80 = 0x40f6afb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e7 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_80 = 0x40f6b1a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_80 = 0x40f6b2c;
    obj_00 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar14 = pMVar16;
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar16,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var,uVar4);
    if (unaff_RBX == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
label_040f6b4a:
      uStack_80 = 0x40f6b4f;
      uStack_80 = il2cpp_runtime_helper_022b2c90();
      if ((pMVar14 != (MethodInfo_24EED20 *)0x0) &&
         ((Map_CustomPhysicsMaterial_o *)pMVar14->rgctx_data != (Map_CustomPhysicsMaterial_o *)0x0)) {
        iVar3 = Map_CustomPhysicsMaterial__get_BounceCombine
                          ((Map_CustomPhysicsMaterial_o *)pMVar14->rgctx_data,(MethodInfo *)0x0);
        uStack_80 = CONCAT44(iVar3,(undefined4)uStack_80);
        il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_80 + 4);
        return;
      }
      lVar21 = 0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7e8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ac7e8 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
      uVar5 = CONCAT44(extraout_var_00,uVar4);
      if ((lVar21 == 0) ||
         (pUVar17 = *(UnityEngine_PhysicMaterial_o **)(lVar21 + 0x38),
         pUVar17 == (UnityEngine_PhysicMaterial_o *)0x0)) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7e9 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac7e9 = '\x01';
        }
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar9,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
        return;
      }
      uVar15 = (ulong)uVar4;
      puVar13 = &uStack_80;
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
    pMVar18 = (unaff_RBX->fields).Value;
    pMVar14 = (MethodInfo_24EED20 *)0x0;
    if (pMVar18 == (Map_CustomPhysicsMaterial_o *)0x0) goto label_040f6b4a;
    uVar15 = (ulong)uVar4;
    puVar12 = &uStack_60;
    unaff_RBX = pCStack_70;
    pMVar16 = pMStack_68;
  }
  else {
    pMVar18 = (__i->fields).Value;
    pIVar9 = (Il2CppObject *)0x0;
    if (pMVar18 == (Map_CustomPhysicsMaterial_o *)0x0) goto label_040f6908;
    uVar15 = 0;
    uVar5 = extraout_RAX;
Map_CustomPhysicsMaterial__set_StaticFriction:
    *(undefined8 *)((long)register0x00000020 + -8) = uVar5;
    pUVar17 = (pMVar18->fields)._material;
    if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar17,fVar22,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x40973a7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar11 = (undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar5;
    pMVar18 = pUVar17[1].monitor;
    if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_dynamicFriction
                ((UnityEngine_PhysicMaterial_o *)pMVar18,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x40973c7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    fVar22 = extraout_XMM0_Da_00;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)puVar11 + -8) = uVar5;
    pUVar17 = (pMVar18->fields)._material;
    if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar17,fVar22,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar11 + -0x10) = 0x40973e7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar12 = (undefined8 *)((long)puVar11 + -0x10);
    *(undefined8 *)((long)puVar11 + -0x10) = uVar5;
    pMVar18 = pUVar17[1].monitor;
    if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine
                ((UnityEngine_PhysicMaterial_o *)pMVar18,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar11 + -0x18) = 0x4097407;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    pMVar16 = unaff_R14;
  }
  *(undefined8 *)((long)puVar12 + -8) = uVar5;
  pUVar17 = (pMVar18->fields)._material;
  if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar17,(int32_t)uVar15,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar12 + -0x10) = 0x4097427;
  uVar5 = il2cpp_runtime_helper_022b2c90();
  puVar13 = (undefined8 *)((long)puVar12 + -0x10);
  *(undefined8 *)((long)puVar12 + -0x10) = uVar5;
  pUVar17 = pUVar17[1].monitor;
  if (pUVar17 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar17,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar12 + -0x18) = 0x4097447;
  uVar5 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar13 + -8) = uVar5;
  __this = pUVar17[1].monitor;
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this,(int32_t)uVar15,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar13 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar13 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar13 + -0x18) = unaff_R15;
  *(MethodInfo_24EED20 **)((long)puVar13 + -0x20) = pMVar16;
  *(undefined8 *)((long)puVar13 + -0x28) = unaff_R12;
  *(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o **)((long)puVar13 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar13 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar13 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar13 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar13 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40974cd;
  pUVar6 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar6,(MethodInfo *)0x0);
  pUVar1 = __this + 1;
  __this[1].klass = pUVar6;
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40974f7;
  pUVar7 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar15 == '\0') {
      *(undefined8 *)((long)puVar13 + -0x38) = 0x409756e;
      pUVar7 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar13 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar13 + -0x38) = 0x4097595;
      __this = pUVar7;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar13 + -0x38) = 0x4097517;
      pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this = pUVar7;
      if (pSVar8 != (System_Object_array *)0x0) {
        uVar4 = (uint)pSVar8->max_length;
        if (0 < (int)uVar4) {
          uVar10 = 0;
          do {
            __this = pUVar7;
            if (uVar4 <= uVar10) goto label_040975c2;
            pUVar7 = (UnityEngine_MonoBehaviour_o *)pSVar8->m_Items[(int)uVar10];
            __this = pUVar7;
            if (pUVar7 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar6 = pUVar1->klass;
            *(undefined8 *)((long)puVar13 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar6,
                       (MethodInfo *)0x0);
            uVar10 = uVar10 + 1;
            uVar4 = (uint)pSVar8->max_length;
          } while ((int)uVar10 < (int)uVar4);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____getter_3_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x40f6910

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____getter_3_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  Map_CustomPhysicsMaterial_o *__this;
  int32_t iVar3;
  bool_conflict bVar4;
  undefined4 in_EAX;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  undefined8 uVar5;
  undefined4 extraout_var;
  Il2CppObject *extraout_RAX_04;
  undefined4 extraout_var_00;
  Il2CppObject *extraout_RAX_05;
  UnityEngine_MonoBehaviour_c *pUVar6;
  UnityEngine_MonoBehaviour_o *pUVar7;
  System_Object_array *pSVar8;
  undefined4 extraout_var_01;
  Il2CppObject *extraout_RAX_06;
  Il2CppObject *extraout_RAX_07;
  Il2CppObject *pIVar9;
  undefined8 extraout_RAX_08;
  MethodInfo *extraout_RAX_09;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  uint uVar10;
  long unaff_RBX;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 unaff_RBP;
  MethodInfo *obj;
  ulong uVar14;
  MethodInfo *obj_00;
  MethodInfo_24EE950 *obj_01;
  UnityEngine_PhysicMaterial_o *pUVar15;
  UnityEngine_MonoBehaviour_o *__this_00;
  long lVar16;
  MethodInfo *pMVar17;
  long lVar18;
  undefined8 unaff_R12;
  MethodInfo *unaff_R14;
  undefined8 unaff_R15;
  float value;
  float extraout_XMM0_Da;
  float fVar19;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_8;
  float fStack_4;
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    uStack_8 = in_EAX;
    fVar19 = Map_CustomPhysicsMaterial__get_DynamicFriction(__this,(MethodInfo *)0x0);
    _uStack_8 = CONCAT44(fVar19,uStack_8);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_4);
    return pIVar9;
  }
  lVar16 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7e5 == '\0') {
    uStack_28 = 0x40f696f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40f697b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40f699a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40f69ac;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar17 = method;
  fVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (lVar16 == 0) {
label_040f69c8:
    uStack_28 = 0x40f69cd;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar17 != (MethodInfo *)0x0) && ((pMVar17->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_30 = (MethodInfo *)0x40f69e6;
      fVar19 = Map_CustomPhysicsMaterial__get_Bounciness
                         ((Map_CustomPhysicsMaterial_o *)(pMVar17->field7_0x38).rgctx_data,(MethodInfo *)0x0);
      uStack_28 = CONCAT44(fVar19,(undefined4)uStack_28);
      pMStack_30 = (MethodInfo *)0x40f6a01;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
      return pIVar9;
    }
    lVar18 = 0;
    pMStack_30 = (MethodInfo *)0x40f6a08;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    lStack_38 = lVar16;
    pMStack_30 = method;
    if (g_data_057ac7e6 == '\0') {
      uStack_48 = 0x40f6a2f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      uStack_48 = 0x40f6a3b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e6 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_48 = 0x40f6a5a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_48 = 0x40f6a6c;
    obj_00 = MethodInfo_Single_ConvertTo_Single;
    pMVar17 = obj;
    fVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    unaff_R14 = pMStack_30;
    unaff_RBX = lStack_38;
    if (lVar18 != 0) {
      pMVar17 = (MethodInfo *)0x0;
      if (*(long *)(lVar18 + 0x38) != 0) {
        uVar14 = 0;
        pUVar15 = *(UnityEngine_PhysicMaterial_o **)(*(long *)(lVar18 + 0x38) + 0x20);
        if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__set_bounciness(pUVar15,fVar19,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        lStack_38 = 0x4097367;
        pMStack_30 = extraout_RAX_09;
        lStack_38 = il2cpp_runtime_helper_022b2c90();
        pUVar15 = pUVar15[1].monitor;
        if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__get_staticFriction(pUVar15,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
        uStack_40 = 0x4097387;
        uStack_40 = il2cpp_runtime_helper_022b2c90();
        pUVar15 = pUVar15[1].monitor;
        if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__set_staticFriction(pUVar15,value,(MethodInfo *)0x0);
          return extraout_RAX_01;
        }
        uStack_48 = 0x40973a7;
        uStack_48 = il2cpp_runtime_helper_022b2c90();
        puVar11 = &uStack_48;
        pUVar15 = pUVar15[1].monitor;
        if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar15,(MethodInfo *)0x0);
          return extraout_RAX_02;
        }
        pMStack_50 = (MethodInfo *)0x40973c7;
        uVar5 = il2cpp_runtime_helper_022b2c90();
        fVar19 = extraout_XMM0_Da;
        goto Map_CustomPhysicsMaterial__set_DynamicFriction;
      }
    }
    uStack_48 = 0x40f6a8d;
    uStack_48 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar17 != (MethodInfo *)0x0) && ((pMVar17->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_50 = (MethodInfo *)0x40f6aa6;
      iVar3 = Map_CustomPhysicsMaterial__get_FrictionCombine
                        ((Map_CustomPhysicsMaterial_o *)(pMVar17->field7_0x38).rgctx_data,(MethodInfo *)0x0);
      uStack_48 = CONCAT44(iVar3,(undefined4)uStack_48);
      pMStack_50 = (MethodInfo *)0x40f6abf;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
      return pIVar9;
    }
    unaff_RBX = 0;
    pMStack_50 = (MethodInfo *)0x40f6ac6;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    lStack_58 = lVar18;
    pMStack_50 = obj;
    if (g_data_057ac7e7 == '\0') {
      uStack_68 = 0x40f6aef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_68 = 0x40f6afb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e7 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_68 = 0x40f6b1a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = 0x40f6b2c;
    obj_01 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar17 = obj_00;
    uVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var_02,uVar10);
    if (unaff_RBX != 0) {
      pUVar15 = *(UnityEngine_PhysicMaterial_o **)(unaff_RBX + 0x38);
      pMVar17 = (MethodInfo *)0x0;
      if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
        uVar14 = (ulong)uVar10;
        puVar12 = &uStack_48;
        unaff_RBX = lStack_58;
        obj_00 = pMStack_50;
        goto Map_CustomPhysicsMaterial__set_FrictionCombine;
      }
    }
    uStack_68 = 0x40f6b4f;
    uStack_68 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar17 != (MethodInfo *)0x0) && ((pMVar17->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
      iVar3 = Map_CustomPhysicsMaterial__get_BounceCombine
                        ((Map_CustomPhysicsMaterial_o *)(pMVar17->field7_0x38).rgctx_data,(MethodInfo *)0x0);
      uStack_68 = CONCAT44(iVar3,(undefined4)uStack_68);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_68 + 4);
      return pIVar9;
    }
    lVar16 = 0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7e8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e8 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_01,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var_03,uVar10);
    if ((lVar16 == 0) ||
       (pUVar15 = *(UnityEngine_PhysicMaterial_o **)(lVar16 + 0x38),
       pUVar15 == (UnityEngine_PhysicMaterial_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7e9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac7e9 = '\x01';
      }
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
      return pIVar9;
    }
    uVar14 = (ulong)uVar10;
    puVar13 = &uStack_68;
  }
  else {
    pUVar15 = *(UnityEngine_PhysicMaterial_o **)(lVar16 + 0x38);
    pMVar17 = (MethodInfo *)0x0;
    if (pUVar15 == (UnityEngine_PhysicMaterial_o *)0x0) goto label_040f69c8;
    uVar14 = 0;
    puVar11 = (undefined8 *)&uStack_8;
    uVar5 = extraout_RAX_08;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)puVar11 + -8) = uVar5;
    pUVar15 = pUVar15[1].monitor;
    if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar15,fVar19,(MethodInfo *)0x0);
      return extraout_RAX_03;
    }
    *(undefined8 *)((long)puVar11 + -0x10) = 0x40973e7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar12 = (undefined8 *)((long)puVar11 + -0x10);
    *(undefined8 *)((long)puVar11 + -0x10) = uVar5;
    pUVar15 = pUVar15[1].monitor;
    if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
      iVar3 = UnityEngine_PhysicMaterial__get_frictionCombine(pUVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var,iVar3);
    }
    *(undefined8 *)((long)puVar11 + -0x18) = 0x4097407;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    obj_00 = unaff_R14;
Map_CustomPhysicsMaterial__set_FrictionCombine:
    *(undefined8 *)((long)puVar12 + -8) = uVar5;
    pUVar15 = pUVar15[1].monitor;
    if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_frictionCombine(pUVar15,(int32_t)uVar14,(MethodInfo *)0x0);
      return extraout_RAX_04;
    }
    *(undefined8 *)((long)puVar12 + -0x10) = 0x4097427;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar13 = (undefined8 *)((long)puVar12 + -0x10);
    *(undefined8 *)((long)puVar12 + -0x10) = uVar5;
    pUVar15 = pUVar15[1].monitor;
    if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
      iVar3 = UnityEngine_PhysicMaterial__get_bounceCombine(pUVar15,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var_00,iVar3);
    }
    *(undefined8 *)((long)puVar12 + -0x18) = 0x4097447;
    uVar5 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar13 + -8) = uVar5;
  __this_00 = pUVar15[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)uVar14,(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  *(undefined8 *)((long)puVar13 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar13 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar13 + -0x18) = unaff_R15;
  *(MethodInfo **)((long)puVar13 + -0x20) = obj_00;
  *(undefined8 *)((long)puVar13 + -0x28) = unaff_R12;
  *(long *)((long)puVar13 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar13 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar13 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar13 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar13 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40974cd;
  pUVar6 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar6,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar6;
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40974f7;
  pUVar7 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar14 == '\0') {
      *(undefined8 *)((long)puVar13 + -0x38) = 0x409756e;
      pUVar7 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar13 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar13 + -0x38) = 0x4097595;
      __this_00 = pUVar7;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_01,bVar4);
      }
      if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
    else {
      *(undefined8 *)((long)puVar13 + -0x38) = 0x4097517;
      pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar7;
      if (pSVar8 != (System_Object_array *)0x0) {
        uVar10 = (uint)pSVar8->max_length;
        pIVar9 = (Il2CppObject *)(ulong)uVar10;
        if (0 < (int)uVar10) {
          uVar10 = 0;
          do {
            __this_00 = pUVar7;
            if ((uint)pIVar9 <= uVar10) goto label_040975c2;
            pUVar7 = (UnityEngine_MonoBehaviour_o *)pSVar8->m_Items[(int)uVar10];
            __this_00 = pUVar7;
            if (pUVar7 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar6 = pUVar1->klass;
            *(undefined8 *)((long)puVar13 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar6,
                       (MethodInfo *)0x0);
            uVar10 = uVar10 + 1;
            uVar2 = (uint)pSVar8->max_length;
            pIVar9 = (Il2CppObject *)(ulong)uVar2;
          } while ((int)uVar10 < (int)uVar2);
        }
        return pIVar9;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar13 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX_07;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____setter_3_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f6950

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____setter_3_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  uint uVar4;
  undefined8 uVar5;
  UnityEngine_MonoBehaviour_c *pUVar6;
  UnityEngine_MonoBehaviour_o *pUVar7;
  System_Object_array *pSVar8;
  undefined8 extraout_RAX;
  MethodInfo_24EED20 *extraout_RAX_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Il2CppObject *pIVar9;
  uint uVar10;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *unaff_RBX;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  MethodInfo_24EED20 *pMVar13;
  ulong uVar14;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_PhysicMaterial_o *pUVar15;
  Map_CustomPhysicsMaterial_o *pMVar16;
  UnityEngine_MonoBehaviour_o *__this;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCVar17;
  MethodInfo_24EED20 *pMVar18;
  long lVar19;
  undefined8 unaff_R12;
  MethodInfo_24EED20 *unaff_R14;
  undefined8 unaff_R15;
  float value;
  float extraout_XMM0_Da;
  float fVar20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCStack_50;
  MethodInfo_24EED20 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCStack_30;
  MethodInfo_24EED20 *pMStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac7e5 == '\0') {
    uStack_20 = 0x40f696f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40f697b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f699a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f69ac;
  pMVar13 = MethodInfo_Single_ConvertTo_Single;
  pIVar9 = __v;
  fVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
label_040f69c8:
    uStack_20 = 0x40f69cd;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    if ((pIVar9 != (Il2CppObject *)0x0) && (pIVar9[3].monitor != (Map_CustomPhysicsMaterial_o *)0x0)) {
      pMStack_28 = (MethodInfo_24EED20 *)0x40f69e6;
      fVar20 = Map_CustomPhysicsMaterial__get_Bounciness(pIVar9[3].monitor,(MethodInfo *)0x0);
      uStack_20 = CONCAT44(fVar20,(undefined4)uStack_20);
      pMStack_28 = (MethodInfo_24EED20 *)0x40f6a01;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
      return;
    }
    pCVar17 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0;
    pMStack_28 = (MethodInfo_24EED20 *)0x40f6a08;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    pCStack_30 = __i;
    pMStack_28 = (MethodInfo_24EED20 *)__v;
    if (g_data_057ac7e6 == '\0') {
      uStack_40 = 0x40f6a2f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      uStack_40 = 0x40f6a3b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e6 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x40f6a5a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x40f6a6c;
    obj = MethodInfo_Single_ConvertTo_Single;
    pMVar18 = pMVar13;
    fVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pMVar13,MethodInfo_Single_ConvertTo_Single);
    unaff_R14 = pMStack_28;
    unaff_RBX = pCStack_30;
    if (pCVar17 != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
      pMVar16 = (pCVar17->fields).Value;
      pMVar18 = (MethodInfo_24EED20 *)0x0;
      if (pMVar16 != (Map_CustomPhysicsMaterial_o *)0x0) {
        uVar14 = 0;
        pUVar15 = (pMVar16->fields)._material;
        if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__set_bounciness(pUVar15,fVar20,(MethodInfo *)0x0);
          return;
        }
        pCStack_30 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x4097367;
        pMStack_28 = extraout_RAX_00;
        pCStack_30 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_022b2c90();
        pUVar15 = pUVar15[1].monitor;
        if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__get_staticFriction(pUVar15,(MethodInfo *)0x0);
          return;
        }
        uStack_38 = 0x4097387;
        uStack_38 = il2cpp_runtime_helper_022b2c90();
        pUVar15 = pUVar15[1].monitor;
        if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__set_staticFriction(pUVar15,value,(MethodInfo *)0x0);
          return;
        }
        uStack_40 = 0x40973a7;
        uStack_40 = il2cpp_runtime_helper_022b2c90();
        register0x00000020 = (BADSPACEBASE *)&uStack_40;
        pMVar16 = pUVar15[1].monitor;
        if (pMVar16 != (Map_CustomPhysicsMaterial_o *)0x0) {
          UnityEngine_PhysicMaterial__get_dynamicFriction
                    ((UnityEngine_PhysicMaterial_o *)pMVar16,(MethodInfo *)0x0);
          return;
        }
        pMStack_48 = (MethodInfo_24EED20 *)0x40973c7;
        uVar5 = il2cpp_runtime_helper_022b2c90();
        fVar20 = extraout_XMM0_Da;
        goto Map_CustomPhysicsMaterial__set_DynamicFriction;
      }
    }
    uStack_40 = 0x40f6a8d;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar18 != (MethodInfo_24EED20 *)0x0) &&
       ((Map_CustomPhysicsMaterial_o *)pMVar18->rgctx_data != (Map_CustomPhysicsMaterial_o *)0x0)) {
      pMStack_48 = (MethodInfo_24EED20 *)0x40f6aa6;
      iVar3 = Map_CustomPhysicsMaterial__get_FrictionCombine
                        ((Map_CustomPhysicsMaterial_o *)pMVar18->rgctx_data,(MethodInfo *)0x0);
      uStack_40 = CONCAT44(iVar3,(undefined4)uStack_40);
      pMStack_48 = (MethodInfo_24EED20 *)0x40f6abf;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
      return;
    }
    unaff_RBX = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0;
    pMStack_48 = (MethodInfo_24EED20 *)0x40f6ac6;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    pCStack_50 = pCVar17;
    pMStack_48 = pMVar13;
    if (g_data_057ac7e7 == '\0') {
      uStack_60 = 0x40f6aef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_60 = 0x40f6afb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e7 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_60 = 0x40f6b1a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_60 = 0x40f6b2c;
    obj_00 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar13 = obj;
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var,uVar4);
    if (unaff_RBX != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
      pMVar16 = (unaff_RBX->fields).Value;
      pMVar13 = (MethodInfo_24EED20 *)0x0;
      if (pMVar16 != (Map_CustomPhysicsMaterial_o *)0x0) {
        uVar14 = (ulong)uVar4;
        puVar11 = &uStack_40;
        unaff_RBX = pCStack_50;
        obj = pMStack_48;
        goto Map_CustomPhysicsMaterial__set_FrictionCombine;
      }
    }
    uStack_60 = 0x40f6b4f;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar13 != (MethodInfo_24EED20 *)0x0) &&
       ((Map_CustomPhysicsMaterial_o *)pMVar13->rgctx_data != (Map_CustomPhysicsMaterial_o *)0x0)) {
      iVar3 = Map_CustomPhysicsMaterial__get_BounceCombine
                        ((Map_CustomPhysicsMaterial_o *)pMVar13->rgctx_data,(MethodInfo *)0x0);
      uStack_60 = CONCAT44(iVar3,(undefined4)uStack_60);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
      return;
    }
    lVar19 = 0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7e8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e8 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var_00,uVar4);
    if ((lVar19 == 0) ||
       (pUVar15 = *(UnityEngine_PhysicMaterial_o **)(lVar19 + 0x38),
       pUVar15 == (UnityEngine_PhysicMaterial_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7e9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac7e9 = '\x01';
      }
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
      return;
    }
    uVar14 = (ulong)uVar4;
    puVar12 = &uStack_60;
  }
  else {
    pMVar16 = (__i->fields).Value;
    pIVar9 = (Il2CppObject *)0x0;
    if (pMVar16 == (Map_CustomPhysicsMaterial_o *)0x0) goto label_040f69c8;
    uVar14 = 0;
    uVar5 = extraout_RAX;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)register0x00000020 + -8) = uVar5;
    pUVar15 = (pMVar16->fields)._material;
    if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar15,fVar20,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x40973e7;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar11 = (undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar5;
    pMVar16 = pUVar15[1].monitor;
    if (pMVar16 != (Map_CustomPhysicsMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine
                ((UnityEngine_PhysicMaterial_o *)pMVar16,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x4097407;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    obj = unaff_R14;
Map_CustomPhysicsMaterial__set_FrictionCombine:
    *(undefined8 *)((long)puVar11 + -8) = uVar5;
    pUVar15 = (pMVar16->fields)._material;
    if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_frictionCombine(pUVar15,(int32_t)uVar14,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar11 + -0x10) = 0x4097427;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar12 = (undefined8 *)((long)puVar11 + -0x10);
    *(undefined8 *)((long)puVar11 + -0x10) = uVar5;
    pUVar15 = pUVar15[1].monitor;
    if (pUVar15 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_bounceCombine(pUVar15,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar11 + -0x18) = 0x4097447;
    uVar5 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar12 + -8) = uVar5;
  __this = pUVar15[1].monitor;
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this,(int32_t)uVar14,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar12 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar12 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar12 + -0x18) = unaff_R15;
  *(MethodInfo_24EED20 **)((long)puVar12 + -0x20) = obj;
  *(undefined8 *)((long)puVar12 + -0x28) = unaff_R12;
  *(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o **)((long)puVar12 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar12 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974cd;
  pUVar6 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar6,(MethodInfo *)0x0);
  pUVar1 = __this + 1;
  __this[1].klass = pUVar6;
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974f7;
  pUVar7 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar14 == '\0') {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x409756e;
      pUVar7 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar12 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097595;
      __this = pUVar7;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097517;
      pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this = pUVar7;
      if (pSVar8 != (System_Object_array *)0x0) {
        uVar4 = (uint)pSVar8->max_length;
        if (0 < (int)uVar4) {
          uVar10 = 0;
          do {
            __this = pUVar7;
            if (uVar4 <= uVar10) goto label_040975c2;
            pUVar7 = (UnityEngine_MonoBehaviour_o *)pSVar8->m_Items[(int)uVar10];
            __this = pUVar7;
            if (pUVar7 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar6 = pUVar1->klass;
            *(undefined8 *)((long)puVar12 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar6,
                       (MethodInfo *)0x0);
            uVar10 = uVar10 + 1;
            uVar4 = (uint)pSVar8->max_length;
          } while ((int)uVar10 < (int)uVar4);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____getter_4_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x40f69d0

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____getter_4_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  Map_CustomPhysicsMaterial_o *__this;
  int32_t iVar3;
  bool_conflict bVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  undefined4 extraout_var;
  undefined8 uVar5;
  Il2CppObject *extraout_RAX_04;
  undefined4 extraout_var_00;
  Il2CppObject *extraout_RAX_05;
  UnityEngine_MonoBehaviour_c *pUVar6;
  UnityEngine_MonoBehaviour_o *pUVar7;
  System_Object_array *pSVar8;
  undefined4 extraout_var_01;
  Il2CppObject *extraout_RAX_06;
  Il2CppObject *extraout_RAX_07;
  Il2CppObject *pIVar9;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  uint uVar10;
  long unaff_RBX;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  MethodInfo *obj;
  ulong uVar13;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_PhysicMaterial_o *pUVar14;
  UnityEngine_MonoBehaviour_o *__this_00;
  long lVar15;
  MethodInfo *pMVar16;
  undefined8 unaff_R12;
  MethodInfo *unaff_R14;
  undefined8 unaff_R15;
  float value;
  float value_00;
  float value_01;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__get_Bounciness(__this,(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar9;
  }
  lVar15 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7e6 == '\0') {
    uStack_28 = 0x40f6a2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40f6a3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40f6a5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40f6a6c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar16 = method;
  value_01 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (lVar15 == 0) {
label_040f6a88:
    uStack_28 = 0x40f6a8d;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar16 != (MethodInfo *)0x0) && ((pMVar16->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
      pMStack_30 = (MethodInfo *)0x40f6aa6;
      iVar3 = Map_CustomPhysicsMaterial__get_FrictionCombine
                        ((Map_CustomPhysicsMaterial_o *)(pMVar16->field7_0x38).rgctx_data,(MethodInfo *)0x0);
      uStack_28 = CONCAT44(iVar3,(undefined4)uStack_28);
      pMStack_30 = (MethodInfo *)0x40f6abf;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
      return pIVar9;
    }
    unaff_RBX = 0;
    pMStack_30 = (MethodInfo *)0x40f6ac6;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    lStack_38 = lVar15;
    pMStack_30 = method;
    if (g_data_057ac7e7 == '\0') {
      uStack_48 = 0x40f6aef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_48 = 0x40f6afb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e7 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_48 = 0x40f6b1a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_48 = 0x40f6b2c;
    obj_00 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar16 = obj;
    uVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var_02,uVar10);
    if (unaff_RBX != 0) {
      pUVar14 = *(UnityEngine_PhysicMaterial_o **)(unaff_RBX + 0x38);
      pMVar16 = (MethodInfo *)0x0;
      if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
        uVar13 = (ulong)uVar10;
        plVar11 = &uStack_28;
        unaff_RBX = lStack_38;
        obj = pMStack_30;
        goto Map_CustomPhysicsMaterial__set_FrictionCombine;
      }
    }
    uStack_48 = 0x40f6b4f;
    uStack_48 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar16 != (MethodInfo *)0x0) && ((pMVar16->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
      iVar3 = Map_CustomPhysicsMaterial__get_BounceCombine
                        ((Map_CustomPhysicsMaterial_o *)(pMVar16->field7_0x38).rgctx_data,(MethodInfo *)0x0);
      uStack_48 = CONCAT44(iVar3,(undefined4)uStack_48);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
      return pIVar9;
    }
    lVar15 = 0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7e8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e8 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var_03,uVar10);
    if ((lVar15 == 0) ||
       (pUVar14 = *(UnityEngine_PhysicMaterial_o **)(lVar15 + 0x38),
       pUVar14 == (UnityEngine_PhysicMaterial_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7e9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac7e9 = '\x01';
      }
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
      return pIVar9;
    }
    uVar13 = (ulong)uVar10;
    puVar12 = &uStack_48;
  }
  else {
    pMVar16 = (MethodInfo *)0x0;
    if (*(long *)(lVar15 + 0x38) == 0) goto label_040f6a88;
    uVar13 = 0;
    pUVar14 = *(UnityEngine_PhysicMaterial_o **)(*(long *)(lVar15 + 0x38) + 0x20);
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_bounciness(pUVar14,value_01,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_staticFriction(pUVar14,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    uStack_20 = 0x4097387;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar14,value,(MethodInfo *)0x0);
      return extraout_RAX_01;
    }
    uStack_28 = 0x40973a7;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar14,(MethodInfo *)0x0);
      return extraout_RAX_02;
    }
    pMStack_30 = (MethodInfo *)0x40973c7;
    pMStack_30 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar14,value_00,(MethodInfo *)0x0);
      return extraout_RAX_03;
    }
    lStack_38 = 0x40973e7;
    lStack_38 = il2cpp_runtime_helper_022b2c90();
    plVar11 = &lStack_38;
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      iVar3 = UnityEngine_PhysicMaterial__get_frictionCombine(pUVar14,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var,iVar3);
    }
    uStack_40 = 0x4097407;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    obj = unaff_R14;
Map_CustomPhysicsMaterial__set_FrictionCombine:
    *(undefined8 *)((long)plVar11 + -8) = uVar5;
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_frictionCombine(pUVar14,(int32_t)uVar13,(MethodInfo *)0x0);
      return extraout_RAX_04;
    }
    *(undefined8 *)((long)plVar11 + -0x10) = 0x4097427;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar12 = (undefined8 *)((long)plVar11 + -0x10);
    *(undefined8 *)((long)plVar11 + -0x10) = uVar5;
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      iVar3 = UnityEngine_PhysicMaterial__get_bounceCombine(pUVar14,(MethodInfo *)0x0);
      return (Il2CppObject *)CONCAT44(extraout_var_00,iVar3);
    }
    *(undefined8 *)((long)plVar11 + -0x18) = 0x4097447;
    uVar5 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar12 + -8) = uVar5;
  __this_00 = pUVar14[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)uVar13,(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  *(undefined8 *)((long)puVar12 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar12 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar12 + -0x18) = unaff_R15;
  *(MethodInfo **)((long)puVar12 + -0x20) = obj;
  *(undefined8 *)((long)puVar12 + -0x28) = unaff_R12;
  *(long *)((long)puVar12 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar12 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974cd;
  pUVar6 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar6,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar6;
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974f7;
  pUVar7 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar13 == '\0') {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x409756e;
      pUVar7 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar12 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097595;
      __this_00 = pUVar7;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_01,bVar4);
      }
      if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
    else {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097517;
      pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar7;
      if (pSVar8 != (System_Object_array *)0x0) {
        uVar10 = (uint)pSVar8->max_length;
        pIVar9 = (Il2CppObject *)(ulong)uVar10;
        if (0 < (int)uVar10) {
          uVar10 = 0;
          do {
            __this_00 = pUVar7;
            if ((uint)pIVar9 <= uVar10) goto label_040975c2;
            pUVar7 = (UnityEngine_MonoBehaviour_o *)pSVar8->m_Items[(int)uVar10];
            __this_00 = pUVar7;
            if (pUVar7 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar6 = pUVar1->klass;
            *(undefined8 *)((long)puVar12 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar6,
                       (MethodInfo *)0x0);
            uVar10 = uVar10 + 1;
            uVar2 = (uint)pSVar8->max_length;
            pIVar9 = (Il2CppObject *)(ulong)uVar2;
          } while ((int)uVar10 < (int)uVar2);
        }
        return pIVar9;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX_07;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____setter_4_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f6a10

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____setter_4_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  uint uVar4;
  undefined8 uVar5;
  UnityEngine_MonoBehaviour_c *pUVar6;
  UnityEngine_MonoBehaviour_o *pUVar7;
  System_Object_array *pSVar8;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Il2CppObject *pIVar9;
  uint uVar10;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *unaff_RBX;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o **ppCVar11;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  MethodInfo_24EED20 *obj;
  ulong uVar13;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_PhysicMaterial_o *pUVar14;
  Map_CustomPhysicsMaterial_o *pMVar15;
  UnityEngine_MonoBehaviour_o *__this;
  MethodInfo_24EED20 *pMVar16;
  long lVar17;
  undefined8 unaff_R12;
  MethodInfo_24EED20 *unaff_R14;
  undefined8 unaff_R15;
  float value;
  float value_00;
  float value_01;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCStack_30;
  MethodInfo_24EED20 *pMStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (g_data_057ac7e6 == '\0') {
    uStack_20 = 0x40f6a2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40f6a3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f6a5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f6a6c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pIVar9 = __v;
  value_01 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
label_040f6a88:
    uStack_20 = 0x40f6a8d;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    if ((pIVar9 != (Il2CppObject *)0x0) && (pIVar9[3].monitor != (Map_CustomPhysicsMaterial_o *)0x0)) {
      pMStack_28 = (MethodInfo_24EED20 *)0x40f6aa6;
      iVar3 = Map_CustomPhysicsMaterial__get_FrictionCombine(pIVar9[3].monitor,(MethodInfo *)0x0);
      uStack_20 = CONCAT44(iVar3,(undefined4)uStack_20);
      pMStack_28 = (MethodInfo_24EED20 *)0x40f6abf;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
      return;
    }
    unaff_RBX = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0;
    pMStack_28 = (MethodInfo_24EED20 *)0x40f6ac6;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    pCStack_30 = __i;
    pMStack_28 = (MethodInfo_24EED20 *)__v;
    if (g_data_057ac7e7 == '\0') {
      uStack_40 = 0x40f6aef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_40 = 0x40f6afb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e7 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x40f6b1a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x40f6b2c;
    obj_00 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar16 = obj;
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var,uVar4);
    if (unaff_RBX != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
      pMVar15 = (unaff_RBX->fields).Value;
      pMVar16 = (MethodInfo_24EED20 *)0x0;
      if (pMVar15 != (Map_CustomPhysicsMaterial_o *)0x0) {
        uVar13 = (ulong)uVar4;
        ppCVar11 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o **)&uStack_20;
        unaff_RBX = pCStack_30;
        obj = pMStack_28;
        goto Map_CustomPhysicsMaterial__set_FrictionCombine;
      }
    }
    uStack_40 = 0x40f6b4f;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if ((pMVar16 != (MethodInfo_24EED20 *)0x0) &&
       ((Map_CustomPhysicsMaterial_o *)pMVar16->rgctx_data != (Map_CustomPhysicsMaterial_o *)0x0)) {
      iVar3 = Map_CustomPhysicsMaterial__get_BounceCombine
                        ((Map_CustomPhysicsMaterial_o *)pMVar16->rgctx_data,(MethodInfo *)0x0);
      uStack_40 = CONCAT44(iVar3,(undefined4)uStack_40);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
      return;
    }
    lVar17 = 0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7e8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ac7e8 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
    uVar5 = CONCAT44(extraout_var_00,uVar4);
    if ((lVar17 == 0) ||
       (pUVar14 = *(UnityEngine_PhysicMaterial_o **)(lVar17 + 0x38),
       pUVar14 == (UnityEngine_PhysicMaterial_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7e9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac7e9 = '\x01';
      }
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
      return;
    }
    uVar13 = (ulong)uVar4;
    puVar12 = &uStack_40;
  }
  else {
    pMVar15 = (__i->fields).Value;
    pIVar9 = (Il2CppObject *)0x0;
    if (pMVar15 == (Map_CustomPhysicsMaterial_o *)0x0) goto label_040f6a88;
    uVar13 = 0;
    pUVar14 = (pMVar15->fields)._material;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_bounciness(pUVar14,value_01,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_staticFriction(pUVar14,(MethodInfo *)0x0);
      return;
    }
    uStack_18 = 0x4097387;
    uStack_18 = il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar14,value,(MethodInfo *)0x0);
      return;
    }
    uStack_20 = 0x40973a7;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar14,(MethodInfo *)0x0);
      return;
    }
    pMStack_28 = (MethodInfo_24EED20 *)0x40973c7;
    pMStack_28 = (MethodInfo_24EED20 *)il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar14,value_00,(MethodInfo *)0x0);
      return;
    }
    pCStack_30 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x40973e7;
    pCStack_30 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_helper_022b2c90();
    ppCVar11 = &pCStack_30;
    pMVar15 = pUVar14[1].monitor;
    if (pMVar15 != (Map_CustomPhysicsMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine
                ((UnityEngine_PhysicMaterial_o *)pMVar15,(MethodInfo *)0x0);
      return;
    }
    uStack_38 = 0x4097407;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    obj = unaff_R14;
Map_CustomPhysicsMaterial__set_FrictionCombine:
    *(undefined8 *)((long)ppCVar11 + -8) = uVar5;
    pUVar14 = (pMVar15->fields)._material;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_frictionCombine(pUVar14,(int32_t)uVar13,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)ppCVar11 + -0x10) = 0x4097427;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    puVar12 = (undefined8 *)((long)ppCVar11 + -0x10);
    *(undefined8 *)((long)ppCVar11 + -0x10) = uVar5;
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_bounceCombine(pUVar14,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)ppCVar11 + -0x18) = 0x4097447;
    uVar5 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar12 + -8) = uVar5;
  __this = pUVar14[1].monitor;
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this,(int32_t)uVar13,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar12 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar12 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar12 + -0x18) = unaff_R15;
  *(MethodInfo_24EED20 **)((long)puVar12 + -0x20) = obj;
  *(undefined8 *)((long)puVar12 + -0x28) = unaff_R12;
  *(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o **)((long)puVar12 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar12 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974cd;
  pUVar6 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar6,(MethodInfo *)0x0);
  pUVar1 = __this + 1;
  __this[1].klass = pUVar6;
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974f7;
  pUVar7 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar13 == '\0') {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x409756e;
      pUVar7 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar12 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097595;
      __this = pUVar7;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097517;
      pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this = pUVar7;
      if (pSVar8 != (System_Object_array *)0x0) {
        uVar4 = (uint)pSVar8->max_length;
        if (0 < (int)uVar4) {
          uVar10 = 0;
          do {
            __this = pUVar7;
            if (uVar4 <= uVar10) goto label_040975c2;
            pUVar7 = (UnityEngine_MonoBehaviour_o *)pSVar8->m_Items[(int)uVar10];
            __this = pUVar7;
            if (pUVar7 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar6 = pUVar1->klass;
            *(undefined8 *)((long)puVar12 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar7,(UnityEngine_PhysicMaterial_o *)pUVar6,
                       (MethodInfo *)0x0);
            uVar10 = uVar10 + 1;
            uVar4 = (uint)pSVar8->max_length;
          } while ((int)uVar10 < (int)uVar4);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____getter_5_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x40f6a90

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____getter_5_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  Map_CustomPhysicsMaterial_o *__this;
  int32_t iVar3;
  bool_conflict bVar4;
  uint uVar5;
  Il2CppObject *extraout_RAX;
  undefined4 extraout_var;
  undefined8 uVar6;
  Il2CppObject *extraout_RAX_00;
  UnityEngine_MonoBehaviour_c *pUVar7;
  UnityEngine_MonoBehaviour_o *pUVar8;
  System_Object_array *pSVar9;
  undefined4 extraout_var_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *pIVar10;
  undefined4 extraout_var_01;
  long lVar11;
  long unaff_RBX;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  MethodInfo_24EE950 *obj;
  ulong uVar13;
  UnityEngine_PhysicMaterial_o *pUVar14;
  UnityEngine_MonoBehaviour_o *__this_00;
  MethodInfo *pMVar15;
  long lVar16;
  undefined8 unaff_R12;
  MethodInfo *unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__get_FrictionCombine(__this,(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar10;
  }
  lVar11 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7e7 == '\0') {
    uStack_28 = 0x40f6aef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_28 = 0x40f6afb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40f6b1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40f6b2c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pMVar15 = method;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar11 != 0) {
    pMVar15 = (MethodInfo *)0x0;
    if (*(long *)(lVar11 + 0x38) != 0) {
      uVar13 = (ulong)uVar5;
      pUVar14 = *(UnityEngine_PhysicMaterial_o **)(*(long *)(lVar11 + 0x38) + 0x20);
      if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_frictionCombine(pUVar14,uVar5,(MethodInfo *)0x0);
        return extraout_RAX;
      }
      il2cpp_runtime_helper_022b2c90();
      puVar12 = (undefined8 *)&stack0xffffffffffffffe8;
      pUVar14 = pUVar14[1].monitor;
      if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
        iVar3 = UnityEngine_PhysicMaterial__get_bounceCombine(pUVar14,(MethodInfo *)0x0);
        return (Il2CppObject *)CONCAT44(extraout_var,iVar3);
      }
      uStack_20 = 0x4097447;
      uVar6 = il2cpp_runtime_helper_022b2c90();
      lVar11 = unaff_RBX;
      method = unaff_R14;
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  uStack_28 = 0x40f6b4f;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar15 != (MethodInfo *)0x0) && ((pMVar15->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    iVar3 = Map_CustomPhysicsMaterial__get_BounceCombine
                      ((Map_CustomPhysicsMaterial_o *)(pMVar15->field7_0x38).rgctx_data,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(iVar3,(undefined4)uStack_28);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
    return pIVar10;
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  uVar6 = CONCAT44(extraout_var_01,uVar5);
  if ((lVar16 == 0) ||
     (pUVar14 = *(UnityEngine_PhysicMaterial_o **)(lVar16 + 0x38),
     pUVar14 == (UnityEngine_PhysicMaterial_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7e9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac7e9 = '\x01';
    }
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar10,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar10;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar10);
    return pIVar10;
  }
  uVar13 = (ulong)uVar5;
  puVar12 = &uStack_28;
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar12 + -8) = uVar6;
  __this_00 = pUVar14[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)uVar13,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  *(undefined8 *)((long)puVar12 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar12 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar12 + -0x18) = unaff_R15;
  *(MethodInfo **)((long)puVar12 + -0x20) = method;
  *(undefined8 *)((long)puVar12 + -0x28) = unaff_R12;
  *(long *)((long)puVar12 + -0x30) = lVar11;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar12 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974cd;
  pUVar7 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar7,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar7;
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974f7;
  pUVar8 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar13 == '\0') {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x409756e;
      pUVar8 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar12 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097595;
      __this_00 = pUVar8;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var_00,bVar4);
      }
      if (pUVar8 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar8,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
    else {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097517;
      pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar8;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar5 = (uint)pSVar9->max_length;
        pIVar10 = (Il2CppObject *)(ulong)uVar5;
        if (0 < (int)uVar5) {
          uVar5 = 0;
          do {
            __this_00 = pUVar8;
            if ((uint)pIVar10 <= uVar5) goto label_040975c2;
            pUVar8 = (UnityEngine_MonoBehaviour_o *)pSVar9->m_Items[(int)uVar5];
            __this_00 = pUVar8;
            if (pUVar8 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar7 = pUVar1->klass;
            *(undefined8 *)((long)puVar12 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar8,(UnityEngine_PhysicMaterial_o *)pUVar7,
                       (MethodInfo *)0x0);
            uVar5 = uVar5 + 1;
            uVar2 = (uint)pSVar9->max_length;
            pIVar10 = (Il2CppObject *)(ulong)uVar2;
          } while ((int)uVar5 < (int)uVar2);
        }
        return pIVar10;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX_02;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____setter_5_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f6ad0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____setter_5_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  Map_CustomPhysicsMaterial_o *pMVar2;
  bool_conflict bVar3;
  uint uVar4;
  int32_t iVar5;
  undefined8 uVar6;
  UnityEngine_MonoBehaviour_c *pUVar7;
  UnityEngine_MonoBehaviour_o *pUVar8;
  System_Object_array *pSVar9;
  undefined8 in_RAX;
  undefined4 extraout_var;
  Il2CppObject *pIVar10;
  uint uVar11;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *unaff_RBX;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  MethodInfo_24EE950 *obj;
  ulong uVar13;
  UnityEngine_PhysicMaterial_o *pUVar14;
  UnityEngine_MonoBehaviour_o *__this;
  long lVar15;
  undefined8 unaff_R12;
  Il2CppObject *unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (g_data_057ac7e7 == '\0') {
    uStack_20 = 0x40f6aef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20 = 0x40f6afb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f6b1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f6b2c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pIVar10 = __v;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
    pMVar2 = (__i->fields).Value;
    pIVar10 = (Il2CppObject *)0x0;
    if (pMVar2 != (Map_CustomPhysicsMaterial_o *)0x0) {
      uVar13 = (ulong)uVar4;
      pUVar14 = (pMVar2->fields)._material;
      if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_frictionCombine(pUVar14,uVar4,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      puVar12 = (undefined8 *)&stack0xfffffffffffffff0;
      pUVar14 = pUVar14[1].monitor;
      if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__get_bounceCombine(pUVar14,(MethodInfo *)0x0);
        return;
      }
      uStack_18 = 0x4097447;
      uVar6 = il2cpp_runtime_helper_022b2c90();
      __i = unaff_RBX;
      __v = unaff_R14;
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  uStack_20 = 0x40f6b4f;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar10 != (Il2CppObject *)0x0) && (pIVar10[3].monitor != (Map_CustomPhysicsMaterial_o *)0x0)) {
    iVar5 = Map_CustomPhysicsMaterial__get_BounceCombine(pIVar10[3].monitor,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(iVar5,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  lVar15 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  uVar6 = CONCAT44(extraout_var,uVar4);
  if ((lVar15 == 0) ||
     (pUVar14 = *(UnityEngine_PhysicMaterial_o **)(lVar15 + 0x38),
     pUVar14 == (UnityEngine_PhysicMaterial_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7e9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac7e9 = '\x01';
    }
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar10,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar10;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar10);
    return;
  }
  uVar13 = (ulong)uVar4;
  puVar12 = &uStack_20;
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar12 + -8) = uVar6;
  __this = pUVar14[1].monitor;
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this,(int32_t)uVar13,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar12 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar12 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar12 + -0x18) = unaff_R15;
  *(Il2CppObject **)((long)puVar12 + -0x20) = __v;
  *(undefined8 *)((long)puVar12 + -0x28) = unaff_R12;
  *(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o **)((long)puVar12 + -0x30) = __i;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar12 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974cd;
  pUVar7 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar7,(MethodInfo *)0x0);
  pUVar1 = __this + 1;
  __this[1].klass = pUVar7;
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974f7;
  pUVar8 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar13 == '\0') {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x409756e;
      pUVar8 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar12 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097595;
      __this = pUVar8;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar8 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar8,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097517;
      pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this = pUVar8;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar4 = (uint)pSVar9->max_length;
        if (0 < (int)uVar4) {
          uVar11 = 0;
          do {
            __this = pUVar8;
            if (uVar4 <= uVar11) goto label_040975c2;
            pUVar8 = (UnityEngine_MonoBehaviour_o *)pSVar9->m_Items[(int)uVar11];
            __this = pUVar8;
            if (pUVar8 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar7 = pUVar1->klass;
            *(undefined8 *)((long)puVar12 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar8,(UnityEngine_PhysicMaterial_o *)pUVar7,
                       (MethodInfo *)0x0);
            uVar11 = uVar11 + 1;
            uVar4 = (uint)pSVar9->max_length;
          } while ((int)uVar11 < (int)uVar4);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____getter_6_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x40f6b50

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____getter_6_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  Map_CustomPhysicsMaterial_o *__this;
  bool_conflict bVar3;
  int32_t value;
  Il2CppObject *extraout_RAX;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  undefined4 extraout_var;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *pIVar6;
  uint uVar7;
  char cVar8;
  UnityEngine_MonoBehaviour_o *__this_01;
  long lVar9;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__get_BounceCombine(__this,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar6;
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x38) == 0)) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7e9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac7e9 = '\x01';
    }
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
    return pIVar6;
  }
  cVar8 = (char)value;
  __this_01 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(lVar9 + 0x38) + 0x20);
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (cVar8 == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return (Il2CppObject *)CONCAT44(extraout_var,bVar3);
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_RAX_00;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar7 = (uint)pSVar5->max_length;
        pIVar6 = (Il2CppObject *)(ulong)uVar7;
        if (0 < (int)uVar7) {
          uVar7 = 0;
          do {
            __this_01 = pUVar4;
            if ((uint)pIVar6 <= uVar7) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar7];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar7 = uVar7 + 1;
            uVar2 = (uint)pSVar5->max_length;
            pIVar6 = (Il2CppObject *)(ulong)uVar2;
          } while ((int)uVar7 < (int)uVar2);
        }
        return pIVar6;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____setter_6_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f6b90

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____setter_6_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  Map_CustomPhysicsMaterial_o *pMVar2;
  uint uVar3;
  bool_conflict bVar4;
  int32_t value;
  UnityEngine_MonoBehaviour_c *__this;
  UnityEngine_MonoBehaviour_o *pUVar5;
  System_Object_array *pSVar6;
  Il2CppObject *__this_00;
  uint uVar7;
  char cVar8;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057ac7e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7e8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (pMVar2 = (__i->fields).Value, pMVar2 == (Map_CustomPhysicsMaterial_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7e9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac7e9 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
    return;
  }
  cVar8 = (char)value;
  __this_01 = (UnityEngine_MonoBehaviour_o *)(pMVar2->fields)._material;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar5 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (cVar8 == '\0') {
      pUVar5 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar5;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar5;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar3 = (uint)pSVar6->max_length;
        if (0 < (int)uVar3) {
          uVar7 = 0;
          do {
            __this_01 = pUVar5;
            if (uVar3 <= uVar7) goto label_040975c2;
            pUVar5 = (UnityEngine_MonoBehaviour_o *)pSVar6->m_Items[(int)uVar7];
            __this_01 = pUVar5;
            if (pUVar5 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar7 = uVar7 + 1;
            uVar3 = (uint)pSVar6->max_length;
          } while ((int)uVar7 < (int)uVar3);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5ae0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x40f5af0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor_3ff5af0
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  byte bVar2;
  Map_MapObject_o *pMVar3;
  Il2CppClass *pIVar4;
  uint uVar5;
  bool_conflict bVar6;
  UnityEngine_MonoBehaviour_c *pUVar7;
  UnityEngine_MonoBehaviour_o *pUVar8;
  System_Object_array *pSVar9;
  UnityEngine_Component_o *component;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 unaff_RBP;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar16;
  UnityEngine_MonoBehaviour_o *__this_00;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *pCVar17;
  Map_CustomPhysicsMaterial_o *pMVar18;
  UnityEngine_PhysicMaterial_o *pUVar19;
  long lVar20;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float fVar21;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float value;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 auStack_20 [2];
  
  pCVar16 = owner;
  pCVar17 = __this;
  if (g_data_057ac7d9 == '\0') {
    auStack_20[0] = 0x40f5b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPhysicsMaterial_GetOrAddComponent_CustomPhysicsMat);
    pCVar17 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)&TypeInfo_CustomPhysicsMaterial;
    auStack_20[0] = 0x40f5b1b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7d9 = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar3 = (owner->fields).Value, pMVar3 != (Map_MapObject_o *)0x0)) {
    auStack_20[0] = 0x40f5b4b;
    component = (UnityEngine_Component_o *)
                CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                          ((pMVar3->fields).GameObject,MethodInfo_CustomPhysicsMaterial_GetOrAddComponent_CustomPhysicsMat);
    auStack_20[0] = 0x40f5b58;
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,component,(MethodInfo *)0x0);
    pCVar17 = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)&(__this->fields).OwnerMapObject;
    (__this->fields).OwnerMapObject = owner;
    auStack_20[0] = 0x40f5b68;
    pCVar16 = owner;
    il2cpp_runtime_helper_022b4080();
    pMVar3 = (owner->fields).Value;
    if (pMVar3 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar3->fields).GameObject;
      auStack_20[0] = 0x40f5b86;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Owner);
      pIVar4 = TypeInfo_CustomPhysicsMaterial;
      pMVar18 = (Map_CustomPhysicsMaterial_o *)(__this->fields).Component;
      if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
        bVar2 = (TypeInfo_CustomPhysicsMaterial->_2).naturalAligment;
        if ((bVar2 <= (((UnityEngine_Component_c *)pMVar18->klass)->_2).naturalAligment) &&
           ((((UnityEngine_Component_c *)pMVar18->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomPhysicsMaterial)
           ) {
          (__this->fields).Value = pMVar18;
          if ((bVar2 <= (((UnityEngine_Component_c *)pMVar18->klass)->_2).naturalAligment) &&
             ((((UnityEngine_Component_c *)pMVar18->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar4))
          goto label_040f5be9;
        }
        auStack_20[0] = 0x40f5be1;
        il2cpp_runtime_helper_022b2fd0(pMVar18,pIVar4);
      }
      (__this->fields).Value = (Map_CustomPhysicsMaterial_o *)0x0;
label_040f5be9:
      il2cpp_runtime_helper_022b4080(&(__this->fields).Value);
      return;
    }
  }
  auStack_20[0] = 0x40f5c01;
  auStack_20[0] = il2cpp_runtime_helper_022b2c90();
  puVar12 = auStack_20;
  pMVar18 = (pCVar17->fields).Value;
  if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__get_StaticFriction(pMVar18,(MethodInfo *)0x0);
    return;
  }
  uStack_28 = 0x40f5c27;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  pUVar19 = (UnityEngine_PhysicMaterial_o *)pMVar18[1].fields.m_CachedPtr;
  uStack_28 = uVar10;
  if (pUVar19 == (UnityEngine_PhysicMaterial_o *)0x0) {
    uStack_30 = 0x40f5c47;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    puVar13 = &uStack_30;
    pMVar18 = pUVar19[2].monitor;
    if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_DynamicFriction(pMVar18,(MethodInfo *)0x0);
      return;
    }
    uStack_38 = 0x40f5c67;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    pUVar19 = (UnityEngine_PhysicMaterial_o *)pMVar18[1].fields.m_CachedPtr;
    uStack_38 = uVar10;
    if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
      pCVar16 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      fVar21 = extraout_XMM0_Da_02;
      goto Map_CustomPhysicsMaterial__set_DynamicFriction;
    }
    uStack_40 = 0x40f5c87;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    pMVar18 = pUVar19[2].monitor;
    if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_Bounciness(pMVar18,(MethodInfo *)0x0);
      return;
    }
    uStack_48 = 0x40f5ca7;
    uStack_48 = il2cpp_runtime_helper_022b2c90();
    lVar20 = pMVar18[1].fields.m_CachedPtr;
    if (lVar20 != 0) {
      pCVar16 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      pUVar19 = *(UnityEngine_PhysicMaterial_o **)(lVar20 + 0x20);
      if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_bounciness(pUVar19,value,(MethodInfo *)0x0);
        return;
      }
      uStack_50 = 0x4097367;
      uStack_50 = il2cpp_runtime_helper_022b2c90();
      puVar12 = &uStack_50;
      pUVar19 = pUVar19[1].monitor;
      if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__get_staticFriction(pUVar19,(MethodInfo *)0x0);
        return;
      }
      uStack_58 = 0x4097387;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      fVar21 = extraout_XMM0_Da;
      goto Map_CustomPhysicsMaterial__set_StaticFriction;
    }
    uStack_50 = 0x40f5cc7;
    uStack_50 = il2cpp_runtime_helper_022b2c90();
    puVar14 = &uStack_50;
    pMVar18 = *(Map_CustomPhysicsMaterial_o **)(lVar20 + 0x38);
    if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_FrictionCombine(pMVar18,(MethodInfo *)0x0);
      return;
    }
    uStack_58 = 0x40f5ce7;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    pUVar19 = (UnityEngine_PhysicMaterial_o *)pMVar18[1].fields.m_CachedPtr;
    uStack_58 = uVar10;
    if (pUVar19 == (UnityEngine_PhysicMaterial_o *)0x0) {
      uStack_60 = 0x40f5d07;
      uStack_60 = il2cpp_runtime_helper_022b2c90();
      puVar15 = &uStack_60;
      pMVar18 = pUVar19[2].monitor;
      if (pMVar18 != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__get_BounceCombine(pMVar18,(MethodInfo *)0x0);
        return;
      }
      uVar10 = il2cpp_runtime_helper_022b2c90();
      uVar5 = (uint)pCVar16;
      pUVar19 = (UnityEngine_PhysicMaterial_o *)pMVar18[1].fields.m_CachedPtr;
      if (pUVar19 == (UnityEngine_PhysicMaterial_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (pUVar19[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
          Map_CustomPhysicsMaterial__Setup(pUVar19[2].monitor,uVar5 & 0xff,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7da == '\0') {
          il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
          g_data_057ac7da = '\x01';
        }
        return;
      }
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  else {
    pCVar16 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    fVar21 = extraout_XMM0_Da_01;
Map_CustomPhysicsMaterial__set_StaticFriction:
    *(undefined8 *)((long)puVar12 + -8) = uVar10;
    pUVar19 = pUVar19[1].monitor;
    if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar19,fVar21,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar12 + -0x10) = 0x40973a7;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    puVar13 = (undefined8 *)((long)puVar12 + -0x10);
    *(undefined8 *)((long)puVar12 + -0x10) = uVar10;
    pUVar19 = pUVar19[1].monitor;
    if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar19,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar12 + -0x18) = 0x40973c7;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    fVar21 = extraout_XMM0_Da_00;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)puVar13 + -8) = uVar10;
    pUVar19 = pUVar19[1].monitor;
    if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar19,fVar21,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar13 + -0x10) = 0x40973e7;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    puVar14 = (undefined8 *)((long)puVar13 + -0x10);
    *(undefined8 *)((long)puVar13 + -0x10) = uVar10;
    pUVar19 = pUVar19[1].monitor;
    if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine(pUVar19,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar13 + -0x18) = 0x4097407;
    uVar10 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar14 + -8) = uVar10;
  pUVar19 = pUVar19[1].monitor;
  if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar19,(int32_t)pCVar16,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar14 + -0x10) = 0x4097427;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  puVar15 = (undefined8 *)((long)puVar14 + -0x10);
  *(undefined8 *)((long)puVar14 + -0x10) = uVar10;
  pUVar19 = pUVar19[1].monitor;
  if (pUVar19 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar19,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar14 + -0x18) = 0x4097447;
  uVar10 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar15 + -8) = uVar10;
  __this_00 = pUVar19[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)pCVar16,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar15 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar15 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar15 + -0x18) = unaff_R15;
  *(CustomLogic_CustomLogicMapObjectBuiltin_o **)((long)puVar15 + -0x20) = owner;
  *(undefined8 *)((long)puVar15 + -0x28) = unaff_R12;
  *(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o **)((long)puVar15 + -0x30) = __this;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar15 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar15 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar15 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar15 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40974cd;
  pUVar7 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar7,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar7;
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40974f7;
  pUVar8 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)pCVar16 == '\0') {
      *(undefined8 *)((long)puVar15 + -0x38) = 0x409756e;
      pUVar8 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar15 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar15 + -0x38) = 0x4097595;
      __this_00 = pUVar8;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (pUVar8 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar8,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar15 + -0x38) = 0x4097517;
      pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar8;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar5 = (uint)pSVar9->max_length;
        if (0 < (int)uVar5) {
          uVar11 = 0;
          do {
            __this_00 = pUVar8;
            if (uVar5 <= uVar11) goto label_040975c2;
            pUVar8 = (UnityEngine_MonoBehaviour_o *)pSVar9->m_Items[(int)uVar11];
            __this_00 = pUVar8;
            if (pUVar8 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar7 = pUVar1->klass;
            *(undefined8 *)((long)puVar15 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar8,(UnityEngine_PhysicMaterial_o *)pUVar7,
                       (MethodInfo *)0x0);
            uVar11 = uVar11 + 1;
            uVar5 = (uint)pSVar9->max_length;
          } while ((int)uVar11 < (int)uVar5);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar15 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_StaticFriction
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_StaticFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5c10

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_StaticFriction
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *pUVar4;
  UnityEngine_MonoBehaviour_o *pUVar5;
  System_Object_array *pSVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 unaff_RBX;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  UnityEngine_MonoBehaviour_o *__this_00;
  Map_CustomPhysicsMaterial_o *pMVar13;
  UnityEngine_PhysicMaterial_o *pUVar14;
  long lVar15;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float fVar16;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float value;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  float extraout_XMM0_Da_17;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined1 auStack_8 [8];
  
  puVar9 = (undefined8 *)auStack_8;
  pMVar13 = (__this->fields).Value;
  if (pMVar13 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar16 = Map_CustomPhysicsMaterial__get_StaticFriction(pMVar13,(MethodInfo *)0x0);
    return fVar16;
  }
  uStack_10 = 0x40f5c27;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  pUVar14 = (UnityEngine_PhysicMaterial_o *)pMVar13[1].fields.m_CachedPtr;
  uStack_10 = uVar7;
  if (pUVar14 == (UnityEngine_PhysicMaterial_o *)0x0) {
    uStack_18 = 0x40f5c47;
    uStack_18 = il2cpp_runtime_helper_022b2c90();
    puVar10 = &uStack_18;
    pMVar13 = pUVar14[2].monitor;
    if (pMVar13 != (Map_CustomPhysicsMaterial_o *)0x0) {
      fVar16 = Map_CustomPhysicsMaterial__get_DynamicFriction(pMVar13,(MethodInfo *)0x0);
      return fVar16;
    }
    uStack_20 = 0x40f5c67;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    pUVar14 = (UnityEngine_PhysicMaterial_o *)pMVar13[1].fields.m_CachedPtr;
    uStack_20 = uVar7;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      method = (MethodInfo *)0x0;
      fVar16 = extraout_XMM0_Da_14;
      goto Map_CustomPhysicsMaterial__set_DynamicFriction;
    }
    uStack_28 = 0x40f5c87;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    pMVar13 = pUVar14[2].monitor;
    if (pMVar13 != (Map_CustomPhysicsMaterial_o *)0x0) {
      fVar16 = Map_CustomPhysicsMaterial__get_Bounciness(pMVar13,(MethodInfo *)0x0);
      return fVar16;
    }
    uStack_30 = 0x40f5ca7;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    lVar15 = pMVar13[1].fields.m_CachedPtr;
    if (lVar15 != 0) {
      method = (MethodInfo *)0x0;
      pUVar14 = *(UnityEngine_PhysicMaterial_o **)(lVar15 + 0x20);
      if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_bounciness(pUVar14,value,(MethodInfo *)0x0);
        return extraout_XMM0_Da;
      }
      uStack_38 = 0x4097367;
      uStack_38 = il2cpp_runtime_helper_022b2c90();
      puVar9 = &uStack_38;
      pUVar14 = pUVar14[1].monitor;
      if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
        fVar16 = UnityEngine_PhysicMaterial__get_staticFriction(pUVar14,(MethodInfo *)0x0);
        return fVar16;
      }
      uStack_40 = 0x4097387;
      uVar7 = il2cpp_runtime_helper_022b2c90();
      fVar16 = extraout_XMM0_Da_00;
      goto Map_CustomPhysicsMaterial__set_StaticFriction;
    }
    uStack_38 = 0x40f5cc7;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    puVar11 = &uStack_38;
    pMVar13 = *(Map_CustomPhysicsMaterial_o **)(lVar15 + 0x38);
    if (pMVar13 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_FrictionCombine(pMVar13,(MethodInfo *)0x0);
      return extraout_XMM0_Da_15;
    }
    uStack_40 = 0x40f5ce7;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    pUVar14 = (UnityEngine_PhysicMaterial_o *)pMVar13[1].fields.m_CachedPtr;
    uStack_40 = uVar7;
    if (pUVar14 == (UnityEngine_PhysicMaterial_o *)0x0) {
      uStack_48 = 0x40f5d07;
      uStack_48 = il2cpp_runtime_helper_022b2c90();
      puVar12 = &uStack_48;
      pMVar13 = pUVar14[2].monitor;
      if (pMVar13 != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__get_BounceCombine(pMVar13,(MethodInfo *)0x0);
        return extraout_XMM0_Da_16;
      }
      uVar7 = il2cpp_runtime_helper_022b2c90();
      uVar2 = (uint)method;
      pUVar14 = (UnityEngine_PhysicMaterial_o *)pMVar13[1].fields.m_CachedPtr;
      if (pUVar14 == (UnityEngine_PhysicMaterial_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (pUVar14[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
          Map_CustomPhysicsMaterial__Setup(pUVar14[2].monitor,uVar2 & 0xff,(MethodInfo *)0x0);
          return extraout_XMM0_Da_17;
        }
        fVar16 = (float)il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7da == '\0') {
          fVar16 = (float)il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
          g_data_057ac7da = '\x01';
        }
        return fVar16;
      }
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  else {
    method = (MethodInfo *)0x0;
    fVar16 = extraout_XMM0_Da_13;
Map_CustomPhysicsMaterial__set_StaticFriction:
    *(undefined8 *)((long)puVar9 + -8) = uVar7;
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar14,fVar16,(MethodInfo *)0x0);
      return extraout_XMM0_Da_01;
    }
    *(undefined8 *)((long)puVar9 + -0x10) = 0x40973a7;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    puVar10 = (undefined8 *)((long)puVar9 + -0x10);
    *(undefined8 *)((long)puVar9 + -0x10) = uVar7;
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      fVar16 = UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar14,(MethodInfo *)0x0);
      return fVar16;
    }
    *(undefined8 *)((long)puVar9 + -0x18) = 0x40973c7;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    fVar16 = extraout_XMM0_Da_02;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)puVar10 + -8) = uVar7;
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar14,fVar16,(MethodInfo *)0x0);
      return extraout_XMM0_Da_03;
    }
    *(undefined8 *)((long)puVar10 + -0x10) = 0x40973e7;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    puVar11 = (undefined8 *)((long)puVar10 + -0x10);
    *(undefined8 *)((long)puVar10 + -0x10) = uVar7;
    pUVar14 = pUVar14[1].monitor;
    if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine(pUVar14,(MethodInfo *)0x0);
      return extraout_XMM0_Da_04;
    }
    *(undefined8 *)((long)puVar10 + -0x18) = 0x4097407;
    uVar7 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar11 + -8) = uVar7;
  pUVar14 = pUVar14[1].monitor;
  if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar14,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  *(undefined8 *)((long)puVar11 + -0x10) = 0x4097427;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  puVar12 = (undefined8 *)((long)puVar11 + -0x10);
  *(undefined8 *)((long)puVar11 + -0x10) = uVar7;
  pUVar14 = pUVar14[1].monitor;
  if (pUVar14 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar14,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
  *(undefined8 *)((long)puVar11 + -0x18) = 0x4097447;
  uVar7 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar12 + -8) = uVar7;
  __this_00 = pUVar14[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_07;
  }
  *(undefined8 *)((long)puVar12 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar12 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar12 + -0x18) = unaff_R15;
  *(undefined8 *)((long)puVar12 + -0x20) = unaff_R14;
  *(undefined8 *)((long)puVar12 + -0x28) = unaff_R12;
  *(undefined8 *)((long)puVar12 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar12 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar12 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974cd;
  pUVar4 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar4,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar4;
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40974f7;
  pUVar5 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x409756e;
      pUVar5 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar12 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097595;
      __this_00 = pUVar5;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return extraout_XMM0_Da_10;
      }
      if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_XMM0_Da_11;
      }
    }
    else {
      *(undefined8 *)((long)puVar12 + -0x38) = 0x4097517;
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar5;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar6->max_length;
        fVar16 = extraout_XMM0_Da_08;
        if (0 < (int)uVar2) {
          uVar8 = 0;
          do {
            __this_00 = pUVar5;
            if (uVar2 <= uVar8) goto label_040975c2;
            pUVar5 = (UnityEngine_MonoBehaviour_o *)pSVar6->m_Items[(int)uVar8];
            __this_00 = pUVar5;
            if (pUVar5 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar4 = pUVar1->klass;
            *(undefined8 *)((long)puVar12 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar4,
                       (MethodInfo *)0x0);
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pSVar6->max_length;
            fVar16 = extraout_XMM0_Da_09;
          } while ((int)uVar8 < (int)uVar2);
        }
        return fVar16;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar12 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_XMM0_Da_12;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_StaticFriction
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_StaticFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40f5c30

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_StaticFriction
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  undefined8 uVar4;
  UnityEngine_MonoBehaviour_c *pUVar5;
  UnityEngine_MonoBehaviour_o *pUVar6;
  System_Object_array *pSVar7;
  undefined8 in_RAX;
  uint uVar8;
  undefined8 unaff_RBX;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 unaff_RBP;
  UnityEngine_MonoBehaviour_o *__this_00;
  Map_CustomPhysicsMaterial_o *pMVar12;
  UnityEngine_PhysicMaterial_o *pUVar13;
  long lVar14;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float value_00;
  float extraout_XMM0_Da_01;
  float value_01;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 auStack_10 [2];
  
  pMVar12 = (__this->fields).Value;
  if (pMVar12 == (Map_CustomPhysicsMaterial_o *)0x0) {
    auStack_10[0] = 0x40f5c47;
    auStack_10[0] = il2cpp_runtime_helper_022b2c90();
    puVar9 = auStack_10;
    pMVar12 = (Map_CustomPhysicsMaterial_o *)pMVar12[1].fields.m_CachedPtr;
    if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_DynamicFriction(pMVar12,(MethodInfo *)0x0);
      return;
    }
    uStack_18 = 0x40f5c67;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar12[1].fields.m_CachedPtr;
    uStack_18 = uVar4;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      method = (MethodInfo *)0x0;
      value_00 = extraout_XMM0_Da_01;
      goto Map_CustomPhysicsMaterial__set_DynamicFriction;
    }
    uStack_20 = 0x40f5c87;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    pMVar12 = pUVar13[2].monitor;
    if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_Bounciness(pMVar12,(MethodInfo *)0x0);
      return;
    }
    uStack_28 = 0x40f5ca7;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    lVar14 = pMVar12[1].fields.m_CachedPtr;
    if (lVar14 != 0) {
      method = (MethodInfo *)0x0;
      pUVar13 = *(UnityEngine_PhysicMaterial_o **)(lVar14 + 0x20);
      if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_bounciness(pUVar13,value_01,(MethodInfo *)0x0);
        return;
      }
      uStack_30 = 0x4097367;
      uStack_30 = il2cpp_runtime_helper_022b2c90();
      register0x00000020 = (BADSPACEBASE *)&uStack_30;
      pMVar12 = pUVar13[1].monitor;
      if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__get_staticFriction
                  ((UnityEngine_PhysicMaterial_o *)pMVar12,(MethodInfo *)0x0);
        return;
      }
      uStack_38 = 0x4097387;
      in_RAX = il2cpp_runtime_helper_022b2c90();
      value = extraout_XMM0_Da;
      goto Map_CustomPhysicsMaterial__set_StaticFriction;
    }
    uStack_30 = 0x40f5cc7;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    puVar10 = &uStack_30;
    pMVar12 = *(Map_CustomPhysicsMaterial_o **)(lVar14 + 0x38);
    if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_FrictionCombine(pMVar12,(MethodInfo *)0x0);
      return;
    }
    uStack_38 = 0x40f5ce7;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar12[1].fields.m_CachedPtr;
    uStack_38 = uVar4;
    if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
      uStack_40 = 0x40f5d07;
      uStack_40 = il2cpp_runtime_helper_022b2c90();
      puVar11 = &uStack_40;
      pMVar12 = pUVar13[2].monitor;
      if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__get_BounceCombine(pMVar12,(MethodInfo *)0x0);
        return;
      }
      uVar4 = il2cpp_runtime_helper_022b2c90();
      uVar2 = (uint)method;
      pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar12[1].fields.m_CachedPtr;
      if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (pUVar13[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
          Map_CustomPhysicsMaterial__Setup(pUVar13[2].monitor,uVar2 & 0xff,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7da == '\0') {
          il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
          g_data_057ac7da = '\x01';
        }
        return;
      }
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  else {
    method = (MethodInfo *)0x0;
Map_CustomPhysicsMaterial__set_StaticFriction:
    *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
    pUVar13 = (pMVar12->fields)._material;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar13,value,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x40973a7;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    puVar9 = (undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar4;
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar13,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x40973c7;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    value_00 = extraout_XMM0_Da_00;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)puVar9 + -8) = uVar4;
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar13,value_00,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar9 + -0x10) = 0x40973e7;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    puVar10 = (undefined8 *)((long)puVar9 + -0x10);
    *(undefined8 *)((long)puVar9 + -0x10) = uVar4;
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine(pUVar13,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)puVar9 + -0x18) = 0x4097407;
    uVar4 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar10 + -8) = uVar4;
  pUVar13 = pUVar13[1].monitor;
  if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar13,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar10 + -0x10) = 0x4097427;
  uVar4 = il2cpp_runtime_helper_022b2c90();
  puVar11 = (undefined8 *)((long)puVar10 + -0x10);
  *(undefined8 *)((long)puVar10 + -0x10) = uVar4;
  pUVar13 = pUVar13[1].monitor;
  if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar13,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar10 + -0x18) = 0x4097447;
  uVar4 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar11 + -8) = uVar4;
  __this_00 = pUVar13[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar11 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar11 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar11 + -0x18) = unaff_R15;
  *(undefined8 *)((long)puVar11 + -0x20) = unaff_R14;
  *(undefined8 *)((long)puVar11 + -0x28) = unaff_R12;
  *(undefined8 *)((long)puVar11 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar11 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar11 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar11 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar11 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40974cd;
  pUVar5 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar5,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar5;
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40974f7;
  pUVar6 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      *(undefined8 *)((long)puVar11 + -0x38) = 0x409756e;
      pUVar6 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar11 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar11 + -0x38) = 0x4097595;
      __this_00 = pUVar6;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar6,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar11 + -0x38) = 0x4097517;
      pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar6;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar7->max_length;
        if (0 < (int)uVar2) {
          uVar8 = 0;
          do {
            __this_00 = pUVar6;
            if (uVar2 <= uVar8) goto label_040975c2;
            pUVar6 = (UnityEngine_MonoBehaviour_o *)pSVar7->m_Items[(int)uVar8];
            __this_00 = pUVar6;
            if (pUVar6 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar5 = pUVar1->klass;
            *(undefined8 *)((long)puVar11 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar6,(UnityEngine_PhysicMaterial_o *)pUVar5,
                       (MethodInfo *)0x0);
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pSVar7->max_length;
          } while ((int)uVar8 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_DynamicFriction
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_DynamicFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5c50

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_DynamicFriction
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *pUVar4;
  UnityEngine_MonoBehaviour_o *pUVar5;
  System_Object_array *pSVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 unaff_RBX;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 unaff_RBP;
  UnityEngine_MonoBehaviour_o *__this_00;
  Map_CustomPhysicsMaterial_o *pMVar12;
  UnityEngine_PhysicMaterial_o *pUVar13;
  long lVar14;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float value;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float fVar15;
  float extraout_XMM0_Da_12;
  float value_00;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined1 auStack_8 [8];
  
  puVar9 = (undefined8 *)auStack_8;
  pMVar12 = (__this->fields).Value;
  if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar15 = Map_CustomPhysicsMaterial__get_DynamicFriction(pMVar12,(MethodInfo *)0x0);
    return fVar15;
  }
  uStack_10 = 0x40f5c67;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar12[1].fields.m_CachedPtr;
  uStack_10 = uVar7;
  if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
    uStack_18 = 0x40f5c87;
    uStack_18 = il2cpp_runtime_helper_022b2c90();
    pMVar12 = pUVar13[2].monitor;
    if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
      fVar15 = Map_CustomPhysicsMaterial__get_Bounciness(pMVar12,(MethodInfo *)0x0);
      return fVar15;
    }
    uStack_20 = 0x40f5ca7;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    lVar14 = pMVar12[1].fields.m_CachedPtr;
    if (lVar14 != 0) {
      method = (MethodInfo *)0x0;
      pUVar13 = *(UnityEngine_PhysicMaterial_o **)(lVar14 + 0x20);
      if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_bounciness(pUVar13,value_00,(MethodInfo *)0x0);
        return extraout_XMM0_Da;
      }
      uStack_28 = 0x4097367;
      uStack_28 = il2cpp_runtime_helper_022b2c90();
      pUVar13 = pUVar13[1].monitor;
      if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
        fVar15 = UnityEngine_PhysicMaterial__get_staticFriction(pUVar13,(MethodInfo *)0x0);
        return fVar15;
      }
      uStack_30 = 0x4097387;
      uStack_30 = il2cpp_runtime_helper_022b2c90();
      pUVar13 = pUVar13[1].monitor;
      if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_staticFriction(pUVar13,value,(MethodInfo *)0x0);
        return extraout_XMM0_Da_00;
      }
      uStack_38 = 0x40973a7;
      uStack_38 = il2cpp_runtime_helper_022b2c90();
      puVar9 = &uStack_38;
      pUVar13 = pUVar13[1].monitor;
      if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
        fVar15 = UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar13,(MethodInfo *)0x0);
        return fVar15;
      }
      uVar7 = il2cpp_runtime_helper_022b2c90();
      fVar15 = extraout_XMM0_Da_01;
      goto Map_CustomPhysicsMaterial__set_DynamicFriction;
    }
    uStack_28 = 0x40f5cc7;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    puVar10 = &uStack_28;
    pMVar12 = *(Map_CustomPhysicsMaterial_o **)(lVar14 + 0x38);
    if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_FrictionCombine(pMVar12,(MethodInfo *)0x0);
      return extraout_XMM0_Da_13;
    }
    uStack_30 = 0x40f5ce7;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar12[1].fields.m_CachedPtr;
    uStack_30 = uVar7;
    if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
      uStack_38 = 0x40f5d07;
      uStack_38 = il2cpp_runtime_helper_022b2c90();
      puVar11 = &uStack_38;
      pMVar12 = pUVar13[2].monitor;
      if (pMVar12 != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__get_BounceCombine(pMVar12,(MethodInfo *)0x0);
        return extraout_XMM0_Da_14;
      }
      uVar7 = il2cpp_runtime_helper_022b2c90();
      uVar2 = (uint)method;
      pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar12[1].fields.m_CachedPtr;
      if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (pUVar13[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
          Map_CustomPhysicsMaterial__Setup(pUVar13[2].monitor,uVar2 & 0xff,(MethodInfo *)0x0);
          return extraout_XMM0_Da_15;
        }
        fVar15 = (float)il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7da == '\0') {
          fVar15 = (float)il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
          g_data_057ac7da = '\x01';
        }
        return fVar15;
      }
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  else {
    method = (MethodInfo *)0x0;
    fVar15 = extraout_XMM0_Da_12;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)puVar9 + -8) = uVar7;
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar13,fVar15,(MethodInfo *)0x0);
      return extraout_XMM0_Da_02;
    }
    *(undefined8 *)((long)puVar9 + -0x10) = 0x40973e7;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    puVar10 = (undefined8 *)((long)puVar9 + -0x10);
    *(undefined8 *)((long)puVar9 + -0x10) = uVar7;
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine(pUVar13,(MethodInfo *)0x0);
      return extraout_XMM0_Da_03;
    }
    *(undefined8 *)((long)puVar9 + -0x18) = 0x4097407;
    uVar7 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar10 + -8) = uVar7;
  pUVar13 = pUVar13[1].monitor;
  if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar13,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  *(undefined8 *)((long)puVar10 + -0x10) = 0x4097427;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  puVar11 = (undefined8 *)((long)puVar10 + -0x10);
  *(undefined8 *)((long)puVar10 + -0x10) = uVar7;
  pUVar13 = pUVar13[1].monitor;
  if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar13,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  *(undefined8 *)((long)puVar10 + -0x18) = 0x4097447;
  uVar7 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar11 + -8) = uVar7;
  __this_00 = pUVar13[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
  *(undefined8 *)((long)puVar11 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar11 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar11 + -0x18) = unaff_R15;
  *(undefined8 *)((long)puVar11 + -0x20) = unaff_R14;
  *(undefined8 *)((long)puVar11 + -0x28) = unaff_R12;
  *(undefined8 *)((long)puVar11 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar11 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar11 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar11 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar11 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40974cd;
  pUVar4 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar4,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar4;
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40974f7;
  pUVar5 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      *(undefined8 *)((long)puVar11 + -0x38) = 0x409756e;
      pUVar5 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar11 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar11 + -0x38) = 0x4097595;
      __this_00 = pUVar5;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return extraout_XMM0_Da_09;
      }
      if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_XMM0_Da_10;
      }
    }
    else {
      *(undefined8 *)((long)puVar11 + -0x38) = 0x4097517;
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar5;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar6->max_length;
        fVar15 = extraout_XMM0_Da_07;
        if (0 < (int)uVar2) {
          uVar8 = 0;
          do {
            __this_00 = pUVar5;
            if (uVar2 <= uVar8) goto label_040975c2;
            pUVar5 = (UnityEngine_MonoBehaviour_o *)pSVar6->m_Items[(int)uVar8];
            __this_00 = pUVar5;
            if (pUVar5 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar4 = pUVar1->klass;
            *(undefined8 *)((long)puVar11 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar4,
                       (MethodInfo *)0x0);
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pSVar6->max_length;
            fVar15 = extraout_XMM0_Da_08;
          } while ((int)uVar8 < (int)uVar2);
        }
        return fVar15;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar11 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_XMM0_Da_11;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_DynamicFriction
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_DynamicFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40f5c70

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_DynamicFriction
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  undefined8 uVar4;
  UnityEngine_MonoBehaviour_c *pUVar5;
  UnityEngine_MonoBehaviour_o *pUVar6;
  System_Object_array *pSVar7;
  undefined8 in_RAX;
  uint uVar8;
  undefined8 unaff_RBX;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_RBP;
  UnityEngine_MonoBehaviour_o *__this_00;
  Map_CustomPhysicsMaterial_o *pMVar11;
  long lVar12;
  UnityEngine_PhysicMaterial_o *pUVar13;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float value_00;
  float extraout_XMM0_Da;
  float value_01;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  pMVar11 = (__this->fields).Value;
  if (pMVar11 == (Map_CustomPhysicsMaterial_o *)0x0) {
    uStack_10 = 0x40f5c87;
    uStack_10 = il2cpp_runtime_helper_022b2c90();
    pMVar11 = (Map_CustomPhysicsMaterial_o *)pMVar11[1].fields.m_CachedPtr;
    if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_Bounciness(pMVar11,(MethodInfo *)0x0);
      return;
    }
    uStack_18 = 0x40f5ca7;
    uStack_18 = il2cpp_runtime_helper_022b2c90();
    lVar12 = pMVar11[1].fields.m_CachedPtr;
    if (lVar12 != 0) {
      method = (MethodInfo *)0x0;
      pUVar13 = *(UnityEngine_PhysicMaterial_o **)(lVar12 + 0x20);
      if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_bounciness(pUVar13,value_01,(MethodInfo *)0x0);
        return;
      }
      uStack_20 = 0x4097367;
      uStack_20 = il2cpp_runtime_helper_022b2c90();
      pUVar13 = pUVar13[1].monitor;
      if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__get_staticFriction(pUVar13,(MethodInfo *)0x0);
        return;
      }
      uStack_28 = 0x4097387;
      uStack_28 = il2cpp_runtime_helper_022b2c90();
      pUVar13 = pUVar13[1].monitor;
      if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__set_staticFriction(pUVar13,value_00,(MethodInfo *)0x0);
        return;
      }
      uStack_30 = 0x40973a7;
      uStack_30 = il2cpp_runtime_helper_022b2c90();
      register0x00000020 = (BADSPACEBASE *)&uStack_30;
      pMVar11 = pUVar13[1].monitor;
      if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
        UnityEngine_PhysicMaterial__get_dynamicFriction
                  ((UnityEngine_PhysicMaterial_o *)pMVar11,(MethodInfo *)0x0);
        return;
      }
      in_RAX = il2cpp_runtime_helper_022b2c90();
      value = extraout_XMM0_Da;
      goto Map_CustomPhysicsMaterial__set_DynamicFriction;
    }
    uStack_20 = 0x40f5cc7;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    puVar9 = &uStack_20;
    pMVar11 = *(Map_CustomPhysicsMaterial_o **)(lVar12 + 0x38);
    if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_FrictionCombine(pMVar11,(MethodInfo *)0x0);
      return;
    }
    uStack_28 = 0x40f5ce7;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar11[1].fields.m_CachedPtr;
    uStack_28 = uVar4;
    if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
      uStack_30 = 0x40f5d07;
      uStack_30 = il2cpp_runtime_helper_022b2c90();
      puVar10 = &uStack_30;
      pMVar11 = pUVar13[2].monitor;
      if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__get_BounceCombine(pMVar11,(MethodInfo *)0x0);
        return;
      }
      uVar4 = il2cpp_runtime_helper_022b2c90();
      uVar2 = (uint)method;
      pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar11[1].fields.m_CachedPtr;
      if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (pUVar13[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
          Map_CustomPhysicsMaterial__Setup(pUVar13[2].monitor,uVar2 & 0xff,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7da == '\0') {
          il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
          g_data_057ac7da = '\x01';
        }
        return;
      }
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  else {
    method = (MethodInfo *)0x0;
Map_CustomPhysicsMaterial__set_DynamicFriction:
    *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
    pUVar13 = (pMVar11->fields)._material;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar13,value,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x40973e7;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    puVar9 = (undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar4;
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine(pUVar13,(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x4097407;
    uVar4 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar9 + -8) = uVar4;
  pUVar13 = pUVar13[1].monitor;
  if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar13,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar9 + -0x10) = 0x4097427;
  uVar4 = il2cpp_runtime_helper_022b2c90();
  puVar10 = (undefined8 *)((long)puVar9 + -0x10);
  *(undefined8 *)((long)puVar9 + -0x10) = uVar4;
  pUVar13 = pUVar13[1].monitor;
  if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar13,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar9 + -0x18) = 0x4097447;
  uVar4 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar10 + -8) = uVar4;
  __this_00 = pUVar13[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar10 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar10 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar10 + -0x18) = unaff_R15;
  *(undefined8 *)((long)puVar10 + -0x20) = unaff_R14;
  *(undefined8 *)((long)puVar10 + -0x28) = unaff_R12;
  *(undefined8 *)((long)puVar10 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar10 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974cd;
  pUVar5 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar5,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar5;
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974f7;
  pUVar6 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      *(undefined8 *)((long)puVar10 + -0x38) = 0x409756e;
      pUVar6 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar10 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar10 + -0x38) = 0x4097595;
      __this_00 = pUVar6;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar6,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar10 + -0x38) = 0x4097517;
      pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar6;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar7->max_length;
        if (0 < (int)uVar2) {
          uVar8 = 0;
          do {
            __this_00 = pUVar6;
            if (uVar2 <= uVar8) goto label_040975c2;
            pUVar6 = (UnityEngine_MonoBehaviour_o *)pSVar7->m_Items[(int)uVar8];
            __this_00 = pUVar6;
            if (pUVar6 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar5 = pUVar1->klass;
            *(undefined8 *)((long)puVar10 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar6,(UnityEngine_PhysicMaterial_o *)pUVar5,
                       (MethodInfo *)0x0);
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pSVar7->max_length;
          } while ((int)uVar8 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_Bounciness
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_Bounciness (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5c90

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_Bounciness
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  undefined8 uVar4;
  UnityEngine_MonoBehaviour_c *pUVar5;
  UnityEngine_MonoBehaviour_o *pUVar6;
  System_Object_array *pSVar7;
  uint uVar8;
  undefined8 unaff_RBX;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_RBP;
  UnityEngine_MonoBehaviour_o *__this_00;
  Map_CustomPhysicsMaterial_o *pMVar11;
  long lVar12;
  UnityEngine_PhysicMaterial_o *pUVar13;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float extraout_XMM0_Da;
  float value;
  float extraout_XMM0_Da_00;
  float value_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float fVar14;
  float value_01;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  pMVar11 = (__this->fields).Value;
  if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar14 = Map_CustomPhysicsMaterial__get_Bounciness(pMVar11,(MethodInfo *)0x0);
    return fVar14;
  }
  uStack_10 = 0x40f5ca7;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  lVar12 = pMVar11[1].fields.m_CachedPtr;
  if (lVar12 == 0) {
    uStack_18 = 0x40f5cc7;
    uStack_18 = il2cpp_runtime_helper_022b2c90();
    puVar9 = &uStack_18;
    pMVar11 = *(Map_CustomPhysicsMaterial_o **)(lVar12 + 0x38);
    if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_FrictionCombine(pMVar11,(MethodInfo *)0x0);
      return extraout_XMM0_Da_11;
    }
    uStack_20 = 0x40f5ce7;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar11[1].fields.m_CachedPtr;
    uStack_20 = uVar4;
    if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
      uStack_28 = 0x40f5d07;
      uStack_28 = il2cpp_runtime_helper_022b2c90();
      puVar10 = &uStack_28;
      pMVar11 = pUVar13[2].monitor;
      if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__get_BounceCombine(pMVar11,(MethodInfo *)0x0);
        return extraout_XMM0_Da_12;
      }
      uStack_30 = 0x40f5d27;
      uVar4 = il2cpp_runtime_helper_022b2c90();
      uVar2 = (uint)method;
      pUVar13 = (UnityEngine_PhysicMaterial_o *)pMVar11[1].fields.m_CachedPtr;
      uStack_30 = uVar4;
      if (pUVar13 == (UnityEngine_PhysicMaterial_o *)0x0) {
        uStack_38 = 0x40f5d47;
        uStack_38 = il2cpp_runtime_helper_022b2c90();
        if (pUVar13[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
          Map_CustomPhysicsMaterial__Setup(pUVar13[2].monitor,uVar2 & 0xff,(MethodInfo *)0x0);
          return extraout_XMM0_Da_13;
        }
        fVar14 = (float)il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7da == '\0') {
          fVar14 = (float)il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
          g_data_057ac7da = '\x01';
        }
        return fVar14;
      }
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  else {
    method = (MethodInfo *)0x0;
    pUVar13 = *(UnityEngine_PhysicMaterial_o **)(lVar12 + 0x20);
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_bounciness(pUVar13,value_01,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
    uStack_18 = 0x4097367;
    uStack_18 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      fVar14 = UnityEngine_PhysicMaterial__get_staticFriction(pUVar13,(MethodInfo *)0x0);
      return fVar14;
    }
    uStack_20 = 0x4097387;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar13,value,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
    uStack_28 = 0x40973a7;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      fVar14 = UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar13,(MethodInfo *)0x0);
      return fVar14;
    }
    uStack_30 = 0x40973c7;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar13,value_00,(MethodInfo *)0x0);
      return extraout_XMM0_Da_01;
    }
    uStack_38 = 0x40973e7;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    puVar9 = &uStack_38;
    pUVar13 = pUVar13[1].monitor;
    if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine(pUVar13,(MethodInfo *)0x0);
      return extraout_XMM0_Da_02;
    }
    uVar4 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar9 + -8) = uVar4;
  pUVar13 = pUVar13[1].monitor;
  if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar13,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  *(undefined8 *)((long)puVar9 + -0x10) = 0x4097427;
  uVar4 = il2cpp_runtime_helper_022b2c90();
  puVar10 = (undefined8 *)((long)puVar9 + -0x10);
  *(undefined8 *)((long)puVar9 + -0x10) = uVar4;
  pUVar13 = pUVar13[1].monitor;
  if (pUVar13 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar13,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  *(undefined8 *)((long)puVar9 + -0x18) = 0x4097447;
  uVar4 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar10 + -8) = uVar4;
  __this_00 = pUVar13[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  *(undefined8 *)((long)puVar10 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar10 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar10 + -0x18) = unaff_R15;
  *(undefined8 *)((long)puVar10 + -0x20) = unaff_R14;
  *(undefined8 *)((long)puVar10 + -0x28) = unaff_R12;
  *(undefined8 *)((long)puVar10 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar10 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974cd;
  pUVar5 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar5,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar5;
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974f7;
  pUVar6 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      *(undefined8 *)((long)puVar10 + -0x38) = 0x409756e;
      pUVar6 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar10 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar10 + -0x38) = 0x4097595;
      __this_00 = pUVar6;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return extraout_XMM0_Da_08;
      }
      if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar6,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_XMM0_Da_09;
      }
    }
    else {
      *(undefined8 *)((long)puVar10 + -0x38) = 0x4097517;
      pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar6;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar7->max_length;
        fVar14 = extraout_XMM0_Da_06;
        if (0 < (int)uVar2) {
          uVar8 = 0;
          do {
            __this_00 = pUVar6;
            if (uVar2 <= uVar8) goto label_040975c2;
            pUVar6 = (UnityEngine_MonoBehaviour_o *)pSVar7->m_Items[(int)uVar8];
            __this_00 = pUVar6;
            if (pUVar6 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar5 = pUVar1->klass;
            *(undefined8 *)((long)puVar10 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar6,(UnityEngine_PhysicMaterial_o *)pUVar5,
                       (MethodInfo *)0x0);
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pSVar7->max_length;
            fVar14 = extraout_XMM0_Da_07;
          } while ((int)uVar8 < (int)uVar2);
        }
        return fVar14;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_XMM0_Da_10;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_Bounciness
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_Bounciness (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40f5cb0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_Bounciness
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  undefined8 uVar4;
  UnityEngine_MonoBehaviour_c *pUVar5;
  UnityEngine_MonoBehaviour_o *pUVar6;
  System_Object_array *pSVar7;
  uint uVar8;
  undefined8 unaff_RBX;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_RBP;
  UnityEngine_MonoBehaviour_o *__this_00;
  Map_CustomPhysicsMaterial_o *pMVar11;
  UnityEngine_PhysicMaterial_o *pUVar12;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float value_00;
  float value_01;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 auStack_10 [2];
  
  pMVar11 = (__this->fields).Value;
  if (pMVar11 == (Map_CustomPhysicsMaterial_o *)0x0) {
    auStack_10[0] = 0x40f5cc7;
    auStack_10[0] = il2cpp_runtime_helper_022b2c90();
    puVar9 = auStack_10;
    pMVar11 = (Map_CustomPhysicsMaterial_o *)pMVar11[1].fields.m_CachedPtr;
    if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_FrictionCombine(pMVar11,(MethodInfo *)0x0);
      return;
    }
    uStack_18 = 0x40f5ce7;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    pUVar12 = (UnityEngine_PhysicMaterial_o *)pMVar11[1].fields.m_CachedPtr;
    uStack_18 = uVar4;
    if (pUVar12 == (UnityEngine_PhysicMaterial_o *)0x0) {
      uStack_20 = 0x40f5d07;
      uStack_20 = il2cpp_runtime_helper_022b2c90();
      puVar10 = &uStack_20;
      pMVar11 = pUVar12[2].monitor;
      if (pMVar11 != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__get_BounceCombine(pMVar11,(MethodInfo *)0x0);
        return;
      }
      uStack_28 = 0x40f5d27;
      uVar4 = il2cpp_runtime_helper_022b2c90();
      uVar2 = (uint)method;
      pUVar12 = (UnityEngine_PhysicMaterial_o *)pMVar11[1].fields.m_CachedPtr;
      uStack_28 = uVar4;
      if (pUVar12 == (UnityEngine_PhysicMaterial_o *)0x0) {
        uStack_30 = 0x40f5d47;
        uStack_30 = il2cpp_runtime_helper_022b2c90();
        if (pUVar12[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
          Map_CustomPhysicsMaterial__Setup(pUVar12[2].monitor,uVar2 & 0xff,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac7da == '\0') {
          il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
          g_data_057ac7da = '\x01';
        }
        return;
      }
      goto Map_CustomPhysicsMaterial__set_BounceCombine;
    }
  }
  else {
    method = (MethodInfo *)0x0;
    pUVar12 = (pMVar11->fields)._material;
    if (pUVar12 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_bounciness(pUVar12,value,(MethodInfo *)0x0);
      return;
    }
    auStack_10[0] = 0x4097367;
    auStack_10[0] = il2cpp_runtime_helper_022b2c90();
    pUVar12 = pUVar12[1].monitor;
    if (pUVar12 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_staticFriction(pUVar12,(MethodInfo *)0x0);
      return;
    }
    uStack_18 = 0x4097387;
    uStack_18 = il2cpp_runtime_helper_022b2c90();
    pUVar12 = pUVar12[1].monitor;
    if (pUVar12 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_staticFriction(pUVar12,value_00,(MethodInfo *)0x0);
      return;
    }
    uStack_20 = 0x40973a7;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    pUVar12 = pUVar12[1].monitor;
    if (pUVar12 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar12,(MethodInfo *)0x0);
      return;
    }
    uStack_28 = 0x40973c7;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    pUVar12 = pUVar12[1].monitor;
    if (pUVar12 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar12,value_01,(MethodInfo *)0x0);
      return;
    }
    uStack_30 = 0x40973e7;
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    puVar9 = &uStack_30;
    pUVar12 = pUVar12[1].monitor;
    if (pUVar12 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_frictionCombine(pUVar12,(MethodInfo *)0x0);
      return;
    }
    uVar4 = il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar9 + -8) = uVar4;
  pUVar12 = pUVar12[1].monitor;
  if (pUVar12 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar12,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar9 + -0x10) = 0x4097427;
  uVar4 = il2cpp_runtime_helper_022b2c90();
  puVar10 = (undefined8 *)((long)puVar9 + -0x10);
  *(undefined8 *)((long)puVar9 + -0x10) = uVar4;
  pUVar12 = pUVar12[1].monitor;
  if (pUVar12 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar12,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar9 + -0x18) = 0x4097447;
  uVar4 = il2cpp_runtime_helper_022b2c90();
Map_CustomPhysicsMaterial__set_BounceCombine:
  *(undefined8 *)((long)puVar10 + -8) = uVar4;
  __this_00 = pUVar12[1].monitor;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_00,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)puVar10 + -0x10) = 0x4097467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)puVar10 + -0x10) = unaff_RBP;
  *(undefined8 *)((long)puVar10 + -0x18) = unaff_R15;
  *(undefined8 *)((long)puVar10 + -0x20) = unaff_R14;
  *(undefined8 *)((long)puVar10 + -0x28) = unaff_R12;
  *(undefined8 *)((long)puVar10 + -0x30) = unaff_RBX;
  if (g_data_057ac451 == '\0') {
    *(undefined8 *)((long)puVar10 + -0x38) = 0x4097493;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x409749f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x40974ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar10 + -0x38) = 0x40974b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974cd;
  pUVar5 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974da;
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)pUVar5,(MethodInfo *)0x0);
  pUVar1 = __this_00 + 1;
  __this_00[1].klass = pUVar5;
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974ed;
  il2cpp_runtime_helper_022b4080(pUVar1);
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40974f7;
  pUVar6 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      *(undefined8 *)((long)puVar10 + -0x38) = 0x409756e;
      pUVar6 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar10 + -0x38) = 0x4097589;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar10 + -0x38) = 0x4097595;
      __this_00 = pUVar6;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar6,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      *(undefined8 *)((long)puVar10 + -0x38) = 0x4097517;
      pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_00 = pUVar6;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar7->max_length;
        if (0 < (int)uVar2) {
          uVar8 = 0;
          do {
            __this_00 = pUVar6;
            if (uVar2 <= uVar8) goto label_040975c2;
            pUVar6 = (UnityEngine_MonoBehaviour_o *)pSVar7->m_Items[(int)uVar8];
            __this_00 = pUVar6;
            if (pUVar6 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            pUVar5 = pUVar1->klass;
            *(undefined8 *)((long)puVar10 + -0x38) = 0x4097550;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar6,(UnityEngine_PhysicMaterial_o *)pUVar5,
                       (MethodInfo *)0x0);
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pSVar7->max_length;
          } while ((int)uVar8 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40975c2;
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  *(undefined8 *)((long)puVar10 + -0x38) = 0x40975c7;
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_FrictionCombine
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_FrictionCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5cd0

int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_FrictionCombine
                  (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  bool_conflict bVar2;
  int32_t extraout_EAX_01;
  uint uVar3;
  int32_t extraout_EAX_02;
  int32_t iVar4;
  int32_t extraout_EAX_03;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  Map_CustomPhysicsMaterial_o *pMVar8;
  long lVar9;
  UnityEngine_PhysicMaterial_o *pUVar10;
  
  pMVar8 = (__this->fields).Value;
  if (pMVar8 != (Map_CustomPhysicsMaterial_o *)0x0) {
    iVar4 = Map_CustomPhysicsMaterial__get_FrictionCombine(pMVar8,(MethodInfo *)0x0);
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = pMVar8[1].fields.m_CachedPtr;
  if (lVar9 == 0) {
    il2cpp_runtime_helper_022b2c90();
    pMVar8 = *(Map_CustomPhysicsMaterial_o **)(lVar9 + 0x38);
    if (pMVar8 != (Map_CustomPhysicsMaterial_o *)0x0) {
      iVar4 = Map_CustomPhysicsMaterial__get_BounceCombine(pMVar8,(MethodInfo *)0x0);
      return iVar4;
    }
    il2cpp_runtime_helper_022b2c90();
    uVar3 = (uint)method;
    pUVar10 = (UnityEngine_PhysicMaterial_o *)pMVar8[1].fields.m_CachedPtr;
    if (pUVar10 == (UnityEngine_PhysicMaterial_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (pUVar10[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__Setup(pUVar10[2].monitor,uVar3 & 0xff,(MethodInfo *)0x0);
        return extraout_EAX_03;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7da == '\0') {
        il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
        g_data_057ac7da = '\x01';
      }
      return (int32_t)"PhysicsMaterialBuiltin";
    }
  }
  else {
    pUVar10 = *(UnityEngine_PhysicMaterial_o **)(lVar9 + 0x20);
    if (pUVar10 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_frictionCombine(pUVar10,(int32_t)method,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar10 = pUVar10[1].monitor;
    if (pUVar10 != (UnityEngine_PhysicMaterial_o *)0x0) {
      iVar4 = UnityEngine_PhysicMaterial__get_bounceCombine(pUVar10,(MethodInfo *)0x0);
      return iVar4;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  __this_01 = pUVar10[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)method,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar5 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar5 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar5;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return bVar2;
      }
      if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_EAX_01;
      }
    }
    else {
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar5;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar3 = (uint)pSVar6->max_length;
        if (0 < (int)uVar3) {
          uVar7 = 0;
          do {
            __this_01 = pUVar5;
            if (uVar3 <= uVar7) goto label_040975c2;
            pUVar5 = (UnityEngine_MonoBehaviour_o *)pSVar6->m_Items[(int)uVar7];
            __this_01 = pUVar5;
            if (pUVar5 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar7 = uVar7 + 1;
            uVar3 = (uint)pSVar6->max_length;
          } while ((int)uVar7 < (int)uVar3);
        }
        return uVar3;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX_02;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_FrictionCombine
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_FrictionCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40f5cf0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_FrictionCombine
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  ulong uVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  Map_CustomPhysicsMaterial_o *pMVar8;
  UnityEngine_PhysicMaterial_o *pUVar9;
  
  uVar7 = (ulong)(uint)value;
  pMVar8 = (__this->fields).Value;
  if (pMVar8 == (Map_CustomPhysicsMaterial_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pMVar8 = (Map_CustomPhysicsMaterial_o *)pMVar8[1].fields.m_CachedPtr;
    if (pMVar8 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__get_BounceCombine(pMVar8,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    uVar2 = (uint)uVar7;
    pUVar9 = (UnityEngine_PhysicMaterial_o *)pMVar8[1].fields.m_CachedPtr;
    if (pUVar9 == (UnityEngine_PhysicMaterial_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (pUVar9[2].monitor != (Map_CustomPhysicsMaterial_o *)0x0) {
        Map_CustomPhysicsMaterial__Setup(pUVar9[2].monitor,uVar2 & 0xff,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac7da == '\0') {
        il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
        g_data_057ac7da = '\x01';
      }
      return;
    }
  }
  else {
    pUVar9 = (pMVar8->fields)._material;
    if (pUVar9 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__set_frictionCombine(pUVar9,value,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar9 = pUVar9[1].monitor;
    if (pUVar9 != (UnityEngine_PhysicMaterial_o *)0x0) {
      UnityEngine_PhysicMaterial__get_bounceCombine(pUVar9,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  __this_01 = pUVar9[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)uVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar7 == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
          } while ((int)uVar6 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_BounceCombine
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_BounceCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5d10

int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_BounceCombine
                  (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  int32_t extraout_EAX;
  bool_conflict bVar2;
  int32_t extraout_EAX_00;
  uint uVar3;
  int32_t extraout_EAX_01;
  int32_t iVar4;
  int32_t extraout_EAX_02;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  Map_CustomPhysicsMaterial_o *__this_02;
  long lVar8;
  
  __this_02 = (__this->fields).Value;
  if (__this_02 != (Map_CustomPhysicsMaterial_o *)0x0) {
    iVar4 = Map_CustomPhysicsMaterial__get_BounceCombine(__this_02,(MethodInfo *)0x0);
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = (uint)method;
  lVar8 = __this_02[1].fields.m_CachedPtr;
  if (lVar8 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (*(Map_CustomPhysicsMaterial_o **)(lVar8 + 0x38) != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__Setup
                (*(Map_CustomPhysicsMaterial_o **)(lVar8 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
      return extraout_EAX_02;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7da == '\0') {
      il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
      g_data_057ac7da = '\x01';
    }
    return (int32_t)"PhysicsMaterialBuiltin";
  }
  __this_01 = *(UnityEngine_MonoBehaviour_o **)(lVar8 + 0x20);
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,uVar3,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar5 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar5 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar5;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return bVar2;
      }
      if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_EAX_00;
      }
    }
    else {
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar5;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar3 = (uint)pSVar6->max_length;
        if (0 < (int)uVar3) {
          uVar7 = 0;
          do {
            __this_01 = pUVar5;
            if (uVar3 <= uVar7) goto label_040975c2;
            pUVar5 = (UnityEngine_MonoBehaviour_o *)pSVar6->m_Items[(int)uVar7];
            __this_01 = pUVar5;
            if (pUVar5 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar7 = uVar7 + 1;
            uVar3 = (uint)pSVar6->max_length;
          } while ((int)uVar7 < (int)uVar3);
        }
        return uVar3;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_BounceCombine
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_BounceCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40f5d30

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_BounceCombine
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  char cVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  Map_CustomPhysicsMaterial_o *pMVar8;
  
  cVar7 = (char)value;
  pMVar8 = (__this->fields).Value;
  if (pMVar8 == (Map_CustomPhysicsMaterial_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pMVar8 = (Map_CustomPhysicsMaterial_o *)pMVar8[1].fields.m_CachedPtr;
    if (pMVar8 != (Map_CustomPhysicsMaterial_o *)0x0) {
      Map_CustomPhysicsMaterial__Setup(pMVar8,value & 0xff,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac7da == '\0') {
      il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
      g_data_057ac7da = '\x01';
    }
    return;
  }
  __this_01 = (UnityEngine_MonoBehaviour_o *)(pMVar8->fields)._material;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (cVar7 == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
          } while ((int)uVar6 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$Setup
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, bool allChildColliders, const MethodInfo* method);
// 0x40f5d50

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,bool_conflict allChildColliders,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__Setup(__this_00,allChildColliders & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7da == '\0') {
    il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
    g_data_057ac7da = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_ClassName (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5d70

System_String_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_ClassName
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac7da == '\0') {
    il2cpp_runtime_helper_023445d0(&"PhysicsMaterialBuiltin");
    g_data_057ac7da = '\x01';
  }
  return "PhysicsMaterialBuiltin";
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsAbstract (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5da0

bool_conflict
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsStatic (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5db0

bool_conflict
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x40f5dc0

bool_conflict
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


