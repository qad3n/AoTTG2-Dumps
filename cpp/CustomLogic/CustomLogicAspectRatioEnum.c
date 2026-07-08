// Type: CustomLogic.CustomLogicAspectRatioEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAspectRatioEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicAspectRatioEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAspectRatioEnum_o* CustomLogic_CustomLogicAspectRatioEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e43ca0

CustomLogic_CustomLogicAspectRatioEnum_o *
CustomLogic_CustomLogicAspectRatioEnum_Factory__CreateInstance
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
  if (DAT_05702eb7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAspectRatioEnum);
    DAT_05702eb7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAspectRatioEnum);
      if (DAT_05702eb5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702eb5 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicAspectRatioEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicAspectRatioEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicAspectRatioEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAspectRatioEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e43dc0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702eb8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Width");
    il2cpp_init_method_metadata(&"Height");
    DAT_05702eb8 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Width",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicAspectRatioEnum not found");
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
    if (DAT_05702eba == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Width_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAspectRatioEnum__object);
      DAT_05702eba = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAspectRatioEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702eb9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Height_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAspectRatioEnum__object);
    DAT_05702eb9 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAspectRatioEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o* CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x3e43f00

CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this;
  
  if (DAT_05702eb9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Height_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAspectRatioEnum__object);
    DAT_05702eb9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAspectRatioEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
  return __this;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Width
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o* CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width (const MethodInfo* method);
// 0x3e43fa0

CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this;
  
  if (DAT_05702eba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Width_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAspectRatioEnum__object);
    DAT_05702eba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAspectRatioEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAspectRatioEnum);
  return __this;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAspectRatioEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e44040

void CustomLogic_CustomLogicAspectRatioEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702ebb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Width");
    il2cpp_init_method_metadata(&"Height");
    DAT_05702ebb = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Height",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Width",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Height>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0 (CustomLogic_CustomLogicAspectRatioEnum_o* __i, const MethodInfo* method);
// 0x3e44130

Il2CppObject *
CustomLogic_CustomLogicAspectRatioEnum_Bindings__<__CreatePropertyBinding__Height>g____getter_2_0
          (CustomLogic_CustomLogicAspectRatioEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Width>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0 (CustomLogic_CustomLogicAspectRatioEnum_o* __i, const MethodInfo* method);
// 0x3e44150

Il2CppObject *
CustomLogic_CustomLogicAspectRatioEnum_Bindings__<__CreatePropertyBinding__Width>g____getter_3_0
          (CustomLogic_CustomLogicAspectRatioEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicAspectRatioEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAspectRatioEnum___ctor (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x3e43bb0

void CustomLogic_CustomLogicAspectRatioEnum___ctor
               (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702eb5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702eb5 = '\x01';
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


// CustomLogic.CustomLogicAspectRatioEnum$$get_Height
// il2cpp: int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Height (const MethodInfo* method);
// 0x3e43c20

int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Height(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_Width
// il2cpp: int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Width (const MethodInfo* method);
// 0x3e43c30

int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Width(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAspectRatioEnum__get_ClassName (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x3e43c40

System_String_o *
CustomLogic_CustomLogicAspectRatioEnum__get_ClassName
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702eb6 == '\0') {
    il2cpp_init_method_metadata(&"AspectRatioEnum");
    DAT_05702eb6 = '\x01';
  }
  return "AspectRatioEnum";
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_IsAbstract (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x3e43c70

bool_conflict
CustomLogic_CustomLogicAspectRatioEnum__get_IsAbstract
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_IsStatic (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x3e43c80

bool_conflict
CustomLogic_CustomLogicAspectRatioEnum__get_IsStatic
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x3e43c90

bool_conflict
CustomLogic_CustomLogicAspectRatioEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


