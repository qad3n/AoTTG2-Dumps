// Type: CustomLogic.BuiltinClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/BuiltinClassInstance.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.BuiltinClassInstance.<>c$$.cctor
// il2cpp: void CustomLogic_BuiltinClassInstance___c___cctor (const MethodInfo* method);
// 0x3f49140

void CustomLogic_BuiltinClassInstance_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703e20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e20 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.BuiltinClassInstance.<>c$$.ctor
// il2cpp: void CustomLogic_BuiltinClassInstance___c___ctor (CustomLogic_BuiltinClassInstance___c_o* __this, const MethodInfo* method);
// 0x3f491b0

void CustomLogic_BuiltinClassInstance_<>c___ctor
               (CustomLogic_BuiltinClassInstance___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.BuiltinClassInstance.<>c$$<.cctor>b__12_0
// il2cpp: Il2CppObject* CustomLogic_BuiltinClassInstance___c____cctor_b__12_0 (CustomLogic_BuiltinClassInstance___c_o* __this, CustomLogic_BuiltinClassInstance_o* __, System_Object_array* __, const MethodInfo* method);
// 0x3f491c0

Il2CppObject * CustomLogic_BuiltinClassInstance_<>c__<_cctor>b__12_0(void)

{
  return (Il2CppObject *)0x0;
}


// CustomLogic.BuiltinClassInstance$$.ctor
// il2cpp: void CustomLogic_BuiltinClassInstance___ctor (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x3f36c90

void CustomLogic_BuiltinClassInstance___ctor
               (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o **ppSVar1;
  ulong in_RAX;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_05703e1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"Init");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"IsCharacter");
    DAT_05703e1e = '\x01';
  }
  if (DAT_05703e58 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    DAT_05703e58 = '\x01';
  }
  *(undefined1 *)&(__this->fields).Enabled = 1;
  *(undefined1 *)&(__this->fields)._LookupBaseClassForVariables_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_Object);
  ppSVar1 = &(__this->fields).Variables;
  (__this->fields).Variables = (System_Collections_Generic_Dictionary_string__object__o *)pSVar2;
  il2cpp_runtime_glue(ppSVar1,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  pIVar3 = (Il2CppObject *)
           (*(__this->klass->vtable)._4_get_ClassName.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ClassName.method);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar2,"Type",pIVar3,MethodInfo_Void_set_Item);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar2,"Init",(Il2CppObject *)**(undefined8 **)(TypeInfo_BuiltinClassInstance + 0xb8),
                 MethodInfo_Void_set_Item);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
      uStack_28 = uStack_28 & 0xffffffffffffff;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_28 + 7);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar2,"IsCharacter",pIVar3,MethodInfo_Void_set_Item);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.BuiltinClassInstance$$get_LookupBaseClassForVariables
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_LookupBaseClassForVariables (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x3f48f20

bool_conflict
CustomLogic_BuiltinClassInstance__get_LookupBaseClassForVariables
          (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._8_get_InheritBaseMembers.methodPtr;
  bVar1 = (*vtable_dispatch)
                    (__this,(__this->klass->vtable)._8_get_InheritBaseMembers.method,in_RDX,
                     vtable_dispatch);
  return bVar1;
}


// CustomLogic.BuiltinClassInstance$$get_ClassName
// il2cpp: System_String_o* CustomLogic_BuiltinClassInstance__get_ClassName (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x3f48f40

System_String_o *
CustomLogic_BuiltinClassInstance__get_ClassName
          (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_String_get_ClassName);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.BuiltinClassInstance$$get_IsAbstract
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_IsAbstract (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x3f48f80

bool_conflict
CustomLogic_BuiltinClassInstance__get_IsAbstract
          (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsAbstract);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.BuiltinClassInstance$$get_IsStatic
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_IsStatic (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x3f48fc0

bool_conflict
CustomLogic_BuiltinClassInstance__get_IsStatic
          (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsStatic);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.BuiltinClassInstance$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_InheritBaseMembers (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x3f49000

bool_conflict
CustomLogic_BuiltinClassInstance__get_InheritBaseMembers
          (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Boolean_get_InheritBaseMembers);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.BuiltinClassInstance$$.cctor
// il2cpp: void CustomLogic_BuiltinClassInstance___cctor (const MethodInfo* method);
// 0x3f49040

void CustomLogic_BuiltinClassInstance___cctor(MethodInfo *method)

{
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this;
  
  if (DAT_05703e1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Func_BuiltinClassInstance__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object___cctor_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e1f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_BuiltinClassInstance__object____object);
  System_Func<object__object__object>___ctor();
  __this = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_BuiltinClassInstance);
  CustomLogic_CLMethodBinding<object>___ctor(__this,function,MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
  **(undefined8 **)(TypeInfo_BuiltinClassInstance + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_BuiltinClassInstance + 0xb8),__this);
  return;
}


