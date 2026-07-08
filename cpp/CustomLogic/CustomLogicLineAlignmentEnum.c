// Type: CustomLogic.CustomLogicLineAlignmentEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineAlignmentEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicLineAlignmentEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineAlignmentEnum_o* CustomLogic_CustomLogicLineAlignmentEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e7cd70

CustomLogic_CustomLogicLineAlignmentEnum_o *
CustomLogic_CustomLogicLineAlignmentEnum_Factory__CreateInstance
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
  if (DAT_057033a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineAlignmentEnum);
    DAT_057033a9 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLineAlignmentEnum);
      if (DAT_057033a7 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057033a7 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicLineAlignmentEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLineAlignmentEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLineAlignmentEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e7ce90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057033aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"TransformZ");
    il2cpp_init_method_metadata(&"Local");
    il2cpp_init_method_metadata(&"View");
    DAT_057033aa = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"View",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033ab == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__View_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
      DAT_057033ab = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Local",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033ac == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Local_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
      DAT_057033ac = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"TransformZ",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLineAlignmentEnum not found");
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
  if (DAT_057033ad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TransformZ_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
    DAT_057033ad = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__View
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View (const MethodInfo* method);
// 0x3e7d020

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this;
  
  if (DAT_057033ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__View_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
    DAT_057033ab = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return __this;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__Local
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local (const MethodInfo* method);
// 0x3e7d0c0

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this;
  
  if (DAT_057033ac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Local_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
    DAT_057033ac = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return __this;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__TransformZ
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ (const MethodInfo* method);
// 0x3e7d160

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this;
  
  if (DAT_057033ad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TransformZ_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
    DAT_057033ad = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineAlignmentEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return __this;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineAlignmentEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e7d200

void CustomLogic_CustomLogicLineAlignmentEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057033ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"TransformZ");
    il2cpp_init_method_metadata(&"Local");
    il2cpp_init_method_metadata(&"View");
    DAT_057033ae = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"View",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Local",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TransformZ",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__View>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__View_g____getter_2_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x3e7d310

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings__<__CreatePropertyBinding__View>g____getter_2_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__Local>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__Local_g____getter_3_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x3e7d330

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings__<__CreatePropertyBinding__Local>g____getter_3_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__TransformZ>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__TransformZ_g____getter_4_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x3e7d350

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings__<__CreatePropertyBinding__TransformZ>g____getter_4_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineAlignmentEnum___ctor (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x3e7cc70

void CustomLogic_CustomLogicLineAlignmentEnum___ctor
               (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057033a7 = '\x01';
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


// CustomLogic.CustomLogicLineAlignmentEnum$$get_View
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_View (const MethodInfo* method);
// 0x3e7cce0

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_View(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_Local
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_Local (const MethodInfo* method);
// 0x3e7ccf0

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_Local(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_TransformZ
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_TransformZ (const MethodInfo* method);
// 0x3e7cd00

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_TransformZ(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineAlignmentEnum__get_ClassName (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x3e7cd10

System_String_o *
CustomLogic_CustomLogicLineAlignmentEnum__get_ClassName
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  if (DAT_057033a8 == '\0') {
    il2cpp_init_method_metadata(&"LineAlignmentEnum");
    DAT_057033a8 = '\x01';
  }
  return "LineAlignmentEnum";
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsAbstract (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x3e7cd40

bool_conflict
CustomLogic_CustomLogicLineAlignmentEnum__get_IsAbstract
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsStatic (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x3e7cd50

bool_conflict
CustomLogic_CustomLogicLineAlignmentEnum__get_IsStatic
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x3e7cd60

bool_conflict
CustomLogic_CustomLogicLineAlignmentEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


