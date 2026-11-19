// Type: UI.SetActionIcons
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/SetActionIcons.cs
// Prior real C# source: none
// --------------------------------

// UI.SetActionIcons$$For
// il2cpp: System_String_o* UI_SetActionIcons__For (System_String_o* operation, const MethodInfo* method);
// 0x5dabbb0

System_String_o * UI_SetActionIcons__For(System_String_o *operation,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_075480e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"trashcan");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"pencil");
    il2cpp_codegen_initialize_runtime_metadata(&"copy");
    il2cpp_codegen_initialize_runtime_metadata(&"export");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"plus");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"import");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_075480e8 = '\x01';
  }
  bVar1 = System_String__op_Equality(operation,"Create",(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = &"plus";
  }
  else {
    bVar1 = System_String__op_Equality(operation,"Delete",(MethodInfo *)0x0);
    if (bVar1) {
      ppSVar2 = &"trashcan";
    }
    else {
      bVar1 = System_String__op_Equality(operation,"Rename",(MethodInfo *)0x0);
      if (bVar1) {
        ppSVar2 = &"pencil";
      }
      else {
        bVar1 = System_String__op_Equality(operation,"Copy",(MethodInfo *)0x0);
        if (bVar1) {
          ppSVar2 = &"copy";
        }
        else {
          bVar1 = System_String__op_Equality(operation,"Import",(MethodInfo *)0x0);
          if (bVar1) {
            ppSVar2 = &"import";
          }
          else {
            bVar1 = System_String__op_Equality(operation,"Export",(MethodInfo *)0x0);
            if (!bVar1) {
              return (System_String_o *)0x0;
            }
            ppSVar2 = &"export";
          }
        }
      }
    }
  }
  return *ppSVar2;
}


