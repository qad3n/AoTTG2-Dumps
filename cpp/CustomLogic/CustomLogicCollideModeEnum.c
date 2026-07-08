// Type: CustomLogic.CustomLogicCollideModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollideModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicCollideModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollideModeEnum_o* CustomLogic_CustomLogicCollideModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e45780

CustomLogic_CustomLogicCollideModeEnum_o *
CustomLogic_CustomLogicCollideModeEnum_Factory__CreateInstance
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
  if (DAT_05702edb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCollideModeEnum);
    DAT_05702edb = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCollideModeEnum);
      if (DAT_05702ed6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702ed6 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCollideModeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCollideModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollideModeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollideModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e458a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollideModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702edc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Physical");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Region");
    DAT_05702edc = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Region",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702edd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Region_g____get);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideModeEnum__object);
      DAT_05702edd = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Physical",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702ede == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Physical_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideModeEnum__object);
      DAT_05702ede = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCollideModeEnum not found");
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
  if (DAT_05702edf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__None_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideModeEnum__object);
    DAT_05702edf = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideModeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Region
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region (const MethodInfo* method);
// 0x3e45a30

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this;
  
  if (DAT_05702edd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Region_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideModeEnum__object);
    DAT_05702edd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Physical
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical (const MethodInfo* method);
// 0x3e45ad0

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this;
  
  if (DAT_05702ede == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Physical_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideModeEnum__object);
    DAT_05702ede = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x3e45b70

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this;
  
  if (DAT_05702edf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__None_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideModeEnum__object);
    DAT_05702edf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollideModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e45c10

void CustomLogic_CustomLogicCollideModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702ee0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Physical");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Region");
    DAT_05702ee0 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Region",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Physical",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"None",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Region>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Region_g____getter_2_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x3e45d20

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings__<__CreatePropertyBinding__Region>g____getter_2_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703102 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    DAT_05703102 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Physical>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Physical_g____getter_3_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x3e45d90

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings__<__CreatePropertyBinding__Physical>g____getter_3_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703103 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    DAT_05703103 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__None_g____getter_4_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x3e45e00

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings__<__CreatePropertyBinding__None>g____getter_4_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703104 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    DAT_05703104 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCollideModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollideModeEnum___ctor (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x3e45560

void CustomLogic_CustomLogicCollideModeEnum___ctor
               (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ed6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702ed6 = '\x01';
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


// CustomLogic.CustomLogicCollideModeEnum$$get_Region
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_Region (const MethodInfo* method);
// 0x3e455d0

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_Region(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ed7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    DAT_05702ed7 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_Physical
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_Physical (const MethodInfo* method);
// 0x3e45640

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_Physical(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ed8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    DAT_05702ed8 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_None (const MethodInfo* method);
// 0x3e456b0

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_None(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ed9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    DAT_05702ed9 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_ClassName (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x3e45720

System_String_o *
CustomLogic_CustomLogicCollideModeEnum__get_ClassName
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702eda == '\0') {
    il2cpp_init_method_metadata(&"CollideModeEnum");
    DAT_05702eda = '\x01';
  }
  return "CollideModeEnum";
}


// CustomLogic.CustomLogicCollideModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_IsAbstract (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x3e45750

bool_conflict
CustomLogic_CustomLogicCollideModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_IsStatic (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x3e45760

bool_conflict
CustomLogic_CustomLogicCollideModeEnum__get_IsStatic
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x3e45770

bool_conflict
CustomLogic_CustomLogicCollideModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


