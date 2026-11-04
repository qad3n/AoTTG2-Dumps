// Type: Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgSearchPaletteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_Title (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x1818c6b20

System_String_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_Title
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342074 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Search Palette");
    Il2CppMethodInitialized_184342074 = '\x01';
  }
  return "AoTTG Search Palette";
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_TitleIcon (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x1818c6af0

System_String_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    Il2CppMethodInitialized_184342075 = '\x01';
  }
  return "zoom";
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_RootLayout (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x1818c69e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342076 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184342076 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(960.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,180.0,0.0
                      ,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__BuildBody (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1818c6860

void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__BuildBody
               (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  System_String_o *value;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184342077 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Search current screen");
    il2cpp_codegen_initialize_runtime_metadata(&"aottg-search-palette");
    Il2CppMethodInitialized_184342077 = '\x01';
  }
  value_00 = "aottg-search-palette";
  value = "Search current screen";
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (Il2CppMethodInitialized_184342096 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      il2cpp_codegen_initialize_runtime_metadata(&"SearchPalette");
      il2cpp_codegen_initialize_runtime_metadata(&"searchPalette");
      Il2CppMethodInitialized_184342096 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    (__this_00->fields).active = true;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).type = "SearchPalette";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"SearchPalette");
    (__this_00->fields).id = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,value_00);
    (__this_00->fields).placeholder = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).placeholder,value);
    (__this_00->fields).style = "searchPalette";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"searchPalette");
    (__this_00->fields).searchScopeScreenId = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).searchScopeScreenId,(void *)0x0);
    (__this_00->fields).searchScopeScreenIds = (System_String_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).searchScopeScreenIds,(void *)0x0);
    bVar2 = g_data_18434209b == '\0';
    (__this_00->fields).searchShowFullPath = false;
    if (bVar2) {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      g_data_18434209b = '\x01';
    }
    pSVar1 = (body->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog___ctor (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog___ctor(Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


