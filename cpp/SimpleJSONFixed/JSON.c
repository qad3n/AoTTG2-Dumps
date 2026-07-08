// Type: SimpleJSONFixed.JSON
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSON.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SimpleJSON.cs  [CHANGED since prior version]
// --------------------------------

// SimpleJSONFixed.JSON$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSON__Parse (System_String_o* aJSON, const MethodInfo* method);
// 0x3d8be40

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSON__Parse(System_String_o *aJSON,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (DAT_05702705 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05702705 = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = SimpleJSONFixed_JSONNode__Parse(aJSON,method);
    return pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = SimpleJSONFixed_JSONNode__Parse(aJSON,method);
  return pSVar2;
}


