// Type: Gisketch.Aottg2UI.Styling.GisketchIconLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchIconLoader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchIconLoader$$Load
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load (System_String_o* icon, const MethodInfo* method);
// 0x5330c50

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load(System_String_o *icon,MethodInfo *method)

{
  bool bVar1;
  System_String_o *path;
  UnityEngine_Sprite_o *pUVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542868 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Sprite);
    Il2CppMethodInitialized_07542868 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if (bVar1) {
    return (UnityEngine_Sprite_o *)0x0;
  }
  path = Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath(icon,method_00);
  pUVar2 = UnityEngine_Resources__Load_object_
                     (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
  return pUVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchIconLoader$$ResolvePath
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath (System_String_o* icon, const MethodInfo* method);
// 0x5330ca0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath(System_String_o *icon,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07542869 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/");
    Il2CppMethodInitialized_07542869 = '\x01';
  }
  if (icon == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  ppSVar4 = &"Icons/";
  bVar1 = System_String__StartsWith(icon,"Icons/",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__StartsWith(icon,"UI/",(MethodInfo *)0x0);
    if (!bVar1) {
      iVar2 = System_String__IndexOf(icon,0x2f,(MethodInfo *)0x0);
      if (iVar2 < 0) {
        ppSVar4 = &"Icons/kenney-icons/";
      }
      pSVar3 = System_String__Concat_52f0320(*ppSVar4,icon,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return icon;
}


