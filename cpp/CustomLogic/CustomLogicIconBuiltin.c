// Type: CustomLogic.CustomLogicIconBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicIconBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicIconBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3edfe10

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicIconBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicIconBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ee0770

void CustomLogic_CustomLogicIconBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703a89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a89 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ee07e0

void CustomLogic_CustomLogicIconBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIcon>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetIcon_b__4_0 (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicIconBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee07f0

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings_<>c__<__CreateMethodBinding__SetIcon>b__4_0
          (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicIconBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  
  if (DAT_05703a8a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a8a = '\x01';
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
    value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if (__c != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
      CustomLogic_CustomLogicIconBuiltin__SetIcon(__c,value,method_00);
      return extraout_RAX;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTintColor>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetTintColor_b__5_0 (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicIconBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee0880

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings_<>c__<__CreateMethodBinding__SetTintColor>b__5_0
          (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicIconBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this_00;
  Il2CppObject *pIVar1;
  UnityEngine_Color_o value;
  
  if (DAT_05703a8b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a8b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (((__c != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) &&
       (pIVar1[3].klass != (Il2CppClass *)0x0)) {
      __this_00 = (__c->fields)._image;
      value = Utility_Color255__ToColor((Utility_Color255_o *)pIVar1[3].klass,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UIElements_Image_o *)0x0) {
        UnityEngine_UIElements_Image__set_tintColor(__this_00,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicIconBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3edfea0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicIconBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05703a81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"IconPath");
    il2cpp_init_method_metadata(&"SetTintColor");
    il2cpp_init_method_metadata(&"SetIcon");
    il2cpp_init_method_metadata(&"ScaleMode");
    DAT_05703a81 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"IconPath",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a82 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicIconBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IconPath_g____g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IconPath_g____set);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicIconBuiltin__object);
      DAT_05703a82 = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicIconBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicIconBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"ScaleMode",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a83 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicIconBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScaleMode_g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ScaleMode_g____se);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicIconBuiltin__object);
      DAT_05703a83 = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicIconBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicIconBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"SetIcon",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"SetTintColor",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicIconBuiltin not found");
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
    if (DAT_05703a85 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicIconBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetTintColor_b__5);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703a85 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicIconBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
      il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703a84 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicIconBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetIcon_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a84 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicIconBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
    il2cpp_runtime_glue(lVar2 + 8,pSVar9);
  }
  pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar10;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__IconPath
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath (const MethodInfo* method);
// 0x3ee0080

CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this;
  
  if (DAT_05703a82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicIconBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IconPath_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IconPath_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicIconBuiltin__object);
    DAT_05703a82 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicIconBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicIconBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__ScaleMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode (const MethodInfo* method);
// 0x3ee0160

CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this;
  
  if (DAT_05703a83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicIconBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScaleMode_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ScaleMode_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicIconBuiltin__object);
    DAT_05703a83 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicIconBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicIconBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetIcon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon (const MethodInfo* method);
// 0x3ee0240

CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *__this;
  
  if (DAT_05703a84 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicIconBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetIcon_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a84 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicIconBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetTintColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor (const MethodInfo* method);
// 0x3ee0390

CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *__this;
  
  if (DAT_05703a85 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicIconBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetTintColor_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a85 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicIconBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ee04e0

void CustomLogic_CustomLogicIconBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703a86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"IconPath");
    il2cpp_init_method_metadata(&"SetTintColor");
    il2cpp_init_method_metadata(&"SetIcon");
    il2cpp_init_method_metadata(&"ScaleMode");
    DAT_05703a86 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"IconPath",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ScaleMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetIcon",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetTintColor",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____getter_2_0 (CustomLogic_CustomLogicIconBuiltin_o* __i, const MethodInfo* method);
// 0x3ee0610

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings__<__CreatePropertyBinding__IconPath>g____getter_2_0
          (CustomLogic_CustomLogicIconBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentIconPath;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____setter_2_1 (CustomLogic_CustomLogicIconBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee0630

void CustomLogic_CustomLogicIconBuiltin_Bindings__<__CreatePropertyBinding__IconPath>g____setter_2_1
               (CustomLogic_CustomLogicIconBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  MethodInfo *method_00;
  
  if (DAT_05703a87 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____getter_3_0 (CustomLogic_CustomLogicIconBuiltin_o* __i, const MethodInfo* method);
// 0x3ee06b0

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings__<__CreatePropertyBinding__ScaleMode>g____getter_3_0
          (CustomLogic_CustomLogicIconBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) &&
     ((__i->fields)._image != (UnityEngine_UIElements_Image_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____setter_3_1 (CustomLogic_CustomLogicIconBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee06f0

void CustomLogic_CustomLogicIconBuiltin_Bindings__<__CreatePropertyBinding__ScaleMode>g____setter_3_1
               (CustomLogic_CustomLogicIconBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  int32_t iStack_30;
  int32_t aiStack_2c [3];
  
  if (DAT_05703a88 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    if (DAT_05703a7f == '\0') {
      il2cpp_init_method_metadata(&TypeRef_ScaleMode);
      DAT_05703a7f = '\x01';
    }
    handle.fields.value = TypeRef_ScaleMode.fields.value;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    aiStack_2c[0] = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_2c);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this = (__i->fields)._image;
      if (__this != (UnityEngine_UIElements_Image_o *)0x0) {
        UnityEngine_UIElements_Image__set_scaleMode(__this,value,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Invalid scale mode: {0}.");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
    System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_ScaleMode);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin___ctor (CustomLogic_CustomLogicIconBuiltin_o* __this, UnityEngine_UIElements_Image_o* image, const MethodInfo* method);
// 0x3edf990

void CustomLogic_CustomLogicIconBuiltin___ctor
               (CustomLogic_CustomLogicIconBuiltin_o *__this,UnityEngine_UIElements_Image_o *image,
               MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)image,method);
  (__this->fields)._image = image;
  il2cpp_runtime_glue(&(__this->fields)._image,image);
  (__this->fields)._currentIconPath = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._currentIconPath);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$SetIcon
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin__SetIcon (CustomLogic_CustomLogicIconBuiltin_o* __this, System_String_o* iconPath, const MethodInfo* method);
// 0x3edf9e0

void CustomLogic_CustomLogicIconBuiltin__SetIcon
               (CustomLogic_CustomLogicIconBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Texture_o *value_00;
  System_String_o *pSVar3;
  
  if (DAT_05703a7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Failed to load icon at path: ");
    DAT_05703a7e = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = Utility_Util__IsValidResourcePath(value,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar3,value,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (((value_00 != (UnityEngine_Texture_o *)0x0) && ((char)bVar2 != '\0')) &&
         (value_00->klass == TypeInfo_Texture2D)) {
        pUVar1 = (__this->fields)._image;
        if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
          UnityEngine_UIElements_Image__set_image(pUVar1,value_00,(MethodInfo *)0x0);
          (__this->fields)._currentIconPath = value;
          il2cpp_runtime_glue(&(__this->fields)._currentIconPath,value);
          return;
        }
        goto LAB_03edfbe4;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__op_Inequality
                ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    }
    pSVar3 = System_String__Concat("Failed to load icon at path: ",value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  }
  else {
    pUVar1 = (__this->fields)._image;
    if (pUVar1 == (UnityEngine_UIElements_Image_o *)0x0) {
LAB_03edfbe4:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_UIElements_Image__set_image(pUVar1,(UnityEngine_Texture_o *)0x0,(MethodInfo *)0x0);
    (__this->fields)._currentIconPath = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(&(__this->fields)._currentIconPath);
  }
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$get_IconPath
// il2cpp: System_String_o* CustomLogic_CustomLogicIconBuiltin__get_IconPath (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x3edfbf0

System_String_o *
CustomLogic_CustomLogicIconBuiltin__get_IconPath
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentIconPath;
}


// CustomLogic.CustomLogicIconBuiltin$$set_IconPath
// il2cpp: void CustomLogic_CustomLogicIconBuiltin__set_IconPath (CustomLogic_CustomLogicIconBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3edfc00

void CustomLogic_CustomLogicIconBuiltin__set_IconPath
               (CustomLogic_CustomLogicIconBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  CustomLogic_CustomLogicIconBuiltin__SetIcon(__this,value,method);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$SetTintColor
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin__SetTintColor (CustomLogic_CustomLogicIconBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3edfc10

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin__SetTintColor
          (CustomLogic_CustomLogicIconBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color
          ,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_UIElements_Image_o *__this_01;
  UnityEngine_Color_o value;
  
  if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (color->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    __this_01 = (__this->fields)._image;
    value = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_tintColor(__this_01,value,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin$$get_ScaleMode
// il2cpp: int32_t CustomLogic_CustomLogicIconBuiltin__get_ScaleMode (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x3edfc50

int32_t CustomLogic_CustomLogicIconBuiltin__get_ScaleMode
                  (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  
  pUVar1 = (__this->fields)._image;
  if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
    return *(int32_t *)&(pUVar1->fields).styleSheetList;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicIconBuiltin$$set_ScaleMode
// il2cpp: void CustomLogic_CustomLogicIconBuiltin__set_ScaleMode (CustomLogic_CustomLogicIconBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3edfc70

void CustomLogic_CustomLogicIconBuiltin__set_ScaleMode
               (CustomLogic_CustomLogicIconBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (DAT_05703a7f == '\0') {
    il2cpp_init_method_metadata(&TypeRef_ScaleMode);
    DAT_05703a7f = '\x01';
  }
  handle.fields.value = TypeRef_ScaleMode.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._image;
    if (__this_00 != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iStack_30 = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Invalid scale mode: {0}.");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
  System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_ScaleMode);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar4);
}


// CustomLogic.CustomLogicIconBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicIconBuiltin__get_ClassName (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x3edfdb0

System_String_o *
CustomLogic_CustomLogicIconBuiltin__get_ClassName
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a80 == '\0') {
    il2cpp_init_method_metadata(&"Icon");
    DAT_05703a80 = '\x01';
  }
  return "Icon";
}


// CustomLogic.CustomLogicIconBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_IsAbstract (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x3edfde0

bool_conflict
CustomLogic_CustomLogicIconBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicIconBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_IsStatic (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x3edfdf0

bool_conflict
CustomLogic_CustomLogicIconBuiltin__get_IsStatic
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicIconBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x3edfe00

bool_conflict
CustomLogic_CustomLogicIconBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


