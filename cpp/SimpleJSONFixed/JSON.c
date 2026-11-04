// Type: SimpleJSONFixed.JSON
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSON.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSON$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSON__Parse (System_String_o* aJSON, const MethodInfo* method);
// 0x181dc70f0

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSON__Parse(System_String_o *aJSON,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843449eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449eb = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar1 = SimpleJSONFixed_JSONNode__Parse(aJSON,(MethodInfo *)0x0);
  return pSVar1;
}


