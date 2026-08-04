// Type: Gisketch.Aottg2UI.Actions.GisketchInputCapture
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchInputCapture.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$get_IsActive
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_IsActive (const MethodInfo* method);
// 0x3b978a0

bool_conflict Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_IsActive(MethodInfo *method)

{
  if (g_data_057a9efb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchInputCapture);
    g_data_057a9efb = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_GisketchInputCapture + 0xb8) >> 8),
                  *(int *)(*(long *)(TypeInfo_GisketchInputCapture + 0xb8) + 4) != 0);
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$Begin
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin (const MethodInfo* method);
// 0x3b978e0

int32_t Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin(MethodInfo *method)

{
  int *piVar1;
  int iVar2;
  
  if (g_data_057a9efc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchInputCapture);
    g_data_057a9efc = '\x01';
  }
  piVar1 = *(int **)(TypeInfo_GisketchInputCapture + 0xb8);
  iVar2 = *piVar1 + 1;
  *piVar1 = iVar2;
  piVar1[1] = iVar2;
  return iVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$End
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture__End (int32_t token, const MethodInfo* method);
// 0x3b97920

void Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(int32_t token,MethodInfo *method)

{
  if (g_data_057a9efd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchInputCapture);
    g_data_057a9efd = '\x01';
  }
  if ((token != 0) && (*(int *)(*(long *)(TypeInfo_GisketchInputCapture + 0xb8) + 4) == token)) {
    *(undefined4 *)(*(long *)(TypeInfo_GisketchInputCapture + 0xb8) + 4) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$ForceEnd
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd (const MethodInfo* method);
// 0x3b97970

void Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd(MethodInfo *method)

{
  if (g_data_057a9efe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchInputCapture);
    g_data_057a9efe = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_GisketchInputCapture + 0xb8) + 4) = 0;
  return;
}


