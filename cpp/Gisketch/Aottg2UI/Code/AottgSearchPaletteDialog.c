// Type: Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgSearchPaletteDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_Title (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x3af60b0

System_String_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_Title
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (DAT_05701452 == '\0') {
    il2cpp_init_method_metadata(&"AoTTG Search Palette");
    DAT_05701452 = '\x01';
  }
  return "AoTTG Search Palette";
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_TitleIcon (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x3af60e0

System_String_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (DAT_05701453 == '\0') {
    il2cpp_init_method_metadata(&"zoom");
    DAT_05701453 = '\x01';
  }
  return "zoom";
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_RootLayout (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x3af6110

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05701454 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    DAT_05701454 = '\x01';
  }
  if (DAT_0570147d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"percent");
    DAT_0570147d = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    il2cpp_runtime_glue(&(__this_00->fields).unit);
    if (DAT_0570147c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570147c = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = 960.0;
      (__this_01->fields).unit = "point";
      il2cpp_runtime_glue(&(__this_01->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,180.0,0.0,1.0,in_stack_ffffffffffffffe0);
      return pGVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__BuildBody (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x3af62a0

void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__BuildBody
               (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05701455 == '\0') {
    il2cpp_init_method_metadata(&"Search current screen");
    il2cpp_init_method_metadata(&"aottg-search-palette");
    DAT_05701455 = '\x01';
  }
  pSVar2 = "aottg-search-palette";
  pSVar1 = "Search current screen";
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_0570146d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"SearchPalette");
    il2cpp_init_method_metadata(&"searchPalette");
    DAT_0570146d = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "SearchPalette";
    il2cpp_runtime_glue(&__this_00->fields);
    (__this_00->fields).id = pSVar2;
    il2cpp_runtime_glue(&(__this_00->fields).id,pSVar2);
    (__this_00->fields).placeholder = pSVar1;
    il2cpp_runtime_glue(&(__this_00->fields).placeholder,pSVar1);
    (__this_00->fields).style = "searchPalette";
    il2cpp_runtime_glue(&(__this_00->fields).style);
    Gisketch_Aottg2UI_Code_AottgUi__Add(body,__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog___ctor (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x3af63d0

void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog___ctor
               (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


