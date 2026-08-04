// Type: Gisketch.Aottg2UI.Game.AottgProfileDialogSelection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileDialogSelection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileDialogSelection$$Set
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileDialogSelection__Set (System_String_o* pickerId, System_String_o* key, const MethodInfo* method);
// 0x4522910

void Gisketch_Aottg2UI_Game_AottgProfileDialogSelection__Set
               (System_String_o *pickerId,System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  long lVar2;
  
  if (g_data_057aee3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_runtime_helper_023445d0(&"avatar-picker");
    il2cpp_runtime_helper_023445d0(&"banner-picker");
    g_data_057aee3d = '\x01';
  }
  bVar1 = System_String__op_Equality(pickerId,"avatar-picker",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(pickerId,"banner-picker",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    lVar2 = *(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8);
    *(System_String_o **)(lVar2 + 8) = key;
    lVar2 = lVar2 + 8;
  }
  else {
    **(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8) = key;
    lVar2 = *(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8);
  }
  il2cpp_runtime_helper_022b4080(lVar2,key);
  return;
}


