// Type: SimpleJSONFixed.JSON
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/SimpleJSONFixed/JSON.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSON$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSON__Parse (System_String_o* aJSON, const MethodInfo* method);
// 0x586b090

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSON__Parse(System_String_o *aJSON,MethodInfo *method)

{
  uint32_t uVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07545147 = '\x01';
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    pSVar2 = SimpleJSONFixed_JSONNode__Parse(aJSON,method);
    return pSVar2;
  }
  pSVar2 = SimpleJSONFixed_JSONNode__Parse(aJSON,method);
  return pSVar2;
}


