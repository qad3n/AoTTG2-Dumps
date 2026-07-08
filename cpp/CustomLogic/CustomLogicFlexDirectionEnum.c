// Type: CustomLogic.CustomLogicFlexDirectionEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFlexDirectionEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicFlexDirectionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFlexDirectionEnum_o* CustomLogic_CustomLogicFlexDirectionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e4e2e0

CustomLogic_CustomLogicFlexDirectionEnum_o *
CustomLogic_CustomLogicFlexDirectionEnum_Factory__CreateInstance
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
  if (DAT_05702f78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicFlexDirectionEnum);
    DAT_05702f78 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicFlexDirectionEnum);
      if (DAT_05702f76 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f76 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicFlexDirectionEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicFlexDirectionEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicFlexDirectionEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e4e400

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702f79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"RowReverse");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"ColumnReverse");
    DAT_05702f79 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Row",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702f7a == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Row_g____getter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
      DAT_05702f7a = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Column",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702f7b == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Column_g____get);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
      DAT_05702f7b = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"RowReverse",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"ColumnReverse",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicFlexDirectionEnum not found");
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
    if (DAT_05702f7d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColumnReverse_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
      DAT_05702f7d = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702f7c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RowReverse_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
    DAT_05702f7c = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Row
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row (const MethodInfo* method);
// 0x3e4e5e0

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this;
  
  if (DAT_05702f7a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Row_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
    DAT_05702f7a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return __this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Column
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column (const MethodInfo* method);
// 0x3e4e680

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this;
  
  if (DAT_05702f7b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Column_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
    DAT_05702f7b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return __this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__RowReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse (const MethodInfo* method);
// 0x3e4e720

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this;
  
  if (DAT_05702f7c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RowReverse_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
    DAT_05702f7c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return __this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__ColumnReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse (const MethodInfo* method);
// 0x3e4e7c0

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this;
  
  if (DAT_05702f7d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColumnReverse_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
    DAT_05702f7d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFlexDirectionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return __this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFlexDirectionEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e4e860

void CustomLogic_CustomLogicFlexDirectionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"RowReverse");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"ColumnReverse");
    DAT_05702f7e = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Row",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Column",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RowReverse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColumnReverse",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Row>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Row_g____getter_2_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x3e4e990

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings__<__CreatePropertyBinding__Row>g____getter_2_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Column>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Column_g____getter_3_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x3e4e9b0

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings__<__CreatePropertyBinding__Column>g____getter_3_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__RowReverse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__RowReverse_g____getter_4_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x3e4e9d0

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings__<__CreatePropertyBinding__RowReverse>g____getter_4_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__ColumnReverse>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__ColumnReverse_g____getter_5_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x3e4e9f0

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings__<__CreatePropertyBinding__ColumnReverse>g____getter_5_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFlexDirectionEnum___ctor (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e4e1d0

void CustomLogic_CustomLogicFlexDirectionEnum___ctor
               (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f76 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f76 = '\x01';
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


// CustomLogic.CustomLogicFlexDirectionEnum$$get_Row
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Row (const MethodInfo* method);
// 0x3e4e240

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Row(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_Column
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Column (const MethodInfo* method);
// 0x3e4e250

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Column(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_RowReverse
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_RowReverse (const MethodInfo* method);
// 0x3e4e260

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_RowReverse(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_ColumnReverse
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_ColumnReverse (const MethodInfo* method);
// 0x3e4e270

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_ColumnReverse(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFlexDirectionEnum__get_ClassName (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e4e280

System_String_o *
CustomLogic_CustomLogicFlexDirectionEnum__get_ClassName
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702f77 == '\0') {
    il2cpp_init_method_metadata(&"FlexDirectionEnum");
    DAT_05702f77 = '\x01';
  }
  return "FlexDirectionEnum";
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsAbstract (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e4e2b0

bool_conflict
CustomLogic_CustomLogicFlexDirectionEnum__get_IsAbstract
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsStatic (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e4e2c0

bool_conflict
CustomLogic_CustomLogicFlexDirectionEnum__get_IsStatic
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e4e2d0

bool_conflict
CustomLogic_CustomLogicFlexDirectionEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


