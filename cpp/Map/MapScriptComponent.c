// Type: Map.MapScriptComponent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Map/MapScriptComponent.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptComponent.cs
// --------------------------------

// Map.MapScriptComponent$$SanitizeParameter
// il2cpp: System_String_o* Map_MapScriptComponent__SanitizeParameter (System_String_o* value, const MethodInfo* method);
// 0x59a3bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a3be3: jmp 0x59a3c81

System_String_o * Map_MapScriptComponent__SanitizeParameter(System_String_o *value,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  System_Char_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_07545a92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    Il2CppMethodInitialized_07545a92 = '\x01';
    uVar1 = (TypeInfo_Map_MapScriptComponent->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapScriptComponent->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
    pSVar3 = TypeInfo_Map_MapScriptComponent->static_fields->ReservedParameterChars;
  }
  else {
    pSVar3 = *(System_Char_array **)((Il2CppClass *)TypeInfo_Map_MapScriptComponent)->static_fields;
  }
  if (pSVar3 == (System_Char_array *)0x0) {
label_059a3c81:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar3->max_length) {
    uVar4 = pSVar3->max_length & 0xffffffff;
    uVar5 = 0;
    do {
      if (uVar4 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      if (value == (System_String_o *)0x0) goto label_059a3c81;
      value = System_String__Replace(value,pSVar3->m_Items[uVar5],0x20,(MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
      uVar2 = (uint)pSVar3->max_length;
      uVar4 = (ulong)uVar2;
    } while ((long)uVar5 < (long)(int)uVar2);
  }
  return value;
}


// Map.MapScriptComponent$$.ctor
// il2cpp: void Map_MapScriptComponent___ctor (Map_MapScriptComponent_o* __this, const MethodInfo* method);
// 0x59a3c90

void Map_MapScriptComponent___ctor(Map_MapScriptComponent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07545a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07545a93 = '\x01';
  }
  (__this->fields).ComponentName = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).ComponentName);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Parameters = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters);
  Utility_BaseCSVRowItem___ctor((Utility_BaseCSVRowItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapScriptComponent$$.cctor
// il2cpp: void Map_MapScriptComponent___cctor (const MethodInfo* method);
// 0x59a3d30

void Map_MapScriptComponent___cctor(MethodInfo *method)

{
  System_Char_array *array;
  
  if (Il2CppMethodInitialized_07545a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_C333A006A69EDD08AE61CE52D2CF448CD3FCD80B3830D47F0B6C4E846FE7B572
              );
    Il2CppMethodInitialized_07545a94 = '\x01';
  }
  array = (System_Char_array *)SZArrayNew(TypeInfo_char_array,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)array,
             FieldRva_PrivateImplementationDetails_C333A006A69EDD08AE61CE52D2CF448CD3FCD80B3830D47F0B6C4E846FE7B572
             ,(MethodInfo *)0x0);
  TypeInfo_Map_MapScriptComponent->static_fields->ReservedParameterChars = array;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapScriptComponent->static_fields->ReservedParameterChars);
  return;
}


