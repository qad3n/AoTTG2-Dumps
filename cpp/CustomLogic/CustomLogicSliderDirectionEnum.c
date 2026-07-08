// Type: CustomLogic.CustomLogicSliderDirectionEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSliderDirectionEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicSliderDirectionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSliderDirectionEnum_o* CustomLogic_CustomLogicSliderDirectionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e92890

CustomLogic_CustomLogicSliderDirectionEnum_o *
CustomLogic_CustomLogicSliderDirectionEnum_Factory__CreateInstance
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
  if (DAT_057035ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSliderDirectionEnum);
    DAT_057035ef = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSliderDirectionEnum);
      if (DAT_057035ed == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057035ed = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicSliderDirectionEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicSliderDirectionEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicSliderDirectionEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e929b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057035f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Vertical");
    il2cpp_init_method_metadata(&"Horizontal");
    DAT_057035f0 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Horizontal",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Vertical",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicSliderDirectionEnum not found");
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
    if (DAT_057035f2 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Vertical_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderDirectionEn);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderDirectionEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderDirectionEnum__object);
      DAT_057035f2 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderDirectionEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderDirectionEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSliderDirectionEn);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057035f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Horizontal_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderDirectionEn);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderDirectionEnum__object);
    DAT_057035f1 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderDirectionEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderDirectionEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSliderDirectionEn);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$__CreatePropertyBinding__Horizontal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Horizontal (const MethodInfo* method);
// 0x3e92af0

CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Horizontal
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *__this;
  
  if (DAT_057035f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Horizontal_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderDirectionEn);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderDirectionEnum__object);
    DAT_057035f1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderDirectionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderDirectionEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSliderDirectionEn);
  return __this;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$__CreatePropertyBinding__Vertical
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Vertical (const MethodInfo* method);
// 0x3e92b90

CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Vertical
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *__this;
  
  if (DAT_057035f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Vertical_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderDirectionEn);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderDirectionEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderDirectionEnum__object);
    DAT_057035f2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderDirectionEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderDirectionEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSliderDirectionEn);
  return __this;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderDirectionEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e92c30

void CustomLogic_CustomLogicSliderDirectionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057035f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Vertical");
    il2cpp_init_method_metadata(&"Horizontal");
    DAT_057035f3 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Horizontal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Vertical",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$<__CreatePropertyBinding__Horizontal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Horizontal_g____getter_2_0 (CustomLogic_CustomLogicSliderDirectionEnum_o* __i, const MethodInfo* method);
// 0x3e92d20

Il2CppObject *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings__<__CreatePropertyBinding__Horizontal>g____getter_2_0
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$<__CreatePropertyBinding__Vertical>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Vertical_g____getter_3_0 (CustomLogic_CustomLogicSliderDirectionEnum_o* __i, const MethodInfo* method);
// 0x3e92d40

Il2CppObject *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings__<__CreatePropertyBinding__Vertical>g____getter_3_0
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderDirectionEnum___ctor (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e927a0

void CustomLogic_CustomLogicSliderDirectionEnum___ctor
               (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057035ed = '\x01';
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


// CustomLogic.CustomLogicSliderDirectionEnum$$get_Horizontal
// il2cpp: int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Horizontal (const MethodInfo* method);
// 0x3e92810

int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Horizontal(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_Vertical
// il2cpp: int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Vertical (const MethodInfo* method);
// 0x3e92820

int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Vertical(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderDirectionEnum__get_ClassName (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e92830

System_String_o *
CustomLogic_CustomLogicSliderDirectionEnum__get_ClassName
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  if (DAT_057035ee == '\0') {
    il2cpp_init_method_metadata(&"SliderDirectionEnum");
    DAT_057035ee = '\x01';
  }
  return "SliderDirectionEnum";
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_IsAbstract (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e92860

bool_conflict
CustomLogic_CustomLogicSliderDirectionEnum__get_IsAbstract
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_IsStatic (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e92870

bool_conflict
CustomLogic_CustomLogicSliderDirectionEnum__get_IsStatic
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x3e92880

bool_conflict
CustomLogic_CustomLogicSliderDirectionEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


