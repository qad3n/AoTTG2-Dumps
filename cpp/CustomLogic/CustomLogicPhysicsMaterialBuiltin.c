// Type: CustomLogic.CustomLogicPhysicsMaterialBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicsMaterialBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3df0010

CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702aa8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPhysicsMaterialBuiltin);
    DAT_05702aa8 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicPhysicsMaterialBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhysicsMaterialBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3df0e50

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702ab6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ab6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3df0ec0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$<__CreateMethodBinding__Setup>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_____CreateMethodBinding__Setup_b__7_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df0ed0

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_<>c__<__CreateMethodBinding__Setup>b__7_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  Map_CustomPhysicsMaterial_o *__this_00;
  uint uVar1;
  
  if (DAT_05702ab7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ab7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((__c != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (Map_CustomPhysicsMaterial_o *)0x0)) {
      Map_CustomPhysicsMaterial__Setup(__this_00,uVar1 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3df0100

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar6;
  System_Action_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this_00;
  
  if (DAT_05702aa9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Bounciness");
    il2cpp_init_method_metadata(&"Setup");
    il2cpp_init_method_metadata(&"StaticFriction");
    il2cpp_init_method_metadata(&"BounceCombine");
    il2cpp_init_method_metadata(&"DynamicFriction");
    il2cpp_init_method_metadata(&"FrictionCombine");
    DAT_05702aa9 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"StaticFriction",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702aaa == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StaticFriction);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__StaticFriction_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
      DAT_05702aaa = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"DynamicFriction",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702aab == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DynamicFriction);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DynamicFriction_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
      DAT_05702aab = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"Bounciness",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702aac == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bounciness_g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Bounciness_g____s);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
      DAT_05702aac = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"FrictionCombine",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702aad == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FrictionCombine);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FrictionCombine_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
      DAT_05702aad = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"BounceCombine",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702aae == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BounceCombine_g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__BounceCombine_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
      DAT_05702aae = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"Setup",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicPhysicsMaterialBuiltin not found");
    pSVar4 = System_String__Concat(pSVar4,name,str2,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
    System_Exception___ctor(__this,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this,uVar5);
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702aaf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuil);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuilti);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Setup_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702aaf = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this_00 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuilti);
  CustomLogic_CLMethodBinding<object>___ctor(__this_00,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuil);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__StaticFriction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction (const MethodInfo* method);
// 0x3df0370

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (DAT_05702aaa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StaticFriction);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__StaticFriction_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    DAT_05702aaa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__DynamicFriction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction (const MethodInfo* method);
// 0x3df0450

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (DAT_05702aab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DynamicFriction);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DynamicFriction_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    DAT_05702aab = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__Bounciness
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness (const MethodInfo* method);
// 0x3df0530

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (DAT_05702aac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bounciness_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Bounciness_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    DAT_05702aac = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__FrictionCombine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine (const MethodInfo* method);
// 0x3df0610

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (DAT_05702aad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FrictionCombine);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FrictionCombine_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    DAT_05702aad = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__BounceCombine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine (const MethodInfo* method);
// 0x3df06f0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (DAT_05702aae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BounceCombine_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__BounceCombine_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    DAT_05702aae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPhysicsMaterialBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicsMaterialBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicsMaterialBu);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreateMethodBinding__Setup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup (const MethodInfo* method);
// 0x3df07d0

CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *__this;
  
  if (DAT_05702aaf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuil);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuilti);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Setup_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702aaf = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsMaterialBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsMaterialBuilti);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsMaterialBuil);
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3df0920

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702ab0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Bounciness");
    il2cpp_init_method_metadata(&"Setup");
    il2cpp_init_method_metadata(&"StaticFriction");
    il2cpp_init_method_metadata(&"BounceCombine");
    il2cpp_init_method_metadata(&"DynamicFriction");
    il2cpp_init_method_metadata(&"FrictionCombine");
    DAT_05702ab0 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"StaticFriction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DynamicFriction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Bounciness",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FrictionCombine",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BounceCombine",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Setup",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____getter_2_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x3df0a90

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__StaticFriction>g____getter_2_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__get_StaticFriction(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____setter_2_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df0ad0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__StaticFriction>g____setter_2_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (DAT_05702ab1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ab1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_StaticFriction(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____getter_3_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x3df0b50

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__DynamicFriction>g____getter_3_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__get_DynamicFriction(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____setter_3_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df0b90

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__DynamicFriction>g____setter_3_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (DAT_05702ab2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ab2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_DynamicFriction(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____getter_4_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x3df0c10

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__Bounciness>g____getter_4_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__get_Bounciness(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____setter_4_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df0c50

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__Bounciness>g____setter_4_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (DAT_05702ab3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ab3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_Bounciness(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____getter_5_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x3df0cd0

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__FrictionCombine>g____getter_5_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__get_FrictionCombine(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____setter_5_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df0d10

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__FrictionCombine>g____setter_5_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  int32_t value;
  
  if (DAT_05702ab4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ab4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_FrictionCombine(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____getter_6_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x3df0d90

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__BounceCombine>g____getter_6_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__get_BounceCombine(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____setter_6_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df0dd0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__<__CreatePropertyBinding__BounceCombine>g____setter_6_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  int32_t value;
  
  if (DAT_05702ab5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ab5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_BounceCombine(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3defd20

void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x3defd30

void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  Map_CustomPhysicsMaterial_o *pMVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Component_o *component;
  
  if (DAT_05702aa6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomPhysicsMaterial_GetOrAddComponent_CustomPh);
    il2cpp_init_method_metadata(&TypeInfo_CustomPhysicsMaterial);
    DAT_05702aa6 = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    component = (UnityEngine_Component_o *)
                CustomLogic_BuiltinComponentInstance__GetOrAddComponent<object>
                          ((pMVar2->fields).GameObject,MethodInfo_CustomPhysicsMaterial_GetOrAddComponent_CustomPh);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,component,(MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    il2cpp_runtime_glue(&(__this->fields).OwnerMapObject,owner);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar2->fields).GameObject;
      il2cpp_runtime_glue(&(__this->fields).Owner);
      pIVar4 = TypeInfo_CustomPhysicsMaterial;
      pMVar3 = (Map_CustomPhysicsMaterial_o *)(__this->fields).Component;
      if (pMVar3 != (Map_CustomPhysicsMaterial_o *)0x0) {
        bVar1 = (TypeInfo_CustomPhysicsMaterial->_2).naturalAligment;
        if ((bVar1 <= (((UnityEngine_Component_c *)pMVar3->klass)->_2).naturalAligment) &&
           ((((UnityEngine_Component_c *)pMVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            TypeInfo_CustomPhysicsMaterial)) {
          (__this->fields).Value = pMVar3;
          if ((bVar1 <= (((UnityEngine_Component_c *)pMVar3->klass)->_2).naturalAligment) &&
             ((((UnityEngine_Component_c *)pMVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              pIVar4)) goto LAB_03defe29;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pMVar3,pIVar4);
      }
      (__this->fields).Value = (Map_CustomPhysicsMaterial_o *)0x0;
LAB_03defe29:
      il2cpp_runtime_glue(&(__this->fields).Value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_StaticFriction
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_StaticFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3defe50

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_StaticFriction
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar1 = Map_CustomPhysicsMaterial__get_StaticFriction(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_StaticFriction
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_StaticFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3defe70

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_StaticFriction
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_StaticFriction(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_DynamicFriction
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_DynamicFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3defe90

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_DynamicFriction
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar1 = Map_CustomPhysicsMaterial__get_DynamicFriction(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_DynamicFriction
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_DynamicFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3defeb0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_DynamicFriction
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_DynamicFriction(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_Bounciness
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_Bounciness (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3defed0

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_Bounciness
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar1 = Map_CustomPhysicsMaterial__get_Bounciness(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_Bounciness
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_Bounciness (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3defef0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_Bounciness
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_Bounciness(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_FrictionCombine
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_FrictionCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3deff10

int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_FrictionCombine
                  (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    iVar1 = Map_CustomPhysicsMaterial__get_FrictionCombine(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_FrictionCombine
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_FrictionCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3deff30

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_FrictionCombine
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_FrictionCombine(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_BounceCombine
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_BounceCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3deff50

int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_BounceCombine
                  (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    iVar1 = Map_CustomPhysicsMaterial__get_BounceCombine(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_BounceCombine
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_BounceCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3deff70

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_BounceCombine
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_BounceCombine(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$Setup
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, bool allChildColliders, const MethodInfo* method);
// 0x3deff90

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,
               bool_conflict allChildColliders,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__Setup(__this_00,allChildColliders & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_ClassName (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3deffb0

System_String_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_ClassName
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702aa7 == '\0') {
    il2cpp_init_method_metadata(&"PhysicsMaterialBuiltin");
    DAT_05702aa7 = '\x01';
  }
  return "PhysicsMaterialBuiltin";
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsAbstract (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3deffe0

bool_conflict
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsStatic (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3defff0

bool_conflict
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x3df0000

bool_conflict
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


