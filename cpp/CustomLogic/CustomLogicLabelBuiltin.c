// Type: CustomLogic.CustomLogicLabelBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLabelBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicLabelBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLabelBuiltin_o* CustomLogic_CustomLogicLabelBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ee14f0

CustomLogic_CustomLogicLabelBuiltin_o *
CustomLogic_CustomLogicLabelBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLabelBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLabelBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLabelBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ee1580

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLabelBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  System_Action_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  
  if (DAT_05703a98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"EnableRichText");
    DAT_05703a98 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"EnableRichText",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLabelBuiltin not found");
      pSVar2 = System_String__Concat(pSVar2,name,str2,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
      System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this,uVar3);
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a9a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLabelBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EnableRichText);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__EnableRichText_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLabelBuiltin__object);
      DAT_05703a9a = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLabelBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar5 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLabelBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar6,pSVar4,pSVar5,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703a99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLabelBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Text_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Text_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLabelBuiltin__object);
    DAT_05703a99 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLabelBuiltin__object);
  System_Func<object__object>___ctor();
  pSVar5 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLabelBuiltin__object);
  System_Action<object__object>___ctor();
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor(pCVar6,pSVar4,pSVar5,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o* CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x3ee16c0

CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *
CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this;
  
  if (DAT_05703a99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLabelBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Text_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Text_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLabelBuiltin__object);
    DAT_05703a99 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLabelBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLabelBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o* CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText (const MethodInfo* method);
// 0x3ee17a0

CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *
CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this;
  
  if (DAT_05703a9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLabelBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EnableRichText);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__EnableRichText_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLabelBuiltin__object);
    DAT_05703a9a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLabelBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLabelBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLabelBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ee1880

void CustomLogic_CustomLogicLabelBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703a9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"EnableRichText");
    DAT_05703a9b = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Text",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EnableRichText",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0 (CustomLogic_CustomLogicLabelBuiltin_o* __i, const MethodInfo* method);
// 0x3ee1970

Il2CppObject *
CustomLogic_CustomLogicLabelBuiltin_Bindings__<__CreatePropertyBinding__Text>g____getter_2_0
          (CustomLogic_CustomLogicLabelBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  undefined8 in_RDX;
  
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
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


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1 (CustomLogic_CustomLogicLabelBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee19a0

void CustomLogic_CustomLogicLabelBuiltin_Bindings__<__CreatePropertyBinding__Text>g____setter_2_1
               (CustomLogic_CustomLogicLabelBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  UnityEngine_UIElements_Label_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar3;
  
  if (DAT_05703a9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a9c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
    pUVar2 = pUVar1->klass;
    vtable_dispatch = (pUVar2->vtable)._167_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar1,pIVar3,(pUVar2->vtable)._167_set_text.method,pUVar2,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0 (CustomLogic_CustomLogicLabelBuiltin_o* __i, const MethodInfo* method);
// 0x3ee1a30

Il2CppObject *
CustomLogic_CustomLogicLabelBuiltin_Bindings__<__CreatePropertyBinding__EnableRichText>g____getter_3_0
          (CustomLogic_CustomLogicLabelBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     ((__i->fields)._label != (UnityEngine_UIElements_Label_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1 (CustomLogic_CustomLogicLabelBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee1a70

void CustomLogic_CustomLogicLabelBuiltin_Bindings__<__CreatePropertyBinding__EnableRichText>g____setter_3_1
               (CustomLogic_CustomLogicLabelBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextElement_o *__this;
  uint uVar1;
  
  if (DAT_05703a9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a9d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_TextElement_o *)(__i->fields)._label,
     __this != (UnityEngine_UIElements_TextElement_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLabelBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin___ctor (CustomLogic_CustomLogicLabelBuiltin_o* __this, UnityEngine_UIElements_Label_o* label, const MethodInfo* method);
// 0x3ee13c0

void CustomLogic_CustomLogicLabelBuiltin___ctor
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,UnityEngine_UIElements_Label_o *label,
               MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)label,method);
  (__this->fields)._label = label;
  il2cpp_runtime_glue(&(__this->fields)._label,label);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicLabelBuiltin__get_Text (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x3ee13f0

System_String_o *
CustomLogic_CustomLogicLabelBuiltin__get_Text
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
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


// CustomLogic.CustomLogicLabelBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin__set_Text (CustomLogic_CustomLogicLabelBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee1420

void CustomLogic_CustomLogicLabelBuiltin__set_Text
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._167_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar1,value,(pUVar1->klass->vtable)._167_set_text.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLabelBuiltin$$get_EnableRichText
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_EnableRichText (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1450

bool_conflict
CustomLogic_CustomLogicLabelBuiltin__get_EnableRichText
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pUVar1 >> 8),
                    *(undefined1 *)&(pUVar1->fields)._uitkTextHandle_k__BackingField);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLabelBuiltin$$set_EnableRichText
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin__set_EnableRichText (CustomLogic_CustomLogicLabelBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee1470

void CustomLogic_CustomLogicLabelBuiltin__set_EnableRichText
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  UnityEngine_UIElements_TextElement_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_TextElement_o *)(__this->fields)._label;
  if (__this_00 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,value & 0xff,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLabelBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLabelBuiltin__get_ClassName (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1490

System_String_o *
CustomLogic_CustomLogicLabelBuiltin__get_ClassName
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a97 == '\0') {
    il2cpp_init_method_metadata(&"Label");
    DAT_05703a97 = '\x01';
  }
  return "Label";
}


// CustomLogic.CustomLogicLabelBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_IsAbstract (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x3ee14c0

bool_conflict
CustomLogic_CustomLogicLabelBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLabelBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_IsStatic (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x3ee14d0

bool_conflict
CustomLogic_CustomLogicLabelBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x3ee14e0

bool_conflict
CustomLogic_CustomLogicLabelBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


