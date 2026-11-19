// Type: Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgSearchPaletteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_Title (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x53677d0

System_String_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_Title
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075429f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Search Palette");
    Il2CppMethodInitialized_075429f2 = '\x01';
  }
  return "AoTTG Search Palette";
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_TitleIcon (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x5367800

System_String_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075429f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    Il2CppMethodInitialized_075429f3 = '\x01';
  }
  return "zoom";
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_RootLayout (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x5367830

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (Il2CppMethodInitialized_075429f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075429f4 = '\x01';
  }
  if (Il2CppMethodInitialized_07542a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_07542a24 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
    if (Il2CppMethodInitialized_07542a23 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542a23 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = 960.0;
      (__this_01->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,180.0
                          ,0.0,1.0,in_stack_ffffffffffffffe0);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__BuildBody (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x53679c0

void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__BuildBody
               (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (Il2CppMethodInitialized_075429f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Search current screen");
    il2cpp_codegen_initialize_runtime_metadata(&"aottg-search-palette");
    Il2CppMethodInitialized_075429f5 = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__SearchPalette
            (body,"aottg-search-palette","Search current screen",(System_String_o *)0x0,false,
             (System_String_array *)0x0,in_stack_ffffffffffffffe8);
  return;
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog___ctor (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x5367b50

void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog___ctor
               (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


