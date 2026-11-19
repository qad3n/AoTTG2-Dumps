// Type: CustomLogic.CustomLogicPhysicsMaterialBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicsMaterialBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a02bb0

CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545e93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin);
    Il2CppMethodInitialized_07545e93 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicsMaterialBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a039e0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ea1 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a03a50

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$<__CreateMethodBinding__Setup>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_____CreateMethodBinding__Setup_b__7_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a03a60

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_____CreateMethodBinding__Setup_b__7_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_CustomPhysicsMaterial_o *__this_00;
  bool allChildColliders;
  
  if (Il2CppMethodInitialized_07545ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ea2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    allChildColliders =
         CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                   (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((__c != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (Map_CustomPhysicsMaterial_o *)0x0)) {
      Map_CustomPhysicsMaterial__Setup(__this_00,allChildColliders,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a02ca0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *pCVar2;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07545e94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Bounciness");
    il2cpp_codegen_initialize_runtime_metadata(&"Setup");
    il2cpp_codegen_initialize_runtime_metadata(&"StaticFriction");
    il2cpp_codegen_initialize_runtime_metadata(&"BounceCombine");
    il2cpp_codegen_initialize_runtime_metadata(&"DynamicFriction");
    il2cpp_codegen_initialize_runtime_metadata(&"FrictionCombine");
    Il2CppMethodInitialized_07545e94 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"StaticFriction",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"DynamicFriction",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Bounciness",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"FrictionCombine",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine
                       ((MethodInfo *)pCVar5);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"BounceCombine",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine
                       ((MethodInfo *)pCVar5);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Setup",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    }
    pCVar3 = CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup
                       ((MethodInfo *)pCVar5);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicsMaterialBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__StaticFriction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction (const MethodInfo* method);
// 0x5a02f10

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g_71c0c18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e95 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g_71c0c18
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__DynamicFriction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction (const MethodInfo* method);
// 0x5a02ff0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction_71c0bf8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e96 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction_71c0bf8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__Bounciness
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness (const MethodInfo* method);
// 0x5a030d0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g_71c0be8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e97 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g_71c0be8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__FrictionCombine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine (const MethodInfo* method);
// 0x5a031b0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine_71c0c08
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e98 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine_71c0c08
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__BounceCombine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine (const MethodInfo* method);
// 0x5a03290

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g_71c0bd8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e99 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g_71c0bd8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreateMethodBinding__Setup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup (const MethodInfo* method);
// 0x5a03370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a033a5: jmp 0x5a03415

CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsMaterialBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c___CreateMethodBinding__Setup_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e9a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
    ;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c)->static_fields
    ;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsMaterialBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c___CreateMethodBinding__Setup_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin
                        );
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a034b0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Bounciness");
    il2cpp_codegen_initialize_runtime_metadata(&"Setup");
    il2cpp_codegen_initialize_runtime_metadata(&"StaticFriction");
    il2cpp_codegen_initialize_runtime_metadata(&"BounceCombine");
    il2cpp_codegen_initialize_runtime_metadata(&"DynamicFriction");
    il2cpp_codegen_initialize_runtime_metadata(&"FrictionCombine");
    Il2CppMethodInitialized_07545e9b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StaticFriction",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DynamicFriction",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bounciness",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FrictionCombine",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BounceCombine",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Setup",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____getter_2_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x5a03620

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____getter_2_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__get_StaticFriction(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____setter_2_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a03660

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____setter_2_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e9c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_StaticFriction(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____getter_3_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x5a036e0

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____getter_3_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__get_DynamicFriction(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____setter_3_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a03720

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____setter_3_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e9d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_DynamicFriction(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____getter_4_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x5a037a0

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____getter_4_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__get_Bounciness(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____setter_4_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a037e0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____setter_4_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e9e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_Bounciness(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____getter_5_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x5a03860

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____getter_5_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__get_FrictionCombine(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____setter_5_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a038a0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____setter_5_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e9f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_FrictionCombine(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____getter_6_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x5a03920

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____getter_6_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__get_BounceCombine(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____setter_6_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a03960

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____setter_6_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_07545ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ea0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (Map_CustomPhysicsMaterial_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_BounceCombine(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a028c0

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
// 0x5a028d0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor_59028d0
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  Map_CustomPhysicsMaterial_c *pMVar3;
  Map_CustomPhysicsMaterial_o *pMVar4;
  
  if (Il2CppMethodInitialized_07545e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_CustomPhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomPhysicsMaterial);
    Il2CppMethodInitialized_07545e91 = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    pMVar4 = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                       ((pMVar2->fields).GameObject,
                        (MethodInfo_3479500 *)
                        MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_CustomPhysicsMaterial
                       );
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)pMVar4,
               (MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerMapObject);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar2->fields).GameObject;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner);
      pMVar3 = TypeInfo_Map_CustomPhysicsMaterial;
      pMVar4 = (Map_CustomPhysicsMaterial_o *)(__this->fields).Component;
      if (pMVar4 == (Map_CustomPhysicsMaterial_o *)0x0) {
        (__this->fields).Value = (Map_CustomPhysicsMaterial_o *)0x0;
label_05a029c9:
        Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
        return;
      }
      bVar1 = (TypeInfo_Map_CustomPhysicsMaterial->_2).typeHierarchyDepth;
      if ((bVar1 <= (((UnityEngine_Component_c *)pMVar4->klass)->_2).typeHierarchyDepth) &&
         ((((UnityEngine_Component_c *)pMVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Map_CustomPhysicsMaterial)) {
        (__this->fields).Value = pMVar4;
        if ((bVar1 <= (((UnityEngine_Component_c *)pMVar4->klass)->_2).typeHierarchyDepth) &&
           ((((UnityEngine_Component_c *)pMVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)pMVar3)) goto label_05a029c9;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pMVar4,pMVar3);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_StaticFriction
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_StaticFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a029f0

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_StaticFriction
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Map_CustomPhysicsMaterial__get_StaticFriction(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_StaticFriction
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_StaticFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a02a10

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_StaticFriction
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_StaticFriction(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_DynamicFriction
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_DynamicFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a02a30

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_DynamicFriction
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Map_CustomPhysicsMaterial__get_DynamicFriction(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_DynamicFriction
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_DynamicFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a02a50

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_DynamicFriction
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_DynamicFriction(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_Bounciness
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_Bounciness (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a02a70

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_Bounciness
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Map_CustomPhysicsMaterial__get_Bounciness(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_Bounciness
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_Bounciness (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a02a90

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_Bounciness
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_Bounciness(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_FrictionCombine
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_FrictionCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a02ab0

int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_FrictionCombine
                  (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = Map_CustomPhysicsMaterial__get_FrictionCombine(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_FrictionCombine
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_FrictionCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a02ad0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_FrictionCombine
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_FrictionCombine(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_BounceCombine
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_BounceCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a02af0

int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_BounceCombine
                  (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = Map_CustomPhysicsMaterial__get_BounceCombine(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_BounceCombine
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_BounceCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a02b10

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_BounceCombine
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__set_BounceCombine(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$Setup
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, bool allChildColliders, const MethodInfo* method);
// 0x5a02b30

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,bool allChildColliders,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_CustomPhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  Map_CustomPhysicsMaterial__Setup(__this_00,allChildColliders,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_ClassName (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a02b50

System_String_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_ClassName
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545e92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterialBuiltin");
    Il2CppMethodInitialized_07545e92 = '\x01';
  }
  return "PhysicsMaterialBuiltin";
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsAbstract (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a02b80

bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsStatic (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a02b90

bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsStatic
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x5a02ba0

bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


