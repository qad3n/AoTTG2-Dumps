// Type: CustomLogic.BuiltinClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/BuiltinClassInstance.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.BuiltinClassInstance.<>c$$.cctor
// il2cpp: void CustomLogic_BuiltinClassInstance___c___cctor (const MethodInfo* method);
// 0x4254660

void CustomLogic_BuiltinClassInstance___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adb8b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb8b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.BuiltinClassInstance.<>c$$.ctor
// il2cpp: void CustomLogic_BuiltinClassInstance___c___ctor (CustomLogic_BuiltinClassInstance___c_o* __this, const MethodInfo* method);
// 0x42546d0

void CustomLogic_BuiltinClassInstance___c___ctor
               (CustomLogic_BuiltinClassInstance___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.BuiltinClassInstance.<>c$$<.cctor>b__12_0
// il2cpp: Il2CppObject* CustomLogic_BuiltinClassInstance___c____cctor_b__12_0 (CustomLogic_BuiltinClassInstance___c_o* __this, CustomLogic_BuiltinClassInstance_o* __, System_Object_array* __, const MethodInfo* method);
// 0x42546e0

Il2CppObject * CustomLogic_BuiltinClassInstance___c____cctor_b__12_0(void)

{
  return (Il2CppObject *)0x0;
}


// CustomLogic.BuiltinClassInstance$$.ctor
// il2cpp: void CustomLogic_BuiltinClassInstance___ctor (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x4247220

void CustomLogic_BuiltinClassInstance___ctor(CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o **ppSVar1;
  ulong in_RAX;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (g_data_057adb89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"Init");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057adb89 = '\x01';
  }
  if (g_data_057adbc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    g_data_057adbc3 = '\x01';
  }
  *(undefined1 *)&(__this->fields).Enabled = 1;
  *(undefined1 *)&(__this->fields)._LookupBaseClassForVariables_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_Object);
  ppSVar1 = &(__this->fields).Variables;
  (__this->fields).Variables = (System_Collections_Generic_Dictionary_string__object__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(ppSVar1,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  pIVar3 = (Il2CppObject *)
           (*(__this->klass->vtable)._4_get_ClassName.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ClassName.method);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item(pSVar2,"Type",pIVar3,MethodInfo_Void_set_Item);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,"Init",(Il2CppObject *)**(undefined8 **)(TypeInfo_BuiltinClassInstance + 0xb8),MethodInfo_Void_set_Item);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
      uStack_28 = uStack_28 & 0xffffffffffffff;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,"IsCharacter",pIVar3,MethodInfo_Void_set_Item);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.BuiltinClassInstance$$get_LookupBaseClassForVariables
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_LookupBaseClassForVariables (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x4254440

bool_conflict
CustomLogic_BuiltinClassInstance__get_LookupBaseClassForVariables
          (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._8_get_InheritBaseMembers.methodPtr;
  bVar1 = (*vtableDispatch)
                    (__this,(__this->klass->vtable)._8_get_InheritBaseMembers.method,in_RDX,
                     vtableDispatch);
  return bVar1;
}


// CustomLogic.BuiltinClassInstance$$get_ClassName
// il2cpp: System_String_o* CustomLogic_BuiltinClassInstance__get_ClassName (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x4254460

System_String_o *
CustomLogic_BuiltinClassInstance__get_ClassName(CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *pSVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this_00;
  System_String_o *pSVar3;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar2 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(pSVar2,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_ClassName);
  il2cpp_runtime_helper_022b2b10(pSVar2);
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar2 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(pSVar2,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsAbstract);
  il2cpp_runtime_helper_022b2b10(pSVar2);
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar2 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(pSVar2,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsStatic);
  il2cpp_runtime_helper_022b2b10(pSVar2);
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar2 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(pSVar2,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_InheritBaseMembers);
  il2cpp_runtime_helper_022b2b10(pSVar2,uVar1);
  if (g_data_057adb8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_BuiltinClassInstance_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_cctor_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb8a = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_BuiltinClassInstance_object_object);
  System_Func_object__object__object____ctor();
  __this_00 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_BuiltinClassInstance);
  CustomLogic_CLMethodBinding_object____ctor(__this_00,function,MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
  **(undefined8 **)(TypeInfo_BuiltinClassInstance + 0xb8) = __this_00;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BuiltinClassInstance + 0xb8),__this_00);
  return pSVar3;
}


// CustomLogic.BuiltinClassInstance$$get_IsAbstract
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_IsAbstract (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x42544a0

bool_conflict
CustomLogic_BuiltinClassInstance__get_IsAbstract
          (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 uVar2;
  System_NotImplementedException_o *pSVar3;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this_00;
  
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar3 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  System_NotImplementedException___ctor(pSVar3,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsAbstract);
  il2cpp_runtime_helper_022b2b10(pSVar3);
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar3 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  System_NotImplementedException___ctor(pSVar3,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsStatic);
  il2cpp_runtime_helper_022b2b10(pSVar3);
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar3 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  System_NotImplementedException___ctor(pSVar3,(MethodInfo *)0x0);
  uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_InheritBaseMembers);
  il2cpp_runtime_helper_022b2b10(pSVar3,uVar2);
  if (g_data_057adb8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_BuiltinClassInstance_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_cctor_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb8a = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_BuiltinClassInstance_object_object);
  System_Func_object__object__object____ctor();
  __this_00 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_BuiltinClassInstance);
  CustomLogic_CLMethodBinding_object____ctor(__this_00,function,MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
  **(undefined8 **)(TypeInfo_BuiltinClassInstance + 0xb8) = __this_00;
  bVar1 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BuiltinClassInstance + 0xb8),__this_00);
  return bVar1;
}


// CustomLogic.BuiltinClassInstance$$get_IsStatic
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_IsStatic (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x42544e0

bool_conflict
CustomLogic_BuiltinClassInstance__get_IsStatic(CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 uVar2;
  System_NotImplementedException_o *pSVar3;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this_00;
  
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar3 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  System_NotImplementedException___ctor(pSVar3,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsStatic);
  il2cpp_runtime_helper_022b2b10(pSVar3);
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar3 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  System_NotImplementedException___ctor(pSVar3,(MethodInfo *)0x0);
  uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_InheritBaseMembers);
  il2cpp_runtime_helper_022b2b10(pSVar3,uVar2);
  if (g_data_057adb8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_BuiltinClassInstance_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_cctor_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb8a = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_BuiltinClassInstance_object_object);
  System_Func_object__object__object____ctor();
  __this_00 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_BuiltinClassInstance);
  CustomLogic_CLMethodBinding_object____ctor(__this_00,function,MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
  **(undefined8 **)(TypeInfo_BuiltinClassInstance + 0xb8) = __this_00;
  bVar1 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BuiltinClassInstance + 0xb8),__this_00);
  return bVar1;
}


// CustomLogic.BuiltinClassInstance$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_InheritBaseMembers (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x4254520

bool_conflict
CustomLogic_BuiltinClassInstance__get_InheritBaseMembers
          (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 uVar2;
  System_NotImplementedException_o *__this_00;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this_01;
  
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_InheritBaseMembers);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
  if (g_data_057adb8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_BuiltinClassInstance_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_cctor_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb8a = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_BuiltinClassInstance_object_object);
  System_Func_object__object__object____ctor();
  __this_01 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_BuiltinClassInstance);
  CustomLogic_CLMethodBinding_object____ctor(__this_01,function,MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
  **(undefined8 **)(TypeInfo_BuiltinClassInstance + 0xb8) = __this_01;
  bVar1 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BuiltinClassInstance + 0xb8),__this_01);
  return bVar1;
}


// CustomLogic.BuiltinClassInstance$$.cctor
// il2cpp: void CustomLogic_BuiltinClassInstance___cctor (const MethodInfo* method);
// 0x4254560

void CustomLogic_BuiltinClassInstance___cctor(MethodInfo *method)

{
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this;
  
  if (g_data_057adb8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_BuiltinClassInstance_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_cctor_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb8a = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_BuiltinClassInstance_object_object);
  System_Func_object__object__object____ctor();
  __this = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_BuiltinClassInstance);
  CustomLogic_CLMethodBinding_object____ctor(__this,function,MethodInfo_CLMethodBinding_1_BuiltinClassInstance);
  **(undefined8 **)(TypeInfo_BuiltinClassInstance + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BuiltinClassInstance + 0xb8),__this);
  return;
}


