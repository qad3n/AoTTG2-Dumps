// Type: Gisketch.Aottg2UI.Game.AottgProfileDialogSelection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileDialogSelection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileDialogSelection$$Set
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileDialogSelection__Set (System_String_o* pickerId, System_String_o* key, const MethodInfo* method);
// 0x181e15b70

void Gisketch_Aottg2UI_Game_AottgProfileDialogSelection__Set
               (System_String_o *pickerId,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection);
    il2cpp_codegen_initialize_runtime_metadata(&"avatar-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"banner-picker");
    Il2CppMethodInitialized_184344c87 = '\x01';
  }
  bVar1 = System_String__op_Equality(pickerId,"avatar-picker",(MethodInfo *)0x0);
  if (bVar1) {
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->AvatarKey = key;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->AvatarKey,key);
  }
  else {
    bVar1 = System_String__op_Equality(pickerId,"banner-picker",(MethodInfo *)0x0);
    if (bVar1) {
      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->BannerKey = key;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->BannerKey,key);
      return;
    }
  }
  return;
}


