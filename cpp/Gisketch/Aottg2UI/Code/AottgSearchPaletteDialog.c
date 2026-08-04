// Type: Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgSearchPaletteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_Title (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x3b61270

System_String_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_Title
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (g_data_057a9d75 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AoTTG Search Palette");
    g_data_057a9d75 = '\x01';
  }
  return "AoTTG Search Palette";
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_TitleIcon (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x3b612a0

System_String_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (g_data_057a9d76 == '\0') {
    il2cpp_runtime_helper_023445d0(&"zoom");
    g_data_057a9d76 = '\x01';
  }
  return "zoom";
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_RootLayout (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x3b612d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RAX;
  MethodInfo *method_00;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined1 auVar7 [16];
  undefined8 *puStackY_70;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (g_data_057a9d77 == '\0') {
    puStackY_70 = (undefined8 *)0x3b612ec;
    il2cpp_runtime_helper_023445d0(&"Column");
    puStackY_70 = (undefined8 *)0x3b612f8;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057a9d77 = '\x01';
  }
  if (g_data_057a9d9b == '\0') {
    puStackY_70 = (undefined8 *)0x3b61314;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    puStackY_70 = (undefined8 *)0x3b61320;
    il2cpp_runtime_helper_023445d0(&"percent");
    g_data_057a9d9b = '\x01';
  }
  puVar4 = &TypeInfo_GisketchLength;
  puStackY_70 = (undefined8 *)0x3b61336;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  puStackY_70 = (undefined8 *)0x3b61343;
  __this_02 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor
            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    *(float *)&(__this_00->fields)._children = 100.0;
    (__this_00->fields)._actions = "percent";
    puStackY_70 = (undefined8 *)0x3b6136e;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._actions);
    if (g_data_057a9d9a == '\0') {
      puStackY_70 = (undefined8 *)0x3b61383;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      puStackY_70 = (undefined8 *)0x3b6138f;
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    puStackY_70 = (undefined8 *)0x3b6139e;
    pGVar1 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    puStackY_70 = (undefined8 *)0x3b613ab;
    __this_02 = pGVar1;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar1,(MethodInfo *)0x0);
    puVar4 = (undefined8 *)0x0;
    if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      *(float *)&(pGVar1->fields)._children = 960.0;
      (pGVar1->fields)._actions = "point";
      puStackY_70 = (undefined8 *)0x3b613d5;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields)._actions);
      puStackY_70 = (undefined8 *)0x3b6144e;
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar1,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,180.0
                          ,0.0,1.0,in_stack_ffffffffffffffe0);
      return pGVar2;
    }
  }
  puStackY_70 = (undefined8 *)0x3b6145b;
  il2cpp_runtime_helper_022b2c90();
  ppuVar5 = &puStackY_70;
  pGVar1 = pGVar6;
  puStackY_70 = puVar4;
  if (g_data_057a9d78 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Search current screen");
    __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"aottg-search-palette";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d78 = '\x01';
  }
  if (pGVar6 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    auVar7 = il2cpp_runtime_helper_022b2c90();
    puVar4 = (undefined8 *)0x0;
  }
  else {
    auVar7._8_8_ = "Search current screen";
    auVar7._0_8_ = &"Search current screen";
    puVar4 = puStackY_70;
    ppuVar5 = (undefined8 **)&stack0xffffffffffffff98;
    pGVar1 = "aottg-search-palette";
    __this_02 = pGVar6;
  }
  *(undefined8 *)((long)ppuVar5 + -8) = unaff_R15;
  *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)ppuVar5 + -0x10) = __this_00;
  *(undefined8 *)((long)ppuVar5 + -0x18) = unaff_R12;
  *(undefined8 **)((long)ppuVar5 + -0x20) = puVar4;
  *(long *)((long)ppuVar5 + -0x28) = auVar7._0_8_;
  if (g_data_057a9da0 == '\0') {
    *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b614d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b614e2;
    il2cpp_runtime_helper_023445d0(&"SearchPalette");
    *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b614ee;
    il2cpp_runtime_helper_023445d0(&"searchPalette");
    g_data_057a9da0 = '\x01';
  }
  *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b61504;
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b61511;
  pGVar3 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "SearchPalette";
    *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b6152d;
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = (System_String_o *)pGVar1;
    *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b6153d;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,pGVar1);
    (__this_01->fields).placeholder = auVar7._8_8_;
    *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b6154d;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).placeholder,auVar7._8_8_);
    (__this_01->fields).style = "searchPalette";
    *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b61567;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this_02,__this_01,method_00);
    return (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar3;
  }
  *(undefined8 *)((long)ppuVar5 + -0x30) = 0x3b61582;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__BuildBody (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x3b61460

void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog__BuildBody
               (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  undefined1 *puVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar3 [16];
  
  puVar1 = &stack0xfffffffffffffff8;
  pGVar2 = body;
  if (g_data_057a9d78 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Search current screen");
    __this = (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *)&"aottg-search-palette";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d78 = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    auVar3 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
  }
  else {
    auVar3._8_8_ = "Search current screen";
    auVar3._0_8_ = &"Search current screen";
    puVar1 = (undefined1 *)register0x00000020;
    pGVar2 = "aottg-search-palette";
    __this = (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *)body;
  }
  *(undefined8 *)(puVar1 + -8) = unaff_R15;
  *(undefined8 *)(puVar1 + -0x10) = unaff_R14;
  *(undefined8 *)(puVar1 + -0x18) = unaff_R12;
  *(undefined8 *)(puVar1 + -0x20) = unaff_RBX;
  *(long *)(puVar1 + -0x28) = auVar3._0_8_;
  if (g_data_057a9da0 == '\0') {
    *(undefined8 *)(puVar1 + -0x30) = 0x3b614d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    *(undefined8 *)(puVar1 + -0x30) = 0x3b614e2;
    il2cpp_runtime_helper_023445d0(&"SearchPalette");
    *(undefined8 *)(puVar1 + -0x30) = 0x3b614ee;
    il2cpp_runtime_helper_023445d0(&"searchPalette");
    g_data_057a9da0 = '\x01';
  }
  *(undefined8 *)(puVar1 + -0x30) = 0x3b61504;
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  *(undefined8 *)(puVar1 + -0x30) = 0x3b61511;
  __this_01 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "SearchPalette";
    *(undefined8 *)(puVar1 + -0x30) = 0x3b6152d;
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).id = (System_String_o *)pGVar2;
    *(undefined8 *)(puVar1 + -0x30) = 0x3b6153d;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pGVar2);
    (__this_00->fields).placeholder = auVar3._8_8_;
    *(undefined8 *)(puVar1 + -0x30) = 0x3b6154d;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).placeholder,auVar3._8_8_);
    (__this_00->fields).style = "searchPalette";
    *(undefined8 *)(puVar1 + -0x30) = 0x3b61567;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
    Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)__this,__this_00,method_00);
    return;
  }
  *(undefined8 *)(puVar1 + -0x30) = 0x3b61582;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog___ctor (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x3b61590

void Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog___ctor
               (Gisketch_Aottg2UI_Code_AottgSearchPaletteDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


