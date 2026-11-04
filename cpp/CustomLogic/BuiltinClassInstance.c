// Type: CustomLogic.BuiltinClassInstance
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/BuiltinClassInstance.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.BuiltinClassInstance.<>c$$.cctor
// il2cpp: void CustomLogic_BuiltinClassInstance___c___cctor (const MethodInfo* method);
// 0x1820b5060

void CustomLogic_BuiltinClassInstance___c___cctor(MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance___c_o *__this;
  
  if (Il2CppMethodInitialized_18434689d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance_c);
    Il2CppMethodInitialized_18434689d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_BuiltinClassInstance_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_BuiltinClassInstance_c->static_fields->__9,__this);
  return;
}


// CustomLogic.BuiltinClassInstance.<>c$$.ctor
// il2cpp: void CustomLogic_BuiltinClassInstance___c___ctor (CustomLogic_BuiltinClassInstance___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_BuiltinClassInstance___c___ctor(CustomLogic_BuiltinClassInstance___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.BuiltinClassInstance.<>c$$<.cctor>b__12_0
// il2cpp: Il2CppObject* CustomLogic_BuiltinClassInstance___c____cctor_b__12_0 (CustomLogic_BuiltinClassInstance___c_o* __this, CustomLogic_BuiltinClassInstance_o* __, System_Object_array* __, const MethodInfo* method);
// 0x18059b2e0

Il2CppObject*
CustomLogic_BuiltinClassInstance___c____cctor_b__12_0(CustomLogic_BuiltinClassInstance___c_o* __this, CustomLogic_BuiltinClassInstance_o* __, System_Object_array* __, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.BuiltinClassInstance$$.ctor
// il2cpp: void CustomLogic_BuiltinClassInstance___ctor (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x18209af90

void CustomLogic_BuiltinClassInstance___ctor(CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  System_String_o *value;
  Il2CppObject *value_00;
  undefined1 local_res8 [8];
  
  if (Il2CppMethodInitialized_18434689b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_18434689b = '\x01';
  }
  if (Il2CppMethodInitialized_1843468da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    Il2CppMethodInitialized_1843468da = '\x01';
  }
  (__this->fields)._Enabled_k__BackingField = true;
  (__this->fields)._LookupBaseClassForVariables_k__BackingField = true;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  (__this->fields).Variables = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Variables,__this_00);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  value = (*(__this->klass->vtable)._6_get_ClassName.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_ClassName.method);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)"Type",(Il2CppObject *)value,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)"Init",
                 (Il2CppObject *)TypeInfo_CustomLogic_BuiltinClassInstance->static_fields->Init,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item
                );
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
      local_res8[0] = 0;
      value_00 = il2cpp_value_box(g_data_184354de8,local_res8);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)"IsCharacter",value_00,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.BuiltinClassInstance$$get_LookupBaseClassForVariables
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_LookupBaseClassForVariables (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x18209b220

bool
CustomLogic_BuiltinClassInstance__get_LookupBaseClassForVariables(CustomLogic_BuiltinClassInstance_o* __this, MethodInfo* method)

{
  bool bVar1;
  UnityEngine_Tilemaps_ITilemap_o *in_R8;
  UnityEngine_GameObject_o *in_R9;
  MethodInfo *in_stack_00000028;
  
  bVar1 = (*(__this->klass->vtable)._10_IsAdvancedTextEnabledForElement.methodPtr)
                    (__this,(UnityEngine_Vector3Int_o *)
                            (__this->klass->vtable)._10_IsAdvancedTextEnabledForElement.method,in_R8,in_R9,
                     in_stack_00000028);
  return bVar1;
}


// CustomLogic.BuiltinClassInstance$$get_ClassName
// il2cpp: System_String_o* CustomLogic_BuiltinClassInstance__get_ClassName (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x18209b120

System_String_o *
CustomLogic_BuiltinClassInstance__get_ClassName(CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_ClassName);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.BuiltinClassInstance$$get_IsAbstract
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_IsAbstract (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x18209b1a0

bool CustomLogic_BuiltinClassInstance__get_IsAbstract
               (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_IsAbstract);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.BuiltinClassInstance$$get_IsStatic
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_IsStatic (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x18209b1e0

bool CustomLogic_BuiltinClassInstance__get_IsStatic
               (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_IsStatic);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.BuiltinClassInstance$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_InheritBaseMembers (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x18209b160

bool CustomLogic_BuiltinClassInstance__get_InheritBaseMembers
               (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_BuiltinClassInstance_get_InheritBaseMembers);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.BuiltinClassInstance$$.cctor
// il2cpp: void CustomLogic_BuiltinClassInstance___cctor (const MethodInfo* method);
// 0x18209ae80

void CustomLogic_BuiltinClassInstance___cctor(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434689c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_BuiltinClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_BuiltinClassInstance_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_c_cctor_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance_c);
    Il2CppMethodInitialized_18434689c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance_c);
  }
  object = (Il2CppObject *)TypeInfo_CustomLogic_BuiltinClassInstance_c->static_fields->__9;
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_BuiltinClassInstance_object_array_object);
  System_Func_object__object__object____ctor
            (__this,object,(intptr_t)MethodInfo_CustomLogic_BuiltinClassInstance_c_cctor_b__12_0,
             (MethodInfo *)0x0);
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_BuiltinClassInstance);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_BuiltinClassInstance_ctor);
  TypeInfo_CustomLogic_BuiltinClassInstance->static_fields->Init =
       (CustomLogic_CLMethodBinding_BuiltinClassInstance__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_BuiltinClassInstance->static_fields->Init,__this_00);
  return;
}


