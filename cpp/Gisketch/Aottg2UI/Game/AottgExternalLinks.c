// Type: Gisketch.Aottg2UI.Game.AottgExternalLinks
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinks.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinks$$TryShow
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow (System_String_o* url, const MethodInfo* method);
// 0x5e86690

bool Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow(System_String_o *url,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(url,method);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show (System_String_o* url, const MethodInfo* method);
// 0x5e866a0

void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show(System_String_o *url,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754885c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"No AoTTG external link dialog host is available.");
    Il2CppMethodInitialized_0754885c = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(url,method);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)"No AoTTG external link dialog host is available.",(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* url, const MethodInfo* method);
// 0x5e86720

void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show_5d86720
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *url,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754885c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"No AoTTG external link dialog host is available.");
    Il2CppMethodInitialized_0754885c = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(url,method);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)"No AoTTG external link dialog host is available.",(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


