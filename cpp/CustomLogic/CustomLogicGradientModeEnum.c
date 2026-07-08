// Type: CustomLogic.CustomLogicGradientModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicGradientModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicGradientModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicGradientModeEnum_o* CustomLogic_CustomLogicGradientModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e50140

CustomLogic_CustomLogicGradientModeEnum_o *
CustomLogic_CustomLogicGradientModeEnum_Factory__CreateInstance
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
  if (DAT_05702f9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicGradientModeEnum);
    DAT_05702f9a = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicGradientModeEnum);
      if (DAT_05702f98 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f98 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicGradientModeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicGradientModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicGradientModeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicGradientModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e50260

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicGradientModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702f9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Blend");
    il2cpp_init_method_metadata(&"Fixed");
    DAT_05702f9b = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Blend",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Fixed",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicGradientModeEnum not found");
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
    if (DAT_05702f9d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fixed_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGradientModeEnum__object);
      DAT_05702f9d = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGradientModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702f9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blend_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGradientModeEnum__object);
    DAT_05702f9c = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGradientModeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Blend
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o* CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend (const MethodInfo* method);
// 0x3e503a0

CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *
CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this;
  
  if (DAT_05702f9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blend_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGradientModeEnum__object);
    DAT_05702f9c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGradientModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
  return __this;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Fixed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o* CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed (const MethodInfo* method);
// 0x3e50440

CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *
CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this;
  
  if (DAT_05702f9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fixed_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicGradientModeEnum__object);
    DAT_05702f9d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicGradientModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicGradientModeEnum);
  return __this;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicGradientModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e504e0

void CustomLogic_CustomLogicGradientModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Blend");
    il2cpp_init_method_metadata(&"Fixed");
    DAT_05702f9e = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Blend",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Fixed",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Blend>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Blend_g____getter_2_0 (CustomLogic_CustomLogicGradientModeEnum_o* __i, const MethodInfo* method);
// 0x3e505d0

Il2CppObject *
CustomLogic_CustomLogicGradientModeEnum_Bindings__<__CreatePropertyBinding__Blend>g____getter_2_0
          (CustomLogic_CustomLogicGradientModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Fixed>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Fixed_g____getter_3_0 (CustomLogic_CustomLogicGradientModeEnum_o* __i, const MethodInfo* method);
// 0x3e505f0

Il2CppObject *
CustomLogic_CustomLogicGradientModeEnum_Bindings__<__CreatePropertyBinding__Fixed>g____getter_3_0
          (CustomLogic_CustomLogicGradientModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicGradientModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicGradientModeEnum___ctor (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x3e50050

void CustomLogic_CustomLogicGradientModeEnum___ctor
               (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f98 = '\x01';
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


// CustomLogic.CustomLogicGradientModeEnum$$get_Blend
// il2cpp: int32_t CustomLogic_CustomLogicGradientModeEnum__get_Blend (const MethodInfo* method);
// 0x3e500c0

int32_t CustomLogic_CustomLogicGradientModeEnum__get_Blend(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_Fixed
// il2cpp: int32_t CustomLogic_CustomLogicGradientModeEnum__get_Fixed (const MethodInfo* method);
// 0x3e500d0

int32_t CustomLogic_CustomLogicGradientModeEnum__get_Fixed(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicGradientModeEnum__get_ClassName (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x3e500e0

System_String_o *
CustomLogic_CustomLogicGradientModeEnum__get_ClassName
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702f99 == '\0') {
    il2cpp_init_method_metadata(&"GradientModeEnum");
    DAT_05702f99 = '\x01';
  }
  return "GradientModeEnum";
}


// CustomLogic.CustomLogicGradientModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_IsAbstract (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x3e50110

bool_conflict
CustomLogic_CustomLogicGradientModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicGradientModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_IsStatic (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x3e50120

bool_conflict
CustomLogic_CustomLogicGradientModeEnum__get_IsStatic
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicGradientModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x3e50130

bool_conflict
CustomLogic_CustomLogicGradientModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


