// Type: CustomLogic.CustomLogicFontStyleEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFontStyleEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicFontStyleEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFontStyleEnum_o* CustomLogic_CustomLogicFontStyleEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e4f0e0

CustomLogic_CustomLogicFontStyleEnum_o *
CustomLogic_CustomLogicFontStyleEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702f88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicFontStyleEnum);
    DAT_05702f88 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicFontStyleEnum);
      if (DAT_05702f86 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f86 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicFontStyleEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicFontStyleEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicFontStyleEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFontStyleEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e4f200

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFontStyleEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702f89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Italic");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Bold");
    il2cpp_init_method_metadata(&"BoldAndItalic");
    DAT_05702f89 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702f8a == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normal_g____get);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontStyleEnum__object);
      DAT_05702f8a = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontStyleEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Bold",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702f8b == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bold_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontStyleEnum__object);
      DAT_05702f8b = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontStyleEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Italic",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"BoldAndItalic",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicFontStyleEnum not found");
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
    if (DAT_05702f8d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BoldAndItalic_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontStyleEnum__object);
      DAT_05702f8d = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontStyleEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702f8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Italic_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontStyleEnum__object);
    DAT_05702f8c = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontStyleEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x3e4f3e0

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this;
  
  if (DAT_05702f8a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normal_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontStyleEnum__object);
    DAT_05702f8a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontStyleEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return __this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Bold
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold (const MethodInfo* method);
// 0x3e4f480

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this;
  
  if (DAT_05702f8b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bold_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontStyleEnum__object);
    DAT_05702f8b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontStyleEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return __this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Italic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic (const MethodInfo* method);
// 0x3e4f520

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this;
  
  if (DAT_05702f8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Italic_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontStyleEnum__object);
    DAT_05702f8c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontStyleEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return __this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__BoldAndItalic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic (const MethodInfo* method);
// 0x3e4f5c0

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this;
  
  if (DAT_05702f8d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BoldAndItalic_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontStyleEnum__object);
    DAT_05702f8d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontStyleEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontStyleEnum);
  return __this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFontStyleEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e4f660

void CustomLogic_CustomLogicFontStyleEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Italic");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Bold");
    il2cpp_init_method_metadata(&"BoldAndItalic");
    DAT_05702f8e = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Normal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Bold",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Italic",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BoldAndItalic",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x3e4f790

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings__<__CreatePropertyBinding__Normal>g____getter_2_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Bold>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Bold_g____getter_3_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x3e4f7b0

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings__<__CreatePropertyBinding__Bold>g____getter_3_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Italic>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Italic_g____getter_4_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x3e4f7d0

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings__<__CreatePropertyBinding__Italic>g____getter_4_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__BoldAndItalic>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__BoldAndItalic_g____getter_5_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x3e4f7f0

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings__<__CreatePropertyBinding__BoldAndItalic>g____getter_5_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFontStyleEnum___ctor (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x3e4efd0

void CustomLogic_CustomLogicFontStyleEnum___ctor
               (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f86 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Normal
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Normal (const MethodInfo* method);
// 0x3e4f040

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Normal(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Bold
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Bold (const MethodInfo* method);
// 0x3e4f050

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Bold(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Italic
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Italic (const MethodInfo* method);
// 0x3e4f060

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Italic(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_BoldAndItalic
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_BoldAndItalic (const MethodInfo* method);
// 0x3e4f070

int32_t CustomLogic_CustomLogicFontStyleEnum__get_BoldAndItalic(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFontStyleEnum__get_ClassName (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x3e4f080

System_String_o *
CustomLogic_CustomLogicFontStyleEnum__get_ClassName
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702f87 == '\0') {
    il2cpp_init_method_metadata(&"FontStyleEnum");
    DAT_05702f87 = '\x01';
  }
  return "FontStyleEnum";
}


// CustomLogic.CustomLogicFontStyleEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_IsAbstract (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x3e4f0b0

bool_conflict
CustomLogic_CustomLogicFontStyleEnum__get_IsAbstract
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFontStyleEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_IsStatic (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x3e4f0c0

bool_conflict
CustomLogic_CustomLogicFontStyleEnum__get_IsStatic
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFontStyleEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x3e4f0d0

bool_conflict
CustomLogic_CustomLogicFontStyleEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


