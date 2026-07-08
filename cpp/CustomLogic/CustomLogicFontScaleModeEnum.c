// Type: CustomLogic.CustomLogicFontScaleModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFontScaleModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicFontScaleModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFontScaleModeEnum_o* CustomLogic_CustomLogicFontScaleModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e4eb00

CustomLogic_CustomLogicFontScaleModeEnum_o *
CustomLogic_CustomLogicFontScaleModeEnum_Factory__CreateInstance
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
  if (DAT_05702f81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicFontScaleModeEnum);
    DAT_05702f81 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicFontScaleModeEnum);
      if (DAT_05702f7f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f7f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicFontScaleModeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicFontScaleModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicFontScaleModeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFontScaleModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e4ec20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702f82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Width");
    il2cpp_init_method_metadata(&"Height");
    DAT_05702f82 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Width",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicFontScaleModeEnum not found");
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
    if (DAT_05702f84 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Width_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontScaleModeEnum__object);
      DAT_05702f84 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontScaleModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702f83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Height_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontScaleModeEnum__object);
    DAT_05702f83 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontScaleModeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o* CustomLogic_CustomLogicFontScaleModeEnum_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x3e4ed60

CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings____CreatePropertyBinding__Height
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *__this;
  
  if (DAT_05702f83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Height_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontScaleModeEnum__object);
    DAT_05702f83 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontScaleModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$__CreatePropertyBinding__Width
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o* CustomLogic_CustomLogicFontScaleModeEnum_Bindings____CreatePropertyBinding__Width (const MethodInfo* method);
// 0x3e4ee00

CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings____CreatePropertyBinding__Width
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *__this;
  
  if (DAT_05702f84 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Width_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicFontScaleModeEnum__object);
    DAT_05702f84 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicFontScaleModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFontScaleModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e4eea0

void CustomLogic_CustomLogicFontScaleModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Width");
    il2cpp_init_method_metadata(&"Height");
    DAT_05702f85 = '\x01';
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


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$<__CreatePropertyBinding__Height>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontScaleModeEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0 (CustomLogic_CustomLogicFontScaleModeEnum_o* __i, const MethodInfo* method);
// 0x3e4ef90

Il2CppObject *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings__<__CreatePropertyBinding__Height>g____getter_2_0
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$<__CreatePropertyBinding__Width>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontScaleModeEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0 (CustomLogic_CustomLogicFontScaleModeEnum_o* __i, const MethodInfo* method);
// 0x3e4efb0

Il2CppObject *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings__<__CreatePropertyBinding__Width>g____getter_3_0
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontScaleModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFontScaleModeEnum___ctor (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e4ea10

void CustomLogic_CustomLogicFontScaleModeEnum___ctor
               (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f7f = '\x01';
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


// CustomLogic.CustomLogicFontScaleModeEnum$$get_Height
// il2cpp: int32_t CustomLogic_CustomLogicFontScaleModeEnum__get_Height (const MethodInfo* method);
// 0x3e4ea80

int32_t CustomLogic_CustomLogicFontScaleModeEnum__get_Height(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_Width
// il2cpp: int32_t CustomLogic_CustomLogicFontScaleModeEnum__get_Width (const MethodInfo* method);
// 0x3e4ea90

int32_t CustomLogic_CustomLogicFontScaleModeEnum__get_Width(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFontScaleModeEnum__get_ClassName (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e4eaa0

System_String_o *
CustomLogic_CustomLogicFontScaleModeEnum__get_ClassName
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702f80 == '\0') {
    il2cpp_init_method_metadata(&"FontScaleModeEnum");
    DAT_05702f80 = '\x01';
  }
  return "FontScaleModeEnum";
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFontScaleModeEnum__get_IsAbstract (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e4ead0

bool_conflict
CustomLogic_CustomLogicFontScaleModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFontScaleModeEnum__get_IsStatic (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e4eae0

bool_conflict
CustomLogic_CustomLogicFontScaleModeEnum__get_IsStatic
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFontScaleModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e4eaf0

bool_conflict
CustomLogic_CustomLogicFontScaleModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


