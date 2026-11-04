// Type: Gisketch.Aottg2UI.Styling.GisketchIconLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchIconLoader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchIconLoader$$Load
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load (System_String_o* icon, const MethodInfo* method);
// 0x181885170

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load(System_String_o *icon,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Sprite_o *pUVar3;
  System_String_o *str0;
  
  if (Il2CppMethodInitialized_184341efe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Sprite);
    Il2CppMethodInitialized_184341efe = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if (bVar1) {
    return (UnityEngine_Sprite_o *)0x0;
  }
  if (Il2CppMethodInitialized_184341eff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/");
    Il2CppMethodInitialized_184341eff = '\x01';
  }
  if (icon != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(icon,"Icons/",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__StartsWith(icon,"UI/",(MethodInfo *)0x0);
      if (!bVar1) {
        iVar2 = System_String__IndexOf(icon,0x2f,(MethodInfo *)0x0);
        str0 = "Icons/";
        if (iVar2 < 0) {
          str0 = "Icons/kenney-icons/";
        }
        icon = System_String__Concat_1969e50(str0,icon,(MethodInfo *)0x0);
      }
    }
    pUVar3 = UnityEngine_Resources__Load_object_
                       (icon,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
    return pUVar3;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchIconLoader$$ResolvePath
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath (System_String_o* icon, const MethodInfo* method);
// 0x181885260

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath(System_String_o *icon,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184341eff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/");
    Il2CppMethodInitialized_184341eff = '\x01';
  }
  if (icon != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(icon,"Icons/",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__StartsWith(icon,"UI/",(MethodInfo *)0x0);
      if (!bVar1) {
        iVar2 = System_String__IndexOf(icon,0x2f,(MethodInfo *)0x0);
        if (-1 < iVar2) {
          pSVar3 = System_String__Concat_1969e50("Icons/",icon,(MethodInfo *)0x0);
          return pSVar3;
        }
        pSVar3 = System_String__Concat_1969e50("Icons/kenney-icons/",icon,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
    return icon;
  }
  ThrowNullReferenceException();
}


