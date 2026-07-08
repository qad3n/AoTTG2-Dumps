// Type: CustomLogic.CustomLogicButtonBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicButtonBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicButtonBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicButtonBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3edca30

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicButtonBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  undefined1 local_14 [4];
  
  il2cpp_glue_01f2f1a0();
  pSVar1 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicButtonBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicButtonBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3edd1f0

void CustomLogic_CustomLogicButtonBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703a58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a58 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3edd260

void CustomLogic_CustomLogicButtonBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnClick>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings___c_____CreateMethodBinding__OnClick_b__4_0 (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicButtonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edd270

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings_<>c__<__CreateMethodBinding__OnClick>b__4_0
          (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicButtonBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (DAT_05703a59 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a59 = '\x01';
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
    pCVar1 = (CustomLogic_UserMethod_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) {
      (__c->fields)._clickEvent = pCVar1;
      il2cpp_runtime_glue(&(__c->fields)._clickEvent,pCVar1);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicButtonBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3edcac0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicButtonBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05703a51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"OnClick");
    il2cpp_init_method_metadata(&"EnableRichText");
    DAT_05703a51 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a52 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicButtonBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Text_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Text_g____setter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicButtonBuiltin__object);
      DAT_05703a52 = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicButtonBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicButtonBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"EnableRichText",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a53 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicButtonBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EnableRichText);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__EnableRichText_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicButtonBuiltin__object);
      DAT_05703a53 = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicButtonBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicButtonBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"OnClick",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicButtonBuiltin not found");
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
  if (DAT_05703a54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicButtonBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnClick_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a54 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicButtonBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this_00 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor(__this_00,function,MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x3edcc50

CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this;
  
  if (DAT_05703a52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicButtonBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Text_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Text_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicButtonBuiltin__object);
    DAT_05703a52 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicButtonBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicButtonBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText (const MethodInfo* method);
// 0x3edcd30

CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this;
  
  if (DAT_05703a53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicButtonBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EnableRichText);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__EnableRichText_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicButtonBuiltin__object);
    DAT_05703a53 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicButtonBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicButtonBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicButtonBuiltin);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreateMethodBinding__OnClick
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick (const MethodInfo* method);
// 0x3edce10

CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *__this;
  
  if (DAT_05703a54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicButtonBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnClick_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a54 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicButtonBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicButtonBuiltin);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3edcf60

void CustomLogic_CustomLogicButtonBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703a55 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"OnClick");
    il2cpp_init_method_metadata(&"EnableRichText");
    DAT_05703a55 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Text",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EnableRichText",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OnClick",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0 (CustomLogic_CustomLogicButtonBuiltin_o* __i, const MethodInfo* method);
// 0x3edd070

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings__<__CreatePropertyBinding__Text>g____getter_2_0
          (CustomLogic_CustomLogicButtonBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  undefined8 in_RDX;
  
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._button, pUVar1 != (UnityEngine_UIElements_Button_o *)0x0)) {
    vtable_dispatch = (pUVar1->klass->vtable)._166_get_text.methodPtr;
    pIVar2 = (Il2CppObject *)
             (*vtable_dispatch)
                       (pUVar1,(pUVar1->klass->vtable)._166_get_text.method,in_RDX,
                        vtable_dispatch);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1 (CustomLogic_CustomLogicButtonBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3edd0a0

void CustomLogic_CustomLogicButtonBuiltin_Bindings__<__CreatePropertyBinding__Text>g____setter_2_1
               (CustomLogic_CustomLogicButtonBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  UnityEngine_UIElements_Button_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar3;
  
  if (DAT_05703a56 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a56 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._button, pUVar1 != (UnityEngine_UIElements_Button_o *)0x0)) {
    pUVar2 = pUVar1->klass;
    vtable_dispatch = (pUVar2->vtable)._167_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar1,pIVar3,(pUVar2->vtable)._167_set_text.method,pUVar2,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0 (CustomLogic_CustomLogicButtonBuiltin_o* __i, const MethodInfo* method);
// 0x3edd130

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings__<__CreatePropertyBinding__EnableRichText>g____getter_3_0
          (CustomLogic_CustomLogicButtonBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     ((__i->fields)._button != (UnityEngine_UIElements_Button_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1 (CustomLogic_CustomLogicButtonBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3edd170

void CustomLogic_CustomLogicButtonBuiltin_Bindings__<__CreatePropertyBinding__EnableRichText>g____setter_3_1
               (CustomLogic_CustomLogicButtonBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this;
  uint uVar1;
  
  if (DAT_05703a57 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a57 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (__this = (__i->fields)._button, __this != (UnityEngine_UIElements_Button_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin___ctor (CustomLogic_CustomLogicButtonBuiltin_o* __this, UnityEngine_UIElements_Button_o* button, const MethodInfo* method);
// 0x3edc730

void CustomLogic_CustomLogicButtonBuiltin___ctor
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,
               UnityEngine_UIElements_Button_o *button,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this_00;
  UnityEngine_UIElements_Clickable_o *__this_01;
  System_Action_o *value;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703a4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnClick);
    DAT_05703a4e = '\x01';
    method = extraout_RDX;
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)button,method);
  (__this->fields)._button = button;
  il2cpp_runtime_glue(&(__this->fields)._button);
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_UIElements_Button_o *)0x0) {
    __this_01 = UnityEngine_UIElements_Button__get_clickable(__this_00,(MethodInfo *)0x0);
    value = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
    System_Action___ctor();
    if (__this_01 != (UnityEngine_UIElements_Clickable_o *)0x0) {
      UnityEngine_UIElements_Clickable__add_clicked(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin$$OnClick
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__OnClick (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x3edc890

void CustomLogic_CustomLogicButtonBuiltin__OnClick
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (DAT_05703a4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703a4f = '\x01';
  }
  if ((__this->fields)._clickEvent == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,(__this->fields)._clickEvent,(System_Object_array *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicButtonBuiltin__get_Text (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x3edc910

System_String_o *
CustomLogic_CustomLogicButtonBuiltin__get_Text
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UIElements_Button_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._166_get_text.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (pUVar1,(pUVar1->klass->vtable)._166_get_text.method,in_RDX,
                        vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__set_Text (CustomLogic_CustomLogicButtonBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3edc940

void CustomLogic_CustomLogicButtonBuiltin__set_Text
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UIElements_Button_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._167_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar1,value,(pUVar1->klass->vtable)._167_set_text.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin$$get_EnableRichText
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_EnableRichText (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x3edc970

bool_conflict
CustomLogic_CustomLogicButtonBuiltin__get_EnableRichText
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UIElements_Button_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pUVar1 >> 8),
                    *(undefined1 *)&(pUVar1->fields)._uitkTextHandle_k__BackingField);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin$$set_EnableRichText
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__set_EnableRichText (CustomLogic_CustomLogicButtonBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3edc990

void CustomLogic_CustomLogicButtonBuiltin__set_EnableRichText
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this_00;
  
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_UIElements_Button_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicButtonBuiltin$$OnClick
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicButtonBuiltin__OnClick (CustomLogic_CustomLogicButtonBuiltin_o* __this, CustomLogic_UserMethod_o* clickEvent, const MethodInfo* method);
// 0x3edc9b0

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicButtonBuiltin__OnClick
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,CustomLogic_UserMethod_o *clickEvent,
          MethodInfo *method)

{
  (__this->fields)._clickEvent = clickEvent;
  il2cpp_runtime_glue(&(__this->fields)._clickEvent);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicButtonBuiltin__get_ClassName (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x3edc9d0

System_String_o *
CustomLogic_CustomLogicButtonBuiltin__get_ClassName
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a50 == '\0') {
    il2cpp_init_method_metadata(&"Button");
    DAT_05703a50 = '\x01';
  }
  return "Button";
}


// CustomLogic.CustomLogicButtonBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_IsAbstract (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x3edca00

bool_conflict
CustomLogic_CustomLogicButtonBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicButtonBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_IsStatic (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x3edca10

bool_conflict
CustomLogic_CustomLogicButtonBuiltin__get_IsStatic
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x3edca20

bool_conflict
CustomLogic_CustomLogicButtonBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


