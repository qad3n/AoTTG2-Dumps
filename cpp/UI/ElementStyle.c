// Type: UI.ElementStyle
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ElementStyle.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementStyle.cs
// --------------------------------

// UI.ElementStyle$$.ctor
// il2cpp: void UI_ElementStyle___ctor (UI_ElementStyle_o* __this, int32_t fontSize, float titleWidth, float spacing, System_String_o* themePanel, const MethodInfo* method);
// 0x182211560

void UI_ElementStyle___ctor
               (UI_ElementStyle_o *__this,int32_t fontSize,float titleWidth,float spacing,
               System_String_o *themePanel,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).ThemePanel = themePanel;
  (__this->fields).TitleWidth = titleWidth;
  (__this->fields).Spacing = spacing;
  (__this->fields).FontSize = fontSize;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ThemePanel,themePanel);
  return;
}


// UI.ElementStyle$$.cctor
// il2cpp: void UI_ElementStyle___cctor (const MethodInfo* method);
// 0x1822114b0

void UI_ElementStyle___cctor(MethodInfo *method)

{
  System_String_o *value;
  UI_ElementStyle_o *__this;
  
  if (Il2CppMethodInitialized_1843470f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_1843470f7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  value = "DefaultPanel";
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).FontSize = 0x18;
  (__this->fields).TitleWidth = 120.0;
  (__this->fields).Spacing = 20.0;
  (__this->fields).ThemePanel = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ThemePanel,value);
  TypeInfo_UI_ElementStyle->static_fields->Default = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ElementStyle->static_fields->Default,__this);
  return;
}


