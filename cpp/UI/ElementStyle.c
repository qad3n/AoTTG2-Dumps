// Type: UI.ElementStyle
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ElementStyle.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementStyle.cs
// --------------------------------

// UI.ElementStyle$$.ctor
// il2cpp: void UI_ElementStyle___ctor (UI_ElementStyle_o* __this, int32_t fontSize, float titleWidth, float spacing, System_String_o* themePanel, const MethodInfo* method);
// 0x4377c30

void UI_ElementStyle___ctor
               (UI_ElementStyle_o *__this,int32_t fontSize,float titleWidth,float spacing,
               System_String_o *themePanel,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).FontSize = fontSize;
  (__this->fields).TitleWidth = titleWidth;
  (__this->fields).Spacing = spacing;
  (__this->fields).ThemePanel = themePanel;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ThemePanel,themePanel);
  return;
}


// UI.ElementStyle$$.cctor
// il2cpp: void UI_ElementStyle___cctor (const MethodInfo* method);
// 0x438deb0

void UI_ElementStyle___cctor(MethodInfo *method)

{
  void *pvVar1;
  Il2CppObject *__this;
  
  if (g_data_057ae288 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    g_data_057ae288 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pvVar1 = "DefaultPanel";
  System_Object___ctor(__this,(MethodInfo *)0x0);
  __this[1].klass = (Il2CppClass *)0x42f0000000000018;
  *(undefined4 *)&__this[2].klass = 0x41a00000;
  __this[1].monitor = pvVar1;
  il2cpp_runtime_helper_022b4080(&__this[1].monitor,pvVar1);
  **(undefined8 **)(TypeInfo_ElementStyle + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ElementStyle + 0xb8),__this);
  return;
}


