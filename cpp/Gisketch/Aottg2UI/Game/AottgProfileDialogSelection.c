// Type: Gisketch.Aottg2UI.Game.AottgProfileDialogSelection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileDialogSelection.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileDialogSelection$$Set
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileDialogSelection__Set (System_String_o* pickerId, System_String_o* key, const MethodInfo* method);
// 0x41ed9c0

void Gisketch_Aottg2UI_Game_AottgProfileDialogSelection__Set
               (System_String_o *pickerId,System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  long lVar2;
  
  if (DAT_05704f41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_init_method_metadata(&"avatar-picker");
    il2cpp_init_method_metadata(&"banner-picker");
    DAT_05704f41 = '\x01';
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
  il2cpp_runtime_glue(lVar2,key);
  return;
}


