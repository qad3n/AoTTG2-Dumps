// Type: UI.CharacterEditorTitanCostumePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanCostumePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCostumePanel.cs
// --------------------------------

// UI.CharacterEditorTitanCostumePanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___cctor (const MethodInfo* method);
// 0x4369280

void UI_CharacterEditorTitanCostumePanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae1d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae1d6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___ctor (UI_CharacterEditorTitanCostumePanel___c_o* __this, const MethodInfo* method);
// 0x43692f0

void UI_CharacterEditorTitanCostumePanel___c___ctor
               (UI_CharacterEditorTitanCostumePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c$$<OnButtonClick>b__25_6
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___OnButtonClick_b__25_6 (UI_CharacterEditorTitanCostumePanel___c_o* __this, const MethodInfo* method);
// 0x4369300

void UI_CharacterEditorTitanCostumePanel___c___OnButtonClick_b__25_6
               (UI_CharacterEditorTitanCostumePanel___c_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_06;
  MethodInfo *method_07;
  long *plVar1;
  UI_CharacterEditorTitanCostumePanel_o *pUVar2;
  UI_CharacterEditorTitanCostumePanel_o *pUVar3;
  
  if (g_data_057ae1d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae1d7 = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews((MethodInfo *)0x0);
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x248))();
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)plVar1[3];
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick(pUVar2,(System_String_o *)plVar1[2],method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CancellationTokenSource;
  if (pUVar3 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CachedPtr,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar3->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar3->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_05);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_06 = extraout_RDX;
  if (g_data_057ae1d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae1d8 = '\x01';
    method_06 = extraout_RDX_00;
  }
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar2,"LoadPreset",method_06);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_07);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4367180

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___ctor
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_0$$<Setup>b__9
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___Setup_b__9 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4369390

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___Setup_b__9
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_05;
  MethodInfo *method_06;
  UI_CharacterEditorTitanCostumePanel_o *pUVar1;
  UI_CharacterEditorTitanCostumePanel_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick(pUVar1,(__this->fields).button,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CancellationTokenSource;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CachedPtr,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar1,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar1,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_05 = extraout_RDX;
  if (g_data_057ae1d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae1d8 = '\x01';
    method_05 = extraout_RDX_00;
  }
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,"LoadPreset",method_05);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_06);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_1$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o* __this, const MethodInfo* method);
// 0x4367190

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___ctor
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_1$$<Setup>b__10
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___Setup_b__10 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o* __this, const MethodInfo* method);
// 0x43693b0

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___Setup_b__10
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UI_CharacterEditorTitanCostumePanel_o *pUVar1;
  UI_CharacterEditorTitanCostumePanel_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick(pUVar1,(__this->fields).button,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar1,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar1,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_04 = extraout_RDX;
  if (g_data_057ae1d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae1d8 = '\x01';
    method_04 = extraout_RDX_00;
  }
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,"LoadPreset",method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_05);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x4368970

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___ctor
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__0
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__0 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x43693d0

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__0
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UI_CharacterEditorTitanCostumePanel_o *pUVar1;
  UI_CharacterEditorTitanCostumePanel_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar1,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_03 = extraout_RDX;
  if (g_data_057ae1d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae1d8 = '\x01';
    method_03 = extraout_RDX_00;
  }
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,"LoadPreset",method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_04);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__1
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__1 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x43693f0

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__1
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UI_CharacterEditorTitanCostumePanel_o *pUVar1;
  UI_CharacterEditorTitanCostumePanel_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar1,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_02 = extraout_RDX;
  if (g_data_057ae1d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae1d8 = '\x01';
    method_02 = extraout_RDX_00;
  }
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,"LoadPreset",method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__2
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__2 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x4369410

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__2
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_CharacterEditorTitanCostumePanel_o *pUVar1;
  UI_CharacterEditorTitanCostumePanel_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = extraout_RDX;
  if (g_data_057ae1d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae1d8 = '\x01';
    method_01 = extraout_RDX_00;
  }
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,"LoadPreset",method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__3
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__3 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x4369430

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__3
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_CharacterEditorTitanCostumePanel_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057ae1d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae1d8 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pUVar1 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(pUVar1,"LoadPreset",method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_CharacterEditorTitanCostumePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(System_String_o *)(pUVar1->fields).m_CancellationTokenSource,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__4
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__4 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x4369450

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__4
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UI_CharacterEditorTitanCostumePanel_o *__this_01;
  
  if (g_data_057ae1d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae1d8 = '\x01';
    in_RDX = extraout_RDX;
  }
  __this_01 = (__this->fields).__4__this;
  if (__this_01 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_01,"LoadPreset",in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_CharacterEditorTitanCostumePanel_o *)(__this_01->fields).m_CachedPtr;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(System_String_o *)(__this_01->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__5
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__5 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x4369490

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__5
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22___ctor (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4367c50

void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22___ctor
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_IDisposable_Dispose (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x43694b0

void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_IDisposable_Dispose
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$MoveNext
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__MoveNext (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x43694c0

bool_conflict
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__MoveNext
          (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  uint value;
  Settings_TitanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar4;
  Settings_ListSetting_T__o *pSVar5;
  Settings_ListSetting_T__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  void *pvVar8;
  Characters_DummyTitan_o *pCVar9;
  Settings_StringSetting_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  Settings_TitanCustomSet_o *pSVar12;
  System_String_c *pSVar13;
  Characters_BasicTitanSetup_o *pCVar14;
  bool_conflict bVar15;
  Il2CppMethodPointer *ppIVar16;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_TitanCustomSet_o *set;
  Il2CppObject *pIVar17;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  int iVar20;
  Il2CppClass *b;
  long lVar21;
  Settings_TitanCustomSet_o *unaff_R12;
  Characters_DummyTitan_o **ppCVar22;
  
  if (g_data_057ae1d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae1d9 = '\x01';
  }
  iVar20 = (__this->fields).__1__state;
  if (iVar20 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    b = (Il2CppClass *)0x0;
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(0,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._settings_5__2;
    if (((pSVar3 != (Settings_TitanCustomSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).TitanCustomSets,
        pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (pSVar11 = (pSVar4->fields).SelectedSetIndex, pSVar11 != (Settings_IntSetting_o *)0x0)) {
      value = (__this->fields)._currentSelectedIndex_5__3;
      b = (Il2CppClass *)(ulong)value;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar11,value,MethodInfo_Void_set_Value);
      pSVar3 = (__this->fields)._settings_5__2;
      if ((pSVar3 != (Settings_TitanCustomSettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).TitanCustomSets,
         pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
        b = MethodInfo_BaseSetSetting_GetSelectedSet;
        pIVar18 = (Il2CppClass *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar4,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
        if (pIVar18 != (Il2CppClass *)0x0) {
          pvVar8 = (pIVar18->_1).image;
          bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          b = TypeInfo_TitanCustomSet;
          if ((*(byte *)((long)pvVar8 + 0x130) < bVar1) ||
             (*(Il2CppClass **)(*(long *)((long)pvVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_TitanCustomSet))
          goto label_043699b9;
        }
        pCVar9 = (__this->fields)._character_5__4;
        if ((pCVar9 != (Characters_DummyTitan_o *)0x0) &&
           (pCVar14 = (pCVar9->fields).Setup, pCVar14 != (Characters_BasicTitanSetup_o *)0x0)) {
          ppCVar22 = &(__this->fields)._character_5__4;
          Characters_BasicTitanSetup__Load(pCVar14,(Settings_TitanCustomSet_o *)pIVar18,(MethodInfo *)0x0);
          b = pIVar18;
          if (*ppCVar22 != (Characters_DummyTitan_o *)0x0) {
            Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)*ppCVar22,(MethodInfo *)0x0);
            *ppCVar22 = (Characters_DummyTitan_o *)0x0;
            il2cpp_runtime_helper_022b4080(ppCVar22,0);
            return 0;
          }
        }
      }
    }
  }
  else {
    if (iVar20 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    b = *(Il2CppClass **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    (__this->fields)._settings_5__2 = (Settings_TitanCustomSettings_o *)b;
    il2cpp_runtime_helper_022b4080();
    pSVar3 = (__this->fields)._settings_5__2;
    if (((pSVar3 != (Settings_TitanCustomSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).TitanCustomSets,
        pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).Sets, pSVar5 != (Settings_ListSetting_T__o *)0x0)) {
      pSVar6 = pSVar5->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar21 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar21) == TypeInfo_IListSetting) {
            ppIVar16 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar21) + 2].methodPtr;
            goto label_04369786;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar21);
      }
      ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IListSetting,2);
label_04369786:
      b = (Il2CppClass *)ppIVar16[1];
      __this_00 = (System_Collections_Generic_List_object__o *)(**ppIVar16)(pSVar5);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar18 = (Il2CppClass *)0x0;
        if ((__this_00->fields)._size < 1) {
          return 0;
        }
        while( true ) {
          iVar20 = (int)pIVar18;
          b = pIVar18;
          set = (Settings_TitanCustomSet_o *)
                System_Collections_Generic_List_object___get_Item(__this_00,iVar20,MethodInfo_BaseSetting_get_Item);
          if (set == (Settings_TitanCustomSet_o *)0x0) break;
          bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          b = TypeInfo_TitanCustomSet;
          unaff_R12 = set;
          if (((set->klass->_2).naturalAligment < bVar1) ||
             ((set->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto label_043699b4;
          pSVar10 = (set->fields).UniqueId;
          if (pSVar10 == (Settings_StringSetting_o *)0x0) break;
          b = (Il2CppClass *)(__this->fields).previousProfileId;
          bVar15 = System_String__op_Equality((pSVar10->fields)._value,(System_String_o *)b,(MethodInfo *)0x0)
          ;
          if ((char)bVar15 != '\0') {
            pSVar3 = (__this->fields)._settings_5__2;
            if (((pSVar3 == (Settings_TitanCustomSettings_o *)0x0) ||
                (pSVar4 = (pSVar3->fields).TitanCustomSets,
                pSVar4 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
               (pSVar11 = (pSVar4->fields).SelectedSetIndex, pSVar11 == (Settings_IntSetting_o *)0x0)) break;
            (__this->fields)._currentSelectedIndex_5__3 = (pSVar11->fields)._value;
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar11,iVar20,MethodInfo_Void_set_Value)
            ;
            pIVar19 = TypeInfo_DummyTitan;
            pSVar12 = *(Settings_TitanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
            b = pIVar18;
            if (pSVar12 == (Settings_TitanCustomSet_o *)0x0) break;
            bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
            b = TypeInfo_CharacterEditorGameManager;
            unaff_R12 = pSVar12;
            if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
               ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_043699b4;
            b = (Il2CppClass *)(pSVar12->fields).Head;
            if (b == (Il2CppClass *)0x0) {
              (__this->fields)._character_5__4 = (Characters_DummyTitan_o *)0x0;
            }
            else {
              pSVar13 = (b->_1).image;
              bVar1 = (TypeInfo_DummyTitan->_2).naturalAligment;
              if (((pSVar13->_2).naturalAligment < bVar1) ||
                 ((pSVar13->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyTitan)) goto label_043699c1;
              (__this->fields)._character_5__4 = (Characters_DummyTitan_o *)b;
              pSVar13 = (b->_1).image;
              if (((pSVar13->_2).naturalAligment < bVar1) ||
                 ((pSVar13->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar19)) goto label_043699c1;
            }
            ppCVar22 = &(__this->fields)._character_5__4;
            il2cpp_runtime_helper_022b4080(ppCVar22);
            unaff_R12 = set;
            if ((*ppCVar22 != (Characters_DummyTitan_o *)0x0) &&
               (pCVar14 = ((*ppCVar22)->fields).Setup, pCVar14 != (Characters_BasicTitanSetup_o *)0x0)) {
              Characters_BasicTitanSetup__Load(pCVar14,set,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar17 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
              (__this->fields).__2__current = pIVar17;
              il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar17);
              (__this->fields).__1__state = 1;
              return (bool_conflict)CONCAT71((int7)((ulong)ppCVar22 >> 8),1);
            }
            break;
          }
          pIVar18 = (Il2CppClass *)(ulong)(iVar20 + 1U);
          if ((__this_00->fields)._size <= (int)(iVar20 + 1U)) {
            return 0;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043699b4:
  pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_043699b9:
  pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0(pIVar18);
label_043699c1:
  il2cpp_runtime_helper_022b2fd0(b,pIVar19);
  return (bool_conflict)(b->_1).namespaze;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x43699d0

Il2CppObject *
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_IEnumerator_Reset (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x43699e0

void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_IEnumerator_get_Current (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x4369a20

Il2CppObject *
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27___ctor (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43690a0

void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27___ctor
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_IDisposable_Dispose (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x4369a30

void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_IDisposable_Dispose
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$MoveNext
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__MoveNext (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x4369a40

bool_conflict
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__MoveNext
          (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (g_data_057ae1da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae1da = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar2 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar2;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar2);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
    return 0;
  }
  (__this->fields).__1__state = -1;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(0,(MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk((MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  return 0;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x4369b10

Il2CppObject *
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_IEnumerator_Reset (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x4369b20

void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_IEnumerator_get_Current (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x4369b60

Il2CppObject *
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorTitanCostumePanel__get_Title (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4366070

System_String_o *
UI_CharacterEditorTitanCostumePanel__get_Title
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae1c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Costume");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1c9 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Costume","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorTitanCostumePanel$$get_Width
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_Width (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4366110

float UI_CharacterEditorTitanCostumePanel__get_Width
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_Height (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4366120

float UI_CharacterEditorTitanCostumePanel__get_Height
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 1020.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_VerticalSpacing (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4366130

float UI_CharacterEditorTitanCostumePanel__get_VerticalSpacing
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorTitanCostumePanel__get_HorizontalPadding (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4366140

int32_t UI_CharacterEditorTitanCostumePanel__get_HorizontalPadding
                  (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorTitanCostumePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorTitanCostumePanel__get_VerticalPadding (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4366150

int32_t UI_CharacterEditorTitanCostumePanel__get_VerticalPadding
                  (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorTitanCostumePanel$$get_ScrollBar
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__get_ScrollBar (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4366160

bool_conflict
UI_CharacterEditorTitanCostumePanel__get_ScrollBar
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CharacterEditorTitanCostumePanel$$Setup
// il2cpp: void UI_CharacterEditorTitanCostumePanel__Setup (UI_CharacterEditorTitanCostumePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4366170

void UI_CharacterEditorTitanCostumePanel__Setup
               (UI_CharacterEditorTitanCostumePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  Settings_IntSetting_o *setting;
  System_Collections_Specialized_OrderedDictionary_o *pSVar6;
  Settings_BaseSetSetting_c *setting_00;
  UI_IconPickPopup_o *pUVar7;
  Settings_BaseSetting_o *setting_01;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *setting_02;
  UI_ColorPickPopup_o *pUVar8;
  Settings_BoolSetting_o *setting_03;
  Il2CppClass *pIVar9;
  Settings_BaseSetSetting_o *pSVar10;
  System_String_o *pSVar11;
  MethodInfo *__this_00;
  System_String_o *pSVar12;
  UnityEngine_Events_UnityAction_o *pUVar13;
  UI_CharacterEditorTitanCostumePanel_o *pUVar14;
  System_String_array *pSVar15;
  UI_CharacterEditorTitanCostumePanel_o *pUVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  System_String_array *pSVar19;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UI_CharacterEditorMenu_o *pUVar20;
  MethodInfo *method_04;
  UI_CharacterEditorTitanCostumePanel_o *__this_01;
  UI_CharacterEditorTitanCostumePanel_o *category;
  System_String_o **unaff_R13;
  ulong uVar21;
  MethodInfo *unaff_R15;
  
  if (g_data_057ae1ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_8);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__10);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"SaveQuit");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Costume");
    il2cpp_runtime_helper_023445d0(&"Quit");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"Body");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"HairColor");
    il2cpp_runtime_helper_023445d0(&"Head");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"Eye");
    il2cpp_runtime_helper_023445d0(&"SkinColor");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Custom set");
    il2cpp_runtime_helper_023445d0(&"Hair");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae1ca = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar16 = __this;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar20 = *(UI_CharacterEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar20 == (UI_CharacterEditorMenu_o *)0x0) goto label_04366449;
label_043663cd:
    pIVar9 = TypeInfo_CharacterEditorMenu;
    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
    if ((bVar1 <= (pUVar20->klass->_2).naturalAligment) &&
       ((pUVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
      (__this->fields)._menu = pUVar20;
      if (((pUVar20->klass->_2).naturalAligment < bVar1) ||
         ((pUVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar9)) goto label_043670d7;
      goto label_0436645b;
    }
label_043670d7:
    pSVar10 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2fd0(pUVar20);
    pUVar14 = (UI_CharacterEditorTitanCostumePanel_o *)&TypeInfo_UIManager;
label_043670e5:
    __this = pUVar14;
    il2cpp_runtime_helper_022b2fd0(pSVar10);
label_043670ea:
    pUVar14 = (UI_CharacterEditorTitanCostumePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
    __this_01 = pUVar14;
    System_Object___ctor((Il2CppObject *)pUVar14,(MethodInfo *)0x0);
    if (pUVar14 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
      (pUVar14->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
      il2cpp_runtime_helper_022b4080(&(pUVar14->fields).m_CancellationTokenSource);
      iVar2 = *(int *)(unaff_R13 + 3);
      goto joined_r0x04367120;
    }
    goto label_04367172;
  }
  pUVar20 = *(UI_CharacterEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (pUVar20 != (UI_CharacterEditorMenu_o *)0x0) goto label_043663cd;
label_04366449:
  (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
label_0436645b:
  __this_01 = (UI_CharacterEditorTitanCostumePanel_o *)&(__this->fields)._menu;
  il2cpp_runtime_helper_022b4080();
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (((lVar3 == 0) ||
      (__this_01 = *(UI_CharacterEditorTitanCostumePanel_o **)(lVar3 + 0x20),
      __this_01 == (UI_CharacterEditorTitanCostumePanel_o *)0x0)) ||
     (pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this_01,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar10 == (Settings_BaseSetSetting_o *)0x0)) goto label_04367172;
  bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
  pUVar14 = (UI_CharacterEditorTitanCostumePanel_o *)&TypeInfo_SettingsManager;
  if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
     (pUVar14 = (UI_CharacterEditorTitanCostumePanel_o *)&TypeInfo_SettingsManager,
     (pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto label_043670e5;
  pSVar4 = (pSVar10->fields).UniqueId;
  if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_04367172;
  (__this->fields)._previousProfileId = (pSVar4->fields)._value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._previousProfileId);
  pSVar11 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,130.0,20.0,pSVar11,(MethodInfo *)0x0);
  pSVar11 = "Costume";
  category = "CharacterEditor";
  pUVar16 = *(UI_CharacterEditorTitanCostumePanel_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  pUVar18 = (__this->fields).BottomBar;
  pSVar12 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar18,(UI_ElementStyle_o *)__this_00,pSVar12,0.0,pUVar13,(MethodInfo *)0x0);
  __this_01 = (UI_CharacterEditorTitanCostumePanel_o *)(__this->fields).BottomBar;
  pUVar14 = (UI_CharacterEditorTitanCostumePanel_o *)
            UI_UIManager__GetLocale
                      ((System_String_o *)category,pSVar11,"SaveQuit","","",
                       (MethodInfo *)0x0);
  pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            ((UnityEngine_Transform_o *)__this_01,(UI_ElementStyle_o *)__this_00,(System_String_o *)pUVar14,
             0.0,pUVar13,(MethodInfo *)0x0);
  if (pUVar16 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) goto label_04367172;
  pSVar5 = (Settings_SetSettingsContainer_T__o *)(pUVar16->fields).SinglePanel;
  __this_01 = (UI_CharacterEditorTitanCostumePanel_o *)0x0;
  if (pSVar5 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_04367172;
  pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet(pSVar5,MethodInfo_BaseSetSetting_GetSelectedSet);
  unaff_R13 = &"";
  if (pSVar10 != (Settings_BaseSetSetting_o *)0x0) {
    bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    unaff_R15 = __this_00;
    if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
       ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto label_043670e5;
  }
  pSVar5 = (Settings_SetSettingsContainer_T__o *)(pUVar16->fields).SinglePanel;
  __this_01 = (UI_CharacterEditorTitanCostumePanel_o *)0x0;
  if (pSVar5 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_04367172;
  unaff_R15 = (MethodInfo *)(__this->fields).SinglePanel;
  setting = (pSVar5->fields).SelectedSetIndex;
  pSVar15 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
  pUVar16 = (UI_CharacterEditorTitanCostumePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            ((UnityEngine_Transform_o *)unaff_R15,(UI_ElementStyle_o *)__this_00,
             (Settings_BaseSetting_o *)setting,"Custom set",pSVar15,"",170.0,40.0,300.0,
             (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)pUVar16,(MethodInfo *)0x0);
  pUVar17 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
  __this_01 = TypeInfo_string;
  unaff_R13 = (System_String_o **)il2cpp_runtime_helper_022b2a40();
  if (unaff_R13 == (System_String_o **)0x0) goto label_04367172;
  if (*(int *)(unaff_R13 + 3) != 0) {
    pUVar16 = (UI_CharacterEditorTitanCostumePanel_o *)(unaff_R13 + 4);
    unaff_R13[4] = "Create";
    il2cpp_runtime_helper_022b4080(pUVar16);
    if (1 < *(uint *)(unaff_R13 + 3)) {
      unaff_R13[5] = "Delete";
      il2cpp_runtime_helper_022b4080(unaff_R13 + 5);
      if (2 < *(uint *)(unaff_R13 + 3)) {
        unaff_R13[6] = "Copy";
        il2cpp_runtime_helper_022b4080(unaff_R13 + 6);
        if (0 < *(int *)(unaff_R13 + 3)) {
          if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_043670ea;
          unaff_R15 = (MethodInfo *)0x0;
          do {
            pUVar16 = (UI_CharacterEditorTitanCostumePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
            __this_01 = pUVar16;
            System_Object___ctor((Il2CppObject *)pUVar16,(MethodInfo *)0x0);
            if (pUVar16 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) goto label_04367172;
            (pUVar16->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this
            ;
            il2cpp_runtime_helper_022b4080(&(pUVar16->fields).m_CancellationTokenSource);
            if ((MethodInfo *)(ulong)*(uint *)(unaff_R13 + 3) <= unaff_R15) goto label_04367122;
            (pUVar16->fields).m_CachedPtr = (intptr_t)unaff_R13[(long)((long)&unaff_R15->methodPointer + 4)];
            il2cpp_runtime_helper_022b4080(&pUVar16->fields);
            pUVar18 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
            pSVar6 = (System_Collections_Specialized_OrderedDictionary_o *)(pUVar16->fields).m_CachedPtr;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = UI_UIManager__GetLocaleCommon((System_String_o *)pSVar6,(MethodInfo *)0x0);
            pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            pSVar15 = (System_String_array *)0x0;
            UI_ElementFactory__CreateDefaultButton
                      (pUVar18,(UI_ElementStyle_o *)__this_00,pSVar12,0.0,0.0,pUVar13,(MethodInfo *)0x0);
            unaff_R15 = (MethodInfo *)((long)&unaff_R15->methodPointer + 1);
          } while ((long)unaff_R15 < (long)*(int *)(unaff_R13 + 3));
        }
        pUVar17 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
        __this_01 = TypeInfo_string;
        unaff_R15 = (MethodInfo *)il2cpp_runtime_helper_022b2a40();
        if (unaff_R15 == (MethodInfo *)0x0) goto label_04367172;
        if (*(int *)&unaff_R15->name != 0) {
          pUVar16 = (UI_CharacterEditorTitanCostumePanel_o *)&unaff_R15->klass;
          unaff_R15->klass = "Rename";
          il2cpp_runtime_helper_022b4080(pUVar16);
          if (1 < *(uint *)&unaff_R15->name) {
            unaff_R15->return_type = "Import";
            il2cpp_runtime_helper_022b4080(&unaff_R15->return_type);
            if (2 < *(uint *)&unaff_R15->name) {
              unaff_R15->parameters = "Export";
              il2cpp_runtime_helper_022b4080(&unaff_R15->parameters);
              if (0 < *(int *)&unaff_R15->name) {
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_04367127;
                uVar21 = 0;
                do {
                  pUVar16 = (UI_CharacterEditorTitanCostumePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_1);
                  __this_01 = pUVar16;
                  System_Object___ctor((Il2CppObject *)pUVar16,(MethodInfo *)0x0);
                  if (pUVar16 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) goto label_04367172;
                  (pUVar16->fields).m_CancellationTokenSource =
                       (System_Threading_CancellationTokenSource_o *)__this;
                  il2cpp_runtime_helper_022b4080(&(pUVar16->fields).m_CancellationTokenSource);
                  if (*(uint *)&unaff_R15->name <= uVar21) goto label_04367122;
                  (pUVar16->fields).m_CachedPtr = (intptr_t)(&unaff_R15->klass)[uVar21];
                  il2cpp_runtime_helper_022b4080(&pUVar16->fields);
                  pUVar18 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                  pSVar6 = (System_Collections_Specialized_OrderedDictionary_o *)(pUVar16->fields).m_CachedPtr
                  ;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar12 = UI_UIManager__GetLocaleCommon((System_String_o *)pSVar6,(MethodInfo *)0x0);
                  pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  pSVar15 = (System_String_array *)0x0;
                  UI_ElementFactory__CreateDefaultButton
                            (pUVar18,(UI_ElementStyle_o *)__this_00,pSVar12,0.0,0.0,pUVar13,(MethodInfo *)0x0)
                  ;
                  uVar21 = uVar21 + 1;
                } while ((long)uVar21 < (long)*(int *)&unaff_R15->name);
              }
              UI_BasePanel__CreateHorizontalDivider
                        ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
              if (*(int *)((long)&TypeInfo_BasicTitanSetup[1].fields._currentCategoryPanelName + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_01 = TypeInfo_BasicTitanSetup;
              pSVar15 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                  (TypeInfo_BasicTitanSetup,"Head",
                                   *(int32_t *)((long)&(TypeInfo_BasicTitanSetup[1].fields.SinglePanel)->monitor + 4),0,
                                   (MethodInfo *)pSVar15);
              if (pSVar10 != (Settings_BaseSetSetting_o *)0x0) {
                pUVar16 = (UI_CharacterEditorTitanCostumePanel_o *)(__this->fields).SinglePanel;
                setting_00 = pSVar10[1].klass;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_01 = category;
                pSVar12 = UI_UIManager__GetLocale
                                    ((System_String_o *)category,pSVar11,"Head","",
                                     "",(MethodInfo *)0x0);
                pSVar19 = UI_CharacterEditorTitanCostumePanel__GetIcons(__this_01,pSVar15,method_00);
                lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                if (lVar3 != 0) {
                  pUVar7 = *(UI_IconPickPopup_o **)(lVar3 + 0x50);
                  pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  UI_ElementFactory__CreateIconPickSetting
                            ((UnityEngine_Transform_o *)pUVar16,(UI_ElementStyle_o *)__this_00,
                             (Settings_BaseSetting_o *)setting_00,pSVar12,pSVar15,pSVar19,pUVar7,"",
                             (System_String_array *)0x0,170.0,40.0,pUVar13,(UI_TooltipPopup_o *)0x0,
                             (MethodInfo *)0x0);
                  pSVar15 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                      (pUVar16,"Body",
                                       *(int32_t *)&(TypeInfo_BasicTitanSetup[1].fields.SinglePanel)->monitor,0,
                                       (MethodInfo *)pSVar15);
                  pUVar16 = (UI_CharacterEditorTitanCostumePanel_o *)(__this->fields).SinglePanel;
                  setting_01 = pSVar10[1].monitor;
                  __this_01 = category;
                  pSVar12 = UI_UIManager__GetLocale
                                      ((System_String_o *)category,pSVar11,"Body","",
                                       "",(MethodInfo *)0x0);
                  pSVar19 = UI_CharacterEditorTitanCostumePanel__GetIcons(__this_01,pSVar15,method_01);
                  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (lVar3 != 0) {
                    pUVar7 = *(UI_IconPickPopup_o **)(lVar3 + 0x50);
                    pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    UI_ElementFactory__CreateIconPickSetting
                              ((UnityEngine_Transform_o *)pUVar16,(UI_ElementStyle_o *)__this_00,setting_01,
                               pSVar12,pSVar15,pSVar19,pUVar7,"",(System_String_array *)0x0,170.0,
                               40.0,pUVar13,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                    pSVar15 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                        (pUVar16,"Eye",
                                         (int32_t)((TypeInfo_BasicTitanSetup[1].fields.SinglePanel)->fields).m_CachedPtr,0
                                         ,(MethodInfo *)pSVar15);
                    pUVar16 = (UI_CharacterEditorTitanCostumePanel_o *)(__this->fields).SinglePanel;
                    pSVar6 = pSVar10[1].fields.Settings;
                    __this_01 = category;
                    pSVar12 = UI_UIManager__GetLocale
                                        ((System_String_o *)category,pSVar11,"Eye","",
                                         "",(MethodInfo *)0x0);
                    pSVar19 = UI_CharacterEditorTitanCostumePanel__GetIcons(__this_01,pSVar15,method_02);
                    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if (lVar3 != 0) {
                      pUVar7 = *(UI_IconPickPopup_o **)(lVar3 + 0x50);
                      pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      method_04 = __this_00;
                      UI_ElementFactory__CreateIconPickSetting
                                ((UnityEngine_Transform_o *)pUVar16,(UI_ElementStyle_o *)__this_00,
                                 (Settings_BaseSetting_o *)pSVar6,pSVar12,pSVar15,pSVar19,pUVar7,"",
                                 (System_String_array *)0x0,170.0,40.0,pUVar13,(UI_TooltipPopup_o *)0x0,
                                 (MethodInfo *)0x0);
                      pSVar15 = UI_CharacterEditorTitanCostumePanel__GetHairOptions(pUVar16,method_04);
                      pUVar18 = (__this->fields).SinglePanel;
                      setting_02 = pSVar10[1].fields.TypedSettings;
                      __this_01 = category;
                      pSVar12 = UI_UIManager__GetLocale
                                          ((System_String_o *)category,pSVar11,"Hair","",
                                           "",(MethodInfo *)0x0);
                      pSVar19 = UI_CharacterEditorTitanCostumePanel__GetIcons(__this_01,pSVar15,method_03);
                      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                      if (lVar3 != 0) {
                        pUVar7 = *(UI_IconPickPopup_o **)(lVar3 + 0x50);
                        pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        UI_ElementFactory__CreateIconPickSetting
                                  (pUVar18,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)setting_02
                                   ,pSVar12,pSVar15,pSVar19,pUVar7,"",(System_String_array *)0x0,
                                   170.0,40.0,pUVar13,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                        pUVar18 = (__this->fields).SinglePanel;
                        pSVar4 = pSVar10[1].fields.Name;
                        __this_01 = category;
                        pSVar12 = UI_UIManager__GetLocale
                                            ((System_String_o *)category,pSVar11,"SkinColor","",
                                             "",(MethodInfo *)0x0);
                        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                        if (lVar3 != 0) {
                          pUVar8 = *(UI_ColorPickPopup_o **)(lVar3 + 0x48);
                          pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          UI_ElementFactory__CreateColorSetting
                                    (pUVar18,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar4,
                                     pSVar12,pUVar8,"",90.0,30.0,pUVar13,(MethodInfo *)0x0);
                          pUVar18 = (__this->fields).SinglePanel;
                          setting_03 = pSVar10[1].fields.Preset;
                          pSVar11 = UI_UIManager__GetLocale
                                              ((System_String_o *)category,pSVar11,"HairColor","",
                                               "",(MethodInfo *)0x0);
                          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                          __this_01 = category;
                          if (lVar3 != 0) {
                            pUVar8 = *(UI_ColorPickPopup_o **)(lVar3 + 0x48);
                            pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            UI_ElementFactory__CreateColorSetting
                                      (pUVar18,(UI_ElementStyle_o *)__this_00,
                                       (Settings_BaseSetting_o *)setting_03,pSVar11,pUVar8,"",90.0,
                                       30.0,pUVar13,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto label_04367172;
            }
          }
        }
      }
    }
  }
label_04367122:
  do {
    il2cpp_runtime_helper_022b2ca0();
label_04367127:
    pUVar14 = (UI_CharacterEditorTitanCostumePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_1);
    __this_01 = pUVar14;
    System_Object___ctor((Il2CppObject *)pUVar14,(MethodInfo *)0x0);
    if (pUVar14 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) goto label_04367172;
    (pUVar14->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
    il2cpp_runtime_helper_022b4080(&(pUVar14->fields).m_CancellationTokenSource);
    iVar2 = *(int *)&unaff_R15->name;
joined_r0x04367120:
  } while (iVar2 == 0);
  __this_01 = (UI_CharacterEditorTitanCostumePanel_o *)&pUVar14->fields;
  (pUVar14->fields).m_CachedPtr = (intptr_t)pUVar16->klass;
  il2cpp_runtime_helper_022b4080();
label_04367172:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$GetOptions
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetOptions (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* prefix, int32_t options, bool includeNone, const MethodInfo* method);
// 0x43671a0

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetOptions
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *prefix,int32_t options,
          bool_conflict includeNone,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  long lVar5;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar6;
  long *plVar7;
  System_String_c *b;
  UI_CharacterEditorTitanMenu_o *pUVar8;
  int iVar9;
  bool_conflict bVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  System_String_o *pSVar12;
  System_String_array *pSVar13;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppClass *str1;
  System_String_o *pSVar14;
  Settings_BaseSetSetting_o *pSVar15;
  Il2CppObject *__this_02;
  System_String_array *__this_03;
  System_String_array *extraout_RAX;
  undefined8 *puVar16;
  undefined4 uVar17;
  Il2CppClass *pIVar18;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  System_String_o *unaff_R12;
  UnityEngine_MonoBehaviour_o *unaff_R13;
  undefined8 uStack_a8;
  System_Collections_Generic_List_object__o *pSStack_a0;
  System_String_o *pSStack_98;
  UnityEngine_MonoBehaviour_o *pUStack_90;
  System_String_o *pSStack_88;
  System_Collections_Generic_List_object__o *pSStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  System_Collections_Generic_List_object__o *pSStack_68;
  System_String_o *pSStack_60;
  int local_2c;
  
  puVar16 = (undefined8 *)(ulong)(uint)includeNone;
  if (g_data_057ae1cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae1cb = '\x01';
  }
  local_2c = 0;
  pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar11,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if ((char)includeNone == '\0') {
joined_r0x0436735d:
    if (options < 1) {
      local_2c = 0;
      if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) goto label_04367368;
      goto label_04367387;
    }
    local_2c = 0;
    if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_R12 = (System_String_o *)&local_2c;
      puVar16 = &MethodInfo_Void_Add;
      do {
        pSVar12 = System_Int32__ToString((int32_t)unaff_R12,(MethodInfo *)0x0);
        pSVar12 = System_String__Concat_3ae5ba0(prefix,pSVar12,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar11->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_04367387;
        uVar3 = (pSVar11->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar11->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar12;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar11,(Il2CppObject *)pSVar12,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        local_2c = local_2c + 1;
      } while (local_2c < options);
label_04367368:
      pSVar13 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_String_ToArray);
      return pSVar13;
    }
  }
  else {
    pSVar12 = System_String__Concat_3ae5ba0(prefix,"None",(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar11->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar11->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (pSVar11->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar11->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar12;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar11,(Il2CppObject *)pSVar12,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        goto joined_r0x0436735d;
      }
    }
label_04367387:
    il2cpp_runtime_helper_022b2c90();
  }
  pSVar12 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0(prefix,pSVar12,(MethodInfo *)0x0);
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pSStack_68 = pSVar11;
  pSStack_60 = unaff_R12;
  if (g_data_057ae1cd == '\0') {
    puStack_78 = (undefined8 *)0x43673d3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_78 = (undefined8 *)0x43673df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_78 = (undefined8 *)0x43673eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_78 = (undefined8 *)0x43673f7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_78 = (undefined8 *)0x4367403;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    puStack_78 = (undefined8 *)0x436740f;
    il2cpp_runtime_helper_023445d0(&"/Titans/Previews/");
    g_data_057ae1cd = '\x01';
  }
  puStack_78 = (undefined8 *)0x4367425;
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_78 = (undefined8 *)0x436743a;
  System_Collections_Generic_List_object____ctor(__this_01,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if (pSVar12 != (System_String_o *)0x0) {
    iVar9 = (int)pSVar12[1].klass;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar9 < 1) {
label_04367537:
        pSVar13 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_String_ToArray);
        return pSVar13;
      }
      pSVar11 = (System_Collections_Generic_List_object__o *)0x0;
      unaff_R13 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_ResourcePaths;
      puVar16 = &MethodInfo_Void_Add;
      if (((ulong)pSVar12[1].klass & 0xffffffff) != 0) {
        do {
          unaff_R12 = (&pSVar12[1].monitor)[(long)pSVar11];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            puStack_78 = (undefined8 *)0x43674d0;
            il2cpp_runtime_helper_02337ed0();
          }
          puStack_78 = (undefined8 *)0x43674f3;
          pSVar14 = System_String__Concat_3af7150
                              (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Titans/Previews/",
                               unaff_R12,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_01->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_043675a0;
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar14;
            puStack_78 = (undefined8 *)0x4367532;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,pSVar14);
          }
          else {
            puStack_78 = (undefined8 *)0x436749a;
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pSVar11 = (System_Collections_Generic_List_object__o *)((long)&pSVar11->klass + 1);
          if ((long)(int)*(uint *)&pSVar12[1].klass <= (long)pSVar11) goto label_04367537;
        } while (pSVar11 < (System_Collections_Generic_List_object__o *)(ulong)*(uint *)&pSVar12[1].klass);
      }
      puStack_78 = (undefined8 *)0x436755c;
      iVar9 = il2cpp_runtime_helper_022b2ca0();
    }
    if (0 < iVar9) {
      pSVar11 = pSVar12[1].monitor;
      puVar16 = &TypeInfo_ResourcePaths;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        puStack_78 = (undefined8 *)0x436757d;
        il2cpp_runtime_helper_02337ed0();
      }
      puStack_78 = (undefined8 *)0x43675a0;
      System_String__Concat_3af7150
                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Titans/Previews/",
                 (System_String_o *)pSVar11,(MethodInfo *)0x0);
    }
  }
label_043675a0:
  puStack_78 = (undefined8 *)0x43675a5;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = pSVar11;
  pSStack_98 = unaff_R12;
  pUStack_90 = unaff_R13;
  pSStack_88 = pSVar12;
  pSStack_80 = __this_01;
  puStack_78 = puVar16;
  if (g_data_057ae1cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"HairF");
    il2cpp_runtime_helper_023445d0(&"HairM");
    g_data_057ae1cc = '\x01';
  }
  uStack_a8 = 0;
  pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  str1 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(pSVar11,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar9 = 0;
    unaff_R13 = (UnityEngine_MonoBehaviour_o *)&"HairM";
    uStack_a8 = uStack_a8 & 0xffffffff;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) != 0) goto label_043676e1;
    while (il2cpp_runtime_helper_02337ed0(), iVar9 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14)) {
      while( true ) {
        str1 = (Il2CppClass *)System_Int32__ToString((int)&uStack_a8 + 4,(MethodInfo *)0x0);
        pSVar12 = "HairM";
        pSVar14 = System_String__Concat_3ae5ba0("HairM",(System_String_o *)str1,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar11->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_043678b7;
        uVar3 = (pSVar11->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar11->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar14;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar11,(Il2CppObject *)pSVar14,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        iVar9 = uStack_a8._4_4_ + 1;
        uStack_a8 = CONCAT44(iVar9,(int)uStack_a8);
        if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) break;
label_043676e1:
        if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14) <= iVar9) goto label_04367740;
      }
    }
label_04367740:
    iVar9 = 0;
    unaff_R13 = (UnityEngine_MonoBehaviour_o *)&"HairF";
    uStack_a8 = uStack_a8 & 0xffffffff00000000;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) != 0) goto label_043677af;
    while (il2cpp_runtime_helper_02337ed0(), iVar9 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18)) {
      while( true ) {
        str1 = (Il2CppClass *)System_Int32__ToString((int32_t)&uStack_a8,(MethodInfo *)0x0);
        pSVar12 = "HairF";
        pSVar14 = System_String__Concat_3ae5ba0("HairF",(System_String_o *)str1,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar11->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_043678b7;
        uVar3 = (pSVar11->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar11->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar14;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar11,(Il2CppObject *)pSVar14,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        iVar9 = (int)uStack_a8 + 1;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar9);
        if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) break;
label_043677af:
        if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18) <= iVar9) goto label_0436780e;
      }
    }
label_0436780e:
    pSVar13 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_String_ToArray);
    return pSVar13;
  }
  uStack_a8 = uStack_a8 & 0xffffffff;
  if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14) < 1) {
    uStack_a8 = uStack_a8 & 0xffffffff00000000;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = TypeInfo_BasicTitanSetup;
    if (0 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18)) {
      str1 = (Il2CppClass *)System_Int32__ToString((int32_t)&uStack_a8,(MethodInfo *)0x0);
      puVar16 = &"HairF";
      goto label_043678aa;
    }
  }
  else {
    str1 = (Il2CppClass *)System_Int32__ToString((int)&uStack_a8 + 4,(MethodInfo *)0x0);
    puVar16 = &"HairM";
label_043678aa:
    pSVar12 = (System_String_o *)*puVar16;
    System_String__Concat_3ae5ba0(pSVar12,(System_String_o *)str1,(MethodInfo *)0x0);
  }
label_043678b7:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorTitanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae1ce = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (((lVar5 == 0) ||
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
      __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (str1 = MethodInfo_BaseSetSetting_GetSelectedSet,
     pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                         (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar15 == (Settings_BaseSetSetting_o *)0x0)) goto label_04367bc0;
  bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
  str1 = TypeInfo_TitanCustomSet;
  if ((bVar2 <= (pSVar15->klass->_2).naturalAligment) &&
     ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_TitanCustomSet)) {
    pSVar6 = (pSVar15->fields).UniqueId;
    if ((pSVar6 != (Settings_StringSetting_o *)0x0) && (plVar7 = pSVar12[5].monitor, plVar7 != (long *)0x0)) {
      b = (System_String_c *)(pSVar6->fields)._value;
      str1 = (Il2CppClass *)0x1;
      (**(code **)(*plVar7 + 0x1b8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1c0));
      plVar7 = pSVar12[5].monitor;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1d0));
        pSVar14 = pSVar12 + 6;
        if ((pSVar12[6].klass == (System_String_c *)0x0) ||
           (bVar10 = System_String__op_Inequality
                               ((System_String_o *)pSVar12[6].klass,(System_String_o *)b,(MethodInfo *)0x0),
           (char)bVar10 == '\0')) {
          if ((char)pSVar12[5].fields._stringLength == '\0') goto label_04367ba9;
          *(undefined1 *)&pSVar12[5].fields._stringLength = 0;
          pUVar8 = pSVar12[5].monitor;
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            if (pUVar8 != (UI_CharacterEditorTitanMenu_o *)0x0) goto label_04367b6b;
label_04367b87:
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
          }
          else {
            if (pUVar8 == (UI_CharacterEditorTitanMenu_o *)0x0) goto label_04367b87;
label_04367b6b:
            bVar2 = (TypeInfo_CharacterEditorTitanMenu->_2).naturalAligment;
            if ((pUVar8->klass->_2).naturalAligment < bVar2) goto label_04367b87;
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
            if ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CharacterEditorTitanMenu) {
              titanMenu = pUVar8;
            }
          }
          Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,1,(MethodInfo *)0x0);
label_04367ba9:
          pSVar14->klass = b;
          pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b4080(pSVar14,b);
          return pSVar13;
        }
        unaff_R13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (unaff_R13 != (UnityEngine_MonoBehaviour_o *)0x0) {
          bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
          str1 = TypeInfo_CharacterEditorGameManager;
          if (((unaff_R13->klass->_2).naturalAligment < bVar2) ||
             ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_04367bcd;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') goto label_04367ba9;
        pIVar18 = (Il2CppClass *)pSVar14->klass;
        if (g_data_057ae1cf == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
          g_data_057ae1cf = '\x01';
        }
        __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
        str1 = (Il2CppClass *)0x0;
        System_Object___ctor(__this_02,(MethodInfo *)0x0);
        *(undefined4 *)&__this_02[1].klass = 0;
        if (__this_02 != (Il2CppObject *)0x0) {
          __this_02[2].klass = pIVar18;
          il2cpp_runtime_helper_022b4080(__this_02 + 2);
          str1 = pIVar18;
          if (unaff_R13 != (UnityEngine_MonoBehaviour_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      (unaff_R13,(System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
            goto label_04367ba9;
          }
        }
      }
    }
label_04367bc0:
    pSVar15 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0(pSVar15);
label_04367bcd:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
  if (g_data_057ae1cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
    g_data_057ae1cf = '\x01';
  }
  __this_03 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
  uVar17 = 0;
  pSVar13 = __this_03;
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03->bounds = 0;
  if (__this_03 != (System_String_array *)0x0) {
    __this_03->m_Items[0] = (System_String_o *)str1;
    il2cpp_runtime_helper_022b4080(__this_03->m_Items,str1);
    return __this_03;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar13->obj,(MethodInfo *)0x0);
  *(undefined4 *)&pSVar13->bounds = uVar17;
  return extraout_RAX;
}


// UI.CharacterEditorTitanCostumePanel$$GetHairOptions
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetHairOptions (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x43675b0

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetHairOptions
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  long lVar5;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar6;
  long *plVar7;
  System_String_c *b;
  UI_CharacterEditorTitanMenu_o *pUVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppClass *str1;
  System_String_o *pSVar10;
  System_String_array *pSVar11;
  Settings_BaseSetSetting_o *pSVar12;
  Il2CppObject *__this_02;
  System_String_array *__this_03;
  System_String_array *extraout_RAX;
  undefined8 *puVar13;
  int iVar14;
  undefined4 uVar15;
  Il2CppClass *pIVar16;
  System_String_o *str0;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  UnityEngine_MonoBehaviour_o *unaff_R13;
  undefined8 local_38;
  
  if (g_data_057ae1cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"HairF");
    il2cpp_runtime_helper_023445d0(&"HairM");
    g_data_057ae1cc = '\x01';
  }
  local_38 = 0;
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  str1 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(__this_01,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar14 = 0;
    unaff_R13 = (UnityEngine_MonoBehaviour_o *)&"HairM";
    local_38 = local_38 & 0xffffffff;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) != 0) goto label_043676e1;
    while (il2cpp_runtime_helper_02337ed0(), iVar14 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14)) {
      while( true ) {
        str1 = (Il2CppClass *)System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
        str0 = "HairM";
        pSVar10 = System_String__Concat_3ae5ba0("HairM",(System_String_o *)str1,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_043678b7;
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar10;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_01,(Il2CppObject *)pSVar10,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        iVar14 = local_38._4_4_ + 1;
        local_38 = CONCAT44(iVar14,(int)local_38);
        if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) break;
label_043676e1:
        if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14) <= iVar14) goto label_04367740;
      }
    }
label_04367740:
    iVar14 = 0;
    unaff_R13 = (UnityEngine_MonoBehaviour_o *)&"HairF";
    local_38 = local_38 & 0xffffffff00000000;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) != 0) goto label_043677af;
    while (il2cpp_runtime_helper_02337ed0(), iVar14 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18)) {
      while( true ) {
        str1 = (Il2CppClass *)System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
        str0 = "HairF";
        pSVar10 = System_String__Concat_3ae5ba0("HairF",(System_String_o *)str1,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_043678b7;
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar10;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_01,(Il2CppObject *)pSVar10,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        iVar14 = (int)local_38 + 1;
        local_38 = CONCAT44(local_38._4_4_,iVar14);
        if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) break;
label_043677af:
        if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18) <= iVar14) goto label_0436780e;
      }
    }
label_0436780e:
    pSVar11 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_String_ToArray);
    return pSVar11;
  }
  local_38 = local_38 & 0xffffffff;
  if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14) < 1) {
    local_38 = local_38 & 0xffffffff00000000;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = TypeInfo_BasicTitanSetup;
    if (0 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18)) {
      str1 = (Il2CppClass *)System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
      puVar13 = &"HairF";
      goto label_043678aa;
    }
  }
  else {
    str1 = (Il2CppClass *)System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
    puVar13 = &"HairM";
label_043678aa:
    str0 = (System_String_o *)*puVar13;
    System_String__Concat_3ae5ba0(str0,(System_String_o *)str1,(MethodInfo *)0x0);
  }
label_043678b7:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorTitanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae1ce = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (((lVar5 == 0) ||
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
      __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (str1 = MethodInfo_BaseSetSetting_GetSelectedSet,
     pSVar12 = Settings_SetSettingsContainer_object___GetSelectedSet
                         (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar12 == (Settings_BaseSetSetting_o *)0x0)) goto label_04367bc0;
  bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
  str1 = TypeInfo_TitanCustomSet;
  if ((bVar2 <= (pSVar12->klass->_2).naturalAligment) &&
     ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_TitanCustomSet)) {
    pSVar6 = (pSVar12->fields).UniqueId;
    if ((pSVar6 != (Settings_StringSetting_o *)0x0) && (plVar7 = str0[5].monitor, plVar7 != (long *)0x0)) {
      b = (System_String_c *)(pSVar6->fields)._value;
      str1 = (Il2CppClass *)0x1;
      (**(code **)(*plVar7 + 0x1b8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1c0));
      plVar7 = str0[5].monitor;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1d0));
        pSVar10 = str0 + 6;
        if ((str0[6].klass == (System_String_c *)0x0) ||
           (bVar9 = System_String__op_Inequality
                              ((System_String_o *)str0[6].klass,(System_String_o *)b,(MethodInfo *)0x0),
           (char)bVar9 == '\0')) {
          if ((char)str0[5].fields._stringLength == '\0') goto label_04367ba9;
          *(undefined1 *)&str0[5].fields._stringLength = 0;
          pUVar8 = str0[5].monitor;
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            if (pUVar8 != (UI_CharacterEditorTitanMenu_o *)0x0) goto label_04367b6b;
label_04367b87:
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
          }
          else {
            if (pUVar8 == (UI_CharacterEditorTitanMenu_o *)0x0) goto label_04367b87;
label_04367b6b:
            bVar2 = (TypeInfo_CharacterEditorTitanMenu->_2).naturalAligment;
            if ((pUVar8->klass->_2).naturalAligment < bVar2) goto label_04367b87;
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
            if ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CharacterEditorTitanMenu) {
              titanMenu = pUVar8;
            }
          }
          Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,1,(MethodInfo *)0x0);
label_04367ba9:
          pSVar10->klass = b;
          pSVar11 = (System_String_array *)il2cpp_runtime_helper_022b4080(pSVar10,b);
          return pSVar11;
        }
        unaff_R13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (unaff_R13 != (UnityEngine_MonoBehaviour_o *)0x0) {
          bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
          str1 = TypeInfo_CharacterEditorGameManager;
          if (((unaff_R13->klass->_2).naturalAligment < bVar2) ||
             ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_04367bcd;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') goto label_04367ba9;
        pIVar16 = (Il2CppClass *)pSVar10->klass;
        if (g_data_057ae1cf == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
          g_data_057ae1cf = '\x01';
        }
        __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
        str1 = (Il2CppClass *)0x0;
        System_Object___ctor(__this_02,(MethodInfo *)0x0);
        *(undefined4 *)&__this_02[1].klass = 0;
        if (__this_02 != (Il2CppObject *)0x0) {
          __this_02[2].klass = pIVar16;
          il2cpp_runtime_helper_022b4080(__this_02 + 2);
          str1 = pIVar16;
          if (unaff_R13 != (UnityEngine_MonoBehaviour_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      (unaff_R13,(System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
            goto label_04367ba9;
          }
        }
      }
    }
label_04367bc0:
    pSVar12 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0(pSVar12);
label_04367bcd:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
  if (g_data_057ae1cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
    g_data_057ae1cf = '\x01';
  }
  __this_03 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
  uVar15 = 0;
  pSVar11 = __this_03;
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03->bounds = 0;
  if (__this_03 == (System_String_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&pSVar11->obj,(MethodInfo *)0x0);
    *(undefined4 *)&pSVar11->bounds = uVar15;
    return extraout_RAX;
  }
  __this_03->m_Items[0] = (System_String_o *)str1;
  il2cpp_runtime_helper_022b4080(__this_03->m_Items,str1);
  return __this_03;
}


// UI.CharacterEditorTitanCostumePanel$$GetIcons
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetIcons (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x43673b0

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetIcons
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  long lVar5;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar6;
  long *plVar7;
  System_String_c *b;
  UI_CharacterEditorTitanMenu_o *pUVar8;
  int iVar9;
  bool_conflict bVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  System_String_o *pSVar12;
  Il2CppClass *str1;
  System_String_o *pSVar13;
  System_String_array *pSVar14;
  Settings_BaseSetSetting_o *pSVar15;
  Il2CppObject *__this_01;
  System_String_array *__this_02;
  System_String_array *extraout_RAX;
  undefined8 *puVar16;
  System_String_o *unaff_RBX;
  undefined8 *unaff_RBP;
  undefined4 uVar17;
  Il2CppClass *pIVar18;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  System_String_o *unaff_R12;
  UnityEngine_MonoBehaviour_o *unaff_R13;
  undefined8 uStack_70;
  System_String_o *pSStack_68;
  System_String_o *pSStack_60;
  UnityEngine_MonoBehaviour_o *pUStack_58;
  System_String_array *pSStack_50;
  System_Collections_Generic_List_object__o *pSStack_48;
  undefined8 *puStack_40;
  
  if (g_data_057ae1cd == '\0') {
    puStack_40 = (undefined8 *)0x43673d3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_40 = (undefined8 *)0x43673df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_40 = (undefined8 *)0x43673eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_40 = (undefined8 *)0x43673f7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_40 = (undefined8 *)0x4367403;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    puStack_40 = (undefined8 *)0x436740f;
    il2cpp_runtime_helper_023445d0(&"/Titans/Previews/");
    g_data_057ae1cd = '\x01';
  }
  puStack_40 = (undefined8 *)0x4367425;
  pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_40 = (undefined8 *)0x436743a;
  System_Collections_Generic_List_object____ctor(pSVar11,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    iVar9 = (int)options->max_length;
    if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar9 < 1) {
label_04367537:
        pSVar14 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_String_ToArray);
        return pSVar14;
      }
      unaff_RBX = (System_String_o *)0x0;
      unaff_R13 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_ResourcePaths;
      unaff_RBP = &MethodInfo_Void_Add;
      if ((options->max_length & 0xffffffff) != 0) {
        do {
          unaff_R12 = options->m_Items[(long)unaff_RBX];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            puStack_40 = (undefined8 *)0x43674d0;
            il2cpp_runtime_helper_02337ed0();
          }
          puStack_40 = (undefined8 *)0x43674f3;
          pSVar12 = System_String__Concat_3af7150
                              (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Titans/Previews/",
                               unaff_R12,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(pSVar11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar11->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_043675a0;
          uVar3 = (pSVar11->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (pSVar11->fields)._size = uVar3 + 1;
            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar12;
            puStack_40 = (undefined8 *)0x4367532;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,pSVar12);
          }
          else {
            puStack_40 = (undefined8 *)0x436749a;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar11,(Il2CppObject *)pSVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          unaff_RBX = (System_String_o *)((long)&unaff_RBX->klass + 1);
          uVar3 = (uint)options->max_length;
          if ((long)(int)uVar3 <= (long)unaff_RBX) goto label_04367537;
        } while (unaff_RBX < (System_String_o *)(ulong)uVar3);
      }
      puStack_40 = (undefined8 *)0x436755c;
      iVar9 = il2cpp_runtime_helper_022b2ca0();
    }
    if (0 < iVar9) {
      unaff_RBX = options->m_Items[0];
      unaff_RBP = &TypeInfo_ResourcePaths;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        puStack_40 = (undefined8 *)0x436757d;
        il2cpp_runtime_helper_02337ed0();
      }
      puStack_40 = (undefined8 *)0x43675a0;
      System_String__Concat_3af7150
                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Titans/Previews/",unaff_RBX,
                 (MethodInfo *)0x0);
    }
  }
label_043675a0:
  puStack_40 = (undefined8 *)0x43675a5;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pSStack_68 = unaff_RBX;
  pSStack_60 = unaff_R12;
  pUStack_58 = unaff_R13;
  pSStack_50 = options;
  pSStack_48 = pSVar11;
  puStack_40 = unaff_RBP;
  if (g_data_057ae1cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"HairF");
    il2cpp_runtime_helper_023445d0(&"HairM");
    g_data_057ae1cc = '\x01';
  }
  uStack_70 = 0;
  pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  str1 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(pSVar11,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar9 = 0;
    unaff_R13 = (UnityEngine_MonoBehaviour_o *)&"HairM";
    uStack_70 = uStack_70 & 0xffffffff;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) != 0) goto label_043676e1;
    while (il2cpp_runtime_helper_02337ed0(), iVar9 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14)) {
      while( true ) {
        str1 = (Il2CppClass *)System_Int32__ToString((int)&uStack_70 + 4,(MethodInfo *)0x0);
        pSVar12 = "HairM";
        pSVar13 = System_String__Concat_3ae5ba0("HairM",(System_String_o *)str1,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar11->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_043678b7;
        uVar3 = (pSVar11->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar11->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar13;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar11,(Il2CppObject *)pSVar13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        iVar9 = uStack_70._4_4_ + 1;
        uStack_70 = CONCAT44(iVar9,(int)uStack_70);
        if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) break;
label_043676e1:
        if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14) <= iVar9) goto label_04367740;
      }
    }
label_04367740:
    iVar9 = 0;
    unaff_R13 = (UnityEngine_MonoBehaviour_o *)&"HairF";
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) != 0) goto label_043677af;
    while (il2cpp_runtime_helper_02337ed0(), iVar9 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18)) {
      while( true ) {
        str1 = (Il2CppClass *)System_Int32__ToString((int32_t)&uStack_70,(MethodInfo *)0x0);
        pSVar12 = "HairF";
        pSVar13 = System_String__Concat_3ae5ba0("HairF",(System_String_o *)str1,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar11->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_043678b7;
        uVar3 = (pSVar11->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar11->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar13;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar11,(Il2CppObject *)pSVar13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        iVar9 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar9);
        if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) break;
label_043677af:
        if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18) <= iVar9) goto label_0436780e;
      }
    }
label_0436780e:
    pSVar14 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_String_ToArray);
    return pSVar14;
  }
  uStack_70 = uStack_70 & 0xffffffff;
  if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x14) < 1) {
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = TypeInfo_BasicTitanSetup;
    if (0 < *(int *)((long)TypeInfo_BasicTitanSetup[7].fields + 0x18)) {
      str1 = (Il2CppClass *)System_Int32__ToString((int32_t)&uStack_70,(MethodInfo *)0x0);
      puVar16 = &"HairF";
      goto label_043678aa;
    }
  }
  else {
    str1 = (Il2CppClass *)System_Int32__ToString((int)&uStack_70 + 4,(MethodInfo *)0x0);
    puVar16 = &"HairM";
label_043678aa:
    pSVar12 = (System_String_o *)*puVar16;
    System_String__Concat_3ae5ba0(pSVar12,(System_String_o *)str1,(MethodInfo *)0x0);
  }
label_043678b7:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorTitanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae1ce = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (((lVar5 == 0) ||
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
      __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (str1 = MethodInfo_BaseSetSetting_GetSelectedSet,
     pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                         (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar15 == (Settings_BaseSetSetting_o *)0x0)) goto label_04367bc0;
  bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
  str1 = TypeInfo_TitanCustomSet;
  if ((bVar2 <= (pSVar15->klass->_2).naturalAligment) &&
     ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_TitanCustomSet)) {
    pSVar6 = (pSVar15->fields).UniqueId;
    if ((pSVar6 != (Settings_StringSetting_o *)0x0) && (plVar7 = pSVar12[5].monitor, plVar7 != (long *)0x0)) {
      b = (System_String_c *)(pSVar6->fields)._value;
      str1 = (Il2CppClass *)0x1;
      (**(code **)(*plVar7 + 0x1b8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1c0));
      plVar7 = pSVar12[5].monitor;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1d0));
        pSVar13 = pSVar12 + 6;
        if ((pSVar12[6].klass == (System_String_c *)0x0) ||
           (bVar10 = System_String__op_Inequality
                               ((System_String_o *)pSVar12[6].klass,(System_String_o *)b,(MethodInfo *)0x0),
           (char)bVar10 == '\0')) {
          if ((char)pSVar12[5].fields._stringLength == '\0') goto label_04367ba9;
          *(undefined1 *)&pSVar12[5].fields._stringLength = 0;
          pUVar8 = pSVar12[5].monitor;
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            if (pUVar8 != (UI_CharacterEditorTitanMenu_o *)0x0) goto label_04367b6b;
label_04367b87:
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
          }
          else {
            if (pUVar8 == (UI_CharacterEditorTitanMenu_o *)0x0) goto label_04367b87;
label_04367b6b:
            bVar2 = (TypeInfo_CharacterEditorTitanMenu->_2).naturalAligment;
            if ((pUVar8->klass->_2).naturalAligment < bVar2) goto label_04367b87;
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
            if ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CharacterEditorTitanMenu) {
              titanMenu = pUVar8;
            }
          }
          Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,1,(MethodInfo *)0x0);
label_04367ba9:
          pSVar13->klass = b;
          pSVar14 = (System_String_array *)il2cpp_runtime_helper_022b4080(pSVar13,b);
          return pSVar14;
        }
        unaff_R13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (unaff_R13 != (UnityEngine_MonoBehaviour_o *)0x0) {
          bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
          str1 = TypeInfo_CharacterEditorGameManager;
          if (((unaff_R13->klass->_2).naturalAligment < bVar2) ||
             ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_04367bcd;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') goto label_04367ba9;
        pIVar18 = (Il2CppClass *)pSVar13->klass;
        if (g_data_057ae1cf == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
          g_data_057ae1cf = '\x01';
        }
        __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
        str1 = (Il2CppClass *)0x0;
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        *(undefined4 *)&__this_01[1].klass = 0;
        if (__this_01 != (Il2CppObject *)0x0) {
          __this_01[2].klass = pIVar18;
          il2cpp_runtime_helper_022b4080(__this_01 + 2);
          str1 = pIVar18;
          if (unaff_R13 != (UnityEngine_MonoBehaviour_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      (unaff_R13,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
            goto label_04367ba9;
          }
        }
      }
    }
label_04367bc0:
    pSVar15 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0(pSVar15);
label_04367bcd:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
  if (g_data_057ae1cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
    g_data_057ae1cf = '\x01';
  }
  __this_02 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
  uVar17 = 0;
  pSVar14 = __this_02;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02->bounds = 0;
  if (__this_02 == (System_String_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&pSVar14->obj,(MethodInfo *)0x0);
    *(undefined4 *)&pSVar14->bounds = uVar17;
    return extraout_RAX;
  }
  __this_02->m_Items[0] = (System_String_o *)str1;
  il2cpp_runtime_helper_022b4080(__this_02->m_Items,str1);
  return __this_02;
}


// UI.CharacterEditorTitanCostumePanel$$OnCustomSetSelected
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x43678c0

void UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  byte bVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  UI_CharacterEditorMenu_o *pUVar5;
  System_String_o *b;
  System_String_o *a;
  UI_CharacterEditorTitanMenu_o *pUVar6;
  bool_conflict bVar7;
  Settings_BaseSetSetting_o *pSVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *__this_01;
  undefined4 uVar10;
  Il2CppClass *pIVar11;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  UnityEngine_MonoBehaviour_o *unaff_R13;
  
  if (g_data_057ae1ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorTitanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae1ce = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (((lVar3 == 0) ||
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
      __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (method = (MethodInfo *)MethodInfo_BaseSetSetting_GetSelectedSet,
     pSVar8 = Settings_SetSettingsContainer_object___GetSelectedSet
                        (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar8 == (Settings_BaseSetSetting_o *)0x0)) goto label_04367bc0;
  bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
  method = (MethodInfo *)TypeInfo_TitanCustomSet;
  if ((bVar2 <= (pSVar8->klass->_2).naturalAligment) &&
     ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_TitanCustomSet)) {
    pSVar4 = (pSVar8->fields).UniqueId;
    if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
       (pUVar5 = (__this->fields)._menu, pUVar5 != (UI_CharacterEditorMenu_o *)0x0)) {
      b = (pSVar4->fields)._value;
      method = (MethodInfo *)0x1;
      (*(pUVar5->klass->vtable)._8_RebuildPanels.methodPtr)
                (pUVar5,1,(pUVar5->klass->vtable)._8_RebuildPanels.method);
      pUVar5 = (__this->fields)._menu;
      if (pUVar5 != (UI_CharacterEditorMenu_o *)0x0) {
        (*(pUVar5->klass->vtable)._9_ResetCharacter.methodPtr)
                  (pUVar5,1,(pUVar5->klass->vtable)._9_ResetCharacter.method);
        ppSVar1 = &(__this->fields)._previousProfileId;
        a = (__this->fields)._previousProfileId;
        if ((a == (System_String_o *)0x0) ||
           (bVar7 = System_String__op_Inequality(a,b,(MethodInfo *)0x0), (char)bVar7 == '\0')) {
          if ((char)(__this->fields)._shouldGeneratePreviewAfterRebuild == '\0') goto label_04367ba9;
          *(undefined1 *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = 0;
          pUVar6 = (UI_CharacterEditorTitanMenu_o *)(__this->fields)._menu;
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            if (pUVar6 != (UI_CharacterEditorTitanMenu_o *)0x0) goto label_04367b6b;
label_04367b87:
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
          }
          else {
            if (pUVar6 == (UI_CharacterEditorTitanMenu_o *)0x0) goto label_04367b87;
label_04367b6b:
            bVar2 = (TypeInfo_CharacterEditorTitanMenu->_2).naturalAligment;
            if ((((UI_CharacterEditorMenu_c *)pUVar6->klass)->_2).naturalAligment < bVar2) goto label_04367b87;
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
            if ((((UI_CharacterEditorMenu_c *)pUVar6->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                TypeInfo_CharacterEditorTitanMenu) {
              titanMenu = pUVar6;
            }
          }
          Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,1,(MethodInfo *)0x0);
label_04367ba9:
          *ppSVar1 = b;
          il2cpp_runtime_helper_022b4080(ppSVar1,b);
          return;
        }
        unaff_R13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (unaff_R13 != (UnityEngine_MonoBehaviour_o *)0x0) {
          bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
          method = (MethodInfo *)TypeInfo_CharacterEditorGameManager;
          if (((unaff_R13->klass->_2).naturalAligment < bVar2) ||
             ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_04367bcd;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') goto label_04367ba9;
        pIVar11 = (Il2CppClass *)*ppSVar1;
        if (g_data_057ae1cf == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
          g_data_057ae1cf = '\x01';
        }
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
        method = (MethodInfo *)0x0;
        System_Object___ctor(pIVar9,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar9[1].klass = 0;
        if (pIVar9 != (Il2CppObject *)0x0) {
          pIVar9[2].klass = pIVar11;
          il2cpp_runtime_helper_022b4080(pIVar9 + 2);
          method = (MethodInfo *)pIVar11;
          if (unaff_R13 != (UnityEngine_MonoBehaviour_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      (unaff_R13,(System_Collections_IEnumerator_o *)pIVar9,(MethodInfo *)0x0);
            goto label_04367ba9;
          }
        }
      }
    }
label_04367bc0:
    pSVar8 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0(pSVar8);
label_04367bcd:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
  if (g_data_057ae1cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
    g_data_057ae1cf = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
  uVar10 = 0;
  pIVar9 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar9,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar9[1].klass = uVar10;
    return;
  }
  __this_01[2].klass = (Il2CppClass *)method;
  il2cpp_runtime_helper_022b4080(__this_01 + 2,method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$CapturePreviousTitanProfilePreview
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* previousProfileId, System_String_o* currentProfileId, const MethodInfo* method);
// 0x4367be0

System_Collections_IEnumerator_o *
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *previousProfileId,
          System_String_o *currentProfileId,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae1cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
    g_data_057ae1cf = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)previousProfileId;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,previousProfileId);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.CharacterEditorTitanCostumePanel$$OnCharacterChanged
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCharacterChanged (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4367c70

void UI_CharacterEditorTitanCostumePanel__OnCharacterChanged
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer vtableDispatch;
  UI_KeybindPopup_o *pUVar2;
  UI_CharacterEditorMenu_o *pUVar3;
  UI_KeybindPopup_o *titanMenu;
  
  pUVar3 = (__this->fields)._menu;
  if (pUVar3 != (UI_CharacterEditorMenu_o *)0x0) {
    vtableDispatch = (pUVar3->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtableDispatch)(pUVar3,0,(pUVar3->klass->vtable)._9_ResetCharacter.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorTitanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae1d0 = '\x01';
  }
  pUVar2 = (pUVar3->fields).KeybindPopup;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar2 != (UI_KeybindPopup_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorTitanMenu->_2).naturalAligment;
    if (bVar1 <= (pUVar2->klass->_2).naturalAligment) {
      titanMenu = (UI_KeybindPopup_o *)0x0;
      if ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorTitanMenu) {
        titanMenu = pUVar2;
      }
      Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
                ((UI_CharacterEditorTitanMenu_o *)titanMenu,0,(MethodInfo *)0x0);
      return;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
            ((UI_CharacterEditorTitanMenu_o *)0x0,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$GeneratePreviewForCurrentSet
// il2cpp: void UI_CharacterEditorTitanCostumePanel__GeneratePreviewForCurrentSet (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4367ca0

void UI_CharacterEditorTitanCostumePanel__GeneratePreviewForCurrentSet
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorTitanMenu_o *pUVar2;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  
  if (g_data_057ae1d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorTitanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae1d0 = '\x01';
  }
  pUVar2 = (UI_CharacterEditorTitanMenu_o *)(__this->fields)._menu;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar2 != (UI_CharacterEditorTitanMenu_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorTitanMenu->_2).naturalAligment;
    if (bVar1 <= (((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).naturalAligment) {
      titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
      if ((((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorTitanMenu) {
        titanMenu = pUVar2;
      }
      Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,0,(MethodInfo *)0x0);
      return;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
            ((UI_CharacterEditorTitanMenu_o *)0x0,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnButtonClick (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4367d40

void UI_CharacterEditorTitanCostumePanel__OnButtonClick
               (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  UI_SetNamePopup_o *__this_00;
  UI_ImportPopup_o *__this_01;
  UI_SelectListPopup_o *__this_02;
  Settings_BaseSetSetting_c *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_SetSettingsContainer_T__o *pSVar7;
  UI_ConfirmPopup_o *__this_03;
  Settings_StringSetting_o *pSVar8;
  UI_ExportPopup_o *__this_04;
  char cVar9;
  uint32_t uVar10;
  bool_conflict bVar11;
  Il2CppObject *pIVar12;
  UnityEngine_Events_UnityAction_o *pUVar13;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *items;
  long *plVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  Settings_BaseSetSetting_o *pSVar18;
  Settings_TitanCustomSet_o *set;
  System_String_o **ppSVar19;
  
  if (g_data_057ae1d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanDeleteSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__25_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"QuitWithoutSaveConfirm");
    il2cpp_runtime_helper_023445d0(&"Presets");
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"SaveQuit");
    il2cpp_runtime_helper_023445d0(&"Quit");
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"DeleteWarning");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    il2cpp_runtime_helper_023445d0(&"New set");
    g_data_057ae1d1 = '\x01';
  }
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar12[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar12 + 1,__this);
    pIVar12[1].monitor = name;
    il2cpp_runtime_helper_022b4080(&pIVar12[1].monitor);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar4 != 0) {
      __this_00 = *(UI_SetNamePopup_o **)(lVar4 + 0x88);
      pSVar16 = pIVar12[1].monitor;
      uVar10 = _PrivateImplementationDetails___ComputeStringHash(pSVar16,(MethodInfo *)0x0);
      if (uVar10 < 0x5cb46bab) {
        if (uVar10 < 0x573e0af5) {
          if (uVar10 == 0x547f6497) {
            bVar11 = System_String__op_Equality(pSVar16,"SaveQuit",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            plVar14 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x238))();
              set = *(Settings_TitanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
              if (set == (Settings_TitanCustomSet_o *)0x0) goto label_043684f2;
              bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
              if (((((Settings_BaseSetSetting_c *)set->klass)->_2).naturalAligment < bVar1) ||
                 ((((Settings_BaseSetSetting_c *)set->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  TypeInfo_CharacterEditorGameManager)) goto label_0436896b;
              pSVar6 = (set->fields).Head;
              if (pSVar6 == (Settings_IntSetting_o *)0x0) {
label_043684f2:
                if (g_data_057ae1d3 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_SaveQuitCaptureCoroutineInternal_d__27);
                  g_data_057ae1d3 = '\x01';
                }
                pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveQuitCaptureCoroutineInternal_d__27);
                System_Object___ctor(pIVar12,(MethodInfo *)0x0);
                *(undefined4 *)&pIVar12[1].klass = 0;
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar12,
                           (MethodInfo *)0x0);
                return;
              }
              bVar1 = (TypeInfo_DummyTitan->_2).naturalAligment;
              if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyTitan)) goto label_043684f2;
              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
              if ((lVar3 != 0) &&
                 (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
                 pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) {
                set = (Settings_TitanCustomSet_o *)
                      Settings_SetSettingsContainer_object___GetSelectedSet(pSVar7,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (set != (Settings_TitanCustomSet_o *)0x0) {
                  bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
                  if (((set->klass->_2).naturalAligment < bVar1) ||
                     ((set->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto label_0436896b;
                }
                if (*(Characters_BasicTitanSetup_o **)&pSVar6[1].fields != (Characters_BasicTitanSetup_o *)0x0
                   ) {
                  Characters_BasicTitanSetup__Load
                            (*(Characters_BasicTitanSetup_o **)&pSVar6[1].fields,set,(MethodInfo *)0x0);
                  goto label_043684f2;
                }
              }
            }
          }
          else {
            if (uVar10 != 0x573e0af4) {
              return;
            }
            bVar11 = System_String__op_Equality(pSVar16,"Import",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar3 != 0) {
              __this_01 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
              pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UI_ImportPopup_o *)0x0) {
                UI_ImportPopup__Show(__this_01,pUVar13,1,"",(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else if (uVar10 == 0x5797ea6a) {
          bVar11 = System_String__op_Equality(pSVar16,"Delete",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            return;
          }
          if ((lVar3 != 0) &&
             (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) !=
              (Settings_SetSettingsContainer_T__o *)0x0)) {
            bVar11 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                               (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
            if ((char)bVar11 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar3 != 0) {
              __this_03 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
              pSVar16 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
              pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pSVar17 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
              goto joined_r0x04368696;
            }
          }
        }
        else {
          if (uVar10 != 0x5cb46baa) {
            return;
          }
          bVar11 = System_String__op_Equality(pSVar16,"LoadPreset",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            return;
          }
          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
          if ((lVar3 != 0) &&
             (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
             pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            collection = Settings_SetSettingsContainer_object___GetSetNames(pSVar7,MethodInfo_String_GetSetNames);
            items = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            System_Collections_Generic_List_object____ctor_362ba10
                      ((System_Collections_Generic_List_object__o *)items,
                       (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar3 != 0) {
              __this_02 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
              pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_02 != (UI_SelectListPopup_o *)0x0) {
                UI_SelectListPopup__ShowLoad
                          (__this_02,items,"Presets",pUVar13,(UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        if (uVar10 < 0x990de47e) {
          if (uVar10 == 0x990de47d) {
            ppSVar19 = &"Create";
            bVar11 = System_String__op_Equality(pSVar16,"Create",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          }
          else {
            if (uVar10 != 0x658f3664) {
              return;
            }
            ppSVar19 = &"Copy";
            bVar11 = System_String__op_Equality(pSVar16,"Copy",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          }
          UnityEngine_Events_UnityAction___ctor();
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = UI_UIManager__GetLocaleCommon(*ppSVar19,(MethodInfo *)0x0);
          pSVar16 = "New set";
joined_r0x043685b6:
          if (__this_00 != (UI_SetNamePopup_o *)0x0) {
            UI_SetNamePopup__Show(__this_00,pSVar16,pUVar13,pSVar17,(System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
          goto label_04368963;
        }
        if (uVar10 != 0xc7b3d356) {
          if (uVar10 == 0xc80631f3) {
            bVar11 = System_String__op_Equality(pSVar16,"Rename",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            if ((((lVar3 != 0) &&
                 (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) !=
                  (Settings_SetSettingsContainer_T__o *)0x0)) &&
                (pSVar18 = Settings_SetSettingsContainer_object___GetSelectedSet
                                     (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
                pSVar18 != (Settings_BaseSetSetting_o *)0x0)) &&
               (pSVar8 = (pSVar18->fields).Name, pSVar8 != (Settings_StringSetting_o *)0x0)) {
              pSVar16 = (pSVar8->fields)._value;
              pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar17 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
              goto joined_r0x043685b6;
            }
          }
          else {
            if (uVar10 != 0xe86349d3) {
              return;
            }
            bVar11 = System_String__op_Equality(pSVar16,"Export",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            if (((lVar3 != 0) &&
                (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) !=
                 (Settings_SetSettingsContainer_T__o *)0x0)) &&
               (set = (Settings_TitanCustomSet_o *)
                      Settings_SetSettingsContainer_object___GetSelectedSet
                                (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
               set != (Settings_TitanCustomSet_o *)0x0)) {
              bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
              if (((((Settings_BaseSetSetting_c *)set->klass)->_2).naturalAligment < bVar1) ||
                 ((((Settings_BaseSetSetting_c *)set->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  TypeInfo_TitanCustomSet)) goto label_0436896b;
              pSVar5 = (Settings_BaseSetSetting_c *)set->klass;
              bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
              if (((pSVar5->_2).naturalAligment < bVar1) ||
                 ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto label_0436896b;
              plVar14 = (long *)(*(pSVar5->vtable)._5_SerializeToJsonObject.methodPtr)(set);
              if (plVar14 == (long *)0x0) goto label_04368963;
              cVar9 = (**(code **)(*plVar14 + 0x2f8))(plVar14,"Preset",*(undefined8 *)(*plVar14 + 0x300));
              if (cVar9 == '\0') {
                if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04368871;
label_0436837e:
                il2cpp_runtime_helper_02337ed0();
                lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              else {
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
                (**(code **)(*plVar14 + 0x1b8))
                          (plVar14,"Preset",pSVar15,*(undefined8 *)(*plVar14 + 0x1c0));
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0436837e;
label_04368871:
                lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              if (lVar3 != 0) {
                __this_04 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
                pSVar16 = (System_String_o *)
                          (**(code **)(*plVar14 + 0x318))(plVar14,4,*(undefined8 *)(*plVar14 + 800));
                if (__this_04 != (UI_ExportPopup_o *)0x0) {
                  UI_ExportPopup__Show(__this_04,pSVar16,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto label_04368963;
        }
        bVar11 = System_String__op_Equality(pSVar16,"Quit",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 == 0) goto label_04368963;
        __this_03 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
        pSVar16 = UI_UIManager__GetLocaleCommon("QuitWithoutSaveConfirm",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pUVar13 = *(UnityEngine_Events_UnityAction_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          if (pUVar13 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043688e2;
label_04368805:
          iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
        }
        else {
          pUVar13 = *(UnityEngine_Events_UnityAction_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          if (pUVar13 != (UnityEngine_Events_UnityAction_o *)0x0) goto label_04368805;
label_043688e2:
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          lVar3 = *(long *)(TypeInfo_c + 0xb8);
          *(UnityEngine_Events_UnityAction_o **)(lVar3 + 8) = pUVar13;
          il2cpp_runtime_helper_022b4080(lVar3 + 8);
          iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
joined_r0x04368696:
        if (__this_03 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_03,pSVar16,pUVar13,pSVar17,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_04368963:
  set = (Settings_TitanCustomSet_o *)il2cpp_runtime_helper_022b2c90();
label_0436896b:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)set,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$OnCostumeSetOperationFinish
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43689d0

void UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
               (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Generic_List_T__o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  UI_ImportPopup_o *__this_01;
  System_String_o *value;
  Settings_BoolSetting_o *__this_02;
  char cVar6;
  bool_conflict bVar7;
  int iVar8;
  VirtualInvokeData *pVVar9;
  Settings_BaseSetSetting_o *pSVar10;
  Settings_ListSetting_T__c *pSVar11;
  MethodInfo *method_00;
  undefined8 *puVar12;
  Il2CppRuntimeInterfaceOffsetPair *pIVar13;
  Settings_ListSetting_T__o *unaff_RBX;
  long lVar14;
  Settings_IntSetting_o *pSVar15;
  undefined1 auVar16 [12];
  
  if (g_data_057ae1d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CopySelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DeleteSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"Import");
    g_data_057ae1d2 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04368b1c;
label_04368a00:
    lVar14 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04368a00;
label_04368b1c:
    il2cpp_runtime_helper_02337ed0();
    lVar14 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if ((lVar14 != 0) && (lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68), lVar3 != 0)) {
    unaff_RBX = *(Settings_ListSetting_T__o **)(lVar14 + 0x88);
    __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20);
    bVar7 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      bVar7 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        bVar7 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          bVar7 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            method_00 = "Import";
            bVar7 = System_String__op_Equality(name,(System_String_o *)"Import",(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') goto label_04368df8;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar14 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar14 == 0) goto label_04369053;
            __this_01 = *(UI_ImportPopup_o **)(lVar14 + 0x70);
            if (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
label_04368f3a:
              il2cpp_runtime_helper_022b2c90();
label_04368f3f:
              il2cpp_runtime_helper_022b2c90();
label_04368f44:
              il2cpp_runtime_helper_022b2c90();
label_04368f49:
              il2cpp_runtime_helper_022b2c90();
label_04368f4e:
              il2cpp_runtime_helper_022b2c90();
label_04368f53:
              il2cpp_runtime_helper_022b2c90();
label_04368f58:
              il2cpp_runtime_helper_022b2c90();
label_04368f5d:
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) goto label_04368f3a;
              pSVar5 = (pSVar10->fields).Name;
              if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_04368f3f;
              value = (pSVar5->fields)._value;
              pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
              if (__this_01 == (UI_ImportPopup_o *)0x0) goto label_04368f44;
              pSVar5 = (__this_01->fields).ImportSetting;
              if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_04368f49;
              if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) goto label_04368f4e;
              (*(pSVar10->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                        (pSVar10,(pSVar5->fields)._value,
                         (pSVar10->klass->vtable)._8_DeserializeFromJsonString.method);
              pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) goto label_04368f53;
              __this_02 = (pSVar10->fields).Preset;
              if (__this_02 == (Settings_BoolSetting_o *)0x0) goto label_04368f58;
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)__this_02,0,MethodInfo_Void_set_Value);
              pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
              if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) goto label_04368f5d;
              pSVar5 = (pSVar10->fields).Name;
              if (pSVar5 != (Settings_StringSetting_o *)0x0) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)value,MethodInfo_Void_set_Value);
                method_00 = (__this_01->klass->vtable)._22_Hide.method;
                (*(__this_01->klass->vtable)._22_Hide.methodPtr)(__this_01);
                goto label_04368df8;
              }
            }
            auVar16 = il2cpp_runtime_helper_022b2c90();
            if (auVar16._8_4_ != 1) {
              _Unwind_Resume(auVar16._0_8_);
            }
            unaff_RBX = (Settings_ListSetting_T__o *)__cxa_begin_catch(auVar16._0_8_);
            cVar6 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(unaff_RBX->klass->_1).image);
            if (cVar6 == '\0') goto label_04369058;
            __cxa_end_catch();
            if (__this_01 != (UI_ImportPopup_o *)0x0) {
              method_00 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&"Invalid titan preset.");
              UI_ImportPopup__ShowError(__this_01,(System_String_o *)method_00,(MethodInfo *)0x0);
label_04368df8:
              UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected(__this,method_00);
              return;
            }
          }
          else if (((unaff_RBX != (Settings_ListSetting_T__o *)0x0) &&
                   (pSVar4 = unaff_RBX[5].fields._value, pSVar4 != (System_Collections_Generic_List_T__o *)0x0
                   )) && (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            Settings_SetSettingsContainer_object___CopySelectedSet
                      (__this_00,*(System_String_o **)&(pSVar4->fields)._size,MethodInfo_Void_CopySelectedSet);
            unaff_RBX = (__this_00->fields).Sets;
            if (unaff_RBX != (Settings_ListSetting_T__o *)0x0) {
              pSVar15 = (__this_00->fields).SelectedSetIndex;
              pSVar11 = unaff_RBX->klass;
              uVar2._0_1_ = (pSVar11->_2).rank;
              uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
              if ((ulong)uVar2 != 0) {
                pIVar13 = (pSVar11->_1).interfaceOffsets;
                lVar14 = 0;
                do {
                  if (*(long *)((long)&pIVar13->interfaceType + lVar14) == TypeInfo_IListSetting) goto label_04368db4;
                  lVar14 = lVar14 + 0x10;
                } while ((ulong)uVar2 << 4 != lVar14);
              }
              goto label_04368c03;
            }
          }
        }
        else if (((__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) &&
                 (pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
                 pSVar10 != (Settings_BaseSetSetting_o *)0x0)) &&
                ((unaff_RBX != (Settings_ListSetting_T__o *)0x0 &&
                 ((pSVar4 = unaff_RBX[5].fields._value, pSVar4 != (System_Collections_Generic_List_T__o *)0x0
                  && (pSVar5 = (pSVar10->fields).Name, pSVar5 != (Settings_StringSetting_o *)0x0)))))) {
          method_00 = *(MethodInfo **)&(pSVar4->fields)._size;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
          goto label_04368df8;
        }
      }
      else if (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) {
        Settings_SetSettingsContainer_object___DeleteSelectedSet(__this_00,MethodInfo_Void_DeleteSelectedSet);
        pSVar15 = (__this_00->fields).SelectedSetIndex;
        if (pSVar15 != (Settings_IntSetting_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar15,0,MethodInfo_Void_set_Value);
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)0x0);
          goto label_04368df8;
        }
      }
    }
    else if (((unaff_RBX != (Settings_ListSetting_T__o *)0x0) &&
             (pSVar4 = unaff_RBX[5].fields._value, pSVar4 != (System_Collections_Generic_List_T__o *)0x0)) &&
            (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
      Settings_SetSettingsContainer_object___CreateSet
                (__this_00,*(System_String_o **)&(pSVar4->fields)._size,MethodInfo_Void_CreateSet);
      unaff_RBX = (__this_00->fields).Sets;
      if (unaff_RBX != (Settings_ListSetting_T__o *)0x0) {
        pSVar15 = (__this_00->fields).SelectedSetIndex;
        pSVar11 = unaff_RBX->klass;
        uVar1._0_1_ = (pSVar11->_2).rank;
        uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar13 = (pSVar11->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar13->interfaceType + lVar14) == TypeInfo_IListSetting) goto label_04368db4;
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar14);
        }
label_04368c03:
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IListSetting,0);
        goto label_04368dc7;
      }
    }
  }
  goto label_04369053;
label_04368db4:
  pVVar9 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar13->offset + lVar14);
label_04368dc7:
  iVar8 = (*pVVar9->methodPtr)(unaff_RBX,pVVar9->method);
  if (pSVar15 != (Settings_IntSetting_o *)0x0) {
    method_00 = (MethodInfo *)(ulong)(iVar8 - 1U);
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar15,iVar8 - 1U,MethodInfo_Void_set_Value);
    *(undefined1 *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = 1;
    goto label_04368df8;
  }
label_04369053:
  il2cpp_runtime_helper_022b2c90();
label_04369058:
  puVar12 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar12 = unaff_RBX->klass;
  __cxa_throw(puVar12,&PTR_PTR_05215060,0);
}


// UI.CharacterEditorTitanCostumePanel$$SaveQuitCaptureCoroutineInternal
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4368980

System_Collections_IEnumerator_o *
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ae1d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveQuitCaptureCoroutineInternal_d__27);
    g_data_057ae1d3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveQuitCaptureCoroutineInternal_d__27);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorTitanCostumePanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___ctor (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x43690c0

void UI_CharacterEditorTitanCostumePanel___ctor
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_0
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_0 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x43690d0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_0
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Quit");
    g_data_057ae1d4 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this,"Quit",in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_1
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_1 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4369110

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_1
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SaveQuit");
    g_data_057ae1d5 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this,"SaveQuit",in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_2
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_2 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4369150

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_2
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected(__this,method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_3
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_3 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4369160

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_3
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Il2CppObject *__this_00;
  UI_CharacterEditorMenu_o *pUVar4;
  UI_KeybindPopup_o *pUVar5;
  long *plVar6;
  undefined8 in_R8;
  undefined8 in_R9;
  
  pUVar4 = (__this->fields)._menu;
  if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = (pUVar4->klass->vtable)._9_ResetCharacter.methodPtr;
    (*UNRECOVERED_JUMPTABLE_01)
              (pUVar4,0,(pUVar4->klass->vtable)._9_ResetCharacter.method,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  uVar1 = il2cpp_runtime_helper_022b2c90();
  pUVar5 = (pUVar4->fields).KeybindPopup;
  if (pUVar5 != (UI_KeybindPopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = (pUVar5->klass->vtable)._9_get_VerticalPadding.methodPtr;
    (*UNRECOVERED_JUMPTABLE_01)
              (pUVar5,0,(pUVar5->klass->vtable)._9_get_VerticalPadding.method,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  plVar6 = *(long **)&(pUVar5->fields)._currentAnimationValue;
  if (plVar6 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x1c8);
    (*UNRECOVERED_JUMPTABLE_00)(plVar6,0,*(undefined8 *)(*plVar6 + 0x1d0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  plVar6 = (long *)plVar6[0x10];
  if (plVar6 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x1c8);
    (*UNRECOVERED_JUMPTABLE_00)(plVar6,0,*(undefined8 *)(*plVar6 + 0x1d0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar6 = (long *)plVar6[0x10];
  if (plVar6 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x1c8);
    (*UNRECOVERED_JUMPTABLE_00)(plVar6,0,*(undefined8 *)(*plVar6 + 0x1d0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar6 = (long *)plVar6[0x10];
  if (plVar6 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x1c8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar6,0,*(undefined8 *)(*plVar6 + 0x1d0),UNRECOVERED_JUMPTABLE_00,in_R8,in_R9,uVar3,uVar2,
               uVar1);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae1d6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_4
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_4 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4369190

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_4
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_01;
  code *vtableDispatch;
  undefined8 uVar1;
  undefined8 uVar2;
  Il2CppObject *__this_00;
  UI_CharacterEditorMenu_o *pUVar3;
  UI_KeybindPopup_o *pUVar4;
  long *plVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  
  pUVar3 = (__this->fields)._menu;
  if (pUVar3 != (UI_CharacterEditorMenu_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = (pUVar3->klass->vtable)._9_ResetCharacter.methodPtr;
    (*UNRECOVERED_JUMPTABLE_01)
              (pUVar3,0,(pUVar3->klass->vtable)._9_ResetCharacter.method,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  uVar1 = il2cpp_runtime_helper_022b2c90();
  pUVar4 = (pUVar3->fields).KeybindPopup;
  if (pUVar4 != (UI_KeybindPopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = (pUVar4->klass->vtable)._9_get_VerticalPadding.methodPtr;
    (*UNRECOVERED_JUMPTABLE_01)
              (pUVar4,0,(pUVar4->klass->vtable)._9_get_VerticalPadding.method,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)&(pUVar4->fields)._currentAnimationValue;
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1c8);
    (*vtableDispatch)(plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0),vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = (long *)plVar5[0x10];
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1c8);
    (*vtableDispatch)(plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0),vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = (long *)plVar5[0x10];
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x1c8);
    (*vtableDispatch)
              (plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0),vtableDispatch,in_R8,in_R9,uVar2,uVar1);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae1d6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_5
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_5 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x43691c0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_5
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  Il2CppObject *__this_00;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_KeybindPopup_o *pUVar3;
  long *plVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_CharacterEditorMenu_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = (pUVar2->klass->vtable)._9_ResetCharacter.methodPtr;
    (*UNRECOVERED_JUMPTABLE_01)
              (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  uVar1 = il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).KeybindPopup;
  if (pUVar3 != (UI_KeybindPopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = (pUVar3->klass->vtable)._9_get_VerticalPadding.methodPtr;
    (*UNRECOVERED_JUMPTABLE_01)
              (pUVar3,0,(pUVar3->klass->vtable)._9_get_VerticalPadding.method,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)&(pUVar3->fields)._currentAnimationValue;
  if (plVar4 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x1c8);
    (*UNRECOVERED_JUMPTABLE_00)(plVar4,0,*(undefined8 *)(*plVar4 + 0x1d0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar4 = (long *)plVar4[0x10];
  if (plVar4 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x1c8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar4,0,*(undefined8 *)(*plVar4 + 0x1d0),UNRECOVERED_JUMPTABLE_00,in_R8,in_R9,uVar1);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae1d6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_6
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_6 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x43691f0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_6
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_01;
  long *plVar1;
  code *vtableDispatch;
  Il2CppObject *__this_00;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_KeybindPopup_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_CharacterEditorMenu_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = (pUVar2->klass->vtable)._9_ResetCharacter.methodPtr;
    (*UNRECOVERED_JUMPTABLE_01)
              (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (pUVar2->fields).KeybindPopup;
  if (pUVar3 != (UI_KeybindPopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = (pUVar3->klass->vtable)._9_get_VerticalPadding.methodPtr;
    (*UNRECOVERED_JUMPTABLE_01)
              (pUVar3,0,(pUVar3->klass->vtable)._9_get_VerticalPadding.method,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar1 = *(long **)&(pUVar3->fields)._currentAnimationValue;
  if (plVar1 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar1 + 0x1c8);
    (*vtableDispatch)(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0),vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae1d6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_7
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_7 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4369220

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_7
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UI_KeybindPopup_o *pUVar1;
  Il2CppObject *__this_00;
  UI_CharacterEditorMenu_o *pUVar2;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_CharacterEditorMenu_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar2->klass->vtable)._9_ResetCharacter.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (pUVar2->fields).KeybindPopup;
  if (pUVar1 != (UI_KeybindPopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar1->klass->vtable)._9_get_VerticalPadding.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar1,0,(pUVar1->klass->vtable)._9_get_VerticalPadding.method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae1d6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_8
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_8 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4369250

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_8
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *__this_00;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtableDispatch)(pUVar1,0,(pUVar1->klass->vtable)._9_ResetCharacter.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae1d6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


