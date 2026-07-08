// Type: Gisketch.Aottg2UI.Styling.GisketchIconLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchIconLoader.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchIconLoader$$Load
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load (System_String_o* icon, const MethodInfo* method);
// 0x3acba90

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load(System_String_o *icon,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *path;
  UnityEngine_Sprite_o *pUVar2;
  MethodInfo *method_00;
  
  if (DAT_05701338 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Sprite_Load_Sprite);
    DAT_05701338 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (UnityEngine_Sprite_o *)0x0;
  }
  path = Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath(icon,method_00);
  pUVar2 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load<object>(path,MethodInfo_Sprite_Load_Sprite);
  return pUVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchIconLoader$$ResolvePath
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath (System_String_o* icon, const MethodInfo* method);
// 0x3acbae0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath(System_String_o *icon,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if (DAT_05701339 == '\0') {
    il2cpp_init_method_metadata(&"Icons/kenney-icons/");
    il2cpp_init_method_metadata(&"UI/");
    il2cpp_init_method_metadata(&"Icons/");
    DAT_05701339 = '\x01';
  }
  if (icon == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = System_String__StartsWith(icon,"Icons/",(MethodInfo *)0x0);
  if (((char)bVar1 == '\0') &&
     (bVar1 = System_String__StartsWith(icon,"UI/",(MethodInfo *)0x0), (char)bVar1 == '\0'))
  {
    iVar2 = System_String__IndexOf(icon,0x2f,(MethodInfo *)0x0);
    pSVar3 = "Icons/kenney-icons/";
    if (-1 < iVar2) {
      pSVar3 = "Icons/";
    }
    pSVar3 = System_String__Concat(pSVar3,icon,(MethodInfo *)0x0);
    return pSVar3;
  }
  return icon;
}


