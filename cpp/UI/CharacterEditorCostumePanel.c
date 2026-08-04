// Type: UI.CharacterEditorCostumePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorCostumePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCostumePanel.cs
// --------------------------------

// UI.CharacterEditorCostumePanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorCostumePanel___c___cctor (const MethodInfo* method);
// 0x435d450

void UI_CharacterEditorCostumePanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae189 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae189 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CharacterEditorCostumePanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c___ctor (UI_CharacterEditorCostumePanel___c_o* __this, const MethodInfo* method);
// 0x435d4c0

void UI_CharacterEditorCostumePanel___c___ctor
               (UI_CharacterEditorCostumePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c$$<OnButtonClick>b__33_6
// il2cpp: void UI_CharacterEditorCostumePanel___c___OnButtonClick_b__33_6 (UI_CharacterEditorCostumePanel___c_o* __this, const MethodInfo* method);
// 0x435d4d0

void UI_CharacterEditorCostumePanel___c___OnButtonClick_b__33_6
               (UI_CharacterEditorCostumePanel___c_o *__this,MethodInfo *method)

{
  long *plVar1;
  
  if (g_data_057ae18a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae18a = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews((MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews((MethodInfo *)0x0);
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x248))();
      if (g_data_057ae1ae == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
        g_data_057ae1ae = '\x01';
      }
      **(undefined2 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) = 0;
      ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae1ae = '\x01';
  }
  **(undefined2 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) = 0;
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x435d5f0

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___ctor
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__27
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__27 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x435d600

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__27
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,(__this->fields).button,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_1$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_1___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x435d620

void UI_CharacterEditorCostumePanel___c__DisplayClass21_1___ctor
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_1$$<Setup>b__28
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_1___Setup_b__28 (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x435d630

void UI_CharacterEditorCostumePanel___c__DisplayClass21_1___Setup_b__28
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,(__this->fields).button,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x435d650

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___ctor
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__0
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__0 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x435d660

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__0
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  UI_CharacterEditorCostumePanel_o *pUVar2;
  UI_CharacterEditorCostumePanel_o *pUVar3;
  
  uVar1 = SUB84(method,0);
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorCostumePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar3->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae18b == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae18b = '\x01';
  }
  pUVar2 = (UI_CharacterEditorCostumePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish(pUVar2,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar3->fields).m_CachedPtr = uVar1;
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__1
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__1 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x435d680

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__1
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  UI_CharacterEditorCostumePanel_o *pUVar2;
  UI_CharacterEditorCostumePanel_o *pUVar3;
  
  uVar1 = SUB84(method,0);
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_CharacterEditorCostumePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(System_String_o *)(pUVar3->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae18b == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae18b = '\x01';
  }
  pUVar2 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish(pUVar2,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar3->fields).m_CachedPtr = uVar1;
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__2
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__2 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x435d6a0

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__2
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  UI_CharacterEditorCostumePanel_o *pUVar2;
  UI_CharacterEditorCostumePanel_o *pUVar3;
  
  uVar1 = SUB84(method,0);
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae18b == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae18b = '\x01';
  }
  pUVar2 = (UI_CharacterEditorCostumePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish(pUVar2,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar3 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar3,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar3->fields).m_CachedPtr = uVar1;
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__3
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__3 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x435d6c0

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__3
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  UI_CharacterEditorCostumePanel_o *pUVar2;
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  uVar1 = SUB84(method,0);
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (pUVar2,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae18b == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae18b = '\x01';
  }
  pUVar2 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (pUVar2 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish(pUVar2,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_CharacterEditorCostumePanel_o *)(pUVar2->fields).m_CachedPtr;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(System_String_o *)(pUVar2->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar1;
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__4
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__4 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x435d6e0

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__4
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  UI_CharacterEditorCostumePanel_o *__this_00;
  UI_CharacterEditorCostumePanel_o *__this_01;
  
  uVar1 = SUB84(method,0);
  if (g_data_057ae18b == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae18b = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish(__this_00,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UI_CharacterEditorCostumePanel_o *)(__this_00->fields).m_CachedPtr;
  if (__this_01 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_01,(System_String_o *)(__this_00->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->fields).m_CachedPtr = uVar1;
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__5
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__5 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x435d720

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__5
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  uVar1 = SUB84(method,0);
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar1;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x435d740

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x435d760

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__MoveNext (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x435d770

bool_conflict
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__MoveNext
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_DummyHuman_o *__this_00;
  long lVar3;
  Settings_TypedSetting_bool__o *__this_01;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_02;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_03;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_04;
  
  __this_02 = __this;
  if (g_data_057ae18c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_02 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae18c = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (__this_02 = *(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o **)
                     (lVar3 + 0x60),
       __this_02 != (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_02,
                 (uint)(byte)(__this->fields)._originalGlobalEnabled_5__2,MethodInfo_Void_set_Value);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
        __this_01 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x58);
        __this_02 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)0x0;
        if (__this_01 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (__this_01,(uint)*(byte *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1),
                     MethodInfo_Void_set_Value);
          return 0;
        }
      }
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar4 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
    }
    (__this->fields).__1__state = -1;
    __this_02 = *(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o **)
                 (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_02 == (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)0x0) {
      return 0;
    }
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((((Settings_TypedSetting_bool__c *)__this_02->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_TypedSetting_bool__c *)__this_02->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_CharacterEditorGameManager)) goto label_0435dac1;
    __this_00 = *(Characters_DummyHuman_o **)&__this_02[1].fields;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) {
      return 0;
    }
    bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((__this_00->klass->_2).naturalAligment < bVar1) {
      return 0;
    }
    if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman) {
      return 0;
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (__this_03 = *(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o **)
                     (lVar3 + 0x60),
       __this_03 != (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)0x0)) {
      *(undefined1 *)&(__this->fields)._originalGlobalEnabled_5__2 =
           *(undefined1 *)((long)&(__this_03->fields).__1__state + 1);
      if (*(long *)(lVar3 + 0x58) != 0) {
        *(undefined1 *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1) =
             *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x11);
        if (g_data_057ae187 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
          g_data_057ae187 = '\x01';
        }
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_03,(uint)**(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8),
                   MethodInfo_Void_set_Value);
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        __this_02 = __this_03;
        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
          __this_04 = *(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o **)
                       (lVar3 + 0x58);
          if (g_data_057ae188 == '\0') {
            __this_03 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
                        &TypeInfo_CharacterEditorSkinsPanel;
            il2cpp_runtime_helper_023445d0();
            g_data_057ae188 = '\x01';
          }
          __this_02 = __this_03;
          if ((__this_04 != (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)0x0)
             && (Settings_TypedSetting_bool___set_Value
                           ((Settings_TypedSetting_bool__o *)__this_04,
                            (uint)*(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1),MethodInfo_Void_set_Value),
                __this_02 = __this_04, __this_00 != (Characters_DummyHuman_o *)0x0)) {
            Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar4 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar4;
            uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435dac1:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(__this_02->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x435dad0

Il2CppObject *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x435dae0

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
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


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x435db20

Il2CppObject *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x435db30

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x435db50

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__MoveNext (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x435db60

bool_conflict
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__MoveNext
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_DummyHuman_o *__this_00;
  long lVar3;
  Settings_TypedSetting_bool__o *__this_01;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_02;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_03;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_04;
  
  __this_02 = __this;
  if (g_data_057ae18d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_02 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae18d = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (__this_02 = *(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o **)(lVar3 + 0x60),
       __this_02 != (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_02,
                 (uint)(byte)(__this->fields)._originalGlobalEnabled_5__2,MethodInfo_Void_set_Value);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
        __this_01 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x58);
        __this_02 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)0x0;
        if (__this_01 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (__this_01,(uint)*(byte *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1),
                     MethodInfo_Void_set_Value);
          return 0;
        }
      }
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar4 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
    }
    (__this->fields).__1__state = -1;
    __this_02 = *(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o **)
                 (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_02 == (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)0x0) {
      return 0;
    }
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((((Settings_TypedSetting_bool__c *)__this_02->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_TypedSetting_bool__c *)__this_02->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_CharacterEditorGameManager)) goto label_0435deb1;
    __this_00 = *(Characters_DummyHuman_o **)&__this_02[1].fields;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) {
      return 0;
    }
    bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((__this_00->klass->_2).naturalAligment < bVar1) {
      return 0;
    }
    if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman) {
      return 0;
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (__this_03 = *(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o **)(lVar3 + 0x60),
       __this_03 != (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)0x0)) {
      *(undefined1 *)&(__this->fields)._originalGlobalEnabled_5__2 =
           *(undefined1 *)((long)&(__this_03->fields).__1__state + 1);
      if (*(long *)(lVar3 + 0x58) != 0) {
        *(undefined1 *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1) =
             *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x11);
        if (g_data_057ae187 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
          g_data_057ae187 = '\x01';
        }
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_03,(uint)**(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8),
                   MethodInfo_Void_set_Value);
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        __this_02 = __this_03;
        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
          __this_04 = *(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o **)(lVar3 + 0x58);
          if (g_data_057ae188 == '\0') {
            __this_03 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)&TypeInfo_CharacterEditorSkinsPanel;
            il2cpp_runtime_helper_023445d0();
            g_data_057ae188 = '\x01';
          }
          __this_02 = __this_03;
          if ((__this_04 != (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)0x0) &&
             (Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)__this_04,
                         (uint)*(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1),MethodInfo_Void_set_Value),
             __this_02 = __this_04, __this_00 != (Characters_DummyHuman_o *)0x0)) {
            Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar4 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar4;
            uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435deb1:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(__this_02->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x435dec0

Il2CppObject *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x435ded0

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,MethodInfo *method)

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


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x435df10

Il2CppObject *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28___ctor (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x435df20

void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28___ctor
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x435df40

void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__MoveNext (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x435df50

bool_conflict
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__MoveNext
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this,
          MethodInfo *method)

{
  Settings_HumanCustomSettings_o **ppSVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  UI_CharacterEditorCostumePanel_o *__this_00;
  Settings_ListSetting_T__o *pSVar5;
  Settings_ListSetting_T__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Settings_HumanCustomSettings_o *pSVar8;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar9;
  Settings_IntSetting_o *pSVar10;
  void *pvVar11;
  Characters_DummyHuman_o *pCVar12;
  Settings_StringSetting_o *pSVar13;
  Characters_HumanSetup_o *pCVar14;
  UI_ConfirmPopup_c *pUVar15;
  bool_conflict bVar16;
  Il2CppMethodPointer *ppIVar17;
  Il2CppClass *pIVar18;
  Il2CppObject *pIVar19;
  Il2CppClass *pIVar20;
  int index;
  Characters_DummyHuman_o **ppCVar21;
  UI_ConfirmPopup_o *unaff_RBP;
  UI_ConfirmPopup_o *pUVar22;
  Il2CppClass *b;
  long lVar23;
  Settings_HumanCustomSet_o *pSVar24;
  Settings_HumanCustomSet_o *unaff_R13;
  Settings_HumanCustomSet_o *pSVar25;
  
  if (g_data_057ae18e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae18e = '\x01';
  }
  uVar4 = (__this->fields).__1__state;
  if (3 < uVar4) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  pSVar25 = unaff_R13;
  switch(uVar4) {
  case 0:
    (__this->fields).__1__state = -1;
    b = *(Il2CppClass **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    ppSVar1 = &(__this->fields)._settings_5__2;
    (__this->fields)._settings_5__2 = (Settings_HumanCustomSettings_o *)b;
    il2cpp_runtime_helper_022b4080();
    pSVar8 = (__this->fields)._settings_5__2;
    pUVar22 = (UI_ConfirmPopup_o *)ppSVar1;
    if (((pSVar8 == (Settings_HumanCustomSettings_o *)0x0) ||
        (pSVar9 = (pSVar8->fields).CustomSets,
        pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
       (pSVar5 = (pSVar9->fields).Sets, pSVar5 == (Settings_ListSetting_T__o *)0x0)) {
label_0435e66f:
      il2cpp_runtime_helper_022b2c90();
      unaff_RBP = pUVar22;
      pSVar24 = pSVar25;
    }
    else {
      pSVar6 = pSVar5->klass;
      uVar3._0_1_ = (pSVar6->_2).rank;
      uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar23) == TypeInfo_IListSetting) {
            ppIVar17 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar23) + 2].methodPtr;
            goto label_0435e2f7;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar23);
      }
      ppIVar17 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IListSetting,2);
label_0435e2f7:
      b = (Il2CppClass *)ppIVar17[1];
      unaff_RBP = (UI_ConfirmPopup_o *)(**ppIVar17)(pSVar5,b);
      if (unaff_RBP == (UI_ConfirmPopup_o *)0x0) goto label_0435e66f;
      pUVar22 = unaff_RBP;
      if (0 < *(int *)&(unaff_RBP->fields).m_CancellationTokenSource) {
        pIVar18 = (Il2CppClass *)0x0;
        do {
          index = (int)pIVar18;
          b = pIVar18;
          unaff_R13 = (Settings_HumanCustomSet_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)unaff_RBP,index,MethodInfo_BaseSetting_get_Item);
          if (unaff_R13 == (Settings_HumanCustomSet_o *)0x0) goto label_0435e66f;
          bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
          b = TypeInfo_HumanCustomSet;
          pSVar24 = unaff_R13;
          if (((unaff_R13->klass->_2).naturalAligment < bVar2) ||
             ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_HumanCustomSet)) goto label_0435e677;
          pSVar13 = (unaff_R13->fields).UniqueId;
          b = TypeInfo_HumanCustomSet;
          pSVar25 = unaff_R13;
          if (pSVar13 == (Settings_StringSetting_o *)0x0) goto label_0435e66f;
          b = (Il2CppClass *)(__this->fields).previousProfileId;
          bVar16 = System_String__op_Equality((pSVar13->fields)._value,(System_String_o *)b,(MethodInfo *)0x0)
          ;
          if ((char)bVar16 != '\0') {
            if (((*ppSVar1 == (Settings_HumanCustomSettings_o *)0x0) ||
                (pSVar9 = ((*ppSVar1)->fields).CustomSets,
                pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
               (pSVar10 = (pSVar9->fields).SelectedSetIndex, pSVar10 == (Settings_IntSetting_o *)0x0))
            goto label_0435e66f;
            (__this->fields)._currentSelectedIndex_5__3 = (pSVar10->fields)._value;
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar10,index,MethodInfo_Void_set_Value);
            pIVar20 = TypeInfo_DummyHuman;
            pSVar24 = *(Settings_HumanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
            b = pIVar18;
            if (pSVar24 == (Settings_HumanCustomSet_o *)0x0) goto label_0435e66f;
            bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
            b = TypeInfo_CharacterEditorGameManager;
            if (((pSVar24->klass->_2).naturalAligment < bVar2) ||
               (b = TypeInfo_CharacterEditorGameManager, (pSVar24->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorGameManager))
            goto label_0435e677;
            b = (Il2CppClass *)(pSVar24->fields).Sex;
            if (b == (Il2CppClass *)0x0) {
              (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)0x0;
            }
            else {
              pUVar15 = (b->_1).image;
              bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
              if (((pUVar15->_2).naturalAligment < bVar2) ||
                 ((pUVar15->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman)) goto label_0435e684;
              (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)b;
              pUVar15 = (b->_1).image;
              if (((pUVar15->_2).naturalAligment < bVar2) ||
                 ((pUVar15->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar20)) goto label_0435e684;
            }
            ppCVar21 = &(__this->fields)._character_5__4;
            il2cpp_runtime_helper_022b4080(ppCVar21);
            if (((*ppCVar21 == (Characters_DummyHuman_o *)0x0) ||
                (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0)) ||
               (pSVar24 = (Settings_HumanCustomSet_o *)(__this_00->fields)._menu,
               pSVar24 == (Settings_HumanCustomSet_o *)0x0)) goto label_0435e66f;
            bVar2 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
            b = TypeInfo_CharacterEditorHumanMenu;
            if (((pSVar24->klass->_2).naturalAligment < bVar2) ||
               ((pSVar24->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorHumanMenu)) goto label_0435e677;
            pSVar13 = (pSVar24->fields).BladeEffect;
            if ((pSVar13 != (Settings_StringSetting_o *)0x0) &&
               (pCVar14 = ((*ppCVar21)->fields).Setup, pCVar14 != (Characters_HumanSetup_o *)0x0)) {
              Characters_HumanSetup__Load
                        (pCVar14,unaff_R13,*(int32_t *)((long)&(pSVar13->fields).DefaultValue + 4),0,
                         (MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar19 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
              (__this->fields).__2__current = pIVar19;
              il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar19);
              (__this->fields).__1__state = 1;
              return (bool_conflict)CONCAT71((int7)((ulong)ppCVar21 >> 8),1);
            }
            goto label_0435e66f;
          }
          pIVar18 = (Il2CppClass *)(ulong)(index + 1U);
        } while ((int)(index + 1U) < *(int *)&(unaff_RBP->fields).m_CancellationTokenSource);
      }
      if ((char)(__this->fields).shouldApplySkinPreview == '\0') {
        return 0;
      }
      pSVar24 = *(Settings_HumanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      pSVar25 = unaff_R13;
      if (pSVar24 == (Settings_HumanCustomSet_o *)0x0) goto label_0435e66f;
      bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      b = TypeInfo_CharacterEditorGameManager;
      if ((bVar2 <= (pSVar24->klass->_2).naturalAligment) &&
         (b = TypeInfo_CharacterEditorGameManager, (pSVar24->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CharacterEditorGameManager)) {
        unaff_RBP = (UI_ConfirmPopup_o *)(pSVar24->fields).Sex;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (unaff_RBP != (UI_ConfirmPopup_o *)0x0) {
          bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
          if (((unaff_RBP->klass->_2).naturalAligment < bVar2) ||
             ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman)) goto label_0435e68f;
        }
        b = (Il2CppClass *)0x0;
        bVar16 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar16 == '\0') {
          return 0;
        }
        pUVar22 = unaff_RBP;
        if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
          pIVar19 = (Il2CppObject *)
                    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset(__this_00,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar19;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar19);
          (__this->fields).__1__state = 3;
          return 1;
        }
        goto label_0435e66f;
      }
    }
label_0435e677:
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0(pSVar24);
    break;
  case 1:
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    b = (Il2CppClass *)0x0;
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(1,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._settings_5__2;
    pUVar22 = unaff_RBP;
    if (((pSVar8 == (Settings_HumanCustomSettings_o *)0x0) ||
        (pSVar9 = (pSVar8->fields).CustomSets,
        pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
       (pSVar10 = (pSVar9->fields).SelectedSetIndex, pSVar10 == (Settings_IntSetting_o *)0x0))
    goto label_0435e66f;
    uVar4 = (__this->fields)._currentSelectedIndex_5__3;
    b = (Il2CppClass *)(ulong)uVar4;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar10,uVar4,MethodInfo_Void_set_Value);
    pSVar8 = (__this->fields)._settings_5__2;
    if ((pSVar8 == (Settings_HumanCustomSettings_o *)0x0) ||
       (pSVar9 = (pSVar8->fields).CustomSets, pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
       )) goto label_0435e66f;
    b = MethodInfo_BaseSetSetting_GetSelectedSet;
    pIVar18 = (Il2CppClass *)
              Settings_SetSettingsContainer_object___GetSelectedSet
                        ((Settings_SetSettingsContainer_T__o *)pSVar9,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pIVar18 == (Il2CppClass *)0x0) {
label_0435e1f8:
      pCVar12 = (__this->fields)._character_5__4;
      if ((pCVar12 != (Characters_DummyHuman_o *)0x0) &&
         ((__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0 &&
          (pSVar24 = (Settings_HumanCustomSet_o *)(__this_00->fields)._menu,
          pSVar24 != (Settings_HumanCustomSet_o *)0x0)))) {
        bVar2 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        unaff_RBP = (UI_ConfirmPopup_o *)(ulong)bVar2;
        b = TypeInfo_CharacterEditorHumanMenu;
        if (((pSVar24->klass->_2).naturalAligment < bVar2) ||
           ((pSVar24->klass->_2).typeHierarchy[(long)((long)&unaff_RBP[-1].fields._onConfirm + 7)] !=
            TypeInfo_CharacterEditorHumanMenu)) goto label_0435e677;
        pSVar13 = (pSVar24->fields).BladeEffect;
        pUVar22 = unaff_RBP;
        if ((pSVar13 != (Settings_StringSetting_o *)0x0) &&
           (pCVar14 = (pCVar12->fields).Setup, pCVar14 != (Characters_HumanSetup_o *)0x0)) {
          Characters_HumanSetup__Load
                    (pCVar14,(Settings_HumanCustomSet_o *)pIVar18,
                     *(int32_t *)((long)&(pSVar13->fields).DefaultValue + 4),0,(MethodInfo *)0x0);
          pCVar12 = (__this->fields)._character_5__4;
          b = pIVar18;
          if (pCVar12 != (Characters_DummyHuman_o *)0x0) {
            Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar12,(MethodInfo *)0x0);
            if ((char)(__this->fields).shouldApplySkinPreview != '\0') {
              pIVar19 = (Il2CppObject *)
                        UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
                                  (__this_00,(MethodInfo *)0x0);
              (__this->fields).__2__current = pIVar19;
              il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar19);
              (__this->fields).__1__state = 2;
              return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
            }
label_0435e2c2:
            (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)0x0;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._character_5__4,0);
            return 0;
          }
        }
      }
      goto label_0435e66f;
    }
    pvVar11 = (pIVar18->_1).image;
    bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    b = TypeInfo_HumanCustomSet;
    if ((bVar2 <= *(byte *)((long)pvVar11 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)((long)pvVar11 + 200) + -8 + (ulong)bVar2 * 8) == TypeInfo_HumanCustomSet))
    goto label_0435e1f8;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    goto label_0435e2c2;
  case 3:
    (__this->fields).__1__state = -1;
    return 0;
  }
  pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0(pIVar18);
label_0435e684:
  il2cpp_runtime_helper_022b2fd0(b,pIVar20);
label_0435e68f:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(unaff_RBP->fields).m_CancellationTokenSource;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x435e6a0

Il2CppObject *
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x435e6b0

void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this,
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


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x435e6f0

Il2CppObject *
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x435e700

void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x435e720

void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__MoveNext (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x435e730

bool_conflict
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__MoveNext
          (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (g_data_057ae18f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae18f = '\x01';
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
  Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(1,(MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk((MethodInfo *)0x0);
  if (g_data_057ae1ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae1ae = '\x01';
  }
  **(undefined2 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) = 0;
  ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  return 0;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x435e830

Il2CppObject *
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x435e840

void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,MethodInfo *method)

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


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x435e880

Il2CppObject *
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorCostumePanel__get_Title (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4358010

System_String_o *
UI_CharacterEditorCostumePanel__get_Title(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae175 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Costume");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae175 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Costume","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorCostumePanel$$get_Width
// il2cpp: float UI_CharacterEditorCostumePanel__get_Width (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x43580b0

float UI_CharacterEditorCostumePanel__get_Width(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.CharacterEditorCostumePanel$$get_Height
// il2cpp: float UI_CharacterEditorCostumePanel__get_Height (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x43580c0

float UI_CharacterEditorCostumePanel__get_Height(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 1020.0;
}


// UI.CharacterEditorCostumePanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorCostumePanel__get_VerticalSpacing (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x43580d0

float UI_CharacterEditorCostumePanel__get_VerticalSpacing
                (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorCostumePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorCostumePanel__get_HorizontalPadding (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x43580e0

int32_t UI_CharacterEditorCostumePanel__get_HorizontalPadding
                  (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCostumePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorCostumePanel__get_VerticalPadding (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x43580f0

int32_t UI_CharacterEditorCostumePanel__get_VerticalPadding
                  (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCostumePanel$$get_ScrollBar
// il2cpp: bool UI_CharacterEditorCostumePanel__get_ScrollBar (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4358100

bool_conflict
UI_CharacterEditorCostumePanel__get_ScrollBar(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CharacterEditorCostumePanel$$GetPersistentGlobalPreview
// il2cpp: bool UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview (const MethodInfo* method);
// 0x4358110

bool_conflict UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview(MethodInfo *method)

{
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(undefined1 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) >> 8),
                  **(undefined1 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8));
}


// UI.CharacterEditorCostumePanel$$GetPersistentCustomPreview
// il2cpp: bool UI_CharacterEditorCostumePanel__GetPersistentCustomPreview (const MethodInfo* method);
// 0x4358150

bool_conflict UI_CharacterEditorCostumePanel__GetPersistentCustomPreview(MethodInfo *method)

{
  if (g_data_057ae188 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae188 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1));
}


// UI.CharacterEditorCostumePanel$$ResetSkinPreviewToggles
// il2cpp: void UI_CharacterEditorCostumePanel__ResetSkinPreviewToggles (const MethodInfo* method);
// 0x4357a00

void UI_CharacterEditorCostumePanel__ResetSkinPreviewToggles(MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$Setup
// il2cpp: void UI_CharacterEditorCostumePanel__Setup (UI_CharacterEditorCostumePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4358190

void UI_CharacterEditorCostumePanel__Setup
               (UI_CharacterEditorCostumePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  Settings_SetSettingsContainer_T__o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  UI_IconPickPopup_o *pUVar10;
  Settings_ColorSetting_o *pSVar11;
  UI_ColorPickPopup_o *pUVar12;
  System_Object_array *pSVar13;
  InvokerMethod pIVar14;
  UI_CharacterEditorMenu_o *pUVar15;
  GameManagers_CharacterEditorGameManager_o *pGVar16;
  Characters_DummyHuman_o *__this_00;
  System_String_Fields category;
  bool_conflict bVar17;
  int iVar18;
  Settings_HumanCustomSet_o *set;
  System_String_o *pSVar19;
  System_String_Fields __this_01;
  UnityEngine_Events_UnityAction_o *pUVar20;
  UnityEngine_GameObject_o *pUVar21;
  System_String_Fields SVar22;
  System_String_Fields SVar23;
  UnityEngine_Transform_o *pUVar24;
  System_String_array *pSVar25;
  UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  UI_CharacterEditorCostumePanel_o **__this_04;
  UI_CharacterEditorCostumePanel_o **__this_05;
  UI_CharacterEditorCostumePanel_o **__this_06;
  System_String_o *pSVar26;
  MethodInfo_362B8B0 *pMVar27;
  undefined8 *puVar28;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *pUVar29;
  Settings_BaseSetSetting_c *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  ulong extraout_RDX_02;
  long *plVar30;
  System_String_Fields SVar31;
  System_String_Fields subCategory;
  UI_CharacterEditorCostumePanel_o *pUVar32;
  UI_CharacterEditorCostumePanel_o **ppUVar33;
  Settings_BaseSetSetting_c *pSVar34;
  long *unaff_R12;
  Settings_BaseSetSetting_c **unaff_R13;
  UI_CharacterEditorCostumePanel_o **ppUVar35;
  System_String_Fields unaff_R15;
  undefined8 uStackY_168;
  System_Collections_Generic_List_object__o *pSStackY_160;
  System_String_Fields SStackY_158;
  System_String_Fields SStackY_150;
  System_String_o *pSStackY_148;
  System_Collections_Generic_List_object__o *pSStackY_140;
  long *plStackY_138;
  undefined1 auStackY_130 [8];
  System_Collections_Generic_List_object__o *pSStackY_128;
  System_String_Fields SStackY_120;
  System_String_Fields SStackY_118;
  System_String_o *pSStackY_110;
  System_Collections_Generic_List_object__o *pSStackY_108;
  long *plStackY_100;
  undefined8 uStackY_f8;
  System_Collections_Generic_List_object__o *pSStackY_f0;
  System_String_Fields SStackY_e8;
  System_String_Fields SStackY_e0;
  System_String_Fields SStackY_d8;
  ulong uStackY_d0;
  long *plStackY_c8;
  undefined8 uStackY_c0;
  UI_CharacterEditorCostumePanel_o *pUStack_50;
  
  if (g_data_057ae176 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_10);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_11);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_12);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_13);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_14);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_15);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_16);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_17);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_18);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_19);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_20);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_21);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_22);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_23);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_24);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_25);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_26);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__27);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__28);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Blade Effect (Patreon T2)");
    il2cpp_runtime_helper_023445d0(&"BootsColor");
    il2cpp_runtime_helper_023445d0(&"PantsColor");
    il2cpp_runtime_helper_023445d0(&"JacketColor");
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"SaveQuit");
    il2cpp_runtime_helper_023445d0(&"No cape");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Logo");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Costume");
    il2cpp_runtime_helper_023445d0(&"Quit");
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"Sex");
    il2cpp_runtime_helper_023445d0(&"Boots");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"HairColor");
    il2cpp_runtime_helper_023445d0(&"Face");
    il2cpp_runtime_helper_023445d0(&"Head");
    il2cpp_runtime_helper_023445d0(&"Glass");
    il2cpp_runtime_helper_023445d0(&"Male");
    il2cpp_runtime_helper_023445d0(&"StrapsColor");
    il2cpp_runtime_helper_023445d0(&"Cape");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"Blade Effect Color (Patreon T2)");
    il2cpp_runtime_helper_023445d0(&"ShirtColor");
    il2cpp_runtime_helper_023445d0(&"Female");
    il2cpp_runtime_helper_023445d0(&"Eye");
    il2cpp_runtime_helper_023445d0(&"SkinColor");
    il2cpp_runtime_helper_023445d0(&"Hair Effect Color (Patreon T2)");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Custom set");
    il2cpp_runtime_helper_023445d0(&"Hair");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    il2cpp_runtime_helper_023445d0(&"Hair Effect (Patreon T2)");
    il2cpp_runtime_helper_023445d0(&"Hat");
    g_data_057ae176 = '\x01';
    method = extraout_RDX;
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,method);
  plVar30 = &TypeInfo_UIManager;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    SVar31 = *(System_String_Fields *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (SVar31 == (System_String_Fields)0x0) goto label_04358639;
label_043585be:
    lVar6 = TypeInfo_CharacterEditorMenu;
    bVar3 = *(byte *)(TypeInfo_CharacterEditorMenu + 0x130);
    in_RCX = (Settings_BaseSetSetting_c *)(ulong)bVar3;
    if ((bVar3 <= *(byte *)(*(long *)SVar31 + 0x130)) &&
       (*(long *)(*(long *)(*(long *)SVar31 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_CharacterEditorMenu)) {
      (__this->fields)._menu = (UI_CharacterEditorMenu_o *)SVar31;
      if ((bVar3 <= *(byte *)(*(long *)SVar31 + 0x130)) &&
         (*(long *)(*(long *)(*(long *)SVar31 + 200) + -8 + (long)in_RCX * 8) == lVar6)) goto label_0435864b;
    }
    set = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2fd0(SVar31);
label_0435a234:
    il2cpp_runtime_helper_022b2fd0(set);
label_0435a239:
    __this_02 = (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
    SVar31._stringLength = 0;
    SVar31._firstChar = 0;
    SVar31._6_2_ = 0;
    UI_CharacterEditorCostumePanel___c__DisplayClass21_0___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)0x0) {
      (__this_02->fields).__4__this = pUStack_50;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).__4__this);
      iVar18 = *(int *)&((UnityEngine_Transform_o *)((long)unaff_R13 + 0x18))->klass;
      while (iVar18 == 0) {
label_0435a273:
        il2cpp_runtime_helper_022b2ca0();
label_0435a278:
        __this_02 = (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1)
        ;
        SVar31._stringLength = 0;
        SVar31._firstChar = 0;
        SVar31._6_2_ = 0;
        UI_CharacterEditorCostumePanel___c__DisplayClass21_1___ctor
                  ((UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)__this_02,(MethodInfo *)0x0);
        if (__this_02 == (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)0x0) goto label_0435a2c5;
        (((UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)__this_02)->fields).__4__this = pUStack_50
        ;
        il2cpp_runtime_helper_022b4080(&(((UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)__this_02)->fields).
                            __4__this);
        iVar18 = *(int *)&((UnityEngine_Transform_o *)((long)unaff_R15 + 0x18))->klass;
      }
      SVar31 = (System_String_Fields)((UI_CharacterEditorCostumePanel_o *)plVar30)->klass;
      (__this_02->fields).button = (System_String_o *)SVar31;
      il2cpp_runtime_helper_022b4080(&__this_02->fields);
    }
  }
  else {
    SVar31 = *(System_String_Fields *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (SVar31 != (System_String_Fields)0x0) goto label_043585be;
label_04358639:
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
label_0435864b:
    il2cpp_runtime_helper_022b4080(&(__this->fields)._menu);
    *(undefined1 *)&(__this->fields)._isRebuildingPanel = 1;
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if (((lVar6 != 0) &&
        (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar6 + 0x20),
        pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
       (SVar31 = MethodInfo_BaseSetSetting_GetSelectedSet,
       set = (Settings_HumanCustomSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet(pSVar7,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet),
       set != (Settings_HumanCustomSet_o *)0x0)) {
      in_RCX = (Settings_BaseSetSetting_c *)set->klass;
      if (((in_RCX->_2).naturalAligment < *(byte *)((long)TypeInfo_HumanCustomSet + 0x130)) ||
         (in_RCX = (Settings_BaseSetSetting_c *)(in_RCX->_2).typeHierarchy,
         *(System_String_Fields *)((long)in_RCX + (ulong)*(byte *)((long)TypeInfo_HumanCustomSet + 0x130) * 8 + -8) !=
         TypeInfo_HumanCustomSet)) goto label_0435a234;
      pSVar8 = (set->fields).UniqueId;
      SVar31 = TypeInfo_HumanCustomSet;
      if (pSVar8 != (Settings_StringSetting_o *)0x0) {
        (__this->fields)._previousProfileId = (pSVar8->fields)._value;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._previousProfileId);
        pSVar19 = (System_String_o *)
                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_01 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_01,0x18,130.0,20.0,pSVar19,(MethodInfo *)0x0);
        subCategory = "Costume";
        category = "CharacterEditor";
        plVar30 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
        pUVar24 = (__this->fields).BottomBar;
        pSVar19 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
        pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton
                  (pUVar24,(UI_ElementStyle_o *)__this_01,pSVar19,0.0,pUVar20,(MethodInfo *)0x0);
        pUVar24 = (__this->fields).BottomBar;
        pSVar19 = UI_UIManager__GetLocaleCommon("LoadPreset",(MethodInfo *)0x0);
        pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton
                  (pUVar24,(UI_ElementStyle_o *)__this_01,pSVar19,0.0,pUVar20,(MethodInfo *)0x0);
        pUVar24 = (__this->fields).BottomBar;
        unaff_R12 = (long *)UI_UIManager__GetLocale
                                      ((System_String_o *)category,(System_String_o *)subCategory,"SaveQuit"
                                       ,(System_String_o *)"",(System_String_o *)"",
                                       (MethodInfo *)0x0);
        in_RCX = (Settings_BaseSetSetting_c *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        SVar31 = __this_01;
        UI_ElementFactory__CreateTextButton
                  (pUVar24,(UI_ElementStyle_o *)__this_01,(System_String_o *)unaff_R12,0.0,
                   (UnityEngine_Events_UnityAction_o *)in_RCX,(MethodInfo *)0x0);
        unaff_R13 = (Settings_BaseSetSetting_c **)subCategory;
        if (((UI_CharacterEditorCostumePanel_o *)plVar30 != (UI_CharacterEditorCostumePanel_o *)0x0) &&
           (pSVar7 = (Settings_SetSettingsContainer_T__o *)
                     (((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).SinglePanel,
           pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) {
          SVar31 = MethodInfo_BaseSetSetting_GetSelectedSet;
          set = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          (pSVar7,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
          unaff_R13 = &"";
          pUStack_50 = __this;
          if (set != (Settings_HumanCustomSet_o *)0x0) {
            in_RCX = (Settings_BaseSetSetting_c *)(ulong)*(byte *)((long)TypeInfo_HumanCustomSet + 0x130);
            unaff_R15 = __this_01;
            if (((set->klass->_2).naturalAligment < *(byte *)((long)TypeInfo_HumanCustomSet + 0x130)) ||
               (SVar31 = TypeInfo_HumanCustomSet,
               *(System_String_Fields *)
                ((set->klass->_2).typeHierarchy + (long)((long)&in_RCX[-1].vtable._12_Validate.method + 7)) !=
               TypeInfo_HumanCustomSet)) goto label_0435a234;
          }
          pSVar7 = (Settings_SetSettingsContainer_T__o *)
                   (((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).SinglePanel;
          if (pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0) {
            unaff_R15 = (System_String_Fields)(__this->fields).SinglePanel;
            pSVar9 = (pSVar7->fields).SelectedSetIndex;
            unaff_R12 = (long *)Settings_SetSettingsContainer_object___GetSetNames(pSVar7,MethodInfo_String_GetSetNames);
            pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            in_RCX = "Custom set";
            UI_ElementFactory__CreateDropdownSetting
                      ((UnityEngine_Transform_o *)unaff_R15,(UI_ElementStyle_o *)__this_01,
                       (Settings_BaseSetting_o *)pSVar9,(System_String_o *)"Custom set",
                       (System_String_array *)unaff_R12,(System_String_o *)"",170.0,40.0,300.0,
                       (System_Nullable_float__o)0x0,pUVar20,(MethodInfo *)0x0);
            pUVar21 = UI_ElementFactory__CreateHorizontalGroup
                                ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
            SVar31._stringLength = 3;
            SVar31._firstChar = 0;
            SVar31._6_2_ = 0;
            SVar22 = (System_String_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
            if (SVar22 != (System_String_Fields)0x0) {
              plVar30 = (long *)__this;
              unaff_R13 = (Settings_BaseSetSetting_c **)SVar22;
              if (*(int *)&((UnityEngine_Transform_o *)((long)SVar22 + 0x18))->klass == 0) goto label_0435a273;
              plVar30 = (long *)((long)SVar22 + 0x20);
              *(void **)((long)SVar22 + 0x20) = "Create";
              il2cpp_runtime_helper_022b4080(plVar30);
              if (*(uint *)&((UnityEngine_Transform_o *)((long)SVar22 + 0x18))->klass < 2) goto label_0435a273;
              ((UnityEngine_Transform_Fields *)((long)SVar22 + 0x28))->m_CachedPtr = "Delete";
              il2cpp_runtime_helper_022b4080((UnityEngine_Transform_Fields *)((long)SVar22 + 0x28));
              if (*(uint *)&((UnityEngine_Transform_o *)((long)SVar22 + 0x18))->klass < 3) goto label_0435a273;
              ((UnityEngine_Transform_o *)((long)SVar22 + 0x30))->klass = "Copy";
              il2cpp_runtime_helper_022b4080((UnityEngine_Transform_o *)((long)SVar22 + 0x30));
              if (0 < *(int *)&((UnityEngine_Transform_o *)((long)SVar22 + 0x18))->klass) {
                if (pUVar21 == (UnityEngine_GameObject_o *)0x0) goto label_0435a239;
                unaff_R15._stringLength = 0;
                unaff_R15._firstChar = 0;
                unaff_R15._6_2_ = 0;
                do {
                  plVar30 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
                  SVar31._stringLength = 0;
                  SVar31._firstChar = 0;
                  SVar31._6_2_ = 0;
                  UI_CharacterEditorCostumePanel___c__DisplayClass21_0___ctor
                            ((UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)plVar30,
                             (MethodInfo *)0x0);
                  if ((UI_CharacterEditorCostumePanel_o *)plVar30 == (UI_CharacterEditorCostumePanel_o *)0x0)
                  goto label_0435a2c5;
                  (((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).m_CancellationTokenSource =
                       (System_Threading_CancellationTokenSource_o *)__this;
                  il2cpp_runtime_helper_022b4080(&(((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).
                                      m_CancellationTokenSource);
                  SVar23._4_4_ = 0;
                  SVar23._stringLength = *(uint *)&((UnityEngine_Transform_o *)((long)SVar22 + 0x18))->klass;
                  if ((ulong)SVar23 <= (ulong)unaff_R15) goto label_0435a273;
                  (((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).m_CachedPtr =
                       (intptr_t)((void **)((long)SVar22 + 0x20))[(long)unaff_R15];
                  il2cpp_runtime_helper_022b4080(&((UI_CharacterEditorCostumePanel_o *)plVar30)->fields);
                  unaff_R12 = (long *)UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
                  pSVar19 = (System_String_o *)
                            (((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).m_CachedPtr;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar19 = UI_UIManager__GetLocaleCommon(pSVar19,(MethodInfo *)0x0);
                  in_RCX = (Settings_BaseSetSetting_c *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  UI_ElementFactory__CreateDefaultButton
                            ((UnityEngine_Transform_o *)unaff_R12,(UI_ElementStyle_o *)__this_01,pSVar19,0.0,
                             0.0,(UnityEngine_Events_UnityAction_o *)in_RCX,(MethodInfo *)0x0);
                  unaff_R15 = (System_String_Fields)((long)unaff_R15 + 1);
                } while ((long)unaff_R15 <
                         (long)*(int *)&((UnityEngine_Transform_o *)((long)SVar22 + 0x18))->klass);
              }
              pUVar21 = UI_ElementFactory__CreateHorizontalGroup
                                  ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
              SVar31._stringLength = 3;
              SVar31._firstChar = 0;
              SVar31._6_2_ = 0;
              unaff_R15 = (System_String_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
              if (unaff_R15 != (System_String_Fields)0x0) {
                if (*(int *)&((UnityEngine_Transform_o *)((long)unaff_R15 + 0x18))->klass == 0)
                goto label_0435a273;
                plVar30 = (long *)((long)unaff_R15 + 0x20);
                *(Settings_SetSettingsContainer_T__c **)((long)unaff_R15 + 0x20) = "Rename";
                il2cpp_runtime_helper_022b4080(plVar30);
                if (*(uint *)&((UnityEngine_Transform_o *)((long)unaff_R15 + 0x18))->klass < 2)
                goto label_0435a273;
                ((UnityEngine_Transform_Fields *)((long)unaff_R15 + 0x28))->m_CachedPtr = "Import";
                il2cpp_runtime_helper_022b4080((UnityEngine_Transform_Fields *)((long)unaff_R15 + 0x28));
                if (*(uint *)&((UnityEngine_Transform_o *)((long)unaff_R15 + 0x18))->klass < 3)
                goto label_0435a273;
                ((UnityEngine_Transform_o *)((long)unaff_R15 + 0x30))->klass = "Export";
                il2cpp_runtime_helper_022b4080((UnityEngine_Transform_o *)((long)unaff_R15 + 0x30));
                if (0 < *(int *)&((UnityEngine_Transform_o *)((long)unaff_R15 + 0x18))->klass) {
                  if (pUVar21 == (UnityEngine_GameObject_o *)0x0) goto label_0435a278;
                  unaff_R13._0_4_ = 0;
                  unaff_R13._4_2_ = 0;
                  unaff_R13._6_2_ = 0;
                  do {
                    plVar30 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
                    SVar31._stringLength = 0;
                    SVar31._firstChar = 0;
                    SVar31._6_2_ = 0;
                    UI_CharacterEditorCostumePanel___c__DisplayClass21_1___ctor
                              ((UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)plVar30,
                               (MethodInfo *)0x0);
                    if ((UI_CharacterEditorCostumePanel_o *)plVar30 == (UI_CharacterEditorCostumePanel_o *)0x0
                       ) goto label_0435a2c5;
                    (((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).m_CancellationTokenSource =
                         (System_Threading_CancellationTokenSource_o *)__this;
                    il2cpp_runtime_helper_022b4080(&(((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).
                                        m_CancellationTokenSource);
                    SVar22._4_4_ = 0;
                    SVar22._stringLength =
                         *(uint *)&((UnityEngine_Transform_o *)((long)unaff_R15 + 0x18))->klass;
                    if ((ulong)SVar22 <= unaff_R13) goto label_0435a273;
                    (((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).m_CachedPtr =
                         (intptr_t)((void **)((long)unaff_R15 + 0x20))[(long)unaff_R13];
                    il2cpp_runtime_helper_022b4080(&((UI_CharacterEditorCostumePanel_o *)plVar30)->fields);
                    pUVar24 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
                    pSVar19 = (System_String_o *)
                              (((UI_CharacterEditorCostumePanel_o *)plVar30)->fields).m_CachedPtr;
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    unaff_R12 = (long *)UI_UIManager__GetLocaleCommon(pSVar19,(MethodInfo *)0x0);
                    in_RCX = (Settings_BaseSetSetting_c *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    UI_ElementFactory__CreateDefaultButton
                              (pUVar24,(UI_ElementStyle_o *)__this_01,(System_String_o *)unaff_R12,0.0,0.0,
                               (UnityEngine_Events_UnityAction_o *)in_RCX,(MethodInfo *)0x0);
                    unaff_R13 = (Settings_BaseSetSetting_c **)((long)unaff_R13 + 1);
                  } while ((long)unaff_R13 <
                           (long)*(int *)&((UnityEngine_Transform_o *)((long)unaff_R15 + 0x18))->klass);
                }
                SVar31 = (System_String_Fields)(__this->fields).SinglePanel;
                UI_BasePanel__CreateHorizontalDivider
                          ((UI_BasePanel_o *)__this,(UnityEngine_Transform_o *)SVar31,1.0,(MethodInfo *)0x0);
                if (set != (Settings_HumanCustomSet_o *)0x0) {
                  unaff_R13 = (Settings_BaseSetSetting_c **)(__this->fields).SinglePanel;
                  unaff_R15 = (System_String_Fields)(set->fields).Sex;
                  plVar30 = &TypeInfo_UnityAction;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  in_RCX = "";
                  pSVar19 = UI_UIManager__GetLocale
                                      ((System_String_o *)category,(System_String_o *)subCategory,"Sex"
                                       ,(System_String_o *)"",(System_String_o *)"",
                                       (MethodInfo *)0x0);
                  SVar31._stringLength = 2;
                  SVar31._firstChar = 0;
                  SVar31._6_2_ = 0;
                  pSVar25 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
                  if (pSVar25 != (System_String_array *)0x0) {
                    if ((int)pSVar25->max_length == 0) goto label_0435a273;
                    pSVar25->m_Items[0] = "Male";
                    il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
                    if ((uint)pSVar25->max_length < 2) goto label_0435a273;
                    pSVar25->m_Items[1] = "Female";
                    il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 1);
                    pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    UI_ElementFactory__CreateDropdownSetting
                              ((UnityEngine_Transform_o *)unaff_R13,(UI_ElementStyle_o *)__this_01,
                               (Settings_BaseSetting_o *)unaff_R15,pSVar19,pSVar25,
                               (System_String_o *)"",170.0,40.0,300.0,(System_Nullable_float__o)0x0,
                               pUVar20,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    unaff_R12 = (long *)UI_CharacterEditorCostumePanel__GetOptions
                                                  (TypeInfo_HumanSetup,"Eye",
                                                   *(int32_t *)
                                                    &((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->
                                                     fields)._registeredCallbacksLists,0,(MethodInfo *)pSVar25
                                                  );
                    pUVar32 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
                    pSVar9 = (set->fields).Eye;
                    in_RCX = "";
                    SVar22 = category;
                    pSVar19 = UI_UIManager__GetLocale
                                        ((System_String_o *)category,(System_String_o *)subCategory,
                                         "Eye",(System_String_o *)"",
                                         (System_String_o *)"",(MethodInfo *)0x0);
                    SVar31 = (System_String_Fields)unaff_R12;
                    pSVar25 = UI_CharacterEditorCostumePanel__GetIcons
                                        ((UI_CharacterEditorCostumePanel_o *)SVar22,
                                         (System_String_array *)unaff_R12,method_00);
                    lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    unaff_R13 = (Settings_BaseSetSetting_c **)__this;
                    if (lVar6 != 0) {
                      pUVar10 = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
                      pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      uStackY_c0 = 0x4358f8e;
                      UI_ElementFactory__CreateIconPickSetting
                                ((UnityEngine_Transform_o *)pUVar32,(UI_ElementStyle_o *)__this_01,
                                 (Settings_BaseSetting_o *)pSVar9,pSVar19,(System_String_array *)unaff_R12,
                                 pSVar25,pUVar10,(System_String_o *)"",(System_String_array *)0x0,
                                 170.0,40.0,pUVar20,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                      unaff_R12 = (long *)UI_CharacterEditorCostumePanel__GetOptions
                                                    (pUVar32,"Face",
                                                     *(int32_t *)
                                                      ((long)&((TypeInfo_HumanSetup[1].fields.
                                                               m_CancellationTokenSource)->fields).
                                                              _registeredCallbacksLists + 4),1,
                                                     (MethodInfo *)unaff_R12);
                      pUVar32 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
                      pSVar8 = (set->fields).Face;
                      in_RCX = "";
                      SVar22 = category;
                      pSVar19 = UI_UIManager__GetLocale
                                          ((System_String_o *)category,(System_String_o *)subCategory,
                                           "Face",(System_String_o *)"",
                                           (System_String_o *)"",(MethodInfo *)0x0);
                      SVar31 = (System_String_Fields)unaff_R12;
                      pSVar25 = UI_CharacterEditorCostumePanel__GetIcons
                                          ((UI_CharacterEditorCostumePanel_o *)SVar22,
                                           (System_String_array *)unaff_R12,method_01);
                      lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                      if (lVar6 != 0) {
                        pUVar10 = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
                        pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        uStackY_c0 = 0x43590a4;
                        UI_ElementFactory__CreateIconPickSetting
                                  ((UnityEngine_Transform_o *)pUVar32,(UI_ElementStyle_o *)__this_01,
                                   (Settings_BaseSetting_o *)pSVar8,pSVar19,(System_String_array *)unaff_R12,
                                   pSVar25,pUVar10,(System_String_o *)"",(System_String_array *)0x0,
                                   170.0,40.0,pUVar20,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                        unaff_R12 = (long *)UI_CharacterEditorCostumePanel__GetOptions
                                                      (pUVar32,"Glass",
                                                       ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->
                                                       fields)._state,1,(MethodInfo *)unaff_R12);
                        pUVar32 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
                        pSVar8 = (set->fields).Glass;
                        in_RCX = "";
                        SVar22 = category;
                        pSVar19 = UI_UIManager__GetLocale
                                            ((System_String_o *)category,(System_String_o *)subCategory,
                                             "Glass",(System_String_o *)"",
                                             (System_String_o *)"",(MethodInfo *)0x0);
                        SVar31 = (System_String_Fields)unaff_R12;
                        pSVar25 = UI_CharacterEditorCostumePanel__GetIcons
                                            ((UI_CharacterEditorCostumePanel_o *)SVar22,
                                             (System_String_array *)unaff_R12,method_02);
                        lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                        if (lVar6 != 0) {
                          pUVar10 = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
                          pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          uStackY_c0 = 0x43591c5;
                          SVar31 = __this_01;
                          UI_ElementFactory__CreateIconPickSetting
                                    ((UnityEngine_Transform_o *)pUVar32,(UI_ElementStyle_o *)__this_01,
                                     (Settings_BaseSetting_o *)pSVar8,pSVar19,(System_String_array *)unaff_R12
                                     ,pSVar25,pUVar10,(System_String_o *)"",
                                     (System_String_array *)0x0,170.0,40.0,pUVar20,(UI_TooltipPopup_o *)0x0,
                                     (MethodInfo *)0x0);
                          unaff_R12 = (long *)UI_CharacterEditorCostumePanel__GetHairOptions
                                                        (pUVar32,(MethodInfo *)SVar31);
                          pUVar24 = (__this->fields).SinglePanel;
                          pSVar8 = (set->fields).Hair;
                          in_RCX = "";
                          SVar22 = category;
                          pSVar19 = UI_UIManager__GetLocale
                                              ((System_String_o *)category,(System_String_o *)subCategory,
                                               "Hair",(System_String_o *)"",
                                               (System_String_o *)"",(MethodInfo *)0x0);
                          SVar31 = (System_String_Fields)unaff_R12;
                          pSVar25 = UI_CharacterEditorCostumePanel__GetIcons
                                              ((UI_CharacterEditorCostumePanel_o *)SVar22,
                                               (System_String_array *)unaff_R12,method_03);
                          lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                          if (lVar6 != 0) {
                            pUVar10 = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
                            pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            uStackY_c0 = 0x43592bd;
                            UI_ElementFactory__CreateIconPickSetting
                                      (pUVar24,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar8
                                       ,pSVar19,(System_String_array *)unaff_R12,pSVar25,pUVar10,
                                       (System_String_o *)"",(System_String_array *)0x0,170.0,40.0,
                                       pUVar20,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                            pUVar32 = (UI_CharacterEditorCostumePanel_o *)0x0;
                            bVar17 = PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess
                                               ((MethodInfo *)0x0);
                            method_04 = extraout_RDX_00;
                            if ((char)bVar17 != '\0') {
                              pUVar24 = (__this->fields).SinglePanel;
                              pSVar8 = (set->fields).HairEffect;
                              if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pSVar25 = (System_String_array *)**(undefined8 **)(TypeInfo_CharacterEffectPresets + 0xb8);
                              pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              in_RCX = "Hair Effect (Patreon T2)";
                              SVar31 = __this_01;
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar24,(UI_ElementStyle_o *)__this_01,
                                         (Settings_BaseSetting_o *)pSVar8,(System_String_o *)"Hair Effect (Patreon T2)",
                                         pSVar25,(System_String_o *)"",170.0,40.0,300.0,
                                         (System_Nullable_float__o)0x0,pUVar20,(MethodInfo *)0x0);
                              pUVar32 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
                              pSVar11 = (set->fields).HairEffectColor;
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              unaff_R12 = &TypeInfo_UnityAction;
                              if (lVar6 == 0) goto label_0435a2c5;
                              pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                              pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              UI_ElementFactory__CreateColorSetting
                                        ((UnityEngine_Transform_o *)pUVar32,(UI_ElementStyle_o *)__this_01,
                                         (Settings_BaseSetting_o *)pSVar11,"Hair Effect Color (Patreon T2)",pUVar12,
                                         (System_String_o *)"",90.0,30.0,pUVar20,(MethodInfo *)0x0);
                              method_04 = extraout_RDX_01;
                            }
                            SVar22 = (System_String_Fields)
                                     UI_CharacterEditorCostumePanel__GetCostumeOptions(pUVar32,set,method_04);
                            pUVar24 = (__this->fields).SinglePanel;
                            pSVar9 = (set->fields).Costume;
                            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            in_RCX = "";
                            SVar23 = category;
                            pSVar19 = UI_UIManager__GetLocale
                                                ((System_String_o *)category,(System_String_o *)subCategory,
                                                 (System_String_o *)"Costume",
                                                 (System_String_o *)"",
                                                 (System_String_o *)"",(MethodInfo *)0x0);
                            SVar31 = SVar22;
                            pSVar25 = UI_CharacterEditorCostumePanel__GetIcons
                                                ((UI_CharacterEditorCostumePanel_o *)SVar23,
                                                 (System_String_array *)SVar22,method_05);
                            lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                            unaff_R12 = (long *)category;
                            if (lVar6 != 0) {
                              pUVar10 = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
                              pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              uStackY_c0 = 0x4359547;
                              UI_ElementFactory__CreateIconPickSetting
                                        (pUVar24,(UI_ElementStyle_o *)__this_01,
                                         (Settings_BaseSetting_o *)pSVar9,pSVar19,
                                         (System_String_array *)SVar22,pSVar25,pUVar10,
                                         (System_String_o *)"",(System_String_array *)0x0,170.0,40.0
                                         ,pUVar20,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                              pUVar24 = (__this->fields).SinglePanel;
                              pSVar9 = (set->fields).Boots;
                              SVar31 = category;
                              pSVar34 = "";
                              pSVar19 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)subCategory,
                                                   "Boots",(System_String_o *)"",
                                                   (System_String_o *)"",(MethodInfo *)0x0);
                              pSVar25 = UI_CharacterEditorCostumePanel__GetOptions
                                                  ((UI_CharacterEditorCostumePanel_o *)SVar31,"Boots",2,0
                                                   ,(MethodInfo *)pSVar34);
                              pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar24,(UI_ElementStyle_o *)__this_01,
                                         (Settings_BaseSetting_o *)pSVar9,pSVar19,pSVar25,
                                         (System_String_o *)"",170.0,40.0,300.0,
                                         (System_Nullable_float__o)0x0,pUVar20,(MethodInfo *)0x0);
                              if ((char)bVar17 != '\0') {
                                pUVar24 = (__this->fields).SinglePanel;
                                pSVar8 = (set->fields).BladeEffect;
                                if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                unaff_R12 = &TypeInfo_UnityAction;
                                unaff_R13 = &"";
                                pSVar25 = (System_String_array *)**(undefined8 **)(TypeInfo_CharacterEffectPresets + 0xb8);
                                pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
                                ;
                                UnityEngine_Events_UnityAction___ctor();
                                in_RCX = "Blade Effect (Patreon T2)";
                                SVar31 = __this_01;
                                UI_ElementFactory__CreateDropdownSetting
                                          (pUVar24,(UI_ElementStyle_o *)__this_01,
                                           (Settings_BaseSetting_o *)pSVar8,(System_String_o *)"Blade Effect (Patreon T2)",
                                           pSVar25,(System_String_o *)"",170.0,40.0,300.0,
                                           (System_Nullable_float__o)0x0,pUVar20,(MethodInfo *)0x0);
                                pUVar24 = (__this->fields).SinglePanel;
                                pSVar11 = (set->fields).BladeEffectColor;
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                if (lVar6 == 0) goto label_0435a2c5;
                                pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                                pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
                                ;
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateColorSetting
                                          (pUVar24,(UI_ElementStyle_o *)__this_01,
                                           (Settings_BaseSetting_o *)pSVar11,"Blade Effect Color (Patreon T2)",pUVar12,
                                           (System_String_o *)"",90.0,30.0,pUVar20,(MethodInfo *)0x0
                                          );
                              }
                              unaff_R13 = (Settings_BaseSetSetting_c **)(__this->fields).SinglePanel;
                              unaff_R15 = (System_String_Fields)(set->fields).Cape;
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              in_RCX = "";
                              unaff_R12 = (long *)UI_UIManager__GetLocale
                                                            ((System_String_o *)category,
                                                             (System_String_o *)subCategory,"Cape",
                                                             (System_String_o *)"",
                                                             (System_String_o *)"",(MethodInfo *)0x0
                                                            );
                              SVar31._stringLength = 2;
                              SVar31._firstChar = 0;
                              SVar31._6_2_ = 0;
                              pSVar25 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
                              plVar30 = &TypeInfo_UnityAction;
                              if (pSVar25 != (System_String_array *)0x0) {
                                if ((int)pSVar25->max_length == 0) goto label_0435a273;
                                pSVar25->m_Items[0] = "No cape";
                                il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
                                if ((uint)pSVar25->max_length < 2) goto label_0435a273;
                                pSVar25->m_Items[1] = "Cape";
                                il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 1);
                                pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
                                ;
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateDropdownSetting
                                          ((UnityEngine_Transform_o *)unaff_R13,(UI_ElementStyle_o *)__this_01
                                           ,(Settings_BaseSetting_o *)unaff_R15,(System_String_o *)unaff_R12,
                                           pSVar25,(System_String_o *)"",170.0,40.0,300.0,
                                           (System_Nullable_float__o)0x0,pUVar20,(MethodInfo *)0x0);
                                pUVar24 = (__this->fields).SinglePanel;
                                pSVar9 = (set->fields).Logo;
                                SVar31 = category;
                                pSVar34 = "";
                                pSVar19 = UI_UIManager__GetLocale
                                                    ((System_String_o *)category,
                                                     (System_String_o *)subCategory,"Logo",
                                                     (System_String_o *)"",
                                                     (System_String_o *)"",(MethodInfo *)0x0);
                                pSVar25 = UI_CharacterEditorCostumePanel__GetOptions
                                                    ((UI_CharacterEditorCostumePanel_o *)SVar31,"Logo",4
                                                     ,0,(MethodInfo *)pSVar34);
                                pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
                                ;
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateDropdownSetting
                                          (pUVar24,(UI_ElementStyle_o *)__this_01,
                                           (Settings_BaseSetting_o *)pSVar9,pSVar19,pSVar25,
                                           (System_String_o *)"",170.0,40.0,300.0,
                                           (System_Nullable_float__o)0x0,pUVar20,(MethodInfo *)0x0);
                                if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                unaff_R12 = (long *)UI_CharacterEditorCostumePanel__GetOptions
                                                              (TypeInfo_HumanSetup,"Hat",
                                                               *(int32_t *)
                                                                ((long)&((TypeInfo_HumanSetup[1].fields.
                                                                         m_CancellationTokenSource)->fields).
                                                                        _timer + 4),1,(MethodInfo *)pSVar25);
                                pUVar32 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
                                pSVar8 = (set->fields).Hat;
                                in_RCX = "";
                                SVar22 = category;
                                pSVar19 = UI_UIManager__GetLocale
                                                    ((System_String_o *)category,
                                                     (System_String_o *)subCategory,"Hat",
                                                     (System_String_o *)"",
                                                     (System_String_o *)"",(MethodInfo *)0x0);
                                SVar31 = (System_String_Fields)unaff_R12;
                                pSVar25 = UI_CharacterEditorCostumePanel__GetIcons
                                                    ((UI_CharacterEditorCostumePanel_o *)SVar22,
                                                     (System_String_array *)unaff_R12,method_06);
                                lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                unaff_R13 = (Settings_BaseSetSetting_c **)__this;
                                if (lVar6 != 0) {
                                  pUVar10 = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
                                  pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor();
                                  uStackY_c0 = 0x4359a95;
                                  UI_ElementFactory__CreateIconPickSetting
                                            ((UnityEngine_Transform_o *)pUVar32,(UI_ElementStyle_o *)__this_01
                                             ,(Settings_BaseSetting_o *)pSVar8,pSVar19,
                                             (System_String_array *)unaff_R12,pSVar25,pUVar10,
                                             (System_String_o *)"",(System_String_array *)0x0,170.0,
                                             40.0,pUVar20,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                                  unaff_R12 = (long *)UI_CharacterEditorCostumePanel__GetOptions
                                                                (pUVar32,"Head",
                                                                 *(int32_t *)
                                                                  &((TypeInfo_HumanSetup[1].fields.
                                                                    m_CancellationTokenSource)->fields)._timer
                                                                 ,1,(MethodInfo *)unaff_R12);
                                  pUVar32 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
                                  pSVar8 = (set->fields).Head;
                                  in_RCX = "";
                                  SVar22 = category;
                                  pSVar19 = UI_UIManager__GetLocale
                                                      ((System_String_o *)category,
                                                       (System_String_o *)subCategory,"Head",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",(MethodInfo *)0x0);
                                  SVar31 = (System_String_Fields)unaff_R12;
                                  pSVar25 = UI_CharacterEditorCostumePanel__GetIcons
                                                      ((UI_CharacterEditorCostumePanel_o *)SVar22,
                                                       (System_String_array *)unaff_R12,method_07);
                                  lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                  if (lVar6 != 0) {
                                    pUVar10 = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
                                    pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                              il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor();
                                    uStackY_c0 = 0x4359bb5;
                                    UI_ElementFactory__CreateIconPickSetting
                                              ((UnityEngine_Transform_o *)pUVar32,
                                               (UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar8
                                               ,pSVar19,(System_String_array *)unaff_R12,pSVar25,pUVar10,
                                               (System_String_o *)"",(System_String_array *)0x0,
                                               170.0,40.0,pUVar20,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                                    unaff_R12 = (long *)UI_CharacterEditorCostumePanel__GetOptions
                                                                  (pUVar32,"Back",
                                                                   *(int32_t *)
                                                                    ((long)&((TypeInfo_HumanSetup[1].fields.
                                                                             m_CancellationTokenSource)->
                                                                            fields)._executingCallback + 4),1,
                                                                   (MethodInfo *)unaff_R12);
                                    pUVar24 = (__this->fields).SinglePanel;
                                    pSVar8 = (set->fields).Back;
                                    in_RCX = "";
                                    SVar22 = category;
                                    pSVar19 = UI_UIManager__GetLocale
                                                        ((System_String_o *)category,
                                                         (System_String_o *)subCategory,"Back",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",(MethodInfo *)0x0);
                                    SVar31 = (System_String_Fields)unaff_R12;
                                    pSVar25 = UI_CharacterEditorCostumePanel__GetIcons
                                                        ((UI_CharacterEditorCostumePanel_o *)SVar22,
                                                         (System_String_array *)unaff_R12,method_08);
                                    lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                    if (lVar6 != 0) {
                                      pUVar10 = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
                                      pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor();
                                      uStackY_c0 = 0x4359cd9;
                                      UI_ElementFactory__CreateIconPickSetting
                                                (pUVar24,(UI_ElementStyle_o *)__this_01,
                                                 (Settings_BaseSetting_o *)pSVar8,pSVar19,
                                                 (System_String_array *)unaff_R12,pSVar25,pUVar10,
                                                 (System_String_o *)"",(System_String_array *)0x0,
                                                 170.0,40.0,pUVar20,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0
                                                );
                                      pUVar24 = (__this->fields).SinglePanel;
                                      pSVar11 = (set->fields).SkinColor;
                                      in_RCX = "";
                                      SVar31 = subCategory;
                                      unaff_R12 = (long *)UI_UIManager__GetLocale
                                                                    ((System_String_o *)category,
                                                                     (System_String_o *)subCategory,
                                                                     "SkinColor",
                                                                     (System_String_o *)"",
                                                                     (System_String_o *)"",
                                                                     (MethodInfo *)0x0);
                                      lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                      if (lVar6 != 0) {
                                        pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                                        pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                  il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor();
                                        UI_ElementFactory__CreateColorSetting
                                                  (pUVar24,(UI_ElementStyle_o *)__this_01,
                                                   (Settings_BaseSetting_o *)pSVar11,
                                                   (System_String_o *)unaff_R12,pUVar12,
                                                   (System_String_o *)"",90.0,30.0,pUVar20,
                                                   (MethodInfo *)0x0);
                                        pUVar24 = (__this->fields).SinglePanel;
                                        pSVar11 = (set->fields).HairColor;
                                        in_RCX = "";
                                        SVar31 = subCategory;
                                        unaff_R12 = (long *)UI_UIManager__GetLocale
                                                                      ((System_String_o *)category,
                                                                       (System_String_o *)subCategory,
                                                                       "HairColor",
                                                                       (System_String_o *)"",
                                                                       (System_String_o *)"",
                                                                       (MethodInfo *)0x0);
                                        lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                        if (lVar6 != 0) {
                                          pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                                          pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                    il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor();
                                          UI_ElementFactory__CreateColorSetting
                                                    (pUVar24,(UI_ElementStyle_o *)__this_01,
                                                     (Settings_BaseSetting_o *)pSVar11,
                                                     (System_String_o *)unaff_R12,pUVar12,
                                                     (System_String_o *)"",90.0,30.0,pUVar20,
                                                     (MethodInfo *)0x0);
                                          pUVar24 = (__this->fields).SinglePanel;
                                          pSVar11 = (set->fields).ShirtColor;
                                          in_RCX = "";
                                          SVar31 = subCategory;
                                          unaff_R12 = (long *)UI_UIManager__GetLocale
                                                                        ((System_String_o *)category,
                                                                         (System_String_o *)subCategory,
                                                                         "ShirtColor",
                                                                         (System_String_o *)"",
                                                                         (System_String_o *)"",
                                                                         (MethodInfo *)0x0);
                                          lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                          if (lVar6 != 0) {
                                            pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                                            pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                      il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor();
                                            UI_ElementFactory__CreateColorSetting
                                                      (pUVar24,(UI_ElementStyle_o *)__this_01,
                                                       (Settings_BaseSetting_o *)pSVar11,
                                                       (System_String_o *)unaff_R12,pUVar12,
                                                       (System_String_o *)"",90.0,30.0,pUVar20,
                                                       (MethodInfo *)0x0);
                                            pUVar24 = (__this->fields).SinglePanel;
                                            pSVar11 = (set->fields).StrapsColor;
                                            in_RCX = "";
                                            SVar31 = subCategory;
                                            unaff_R12 = (long *)UI_UIManager__GetLocale
                                                                          ((System_String_o *)category,
                                                                           (System_String_o *)subCategory,
                                                                           "StrapsColor",
                                                                           (System_String_o *)"",
                                                                           (System_String_o *)"",
                                                                           (MethodInfo *)0x0);
                                            lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                            if (lVar6 != 0) {
                                              pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                                              pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                        il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor();
                                              UI_ElementFactory__CreateColorSetting
                                                        (pUVar24,(UI_ElementStyle_o *)__this_01,
                                                         (Settings_BaseSetting_o *)pSVar11,
                                                         (System_String_o *)unaff_R12,pUVar12,
                                                         (System_String_o *)"",90.0,30.0,pUVar20,
                                                         (MethodInfo *)0x0);
                                              pUVar24 = (__this->fields).SinglePanel;
                                              pSVar11 = (set->fields).PantsColor;
                                              in_RCX = "";
                                              SVar31 = subCategory;
                                              unaff_R12 = (long *)UI_UIManager__GetLocale
                                                                            ((System_String_o *)category,
                                                                             (System_String_o *)subCategory,
                                                                             "PantsColor",
                                                                             (System_String_o *)"",
                                                                             (System_String_o *)"",
                                                                             (MethodInfo *)0x0);
                                              lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                              if (lVar6 != 0) {
                                                pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                                                pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                          il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor();
                                                UI_ElementFactory__CreateColorSetting
                                                          (pUVar24,(UI_ElementStyle_o *)__this_01,
                                                           (Settings_BaseSetting_o *)pSVar11,
                                                           (System_String_o *)unaff_R12,pUVar12,
                                                           (System_String_o *)"",90.0,30.0,pUVar20,
                                                           (MethodInfo *)0x0);
                                                pUVar24 = (__this->fields).SinglePanel;
                                                pSVar11 = (set->fields).JacketColor;
                                                in_RCX = "";
                                                SVar31 = subCategory;
                                                unaff_R12 = (long *)UI_UIManager__GetLocale
                                                                              ((System_String_o *)category,
                                                                               (System_String_o *)subCategory,
                                                                               "JacketColor",
                                                                               (System_String_o *)""
                                                                               ,(System_String_o *)
                                                                                "",(MethodInfo *)0x0
                                                                              );
                                                lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                                if (lVar6 != 0) {
                                                  pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                                                  pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  UI_ElementFactory__CreateColorSetting
                                                            (pUVar24,(UI_ElementStyle_o *)__this_01,
                                                             (Settings_BaseSetting_o *)pSVar11,
                                                             (System_String_o *)unaff_R12,pUVar12,
                                                             (System_String_o *)"",90.0,30.0,pUVar20
                                                             ,(MethodInfo *)0x0);
                                                  pUVar24 = (__this->fields).SinglePanel;
                                                  pSVar11 = (set->fields).BootsColor;
                                                  in_RCX = "";
                                                  unaff_R12 = (long *)UI_UIManager__GetLocale
                                                                                ((System_String_o *)category,
                                                                                 (System_String_o *)
                                                                                 subCategory,"BootsColor",
                                                                                 (System_String_o *)
                                                                                 "",
                                                                                 (System_String_o *)
                                                                                 "",
                                                                                 (MethodInfo *)0x0);
                                                  lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                                  SVar31 = subCategory;
                                                  if (lVar6 != 0) {
                                                    pUVar12 = *(UI_ColorPickPopup_o **)(lVar6 + 0x48);
                                                    pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                              il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                    UnityEngine_Events_UnityAction___ctor();
                                                    UI_ElementFactory__CreateColorSetting
                                                              (pUVar24,(UI_ElementStyle_o *)__this_01,
                                                               (Settings_BaseSetting_o *)pSVar11,
                                                               (System_String_o *)unaff_R12,pUVar12,
                                                               (System_String_o *)"",90.0,30.0,
                                                               pUVar20,(MethodInfo *)0x0);
                                                    *(undefined1 *)&(__this->fields)._isRebuildingPanel = 0;
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_0435a2c5:
  il2cpp_runtime_helper_022b2c90();
  plVar30 = (long *)((ulong)in_RCX & 0xffffffff);
  if (g_data_057ae177 == '\0') {
    plStackY_c8 = (long *)0x435a2f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plStackY_c8 = (long *)0x435a305;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    plStackY_c8 = (long *)0x435a311;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    plStackY_c8 = (long *)0x435a31d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    plStackY_c8 = (long *)0x435a329;
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae177 = '\x01';
  }
  plStackY_c8 = (long *)0x435a347;
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  plStackY_c8 = (long *)0x435a35c;
  System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_System_String);
  if ((char)plVar30 == '\0') {
joined_r0x0435a3cc:
    iVar18 = 0;
    if ((int)extraout_RDX_02 < 1) {
      if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto label_0435a498;
      goto label_0435a4b7;
    }
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_R12 = (long *)&stack0xffffffffffffff4c;
      plVar30 = &MethodInfo_Void_Add;
      do {
        plStackY_c8 = (long *)0x435a424;
        pSVar19 = System_Int32__ToString((int32_t)unaff_R12,(MethodInfo *)0x0);
        plStackY_c8 = (long *)0x435a431;
        pSVar19 = System_String__Concat_3ae5ba0((System_String_o *)SVar31,pSVar19,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar13 = (__this_03->fields)._items;
        if (pSVar13 == (System_Object_array *)0x0) goto label_0435a4b7;
        uVar5 = (__this_03->fields)._size;
        if (uVar5 < (uint)pSVar13->max_length) {
          (__this_03->fields)._size = uVar5 + 1;
          pSVar13->m_Items[(int)uVar5] = (Il2CppObject *)pSVar19;
          plStackY_c8 = (long *)0x435a466;
          il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar5);
        }
        else {
          plStackY_c8 = (long *)0x435a40a;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_03,(Il2CppObject *)pSVar19,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)extraout_RDX_02);
label_0435a498:
      plStackY_c8 = (long *)0x435a4aa;
      System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
      return;
    }
  }
  else {
    plStackY_c8 = (long *)0x435a375;
    pSVar19 = System_String__Concat_3ae5ba0((System_String_o *)SVar31,"None",(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_03->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar13 = (__this_03->fields)._items;
      if (pSVar13 != (System_Object_array *)0x0) {
        uVar5 = (__this_03->fields)._size;
        if (uVar5 < (uint)pSVar13->max_length) {
          (__this_03->fields)._size = uVar5 + 1;
          pSVar13->m_Items[(int)uVar5] = (Il2CppObject *)pSVar19;
          plStackY_c8 = (long *)0x435a3c1;
          il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar5);
        }
        else {
          plStackY_c8 = (long *)0x435a482;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_03,(Il2CppObject *)pSVar19,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        goto joined_r0x0435a3cc;
      }
    }
label_0435a4b7:
    plStackY_c8 = (long *)0x435a4bc;
    il2cpp_runtime_helper_022b2c90();
  }
  plStackY_c8 = (long *)0x435a4c8;
  pSVar19 = System_Int32__ToString((int32_t)&stack0xffffffffffffff4c,(MethodInfo *)0x0);
  plStackY_c8 = (long *)0x435a4d5;
  System_String__Concat_3ae5ba0((System_String_o *)SVar31,pSVar19,(MethodInfo *)0x0);
  plStackY_c8 = (long *)0x435a4da;
  uStackY_f8 = il2cpp_runtime_helper_022b2c90();
  pSStackY_f0 = __this_03;
  SStackY_e8 = (System_String_Fields)unaff_R12;
  SStackY_e0 = (System_String_Fields)unaff_R13;
  SStackY_d8 = SVar31;
  uStackY_d0 = extraout_RDX_02 & 0xffffffff;
  plStackY_c8 = plVar30;
  if (g_data_057ae17a == '\0') {
    plStackY_100 = (long *)0x435a503;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plStackY_100 = (long *)0x435a50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    plStackY_100 = (long *)0x435a51b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    plStackY_100 = (long *)0x435a527;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    plStackY_100 = (long *)0x435a533;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    plStackY_100 = (long *)0x435a53f;
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/");
    g_data_057ae17a = '\x01';
  }
  plStackY_100 = (long *)0x435a555;
  __this_04 = (UI_CharacterEditorCostumePanel_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  plStackY_100 = (long *)0x435a56a;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_System_String);
  ppUVar35 = (UI_CharacterEditorCostumePanel_o **)unaff_R13;
  if (pSVar19 != (System_String_o *)0x0) {
    iVar18 = (int)pSVar19[1].klass;
    if ((System_Collections_Generic_List_object__o *)__this_04 !=
        (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar18 < 1) {
label_0435a667:
        System_Collections_Generic_List_object___ToArray
                  ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_String_ToArray);
        return;
      }
      __this_03 = (System_Collections_Generic_List_object__o *)0x0;
      plVar30 = &MethodInfo_Void_Add;
      ppUVar35 = (UI_CharacterEditorCostumePanel_o **)&TypeInfo_ResourcePaths;
      if (((ulong)pSVar19[1].klass & 0xffffffff) != 0) {
        do {
          unaff_R12 = *(long **)(&pSVar19[1].monitor + (long)__this_03);
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            plStackY_100 = (long *)0x435a600;
            il2cpp_runtime_helper_02337ed0();
          }
          plStackY_100 = (long *)0x435a623;
          pSVar26 = System_String__Concat_3af7150
                              (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/",
                               (System_String_o *)unaff_R12,(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          piVar1 = &(((System_Collections_Generic_List_object__o *)__this_04)->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar13 = (((System_Collections_Generic_List_object__o *)__this_04)->fields)._items;
          if (pSVar13 == (System_Object_array *)0x0) goto label_0435a6d0;
          uVar5 = (((System_Collections_Generic_List_object__o *)__this_04)->fields)._size;
          if (uVar5 < (uint)pSVar13->max_length) {
            (((System_Collections_Generic_List_object__o *)__this_04)->fields)._size = uVar5 + 1;
            pSVar13->m_Items[(int)uVar5] = (Il2CppObject *)pSVar26;
            plStackY_100 = (long *)0x435a662;
            il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar5,pSVar26);
          }
          else {
            plStackY_100 = (long *)0x435a5ca;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pSVar26,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          __this_03 = (System_Collections_Generic_List_object__o *)((long)&__this_03->klass + 1);
          if ((long)(int)*(uint *)&pSVar19[1].klass <= (long)__this_03) goto label_0435a667;
        } while (__this_03 < (System_Collections_Generic_List_object__o *)(ulong)*(uint *)&pSVar19[1].klass);
      }
      plStackY_100 = (long *)0x435a68c;
      iVar18 = il2cpp_runtime_helper_022b2ca0();
    }
    if (0 < iVar18) {
      __this_03 = pSVar19[1].monitor;
      plVar30 = &TypeInfo_ResourcePaths;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        plStackY_100 = (long *)0x435a6ad;
        il2cpp_runtime_helper_02337ed0();
      }
      plStackY_100 = (long *)0x435a6d0;
      System_String__Concat_3af7150
                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/",
                 (System_String_o *)__this_03,(MethodInfo *)0x0);
    }
  }
label_0435a6d0:
  plStackY_100 = (long *)0x435a6d5;
  auStackY_130 = (undefined1  [8])il2cpp_runtime_helper_022b2c90();
  pSStackY_128 = __this_03;
  SStackY_120 = (System_String_Fields)unaff_R12;
  SStackY_118 = (System_String_Fields)ppUVar35;
  pSStackY_110 = pSVar19;
  pSStackY_108 = (System_Collections_Generic_List_object__o *)__this_04;
  plStackY_100 = plVar30;
  if (g_data_057ae178 == '\0') {
    plStackY_138 = (long *)0x435a700;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    plStackY_138 = (long *)0x435a70c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plStackY_138 = (long *)0x435a718;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    plStackY_138 = (long *)0x435a724;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    plStackY_138 = (long *)0x435a730;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    plStackY_138 = (long *)0x435a73c;
    il2cpp_runtime_helper_023445d0(&"HairF");
    plStackY_138 = (long *)0x435a748;
    il2cpp_runtime_helper_023445d0(&"HairM");
    g_data_057ae178 = '\x01';
  }
  auStackY_130 = (undefined1  [8])0x0;
  plStackY_138 = (long *)0x435a76d;
  __this_05 = (UI_CharacterEditorCostumePanel_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  plStackY_138 = (long *)0x435a782;
  __this_06 = (UI_CharacterEditorCostumePanel_o **)MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_System_String);
  if ((System_Collections_Generic_List_object__o *)__this_05 !=
      (System_Collections_Generic_List_object__o *)0x0) {
    plVar30 = (long *)0x0;
    __this_04 = &TypeInfo_HumanSetup;
    pSVar19 = (System_String_o *)(auStackY_130 + 4);
    ppUVar35 = &"HairM";
    unaff_R12 = &MethodInfo_Void_Add;
    auStackY_130 = (undefined1  [8])((ulong)auStackY_130 & 0xffffffff);
    if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) != 0) goto label_0435a811;
    while( true ) {
      plStackY_138 = (long *)0x435a7c5;
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)&((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields).field_0x1c <= (int)plVar30)
      break;
      while( true ) {
        plStackY_138 = (long *)0x435a827;
        __this_06 = (UI_CharacterEditorCostumePanel_o **)
                    System_Int32__ToString((int32_t)pSVar19,(MethodInfo *)0x0);
        plStackY_138 = (long *)0x435a835;
        ppUVar33 = (UI_CharacterEditorCostumePanel_o **)"HairM";
        pSVar26 = System_String__Concat_3ae5ba0
                            ((System_String_o *)"HairM",(System_String_o *)__this_06,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        piVar1 = &(((System_Collections_Generic_List_object__o *)__this_05)->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar13 = (((System_Collections_Generic_List_object__o *)__this_05)->fields)._items;
        if (pSVar13 == (System_Object_array *)0x0) goto label_0435a9e7;
        uVar5 = (((System_Collections_Generic_List_object__o *)__this_05)->fields)._size;
        if (uVar5 < (uint)pSVar13->max_length) {
          (((System_Collections_Generic_List_object__o *)__this_05)->fields)._size = uVar5 + 1;
          pSVar13->m_Items[(int)uVar5] = (Il2CppObject *)pSVar26;
          plStackY_138 = (long *)0x435a86e;
          il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar5);
        }
        else {
          plStackY_138 = (long *)0x435a7fa;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)pSVar26,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        plVar30 = (long *)(ulong)(auStackY_130._4_4_ + 1);
        auStackY_130._4_4_ = auStackY_130._4_4_ + 1;
        if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) break;
label_0435a811:
        if (*(int *)&((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields).field_0x1c <= (int)plVar30)
        goto label_0435a870;
      }
    }
label_0435a870:
    plVar30 = (long *)0x0;
    ppUVar35 = &"HairF";
    auStackY_130 = (undefined1  [8])((ulong)auStackY_130 & 0xffffffff00000000);
    if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) != 0) goto label_0435a8df;
    while( true ) {
      plStackY_138 = (long *)0x435a895;
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)&((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._executingCallback <=
          (int)plVar30) break;
      while( true ) {
        plStackY_138 = (long *)0x435a8f5;
        __this_06 = (UI_CharacterEditorCostumePanel_o **)
                    System_Int32__ToString((int32_t)auStackY_130,(MethodInfo *)0x0);
        plStackY_138 = (long *)0x435a903;
        ppUVar33 = (UI_CharacterEditorCostumePanel_o **)"HairF";
        pSVar26 = System_String__Concat_3ae5ba0
                            ((System_String_o *)"HairF",(System_String_o *)__this_06,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        piVar1 = &(((System_Collections_Generic_List_object__o *)__this_05)->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar13 = (((System_Collections_Generic_List_object__o *)__this_05)->fields)._items;
        pSVar19 = (System_String_o *)auStackY_130;
        if (pSVar13 == (System_Object_array *)0x0) goto label_0435a9e7;
        uVar5 = (((System_Collections_Generic_List_object__o *)__this_05)->fields)._size;
        if (uVar5 < (uint)pSVar13->max_length) {
          (((System_Collections_Generic_List_object__o *)__this_05)->fields)._size = uVar5 + 1;
          pSVar13->m_Items[(int)uVar5] = (Il2CppObject *)pSVar26;
          plStackY_138 = (long *)0x435a93c;
          il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar5);
        }
        else {
          plStackY_138 = (long *)0x435a8ca;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)pSVar26,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        plVar30 = (long *)(ulong)(auStackY_130._0_4_ + 1);
        auStackY_130._0_4_ = auStackY_130._0_4_ + 1;
        if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) break;
label_0435a8df:
        if (*(int *)&((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._executingCallback <=
            (int)plVar30) goto label_0435a93e;
      }
    }
label_0435a93e:
    plStackY_138 = (long *)0x435a950;
    System_Collections_Generic_List_object___ToArray
              ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_String_ToArray);
    return;
  }
  auStackY_130 = (undefined1  [8])((ulong)auStackY_130 & 0xffffffff);
  __this_05 = &TypeInfo_HumanSetup;
  if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
    plStackY_138 = (long *)0x435a97f;
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(int *)&((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields).field_0x1c < 1) {
    auStackY_130 = (undefined1  [8])((ulong)auStackY_130 & 0xffffffff00000000);
    if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
      plStackY_138 = (long *)0x435a9b9;
      il2cpp_runtime_helper_02337ed0();
    }
    ppUVar33 = (UI_CharacterEditorCostumePanel_o **)TypeInfo_HumanSetup;
    if (0 < *(int *)&((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._executingCallback) {
      plStackY_138 = (long *)0x435a9d3;
      __this_06 = (UI_CharacterEditorCostumePanel_o **)
                  System_Int32__ToString((int32_t)auStackY_130,(MethodInfo *)0x0);
      ppUVar33 = &"HairF";
      goto label_0435a9da;
    }
  }
  else {
    plStackY_138 = (long *)0x435a99b;
    __this_06 = (UI_CharacterEditorCostumePanel_o **)
                System_Int32__ToString((int)auStackY_130 + 4,(MethodInfo *)0x0);
    ppUVar33 = &"HairM";
label_0435a9da:
    ppUVar33 = (UI_CharacterEditorCostumePanel_o **)*ppUVar33;
    plStackY_138 = (long *)0x435a9e7;
    System_String__Concat_3ae5ba0((System_String_o *)ppUVar33,(System_String_o *)__this_06,(MethodInfo *)0x0);
  }
label_0435a9e7:
  plStackY_138 = (long *)0x435a9ec;
  uStackY_168 = il2cpp_runtime_helper_022b2c90();
  pSStackY_160 = (System_Collections_Generic_List_object__o *)__this_05;
  SStackY_158 = (System_String_Fields)unaff_R12;
  SStackY_150 = (System_String_Fields)ppUVar35;
  pSStackY_148 = pSVar19;
  pSStackY_140 = (System_Collections_Generic_List_object__o *)__this_04;
  plStackY_138 = plVar30;
  if (g_data_057ae179 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"CostumeM");
    ppUVar33 = &"CostumeF";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae179 = '\x01';
  }
  uStackY_168 = 0;
  if (((MethodInfo_362B8B0 *)__this_06 != (MethodInfo_362B8B0 *)0x0) &&
     (((MethodInfo_362B8B0 *)__this_06)->rgctx_data != (Il2CppRGCTXData *)0x0)) {
    iVar18 = *(int *)((long)((MethodInfo_362B8B0 *)__this_06)->rgctx_data + 0x14);
    __this_06 = (UI_CharacterEditorCostumePanel_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_System_String);
    if (iVar18 == 0) {
      if ((MethodInfo_362B8B0 *)__this_06 != (MethodInfo_362B8B0 *)0x0) {
        iVar18 = 0;
        uStackY_168 = uStackY_168 & 0xffffffff;
        if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) != 0) goto label_0435ac41;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar18 < ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields).
                       _threadIDExecutingCallbacks) {
          while( true ) {
            pSVar19 = System_Int32__ToString((int)&uStackY_168 + 4,(MethodInfo *)0x0);
            ppUVar33 = (UI_CharacterEditorCostumePanel_o **)"CostumeM";
            pSVar19 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeM",pSVar19,(MethodInfo *)0x0)
            ;
            lVar6 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&((MethodInfo_362B8B0 *)__this_06)->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar14 = ((MethodInfo_362B8B0 *)__this_06)->invoker_method;
            if (pIVar14 == (InvokerMethod)0x0) goto label_0435ad53;
            uVar5 = *(uint *)&((MethodInfo_362B8B0 *)__this_06)->name;
            if (uVar5 < *(uint *)(pIVar14 + 0x18)) {
              *(uint *)&((MethodInfo_362B8B0 *)__this_06)->name = uVar5 + 1;
              *(System_String_o **)(pIVar14 + (long)(int)uVar5 * 8 + 0x20) = pSVar19;
              il2cpp_runtime_helper_022b4080(pIVar14 + (long)(int)uVar5 * 8 + 0x20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_06,(Il2CppObject *)pSVar19,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            iVar18 = uStackY_168._4_4_ + 1;
            uStackY_168 = CONCAT44(iVar18,(int)uStackY_168);
            if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) break;
label_0435ac41:
            if (((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks <=
                iVar18) goto label_0435aca0;
          }
        }
        goto label_0435aca0;
      }
      uStackY_168 = uStackY_168 & 0xffffffff;
      __this_06 = &TypeInfo_HumanSetup;
      if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppUVar33 = (UI_CharacterEditorCostumePanel_o **)TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks) {
        pSVar19 = System_Int32__ToString((int)&uStackY_168 + 4,(MethodInfo *)0x0);
        ppUVar33 = &"CostumeM";
        goto label_0435ad46;
      }
    }
    else {
      if ((MethodInfo_362B8B0 *)__this_06 != (MethodInfo_362B8B0 *)0x0) {
        iVar18 = 0;
        uStackY_168 = (ulong)uStackY_168._4_4_ << 0x20;
        if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) != 0) goto label_0435ab4f;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar18 < ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._disposed) {
          while( true ) {
            pSVar19 = System_Int32__ToString((int32_t)&uStackY_168,(MethodInfo *)0x0);
            ppUVar33 = (UI_CharacterEditorCostumePanel_o **)"CostumeF";
            pSVar19 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeF",pSVar19,(MethodInfo *)0x0)
            ;
            lVar6 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&((MethodInfo_362B8B0 *)__this_06)->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar14 = ((MethodInfo_362B8B0 *)__this_06)->invoker_method;
            if (pIVar14 == (InvokerMethod)0x0) goto label_0435ad53;
            uVar5 = *(uint *)&((MethodInfo_362B8B0 *)__this_06)->name;
            if (uVar5 < *(uint *)(pIVar14 + 0x18)) {
              *(uint *)&((MethodInfo_362B8B0 *)__this_06)->name = uVar5 + 1;
              *(System_String_o **)(pIVar14 + (long)(int)uVar5 * 8 + 0x20) = pSVar19;
              il2cpp_runtime_helper_022b4080(pIVar14 + (long)(int)uVar5 * 8 + 0x20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_06,(Il2CppObject *)pSVar19,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            iVar18 = (int)uStackY_168 + 1;
            uStackY_168 = CONCAT44(uStackY_168._4_4_,iVar18);
            if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) break;
label_0435ab4f:
            if (((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._disposed <= iVar18)
            goto label_0435aca0;
          }
        }
label_0435aca0:
        System_Collections_Generic_List_object___ToArray
                  ((System_Collections_Generic_List_object__o *)__this_06,MethodInfo_String_ToArray);
        return;
      }
      uStackY_168 = (ulong)uStackY_168._4_4_ << 0x20;
      __this_06 = &TypeInfo_HumanSetup;
      if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppUVar33 = (UI_CharacterEditorCostumePanel_o **)TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._disposed) {
        pSVar19 = System_Int32__ToString((int32_t)&uStackY_168,(MethodInfo *)0x0);
        ppUVar33 = &"CostumeF";
label_0435ad46:
        __this_06 = &TypeInfo_HumanSetup;
        ppUVar33 = (UI_CharacterEditorCostumePanel_o **)*ppUVar33;
        System_String__Concat_3ae5ba0((System_String_o *)ppUVar33,pSVar19,(MethodInfo *)0x0);
      }
    }
  }
label_0435ad53:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae17b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"HairM0");
    il2cpp_runtime_helper_023445d0(&"HairF0");
    g_data_057ae17b = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  plVar30 = (long *)__this_06;
  if (((lVar6 != 0) &&
      (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar6 + 0x20),
      pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pMVar27 = (MethodInfo_362B8B0 *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          (pSVar7,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet), pMVar27 != (MethodInfo_362B8B0 *)0x0))
  {
    plVar30 = (long *)pMVar27;
    if (((byte)pMVar27->methodPointer[0x130] < (byte)*(code *)((long)TypeInfo_HumanCustomSet + 0x130)) ||
       (*(System_String_Fields *)
         (*(long *)(pMVar27->methodPointer + 200) + -8 +
         (ulong)(byte)*(code *)((long)TypeInfo_HumanCustomSet + 0x130) * 8) != TypeInfo_HumanCustomSet)) goto label_0435b02b;
    if ((pMVar27->rgctx_data != (Il2CppRGCTXData *)0x0) &&
       ((Settings_TypedSetting_T__o *)pMVar27[1].methodPointer != (Settings_TypedSetting_T__o *)0x0)) {
      if (*(int *)((long)pMVar27->rgctx_data + 0x14) == 0) {
        puVar28 = &"HairM0";
      }
      else {
        puVar28 = &"HairF0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pMVar27[1].methodPointer,(Il2CppObject *)*puVar28,MethodInfo_Void_set_Value)
      ;
      if ((Settings_TypedSetting_int__o *)pMVar27[1].virtualMethodPointer !=
          (Settings_TypedSetting_int__o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pMVar27[1].virtualMethodPointer,0,MethodInfo_Void_set_Value);
        pUVar15 = (((UI_CharacterEditorCostumePanel_o *)ppUVar33)->fields)._menu;
        if (pUVar15 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar15->klass->vtable)._8_RebuildPanels.methodPtr)
                    (pUVar15,1,(pUVar15->klass->vtable)._8_RebuildPanels.method);
          pUVar15 = (((UI_CharacterEditorCostumePanel_o *)ppUVar33)->fields)._menu;
          if (pUVar15 != (UI_CharacterEditorMenu_o *)0x0) {
            (*(pUVar15->klass->vtable)._9_ResetCharacter.methodPtr)
                      (pUVar15,1,(pUVar15->klass->vtable)._9_ResetCharacter.method);
            if (g_data_057ae187 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
              g_data_057ae187 = '\x01';
            }
            plVar30 = &TypeInfo_CharacterEditorSkinsPanel;
            if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
              if (g_data_057ae188 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                g_data_057ae188 = '\x01';
                cVar4 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
              }
              else {
                cVar4 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
              }
              if (cVar4 == '\0') {
                return;
              }
            }
            pUVar15 = (((UI_CharacterEditorCostumePanel_o *)ppUVar33)->fields)._menu;
            if ((pUVar15 != (UI_CharacterEditorMenu_o *)0x0) &&
               (pGVar16 = (pUVar15->fields)._gameManager,
               pGVar16 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
              __this_00 = (pGVar16->fields).Human;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar17 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar17 == '\0') {
label_0435afad:
                if (g_data_057ae17e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                  g_data_057ae17e = '\x01';
                }
                pUVar29 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
                UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                          (pUVar29,0,(MethodInfo *)0x0);
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)ppUVar33,(System_Collections_IEnumerator_o *)pUVar29
                           ,(MethodInfo *)0x0);
                return;
              }
              plVar30 = (long *)0x0;
              if (__this_00 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                goto label_0435afad;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435b02b:
  il2cpp_runtime_helper_022b2fd0(plVar30);
  if (g_data_057ae17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    g_data_057ae17e = '\x01';
  }
  pUVar29 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor(pUVar29,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$GetOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetOptions (UI_CharacterEditorCostumePanel_o* __this, System_String_o* prefix, int32_t options, bool includeNone, const MethodInfo* method);
// 0x435a2d0

System_String_array *
UI_CharacterEditorCostumePanel__GetOptions
          (UI_CharacterEditorCostumePanel_o *__this,System_String_o *prefix,int32_t options,
          bool_conflict includeNone,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  InvokerMethod pIVar6;
  long lVar7;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_MonoBehaviour_c *pUVar8;
  void *pvVar9;
  Characters_DummyHuman_o *__this_01;
  int iVar10;
  bool_conflict bVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  System_String_o *pSVar13;
  System_String_array *pSVar14;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo_362B8B0 *__this_03;
  System_String_o *pSVar15;
  MethodInfo_362B8B0 *pMVar16;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_04;
  undefined8 *puVar17;
  undefined8 *puVar18;
  UnityEngine_MonoBehaviour_o *__this_05;
  System_String_Fields unaff_R12;
  undefined8 *unaff_R13;
  undefined8 uStack_e0;
  System_Collections_Generic_List_object__o *pSStack_d8;
  System_String_Fields SStack_d0;
  undefined8 *puStack_c8;
  System_String_o *pSStack_c0;
  System_Collections_Generic_List_object__o *pSStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  System_Collections_Generic_List_object__o *pSStack_a0;
  System_String_Fields SStack_98;
  undefined8 *puStack_90;
  System_String_o *pSStack_88;
  System_Collections_Generic_List_object__o *pSStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  System_Collections_Generic_List_object__o *pSStack_68;
  System_String_Fields SStack_60;
  int local_2c;
  
  puVar18 = (undefined8 *)(ulong)(uint)includeNone;
  if (g_data_057ae177 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae177 = '\x01';
  }
  local_2c = 0;
  pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_System_String);
  if ((char)includeNone == '\0') {
joined_r0x0435a48d:
    if (options < 1) {
      local_2c = 0;
      if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) goto label_0435a498;
      goto label_0435a4b7;
    }
    local_2c = 0;
    if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_R12 = (System_String_Fields)&local_2c;
      puVar18 = &MethodInfo_Void_Add;
      do {
        pSVar13 = System_Int32__ToString(unaff_R12._stringLength,(MethodInfo *)0x0);
        pSVar13 = System_String__Concat_3ae5ba0(prefix,pSVar13,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(pSVar12->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar12->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) goto label_0435a4b7;
        uVar4 = (pSVar12->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (pSVar12->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar13;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar12,(Il2CppObject *)pSVar13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        local_2c = local_2c + 1;
      } while (local_2c < options);
label_0435a498:
      pSVar14 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar12,MethodInfo_String_ToArray);
      return pSVar14;
    }
  }
  else {
    pSVar13 = System_String__Concat_3ae5ba0(prefix,"None",(MethodInfo *)0x0);
    lVar7 = MethodInfo_Void_Add;
    if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar12->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (pSVar12->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar4 = (pSVar12->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (pSVar12->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar13;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar12,(Il2CppObject *)pSVar13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        goto joined_r0x0435a48d;
      }
    }
label_0435a4b7:
    il2cpp_runtime_helper_022b2c90();
  }
  pSVar13 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0(prefix,pSVar13,(MethodInfo *)0x0);
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pSStack_68 = pSVar12;
  SStack_60 = unaff_R12;
  if (g_data_057ae17a == '\0') {
    puStack_78 = (undefined8 *)0x435a503;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_78 = (undefined8 *)0x435a50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_78 = (undefined8 *)0x435a51b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_78 = (undefined8 *)0x435a527;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_78 = (undefined8 *)0x435a533;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    puStack_78 = (undefined8 *)0x435a53f;
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/");
    g_data_057ae17a = '\x01';
  }
  puStack_78 = (undefined8 *)0x435a555;
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_78 = (undefined8 *)0x435a56a;
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_System_String);
  if (pSVar13 != (System_String_o *)0x0) {
    iVar10 = (int)pSVar13[1].klass;
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar10 < 1) {
label_0435a667:
        pSVar14 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray(__this_02,MethodInfo_String_ToArray);
        return pSVar14;
      }
      pSVar12 = (System_Collections_Generic_List_object__o *)0x0;
      unaff_R13 = &TypeInfo_ResourcePaths;
      puVar18 = &MethodInfo_Void_Add;
      if (((ulong)pSVar13[1].klass & 0xffffffff) != 0) {
        do {
          unaff_R12 = *(System_String_Fields *)(&pSVar13[1].monitor + (long)pSVar12);
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            puStack_78 = (undefined8 *)0x435a600;
            il2cpp_runtime_helper_02337ed0();
          }
          puStack_78 = (undefined8 *)0x435a623;
          pSVar15 = System_String__Concat_3af7150
                              (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/",
                               (System_String_o *)unaff_R12,(MethodInfo *)0x0);
          lVar7 = MethodInfo_Void_Add;
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_02->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_0435a6d0;
          uVar4 = (__this_02->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this_02->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar15;
            puStack_78 = (undefined8 *)0x435a662;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4,pSVar15);
          }
          else {
            puStack_78 = (undefined8 *)0x435a5ca;
            System_Collections_Generic_List_object___AddWithResize
                      (__this_02,(Il2CppObject *)pSVar15,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          pSVar12 = (System_Collections_Generic_List_object__o *)((long)&pSVar12->klass + 1);
          if ((long)(int)*(uint *)&pSVar13[1].klass <= (long)pSVar12) goto label_0435a667;
        } while (pSVar12 < (System_Collections_Generic_List_object__o *)(ulong)*(uint *)&pSVar13[1].klass);
      }
      puStack_78 = (undefined8 *)0x435a68c;
      iVar10 = il2cpp_runtime_helper_022b2ca0();
    }
    if (0 < iVar10) {
      pSVar12 = pSVar13[1].monitor;
      puVar18 = &TypeInfo_ResourcePaths;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        puStack_78 = (undefined8 *)0x435a6ad;
        il2cpp_runtime_helper_02337ed0();
      }
      puStack_78 = (undefined8 *)0x435a6d0;
      System_String__Concat_3af7150
                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/",
                 (System_String_o *)pSVar12,(MethodInfo *)0x0);
    }
  }
label_0435a6d0:
  puStack_78 = (undefined8 *)0x435a6d5;
  auStack_a8 = (undefined1  [8])il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = pSVar12;
  SStack_98 = unaff_R12;
  puStack_90 = unaff_R13;
  pSStack_88 = pSVar13;
  pSStack_80 = __this_02;
  puStack_78 = puVar18;
  if (g_data_057ae178 == '\0') {
    puStack_b0 = (undefined8 *)0x435a700;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    puStack_b0 = (undefined8 *)0x435a70c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_b0 = (undefined8 *)0x435a718;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_b0 = (undefined8 *)0x435a724;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_b0 = (undefined8 *)0x435a730;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_b0 = (undefined8 *)0x435a73c;
    il2cpp_runtime_helper_023445d0(&"HairF");
    puStack_b0 = (undefined8 *)0x435a748;
    il2cpp_runtime_helper_023445d0(&"HairM");
    g_data_057ae178 = '\x01';
  }
  auStack_a8 = (undefined1  [8])0x0;
  puStack_b0 = (undefined8 *)0x435a76d;
  pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_b0 = (undefined8 *)0x435a782;
  __this_03 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_System_String);
  if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
    puVar18 = (undefined8 *)0x0;
    __this_02 = (System_Collections_Generic_List_object__o *)&TypeInfo_HumanSetup;
    pSVar13 = (System_String_o *)(auStack_a8 + 4);
    unaff_R13 = &"HairM";
    unaff_R12 = (System_String_Fields)&MethodInfo_Void_Add;
    auStack_a8 = (undefined1  [8])((ulong)auStack_a8 & 0xffffffff);
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435a811;
    while( true ) {
      puStack_b0 = (undefined8 *)0x435a7c5;
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c <= (int)puVar18)
      break;
      while( true ) {
        puStack_b0 = (undefined8 *)0x435a827;
        __this_03 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)pSVar13,(MethodInfo *)0x0);
        puStack_b0 = (undefined8 *)0x435a835;
        __this_05 = "HairM";
        pSVar15 = System_String__Concat_3ae5ba0
                            ((System_String_o *)"HairM",(System_String_o *)__this_03,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(pSVar12->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar12->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) goto label_0435a9e7;
        uVar4 = (pSVar12->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (pSVar12->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar15;
          puStack_b0 = (undefined8 *)0x435a86e;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
        }
        else {
          puStack_b0 = (undefined8 *)0x435a7fa;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar12,(Il2CppObject *)pSVar15,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        puVar18 = (undefined8 *)(ulong)(auStack_a8._4_4_ + 1);
        auStack_a8._4_4_ = auStack_a8._4_4_ + 1;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435a811:
        if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c <= (int)puVar18)
        goto label_0435a870;
      }
    }
label_0435a870:
    puVar18 = (undefined8 *)0x0;
    unaff_R13 = &"HairF";
    auStack_a8 = (undefined1  [8])((ulong)auStack_a8 & 0xffffffff00000000);
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435a8df;
    while( true ) {
      puStack_b0 = (undefined8 *)0x435a895;
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback <=
          (int)puVar18) break;
      while( true ) {
        puStack_b0 = (undefined8 *)0x435a8f5;
        __this_03 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)auStack_a8,(MethodInfo *)0x0);
        puStack_b0 = (undefined8 *)0x435a903;
        __this_05 = "HairF";
        pSVar15 = System_String__Concat_3ae5ba0
                            ((System_String_o *)"HairF",(System_String_o *)__this_03,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(pSVar12->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar12->fields)._items;
        pSVar13 = (System_String_o *)auStack_a8;
        if (pSVar5 == (System_Object_array *)0x0) goto label_0435a9e7;
        uVar4 = (pSVar12->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (pSVar12->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar15;
          puStack_b0 = (undefined8 *)0x435a93c;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
        }
        else {
          puStack_b0 = (undefined8 *)0x435a8ca;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar12,(Il2CppObject *)pSVar15,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        puVar18 = (undefined8 *)(ulong)(auStack_a8._0_4_ + 1);
        auStack_a8._0_4_ = auStack_a8._0_4_ + 1;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435a8df:
        if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback <=
            (int)puVar18) goto label_0435a93e;
      }
    }
label_0435a93e:
    puStack_b0 = (undefined8 *)0x435a950;
    pSVar14 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar12,MethodInfo_String_ToArray);
    return pSVar14;
  }
  auStack_a8 = (undefined1  [8])((ulong)auStack_a8 & 0xffffffff);
  pSVar12 = (System_Collections_Generic_List_object__o *)&TypeInfo_HumanSetup;
  if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
    puStack_b0 = (undefined8 *)0x435a97f;
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c < 1) {
    auStack_a8 = (undefined1  [8])((ulong)auStack_a8 & 0xffffffff00000000);
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
      puStack_b0 = (undefined8 *)0x435a9b9;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05 = TypeInfo_HumanSetup;
    if (0 < *(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback) {
      puStack_b0 = (undefined8 *)0x435a9d3;
      __this_03 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)auStack_a8,(MethodInfo *)0x0);
      puVar17 = &"HairF";
      goto label_0435a9da;
    }
  }
  else {
    puStack_b0 = (undefined8 *)0x435a99b;
    __this_03 = (MethodInfo_362B8B0 *)System_Int32__ToString((int)auStack_a8 + 4,(MethodInfo *)0x0);
    puVar17 = &"HairM";
label_0435a9da:
    __this_05 = (UnityEngine_MonoBehaviour_o *)*puVar17;
    puStack_b0 = (undefined8 *)0x435a9e7;
    System_String__Concat_3ae5ba0((System_String_o *)__this_05,(System_String_o *)__this_03,(MethodInfo *)0x0)
    ;
  }
label_0435a9e7:
  puStack_b0 = (undefined8 *)0x435a9ec;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pSStack_d8 = pSVar12;
  SStack_d0 = unaff_R12;
  puStack_c8 = unaff_R13;
  pSStack_c0 = pSVar13;
  pSStack_b8 = __this_02;
  puStack_b0 = puVar18;
  if (g_data_057ae179 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"CostumeM");
    __this_05 = (UnityEngine_MonoBehaviour_o *)&"CostumeF";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae179 = '\x01';
  }
  uStack_e0 = 0;
  if ((__this_03 != (MethodInfo_362B8B0 *)0x0) && (__this_03->rgctx_data != (Il2CppRGCTXData *)0x0)) {
    iVar10 = *(int *)((long)__this_03->rgctx_data + 0x14);
    __this_03 = (MethodInfo_362B8B0 *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
    if (iVar10 == 0) {
      if (__this_03 != (MethodInfo_362B8B0 *)0x0) {
        iVar10 = 0;
        uStack_e0 = uStack_e0 & 0xffffffff;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435ac41;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar10 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).
                       _threadIDExecutingCallbacks) {
          while( true ) {
            pSVar13 = System_Int32__ToString((int)&uStack_e0 + 4,(MethodInfo *)0x0);
            __this_05 = "CostumeM";
            pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeM",pSVar13,(MethodInfo *)0x0)
            ;
            lVar7 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&__this_03->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar6 = __this_03->invoker_method;
            if (pIVar6 == (InvokerMethod)0x0) goto label_0435ad53;
            uVar4 = *(uint *)&__this_03->name;
            if (uVar4 < *(uint *)(pIVar6 + 0x18)) {
              *(uint *)&__this_03->name = uVar4 + 1;
              *(System_String_o **)(pIVar6 + (long)(int)uVar4 * 8 + 0x20) = pSVar13;
              il2cpp_runtime_helper_022b4080(pIVar6 + (long)(int)uVar4 * 8 + 0x20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar13,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar10 = uStack_e0._4_4_ + 1;
            uStack_e0 = CONCAT44(iVar10,(int)uStack_e0);
            if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435ac41:
            if (((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks <=
                iVar10) goto label_0435aca0;
          }
        }
        goto label_0435aca0;
      }
      uStack_e0 = uStack_e0 & 0xffffffff;
      __this_03 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
      if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks) {
        pSVar13 = System_Int32__ToString((int)&uStack_e0 + 4,(MethodInfo *)0x0);
        puVar18 = &"CostumeM";
        goto label_0435ad46;
      }
    }
    else {
      if (__this_03 != (MethodInfo_362B8B0 *)0x0) {
        iVar10 = 0;
        uStack_e0 = (ulong)uStack_e0._4_4_ << 0x20;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435ab4f;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar10 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed) {
          while( true ) {
            pSVar13 = System_Int32__ToString((int32_t)&uStack_e0,(MethodInfo *)0x0);
            __this_05 = "CostumeF";
            pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeF",pSVar13,(MethodInfo *)0x0)
            ;
            lVar7 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&__this_03->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar6 = __this_03->invoker_method;
            if (pIVar6 == (InvokerMethod)0x0) goto label_0435ad53;
            uVar4 = *(uint *)&__this_03->name;
            if (uVar4 < *(uint *)(pIVar6 + 0x18)) {
              *(uint *)&__this_03->name = uVar4 + 1;
              *(System_String_o **)(pIVar6 + (long)(int)uVar4 * 8 + 0x20) = pSVar13;
              il2cpp_runtime_helper_022b4080(pIVar6 + (long)(int)uVar4 * 8 + 0x20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar13,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar10 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar10);
            if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435ab4f:
            if (((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed <= iVar10)
            goto label_0435aca0;
          }
        }
label_0435aca0:
        pSVar14 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_String_ToArray);
        return pSVar14;
      }
      uStack_e0 = (ulong)uStack_e0._4_4_ << 0x20;
      __this_03 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
      if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed) {
        pSVar13 = System_Int32__ToString((int32_t)&uStack_e0,(MethodInfo *)0x0);
        puVar18 = &"CostumeF";
label_0435ad46:
        __this_03 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
        __this_05 = (UnityEngine_MonoBehaviour_o *)*puVar18;
        System_String__Concat_3ae5ba0((System_String_o *)__this_05,pSVar13,(MethodInfo *)0x0);
      }
    }
  }
label_0435ad53:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae17b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"HairM0");
    il2cpp_runtime_helper_023445d0(&"HairF0");
    g_data_057ae17b = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar7 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar7 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pMVar16 = (MethodInfo_362B8B0 *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pMVar16 != (MethodInfo_362B8B0 *)0x0)) {
    __this_03 = pMVar16;
    if (((byte)pMVar16->methodPointer[0x130] < (byte)*(code *)(TypeInfo_HumanCustomSet + 0x130)) ||
       (*(long *)(*(long *)(pMVar16->methodPointer + 200) + -8 +
                 (ulong)(byte)*(code *)(TypeInfo_HumanCustomSet + 0x130) * 8) != TypeInfo_HumanCustomSet)) goto label_0435b02b;
    if ((pMVar16->rgctx_data != (Il2CppRGCTXData *)0x0) &&
       ((Settings_TypedSetting_T__o *)pMVar16[1].methodPointer != (Settings_TypedSetting_T__o *)0x0)) {
      if (*(int *)((long)pMVar16->rgctx_data + 0x14) == 0) {
        puVar18 = &"HairM0";
      }
      else {
        puVar18 = &"HairF0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pMVar16[1].methodPointer,(Il2CppObject *)*puVar18,MethodInfo_Void_set_Value)
      ;
      if ((Settings_TypedSetting_int__o *)pMVar16[1].virtualMethodPointer !=
          (Settings_TypedSetting_int__o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pMVar16[1].virtualMethodPointer,0,MethodInfo_Void_set_Value);
        pUVar8 = __this_05[4].klass;
        if (pUVar8 != (UnityEngine_MonoBehaviour_c *)0x0) {
          pvVar9 = (pUVar8->_1).image;
          (**(code **)((long)pvVar9 + 0x1b8))(pUVar8,1,*(undefined8 *)((long)pvVar9 + 0x1c0));
          pUVar8 = __this_05[4].klass;
          if (pUVar8 != (UnityEngine_MonoBehaviour_c *)0x0) {
            pvVar9 = (pUVar8->_1).image;
            (**(code **)((long)pvVar9 + 0x1c8))(pUVar8,1,*(undefined8 *)((long)pvVar9 + 0x1d0));
            if (g_data_057ae187 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
              g_data_057ae187 = '\x01';
            }
            __this_03 = (MethodInfo_362B8B0 *)&TypeInfo_CharacterEditorSkinsPanel;
            pSVar14 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
            if (*(char *)&(pSVar14->obj).klass == '\0') {
              if (g_data_057ae188 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                g_data_057ae188 = '\x01';
                pSVar14 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
                cVar3 = *(char *)((long)&(pSVar14->obj).klass + 1);
              }
              else {
                cVar3 = *(char *)((long)&(pSVar14->obj).klass + 1);
              }
              if (cVar3 == '\0') {
                return pSVar14;
              }
            }
            if ((__this_05[4].klass != (UnityEngine_MonoBehaviour_c *)0x0) &&
               (pvVar9 = ((__this_05[4].klass)->_1).methods, pvVar9 != (void *)0x0)) {
              __this_01 = *(Characters_DummyHuman_o **)((long)pvVar9 + 0x28);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar11 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar11 == '\0') {
label_0435afad:
                if (g_data_057ae17e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                  g_data_057ae17e = '\x01';
                }
                __this_04 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
                UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                          (__this_04,0,(MethodInfo *)0x0);
                pSVar14 = (System_String_array *)
                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                    (__this_05,(System_Collections_IEnumerator_o *)__this_04,(MethodInfo *)0x0
                                    );
                return pSVar14;
              }
              __this_03 = (MethodInfo_362B8B0 *)0x0;
              if (__this_01 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyHuman__LoadSkin(__this_01,(MethodInfo *)0x0);
                goto label_0435afad;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435b02b:
  il2cpp_runtime_helper_022b2fd0(__this_03);
  if (g_data_057ae17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    g_data_057ae17e = '\x01';
  }
  pSVar14 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
            ((UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)pSVar14,0,(MethodInfo *)0x0
            );
  return pSVar14;
}


// UI.CharacterEditorCostumePanel$$GetHairOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetHairOptions (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435a6e0

System_String_array *
UI_CharacterEditorCostumePanel__GetHairOptions(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  InvokerMethod pIVar6;
  long lVar7;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_MonoBehaviour_c *pUVar8;
  void *pvVar9;
  Characters_DummyHuman_o *__this_01;
  bool_conflict bVar10;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo_362B8B0 *__this_03;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  MethodInfo_362B8B0 *pMVar13;
  undefined8 *puVar14;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_04;
  int iVar15;
  ulong unaff_RBP;
  UnityEngine_MonoBehaviour_o *__this_05;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  undefined8 uStack_70;
  System_Collections_Generic_List_object__o *pSStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  undefined8 local_38;
  
  if (g_data_057ae178 == '\0') {
    uStack_40 = 0x435a700;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    uStack_40 = 0x435a70c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_40 = 0x435a718;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    uStack_40 = 0x435a724;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    uStack_40 = 0x435a730;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    uStack_40 = 0x435a73c;
    il2cpp_runtime_helper_023445d0(&"HairF");
    uStack_40 = 0x435a748;
    il2cpp_runtime_helper_023445d0(&"HairM");
    g_data_057ae178 = '\x01';
  }
  local_38 = 0;
  uStack_40 = 0x435a76d;
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  uStack_40 = 0x435a782;
  __this_03 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_System_String);
  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
    unaff_RBP = 0;
    unaff_R15 = &TypeInfo_HumanSetup;
    unaff_R14 = (undefined8 *)((long)&local_38 + 4);
    unaff_R13 = &"HairM";
    unaff_R12 = &MethodInfo_Void_Add;
    local_38 = local_38 & 0xffffffff;
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435a811;
    while( true ) {
      uStack_40 = 0x435a7c5;
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c <= (int)unaff_RBP)
      break;
      while( true ) {
        uStack_40 = 0x435a827;
        __this_03 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)unaff_R14,(MethodInfo *)0x0);
        uStack_40 = 0x435a835;
        __this_05 = "HairM";
        pSVar11 = System_String__Concat_3ae5ba0
                            ((System_String_o *)"HairM",(System_String_o *)__this_03,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_02->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) goto label_0435a9e7;
        uVar4 = (__this_02->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_02->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar11;
          uStack_40 = 0x435a86e;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
        }
        else {
          uStack_40 = 0x435a7fa;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_02,(Il2CppObject *)pSVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        unaff_RBP = (ulong)(local_38._4_4_ + 1U);
        local_38 = CONCAT44(local_38._4_4_ + 1U,(int)local_38);
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435a811:
        if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c <= (int)unaff_RBP
           ) goto label_0435a870;
      }
    }
label_0435a870:
    unaff_RBP = 0;
    unaff_R13 = &"HairF";
    local_38 = local_38 & 0xffffffff00000000;
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435a8df;
    while( true ) {
      uStack_40 = 0x435a895;
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback <=
          (int)unaff_RBP) break;
      while( true ) {
        uStack_40 = 0x435a8f5;
        __this_03 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
        uStack_40 = 0x435a903;
        __this_05 = "HairF";
        pSVar11 = System_String__Concat_3ae5ba0
                            ((System_String_o *)"HairF",(System_String_o *)__this_03,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_02->fields)._items;
        unaff_R14 = &local_38;
        if (pSVar5 == (System_Object_array *)0x0) goto label_0435a9e7;
        uVar4 = (__this_02->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_02->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar11;
          uStack_40 = 0x435a93c;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
        }
        else {
          uStack_40 = 0x435a8ca;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_02,(Il2CppObject *)pSVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        unaff_RBP = (ulong)((int)local_38 + 1U);
        local_38 = CONCAT44(local_38._4_4_,(int)local_38 + 1U);
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435a8df:
        if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback <=
            (int)unaff_RBP) goto label_0435a93e;
      }
    }
label_0435a93e:
    uStack_40 = 0x435a950;
    pSVar12 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_02,MethodInfo_String_ToArray);
    return pSVar12;
  }
  local_38 = local_38 & 0xffffffff;
  __this_02 = (System_Collections_Generic_List_object__o *)&TypeInfo_HumanSetup;
  if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
    uStack_40 = 0x435a97f;
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c < 1) {
    local_38 = local_38 & 0xffffffff00000000;
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
      uStack_40 = 0x435a9b9;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05 = TypeInfo_HumanSetup;
    if (0 < *(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback) {
      uStack_40 = 0x435a9d3;
      __this_03 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
      puVar14 = &"HairF";
      goto label_0435a9da;
    }
  }
  else {
    uStack_40 = 0x435a99b;
    __this_03 = (MethodInfo_362B8B0 *)System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
    puVar14 = &"HairM";
label_0435a9da:
    __this_05 = (UnityEngine_MonoBehaviour_o *)*puVar14;
    uStack_40 = 0x435a9e7;
    System_String__Concat_3ae5ba0((System_String_o *)__this_05,(System_String_o *)__this_03,(MethodInfo *)0x0)
    ;
  }
label_0435a9e7:
  uStack_40 = 0x435a9ec;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pSStack_68 = __this_02;
  puStack_60 = unaff_R12;
  puStack_58 = unaff_R13;
  puStack_50 = (undefined1 *)unaff_R14;
  puStack_48 = unaff_R15;
  uStack_40 = unaff_RBP;
  if (g_data_057ae179 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"CostumeM");
    __this_05 = (UnityEngine_MonoBehaviour_o *)&"CostumeF";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae179 = '\x01';
  }
  uStack_70 = 0;
  if ((__this_03 != (MethodInfo_362B8B0 *)0x0) && (__this_03->rgctx_data != (Il2CppRGCTXData *)0x0)) {
    iVar15 = *(int *)((long)__this_03->rgctx_data + 0x14);
    __this_03 = (MethodInfo_362B8B0 *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
    if (iVar15 == 0) {
      if (__this_03 != (MethodInfo_362B8B0 *)0x0) {
        iVar15 = 0;
        uStack_70 = uStack_70 & 0xffffffff;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435ac41;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar15 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).
                       _threadIDExecutingCallbacks) {
          while( true ) {
            pSVar11 = System_Int32__ToString((int)&uStack_70 + 4,(MethodInfo *)0x0);
            __this_05 = "CostumeM";
            pSVar11 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeM",pSVar11,(MethodInfo *)0x0)
            ;
            lVar7 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&__this_03->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar6 = __this_03->invoker_method;
            if (pIVar6 == (InvokerMethod)0x0) goto label_0435ad53;
            uVar4 = *(uint *)&__this_03->name;
            if (uVar4 < *(uint *)(pIVar6 + 0x18)) {
              *(uint *)&__this_03->name = uVar4 + 1;
              *(System_String_o **)(pIVar6 + (long)(int)uVar4 * 8 + 0x20) = pSVar11;
              il2cpp_runtime_helper_022b4080(pIVar6 + (long)(int)uVar4 * 8 + 0x20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar15 = uStack_70._4_4_ + 1;
            uStack_70 = CONCAT44(iVar15,(int)uStack_70);
            if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435ac41:
            if (((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks <=
                iVar15) goto label_0435aca0;
          }
        }
        goto label_0435aca0;
      }
      uStack_70 = uStack_70 & 0xffffffff;
      __this_03 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
      if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks) {
        pSVar11 = System_Int32__ToString((int)&uStack_70 + 4,(MethodInfo *)0x0);
        puVar14 = &"CostumeM";
        goto label_0435ad46;
      }
    }
    else {
      if (__this_03 != (MethodInfo_362B8B0 *)0x0) {
        iVar15 = 0;
        uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435ab4f;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar15 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed) {
          while( true ) {
            pSVar11 = System_Int32__ToString((int32_t)&uStack_70,(MethodInfo *)0x0);
            __this_05 = "CostumeF";
            pSVar11 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeF",pSVar11,(MethodInfo *)0x0)
            ;
            lVar7 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&__this_03->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar6 = __this_03->invoker_method;
            if (pIVar6 == (InvokerMethod)0x0) goto label_0435ad53;
            uVar4 = *(uint *)&__this_03->name;
            if (uVar4 < *(uint *)(pIVar6 + 0x18)) {
              *(uint *)&__this_03->name = uVar4 + 1;
              *(System_String_o **)(pIVar6 + (long)(int)uVar4 * 8 + 0x20) = pSVar11;
              il2cpp_runtime_helper_022b4080(pIVar6 + (long)(int)uVar4 * 8 + 0x20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar15 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar15);
            if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435ab4f:
            if (((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed <= iVar15)
            goto label_0435aca0;
          }
        }
label_0435aca0:
        pSVar12 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_String_ToArray);
        return pSVar12;
      }
      uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
      __this_03 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
      if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed) {
        pSVar11 = System_Int32__ToString((int32_t)&uStack_70,(MethodInfo *)0x0);
        puVar14 = &"CostumeF";
label_0435ad46:
        __this_03 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
        __this_05 = (UnityEngine_MonoBehaviour_o *)*puVar14;
        System_String__Concat_3ae5ba0((System_String_o *)__this_05,pSVar11,(MethodInfo *)0x0);
      }
    }
  }
label_0435ad53:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae17b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"HairM0");
    il2cpp_runtime_helper_023445d0(&"HairF0");
    g_data_057ae17b = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar7 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar7 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pMVar13 = (MethodInfo_362B8B0 *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pMVar13 != (MethodInfo_362B8B0 *)0x0)) {
    __this_03 = pMVar13;
    if (((byte)pMVar13->methodPointer[0x130] < (byte)*(code *)(TypeInfo_HumanCustomSet + 0x130)) ||
       (*(long *)(*(long *)(pMVar13->methodPointer + 200) + -8 +
                 (ulong)(byte)*(code *)(TypeInfo_HumanCustomSet + 0x130) * 8) != TypeInfo_HumanCustomSet)) goto label_0435b02b;
    if ((pMVar13->rgctx_data != (Il2CppRGCTXData *)0x0) &&
       ((Settings_TypedSetting_T__o *)pMVar13[1].methodPointer != (Settings_TypedSetting_T__o *)0x0)) {
      if (*(int *)((long)pMVar13->rgctx_data + 0x14) == 0) {
        puVar14 = &"HairM0";
      }
      else {
        puVar14 = &"HairF0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pMVar13[1].methodPointer,(Il2CppObject *)*puVar14,MethodInfo_Void_set_Value)
      ;
      if ((Settings_TypedSetting_int__o *)pMVar13[1].virtualMethodPointer !=
          (Settings_TypedSetting_int__o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pMVar13[1].virtualMethodPointer,0,MethodInfo_Void_set_Value);
        pUVar8 = __this_05[4].klass;
        if (pUVar8 != (UnityEngine_MonoBehaviour_c *)0x0) {
          pvVar9 = (pUVar8->_1).image;
          (**(code **)((long)pvVar9 + 0x1b8))(pUVar8,1,*(undefined8 *)((long)pvVar9 + 0x1c0));
          pUVar8 = __this_05[4].klass;
          if (pUVar8 != (UnityEngine_MonoBehaviour_c *)0x0) {
            pvVar9 = (pUVar8->_1).image;
            (**(code **)((long)pvVar9 + 0x1c8))(pUVar8,1,*(undefined8 *)((long)pvVar9 + 0x1d0));
            if (g_data_057ae187 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
              g_data_057ae187 = '\x01';
            }
            __this_03 = (MethodInfo_362B8B0 *)&TypeInfo_CharacterEditorSkinsPanel;
            pSVar12 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
            if (*(char *)&(pSVar12->obj).klass == '\0') {
              if (g_data_057ae188 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                g_data_057ae188 = '\x01';
                pSVar12 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
                cVar3 = *(char *)((long)&(pSVar12->obj).klass + 1);
              }
              else {
                cVar3 = *(char *)((long)&(pSVar12->obj).klass + 1);
              }
              if (cVar3 == '\0') {
                return pSVar12;
              }
            }
            if ((__this_05[4].klass != (UnityEngine_MonoBehaviour_c *)0x0) &&
               (pvVar9 = ((__this_05[4].klass)->_1).methods, pvVar9 != (void *)0x0)) {
              __this_01 = *(Characters_DummyHuman_o **)((long)pvVar9 + 0x28);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
label_0435afad:
                if (g_data_057ae17e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                  g_data_057ae17e = '\x01';
                }
                __this_04 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
                UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                          (__this_04,0,(MethodInfo *)0x0);
                pSVar12 = (System_String_array *)
                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                    (__this_05,(System_Collections_IEnumerator_o *)__this_04,(MethodInfo *)0x0
                                    );
                return pSVar12;
              }
              __this_03 = (MethodInfo_362B8B0 *)0x0;
              if (__this_01 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyHuman__LoadSkin(__this_01,(MethodInfo *)0x0);
                goto label_0435afad;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435b02b:
  il2cpp_runtime_helper_022b2fd0(__this_03);
  if (g_data_057ae17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    g_data_057ae17e = '\x01';
  }
  pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
            ((UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)pSVar12,0,(MethodInfo *)0x0
            );
  return pSVar12;
}


// UI.CharacterEditorCostumePanel$$GetCostumeOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetCostumeOptions (UI_CharacterEditorCostumePanel_o* __this, Settings_HumanCustomSet_o* set, const MethodInfo* method);
// 0x435a9f0

System_String_array *
UI_CharacterEditorCostumePanel__GetCostumeOptions
          (UI_CharacterEditorCostumePanel_o *__this,Settings_HumanCustomSet_o *set,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  Settings_IntSetting_o *pSVar5;
  System_Object_array *pSVar6;
  long lVar7;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *__this_01;
  UI_CharacterEditorMenu_o *pUVar8;
  GameManagers_CharacterEditorGameManager_o *pGVar9;
  Characters_DummyHuman_o *__this_02;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  Settings_HumanCustomSet_o *pSVar13;
  undefined8 *puVar14;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_03;
  long *plVar15;
  int iVar16;
  UI_CharacterEditorCostumePanel_o **ppUVar17;
  undefined8 local_38;
  
  if (g_data_057ae179 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"CostumeM");
    ppUVar17 = &"CostumeF";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae179 = '\x01';
    __this = (UI_CharacterEditorCostumePanel_o *)ppUVar17;
  }
  local_38 = 0;
  if ((set != (Settings_HumanCustomSet_o *)0x0) &&
     (pSVar5 = (set->fields).Sex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
    iVar16 = (pSVar5->fields)._value;
    set = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)set,MethodInfo_List_1_System_String);
    if (iVar16 == 0) {
      if (set != (Settings_HumanCustomSet_o *)0x0) {
        iVar16 = 0;
        local_38 = local_38 & 0xffffffff;
        if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) != 0) goto label_0435ac41;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar16 < ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields).
                       _threadIDExecutingCallbacks) {
          while( true ) {
            pSVar11 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
            __this = "CostumeM";
            pSVar11 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeM",pSVar11,(MethodInfo *)0x0)
            ;
            lVar7 = MethodInfo_Void_Add;
            piVar1 = (int32_t *)((long)&(set->fields).TypedSettings + 4);
            *piVar1 = *piVar1 + 1;
            pSVar6 = (System_Object_array *)(set->fields).Settings;
            if (pSVar6 == (System_Object_array *)0x0) goto label_0435ad53;
            uVar4 = *(uint *)&(set->fields).TypedSettings;
            if (uVar4 < (uint)pSVar6->max_length) {
              *(uint *)&(set->fields).TypedSettings = uVar4 + 1;
              pSVar6->m_Items[(int)uVar4] = (Il2CppObject *)pSVar11;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)set,(Il2CppObject *)pSVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar16 = local_38._4_4_ + 1;
            local_38 = CONCAT44(iVar16,(int)local_38);
            if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) break;
label_0435ac41:
            if (((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks <=
                iVar16) goto label_0435aca0;
          }
        }
        goto label_0435aca0;
      }
      local_38 = local_38 & 0xffffffff;
      if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      set = (Settings_HumanCustomSet_o *)&TypeInfo_HumanSetup;
      __this = TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks) {
        pSVar11 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
        ppUVar17 = &"CostumeM";
        goto label_0435ad46;
      }
    }
    else {
      if (set != (Settings_HumanCustomSet_o *)0x0) {
        iVar16 = 0;
        local_38 = (ulong)local_38._4_4_ << 0x20;
        if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) != 0) goto label_0435ab4f;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar16 < ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._disposed) {
          while( true ) {
            pSVar11 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
            __this = "CostumeF";
            pSVar11 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeF",pSVar11,(MethodInfo *)0x0)
            ;
            lVar7 = MethodInfo_Void_Add;
            piVar1 = (int32_t *)((long)&(set->fields).TypedSettings + 4);
            *piVar1 = *piVar1 + 1;
            pSVar6 = (System_Object_array *)(set->fields).Settings;
            if (pSVar6 == (System_Object_array *)0x0) goto label_0435ad53;
            uVar4 = *(uint *)&(set->fields).TypedSettings;
            if (uVar4 < (uint)pSVar6->max_length) {
              *(uint *)&(set->fields).TypedSettings = uVar4 + 1;
              pSVar6->m_Items[(int)uVar4] = (Il2CppObject *)pSVar11;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)set,(Il2CppObject *)pSVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar16 = (int)local_38 + 1;
            local_38 = CONCAT44(local_38._4_4_,iVar16);
            if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) break;
label_0435ab4f:
            if (((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._disposed <= iVar16)
            goto label_0435aca0;
          }
        }
label_0435aca0:
        pSVar12 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)set,MethodInfo_String_ToArray);
        return pSVar12;
      }
      local_38 = (ulong)local_38._4_4_ << 0x20;
      if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      set = (Settings_HumanCustomSet_o *)&TypeInfo_HumanSetup;
      __this = TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields)._disposed) {
        pSVar11 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
        ppUVar17 = &"CostumeF";
label_0435ad46:
        __this = *ppUVar17;
        System_String__Concat_3ae5ba0((System_String_o *)__this,pSVar11,(MethodInfo *)0x0);
        set = (Settings_HumanCustomSet_o *)&TypeInfo_HumanSetup;
      }
    }
  }
label_0435ad53:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae17b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"HairM0");
    il2cpp_runtime_helper_023445d0(&"HairF0");
    g_data_057ae17b = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  plVar15 = (long *)set;
  if (((lVar7 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar7 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pSVar13 = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar13 != (Settings_HumanCustomSet_o *)0x0)) {
    bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    plVar15 = (long *)pSVar13;
    if (((((Settings_BaseSetSetting_c *)pSVar13->klass)->_2).naturalAligment < bVar2) ||
       ((((Settings_BaseSetSetting_c *)pSVar13->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_HumanCustomSet))
    goto label_0435b02b;
    pSVar5 = (pSVar13->fields).Sex;
    if ((pSVar5 != (Settings_IntSetting_o *)0x0) &&
       (__this_01 = (pSVar13->fields).Hair, __this_01 != (Settings_StringSetting_o *)0x0)) {
      if ((pSVar5->fields)._value == 0) {
        puVar14 = &"HairM0";
      }
      else {
        puVar14 = &"HairF0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)*puVar14,MethodInfo_Void_set_Value);
      pSVar5 = (pSVar13->fields).Costume;
      if (pSVar5 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar5,0,MethodInfo_Void_set_Value);
        pUVar8 = (__this->fields)._menu;
        if (pUVar8 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar8->klass->vtable)._8_RebuildPanels.methodPtr)
                    (pUVar8,1,(pUVar8->klass->vtable)._8_RebuildPanels.method);
          pUVar8 = (__this->fields)._menu;
          if (pUVar8 != (UI_CharacterEditorMenu_o *)0x0) {
            (*(pUVar8->klass->vtable)._9_ResetCharacter.methodPtr)
                      (pUVar8,1,(pUVar8->klass->vtable)._9_ResetCharacter.method);
            if (g_data_057ae187 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
              g_data_057ae187 = '\x01';
            }
            plVar15 = &TypeInfo_CharacterEditorSkinsPanel;
            pSVar12 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
            if (*(char *)&(pSVar12->obj).klass == '\0') {
              if (g_data_057ae188 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                g_data_057ae188 = '\x01';
                pSVar12 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
                cVar3 = *(char *)((long)&(pSVar12->obj).klass + 1);
              }
              else {
                cVar3 = *(char *)((long)&(pSVar12->obj).klass + 1);
              }
              if (cVar3 == '\0') {
                return pSVar12;
              }
            }
            pUVar8 = (__this->fields)._menu;
            if ((pUVar8 != (UI_CharacterEditorMenu_o *)0x0) &&
               (pGVar9 = (pUVar8->fields)._gameManager,
               pGVar9 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
              __this_02 = (pGVar9->fields).Human;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
label_0435afad:
                if (g_data_057ae17e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                  g_data_057ae17e = '\x01';
                }
                __this_03 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
                UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                          (__this_03,0,(MethodInfo *)0x0);
                pSVar12 = (System_String_array *)
                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                    ((UnityEngine_MonoBehaviour_o *)__this,
                                     (System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
                return pSVar12;
              }
              plVar15 = (long *)0x0;
              if (__this_02 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyHuman__LoadSkin(__this_02,(MethodInfo *)0x0);
                goto label_0435afad;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435b02b:
  il2cpp_runtime_helper_022b2fd0(plVar15);
  if (g_data_057ae17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    g_data_057ae17e = '\x01';
  }
  pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
            ((UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)pSVar12,0,(MethodInfo *)0x0
            );
  return pSVar12;
}


// UI.CharacterEditorCostumePanel$$GetIcons
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetIcons (UI_CharacterEditorCostumePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x435a4e0

System_String_array *
UI_CharacterEditorCostumePanel__GetIcons
          (UI_CharacterEditorCostumePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  InvokerMethod pIVar6;
  long lVar7;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_MonoBehaviour_c *pUVar8;
  void *pvVar9;
  Characters_DummyHuman_o *__this_01;
  int iVar10;
  bool_conflict bVar11;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  MethodInfo_362B8B0 *__this_04;
  System_String_o *pSVar12;
  System_String_array *pSVar13;
  MethodInfo_362B8B0 *pMVar14;
  undefined8 *puVar15;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_05;
  System_String_o *unaff_RBX;
  System_String_o *unaff_RBP;
  UnityEngine_MonoBehaviour_o *__this_06;
  System_String_o *unaff_R12;
  undefined8 *unaff_R13;
  undefined8 uStack_a8;
  System_Collections_Generic_List_object__o *pSStack_a0;
  System_String_o *pSStack_98;
  undefined8 *puStack_90;
  System_String_array *pSStack_88;
  System_Collections_Generic_List_object__o *pSStack_80;
  System_String_o *pSStack_78;
  undefined1 auStack_70 [8];
  System_String_o *pSStack_68;
  System_String_o *pSStack_60;
  undefined8 *puStack_58;
  System_String_array *pSStack_50;
  System_Collections_Generic_List_object__o *pSStack_48;
  System_String_o *pSStack_40;
  
  if (g_data_057ae17a == '\0') {
    pSStack_40 = (System_String_o *)0x435a503;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_40 = (System_String_o *)0x435a50f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_40 = (System_String_o *)0x435a51b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_40 = (System_String_o *)0x435a527;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_40 = (System_String_o *)0x435a533;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_40 = (System_String_o *)0x435a53f;
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/");
    g_data_057ae17a = '\x01';
  }
  pSStack_40 = (System_String_o *)0x435a555;
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStack_40 = (System_String_o *)0x435a56a;
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    iVar10 = (int)options->max_length;
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar10 < 1) {
label_0435a667:
        pSVar13 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray(__this_02,MethodInfo_String_ToArray);
        return pSVar13;
      }
      unaff_RBX = (System_String_o *)0x0;
      unaff_R13 = &TypeInfo_ResourcePaths;
      unaff_RBP = (System_String_o *)&MethodInfo_Void_Add;
      if ((options->max_length & 0xffffffff) != 0) {
        do {
          unaff_R12 = options->m_Items[(long)unaff_RBX];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            pSStack_40 = (System_String_o *)0x435a600;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_40 = (System_String_o *)0x435a623;
          pSVar12 = System_String__Concat_3af7150
                              (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/",
                               unaff_R12,(MethodInfo *)0x0);
          lVar7 = MethodInfo_Void_Add;
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_02->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_0435a6d0;
          uVar4 = (__this_02->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this_02->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar12;
            pSStack_40 = (System_String_o *)0x435a662;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4,pSVar12);
          }
          else {
            pSStack_40 = (System_String_o *)0x435a5ca;
            System_Collections_Generic_List_object___AddWithResize
                      (__this_02,(Il2CppObject *)pSVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          unaff_RBX = (System_String_o *)((long)&unaff_RBX->klass + 1);
          uVar4 = (uint)options->max_length;
          if ((long)(int)uVar4 <= (long)unaff_RBX) goto label_0435a667;
        } while (unaff_RBX < (System_String_o *)(ulong)uVar4);
      }
      pSStack_40 = (System_String_o *)0x435a68c;
      iVar10 = il2cpp_runtime_helper_022b2ca0();
    }
    if (0 < iVar10) {
      unaff_RBX = options->m_Items[0];
      unaff_RBP = (System_String_o *)&TypeInfo_ResourcePaths;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        pSStack_40 = (System_String_o *)0x435a6ad;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (System_String_o *)0x435a6d0;
      System_String__Concat_3af7150
                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/",unaff_RBX,
                 (MethodInfo *)0x0);
    }
  }
label_0435a6d0:
  pSStack_40 = (System_String_o *)0x435a6d5;
  auStack_70 = (undefined1  [8])il2cpp_runtime_helper_022b2c90();
  pSStack_68 = unaff_RBX;
  pSStack_60 = unaff_R12;
  puStack_58 = unaff_R13;
  pSStack_50 = options;
  pSStack_48 = __this_02;
  pSStack_40 = unaff_RBP;
  if (g_data_057ae178 == '\0') {
    pSStack_78 = (System_String_o *)0x435a700;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    pSStack_78 = (System_String_o *)0x435a70c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_78 = (System_String_o *)0x435a718;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_78 = (System_String_o *)0x435a724;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_78 = (System_String_o *)0x435a730;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_78 = (System_String_o *)0x435a73c;
    il2cpp_runtime_helper_023445d0(&"HairF");
    pSStack_78 = (System_String_o *)0x435a748;
    il2cpp_runtime_helper_023445d0(&"HairM");
    g_data_057ae178 = '\x01';
  }
  auStack_70 = (undefined1  [8])0x0;
  pSStack_78 = (System_String_o *)0x435a76d;
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStack_78 = (System_String_o *)0x435a782;
  __this_04 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_System_String);
  if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
    unaff_RBP = (System_String_o *)0x0;
    __this_02 = (System_Collections_Generic_List_object__o *)&TypeInfo_HumanSetup;
    options = (System_String_array *)(auStack_70 + 4);
    unaff_R13 = &"HairM";
    unaff_R12 = (System_String_o *)&MethodInfo_Void_Add;
    auStack_70 = (undefined1  [8])((ulong)auStack_70 & 0xffffffff);
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435a811;
    while( true ) {
      pSStack_78 = (System_String_o *)0x435a7c5;
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c <= (int)unaff_RBP)
      break;
      while( true ) {
        pSStack_78 = (System_String_o *)0x435a827;
        __this_04 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)options,(MethodInfo *)0x0);
        pSStack_78 = (System_String_o *)0x435a835;
        __this_06 = "HairM";
        pSVar12 = System_String__Concat_3ae5ba0
                            ((System_String_o *)"HairM",(System_String_o *)__this_04,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_03->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) goto label_0435a9e7;
        uVar4 = (__this_03->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_03->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar12;
          pSStack_78 = (System_String_o *)0x435a86e;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
        }
        else {
          pSStack_78 = (System_String_o *)0x435a7fa;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_03,(Il2CppObject *)pSVar12,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        unaff_RBP = (System_String_o *)(ulong)(auStack_70._4_4_ + 1);
        auStack_70._4_4_ = auStack_70._4_4_ + 1;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435a811:
        if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c <= (int)unaff_RBP
           ) goto label_0435a870;
      }
    }
label_0435a870:
    unaff_RBP = (System_String_o *)0x0;
    unaff_R13 = &"HairF";
    auStack_70 = (undefined1  [8])((ulong)auStack_70 & 0xffffffff00000000);
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435a8df;
    while( true ) {
      pSStack_78 = (System_String_o *)0x435a895;
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback <=
          (int)unaff_RBP) break;
      while( true ) {
        pSStack_78 = (System_String_o *)0x435a8f5;
        __this_04 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)auStack_70,(MethodInfo *)0x0);
        pSStack_78 = (System_String_o *)0x435a903;
        __this_06 = "HairF";
        pSVar12 = System_String__Concat_3ae5ba0
                            ((System_String_o *)"HairF",(System_String_o *)__this_04,(MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_03->fields)._items;
        options = (System_String_array *)auStack_70;
        if (pSVar5 == (System_Object_array *)0x0) goto label_0435a9e7;
        uVar4 = (__this_03->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_03->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar12;
          pSStack_78 = (System_String_o *)0x435a93c;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4);
        }
        else {
          pSStack_78 = (System_String_o *)0x435a8ca;
          System_Collections_Generic_List_object___AddWithResize
                    (__this_03,(Il2CppObject *)pSVar12,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        unaff_RBP = (System_String_o *)(ulong)(auStack_70._0_4_ + 1);
        auStack_70._0_4_ = auStack_70._0_4_ + 1;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435a8df:
        if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback <=
            (int)unaff_RBP) goto label_0435a93e;
      }
    }
label_0435a93e:
    pSStack_78 = (System_String_o *)0x435a950;
    pSVar13 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
    return pSVar13;
  }
  auStack_70 = (undefined1  [8])((ulong)auStack_70 & 0xffffffff);
  __this_03 = (System_Collections_Generic_List_object__o *)&TypeInfo_HumanSetup;
  if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
    pSStack_78 = (System_String_o *)0x435a97f;
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).field_0x1c < 1) {
    auStack_70 = (undefined1  [8])((ulong)auStack_70 & 0xffffffff00000000);
    if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
      pSStack_78 = (System_String_o *)0x435a9b9;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = TypeInfo_HumanSetup;
    if (0 < *(int *)&((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._executingCallback) {
      pSStack_78 = (System_String_o *)0x435a9d3;
      __this_04 = (MethodInfo_362B8B0 *)System_Int32__ToString((int32_t)auStack_70,(MethodInfo *)0x0);
      puVar15 = &"HairF";
      goto label_0435a9da;
    }
  }
  else {
    pSStack_78 = (System_String_o *)0x435a99b;
    __this_04 = (MethodInfo_362B8B0 *)System_Int32__ToString((int)auStack_70 + 4,(MethodInfo *)0x0);
    puVar15 = &"HairM";
label_0435a9da:
    __this_06 = (UnityEngine_MonoBehaviour_o *)*puVar15;
    pSStack_78 = (System_String_o *)0x435a9e7;
    System_String__Concat_3ae5ba0((System_String_o *)__this_06,(System_String_o *)__this_04,(MethodInfo *)0x0)
    ;
  }
label_0435a9e7:
  pSStack_78 = (System_String_o *)0x435a9ec;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = __this_03;
  pSStack_98 = unaff_R12;
  puStack_90 = unaff_R13;
  pSStack_88 = options;
  pSStack_80 = __this_02;
  pSStack_78 = unaff_RBP;
  if (g_data_057ae179 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"CostumeM");
    __this_06 = (UnityEngine_MonoBehaviour_o *)&"CostumeF";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae179 = '\x01';
  }
  uStack_a8 = 0;
  if ((__this_04 != (MethodInfo_362B8B0 *)0x0) && (__this_04->rgctx_data != (Il2CppRGCTXData *)0x0)) {
    iVar10 = *(int *)((long)__this_04->rgctx_data + 0x14);
    __this_04 = (MethodInfo_362B8B0 *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_System_String);
    if (iVar10 == 0) {
      if (__this_04 != (MethodInfo_362B8B0 *)0x0) {
        iVar10 = 0;
        uStack_a8 = uStack_a8 & 0xffffffff;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435ac41;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar10 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields).
                       _threadIDExecutingCallbacks) {
          while( true ) {
            pSVar12 = System_Int32__ToString((int)&uStack_a8 + 4,(MethodInfo *)0x0);
            __this_06 = "CostumeM";
            pSVar12 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeM",pSVar12,(MethodInfo *)0x0)
            ;
            lVar7 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&__this_04->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar6 = __this_04->invoker_method;
            if (pIVar6 == (InvokerMethod)0x0) goto label_0435ad53;
            uVar4 = *(uint *)&__this_04->name;
            if (uVar4 < *(uint *)(pIVar6 + 0x18)) {
              *(uint *)&__this_04->name = uVar4 + 1;
              *(System_String_o **)(pIVar6 + (long)(int)uVar4 * 8 + 0x20) = pSVar12;
              il2cpp_runtime_helper_022b4080(pIVar6 + (long)(int)uVar4 * 8 + 0x20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pSVar12,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar10 = uStack_a8._4_4_ + 1;
            uStack_a8 = CONCAT44(iVar10,(int)uStack_a8);
            if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435ac41:
            if (((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks <=
                iVar10) goto label_0435aca0;
          }
        }
        goto label_0435aca0;
      }
      uStack_a8 = uStack_a8 & 0xffffffff;
      __this_04 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
      if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_06 = TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._threadIDExecutingCallbacks) {
        pSVar12 = System_Int32__ToString((int)&uStack_a8 + 4,(MethodInfo *)0x0);
        puVar15 = &"CostumeM";
        goto label_0435ad46;
      }
    }
    else {
      if (__this_04 != (MethodInfo_362B8B0 *)0x0) {
        iVar10 = 0;
        uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
        if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) != 0) goto label_0435ab4f;
        while (il2cpp_runtime_helper_02337ed0(),
              iVar10 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed) {
          while( true ) {
            pSVar12 = System_Int32__ToString((int32_t)&uStack_a8,(MethodInfo *)0x0);
            __this_06 = "CostumeF";
            pSVar12 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeF",pSVar12,(MethodInfo *)0x0)
            ;
            lVar7 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&__this_04->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar6 = __this_04->invoker_method;
            if (pIVar6 == (InvokerMethod)0x0) goto label_0435ad53;
            uVar4 = *(uint *)&__this_04->name;
            if (uVar4 < *(uint *)(pIVar6 + 0x18)) {
              *(uint *)&__this_04->name = uVar4 + 1;
              *(System_String_o **)(pIVar6 + (long)(int)uVar4 * 8 + 0x20) = pSVar12;
              il2cpp_runtime_helper_022b4080(pIVar6 + (long)(int)uVar4 * 8 + 0x20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pSVar12,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar10 = (int)uStack_a8 + 1;
            uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar10);
            if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) break;
label_0435ab4f:
            if (((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed <= iVar10)
            goto label_0435aca0;
          }
        }
label_0435aca0:
        pSVar13 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_String_ToArray);
        return pSVar13;
      }
      uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
      __this_04 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
      if (*(int *)((long)&TypeInfo_HumanSetup[7].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_06 = TypeInfo_HumanSetup;
      if (0 < ((TypeInfo_HumanSetup[5].fields.m_CancellationTokenSource)->fields)._disposed) {
        pSVar12 = System_Int32__ToString((int32_t)&uStack_a8,(MethodInfo *)0x0);
        puVar15 = &"CostumeF";
label_0435ad46:
        __this_04 = (MethodInfo_362B8B0 *)&TypeInfo_HumanSetup;
        __this_06 = (UnityEngine_MonoBehaviour_o *)*puVar15;
        System_String__Concat_3ae5ba0((System_String_o *)__this_06,pSVar12,(MethodInfo *)0x0);
      }
    }
  }
label_0435ad53:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae17b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"HairM0");
    il2cpp_runtime_helper_023445d0(&"HairF0");
    g_data_057ae17b = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar7 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar7 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pMVar14 = (MethodInfo_362B8B0 *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pMVar14 != (MethodInfo_362B8B0 *)0x0)) {
    __this_04 = pMVar14;
    if (((byte)pMVar14->methodPointer[0x130] < (byte)*(code *)(TypeInfo_HumanCustomSet + 0x130)) ||
       (*(long *)(*(long *)(pMVar14->methodPointer + 200) + -8 +
                 (ulong)(byte)*(code *)(TypeInfo_HumanCustomSet + 0x130) * 8) != TypeInfo_HumanCustomSet)) goto label_0435b02b;
    if ((pMVar14->rgctx_data != (Il2CppRGCTXData *)0x0) &&
       ((Settings_TypedSetting_T__o *)pMVar14[1].methodPointer != (Settings_TypedSetting_T__o *)0x0)) {
      if (*(int *)((long)pMVar14->rgctx_data + 0x14) == 0) {
        puVar15 = &"HairM0";
      }
      else {
        puVar15 = &"HairF0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pMVar14[1].methodPointer,(Il2CppObject *)*puVar15,MethodInfo_Void_set_Value)
      ;
      if ((Settings_TypedSetting_int__o *)pMVar14[1].virtualMethodPointer !=
          (Settings_TypedSetting_int__o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pMVar14[1].virtualMethodPointer,0,MethodInfo_Void_set_Value);
        pUVar8 = __this_06[4].klass;
        if (pUVar8 != (UnityEngine_MonoBehaviour_c *)0x0) {
          pvVar9 = (pUVar8->_1).image;
          (**(code **)((long)pvVar9 + 0x1b8))(pUVar8,1,*(undefined8 *)((long)pvVar9 + 0x1c0));
          pUVar8 = __this_06[4].klass;
          if (pUVar8 != (UnityEngine_MonoBehaviour_c *)0x0) {
            pvVar9 = (pUVar8->_1).image;
            (**(code **)((long)pvVar9 + 0x1c8))(pUVar8,1,*(undefined8 *)((long)pvVar9 + 0x1d0));
            if (g_data_057ae187 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
              g_data_057ae187 = '\x01';
            }
            __this_04 = (MethodInfo_362B8B0 *)&TypeInfo_CharacterEditorSkinsPanel;
            pSVar13 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
            if (*(char *)&(pSVar13->obj).klass == '\0') {
              if (g_data_057ae188 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                g_data_057ae188 = '\x01';
                pSVar13 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
                cVar3 = *(char *)((long)&(pSVar13->obj).klass + 1);
              }
              else {
                cVar3 = *(char *)((long)&(pSVar13->obj).klass + 1);
              }
              if (cVar3 == '\0') {
                return pSVar13;
              }
            }
            if ((__this_06[4].klass != (UnityEngine_MonoBehaviour_c *)0x0) &&
               (pvVar9 = ((__this_06[4].klass)->_1).methods, pvVar9 != (void *)0x0)) {
              __this_01 = *(Characters_DummyHuman_o **)((long)pvVar9 + 0x28);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar11 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar11 == '\0') {
label_0435afad:
                if (g_data_057ae17e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                  g_data_057ae17e = '\x01';
                }
                __this_05 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
                UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                          (__this_05,0,(MethodInfo *)0x0);
                pSVar13 = (System_String_array *)
                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                    (__this_06,(System_Collections_IEnumerator_o *)__this_05,(MethodInfo *)0x0
                                    );
                return pSVar13;
              }
              __this_04 = (MethodInfo_362B8B0 *)0x0;
              if (__this_01 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyHuman__LoadSkin(__this_01,(MethodInfo *)0x0);
                goto label_0435afad;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435b02b:
  il2cpp_runtime_helper_022b2fd0(__this_04);
  if (g_data_057ae17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    g_data_057ae17e = '\x01';
  }
  pSVar13 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
            ((UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)pSVar13,0,(MethodInfo *)0x0
            );
  return pSVar13;
}


// UI.CharacterEditorCostumePanel$$OnSexChanged
// il2cpp: void UI_CharacterEditorCostumePanel__OnSexChanged (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435ad60

void UI_CharacterEditorCostumePanel__OnSexChanged(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *__this_01;
  Settings_BoolSetting_o *__this_02;
  UI_CharacterEditorMenu_o *pUVar4;
  GameManagers_CharacterEditorGameManager_o *pGVar5;
  Characters_DummyHuman_o *__this_03;
  bool_conflict bVar6;
  Settings_BaseSetSetting_o *pSVar7;
  undefined8 *puVar8;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *pUVar9;
  long *unaff_RBX;
  
  if (g_data_057ae17b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"HairM0");
    il2cpp_runtime_helper_023445d0(&"HairF0");
    g_data_057ae17b = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar3 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pSVar7 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar7 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    unaff_RBX = (long *)pSVar7;
    if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
       ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_0435b02b;
    if ((pSVar7[1].klass != (Settings_BaseSetSetting_c *)0x0) &&
       (__this_01 = pSVar7[1].fields.Name, __this_01 != (Settings_StringSetting_o *)0x0)) {
      if (*(int *)((long)&((pSVar7[1].klass)->_1).name + 4) == 0) {
        puVar8 = &"HairM0";
      }
      else {
        puVar8 = &"HairF0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)*puVar8,MethodInfo_Void_set_Value);
      __this_02 = pSVar7[1].fields.Preset;
      if (__this_02 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_02,0,MethodInfo_Void_set_Value);
        pUVar4 = (__this->fields)._menu;
        if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar4->klass->vtable)._8_RebuildPanels.methodPtr)
                    (pUVar4,1,(pUVar4->klass->vtable)._8_RebuildPanels.method);
          pUVar4 = (__this->fields)._menu;
          if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
            (*(pUVar4->klass->vtable)._9_ResetCharacter.methodPtr)
                      (pUVar4,1,(pUVar4->klass->vtable)._9_ResetCharacter.method);
            if (g_data_057ae187 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
              g_data_057ae187 = '\x01';
            }
            unaff_RBX = &TypeInfo_CharacterEditorSkinsPanel;
            if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
              if (g_data_057ae188 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                g_data_057ae188 = '\x01';
                cVar2 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
              }
              else {
                cVar2 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
              }
              if (cVar2 == '\0') {
                return;
              }
            }
            pUVar4 = (__this->fields)._menu;
            if ((pUVar4 != (UI_CharacterEditorMenu_o *)0x0) &&
               (pGVar5 = (pUVar4->fields)._gameManager,
               pGVar5 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
              __this_03 = (pGVar5->fields).Human;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
label_0435afad:
                if (g_data_057ae17e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                  g_data_057ae17e = '\x01';
                }
                pUVar9 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
                UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                          (pUVar9,0,(MethodInfo *)0x0);
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar9,
                           (MethodInfo *)0x0);
                return;
              }
              unaff_RBX = (long *)0x0;
              if (__this_03 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyHuman__LoadSkin(__this_03,(MethodInfo *)0x0);
                goto label_0435afad;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435b02b:
  il2cpp_runtime_helper_022b2fd0(unaff_RBX);
  if (g_data_057ae17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    g_data_057ae17e = '\x01';
  }
  pUVar9 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor(pUVar9,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$OnCustomSetSelected
// il2cpp: void UI_CharacterEditorCostumePanel__OnCustomSetSelected (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435b080

void UI_CharacterEditorCostumePanel__OnCustomSetSelected
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar5;
  System_String_o *b;
  UI_CharacterEditorMenu_o *pUVar6;
  UI_MessagePopup_o *x;
  UI_PresetSkinEditPopup_o *__this_01;
  System_String_o *a;
  UI_CharacterEditorHumanMenu_o *pUVar7;
  long *plVar8;
  bool_conflict bVar9;
  Settings_BaseSetSetting_o *pSVar10;
  char *pcVar11;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *pUVar12;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *pUVar13;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this_02;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar14;
  byte bVar15;
  Il2CppClass *in_RCX;
  UI_CharacterEditorMenu_o *x_00;
  Il2CppClass *pIVar16;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  Il2CppClass **unaff_R12;
  bool bVar17;
  
  if (g_data_057ae17c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae17c = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar4 == 0) ||
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
      __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (method = (MethodInfo *)MethodInfo_BaseSetSetting_GetSelectedSet,
     pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet
                         (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar10 == (Settings_BaseSetSetting_o *)0x0)) goto label_0435b5d3;
  in_RCX = (Il2CppClass *)pSVar10->klass;
  bVar15 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
  method = (MethodInfo *)TypeInfo_HumanCustomSet;
  if ((bVar15 <= (in_RCX->_2).naturalAligment) &&
     (in_RCX = (Il2CppClass *)(in_RCX->_2).typeHierarchy,
     *(Il2CppClass **)((long)in_RCX + (ulong)bVar15 * 8 + -8) == TypeInfo_HumanCustomSet)) {
    pSVar5 = (pSVar10->fields).UniqueId;
    if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0435b5d3;
    b = (pSVar5->fields)._value;
    ppSVar1 = &(__this->fields)._previousProfileId;
    bVar9 = System_String__op_Equality((__this->fields)._previousProfileId,b,(MethodInfo *)0x0);
    if (((char)bVar9 != '\0') && (*ppSVar1 != (System_String_o *)0x0)) {
      return;
    }
    pUVar6 = (__this->fields)._menu;
    unaff_R12 = &TypeInfo_CharacterEditorHumanMenu;
    if (pUVar6 == (UI_CharacterEditorMenu_o *)0x0) {
label_0435b1f2:
      x_00 = (UI_CharacterEditorMenu_o *)0x0;
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      bVar15 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      in_RCX = TypeInfo_CharacterEditorHumanMenu;
      if ((pUVar6->klass->_2).naturalAligment < bVar15) goto label_0435b1f2;
      x_00 = (UI_CharacterEditorMenu_o *)0x0;
      if ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar15 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        x_00 = pUVar6;
      }
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
label_0435b27a:
      pUVar6 = (__this->fields)._menu;
      if (pUVar6 != (UI_CharacterEditorMenu_o *)0x0) {
        method = (MethodInfo *)0x1;
        (*(pUVar6->klass->vtable)._8_RebuildPanels.methodPtr)
                  (pUVar6,1,(pUVar6->klass->vtable)._8_RebuildPanels.method);
        pUVar6 = (__this->fields)._menu;
        if (pUVar6 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar6->klass->vtable)._9_ResetCharacter.methodPtr)
                    (pUVar6,1,(pUVar6->klass->vtable)._9_ResetCharacter.method);
          if (g_data_057ae187 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
            g_data_057ae187 = '\x01';
          }
          pcVar11 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
          bVar17 = true;
          if (*pcVar11 == '\0') {
            if (g_data_057ae188 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
              g_data_057ae188 = '\x01';
              pcVar11 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
            }
            bVar17 = pcVar11[1] != '\0';
            a = *ppSVar1;
          }
          else {
            a = *ppSVar1;
          }
          if ((a == (System_String_o *)0x0) ||
             (bVar9 = System_String__op_Inequality(a,b,(MethodInfo *)0x0), (char)bVar9 == '\0')) {
            if ((char)(__this->fields)._shouldGeneratePreviewAfterRebuild == '\0') {
              if (bVar17) {
                if (g_data_057ae17e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                  g_data_057ae17e = '\x01';
                }
                pUVar13 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
                UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                          (pUVar13,0,(MethodInfo *)0x0);
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar13,
                           (MethodInfo *)0x0);
              }
              goto label_0435b5b6;
            }
            *(undefined1 *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = 0;
            if (bVar17) {
              if (g_data_057ae17e == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                g_data_057ae17e = '\x01';
              }
              pUVar13 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
              UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                        (pUVar13,0,(MethodInfo *)0x0);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar13,
                         (MethodInfo *)0x0);
            }
            pUVar7 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
            if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              if (pUVar7 != (UI_CharacterEditorHumanMenu_o *)0x0) goto label_0435b57e;
label_0435b594:
              humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
            }
            else {
              if (pUVar7 == (UI_CharacterEditorHumanMenu_o *)0x0) goto label_0435b594;
label_0435b57e:
              bVar15 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
              if ((((UI_CharacterEditorMenu_c *)pUVar7->klass)->_2).naturalAligment < bVar15)
              goto label_0435b594;
              humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
              if ((((UI_CharacterEditorMenu_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar15 - 1] ==
                  TypeInfo_CharacterEditorHumanMenu) {
                humanMenu = pUVar7;
              }
            }
            Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,1,(MethodInfo *)0x0);
label_0435b5b6:
            *ppSVar1 = b;
            il2cpp_runtime_helper_022b4080(ppSVar1,b);
            return;
          }
          unaff_R12 = *(Il2CppClass ***)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
          if ((UI_CharacterEditorCostumePanel_o *)unaff_R12 != (UI_CharacterEditorCostumePanel_o *)0x0) {
            bVar15 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
            in_RCX = (Il2CppClass *)(ulong)bVar15;
            method = (MethodInfo *)TypeInfo_CharacterEditorGameManager;
            if (((((UI_CharacterEditorCostumePanel_o *)unaff_R12)->klass->_2).naturalAligment < bVar15) ||
               ((((UI_CharacterEditorCostumePanel_o *)unaff_R12)->klass->_2).typeHierarchy
                [(long)((long)&in_RCX[-1].vtable[0xfe].method + 7)] != TypeInfo_CharacterEditorGameManager)) goto label_0435b5e0;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') goto label_0435b5b6;
          pIVar16 = (Il2CppClass *)*ppSVar1;
          if (g_data_057ae17d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__28);
            g_data_057ae17d = '\x01';
          }
          pUVar12 = (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__28);
          method = (MethodInfo *)0x0;
          UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28___ctor
                    (pUVar12,0,(MethodInfo *)0x0);
          if (pUVar12 !=
              (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)0x0) {
            (pUVar12->fields).__4__this = __this;
            il2cpp_runtime_helper_022b4080(&(pUVar12->fields).__4__this,__this);
            (pUVar12->fields).previousProfileId = (System_String_o *)pIVar16;
            il2cpp_runtime_helper_022b4080(&(pUVar12->fields).previousProfileId);
            *(bool *)&(pUVar12->fields).shouldApplySkinPreview = bVar17;
            method = (MethodInfo *)pIVar16;
            if ((UI_CharacterEditorCostumePanel_o *)unaff_R12 != (UI_CharacterEditorCostumePanel_o *)0x0) {
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)unaff_R12,(System_Collections_IEnumerator_o *)pUVar12,
                         (MethodInfo *)0x0);
              goto label_0435b5b6;
            }
          }
        }
      }
    }
    else if (x_00 != (UI_CharacterEditorMenu_o *)0x0) {
      x = x_00[1].fields.MessagePopup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        __this_01 = (UI_PresetSkinEditPopup_o *)x_00[1].fields.MessagePopup;
        if (__this_01 == (UI_PresetSkinEditPopup_o *)0x0) goto label_0435b5d3;
        if ((char)(__this_01->fields).IsActive != '\0') {
          method = (MethodInfo *)0x0;
          UI_PresetSkinEditPopup__OnCancelClick(__this_01,(MethodInfo *)0x0);
        }
      }
      goto label_0435b27a;
    }
label_0435b5d3:
    pSVar10 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
  }
  bVar15 = (byte)in_RCX;
  il2cpp_runtime_helper_022b2fd0(pSVar10);
label_0435b5e0:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae17d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__28);
    g_data_057ae17d = '\x01';
  }
  __this_02 = (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__28);
  pUVar12 = __this_02;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28___ctor
            (__this_02,0,(MethodInfo *)0x0);
  if (__this_02 != (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)0x0)
  {
    (__this_02->fields).__4__this = (UI_CharacterEditorCostumePanel_o *)unaff_R12;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).__4__this,unaff_R12);
    (__this_02->fields).previousProfileId = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).previousProfileId,method);
    *(byte *)&(__this_02->fields).shouldApplySkinPreview = bVar15;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar8 = *(long **)&pUVar12[1].fields.shouldApplySkinPreview;
  if (plVar8 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar14 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar14,0,(MethodInfo *)0x0);
    return;
  }
  (**(code **)(*plVar8 + 0x1c8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x1d0));
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar2 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar2 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar2 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar14 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar14,0,(MethodInfo *)0x0)
  ;
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)pUVar12,(System_Collections_IEnumerator_o *)pUVar14,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$CapturePreviousProfilePreviewAndApplySkins
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins (UI_CharacterEditorCostumePanel_o* __this, System_String_o* previousProfileId, System_String_o* currentProfileId, bool shouldApplySkinPreview, const MethodInfo* method);
// 0x435b5f0

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins
          (UI_CharacterEditorCostumePanel_o *__this,System_String_o *previousProfileId,
          System_String_o *currentProfileId,bool_conflict shouldApplySkinPreview,MethodInfo *method)

{
  char cVar1;
  long *plVar2;
  System_Collections_IEnumerator_o *pSVar3;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this_00;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar4;
  UnityEngine_Coroutine_o *pUVar5;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this_01;
  
  if (g_data_057ae17d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__28);
    g_data_057ae17d = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__28);
  __this_01 = __this_00;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28___ctor
            (__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)0x0)
  {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).previousProfileId = previousProfileId;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).previousProfileId,previousProfileId);
    *(char *)&(__this_00->fields).shouldApplySkinPreview = (char)shouldApplySkinPreview;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar2 = *(long **)&__this_01[1].fields.shouldApplySkinPreview;
  if (plVar2 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar4 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar4,0,(MethodInfo *)0x0);
    return (System_Collections_IEnumerator_o *)pUVar4;
  }
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x1d0));
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  pSVar3 = *(System_Collections_IEnumerator_o **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
  if (*(char *)&pSVar3->klass == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      pSVar3 = *(System_Collections_IEnumerator_o **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
      cVar1 = *(char *)((long)&pSVar3->klass + 1);
    }
    else {
      cVar1 = *(char *)((long)&pSVar3->klass + 1);
    }
    if (cVar1 == '\0') {
      return pSVar3;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar4 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar4,0,(MethodInfo *)0x0);
  pUVar5 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                     ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)pUVar4,
                      (MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)pUVar5;
}


// UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterReset
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435b040

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_00;
  
  if (g_data_057ae17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    g_data_057ae17e = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$OnCharacterChanged
// il2cpp: void UI_CharacterEditorCostumePanel__OnCharacterChanged (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435b680

void UI_CharacterEditorCostumePanel__OnCharacterChanged
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterCostumeChange
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435b770

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$GeneratePreviewForCurrentSet
// il2cpp: void UI_CharacterEditorCostumePanel__GeneratePreviewForCurrentSet (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435b7b0

void UI_CharacterEditorCostumePanel__GeneratePreviewForCurrentSet
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorHumanMenu_o *pUVar2;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  
  if (g_data_057ae180 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae180 = '\x01';
  }
  pUVar2 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar2 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if (bVar1 <= (((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).naturalAligment) {
      humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
      if ((((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        humanMenu = pUVar2;
      }
      Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,0,(MethodInfo *)0x0);
      return;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet
            ((UI_CharacterEditorHumanMenu_o *)0x0,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorCostumePanel__OnButtonClick (UI_CharacterEditorCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x435b850

void UI_CharacterEditorCostumePanel__OnButtonClick
               (UI_CharacterEditorCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  UI_SetNamePopup_o *__this_00;
  UI_ImportPopup_o *__this_01;
  UI_SelectListPopup_o *__this_02;
  Settings_BaseSetSetting_c *pSVar5;
  Il2CppClass *pIVar6;
  UI_ConfirmPopup_o *__this_03;
  Settings_StringSetting_o *pSVar7;
  UI_ExportPopup_o *__this_04;
  Settings_SetSettingsContainer_T__o *pSVar8;
  UI_CharacterEditorMenu_o *pUVar9;
  UI_ExternalLinkPopup_o *pUVar10;
  char cVar11;
  uint32_t uVar12;
  bool_conflict bVar13;
  MethodInfo *in_RAX;
  UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this_05;
  System_Collections_Generic_List_string__o *items;
  long *plVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Settings_BaseSetSetting_o *pSVar17;
  SimpleJSONFixed_JSONNode_o *pSVar18;
  Settings_HumanCustomSet_o *customSet;
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *pUVar19;
  int32_t weapon;
  long *unaff_RBX;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  System_String_o **ppSVar20;
  undefined1 auVar21 [16];
  
  if (g_data_057ae181 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CanDeleteSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__33_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass33_0);
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
    g_data_057ae181 = '\x01';
  }
  __this_05 = (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass33_0);
  UI_CharacterEditorCostumePanel___c__DisplayClass33_0___ctor(__this_05,(MethodInfo *)0x0);
  if (__this_05 == (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *)0x0) {
label_0435c51c:
    customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    (__this_05->fields).__4__this = __this;
    il2cpp_runtime_helper_022b4080(&__this_05->fields,__this);
    unaff_RBX = (long *)&(__this_05->fields).name;
    (__this_05->fields).name = name;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar4 == 0) goto label_0435c51c;
    __this_00 = *(UI_SetNamePopup_o **)(lVar4 + 0x88);
    unaff_RBX = (long *)*unaff_RBX;
    uVar12 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)unaff_RBX,(MethodInfo *)0x0)
    ;
    if (uVar12 < 0x5cb46bab) {
      if (uVar12 < 0x573e0af5) {
        if (uVar12 == 0x547f6497) {
          bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"SaveQuit",(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return;
          }
          plVar14 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x238))();
            plVar14 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x238))();
              unaff_RBX = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
              if ((System_String_array *)unaff_RBX != (System_String_array *)0x0) {
                pIVar6 = (((System_String_array *)unaff_RBX)->obj).klass;
                bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
                if (((pIVar6->_2).naturalAligment < bVar1) ||
                   ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_0435c529;
                pSVar15 = ((System_String_array *)unaff_RBX)->m_Items[3];
                if (pSVar15 != (System_String_o *)0x0) {
                  bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
                  if ((bVar1 <= (pSVar15->klass->_2).naturalAligment) &&
                     ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman)) {
                    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                    if ((lVar3 != 0) &&
                       (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
                       pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
                      customSet = (Settings_HumanCustomSet_o *)
                                  Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
                      if (customSet != (Settings_HumanCustomSet_o *)0x0) {
                        bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
                        if (((customSet->klass->_2).naturalAligment < bVar1) ||
                           ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet))
                        goto label_0435c521;
                      }
                      pUVar9 = (__this->fields)._menu;
                      weapon = 0;
                      if (pUVar9 != (UI_CharacterEditorMenu_o *)0x0) {
                        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
                        weapon = 0;
                        if ((bVar1 <= (pUVar9->klass->_2).naturalAligment) &&
                           ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
                          pUVar10 = pUVar9[1].fields.ExternalLinkPopup;
                          if (pUVar10 == (UI_ExternalLinkPopup_o *)0x0) goto label_0435c51c;
                          weapon = *(int32_t *)((long)&(pUVar10->fields).m_CachedPtr + 4);
                        }
                      }
                      if (pSVar15[2].monitor != (Characters_HumanSetup_o *)0x0) {
                        Characters_HumanSetup__Load(pSVar15[2].monitor,customSet,weapon,0,(MethodInfo *)0x0);
                        if (g_data_057ae183 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SaveQuitCaptureCoroutine_d__35);
                          g_data_057ae183 = '\x01';
                        }
                        pUVar19 = (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *)
                                  il2cpp_runtime_helper_023052d0(TypeInfo_SaveQuitCaptureCoroutine_d__35);
                        UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor
                                  (pUVar19,0,(MethodInfo *)0x0);
                        __this = (UI_CharacterEditorCostumePanel_o *)unaff_RBX;
                        goto label_0435bfa8;
                      }
                    }
                    goto label_0435c51c;
                  }
                }
              }
              if (g_data_057ae183 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_SaveQuitCaptureCoroutine_d__35);
                g_data_057ae183 = '\x01';
              }
              pUVar19 = (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_SaveQuitCaptureCoroutine_d__35);
              UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor
                        (pUVar19,0,(MethodInfo *)0x0);
label_0435bfa8:
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar19,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          if (uVar12 != 0x573e0af4) {
            return;
          }
          bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"Import",(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return;
          }
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar3 != 0) {
            __this_01 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
            unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_01 != (UI_ImportPopup_o *)0x0) {
              UI_ImportPopup__Show
                        (__this_01,(UnityEngine_Events_UnityAction_o *)unaff_RBX,1,"",in_R8);
              return;
            }
          }
        }
      }
      else if (uVar12 == 0x5797ea6a) {
        bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"Delete",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        if ((lVar3 != 0) &&
           (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) !=
            (Settings_SetSettingsContainer_T__o *)0x0)) {
          bVar13 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                             (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
          if ((char)bVar13 == '\0') {
            return;
          }
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar3 != 0) {
            __this_03 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
            pSVar15 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
            unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            pSVar16 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
            goto joined_r0x0435c107;
          }
        }
      }
      else {
        if (uVar12 != 0x5cb46baa) {
          return;
        }
        bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"LoadPreset",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
        if ((lVar3 != 0) &&
           (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x28),
           pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
          unaff_RBX = (long *)Settings_SetSettingsContainer_object___GetSetNames(pSVar8,MethodInfo_String_GetSetNames);
          items = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
          System_Collections_Generic_List_object____ctor_362ba10
                    ((System_Collections_Generic_List_object__o *)items,
                     (System_Collections_Generic_IEnumerable_T__o *)unaff_RBX,MethodInfo_List_1_System_String);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar3 != 0) {
            __this_02 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
            unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_02 != (UI_SelectListPopup_o *)0x0) {
              UI_SelectListPopup__ShowLoad
                        (__this_02,items,"Presets",(UnityEngine_Events_UnityAction_o *)unaff_RBX,
                         (UnityEngine_Events_UnityAction_o *)0x0,
                         (System_Collections_Generic_List_string__o *)0x0,in_RAX);
              return;
            }
          }
        }
      }
      goto label_0435c51c;
    }
    if (uVar12 < 0x990de47e) {
      if (uVar12 == 0x990de47d) {
        ppSVar20 = &"Create";
        bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"Create",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      }
      else {
        if (uVar12 != 0x658f3664) {
          return;
        }
        ppSVar20 = &"Copy";
        bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"Copy",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      }
      UnityEngine_Events_UnityAction___ctor();
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = UI_UIManager__GetLocaleCommon(*ppSVar20,(MethodInfo *)0x0);
      pSVar15 = "New set";
joined_r0x0435c027:
      if (__this_00 != (UI_SetNamePopup_o *)0x0) {
        UI_SetNamePopup__Show
                  (__this_00,pSVar15,(UnityEngine_Events_UnityAction_o *)unaff_RBX,pSVar16,
                   (System_String_o *)0x0,in_R9);
        return;
      }
      goto label_0435c51c;
    }
    if (uVar12 == 0xc7b3d356) {
      bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"Quit",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar3 == 0) goto label_0435c51c;
      __this_03 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
      pSVar15 = UI_UIManager__GetLocaleCommon("QuitWithoutSaveConfirm",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        unaff_RBX = *(long **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        if ((System_String_array *)unaff_RBX == (System_String_array *)0x0) goto label_0435c38d;
label_0435c273:
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      else {
        unaff_RBX = *(long **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        if ((System_String_array *)unaff_RBX != (System_String_array *)0x0) goto label_0435c273;
label_0435c38d:
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(long **)(lVar3 + 8) = unaff_RBX;
        il2cpp_runtime_helper_022b4080(lVar3 + 8);
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
joined_r0x0435c107:
      if (__this_03 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_03,pSVar15,(UnityEngine_Events_UnityAction_o *)unaff_RBX,pSVar16,in_R8);
        return;
      }
      goto label_0435c51c;
    }
    if (uVar12 == 0xc80631f3) {
      bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"Rename",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      if ((((lVar3 != 0) &&
           (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) !=
            (Settings_SetSettingsContainer_T__o *)0x0)) &&
          (pSVar17 = Settings_SetSettingsContainer_object___GetSelectedSet
                               (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
          pSVar17 != (Settings_BaseSetSetting_o *)0x0)) &&
         (pSVar7 = (pSVar17->fields).Name, pSVar7 != (Settings_StringSetting_o *)0x0)) {
        pSVar15 = (pSVar7->fields)._value;
        unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
        goto joined_r0x0435c027;
      }
      goto label_0435c51c;
    }
    if (uVar12 != 0xe86349d3) {
      return;
    }
    bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,"Export",(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if (((lVar3 == 0) ||
        (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) == (Settings_SetSettingsContainer_T__o *)0x0))
       || (customSet = (Settings_HumanCustomSet_o *)
                       Settings_SetSettingsContainer_object___GetSelectedSet
                                 (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
          customSet == (Settings_HumanCustomSet_o *)0x0)) goto label_0435c51c;
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if ((bVar1 <= (((Settings_BaseSetSetting_c *)customSet->klass)->_2).naturalAligment) &&
       ((((Settings_BaseSetSetting_c *)customSet->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanCustomSet)
       ) {
      pSVar5 = (Settings_BaseSetSetting_c *)customSet->klass;
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if ((bVar1 <= (pSVar5->_2).naturalAligment) &&
         ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanCustomSet)) {
        plVar14 = (long *)(*(pSVar5->vtable)._5_SerializeToJsonObject.methodPtr)(customSet);
        if (plVar14 == (long *)0x0) goto label_0435c51c;
        unaff_RBX = &"Preset";
        cVar11 = (**(code **)(*plVar14 + 0x2f8))(plVar14,"Preset",*(undefined8 *)(*plVar14 + 0x300));
        if (cVar11 == '\0') {
          if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0435be61;
label_0435c316:
          il2cpp_runtime_helper_02337ed0();
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        }
        else {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
          (**(code **)(*plVar14 + 0x1b8))(plVar14,"Preset",pSVar18,*(undefined8 *)(*plVar14 + 0x1c0));
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0435c316;
label_0435be61:
          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        }
        if (lVar3 != 0) {
          __this_04 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
          auVar21 = (**(code **)(*plVar14 + 0x318))(plVar14,4,*(undefined8 *)(*plVar14 + 800));
          unaff_RBX = (long *)0x0;
          if (__this_04 != (UI_ExportPopup_o *)0x0) {
            UI_ExportPopup__Show(__this_04,auVar21._0_8_,auVar21._8_8_);
            return;
          }
        }
        goto label_0435c51c;
      }
    }
  }
label_0435c521:
  il2cpp_runtime_helper_022b2fd0(customSet);
label_0435c529:
  il2cpp_runtime_helper_022b2fd0(unaff_RBX);
  if (g_data_057ae183 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveQuitCaptureCoroutine_d__35);
    g_data_057ae183 = '\x01';
  }
  pUVar19 = (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_SaveQuitCaptureCoroutine_d__35);
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor(pUVar19,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$OnCostumeSetOperationFinish
// il2cpp: void UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish (UI_CharacterEditorCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x435c580

void UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
               (UI_CharacterEditorCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *a;
  Settings_BoolSetting_o *pSVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  char cVar9;
  bool_conflict bVar10;
  int iVar11;
  VirtualInvokeData *pVVar12;
  Settings_BaseSetSetting_o *pSVar13;
  Settings_ListSetting_T__c *pSVar14;
  char *pcVar15;
  System_Collections_Generic_List_object__o *__this_03;
  undefined8 *puVar16;
  Il2CppRuntimeInterfaceOffsetPair *pIVar17;
  MethodInfo *method_00;
  long lVar18;
  Settings_IntSetting_o *pSVar19;
  UI_ImportPopup_o *__this_04;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar22;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ae182 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
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
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    il2cpp_runtime_helper_023445d0(&"Copy");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"Rename");
    il2cpp_runtime_helper_023445d0(&"Import");
    g_data_057ae182 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if ((lVar18 != 0) && (lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60), lVar5 != 0)) {
    lVar18 = *(long *)(lVar18 + 0x88);
    __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20);
    bVar10 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      bVar10 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        bVar10 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          bVar10 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality(name,"LoadPreset",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              method_00 = "Import";
              bVar10 = System_String__op_Equality(name,(System_String_o *)"Import",(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') goto label_0435c9dc;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar18 == 0) goto label_0435d088;
              __this_04 = *(UI_ImportPopup_o **)(lVar18 + 0x70);
              if (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) {
label_0435ce98:
                il2cpp_runtime_helper_022b2c90();
label_0435ce9d:
                il2cpp_runtime_helper_022b2c90();
label_0435cea2:
                il2cpp_runtime_helper_022b2c90();
label_0435cea7:
                il2cpp_runtime_helper_022b2c90();
label_0435ceac:
                il2cpp_runtime_helper_022b2c90();
label_0435ceb1:
                il2cpp_runtime_helper_022b2c90();
label_0435ceb6:
                il2cpp_runtime_helper_022b2c90();
label_0435cebb:
                il2cpp_runtime_helper_022b2c90();
label_0435cec0:
                il2cpp_runtime_helper_022b2c90();
label_0435cec5:
                auVar21 = il2cpp_runtime_helper_022b2c90();
                if (auVar21._8_4_ != 1) {
                  _Unwind_Resume(auVar21._0_8_);
                }
                name = (System_String_o *)__cxa_begin_catch(auVar21._0_8_);
                cVar9 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(((Settings_ListSetting_T__o *)name)->klass->_1).image
                                          );
                if (cVar9 == '\0') goto label_0435d08d;
                __cxa_end_catch();
                if (__this_04 == (UI_ImportPopup_o *)0x0) goto label_0435d088;
                auVar20 = il2cpp_runtime_helper_023445d0(&"Invalid human preset.");
                method_00 = auVar20._0_8_;
                UI_ImportPopup__ShowError(__this_04,(System_String_o *)method_00,auVar20._8_8_);
              }
              else {
                pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar13 == (Settings_BaseSetSetting_o *)0x0) goto label_0435ce9d;
                pSVar6 = (pSVar13->fields).Name;
                if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_0435cea2;
                pSVar7 = (pSVar6->fields)._value;
                pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (__this_04 == (UI_ImportPopup_o *)0x0) goto label_0435cea7;
                pSVar6 = (__this_04->fields).ImportSetting;
                if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_0435ceac;
                if (pSVar13 == (Settings_BaseSetSetting_o *)0x0) goto label_0435ceb1;
                (*(pSVar13->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                          (pSVar13,(pSVar6->fields)._value,
                           (pSVar13->klass->vtable)._8_DeserializeFromJsonString.method);
                pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar13 == (Settings_BaseSetSetting_o *)0x0) goto label_0435ceb6;
                pSVar8 = (pSVar13->fields).Preset;
                if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_0435cebb;
                Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)pSVar8,0,MethodInfo_Void_set_Value)
                ;
                pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar13 == (Settings_BaseSetSetting_o *)0x0) goto label_0435cec0;
                pSVar6 = (pSVar13->fields).Name;
                if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_0435cec5;
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar7,MethodInfo_Void_set_Value);
                method_00 = (__this_04->klass->vtable)._22_Hide.method;
                (*(__this_04->klass->vtable)._22_Hide.methodPtr)(__this_04);
              }
              if (g_data_057ae187 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                g_data_057ae187 = '\x01';
              }
              pcVar15 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
              cVar9 = '\x01';
              if (*pcVar15 == '\0') {
                if (g_data_057ae188 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                  g_data_057ae188 = '\x01';
                  pcVar15 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
                }
                cVar9 = pcVar15[1];
              }
              name = (System_String_o *)&TypeInfo_CharacterEditorSkinsPanel;
              if (__this != (UI_CharacterEditorCostumePanel_o *)0x0) {
                *(char *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = cVar9;
label_0435c9dc:
                UI_CharacterEditorCostumePanel__OnCustomSetSelected(__this,method_00);
                return;
              }
            }
            else if ((((__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) &&
                      (pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet)
                      , pSVar13 != (Settings_BaseSetSetting_o *)0x0)) &&
                     (pSVar6 = (pSVar13->fields).Name, pSVar6 != (Settings_StringSetting_o *)0x0)) &&
                    (((lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60), lVar18 != 0 &&
                      (lVar18 = *(long *)(lVar18 + 0x28), lVar18 != 0)) &&
                     (name = *(System_String_o **)(lVar18 + 0x28),
                     (Settings_ListSetting_T__o *)name != (Settings_ListSetting_T__o *)0x0)))) {
              pSVar7 = (pSVar6->fields)._value;
              pSVar14 = ((Settings_ListSetting_T__o *)name)->klass;
              uVar4._0_1_ = (pSVar14->_2).rank;
              uVar4._1_1_ = (pSVar14->_2).minimumAlignment;
              if ((ulong)uVar4 != 0) {
                pIVar17 = (pSVar14->_1).interfaceOffsets;
                lVar18 = 0;
                do {
                  if (*(long *)((long)&pIVar17->interfaceType + lVar18) == TypeInfo_IListSetting) {
                    pVVar12 = &(pSVar14->vtable)._0_Equals + (*(int *)((long)&pIVar17->offset + lVar18) + 2);
                    goto label_0435cc94;
                  }
                  lVar18 = lVar18 + 0x10;
                } while ((ulong)uVar4 << 4 != lVar18);
              }
              pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(name,TypeInfo_IListSetting,2);
label_0435cc94:
              __this_03 = (System_Collections_Generic_List_object__o *)
                          (*pVVar12->methodPtr)(name,pVVar12->method);
              if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator(&local_48,__this_03,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
                __this_04 = (UI_ImportPopup_o *)&MethodInfo_Boolean_MoveNext;
                pSVar22 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
label_0435cce0:
                do {
                  __this_01.fields._8_8_ = __this;
                  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
                  __this_01.fields._current = (Il2CppObject *)pSVar22;
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
                  if ((char)bVar10 == '\0') goto label_0435ce45;
                  if (local_48.fields._current == (Il2CppObject *)0x0) {
label_0435ce70:
                    il2cpp_runtime_helper_022b2c90();
label_0435ce75:
                    il2cpp_runtime_helper_022b2c90();
label_0435ce7a:
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0435ce7f;
                  }
                  bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
                  if ((((local_48.fields._current)->klass->_2).naturalAligment < bVar1) ||
                     (((local_48.fields._current)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)
                     ) {
                    il2cpp_runtime_helper_022b2fd0(local_48.fields._current);
label_0435ce66:
                    il2cpp_runtime_helper_022b2c90();
label_0435ce6b:
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0435ce70;
                  }
                  if (local_48.fields._current[2].klass == (Il2CppClass *)0x0) goto label_0435ce66;
                  a = (System_String_o *)((local_48.fields._current[2].klass)->_1).namespaze;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (lVar18 == 0) goto label_0435ce6b;
                  lVar18 = *(long *)(lVar18 + 0x90);
                  if (lVar18 == 0) goto label_0435ce75;
                  lVar18 = *(long *)(lVar18 + 0x138);
                  if (lVar18 == 0) goto label_0435ce7a;
                  bVar10 = System_String__op_Equality
                                     (a,*(System_String_o **)(lVar18 + 0x18),(MethodInfo *)0x0);
                } while ((char)bVar10 == '\0');
                pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar13 == (Settings_BaseSetSetting_o *)0x0) {
label_0435ce7f:
                  il2cpp_runtime_helper_022b2c90();
label_0435ce84:
                  il2cpp_runtime_helper_022b2c90();
label_0435ce89:
                  il2cpp_runtime_helper_022b2c90();
                }
                else {
                  (*(pSVar13->klass->vtable)._9_Copy.methodPtr)
                            (pSVar13,local_48.fields._current,(pSVar13->klass->vtable)._9_Copy.method);
                  pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                  if (pSVar13 == (Settings_BaseSetSetting_o *)0x0) goto label_0435ce84;
                  pSVar8 = (pSVar13->fields).Preset;
                  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_0435ce89;
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar8,0,MethodInfo_Void_set_Value);
                  pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                  if (pSVar13 != (Settings_BaseSetSetting_o *)0x0) {
                    pSVar6 = (pSVar13->fields).Name;
                    if (pSVar6 != (Settings_StringSetting_o *)0x0) {
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar7,MethodInfo_Void_set_Value);
                      goto label_0435cce0;
                    }
                    goto label_0435ce93;
                  }
                }
                il2cpp_runtime_helper_022b2c90();
label_0435ce93:
                il2cpp_runtime_helper_022b2c90();
                goto label_0435ce98;
              }
            }
          }
          else if (((lVar18 != 0) && (*(long *)(lVar18 + 0xb8) != 0)) &&
                  (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
            Settings_SetSettingsContainer_object___CopySelectedSet
                      (__this_00,*(System_String_o **)(*(long *)(lVar18 + 0xb8) + 0x18),MethodInfo_Void_CopySelectedSet);
            name = (System_String_o *)(__this_00->fields).Sets;
            if ((Settings_ListSetting_T__o *)name != (Settings_ListSetting_T__o *)0x0) {
              pSVar19 = (__this_00->fields).SelectedSetIndex;
              pSVar14 = ((Settings_ListSetting_T__o *)name)->klass;
              uVar3._0_1_ = (pSVar14->_2).rank;
              uVar3._1_1_ = (pSVar14->_2).minimumAlignment;
              if ((ulong)uVar3 != 0) {
                pIVar17 = (pSVar14->_1).interfaceOffsets;
                lVar18 = 0;
                do {
                  if (*(long *)((long)&pIVar17->interfaceType + lVar18) == TypeInfo_IListSetting) goto label_0435c994;
                  lVar18 = lVar18 + 0x10;
                } while ((ulong)uVar3 << 4 != lVar18);
              }
              goto label_0435c7e3;
            }
          }
        }
        else if (((__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) &&
                 (pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
                 pSVar13 != (Settings_BaseSetSetting_o *)0x0)) &&
                ((lVar18 != 0 &&
                 ((*(long *)(lVar18 + 0xb8) != 0 &&
                  (pSVar6 = (pSVar13->fields).Name, pSVar6 != (Settings_StringSetting_o *)0x0)))))) {
          method_00 = *(MethodInfo **)(*(long *)(lVar18 + 0xb8) + 0x18);
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
          goto label_0435c9dc;
        }
      }
      else if (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) {
        Settings_SetSettingsContainer_object___DeleteSelectedSet(__this_00,MethodInfo_Void_DeleteSelectedSet);
        pSVar19 = (__this_00->fields).SelectedSetIndex;
        if (pSVar19 != (Settings_IntSetting_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar19,0,MethodInfo_Void_set_Value);
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)0x0);
          goto label_0435c9dc;
        }
      }
    }
    else if (((lVar18 != 0) && (*(long *)(lVar18 + 0xb8) != 0)) &&
            (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
      Settings_SetSettingsContainer_object___CreateSet
                (__this_00,*(System_String_o **)(*(long *)(lVar18 + 0xb8) + 0x18),MethodInfo_Void_CreateSet);
      name = (System_String_o *)(__this_00->fields).Sets;
      if ((Settings_ListSetting_T__o *)name != (Settings_ListSetting_T__o *)0x0) {
        pSVar19 = (__this_00->fields).SelectedSetIndex;
        pSVar14 = ((Settings_ListSetting_T__o *)name)->klass;
        uVar2._0_1_ = (pSVar14->_2).rank;
        uVar2._1_1_ = (pSVar14->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar17 = (pSVar14->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar17->interfaceType + lVar18) == TypeInfo_IListSetting) goto label_0435c994;
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar18);
        }
label_0435c7e3:
        pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(name,TypeInfo_IListSetting,0);
        goto label_0435c9a7;
      }
    }
  }
label_0435d088:
  il2cpp_runtime_helper_022b2c90();
label_0435d08d:
  puVar16 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar16 = ((Settings_ListSetting_T__o *)name)->klass;
  __cxa_throw(puVar16,&PTR_PTR_05215060,0);
label_0435ce45:
  __this_02.fields._8_8_ = __this;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_02.fields._current = (Il2CppObject *)pSVar22;
  method_00 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  goto label_0435c9dc;
label_0435c994:
  pVVar12 = &(pSVar14->vtable)._0_Equals + *(int *)((long)&pIVar17->offset + lVar18);
label_0435c9a7:
  iVar11 = (*pVVar12->methodPtr)(name,pVVar12->method);
  if (pSVar19 != (Settings_IntSetting_o *)0x0) {
    method_00 = (MethodInfo *)(ulong)(iVar11 - 1U);
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar19,iVar11 - 1U,MethodInfo_Void_set_Value);
    *(undefined1 *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = 1;
    goto label_0435c9dc;
  }
  goto label_0435d088;
}


// UI.CharacterEditorCostumePanel$$SaveQuitCaptureCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435c540

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this_00;
  
  if (g_data_057ae183 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveQuitCaptureCoroutine_d__35);
    g_data_057ae183 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_SaveQuitCaptureCoroutine_d__35);
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___ctor (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d190

void UI_CharacterEditorCostumePanel___ctor(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if (g_data_057ae115 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Button);
    g_data_057ae115 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Button);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
  (__this->fields)._topButtons = (System_Collections_Generic_Dictionary_string__Button__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._topButtons,pSVar1);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_0
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_0 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d210

void UI_CharacterEditorCostumePanel___Setup_b__21_0
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae184 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Quit");
    g_data_057ae184 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this,"Quit",in_RDX);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_1
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_1 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d250

void UI_CharacterEditorCostumePanel___Setup_b__21_1
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae185 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadPreset");
    g_data_057ae185 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this,"LoadPreset",in_RDX);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_2
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_2 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d290

void UI_CharacterEditorCostumePanel___Setup_b__21_2
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae186 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SaveQuit");
    g_data_057ae186 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this,"SaveQuit",in_RDX);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_3
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_3 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d2d0

void UI_CharacterEditorCostumePanel___Setup_b__21_3
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__OnCustomSetSelected(__this,method);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_4
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_4 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d2e0

void UI_CharacterEditorCostumePanel___Setup_b__21_4
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *__this_01;
  Settings_BoolSetting_o *__this_02;
  UI_CharacterEditorMenu_o *pUVar4;
  GameManagers_CharacterEditorGameManager_o *pGVar5;
  Characters_DummyHuman_o *__this_03;
  bool_conflict bVar6;
  Settings_BaseSetSetting_o *pSVar7;
  undefined8 *puVar8;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *pUVar9;
  long *unaff_RBX;
  
  if (g_data_057ae17b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"HairM0");
    il2cpp_runtime_helper_023445d0(&"HairF0");
    g_data_057ae17b = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar3 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pSVar7 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar7 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    unaff_RBX = (long *)pSVar7;
    if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
       ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_0435b02b;
    if ((pSVar7[1].klass != (Settings_BaseSetSetting_c *)0x0) &&
       (__this_01 = pSVar7[1].fields.Name, __this_01 != (Settings_StringSetting_o *)0x0)) {
      if (*(int *)((long)&((pSVar7[1].klass)->_1).name + 4) == 0) {
        puVar8 = &"HairM0";
      }
      else {
        puVar8 = &"HairF0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)*puVar8,MethodInfo_Void_set_Value);
      __this_02 = pSVar7[1].fields.Preset;
      if (__this_02 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_02,0,MethodInfo_Void_set_Value);
        pUVar4 = (__this->fields)._menu;
        if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar4->klass->vtable)._8_RebuildPanels.methodPtr)
                    (pUVar4,1,(pUVar4->klass->vtable)._8_RebuildPanels.method);
          pUVar4 = (__this->fields)._menu;
          if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
            (*(pUVar4->klass->vtable)._9_ResetCharacter.methodPtr)
                      (pUVar4,1,(pUVar4->klass->vtable)._9_ResetCharacter.method);
            if (g_data_057ae187 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
              g_data_057ae187 = '\x01';
            }
            unaff_RBX = &TypeInfo_CharacterEditorSkinsPanel;
            if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
              if (g_data_057ae188 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
                g_data_057ae188 = '\x01';
                cVar2 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
              }
              else {
                cVar2 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
              }
              if (cVar2 == '\0') {
                return;
              }
            }
            pUVar4 = (__this->fields)._menu;
            if ((pUVar4 != (UI_CharacterEditorMenu_o *)0x0) &&
               (pGVar5 = (pUVar4->fields)._gameManager,
               pGVar5 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
              __this_03 = (pGVar5->fields).Human;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
label_0435afad:
                if (g_data_057ae17e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                  g_data_057ae17e = '\x01';
                }
                pUVar9 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
                UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor
                          (pUVar9,0,(MethodInfo *)0x0);
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar9,
                           (MethodInfo *)0x0);
                return;
              }
              unaff_RBX = (long *)0x0;
              if (__this_03 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyHuman__LoadSkin(__this_03,(MethodInfo *)0x0);
                goto label_0435afad;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435b02b:
  il2cpp_runtime_helper_022b2fd0(unaff_RBX);
  if (g_data_057ae17e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    g_data_057ae17e = '\x01';
  }
  pUVar9 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor(pUVar9,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_5
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_5 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d2f0

void UI_CharacterEditorCostumePanel___Setup_b__21_5
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_6
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_6 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d300

void UI_CharacterEditorCostumePanel___Setup_b__21_6
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_7
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_7 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d310

void UI_CharacterEditorCostumePanel___Setup_b__21_7
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_8
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_8 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d320

void UI_CharacterEditorCostumePanel___Setup_b__21_8
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_9
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_9 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d330

void UI_CharacterEditorCostumePanel___Setup_b__21_9
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_10
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_10 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d340

void UI_CharacterEditorCostumePanel___Setup_b__21_10
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_11
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_11 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d350

void UI_CharacterEditorCostumePanel___Setup_b__21_11
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_12
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_12 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d360

void UI_CharacterEditorCostumePanel___Setup_b__21_12
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_13
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_13 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d370

void UI_CharacterEditorCostumePanel___Setup_b__21_13
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_14
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_14 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d380

void UI_CharacterEditorCostumePanel___Setup_b__21_14
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_15
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_15 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d390

void UI_CharacterEditorCostumePanel___Setup_b__21_15
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_16
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_16 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d3a0

void UI_CharacterEditorCostumePanel___Setup_b__21_16
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_17
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_17 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d3b0

void UI_CharacterEditorCostumePanel___Setup_b__21_17
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_18
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_18 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d3c0

void UI_CharacterEditorCostumePanel___Setup_b__21_18
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_19
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_19 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d3d0

void UI_CharacterEditorCostumePanel___Setup_b__21_19
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_20
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_20 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d3e0

void UI_CharacterEditorCostumePanel___Setup_b__21_20
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_21
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_21 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d3f0

void UI_CharacterEditorCostumePanel___Setup_b__21_21
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_22
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_22 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d400

void UI_CharacterEditorCostumePanel___Setup_b__21_22
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_23
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_23 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d410

void UI_CharacterEditorCostumePanel___Setup_b__21_23
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_24
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_24 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d420

void UI_CharacterEditorCostumePanel___Setup_b__21_24
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_25
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_25 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d430

void UI_CharacterEditorCostumePanel___Setup_b__21_25
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_26
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_26 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x435d440

void UI_CharacterEditorCostumePanel___Setup_b__21_26
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *pUVar3;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae17f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
      g_data_057ae17f = '\x01';
    }
    pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor
              (pUVar3,0,(MethodInfo *)0x0);
    return;
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (g_data_057ae17f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    g_data_057ae17f = '\x01';
  }
  pUVar3 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(pUVar3,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar3,
             (MethodInfo *)0x0);
  return;
}


