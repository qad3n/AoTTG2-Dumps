// Type: UI.EditProfileProfilePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EditProfileProfilePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileProfilePanel.cs
// --------------------------------

// UI.EditProfileProfilePanel.<>c$$.cctor
// il2cpp: void UI_EditProfileProfilePanel___c___cctor (const MethodInfo* method);
// 0x43ffee0

void UI_EditProfileProfilePanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae581 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae581 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.EditProfileProfilePanel.<>c$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c___ctor (UI_EditProfileProfilePanel___c_o* __this, const MethodInfo* method);
// 0x43fff50

void UI_EditProfileProfilePanel___c___ctor(UI_EditProfileProfilePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c$$<Setup>b__21_2
// il2cpp: System_String_o* UI_EditProfileProfilePanel___c___Setup_b__21_2 (UI_EditProfileProfilePanel___c_o* __this, System_String_o* s, const MethodInfo* method);
// 0x43fff60

System_String_o *
UI_EditProfileProfilePanel___c___Setup_b__21_2
          (UI_EditProfileProfilePanel___c_o *__this,System_String_o *s,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined4 extraout_var;
  
  pSVar2 = s;
  if (g_data_057ae582 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae582 = '\x01';
  }
  if (s != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_3af9030(s,"\n","",(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae583 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae583 = '\x01';
  }
  bVar1 = System_String__op_Inequality(pSVar2,"None",(MethodInfo *)0x0);
  return (System_String_o *)CONCAT44(extraout_var,bVar1);
}


// UI.EditProfileProfilePanel.<>c$$<.cctor>b__38_0
// il2cpp: bool UI_EditProfileProfilePanel___c____cctor_b__38_0 (UI_EditProfileProfilePanel___c_o* __this, System_String_o* n, const MethodInfo* method);
// 0x43fffc0

bool_conflict
UI_EditProfileProfilePanel___c____cctor_b__38_0
          (UI_EditProfileProfilePanel___c_o *__this,System_String_o *n,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae583 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae583 = '\x01';
  }
  bVar1 = System_String__op_Inequality(n,"None",(MethodInfo *)0x0);
  return bVar1;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4400000

void UI_EditProfileProfilePanel___c__DisplayClass21_0___ctor
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__0 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4400010

void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__0
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  System_Threading_CancellationTokenSource_c *__this_00;
  System_Threading_CancellationCallbackInfo_o *__this_01;
  uint uVar2;
  uint value;
  UI_EditProfileProfilePanel_o *pUVar3;
  UI_EditProfileProfilePanel_o *pUVar4;
  
  uVar2 = (uint)method;
  pUVar3 = (__this->fields).__4__this;
  if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__CreateProfileImage(pUVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_EditProfileProfilePanel_o *)(pUVar3->fields).m_CachedPtr;
  if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = pUVar3;
  value = uVar2;
  if (g_data_057ae584 == '\0') {
    pUVar4 = (UI_EditProfileProfilePanel_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae584 = '\x01';
  }
  pSVar1 = (pUVar3->fields).m_CancellationTokenSource;
  if ((pSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (__this_00 = pSVar1[2].klass, pUVar4 = (UI_EditProfileProfilePanel_o *)0x0,
     __this_00 != (System_Threading_CancellationTokenSource_c *)0x0)) {
    value = uVar2 & 0xff;
    Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_00,value,MethodInfo_Void_set_Value);
    pUVar3 = (UI_EditProfileProfilePanel_o *)(pUVar3->fields).m_CachedPtr;
    pUVar4 = (UI_EditProfileProfilePanel_o *)0x0;
    if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_EditProfileProfilePanel_o *)(pUVar4->fields).m_CachedPtr;
  if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = pUVar3;
  if (g_data_057ae585 == '\0') {
    pUVar4 = (UI_EditProfileProfilePanel_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae585 = '\x01';
  }
  pSVar1 = (pUVar3->fields).m_CancellationTokenSource;
  if ((pSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (__this_01 = pSVar1[2].fields._executingCallback, pUVar4 = (UI_EditProfileProfilePanel_o *)0x0,
     __this_01 != (System_Threading_CancellationCallbackInfo_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_01,value & 0xff,MethodInfo_Void_set_Value);
    pUVar3 = (UI_EditProfileProfilePanel_o *)(pUVar3->fields).m_CachedPtr;
    pUVar4 = (UI_EditProfileProfilePanel_o *)0x0;
    if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__1
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__1 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4400030

void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__1
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  System_Threading_CancellationTokenSource_c *__this_00;
  System_Threading_CancellationCallbackInfo_o *__this_01;
  uint uVar2;
  uint value;
  UI_EditProfileProfilePanel_o *pUVar3;
  UI_EditProfileProfilePanel_o *pUVar4;
  
  uVar2 = (uint)method;
  pUVar3 = (__this->fields).__4__this;
  if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = pUVar3;
  value = uVar2;
  if (g_data_057ae584 == '\0') {
    pUVar4 = (UI_EditProfileProfilePanel_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae584 = '\x01';
  }
  pSVar1 = (pUVar3->fields).m_CancellationTokenSource;
  if ((pSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (__this_00 = pSVar1[2].klass, pUVar4 = (UI_EditProfileProfilePanel_o *)0x0,
     __this_00 != (System_Threading_CancellationTokenSource_c *)0x0)) {
    value = uVar2 & 0xff;
    Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_00,value,MethodInfo_Void_set_Value);
    pUVar3 = (UI_EditProfileProfilePanel_o *)(pUVar3->fields).m_CachedPtr;
    pUVar4 = (UI_EditProfileProfilePanel_o *)0x0;
    if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UI_EditProfileProfilePanel_o *)(pUVar4->fields).m_CachedPtr;
  if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = pUVar3;
  if (g_data_057ae585 == '\0') {
    pUVar4 = (UI_EditProfileProfilePanel_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae585 = '\x01';
  }
  pSVar1 = (pUVar3->fields).m_CancellationTokenSource;
  if ((pSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (__this_01 = pSVar1[2].fields._executingCallback, pUVar4 = (UI_EditProfileProfilePanel_o *)0x0,
     __this_01 != (System_Threading_CancellationCallbackInfo_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_01,value & 0xff,MethodInfo_Void_set_Value);
    pUVar3 = (UI_EditProfileProfilePanel_o *)(pUVar3->fields).m_CachedPtr;
    pUVar4 = (UI_EditProfileProfilePanel_o *)0x0;
    if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__3
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__3 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, bool val, const MethodInfo* method);
// 0x4400050

void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__3
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,bool_conflict val,
               MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  System_Threading_CancellationTokenSource_o *pSVar2;
  System_Threading_CancellationCallbackInfo_o *__this_01;
  uint value;
  UI_EditProfileProfilePanel___c__DisplayClass21_0_o *pUVar3;
  UI_EditProfileProfilePanel_o *pUVar4;
  UI_EditProfileProfilePanel_o *__this_02;
  
  pUVar3 = __this;
  value = val;
  if (g_data_057ae584 == '\0') {
    pUVar3 = (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae584 = '\x01';
  }
  pSVar1 = (__this->fields).settings;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).NameEffectEnabled,
     pUVar3 = (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)0x0,
     __this_00 != (Settings_BoolSetting_o *)0x0)) {
    value = val & 0xff;
    Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_00,value,MethodInfo_Void_set_Value);
    pUVar4 = (__this->fields).__4__this;
    pUVar3 = (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)0x0;
    if (pUVar4 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (pUVar3->fields).__4__this;
  if (pUVar4 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = pUVar4;
  if (g_data_057ae585 == '\0') {
    __this_02 = (UI_EditProfileProfilePanel_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae585 = '\x01';
  }
  pSVar2 = (pUVar4->fields).m_CancellationTokenSource;
  if ((pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (__this_01 = pSVar2[2].fields._executingCallback, __this_02 = (UI_EditProfileProfilePanel_o *)0x0,
     __this_01 != (System_Threading_CancellationCallbackInfo_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_01,value & 0xff,MethodInfo_Void_set_Value);
    pUVar4 = (UI_EditProfileProfilePanel_o *)(pUVar4->fields).m_CachedPtr;
    __this_02 = (UI_EditProfileProfilePanel_o *)0x0;
    if (pUVar4 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__4
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__4 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x44000c0

void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__4
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  System_Threading_CancellationCallbackInfo_o *__this_00;
  uint uVar2;
  UI_EditProfileProfilePanel_o *pUVar3;
  UI_EditProfileProfilePanel_o *__this_01;
  
  uVar2 = (uint)method;
  pUVar3 = (__this->fields).__4__this;
  if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar3;
  if (g_data_057ae585 == '\0') {
    __this_01 = (UI_EditProfileProfilePanel_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae585 = '\x01';
  }
  pSVar1 = (pUVar3->fields).m_CancellationTokenSource;
  if ((pSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) &&
     (__this_00 = pSVar1[2].fields._executingCallback, __this_01 = (UI_EditProfileProfilePanel_o *)0x0,
     __this_00 != (System_Threading_CancellationCallbackInfo_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,uVar2 & 0xff,MethodInfo_Void_set_Value);
    pUVar3 = (UI_EditProfileProfilePanel_o *)(pUVar3->fields).m_CachedPtr;
    __this_01 = (UI_EditProfileProfilePanel_o *)0x0;
    if (pUVar3 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__5
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__5 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, bool val, const MethodInfo* method);
// 0x44000e0

void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__5
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,bool_conflict val,
               MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  UI_EditProfileProfilePanel_o *__this_01;
  UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this_02;
  
  __this_02 = __this;
  if (g_data_057ae585 == '\0') {
    __this_02 = (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae585 = '\x01';
  }
  pSVar1 = (__this->fields).settings;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).GuildEffectEnabled,
     __this_02 = (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)0x0,
     __this_00 != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_00,val & 0xff,MethodInfo_Void_set_Value)
    ;
    __this_01 = (__this->fields).__4__this;
    __this_02 = (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)0x0;
    if (__this_01 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4400150

void UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__0 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4400160

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__0
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *pUVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__OnEffectSelected
              (pUVar1,(__this->fields).effectSetting,(__this->fields).colorA,(__this->fields).colorB,
               (__this->fields).colorC,(__this->fields).colorD,(uint)(byte)(__this->fields).isName,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(pUVar1->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(pUVar1->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(pUVar1->fields).MaskBackground,
               (Settings_ColorSetting_o *)(pUVar1->fields).Parent,
               (Settings_ColorSetting_o *)(pUVar1->fields)._profileImage,
               (uint)*(byte *)&(pUVar1->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__1
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__1 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x44001a0

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__1
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *pUVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(pUVar1->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(pUVar1->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(pUVar1->fields).MaskBackground,
               (Settings_ColorSetting_o *)(pUVar1->fields).Parent,
               (Settings_ColorSetting_o *)(pUVar1->fields)._profileImage,
               (uint)*(byte *)&(pUVar1->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__2
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__2 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x44001c0

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__2
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *pUVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(pUVar1->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(pUVar1->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(pUVar1->fields).MaskBackground,
               (Settings_ColorSetting_o *)(pUVar1->fields).Parent,
               (Settings_ColorSetting_o *)(pUVar1->fields)._profileImage,
               (uint)*(byte *)&(pUVar1->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__3
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__3 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x44001e0

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__3
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *pUVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(pUVar1->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(pUVar1->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(pUVar1->fields).MaskBackground,
               (Settings_ColorSetting_o *)(pUVar1->fields).Parent,
               (Settings_ColorSetting_o *)(pUVar1->fields)._profileImage,
               (uint)*(byte *)&(pUVar1->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__4
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__4 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4400200

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__4
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *pUVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(pUVar1->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(pUVar1->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(pUVar1->fields).MaskBackground,
               (Settings_ColorSetting_o *)(pUVar1->fields).Parent,
               (Settings_ColorSetting_o *)(pUVar1->fields)._profileImage,
               (uint)*(byte *)&(pUVar1->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__5
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__5 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4400220

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__5
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *pUVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(pUVar1->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(pUVar1->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(pUVar1->fields).MaskBackground,
               (Settings_ColorSetting_o *)(pUVar1->fields).Parent,
               (Settings_ColorSetting_o *)(pUVar1->fields)._profileImage,
               (uint)*(byte *)&(pUVar1->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__6
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__6 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4400240

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__6
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *pUVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(pUVar1->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(pUVar1->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(pUVar1->fields).MaskBackground,
               (Settings_ColorSetting_o *)(pUVar1->fields).Parent,
               (Settings_ColorSetting_o *)(pUVar1->fields)._profileImage,
               (uint)*(byte *)&(pUVar1->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__7
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__7 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4400260

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__7
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *pUVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (pUVar1 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_EditProfileProfilePanel_o *)(pUVar1->fields).m_CachedPtr;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(pUVar1->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(pUVar1->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(pUVar1->fields).MaskBackground,
               (Settings_ColorSetting_o *)(pUVar1->fields).Parent,
               (Settings_ColorSetting_o *)(pUVar1->fields)._profileImage,
               (uint)*(byte *)&(pUVar1->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__8
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__8 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4400280

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__8
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  UI_EditProfileProfilePanel_o *__this_01;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UI_EditProfileProfilePanel_o *)(__this_00->fields).m_CachedPtr;
  if (__this_01 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_01,(__this_00->fields)._currentCategoryPanelName,
               (Settings_ColorSetting_o *)(__this_00->fields)._categoryPanelTypes,
               (Settings_ColorSetting_o *)(__this_00->fields).MaskBackground,
               (Settings_ColorSetting_o *)(__this_00->fields).Parent,
               (Settings_ColorSetting_o *)(__this_00->fields)._profileImage,
               (uint)*(byte *)&(__this_00->fields)._group,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__9
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__9 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x44002a0

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__9
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(__this->fields).capturedEffect,(__this->fields).capA,(__this->fields).capB,
               (__this->fields).capC,(__this->fields).capD,(uint)(byte)(__this->fields).captureIsName,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass30_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x44002e0

void UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor
               (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass30_0$$<CreateGuildRoleSpriteButton>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass30_0___CreateGuildRoleSpriteButton_b__0 (UI_EditProfileProfilePanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x44002f0

void UI_EditProfileProfilePanel___c__DisplayClass30_0___CreateGuildRoleSpriteButton_b__0
               (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Settings_ProfileSettings_o *pSVar3;
  UI_EditProfileProfilePanel_o *pUVar4;
  UI_RoleSpritePickPopup_o *__this_00;
  Settings_StringSetting_o *setting;
  TMPro_TextMeshProUGUI_o *label;
  UnityEngine_Events_UnityAction_o *onSelect;
  
  if (g_data_057ae586 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshPreviews);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae586 = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (((lVar2 != 0) && (pSVar3 = (__this->fields).settings, pSVar3 != (Settings_ProfileSettings_o *)0x0)) &&
     (pUVar4 = (__this->fields).__4__this, pUVar4 != (UI_EditProfileProfilePanel_o *)0x0)) {
    __this_00 = *(UI_RoleSpritePickPopup_o **)(lVar2 + 0x58);
    setting = (pSVar3->fields).GuildRoleSprite;
    label = (pUVar4->fields)._guildRoleSpriteButtonLabel;
    onSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UI_RoleSpritePickPopup_o *)0x0) {
      UI_RoleSpritePickPopup__Show(__this_00,setting,label,onSelect,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.EditProfileProfilePanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileProfilePanel__get_ScrollBar (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x43fc6d0

bool_conflict
UI_EditProfileProfilePanel__get_ScrollBar(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileProfilePanel$$Setup
// il2cpp: void UI_EditProfileProfilePanel__Setup (UI_EditProfileProfilePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43fc6e0

void UI_EditProfileProfilePanel__Setup
               (UI_EditProfileProfilePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  int *piVar3;
  bool_conflict *pbVar4;
  byte bVar5;
  char cVar6;
  int32_t fontSize;
  UnityEngine_Component_o *pUVar7;
  UI_IconPickPopup_o *popup;
  Settings_NameSetting_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  UI_ColorPickPopup_o *pUVar10;
  undefined8 uVar11;
  void *pvVar12;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar13;
  int iVar14;
  uint uVar15;
  UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this_01;
  UnityEngine_Object_o *pUVar16;
  UnityEngine_Object_o *pUVar17;
  UnityEngine_GameObject_o *pUVar18;
  System_String_o *pSVar19;
  System_String_array *__this_02;
  System_String_array *pSVar20;
  System_String_array *icons;
  UnityEngine_Events_UnityAction_o *pUVar21;
  System_Func_string__string__o *onCleanup;
  System_String_o *pSVar22;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *source;
  System_String_o *a;
  System_String_o *pSVar23;
  PatreonEffects_NameEffectController_o *__this_03;
  UI_ElementStyle_o *pUVar24;
  TMPro_TMP_FontAsset_o *pTVar25;
  System_Type_array *__this_04;
  System_Type_array *pSVar26;
  System_Type_array *pSVar27;
  UI_ColorSettingElement_o *pUVar28;
  System_Type_array *pSVar29;
  UnityEngine_Transform_o *pUVar30;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this_05;
  long lVar31;
  System_RuntimeTypeHandle_o SVar32;
  Settings_ProfileSettings_o *pSVar33;
  Il2CppObject *pIVar34;
  UnityEngine_UI_Selectable_o *__this_06;
  System_Type_o *pSVar35;
  UnityEngine_GameObject_o *__this_07;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *__this_08;
  Settings_StringSetting_o *pSVar36;
  undefined8 uVar37;
  Photon_Realtime_Player_o *pPVar38;
  Settings_ProfileSettings_o *pSVar39;
  UI_EditProfileProfilePanel_o *pUVar40;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo_255A0F0 *style;
  UnityEngine_GameObject_o *extraout_RDX;
  MethodInfo *method_07;
  ulong uVar41;
  Settings_ProfileSettings_o **ppSVar42;
  long *plVar43;
  System_String_array *pSVar44;
  TMPro_TMP_Text_o *pTVar45;
  TMPro_TMP_Text_o *__this_09;
  MethodInfo_255A0F0 *parent_01;
  long lVar46;
  PatreonEffects_NameEffectController_o *pPVar47;
  TMPro_TMP_FontAsset_o *pTVar48;
  UI_EditProfileProfilePanel_o *__this_10;
  System_Type_array *pSVar49;
  UI_ColorSettingElement_o **ppUVar50;
  Settings_ProfileSettings_c *pSVar51;
  UI_CategoryPanel_o *__this_11;
  byte in_R8B;
  MethodInfo *method_08;
  long *in_R9;
  long *tmpObj;
  bool bVar52;
  System_String_o *pSStackY_330;
  code *pcStackY_328;
  undefined8 uStackY_320;
  System_String_o *pSStackY_318;
  long lStackY_310;
  System_Type_array *pSStackY_308;
  System_Type_array *pSStackY_300;
  UnityEngine_GameObject_o *pUStackY_2f8;
  System_Nullable_float__Fields SStack_1d0;
  Settings_StringSetting_o **ppSStack_1c8;
  System_Type_array *pSStack_1c0;
  PatreonEffects_NameEffectController_o *pPStack_1b8;
  long lStack_1b0;
  TMPro_TMP_FontAsset_o *pTStack_1a8;
  UnityEngine_GameObject_o *pUStack_1a0;
  long *plStack_198;
  Settings_StringSetting_o *in_stack_fffffffffffffe78;
  Settings_StringSetting_o *in_stack_fffffffffffffe80;
  Settings_NameSetting_o *in_stack_fffffffffffffe88;
  undefined4 in_stack_fffffffffffffe90;
  undefined4 uStack_16c;
  System_Type_array *in_stack_fffffffffffffe98;
  System_Type_array *__this_12;
  MethodInfo *method_09;
  
  if (g_data_057ae56d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_GetComponent_RectMask2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_RoleSpriteDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Setup_b__21_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"<b>Display Name: </b>");
    il2cpp_runtime_helper_023445d0(&"Name Effect  (Patreon)");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Guild Role Sprite");
    il2cpp_runtime_helper_023445d0(&"Preview:");
    il2cpp_runtime_helper_023445d0(&"<b>Patreon Tier: </b>");
    il2cpp_runtime_helper_023445d0(&"Thank you, ");
    il2cpp_runtime_helper_023445d0(&"Social");
    il2cpp_runtime_helper_023445d0(&" for being a supporter.");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"Guild Effect  (Patreon)");
    il2cpp_runtime_helper_023445d0(&"<b>User ID: </b>");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"About");
    il2cpp_runtime_helper_023445d0(&"<b>Patreon Supporter: </b>");
    il2cpp_runtime_helper_023445d0(&"No");
    g_data_057ae56d = '\x01';
  }
  __this_01 = (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  pSVar44 = (System_String_array *)0x0;
  UI_EditProfileProfilePanel___c__DisplayClass21_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    il2cpp_runtime_helper_022b4080(&__this_01->fields,__this);
    UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
    pUVar30 = (__this->fields).SinglePanel;
    pSVar44 = (System_String_array *)parent;
    if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
      pUVar16 = (UnityEngine_Object_o *)
                UnityEngine_Component__GetComponentInParent_object_
                          ((UnityEngine_Component_o *)pUVar30,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar44 = (System_String_array *)0x0;
      bVar13 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
label_043fca61:
        ppSVar42 = &(__this_01->fields).settings;
        (__this_01->fields).settings = *(Settings_ProfileSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
        il2cpp_runtime_helper_022b4080(ppSVar42);
        pSVar19 = (System_String_o *)
                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_02 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_02,0x18,100.0,20.0,pSVar19,(MethodInfo *)0x0);
        pSVar44 = (System_String_array *)0x3;
        pUVar18 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,60.0,3,(MethodInfo *)0x0);
        if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
          pSVar44 = (System_String_array *)UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
          ppUVar1 = &(__this->fields)._group;
          (__this->fields)._group = (UnityEngine_Transform_o *)pSVar44;
          il2cpp_runtime_helper_022b4080(ppUVar1);
          if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar40 = (UI_EditProfileProfilePanel_o *)TypeInfo_UIManager->m_Items[0x13][2].fields._impl.fields.value;
          if (pUVar40 != (UI_EditProfileProfilePanel_o *)0x0) {
            pSVar20 = (System_String_array *)
                      System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_object__o *)pUVar40,MethodInfo_String_ToArray);
            pSVar44 = pSVar20;
            icons = UI_EditProfileProfilePanel__GetProfileIconPaths(pUVar40,pSVar20,method_00);
            if (*ppSVar42 != (Settings_ProfileSettings_o *)0x0) {
              pUVar30 = *ppUVar1;
              pSVar36 = ((*ppSVar42)->fields).ProfileIcon;
              pSVar44 = (System_String_array *)0x0;
              pSVar19 = UI_UIManager__GetLocaleCommon("Icon",(MethodInfo *)0x0);
              lVar31 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
              if (lVar31 != 0) {
                popup = *(UI_IconPickPopup_o **)(lVar31 + 0x50);
                pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                method_09 = (MethodInfo *)0x0;
                pSVar44 = __this_02;
                UI_ElementFactory__CreateIconPickSetting
                          (pUVar30,(UI_ElementStyle_o *)__this_02,(Settings_BaseSetting_o *)pSVar36,pSVar19,
                           pSVar20,icons,popup,"",(System_String_array *)0x0,180.0,40.0,pUVar21,
                           (UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                UI_EditProfileProfilePanel__CreateProfileImage(__this,(MethodInfo *)pSVar44);
                UI_BasePanel__CreateHorizontalDivider
                          ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
                pUVar40 = (UI_EditProfileProfilePanel_o *)(__this->fields).SinglePanel;
                UI_ElementFactory__CreateDefaultLabel
                          ((UnityEngine_Transform_o *)pUVar40,(UI_ElementStyle_o *)__this_02,"Preview:",1,3,
                           (MethodInfo *)0x0);
                pUVar30 = (__this->fields).SinglePanel;
                pSVar19 = UI_EditProfileProfilePanel__GetGuildPreviewText
                                    (pUVar40,(__this_01->fields).settings,method_01);
                in_R8B = 3;
                in_R9 = (long *)0x0;
                pUVar18 = UI_ElementFactory__CreateTMPLabel
                                    (pUVar30,(UI_ElementStyle_o *)__this_02,pSVar19,0,3,(MethodInfo *)0x0);
                ppUVar2 = &(__this->fields)._guildPreviewTMP;
                (__this->fields)._guildPreviewTMP = pUVar18;
                il2cpp_runtime_helper_022b4080(ppUVar2);
                pUVar16 = (UnityEngine_Object_o *)(__this->fields)._guildPreviewTMP;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar44 = (System_String_array *)0x0;
                bVar13 = UnityEngine_Object__op_Inequality
                                   (pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar13 == '\0') {
label_043fcdab:
                  if ((*ppSVar42 != (Settings_ProfileSettings_o *)0x0) &&
                     (pSVar8 = ((*ppSVar42)->fields).Name, pSVar8 != (Settings_NameSetting_o *)0x0)) {
                    pUVar30 = (__this->fields).SinglePanel;
                    pSVar19 = (pSVar8->fields)._value;
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar19 = MiscExtensions__HexColor(pSVar19,(MethodInfo *)0x0);
                    in_R8B = 3;
                    in_R9 = (long *)0x0;
                    pUVar18 = UI_ElementFactory__CreateTMPLabel
                                        (pUVar30,(UI_ElementStyle_o *)__this_02,pSVar19,0,3,(MethodInfo *)0x0)
                    ;
                    ppUVar2 = &(__this->fields)._namePreviewTMP;
                    (__this->fields)._namePreviewTMP = pUVar18;
                    il2cpp_runtime_helper_022b4080(ppUVar2);
                    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._namePreviewTMP;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar44 = (System_String_array *)0x0;
                    bVar13 = UnityEngine_Object__op_Inequality
                                       (pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar13 == '\0') {
label_043fcf04:
                      UI_EditProfileProfilePanel__RefreshPreviews(__this,(MethodInfo *)pSVar44);
                      pSVar44 = (System_String_array *)(__this->fields).SinglePanel;
                      UI_BasePanel__CreateHorizontalDivider
                                ((UI_BasePanel_o *)__this,(UnityEngine_Transform_o *)pSVar44,1.0,
                                 (MethodInfo *)0x0);
                      if (*ppSVar42 != (Settings_ProfileSettings_o *)0x0) {
                        pUVar30 = (__this->fields).SinglePanel;
                        pSVar8 = ((*ppSVar42)->fields).Name;
                        if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar19 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
                        pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar22 = "";
                        onCleanup = *(System_Func_string__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
                        if (onCleanup == (System_Func_string__string__o *)0x0) {
                          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          onCleanup = (System_Func_string__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
                          System_Func_object__object____ctor();
                          lVar31 = *(long *)(TypeInfo_c + 0xb8);
                          *(System_Func_string__string__o **)(lVar31 + 8) = onCleanup;
                          il2cpp_runtime_helper_022b4080(lVar31 + 8,onCleanup);
                        }
                        in_R9 = (long *)0x0;
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar30,(UI_ElementStyle_o *)__this_02,(Settings_BaseSetting_o *)pSVar8,
                                   pSVar19,pSVar22,260.0,40.0,0,pUVar21,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   onCleanup,(MethodInfo *)0x0);
                        in_R8B = (byte)pSVar22;
                        bVar13 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess
                                           ((MethodInfo *)0x0);
                        if ((char)bVar13 == '\0') {
label_043fd193:
                          pSVar44 = (System_String_array *)(__this->fields).SinglePanel;
                          UI_BasePanel__CreateHorizontalDivider
                                    ((UI_BasePanel_o *)__this,(UnityEngine_Transform_o *)pSVar44,1.0,
                                     (MethodInfo *)0x0);
                          if (*ppSVar42 != (Settings_ProfileSettings_o *)0x0) {
                            pUVar30 = (__this->fields).SinglePanel;
                            pSVar8 = ((*ppSVar42)->fields).Guild;
                            if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSVar22 = UI_UIManager__GetLocaleCommon("Guild",(MethodInfo *)0x0);
                            pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            in_R9 = (long *)0x0;
                            pSVar19 = "";
                            UI_ElementFactory__CreateInputSetting
                                      (pUVar30,(UI_ElementStyle_o *)__this_02,(Settings_BaseSetting_o *)pSVar8
                                       ,pSVar22,"",260.0,40.0,0,pUVar21,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                                       ,(MethodInfo *)0x0);
                            in_R8B = (byte)pSVar19;
                            if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            source = PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites
                                               ((Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
                            bVar13 = System_Linq_Enumerable__Any_RoleSpriteDefinition_
                                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                                MethodInfo_Boolean_Any_RoleSpriteDefinition);
                            if ((char)bVar13 != '\0') {
                              method_08 = (MethodInfo *)0x3;
                              in_R9 = (long *)0x0;
                              UI_ElementFactory__CreateDefaultLabel
                                        ((__this->fields).SinglePanel,(UI_ElementStyle_o *)__this_02,
                                         "Guild Role Sprite",0,3,(MethodInfo *)0x0);
                              UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton
                                        (__this,(__this->fields).SinglePanel,(UI_ElementStyle_o *)__this_02,
                                         *ppSVar42,method_08);
                              in_R8B = (byte)method_08;
                            }
                            bVar13 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess
                                               ((MethodInfo *)0x0);
                            if ((char)bVar13 == '\0') {
label_043fd3cb:
                              pSVar44 = (System_String_array *)(__this->fields).SinglePanel;
                              UI_BasePanel__CreateHorizontalDivider
                                        ((UI_BasePanel_o *)__this,(UnityEngine_Transform_o *)pSVar44,1.0,
                                         (MethodInfo *)0x0);
                              if (*ppSVar42 != (Settings_ProfileSettings_o *)0x0) {
                                pUVar30 = (__this->fields).SinglePanel;
                                pSVar36 = ((*ppSVar42)->fields).Social;
                                if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar22 = UI_UIManager__GetLocaleCommon("Social",(MethodInfo *)0x0);
                                in_R9 = (long *)0x0;
                                pSVar44 = __this_02;
                                pSVar19 = "";
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar30,(UI_ElementStyle_o *)__this_02,
                                           (Settings_BaseSetting_o *)pSVar36,pSVar22,"",260.0,40.0,0
                                           ,(UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                in_R8B = (byte)pSVar19;
                                if (*ppSVar42 != (Settings_ProfileSettings_o *)0x0) {
                                  pUVar30 = (__this->fields).SinglePanel;
                                  pSVar36 = ((*ppSVar42)->fields).About;
                                  pSVar22 = UI_UIManager__GetLocaleCommon("About",(MethodInfo *)0x0);
                                  in_R9 = (long *)0x1;
                                  pSVar19 = "";
                                  UI_ElementFactory__CreateInputSetting
                                            (pUVar30,(UI_ElementStyle_o *)__this_02,
                                             (Settings_BaseSetting_o *)pSVar36,pSVar22,"",260.0,
                                             120.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (System_Func_string__bool__o *)0x0,
                                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                  in_R8B = (byte)pSVar19;
                                  pUVar40 = __this;
                                  UI_BasePanel__CreateHorizontalDivider
                                            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                                             (MethodInfo *)0x0);
                                  pSVar19 = UI_EditProfileProfilePanel__GetDisplayDisplayName
                                                      (pUVar40,*ppSVar42,method_04);
                                  pSVar33 = *ppSVar42;
                                  pSVar22 = UI_EditProfileProfilePanel__GetDisplayUserId
                                                      (pUVar40,pSVar33,method_05);
                                  a = UI_EditProfileProfilePanel__GetDisplayPatreonTier
                                                (pUVar40,(MethodInfo *)pSVar33);
                                  pSVar44 = "None";
                                  bVar13 = System_String__op_Inequality
                                                     (a,(System_String_o *)"None",(MethodInfo *)0x0);
                                  if ((*ppSVar42 != (Settings_ProfileSettings_o *)0x0) &&
                                     (pSVar8 = ((*ppSVar42)->fields).Name,
                                     pSVar8 != (Settings_NameSetting_o *)0x0)) {
                                    pSVar23 = (pSVar8->fields)._value;
                                    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pSVar23 = Anticheat_ChatFilter__FilterBadWords(pSVar23,(MethodInfo *)0x0);
                                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pSVar23 = MiscExtensions__HexColor(pSVar23,(MethodInfo *)0x0);
                                    if ((char)bVar13 == '\0') {
                                      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pSVar23 = MiscExtensions__HexColor("No",(MethodInfo *)0x0);
                                    }
                                    else {
                                      pSVar23 = System_String__Concat_3af7150
                                                          ("Thank you, ",pSVar23," for being a supporter.",(MethodInfo *)0x0
                                                          );
                                    }
                                    pUVar30 = (__this->fields).SinglePanel;
                                    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pSVar19 = Anticheat_ChatFilter__FilterBadWords(pSVar19,(MethodInfo *)0x0);
                                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pSVar19 = MiscExtensions__HexColor(pSVar19,(MethodInfo *)0x0);
                                    pSVar19 = System_String__Concat_3ae5ba0
                                                        ("<b>Display Name: </b>",pSVar19,(MethodInfo *)0x0);
                                    UI_ElementFactory__CreateDefaultLabel
                                              (pUVar30,(UI_ElementStyle_o *)__this_02,pSVar19,0,3,
                                               (MethodInfo *)0x0);
                                    pUVar30 = (__this->fields).SinglePanel;
                                    pSVar19 = MiscExtensions__HexColor(pSVar22,(MethodInfo *)0x0);
                                    pSVar19 = System_String__Concat_3ae5ba0
                                                        ("<b>User ID: </b>",pSVar19,(MethodInfo *)0x0);
                                    UI_ElementFactory__CreateDefaultLabel
                                              (pUVar30,(UI_ElementStyle_o *)__this_02,pSVar19,0,3,
                                               (MethodInfo *)0x0);
                                    pUVar30 = (__this->fields).SinglePanel;
                                    pSVar19 = MiscExtensions__HexColor(a,(MethodInfo *)0x0);
                                    pSVar19 = System_String__Concat_3ae5ba0
                                                        ("<b>Patreon Tier: </b>",pSVar19,(MethodInfo *)0x0);
                                    UI_ElementFactory__CreateDefaultLabel
                                              (pUVar30,(UI_ElementStyle_o *)__this_02,pSVar19,0,3,
                                               (MethodInfo *)0x0);
                                    pUVar30 = (__this->fields).SinglePanel;
                                    pSVar19 = System_String__Concat_3ae5ba0
                                                        ("<b>Patreon Supporter: </b>",pSVar23,(MethodInfo *)0x0);
                                    UI_ElementFactory__CreateDefaultLabel
                                              (pUVar30,(UI_ElementStyle_o *)__this_02,pSVar19,0,3,
                                               (MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                            }
                            else {
                              pSVar44 = (System_String_array *)(__this->fields).SinglePanel;
                              UI_BasePanel__CreateHorizontalDivider
                                        ((UI_BasePanel_o *)__this,(UnityEngine_Transform_o *)pSVar44,1.0,
                                         (MethodInfo *)0x0);
                              if ((*ppSVar42 != (Settings_ProfileSettings_o *)0x0) &&
                                 (pSVar9 = ((*ppSVar42)->fields).GuildEffectEnabled,
                                 pSVar9 != (Settings_BoolSetting_o *)0x0)) {
                                pUVar30 = (__this->fields).SinglePanel;
                                bVar5 = *(byte *)((long)&(pSVar9->fields).DefaultValue + 1);
                                pSVar39 = (Settings_ProfileSettings_o *)(ulong)bVar5;
                                in_R9 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool);
                                System_Action_bool____ctor();
                                in_R8B = 0;
                                pSVar44 = (System_String_array *)
                                          UI_ElementFactory__CreateCollapsibleToggleSection
                                                    (pUVar30,(UI_ElementStyle_o *)__this_02,"Guild Effect  (Patreon)",
                                                     (uint)bVar5,0,(System_Action_bool__o *)in_R9,
                                                     (MethodInfo *)0x0);
                                (__this->fields)._guildEffectSection =
                                     (UI_CollapsibleToggleSection_o *)pSVar44;
                                il2cpp_runtime_helper_022b4080(&(__this->fields)._guildEffectSection);
                                pSVar33 = (__this_01->fields).settings;
                                if (pSVar33 != (Settings_ProfileSettings_o *)0x0) {
                                  in_R9 = (long *)(pSVar33->fields).GuildEffect;
                                  in_R8B = 0;
                                  UI_EditProfileProfilePanel__CreateEffectChildren
                                            (__this,(__this->fields).SinglePanel,
                                             (UI_ElementStyle_o *)__this_02,pSVar39,0,
                                             (Settings_StringSetting_o *)in_R9,
                                             (pSVar33->fields).GuildEffectColorA,
                                             (pSVar33->fields).GuildEffectColorB,
                                             (pSVar33->fields).GuildEffectColorC,
                                             (pSVar33->fields).GuildEffectColorD,
                                             (__this->fields)._guildEffectSection,method_09);
                                  goto label_043fd3cb;
                                }
                              }
                            }
                          }
                        }
                        else {
                          pSVar44 = (System_String_array *)(__this->fields).SinglePanel;
                          UI_BasePanel__CreateHorizontalDivider
                                    ((UI_BasePanel_o *)__this,(UnityEngine_Transform_o *)pSVar44,1.0,
                                     (MethodInfo *)0x0);
                          if ((*ppSVar42 != (Settings_ProfileSettings_o *)0x0) &&
                             (pSVar9 = ((*ppSVar42)->fields).NameEffectEnabled,
                             pSVar9 != (Settings_BoolSetting_o *)0x0)) {
                            pUVar30 = (__this->fields).SinglePanel;
                            bVar5 = *(byte *)((long)&(pSVar9->fields).DefaultValue + 1);
                            pSVar39 = (Settings_ProfileSettings_o *)(ulong)bVar5;
                            in_R9 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool);
                            System_Action_bool____ctor();
                            in_R8B = 0;
                            pSVar44 = (System_String_array *)
                                      UI_ElementFactory__CreateCollapsibleToggleSection
                                                (pUVar30,(UI_ElementStyle_o *)__this_02,"Name Effect  (Patreon)",
                                                 (uint)bVar5,0,(System_Action_bool__o *)in_R9,
                                                 (MethodInfo *)0x0);
                            (__this->fields)._nameEffectSection = (UI_CollapsibleToggleSection_o *)pSVar44;
                            il2cpp_runtime_helper_022b4080(&(__this->fields)._nameEffectSection);
                            pSVar33 = (__this_01->fields).settings;
                            if (pSVar33 != (Settings_ProfileSettings_o *)0x0) {
                              in_R9 = (long *)(pSVar33->fields).NameEffect;
                              in_R8B = 1;
                              UI_EditProfileProfilePanel__CreateEffectChildren
                                        (__this,(__this->fields).SinglePanel,(UI_ElementStyle_o *)__this_02,
                                         pSVar39,1,(Settings_StringSetting_o *)in_R9,
                                         (pSVar33->fields).NameEffectColorA,(pSVar33->fields).NameEffectColorB
                                         ,(pSVar33->fields).NameEffectColorC,
                                         (pSVar33->fields).NameEffectColorD,
                                         (__this->fields)._nameEffectSection,method_09);
                              goto label_043fd193;
                            }
                          }
                        }
                      }
                    }
                    else if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                      pSVar20 = (System_String_array *)
                                UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar44 = (System_String_array *)0x0;
                      bVar13 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pSVar20,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((char)bVar13 != '\0') {
                        if (pSVar20 == (System_String_array *)0x0) goto label_043fd6f8;
                        pSVar44 = pSVar20;
                        TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pSVar20,1,(MethodInfo *)0x0);
                        UI_EditProfileProfilePanel__ApplyChatFont
                                  ((UI_EditProfileProfilePanel_o *)pSVar44,(TMPro_TextMeshProUGUI_o *)pSVar20,
                                   method_03);
                        pSVar44 = pSVar20;
                      }
                      if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                        pSVar44 = (System_String_array *)
                                  UnityEngine_GameObject__AddComponent_object_(*ppUVar2,MethodInfo_NameEffectController_AddComponent_NameEffectController);
                        (__this->fields)._namePreviewEffect = (PatreonEffects_NameEffectController_o *)pSVar44
                        ;
                        il2cpp_runtime_helper_022b4080(&(__this->fields)._namePreviewEffect);
                        pPVar47 = (__this->fields)._namePreviewEffect;
                        if (pPVar47 != (PatreonEffects_NameEffectController_o *)0x0) {
                          pSVar44 = (System_String_array *)0x0;
                          PatreonEffects_NameEffectController__AutoConfigure(pPVar47,(MethodInfo *)0x0);
                          goto label_043fcf04;
                        }
                      }
                    }
                  }
                }
                else if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                  pSVar20 = (System_String_array *)
                            UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar44 = (System_String_array *)0x0;
                  bVar13 = UnityEngine_Object__op_Inequality
                                     ((UnityEngine_Object_o *)pSVar20,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar13 != '\0') {
                    if (pSVar20 == (System_String_array *)0x0) goto label_043fd6f8;
                    pSVar44 = pSVar20;
                    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pSVar20,1,(MethodInfo *)0x0);
                    UI_EditProfileProfilePanel__ApplyChatFont
                              ((UI_EditProfileProfilePanel_o *)pSVar44,(TMPro_TextMeshProUGUI_o *)pSVar20,
                               method_02);
                    pSVar44 = pSVar20;
                  }
                  if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    pSVar44 = (System_String_array *)
                              UnityEngine_GameObject__AddComponent_object_(*ppUVar2,MethodInfo_NameEffectController_AddComponent_NameEffectController);
                    (__this->fields)._guildPreviewEffect = (PatreonEffects_NameEffectController_o *)pSVar44;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._guildPreviewEffect);
                    pPVar47 = (__this->fields)._guildPreviewEffect;
                    if (pPVar47 != (PatreonEffects_NameEffectController_o *)0x0) {
                      pSVar44 = (System_String_array *)0x0;
                      PatreonEffects_NameEffectController__AutoConfigure(pPVar47,(MethodInfo *)0x0);
                      goto label_043fcdab;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (pUVar16 != (UnityEngine_Object_o *)0x0) {
        pUVar17 = (UnityEngine_Object_o *)pUVar16[2].fields.m_CachedPtr;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar44 = (System_String_array *)0x0;
        bVar13 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_043fca61;
        pUVar7 = (UnityEngine_Component_o *)pUVar16[2].fields.m_CachedPtr;
        if (pUVar7 != (UnityEngine_Component_o *)0x0) {
          pUVar17 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_RectMask2D_GetComponent_RectMask2D);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar44 = (System_String_array *)0x0;
          bVar13 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') goto label_043fca61;
          pUVar7 = (UnityEngine_Component_o *)pUVar16[2].fields.m_CachedPtr;
          if (pUVar7 != (UnityEngine_Component_o *)0x0) {
            pSVar44 = (System_String_array *)0x0;
            pUVar18 = UnityEngine_Component__get_gameObject(pUVar7,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_RectMask2D_AddComponent_RectMask2D);
              goto label_043fca61;
            }
          }
        }
      }
    }
  }
label_043fd6f8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae575 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"/Icons/Profile/");
    g_data_057ae575 = '\x01';
  }
  __this_03 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pPVar47 = __this_03;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
  if (pSVar44 != (System_String_array *)0x0) {
    iVar14 = (int)pSVar44->max_length;
    if (__this_03 != (PatreonEffects_NameEffectController_o *)0x0) {
      if (iVar14 < 1) {
label_043fd8a1:
        System_Collections_Generic_List_object___ToArray
                  ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_String_ToArray);
        return;
      }
      uVar41 = 0;
      if ((pSVar44->max_length & 0xffffffff) != 0) {
        do {
          pSVar19 = pSVar44->m_Items[uVar41];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pPVar47 = (PatreonEffects_NameEffectController_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          in_R8B = 0;
          pSVar19 = System_String__Concat_3af7470
                              ((System_String_o *)pPVar47,"/Icons/Profile/",pSVar19,"Icon",(MethodInfo *)0x0)
          ;
          lVar46 = MethodInfo_Void_Add;
          piVar3 = (int *)((long)&(__this_03->fields).m_CancellationTokenSource + 4);
          *piVar3 = *piVar3 + 1;
          lVar31 = (__this_03->fields).m_CachedPtr;
          if (lVar31 == 0) goto label_043fd914;
          uVar15 = *(uint *)&(__this_03->fields).m_CancellationTokenSource;
          if (uVar15 < *(uint *)(lVar31 + 0x18)) {
            *(uint *)&(__this_03->fields).m_CancellationTokenSource = uVar15 + 1;
            pPVar47 = (PatreonEffects_NameEffectController_o *)(lVar31 + (long)(int)uVar15 * 8 + 0x20);
            *(System_String_o **)(lVar31 + 0x20 + (long)(int)uVar15 * 8) = pSVar19;
            il2cpp_runtime_helper_022b4080(pPVar47,pSVar19);
          }
          else {
            pPVar47 = __this_03;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar19,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar46 + 0x20) + 0xc0) + 0x70));
          }
          uVar41 = uVar41 + 1;
          uVar15 = (uint)pSVar44->max_length;
          if ((long)(int)uVar15 <= (long)uVar41) goto label_043fd8a1;
        } while (uVar41 < uVar15);
      }
      iVar14 = il2cpp_runtime_helper_022b2ca0();
    }
    if (0 < iVar14) {
      pSVar19 = pSVar44->m_Items[0];
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar47 = (PatreonEffects_NameEffectController_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      in_R8B = 0;
      System_String__Concat_3af7470
                ((System_String_o *)pPVar47,"/Icons/Profile/",pSVar19,"Icon",(MethodInfo *)0x0);
    }
  }
label_043fd914:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae574 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    g_data_057ae574 = '\x01';
  }
  pSVar19 = (System_String_o *)
            (*(((System_String_c *)pPVar47->klass)->vtable)._4_CompareTo.methodPtr)
                      (pPVar47,(((System_String_c *)pPVar47->klass)->vtable)._4_CompareTo.method);
  pUVar24 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pUVar40 = (UI_EditProfileProfilePanel_o *)0x0;
  UI_ElementStyle___ctor(pUVar24,0x18,100.0,20.0,pSVar19,(MethodInfo *)0x0);
  lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  pUVar16 = *(UnityEngine_Object_o **)&(pPVar47->fields).popGradientHooked;
  plVar43 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pbVar4 = &(pPVar47->fields).popGradientHooked;
  pTVar45 = (TMPro_TMP_Text_o *)0x0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    pUVar16 = *(UnityEngine_Object_o **)pbVar4;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar45 = (TMPro_TMP_Text_o *)0x0;
    UnityEngine_Object__Destroy_4e01c60(pUVar16,(MethodInfo *)0x0);
  }
  if ((lVar31 != 0) && (*(long *)(lVar31 + 0x20) != 0)) {
    pUVar30 = *(UnityEngine_Transform_o **)&(pPVar47->fields).cleared;
    pSVar19 = *(System_String_o **)(*(long *)(lVar31 + 0x20) + 0x18);
    if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar19 = UI_UIManager__GetProfileIcon(pSVar19,(MethodInfo *)0x0);
    pSVar19 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar19,(MethodInfo *)0x0);
    pUVar18 = UI_ElementFactory__CreateRawImage(pUVar30,pUVar24,pSVar19,256.0,256.0,(MethodInfo *)0x0);
    *(UnityEngine_GameObject_o **)pbVar4 = pUVar18;
    il2cpp_runtime_helper_022b4080(pbVar4,pUVar18);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_09 = pTVar45;
  if (g_data_057ae578 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae578 = '\x01';
  }
  if ((pTVar45 != (TMPro_TMP_Text_o *)0x0) &&
     (lVar46 = *(long *)&(pTVar45->fields).m_SkipLayoutUpdate, lVar46 != 0)) {
    pSVar19 = *(System_String_o **)(lVar46 + 0x18);
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar19 = Anticheat_ChatFilter__FilterBadWords(pSVar19,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_09 = (TMPro_TMP_Text_o *)0x0;
    pSVar19 = MiscExtensions__HexColor(pSVar19,(MethodInfo *)0x0);
    lVar46 = *(long *)&(pTVar45->fields).m_RaycastTarget;
    if (lVar46 != 0) {
      pSVar22 = *(System_String_o **)(lVar46 + 0x18);
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                ((Photon_Realtime_Player_o *)0x0,pSVar19,pSVar22,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae579 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae579 = '\x01';
  }
  tmpObj = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_09,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  pTVar25 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar29 = (System_Type_array *)0x0;
  pTVar48 = pTVar25;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
label_043fdc8f:
    pTVar25 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar29 = (System_Type_array *)0x0;
    pTVar48 = pTVar25;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if (__this_09 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_spriteAsset(__this_09,(TMPro_TMP_SpriteAsset_o *)pTVar25,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_09 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_font(__this_09,pTVar25,(MethodInfo *)0x0);
    goto label_043fdc8f;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae572 == '\0') {
    plStack_198 = (long *)0x43fdd14;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    plStack_198 = (long *)0x43fdd20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    plStack_198 = (long *)0x43fdd2c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae572 = '\x01';
  }
  pSVar49 = *(System_Type_array **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  __this_10 = (UI_EditProfileProfilePanel_o *)0x0;
  plStack_198 = (long *)0x43fdd4f;
  uVar15 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (pSVar49 != (System_Type_array *)0x0) {
    plVar43 = (long *)(ulong)uVar15;
    if ((Settings_NameSetting_o *)pSVar49->m_Items[2] != (Settings_NameSetting_o *)0x0) {
      pSVar29 = *(System_Type_array **)&(pTVar48->fields).m_FaceInfo.fields.m_SuperscriptSize;
      pUVar40 = (UI_EditProfileProfilePanel_o *)
                (((Settings_NameSetting_o *)pSVar49->m_Items[2])->fields)._value;
      if ((char)uVar15 == '\0') {
        in_R8B = false;
      }
      else {
        if ((Settings_BoolSetting_o *)pSVar49->m_Items[0xc] == (Settings_BoolSetting_o *)0x0)
        goto label_043fde43;
        in_R8B = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar49->m_Items[0xc])->fields).DefaultValue + 1
                          ) != '\0';
      }
      in_stack_fffffffffffffe80 = (Settings_StringSetting_o *)pSVar49->m_Items[0x10];
      in_stack_fffffffffffffe88 = (Settings_NameSetting_o *)pSVar49->m_Items[0x11];
      in_stack_fffffffffffffe78 = (Settings_StringSetting_o *)pSVar49->m_Items[0xf];
      in_R9 = (long *)pSVar49->m_Items[0xd];
      in_stack_fffffffffffffe90 = 1;
      plStack_198 = (long *)0x43fddc8;
      UI_EditProfileProfilePanel__RefreshSinglePreview
                (__this_10,(UnityEngine_GameObject_o *)pSVar29,
                 *(PatreonEffects_NameEffectController_o **)
                  &(pTVar48->fields).m_FaceInfo.fields.m_SubscriptSize,(System_String_o *)pUVar40,(uint)in_R8B
                 ,(Settings_StringSetting_o *)in_R9,(Settings_ColorSetting_o *)pSVar49->m_Items[0xe],
                 (Settings_ColorSetting_o *)in_stack_fffffffffffffe78,
                 (Settings_ColorSetting_o *)in_stack_fffffffffffffe80,
                 (Settings_ColorSetting_o *)in_stack_fffffffffffffe88,1,
                 (MethodInfo *)in_stack_fffffffffffffe98);
      tmpObj = *(long **)&(pTVar48->fields).m_FaceInfo.fields.m_AscentLine;
      pPVar47 = *(PatreonEffects_NameEffectController_o **)&(pTVar48->fields).m_FaceInfo.fields.m_MeanLine;
      plStack_198 = (long *)0x43fdddb;
      pSVar29 = pSVar49;
      pSVar19 = UI_EditProfileProfilePanel__GetGuildPreviewText
                          (__this_10,(Settings_ProfileSettings_o *)pSVar49,method_06);
      if ((char)uVar15 == '\0') {
        bVar52 = false;
label_043fddf7:
        plStack_198 = (long *)0x43fde2f;
        UI_EditProfileProfilePanel__RefreshSinglePreview
                  (__this_10,(UnityEngine_GameObject_o *)tmpObj,pPVar47,pSVar19,(uint)bVar52,
                   (Settings_StringSetting_o *)pSVar49->m_Items[0x13],
                   (Settings_ColorSetting_o *)pSVar49->m_Items[0x14],
                   (Settings_ColorSetting_o *)pSVar49->m_Items[0x15],
                   (Settings_ColorSetting_o *)pSVar49->m_Items[0x16],
                   (Settings_ColorSetting_o *)pSVar49->m_Items[0x17],0,(MethodInfo *)in_stack_fffffffffffffe98
                  );
        if (g_data_057ae577 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
          g_data_057ae577 = '\x01';
        }
        __this_11 = *(UI_CategoryPanel_o **)&(pTVar48->fields).m_FaceInfo.fields.m_DescentLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar13 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)__this_11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return;
        }
        lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
        if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x40), lVar31 != 0)) {
          plVar43 = *(long **)&(pTVar48->fields).m_FaceInfo.fields.m_DescentLine;
          __this_11 = *(UI_CategoryPanel_o **)(lVar31 + 0x18);
          if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar19 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                              ((System_String_o *)__this_11,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0)
          ;
          if (plVar43 != (long *)0x0) {
            lVar31 = *plVar43;
            (**(code **)(lVar31 + 0x558))
                      (plVar43,pSVar19,*(undefined8 *)(lVar31 + 0x560),lVar31,*(code **)(lVar31 + 0x558));
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        UI_CategoryPanel___ctor(__this_11,(MethodInfo *)0x0);
        return;
      }
      pUVar40 = (UI_EditProfileProfilePanel_o *)0x0;
      if ((Settings_BoolSetting_o *)pSVar49->m_Items[0x12] != (Settings_BoolSetting_o *)0x0) {
        bVar52 = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar49->m_Items[0x12])->fields).DefaultValue +
                          1) != '\0';
        goto label_043fddf7;
      }
    }
  }
label_043fde43:
  plStack_198 = (long *)0x43fde48;
  il2cpp_runtime_helper_022b2c90();
  pSStack_1c0 = pSVar49;
  pPStack_1b8 = pPVar47;
  lStack_1b0 = lVar31;
  pTStack_1a8 = pTVar48;
  pUStack_1a0 = (UnityEngine_GameObject_o *)tmpObj;
  plStack_198 = plVar43;
  if (g_data_057ae56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Gradient Colors");
    il2cpp_runtime_helper_023445d0(&"Reset Colors");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Effect");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae56e = '\x01';
  }
  __this_04 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  parent_01 = (MethodInfo_255A0F0 *)0x0;
  pSVar49 = __this_04;
  UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor
            ((UI_EditProfileProfilePanel___c__DisplayClass22_0_o *)__this_04,(MethodInfo *)0x0);
  if (__this_04 != (System_Type_array *)0x0) {
    ((Settings_ProfileSettings_Fields *)&__this_04->bounds)->Settings =
         (System_Collections_Specialized_OrderedDictionary_o *)__this_10;
    il2cpp_runtime_helper_022b4080((Settings_ProfileSettings_Fields *)&__this_04->bounds);
    __this_04->max_length = (il2cpp_array_size_t)in_R9;
    il2cpp_runtime_helper_022b4080(&__this_04->max_length,in_R9);
    ppSStack_1c8 = (Settings_StringSetting_o **)__this_04->m_Items;
    __this_04->m_Items[0] = (System_Type_o *)in_stack_fffffffffffffe78;
    il2cpp_runtime_helper_022b4080(ppSStack_1c8,in_stack_fffffffffffffe78);
    __this_04->m_Items[1] = (System_Type_o *)in_stack_fffffffffffffe80;
    il2cpp_runtime_helper_022b4080(__this_04->m_Items + 1,in_stack_fffffffffffffe80);
    __this_04->m_Items[2] = (System_Type_o *)in_stack_fffffffffffffe88;
    il2cpp_runtime_helper_022b4080(__this_04->m_Items + 2,in_stack_fffffffffffffe88);
    __this_04->m_Items[3] = (System_Type_o *)CONCAT44(uStack_16c,in_stack_fffffffffffffe90);
    il2cpp_runtime_helper_022b4080(__this_04->m_Items + 3,
                       (Settings_NameSetting_o *)CONCAT44(uStack_16c,in_stack_fffffffffffffe90));
    *(byte *)(__this_04->m_Items + 4) = in_R8B;
    in_R9 = (long *)__this_04->max_length;
    if (*(int *)(TypeInfo_EditProfileProfilePanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar44 = (System_String_array *)**(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8);
    SStack_1d0.hasValue = 0;
    SStack_1d0.value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)&SStack_1d0,260.0,MethodInfo_Nullable_1_Single);
    pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar40 = "Effect";
    parent_01 = style;
    pSVar49 = pSVar29;
    pSVar26 = (System_Type_array *)
              UI_ElementFactory__CreateDropdownSetting
                        ((UnityEngine_Transform_o *)pSVar29,(UI_ElementStyle_o *)style,
                         (Settings_BaseSetting_o *)in_R9,(System_String_o *)"Effect",pSVar44,"",
                         180.0,40.0,200.0,(System_Nullable_float__o)SStack_1d0,pUVar21,(MethodInfo *)0x0);
    if (pSVar26 != (System_Type_array *)0x0) {
      parent_01 = MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme;
      pSVar49 = pSVar26;
      __this_12 = in_stack_fffffffffffffe98;
      pSVar27 = (System_Type_array *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar26,MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme)
      ;
      if (pSVar27 != (System_Type_array *)0x0) {
        parent_01 = (MethodInfo_255A0F0 *)0x0;
        UI_DropdownSettingElement__FixScale((UI_DropdownSettingElement_o *)pSVar27,(MethodInfo *)0x0);
        pSVar49 = pSVar27;
      }
      in_R9 = (long *)in_stack_fffffffffffffe98;
      if (in_stack_fffffffffffffe98 != (System_Type_array *)0x0) {
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_fffffffffffffe98,
                   (UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
        pUVar40 = (UI_EditProfileProfilePanel_o *)0x0;
        pUVar18 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pSVar29,(UI_ElementStyle_o *)style,"Gradient Colors",0,3,
                             (MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_fffffffffffffe98,pUVar18,(MethodInfo *)0x0);
        parent_01 = (MethodInfo_255A0F0 *)0x3;
        pSVar49 = pSVar29;
        pSVar26 = (System_Type_array *)
                  UI_ElementFactory__CreateHorizontalGroup
                            ((UnityEngine_Transform_o *)pSVar29,10.0,3,(MethodInfo *)0x0);
        if (pSVar26 != (System_Type_array *)0x0) {
          cVar6 = *(char *)(__this_04->m_Items + 4);
          parent_01 = (MethodInfo_255A0F0 *)0x0;
          in_R9 = (long *)UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
          pSVar36 = *ppSStack_1c8;
          if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar31 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
          pSVar49 = TypeInfo_UIManager;
          if (lVar31 != 0) {
            pUVar10 = *(UI_ColorPickPopup_o **)(lVar31 + 0x48);
            pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pSVar49 = (System_Type_array *)in_R9;
            if (cVar6 == '\0') {
              UnityEngine_Events_UnityAction___ctor();
              pUVar40 = "A";
              parent_01 = style;
              pUVar18 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar36,(System_String_o *)"A",pUVar10,
                                   "",60.0,30.0,pUVar21,(MethodInfo *)0x0);
              if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                pUVar28 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_10->fields)._guildColorA = pUVar28;
                pUVar40 = __this_10;
                il2cpp_runtime_helper_022b4080(&(__this_10->fields)._guildColorA);
                parent_01 = (MethodInfo_255A0F0 *)0x0;
                pSVar49 = pSVar26;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                lVar31 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar31 != 0) {
                  pSVar36 = (Settings_StringSetting_o *)__this_04->m_Items[1];
                  pUVar10 = *(UI_ColorPickPopup_o **)(lVar31 + 0x48);
                  pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  pUVar40 = "B";
                  parent_01 = style;
                  pSVar49 = (System_Type_array *)in_R9;
                  pUVar18 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar36,(System_String_o *)"B",
                                       pUVar10,"",60.0,30.0,pUVar21,(MethodInfo *)0x0);
                  if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar28 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_10->fields)._guildColorB = pUVar28;
                    pUVar40 = __this_10;
                    il2cpp_runtime_helper_022b4080(&(__this_10->fields)._guildColorB);
                    parent_01 = (MethodInfo_255A0F0 *)0x0;
                    pSVar49 = pSVar26;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                    lVar31 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar31 != 0) {
                      pSVar8 = (Settings_NameSetting_o *)__this_04->m_Items[2];
                      pUVar10 = *(UI_ColorPickPopup_o **)(lVar31 + 0x48);
                      pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      pUVar40 = "C";
                      parent_01 = style;
                      pSVar49 = (System_Type_array *)in_R9;
                      pUVar18 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar8,(System_String_o *)"C",
                                           pUVar10,"",60.0,30.0,pUVar21,(MethodInfo *)0x0);
                      if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar28 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_10->fields)._guildColorC = pUVar28;
                        pUVar40 = __this_10;
                        il2cpp_runtime_helper_022b4080(&(__this_10->fields)._guildColorC);
                        parent_01 = (MethodInfo_255A0F0 *)0x0;
                        pSVar49 = pSVar26;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                        lVar31 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar31 != 0) {
                          pSVar8 = (Settings_NameSetting_o *)__this_04->m_Items[3];
                          pUVar10 = *(UI_ColorPickPopup_o **)(lVar31 + 0x48);
                          pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          pUVar40 = "D";
                          parent_01 = style;
                          pSVar49 = (System_Type_array *)in_R9;
                          pUVar18 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar8,
                                               (System_String_o *)"D",pUVar10,"",60.0,30.0,
                                               pUVar21,(MethodInfo *)0x0);
                          if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar28 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar50 = &(__this_10->fields)._guildColorD;
                            goto label_043fe805;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              UnityEngine_Events_UnityAction___ctor();
              pUVar40 = "A";
              parent_01 = style;
              pUVar18 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar36,(System_String_o *)"A",pUVar10,
                                   "",60.0,30.0,pUVar21,(MethodInfo *)0x0);
              if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                pUVar28 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_10->fields)._nameColorA = pUVar28;
                pUVar40 = __this_10;
                il2cpp_runtime_helper_022b4080(&(__this_10->fields)._nameColorA);
                parent_01 = (MethodInfo_255A0F0 *)0x0;
                pSVar49 = pSVar26;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                lVar31 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar31 != 0) {
                  pSVar36 = (Settings_StringSetting_o *)__this_04->m_Items[1];
                  pUVar10 = *(UI_ColorPickPopup_o **)(lVar31 + 0x48);
                  pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  pUVar40 = "B";
                  parent_01 = style;
                  pSVar49 = (System_Type_array *)in_R9;
                  pUVar18 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar36,(System_String_o *)"B",
                                       pUVar10,"",60.0,30.0,pUVar21,(MethodInfo *)0x0);
                  if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar28 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_10->fields)._nameColorB = pUVar28;
                    pUVar40 = __this_10;
                    il2cpp_runtime_helper_022b4080(&(__this_10->fields)._nameColorB);
                    parent_01 = (MethodInfo_255A0F0 *)0x0;
                    pSVar49 = pSVar26;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                    lVar31 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar31 != 0) {
                      pSVar8 = (Settings_NameSetting_o *)__this_04->m_Items[2];
                      pUVar10 = *(UI_ColorPickPopup_o **)(lVar31 + 0x48);
                      pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      pUVar40 = "C";
                      parent_01 = style;
                      pSVar49 = (System_Type_array *)in_R9;
                      pUVar18 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar8,(System_String_o *)"C",
                                           pUVar10,"",60.0,30.0,pUVar21,(MethodInfo *)0x0);
                      if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar28 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_10->fields)._nameColorC = pUVar28;
                        pUVar40 = __this_10;
                        il2cpp_runtime_helper_022b4080(&(__this_10->fields)._nameColorC);
                        parent_01 = (MethodInfo_255A0F0 *)0x0;
                        pSVar49 = pSVar26;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                        lVar31 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar31 != 0) {
                          pSVar8 = (Settings_NameSetting_o *)__this_04->m_Items[3];
                          pUVar10 = *(UI_ColorPickPopup_o **)(lVar31 + 0x48);
                          pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          pUVar40 = "D";
                          parent_01 = style;
                          pSVar49 = (System_Type_array *)in_R9;
                          pUVar18 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar8,
                                               (System_String_o *)"D",pUVar10,"",60.0,30.0,
                                               pUVar21,(MethodInfo *)0x0);
                          if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar28 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar50 = &(__this_10->fields)._nameColorD;
label_043fe805:
                            *ppUVar50 = pUVar28;
                            pUVar40 = __this_10;
                            pSVar27 = __this_12;
                            il2cpp_runtime_helper_022b4080(ppUVar50,pUVar28);
                            UI_CollapsibleToggleSection__AddChild
                                      ((UI_CollapsibleToggleSection_o *)__this_12,
                                       (UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                            pSVar29 = (System_Type_array *)
                                      UI_ElementFactory__CreateHorizontalGroup
                                                ((UnityEngine_Transform_o *)pSVar29,8.0,3,(MethodInfo *)0x0);
                            *(undefined1 *)(__this_04->m_Items + 10) = *(undefined1 *)(__this_04->m_Items + 4)
                            ;
                            __this_04->m_Items[5] = (System_Type_o *)__this_04->max_length;
                            il2cpp_runtime_helper_022b4080(__this_04->m_Items + 5);
                            __this_04->m_Items[6] = (System_Type_o *)__this_04->m_Items[0];
                            il2cpp_runtime_helper_022b4080(__this_04->m_Items + 6);
                            __this_04->m_Items[7] = (System_Type_o *)__this_04->m_Items[1];
                            il2cpp_runtime_helper_022b4080(__this_04->m_Items + 7);
                            __this_04->m_Items[8] = (System_Type_o *)__this_04->m_Items[2];
                            il2cpp_runtime_helper_022b4080(__this_04->m_Items + 8);
                            parent_01 = (MethodInfo_255A0F0 *)__this_04->m_Items[3];
                            pSVar49 = (System_Type_array *)(__this_04->m_Items + 9);
                            __this_04->m_Items[9] = (System_Type_o *)parent_01;
                            il2cpp_runtime_helper_022b4080();
                            if (pSVar29 != (System_Type_array *)0x0) {
                              parent_01 = (MethodInfo_255A0F0 *)0x0;
                              pSVar49 = pSVar29;
                              pUVar30 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar29,(MethodInfo *)0x0);
                              if (style != (MethodInfo_255A0F0 *)0x0) {
                                fontSize = *(int32_t *)
                                            &((Settings_NameSetting_Fields *)&style->invoker_method)->
                                             DefaultValue;
                                pSVar19 = (System_String_o *)
                                          (*(__this_10->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this_10,
                                                     (__this_10->klass->vtable)._4_get_ThemePanel.method);
                                pUVar24 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                UI_ElementStyle___ctor(pUVar24,fontSize,120.0,20.0,pSVar19,(MethodInfo *)0x0);
                                pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
                                ;
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateTextButton
                                          (pUVar30,pUVar24,"Reset Colors",0.0,pUVar21,(MethodInfo *)0x0);
                                UI_CollapsibleToggleSection__AddChild
                                          ((UI_CollapsibleToggleSection_o *)pSVar27,
                                           (UnityEngine_GameObject_o *)pSVar29,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae576 == '\0') {
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fe9c6;
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fe9d2;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fe9de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fe9ea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fe9f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea32;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea3e;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea4a;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea56;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea62;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateGuildRoleSpriteButton_b__0);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fea9e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feaaa;
    il2cpp_runtime_helper_023445d0(&"GuildRoleSpriteButton");
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feab6;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae576 = '\x01';
  }
  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feacc;
  __this_05 = (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fead9;
  UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(__this_05,(MethodInfo *)0x0);
  SVar32.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar49;
  pUVar18 = extraout_RDX;
  if (__this_05 == (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
label_043ff22f:
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff234;
    il2cpp_runtime_helper_022b2c90();
label_043ff234:
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff239;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    (__this_05->fields).settings = (Settings_ProfileSettings_o *)pUVar40;
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feaf9;
    il2cpp_runtime_helper_022b4080(&__this_05->fields,pUVar40);
    (__this_05->fields).__4__this = (UI_EditProfileProfilePanel_o *)pSVar49;
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feb12;
    il2cpp_runtime_helper_022b4080(&(__this_05->fields).__4__this,pSVar49);
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feb26;
    in_R9 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar32 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feb50;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feb5a;
    pSVar29 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar32,(MethodInfo *)0x0);
    if ((System_Type_array *)in_R9 == (System_Type_array *)0x0) goto label_043ff22f;
    SVar32.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar29;
    if (pSVar29 == (System_Type_array *)0x0) {
label_043feb83:
      if ((int)((System_Type_array *)in_R9)->max_length != 0) {
        ((System_Type_array *)in_R9)->m_Items[0] = (System_Type_o *)pSVar29;
        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feb9e;
        il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items);
        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43febaf;
        SVar32.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (SVar32.fields.value != 0) {
          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43febc6;
          lVar31 = il2cpp_runtime_helper_023051f0(SVar32.fields.value);
          if (lVar31 == 0) goto label_043ff239;
        }
        if (1 < (uint)((System_Type_array *)in_R9)->max_length) {
          ((System_Type_array *)in_R9)->m_Items[1] = (System_Type_o *)SVar32.fields.value;
          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43febea;
          il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 1);
          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43febfb;
          SVar32.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (SVar32.fields.value != 0) {
            pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fec12;
            lVar31 = il2cpp_runtime_helper_023051f0(SVar32.fields.value);
            if (lVar31 == 0) goto label_043ff239;
          }
          if (2 < (uint)((System_Type_array *)in_R9)->max_length) {
            ((System_Type_array *)in_R9)->m_Items[2] = (System_Type_o *)SVar32.fields.value;
            pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fec36;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 2);
            pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fec47;
            SVar32.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if (SVar32.fields.value != 0) {
              pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fec5e;
              lVar31 = il2cpp_runtime_helper_023051f0(SVar32.fields.value);
              if (lVar31 == 0) goto label_043ff239;
            }
            if (3 < (uint)((System_Type_array *)in_R9)->max_length) {
              ((System_Type_array *)in_R9)->m_Items[3] = (System_Type_o *)SVar32.fields.value;
              pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fec82;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 3);
              pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fec93;
              SVar32.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if (SVar32.fields.value != 0) {
                pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fecaa;
                lVar31 = il2cpp_runtime_helper_023051f0(SVar32.fields.value);
                if (lVar31 == 0) goto label_043ff239;
              }
              if (4 < (uint)((System_Type_array *)in_R9)->max_length) {
                ((System_Type_array *)in_R9)->m_Items[4] = (System_Type_o *)SVar32.fields.value;
                pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fecd6;
                il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 4,SVar32.fields.value);
                pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fece5;
                pUVar18 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fecff;
                UnityEngine_GameObject___ctor_4dfc440
                          (pUVar18,"GuildRoleSpriteButton",(System_Type_array *)in_R9,(MethodInfo *)0x0);
                SVar32.fields.value = (System_RuntimeTypeHandle_Fields)(intptr_t)&TypeInfo_GameObject;
                if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                  in_R9 = &TypeInfo_GameObject;
                  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fed15;
                  pUVar30 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                  if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
                    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fed2d;
                    UnityEngine_Transform__SetParent_4e09e30
                              (pUVar30,(UnityEngine_Transform_o *)parent_01,0,(MethodInfo *)0x0);
                    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fed3f;
                    pSVar33 = (Settings_ProfileSettings_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pSVar33 != (Settings_ProfileSettings_o *)0x0) {
                      pSVar51 = pSVar33->klass;
                      uVar37._0_4_ = pSVar51[1]._2.static_fields_size;
                      uVar37._4_4_ = pSVar51[1]._2.thread_static_fields_size;
                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fed66;
                      (**(code **)&pSVar51[1]._2.element_size)(0x43820000,pSVar33,uVar37);
                      pSVar51 = pSVar33->klass;
                      uVar11._0_2_ = pSVar51[1]._2.interfaces_count;
                      uVar11._2_2_ = pSVar51[1]._2.interface_offsets_count;
                      uVar11._4_1_ = pSVar51[1]._2.typeHierarchyDepth;
                      uVar11._5_1_ = pSVar51[1]._2.genericRecursionDepth;
                      uVar11._6_1_ = pSVar51[1]._2.rank;
                      uVar11._7_1_ = pSVar51[1]._2.minimumAlignment;
                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fed81;
                      (**(code **)&pSVar51[1]._2.field_count)(0x42200000,pSVar33,uVar11);
                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fed93;
                      pIVar34 = UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_Image_GetComponent_Image);
                      SVar32.fields.value =
                           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar33;
                      if (pIVar34 != (Il2CppObject *)0x0) {
                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fedbd;
                        (*pIVar34->klass->vtable[0x17].methodPtr)
                                  (0x3f800000,0x3f800000,pIVar34,pIVar34->klass->vtable[0x17].method);
                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fedcf;
                        __this_06 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_Button_GetComponent_Button);
                        if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fedea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if (__this_06 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fee9a;
                          value.fields.m_NormalColor.fields.b = 1.0;
                          value.fields.m_NormalColor.fields.a = 0.08;
                          value.fields.m_NormalColor.fields.r = 1.0;
                          value.fields.m_NormalColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.r = 1.0;
                          value.fields.m_HighlightedColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.b = 1.0;
                          value.fields.m_HighlightedColor.fields.a = 0.16;
                          value.fields.m_PressedColor.fields.r = 1.0;
                          value.fields.m_PressedColor.fields.g = 1.0;
                          value.fields.m_PressedColor.fields.b = 1.0;
                          value.fields.m_PressedColor.fields.a = 0.24;
                          value.fields.m_SelectedColor.fields.r = 1.0;
                          value.fields.m_SelectedColor.fields.g = 1.0;
                          value.fields.m_SelectedColor.fields.b = 1.0;
                          value.fields.m_SelectedColor.fields.a = 0.16;
                          value.fields.m_DisabledColor.fields.r = 1.0;
                          value.fields.m_DisabledColor.fields.g = 1.0;
                          value.fields.m_DisabledColor.fields.b = 1.0;
                          value.fields.m_DisabledColor.fields.a = 0.05;
                          value.fields.m_ColorMultiplier = 1.0;
                          value.fields.m_FadeDuration = 0.1;
                          UnityEngine_UI_Selectable__set_colors(__this_06,value,(MethodInfo *)0x0);
                          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feeae;
                          SVar32.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feebc;
                          pSVar35 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                          if (SVar32.fields.value != 0) {
                            if (pSVar35 != (System_Type_o *)0x0) {
                              pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feedc;
                              lVar31 = il2cpp_runtime_helper_023051f0(pSVar35);
                              if (lVar31 == 0) goto label_043ff239;
                            }
                            if ((int)((System_Type_array *)SVar32.fields.value)->max_length != 0) {
                              ((System_Type_array *)SVar32.fields.value)->m_Items[0] = pSVar35;
                              pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feeff;
                              il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar32.fields.value)->m_Items);
                              pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fef10;
                              pSVar35 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar35 != (System_Type_o *)0x0) {
                                pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fef27;
                                lVar31 = il2cpp_runtime_helper_023051f0(pSVar35);
                                if (lVar31 == 0) goto label_043ff239;
                              }
                              if (1 < (uint)((System_Type_array *)SVar32.fields.value)->max_length) {
                                ((System_Type_array *)SVar32.fields.value)->m_Items[1] = pSVar35;
                                pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fef4a;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar32.fields.value)->m_Items + 1);
                                pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fef5b;
                                pSVar35 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                if (pSVar35 != (System_Type_o *)0x0) {
                                  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fef72;
                                  lVar31 = il2cpp_runtime_helper_023051f0(pSVar35);
                                  if (lVar31 == 0) goto label_043ff239;
                                }
                                if (2 < (uint)((System_Type_array *)SVar32.fields.value)->max_length) {
                                  ((System_Type_array *)SVar32.fields.value)->m_Items[2] = pSVar35;
                                  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fef98;
                                  il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar32.fields.value)->m_Items + 2,
                                                     pSVar35);
                                  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fefa0;
                                  __this_07 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fefba;
                                  UnityEngine_GameObject___ctor_4dfc440
                                            (__this_07,"Text",(System_Type_array *)SVar32.fields.value,
                                             (MethodInfo *)0x0);
                                  if (__this_07 != (UnityEngine_GameObject_o *)0x0) {
                                    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fefcd;
                                    pUVar30 = UnityEngine_GameObject__get_transform
                                                        (__this_07,(MethodInfo *)0x0);
                                    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43fefda;
                                    parent_00 = UnityEngine_GameObject__get_transform
                                                          (pUVar18,(MethodInfo *)0x0);
                                    SVar32.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                    if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
                                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feff2;
                                      UnityEngine_Transform__SetParent_4e09e30
                                                (pUVar30,parent_00,0,(MethodInfo *)0x0);
                                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff004;
                                      __this_08 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_07,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (g_data_057a694c == '\0') {
                                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff021;
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                        g_data_057a694c = '\x01';
                                      }
                                      SVar32.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      pUVar18 = extraout_RDX;
                                      if (__this_08 != (UnityEngine_RectTransform_o *)0x0) {
                                        in_R9 = &TypeInfo_Vector2;
                                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff050;
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_08,
                                                   (UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                   (MethodInfo *)0x0);
                                        if (g_data_057a9c86 == '\0') {
                                          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff065;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a9c86 = '\x01';
                                        }
                                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff085;
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_08,
                                                   (UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff097;
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_08,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff0a9;
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_08,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff0bb;
                                        pSVar36 = (Settings_StringSetting_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_07,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                        SVar32.fields.value =
                                             (System_RuntimeTypeHandle_Fields)(pSVar49->m_Items + 0xd);
                                        pSVar49->m_Items[0xd] = (System_Type_o *)pSVar36;
                                        pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff0d9;
                                        il2cpp_runtime_helper_022b4080(SVar32.fields.value);
                                        if ((TMPro_TMP_Text_o *)pSVar49->m_Items[0xd] !=
                                            (TMPro_TMP_Text_o *)0x0) {
                                          pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff0f5;
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pSVar49->m_Items[0xd],1,
                                                     (MethodInfo *)0x0);
                                          if ((extraout_RDX != (UnityEngine_GameObject_o *)0x0) &&
                                             ((TMPro_TMP_Text_o *)
                                              ((Settings_ProfileSettings_o *)SVar32.fields.value)->klass !=
                                              (TMPro_TMP_Text_o *)0x0)) {
                                            pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff11a;
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)
                                                       ((Settings_ProfileSettings_o *)SVar32.fields.value)->
                                                       klass,(float)(int)(extraout_RDX->fields).m_CachedPtr,
                                                       (MethodInfo *)0x0);
                                            if ((TMPro_TMP_Text_o *)
                                                ((Settings_ProfileSettings_o *)SVar32.fields.value)->klass !=
                                                (TMPro_TMP_Text_o *)0x0) {
                                              pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff132;
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)
                                                         ((Settings_ProfileSettings_o *)SVar32.fields.value)->
                                                         klass,1,(MethodInfo *)0x0);
                                              if ((TMPro_TMP_Text_o *)
                                                  ((Settings_ProfileSettings_o *)SVar32.fields.value)->klass
                                                  != (TMPro_TMP_Text_o *)0x0) {
                                                pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff14a;
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)
                                                           ((Settings_ProfileSettings_o *)SVar32.fields.value)
                                                           ->klass,0x1001,(MethodInfo *)0x0);
                                                pSVar51 = ((Settings_ProfileSettings_o *)SVar32.fields.value)
                                                          ->klass;
                                                if (pSVar51 != (Settings_ProfileSettings_c *)0x0) {
                                                  pvVar12 = (pSVar51->_1).image;
                                                  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff170;
                                                  (**(code **)((long)pvVar12 + 0x2a8))
                                                            (0x3f800000,0x3f800000,pSVar51,
                                                             *(undefined8 *)((long)pvVar12 + 0x2b0));
                                                  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff178;
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            ((UI_EditProfileProfilePanel_o *)pSVar51,
                                                             (TMPro_TextMeshProUGUI_o *)
                                                             ((Settings_ProfileSettings_o *)
                                                             SVar32.fields.value)->klass,method_07);
                                                  pSVar33 = (__this_05->fields).settings;
                                                  if ((pSVar33 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar36 = (pSVar33->fields).GuildRoleSprite,
                                                     pSVar36 != (Settings_StringSetting_o *)0x0)) {
                                                    pSVar51 = ((Settings_ProfileSettings_o *)
                                                              SVar32.fields.value)->klass;
                                                    pSVar19 = (pSVar36->fields)._value;
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff1b5;
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff1c1;
                                                    pSVar19 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar19,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    SVar32.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                    if (pSVar51 != (Settings_ProfileSettings_c *)0x0) {
                                                      pvVar12 = (pSVar51->_1).image;
                                                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff1dc;
                                                      (**(code **)((long)pvVar12 + 0x558))
                                                                (pSVar51,pSVar19,
                                                                 *(undefined8 *)((long)pvVar12 + 0x560));
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_06->fields).m_CanvasGroupCache;
                                                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff1f2;
                                                      pUVar21 = (UnityEngine_Events_UnityAction_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff20c;
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      SVar32.fields.value = (System_RuntimeTypeHandle_Fields)0
                                                      ;
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,pUVar21,(MethodInfo *)0x0);
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
                                  goto label_043ff22f;
                                }
                              }
                            }
                            goto label_043ff234;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_043ff22f;
              }
            }
          }
        }
      }
      goto label_043ff234;
    }
    pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43feb7a;
    lVar31 = il2cpp_runtime_helper_023051f0(pSVar29);
    if (lVar31 != 0) goto label_043feb83;
  }
label_043ff239:
  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff23e;
  uVar37 = il2cpp_runtime_helper_0231b270();
  lVar31 = 0;
  pUStackY_2f8 = (UnityEngine_GameObject_o *)0x43ff248;
  il2cpp_runtime_helper_022b2b10(uVar37);
  pSStackY_308 = (System_Type_array *)SVar32.fields.value;
  pSStackY_300 = (System_Type_array *)in_R9;
  pUStackY_2f8 = pUVar18;
  if (g_data_057ae57b == '\0') {
    lStackY_310 = 0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    lStackY_310 = 0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    lStackY_310 = 0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStackY_310 = 0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    lStackY_310 = 0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    lStackY_310 = 0x43ff283;
    pPVar38 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar38 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_310 = 0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_310 = 0x43ff2a6;
    pPVar38 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    lStackY_310 = 0x43ff2ba;
    pSVar19 = (System_String_o *)PhotonExtensions__GetCustomProperty(pPVar38,"display_name",(MethodInfo *)0x0);
    plVar43 = (long *)(System_String_o *)0x0;
    if ((pSVar19 != (System_String_o *)0x0) &&
       (plVar43 = (long *)(System_String_o *)0x0, (Il2CppClass *)pSVar19->klass == g_data_057b9c00)) {
      plVar43 = (long *)pSVar19;
    }
    lVar46 = 0;
    lStackY_310 = 0x43ff2e0;
    bVar13 = System_String__IsNullOrEmpty((System_String_o *)plVar43,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_310 = 0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_310 = 0x43ff300;
    pPVar38 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar38 == (Photon_Realtime_Player_o *)0x0) goto label_043ff43e;
    lVar46 = 0;
    lStackY_310 = 0x43ff314;
    bVar13 = System_String__IsNullOrEmpty
                       (*(System_String_o **)&(pPVar38->fields)._HasRejoined_k__BackingField,(MethodInfo *)0x0
                       );
    if ((char)bVar13 != '\0') goto label_043ff3b5;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_310 = 0x43ff32d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_310 = 0x43ff334;
    pPVar38 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    lStackY_310 = 0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    lStackY_310 = 0x43ff3ac;
    pPVar38 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar38 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    plVar43 = &TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      lStackY_310 = 0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_310 = 0x43ff3d4;
    pSVar19 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    lStackY_310 = 0x43ff3de;
    bVar13 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        lStackY_310 = 0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return;
    }
    if (lVar31 == 0) {
      return;
    }
    if (*(long *)(lVar31 + 0x30) == 0) {
      return;
    }
    lVar46 = 0;
    lStackY_310 = 0x43ff3fb;
    bVar13 = System_String__IsNullOrEmpty
                       (*(System_String_o **)(*(long *)(lVar31 + 0x30) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    pPVar38 = *(Photon_Realtime_Player_o **)(lVar31 + 0x30);
  }
  if (pPVar38 != (Photon_Realtime_Player_o *)0x0) {
    return;
  }
label_043ff43e:
  lStackY_310 = 0x43ff443;
  uStackY_320 = il2cpp_runtime_helper_022b2c90();
  pSStackY_318 = (System_String_o *)plVar43;
  lStackY_310 = lVar31;
  if (g_data_057ae57a == '\0') {
    pcStackY_328 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStackY_328 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStackY_328 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStackY_328 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStackY_328 = (code *)0x43ff4aa;
  pSVar19 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStackY_328 = (code *)0x43ff4b4;
  bVar13 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStackY_328 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return;
  }
  if ((lVar46 == 0) || (*(long *)(lVar46 + 0x68) == 0)) {
    return;
  }
  pcStackY_328 = (code *)0x43ff4d1;
  bVar13 = System_String__IsNullOrEmpty
                     (*(System_String_o **)(*(long *)(lVar46 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  if (*(long *)(lVar46 + 0x68) == 0) {
    pcStackY_328 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
    il2cpp_runtime_helper_022b2c90();
    pcStackY_328 = (code *)&TypeInfo_AccountManager;
    if (g_data_057ae57c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae57c = '\x01';
    }
    pSStackY_330 = (System_String_o *)0x0;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar38 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar38 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar38 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar38 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar13 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar38,&pSStackY_330,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') {
        return;
      }
    }
    PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStackY_330,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.EditProfileProfilePanel$$CreateEffectChildren
// il2cpp: void UI_EditProfileProfilePanel__CreateEffectChildren (UI_EditProfileProfilePanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_ProfileSettings_o* settings, bool isName, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, UI_CollapsibleToggleSection_o* section, const MethodInfo* method);
// 0x43fde50

void UI_EditProfileProfilePanel__CreateEffectChildren
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               Settings_ProfileSettings_o *settings,bool_conflict isName,
               Settings_StringSetting_o *effectSetting,Settings_ColorSetting_o *colorA,
               Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD
               ,UI_CollapsibleToggleSection_o *section,MethodInfo *method)

{
  char cVar1;
  int32_t fontSize;
  System_String_array *options;
  UI_ColorPickPopup_o *pUVar2;
  Settings_ProfileSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar5;
  System_Type_array *pSVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  System_Type_array *pSVar8;
  System_Type_array *__this_01;
  UnityEngine_GameObject_o *pUVar9;
  long *plVar10;
  UI_ColorSettingElement_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  System_String_o *pSVar13;
  UI_ElementStyle_o *__this_02;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this_03;
  long lVar14;
  System_RuntimeTypeHandle_o SVar15;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  UnityEngine_UI_Selectable_o *__this_04;
  System_Type_o *pSVar18;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *__this_06;
  undefined8 uVar19;
  Photon_Realtime_Player_o *pPVar20;
  UnityEngine_GameObject_o *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo_255A0F0 *parent_01;
  long lVar21;
  System_Type_array *pSVar22;
  UI_ColorSettingElement_o **ppUVar23;
  UI_EditProfileProfilePanel_o *__this_07;
  System_String_o *pSStackY_1a0;
  code *pcStackY_198;
  undefined8 uStackY_190;
  System_String_o *pSStackY_188;
  long lStackY_180;
  System_Type_array *pSStackY_178;
  System_Type_array *pSStackY_170;
  UnityEngine_GameObject_o *pUStackY_168;
  System_Nullable_float__Fields local_40;
  System_Type_o **local_38;
  
  if (g_data_057ae56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Gradient Colors");
    il2cpp_runtime_helper_023445d0(&"Reset Colors");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Effect");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae56e = '\x01';
  }
  pSVar6 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  parent_01 = (MethodInfo_255A0F0 *)0x0;
  pSVar22 = pSVar6;
  UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor
            ((UI_EditProfileProfilePanel___c__DisplayClass22_0_o *)pSVar6,(MethodInfo *)0x0);
  plVar10 = (long *)effectSetting;
  if (pSVar6 != (System_Type_array *)0x0) {
    pSVar6->bounds = (Il2CppArrayBounds *)__this;
    il2cpp_runtime_helper_022b4080(&pSVar6->bounds);
    pSVar6->max_length = (il2cpp_array_size_t)effectSetting;
    il2cpp_runtime_helper_022b4080(&pSVar6->max_length,effectSetting);
    local_38 = pSVar6->m_Items;
    pSVar6->m_Items[0] = (System_Type_o *)colorA;
    il2cpp_runtime_helper_022b4080(local_38,colorA);
    pSVar6->m_Items[1] = (System_Type_o *)colorB;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1,colorB);
    pSVar6->m_Items[2] = (System_Type_o *)colorC;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 2,colorC);
    pSVar6->m_Items[3] = (System_Type_o *)colorD;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 3,colorD);
    *(char *)(pSVar6->m_Items + 4) = (char)isName;
    plVar10 = (long *)pSVar6->max_length;
    if (*(int *)(TypeInfo_EditProfileProfilePanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    options = (System_String_array *)**(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8);
    local_40.hasValue = 0;
    local_40.value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)&local_40,260.0,MethodInfo_Nullable_1_Single);
    pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    settings = (Settings_ProfileSettings_o *)"Effect";
    parent_01 = (MethodInfo_255A0F0 *)style;
    pSVar22 = (System_Type_array *)parent;
    pSVar8 = (System_Type_array *)
             UI_ElementFactory__CreateDropdownSetting
                       (parent,style,(Settings_BaseSetting_o *)plVar10,(System_String_o *)"Effect",options
                        ,"",180.0,40.0,200.0,(System_Nullable_float__o)local_40,pUVar7,
                        (MethodInfo *)0x0);
    if (pSVar8 != (System_Type_array *)0x0) {
      parent_01 = MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme;
      pSVar22 = pSVar8;
      __this_01 = (System_Type_array *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pSVar8,MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
      if (__this_01 != (System_Type_array *)0x0) {
        parent_01 = (MethodInfo_255A0F0 *)0x0;
        UI_DropdownSettingElement__FixScale((UI_DropdownSettingElement_o *)__this_01,(MethodInfo *)0x0);
        pSVar22 = __this_01;
      }
      plVar10 = (long *)section;
      if (section != (UI_CollapsibleToggleSection_o *)0x0) {
        UI_CollapsibleToggleSection__AddChild(section,(UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
        settings = (Settings_ProfileSettings_o *)0x0;
        pUVar9 = UI_ElementFactory__CreateDefaultLabel(parent,style,"Gradient Colors",0,3,(MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild(section,pUVar9,(MethodInfo *)0x0);
        parent_01 = (MethodInfo_255A0F0 *)0x3;
        pSVar22 = (System_Type_array *)parent;
        pSVar8 = (System_Type_array *)
                 UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,(MethodInfo *)0x0);
        if (pSVar8 != (System_Type_array *)0x0) {
          cVar1 = *(char *)(pSVar6->m_Items + 4);
          parent_01 = (MethodInfo_255A0F0 *)0x0;
          plVar10 = (long *)UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
          pSVar18 = *local_38;
          if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar14 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
          pSVar22 = TypeInfo_UIManager;
          if (lVar14 != 0) {
            pUVar2 = *(UI_ColorPickPopup_o **)(lVar14 + 0x48);
            pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pSVar22 = (System_Type_array *)plVar10;
            if (cVar1 == '\0') {
              UnityEngine_Events_UnityAction___ctor();
              settings = (Settings_ProfileSettings_o *)"A";
              parent_01 = (MethodInfo_255A0F0 *)style;
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 ((UnityEngine_Transform_o *)plVar10,style,(Settings_BaseSetting_o *)pSVar18,
                                  (System_String_o *)"A",pUVar2,"",60.0,30.0,pUVar7,
                                  (MethodInfo *)0x0);
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                pUVar11 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this->fields)._guildColorA = pUVar11;
                settings = (Settings_ProfileSettings_o *)__this;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._guildColorA);
                parent_01 = (MethodInfo_255A0F0 *)0x0;
                pSVar22 = pSVar8;
                plVar10 = (long *)UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
                lVar14 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar14 != 0) {
                  pSVar18 = pSVar6->m_Items[1];
                  pUVar2 = *(UI_ColorPickPopup_o **)(lVar14 + 0x48);
                  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  settings = (Settings_ProfileSettings_o *)"B";
                  parent_01 = (MethodInfo_255A0F0 *)style;
                  pSVar22 = (System_Type_array *)plVar10;
                  pUVar9 = UI_ElementFactory__CreateColorSetting
                                     ((UnityEngine_Transform_o *)plVar10,style,
                                      (Settings_BaseSetting_o *)pSVar18,(System_String_o *)"B",pUVar2
                                      ,"",60.0,30.0,pUVar7,(MethodInfo *)0x0);
                  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar11 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this->fields)._guildColorB = pUVar11;
                    settings = (Settings_ProfileSettings_o *)__this;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._guildColorB);
                    parent_01 = (MethodInfo_255A0F0 *)0x0;
                    pSVar22 = pSVar8;
                    plVar10 = (long *)UnityEngine_GameObject__get_transform
                                                ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
                    lVar14 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar14 != 0) {
                      pSVar18 = pSVar6->m_Items[2];
                      pUVar2 = *(UI_ColorPickPopup_o **)(lVar14 + 0x48);
                      pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      settings = (Settings_ProfileSettings_o *)"C";
                      parent_01 = (MethodInfo_255A0F0 *)style;
                      pSVar22 = (System_Type_array *)plVar10;
                      pUVar9 = UI_ElementFactory__CreateColorSetting
                                         ((UnityEngine_Transform_o *)plVar10,style,
                                          (Settings_BaseSetting_o *)pSVar18,(System_String_o *)"C",
                                          pUVar2,"",60.0,30.0,pUVar7,(MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar11 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this->fields)._guildColorC = pUVar11;
                        settings = (Settings_ProfileSettings_o *)__this;
                        il2cpp_runtime_helper_022b4080(&(__this->fields)._guildColorC);
                        parent_01 = (MethodInfo_255A0F0 *)0x0;
                        pSVar22 = pSVar8;
                        plVar10 = (long *)UnityEngine_GameObject__get_transform
                                                    ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
                        lVar14 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar14 != 0) {
                          pSVar18 = pSVar6->m_Items[3];
                          pUVar2 = *(UI_ColorPickPopup_o **)(lVar14 + 0x48);
                          pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          settings = (Settings_ProfileSettings_o *)"D";
                          parent_01 = (MethodInfo_255A0F0 *)style;
                          pSVar22 = (System_Type_array *)plVar10;
                          pUVar9 = UI_ElementFactory__CreateColorSetting
                                             ((UnityEngine_Transform_o *)plVar10,style,
                                              (Settings_BaseSetting_o *)pSVar18,
                                              (System_String_o *)"D",pUVar2,"",60.0,30.0,
                                              pUVar7,(MethodInfo *)0x0);
                          if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar11 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar23 = &(__this->fields)._guildColorD;
                            goto label_043fe805;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              UnityEngine_Events_UnityAction___ctor();
              settings = (Settings_ProfileSettings_o *)"A";
              parent_01 = (MethodInfo_255A0F0 *)style;
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 ((UnityEngine_Transform_o *)plVar10,style,(Settings_BaseSetting_o *)pSVar18,
                                  (System_String_o *)"A",pUVar2,"",60.0,30.0,pUVar7,
                                  (MethodInfo *)0x0);
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                pUVar11 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this->fields)._nameColorA = pUVar11;
                settings = (Settings_ProfileSettings_o *)__this;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._nameColorA);
                parent_01 = (MethodInfo_255A0F0 *)0x0;
                pSVar22 = pSVar8;
                plVar10 = (long *)UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
                lVar14 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar14 != 0) {
                  pSVar18 = pSVar6->m_Items[1];
                  pUVar2 = *(UI_ColorPickPopup_o **)(lVar14 + 0x48);
                  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  settings = (Settings_ProfileSettings_o *)"B";
                  parent_01 = (MethodInfo_255A0F0 *)style;
                  pSVar22 = (System_Type_array *)plVar10;
                  pUVar9 = UI_ElementFactory__CreateColorSetting
                                     ((UnityEngine_Transform_o *)plVar10,style,
                                      (Settings_BaseSetting_o *)pSVar18,(System_String_o *)"B",pUVar2
                                      ,"",60.0,30.0,pUVar7,(MethodInfo *)0x0);
                  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar11 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this->fields)._nameColorB = pUVar11;
                    settings = (Settings_ProfileSettings_o *)__this;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._nameColorB);
                    parent_01 = (MethodInfo_255A0F0 *)0x0;
                    pSVar22 = pSVar8;
                    plVar10 = (long *)UnityEngine_GameObject__get_transform
                                                ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
                    lVar14 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar14 != 0) {
                      pSVar18 = pSVar6->m_Items[2];
                      pUVar2 = *(UI_ColorPickPopup_o **)(lVar14 + 0x48);
                      pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      settings = (Settings_ProfileSettings_o *)"C";
                      parent_01 = (MethodInfo_255A0F0 *)style;
                      pSVar22 = (System_Type_array *)plVar10;
                      pUVar9 = UI_ElementFactory__CreateColorSetting
                                         ((UnityEngine_Transform_o *)plVar10,style,
                                          (Settings_BaseSetting_o *)pSVar18,(System_String_o *)"C",
                                          pUVar2,"",60.0,30.0,pUVar7,(MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar11 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this->fields)._nameColorC = pUVar11;
                        settings = (Settings_ProfileSettings_o *)__this;
                        il2cpp_runtime_helper_022b4080(&(__this->fields)._nameColorC);
                        parent_01 = (MethodInfo_255A0F0 *)0x0;
                        pSVar22 = pSVar8;
                        plVar10 = (long *)UnityEngine_GameObject__get_transform
                                                    ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
                        lVar14 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar14 != 0) {
                          pSVar18 = pSVar6->m_Items[3];
                          pUVar2 = *(UI_ColorPickPopup_o **)(lVar14 + 0x48);
                          pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          settings = (Settings_ProfileSettings_o *)"D";
                          parent_01 = (MethodInfo_255A0F0 *)style;
                          pSVar22 = (System_Type_array *)plVar10;
                          pUVar9 = UI_ElementFactory__CreateColorSetting
                                             ((UnityEngine_Transform_o *)plVar10,style,
                                              (Settings_BaseSetting_o *)pSVar18,
                                              (System_String_o *)"D",pUVar2,"",60.0,30.0,
                                              pUVar7,(MethodInfo *)0x0);
                          if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar11 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar23 = &(__this->fields)._nameColorD;
label_043fe805:
                            *ppUVar23 = pUVar11;
                            settings = (Settings_ProfileSettings_o *)__this;
                            il2cpp_runtime_helper_022b4080(ppUVar23,pUVar11);
                            UI_CollapsibleToggleSection__AddChild
                                      (section,(UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
                            pSVar8 = (System_Type_array *)
                                     UI_ElementFactory__CreateHorizontalGroup(parent,8.0,3,(MethodInfo *)0x0);
                            *(undefined1 *)(pSVar6->m_Items + 10) = *(undefined1 *)(pSVar6->m_Items + 4);
                            pSVar6->m_Items[5] = (System_Type_o *)pSVar6->max_length;
                            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 5);
                            pSVar6->m_Items[6] = pSVar6->m_Items[0];
                            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 6);
                            pSVar6->m_Items[7] = pSVar6->m_Items[1];
                            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 7);
                            pSVar6->m_Items[8] = pSVar6->m_Items[2];
                            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 8);
                            parent_01 = (MethodInfo_255A0F0 *)pSVar6->m_Items[3];
                            pSVar22 = (System_Type_array *)(pSVar6->m_Items + 9);
                            pSVar6->m_Items[9] = (System_Type_o *)parent_01;
                            il2cpp_runtime_helper_022b4080();
                            if (pSVar8 != (System_Type_array *)0x0) {
                              parent_01 = (MethodInfo_255A0F0 *)0x0;
                              pSVar22 = pSVar8;
                              pUVar12 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
                              if (style != (UI_ElementStyle_o *)0x0) {
                                fontSize = (style->fields).FontSize;
                                pSVar13 = (System_String_o *)
                                          (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                                __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                UI_ElementStyle___ctor
                                          (__this_02,fontSize,120.0,20.0,pSVar13,(MethodInfo *)0x0);
                                pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateTextButton
                                          (pUVar12,__this_02,"Reset Colors",0.0,pUVar7,(MethodInfo *)0x0);
                                UI_CollapsibleToggleSection__AddChild
                                          (section,(UnityEngine_GameObject_o *)pSVar8,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae576 == '\0') {
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fe9c6;
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fe9d2;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fe9de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fe9ea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fe9f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea32;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea3e;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea4a;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea56;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea62;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateGuildRoleSpriteButton_b__0);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fea9e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43feaaa;
    il2cpp_runtime_helper_023445d0(&"GuildRoleSpriteButton");
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43feab6;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae576 = '\x01';
  }
  pUStackY_168 = (UnityEngine_GameObject_o *)0x43feacc;
  __this_03 = (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pUStackY_168 = (UnityEngine_GameObject_o *)0x43fead9;
  UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(__this_03,(MethodInfo *)0x0);
  SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar22;
  pUVar9 = extraout_RDX;
  if (__this_03 == (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
label_043ff22f:
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff234;
    il2cpp_runtime_helper_022b2c90();
label_043ff234:
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff239;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    (__this_03->fields).settings = settings;
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43feaf9;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,settings);
    (__this_03->fields).__4__this = (UI_EditProfileProfilePanel_o *)pSVar22;
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43feb12;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).__4__this,pSVar22);
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43feb26;
    plVar10 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar15 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pUStackY_168 = (UnityEngine_GameObject_o *)0x43feb50;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43feb5a;
    pSVar6 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar15,(MethodInfo *)0x0);
    if ((System_Type_array *)plVar10 == (System_Type_array *)0x0) goto label_043ff22f;
    SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar6;
    if (pSVar6 == (System_Type_array *)0x0) {
label_043feb83:
      if ((int)((System_Type_array *)plVar10)->max_length != 0) {
        ((System_Type_array *)plVar10)->m_Items[0] = (System_Type_o *)pSVar6;
        pUStackY_168 = (UnityEngine_GameObject_o *)0x43feb9e;
        il2cpp_runtime_helper_022b4080(((System_Type_array *)plVar10)->m_Items);
        pUStackY_168 = (UnityEngine_GameObject_o *)0x43febaf;
        SVar15.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (SVar15.fields.value != 0) {
          pUStackY_168 = (UnityEngine_GameObject_o *)0x43febc6;
          lVar14 = il2cpp_runtime_helper_023051f0(SVar15.fields.value);
          if (lVar14 == 0) goto label_043ff239;
        }
        if (1 < (uint)((System_Type_array *)plVar10)->max_length) {
          ((System_Type_array *)plVar10)->m_Items[1] = (System_Type_o *)SVar15.fields.value;
          pUStackY_168 = (UnityEngine_GameObject_o *)0x43febea;
          il2cpp_runtime_helper_022b4080(((System_Type_array *)plVar10)->m_Items + 1);
          pUStackY_168 = (UnityEngine_GameObject_o *)0x43febfb;
          SVar15.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (SVar15.fields.value != 0) {
            pUStackY_168 = (UnityEngine_GameObject_o *)0x43fec12;
            lVar14 = il2cpp_runtime_helper_023051f0(SVar15.fields.value);
            if (lVar14 == 0) goto label_043ff239;
          }
          if (2 < (uint)((System_Type_array *)plVar10)->max_length) {
            ((System_Type_array *)plVar10)->m_Items[2] = (System_Type_o *)SVar15.fields.value;
            pUStackY_168 = (UnityEngine_GameObject_o *)0x43fec36;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)plVar10)->m_Items + 2);
            pUStackY_168 = (UnityEngine_GameObject_o *)0x43fec47;
            SVar15.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if (SVar15.fields.value != 0) {
              pUStackY_168 = (UnityEngine_GameObject_o *)0x43fec5e;
              lVar14 = il2cpp_runtime_helper_023051f0(SVar15.fields.value);
              if (lVar14 == 0) goto label_043ff239;
            }
            if (3 < (uint)((System_Type_array *)plVar10)->max_length) {
              ((System_Type_array *)plVar10)->m_Items[3] = (System_Type_o *)SVar15.fields.value;
              pUStackY_168 = (UnityEngine_GameObject_o *)0x43fec82;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)plVar10)->m_Items + 3);
              pUStackY_168 = (UnityEngine_GameObject_o *)0x43fec93;
              SVar15.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if (SVar15.fields.value != 0) {
                pUStackY_168 = (UnityEngine_GameObject_o *)0x43fecaa;
                lVar14 = il2cpp_runtime_helper_023051f0(SVar15.fields.value);
                if (lVar14 == 0) goto label_043ff239;
              }
              if (4 < (uint)((System_Type_array *)plVar10)->max_length) {
                ((System_Type_array *)plVar10)->m_Items[4] = (System_Type_o *)SVar15.fields.value;
                pUStackY_168 = (UnityEngine_GameObject_o *)0x43fecd6;
                il2cpp_runtime_helper_022b4080(((System_Type_array *)plVar10)->m_Items + 4,SVar15.fields.value);
                pUStackY_168 = (UnityEngine_GameObject_o *)0x43fece5;
                pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                pUStackY_168 = (UnityEngine_GameObject_o *)0x43fecff;
                UnityEngine_GameObject___ctor_4dfc440
                          (pUVar9,"GuildRoleSpriteButton",(System_Type_array *)plVar10,(MethodInfo *)0x0);
                SVar15.fields.value =
                     (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)&TypeInfo_GameObject;
                if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                  plVar10 = &TypeInfo_GameObject;
                  pUStackY_168 = (UnityEngine_GameObject_o *)0x43fed15;
                  pUVar12 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fed2d;
                    UnityEngine_Transform__SetParent_4e09e30
                              (pUVar12,(UnityEngine_Transform_o *)parent_01,0,(MethodInfo *)0x0);
                    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fed3f;
                    pIVar16 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar16 != (Il2CppObject *)0x0) {
                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43fed66;
                      (*pIVar16->klass->vtable[0x24].methodPtr)
                                (0x43820000,pIVar16,pIVar16->klass->vtable[0x24].method);
                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43fed81;
                      (*pIVar16->klass->vtable[0x26].methodPtr)
                                (0x42200000,pIVar16,pIVar16->klass->vtable[0x26].method);
                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43fed93;
                      pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_Image_GetComponent_Image);
                      SVar15.fields.value =
                           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar16;
                      if (pIVar17 != (Il2CppObject *)0x0) {
                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43fedbd;
                        (*pIVar17->klass->vtable[0x17].methodPtr)
                                  (0x3f800000,0x3f800000,pIVar17,pIVar17->klass->vtable[0x17].method);
                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43fedcf;
                        __this_04 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_Button_GetComponent_Button);
                        if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                          pUStackY_168 = (UnityEngine_GameObject_o *)0x43fedea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUStackY_168 = (UnityEngine_GameObject_o *)0x43fee9a;
                          value.fields.m_NormalColor.fields.b = 1.0;
                          value.fields.m_NormalColor.fields.a = 0.08;
                          value.fields.m_NormalColor.fields.r = 1.0;
                          value.fields.m_NormalColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.r = 1.0;
                          value.fields.m_HighlightedColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.b = 1.0;
                          value.fields.m_HighlightedColor.fields.a = 0.16;
                          value.fields.m_PressedColor.fields.r = 1.0;
                          value.fields.m_PressedColor.fields.g = 1.0;
                          value.fields.m_PressedColor.fields.b = 1.0;
                          value.fields.m_PressedColor.fields.a = 0.24;
                          value.fields.m_SelectedColor.fields.r = 1.0;
                          value.fields.m_SelectedColor.fields.g = 1.0;
                          value.fields.m_SelectedColor.fields.b = 1.0;
                          value.fields.m_SelectedColor.fields.a = 0.16;
                          value.fields.m_DisabledColor.fields.r = 1.0;
                          value.fields.m_DisabledColor.fields.g = 1.0;
                          value.fields.m_DisabledColor.fields.b = 1.0;
                          value.fields.m_DisabledColor.fields.a = 0.05;
                          value.fields.m_ColorMultiplier = 1.0;
                          value.fields.m_FadeDuration = 0.1;
                          UnityEngine_UI_Selectable__set_colors(__this_04,value,(MethodInfo *)0x0);
                          pUStackY_168 = (UnityEngine_GameObject_o *)0x43feeae;
                          SVar15.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                          pUStackY_168 = (UnityEngine_GameObject_o *)0x43feebc;
                          pSVar18 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                          if (SVar15.fields.value != 0) {
                            if (pSVar18 != (System_Type_o *)0x0) {
                              pUStackY_168 = (UnityEngine_GameObject_o *)0x43feedc;
                              lVar14 = il2cpp_runtime_helper_023051f0(pSVar18);
                              if (lVar14 == 0) goto label_043ff239;
                            }
                            if ((int)((System_Type_array *)SVar15.fields.value)->max_length != 0) {
                              ((System_Type_array *)SVar15.fields.value)->m_Items[0] = pSVar18;
                              pUStackY_168 = (UnityEngine_GameObject_o *)0x43feeff;
                              il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar15.fields.value)->m_Items);
                              pUStackY_168 = (UnityEngine_GameObject_o *)0x43fef10;
                              pSVar18 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar18 != (System_Type_o *)0x0) {
                                pUStackY_168 = (UnityEngine_GameObject_o *)0x43fef27;
                                lVar14 = il2cpp_runtime_helper_023051f0(pSVar18);
                                if (lVar14 == 0) goto label_043ff239;
                              }
                              if (1 < (uint)((System_Type_array *)SVar15.fields.value)->max_length) {
                                ((System_Type_array *)SVar15.fields.value)->m_Items[1] = pSVar18;
                                pUStackY_168 = (UnityEngine_GameObject_o *)0x43fef4a;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar15.fields.value)->m_Items + 1);
                                pUStackY_168 = (UnityEngine_GameObject_o *)0x43fef5b;
                                pSVar18 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                if (pSVar18 != (System_Type_o *)0x0) {
                                  pUStackY_168 = (UnityEngine_GameObject_o *)0x43fef72;
                                  lVar14 = il2cpp_runtime_helper_023051f0(pSVar18);
                                  if (lVar14 == 0) goto label_043ff239;
                                }
                                if (2 < (uint)((System_Type_array *)SVar15.fields.value)->max_length) {
                                  ((System_Type_array *)SVar15.fields.value)->m_Items[2] = pSVar18;
                                  pUStackY_168 = (UnityEngine_GameObject_o *)0x43fef98;
                                  il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar15.fields.value)->m_Items + 2,
                                                     pSVar18);
                                  pUStackY_168 = (UnityEngine_GameObject_o *)0x43fefa0;
                                  __this_05 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                  pUStackY_168 = (UnityEngine_GameObject_o *)0x43fefba;
                                  UnityEngine_GameObject___ctor_4dfc440
                                            (__this_05,"Text",(System_Type_array *)SVar15.fields.value,
                                             (MethodInfo *)0x0);
                                  if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
                                    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fefcd;
                                    pUVar12 = UnityEngine_GameObject__get_transform
                                                        (__this_05,(MethodInfo *)0x0);
                                    pUStackY_168 = (UnityEngine_GameObject_o *)0x43fefda;
                                    parent_00 = UnityEngine_GameObject__get_transform
                                                          (pUVar9,(MethodInfo *)0x0);
                                    SVar15.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43feff2;
                                      UnityEngine_Transform__SetParent_4e09e30
                                                (pUVar12,parent_00,0,(MethodInfo *)0x0);
                                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff004;
                                      __this_06 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_05,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (g_data_057a694c == '\0') {
                                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff021;
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                        g_data_057a694c = '\x01';
                                      }
                                      SVar15.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      pUVar9 = extraout_RDX;
                                      if (__this_06 != (UnityEngine_RectTransform_o *)0x0) {
                                        plVar10 = &TypeInfo_Vector2;
                                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff050;
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_06,
                                                   (UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                   (MethodInfo *)0x0);
                                        if (g_data_057a9c86 == '\0') {
                                          pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff065;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a9c86 = '\x01';
                                        }
                                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff085;
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_06,
                                                   (UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff097;
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_06,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff0a9;
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_06,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff0bb;
                                        pSVar18 = (System_Type_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_05,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                        SVar15.fields.value =
                                             (System_RuntimeTypeHandle_Fields)(pSVar22->m_Items + 0xd);
                                        pSVar22->m_Items[0xd] = pSVar18;
                                        pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff0d9;
                                        il2cpp_runtime_helper_022b4080(SVar15.fields.value);
                                        if ((TMPro_TMP_Text_o *)pSVar22->m_Items[0xd] !=
                                            (TMPro_TMP_Text_o *)0x0) {
                                          pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff0f5;
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pSVar22->m_Items[0xd],1,
                                                     (MethodInfo *)0x0);
                                          if ((extraout_RDX != (UnityEngine_GameObject_o *)0x0) &&
                                             (*(TMPro_TMP_Text_o **)SVar15.fields.value !=
                                              (TMPro_TMP_Text_o *)0x0)) {
                                            pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff11a;
                                            TMPro_TMP_Text__set_fontSize
                                                      (*(TMPro_TMP_Text_o **)SVar15.fields.value,
                                                       (float)(int)(extraout_RDX->fields).m_CachedPtr,
                                                       (MethodInfo *)0x0);
                                            if (*(TMPro_TMP_Text_o **)SVar15.fields.value !=
                                                (TMPro_TMP_Text_o *)0x0) {
                                              pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff132;
                                              TMPro_TMP_Text__set_fontStyle
                                                        (*(TMPro_TMP_Text_o **)SVar15.fields.value,1,
                                                         (MethodInfo *)0x0);
                                              if (*(TMPro_TMP_Text_o **)SVar15.fields.value !=
                                                  (TMPro_TMP_Text_o *)0x0) {
                                                pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff14a;
                                                TMPro_TMP_Text__set_alignment
                                                          (*(TMPro_TMP_Text_o **)SVar15.fields.value,0x1001,
                                                           (MethodInfo *)0x0);
                                                __this_07 = *(UI_EditProfileProfilePanel_o **)
                                                             SVar15.fields.value;
                                                if (__this_07 != (UI_EditProfileProfilePanel_o *)0x0) {
                                                  pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff170;
                                                  (*(((System_Type_c *)__this_07->klass)->vtable)._23_GetType.
                                                    methodPtr)(0x3f800000,0x3f800000,__this_07,
                                                               (((System_Type_c *)__this_07->klass)->vtable).
                                                               _23_GetType.method);
                                                  pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff178;
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            (__this_07,
                                                             *(TMPro_TextMeshProUGUI_o **)SVar15.fields.value,
                                                             method_00);
                                                  pSVar3 = (__this_03->fields).settings;
                                                  if ((pSVar3 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar4 = (pSVar3->fields).GuildRoleSprite,
                                                     pSVar4 != (Settings_StringSetting_o *)0x0)) {
                                                    pSVar18 = *(System_Type_o **)SVar15.fields.value;
                                                    pSVar13 = (pSVar4->fields)._value;
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff1b5;
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff1c1;
                                                    pSVar13 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar13,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    SVar15.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                    if (pSVar18 != (System_Type_o *)0x0) {
                                                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff1dc;
                                                      (*(pSVar18->klass->vtable)._66_get_IsCOMObject.methodPtr
                                                      )(pSVar18,pSVar13,
                                                        (pSVar18->klass->vtable)._66_get_IsCOMObject.method);
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_04->fields).m_CanvasGroupCache;
                                                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff1f2;
                                                      pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                                               il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff20c;
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      SVar15.fields.value = (System_RuntimeTypeHandle_Fields)0
                                                      ;
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,pUVar7,(MethodInfo *)0x0);
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
                                  goto label_043ff22f;
                                }
                              }
                            }
                            goto label_043ff234;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_043ff22f;
              }
            }
          }
        }
      }
      goto label_043ff234;
    }
    pUStackY_168 = (UnityEngine_GameObject_o *)0x43feb7a;
    lVar14 = il2cpp_runtime_helper_023051f0(pSVar6);
    if (lVar14 != 0) goto label_043feb83;
  }
label_043ff239:
  pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff23e;
  uVar19 = il2cpp_runtime_helper_0231b270();
  lVar14 = 0;
  pUStackY_168 = (UnityEngine_GameObject_o *)0x43ff248;
  il2cpp_runtime_helper_022b2b10(uVar19);
  pSStackY_178 = (System_Type_array *)SVar15.fields.value;
  pSStackY_170 = (System_Type_array *)plVar10;
  pUStackY_168 = pUVar9;
  if (g_data_057ae57b == '\0') {
    lStackY_180 = 0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    lStackY_180 = 0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    lStackY_180 = 0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStackY_180 = 0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    lStackY_180 = 0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    lStackY_180 = 0x43ff283;
    pPVar20 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar20 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_180 = 0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_180 = 0x43ff2a6;
    pPVar20 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    lStackY_180 = 0x43ff2ba;
    pSVar13 = (System_String_o *)PhotonExtensions__GetCustomProperty(pPVar20,"display_name",(MethodInfo *)0x0);
    plVar10 = (long *)(System_String_o *)0x0;
    if ((pSVar13 != (System_String_o *)0x0) &&
       (plVar10 = (long *)(System_String_o *)0x0, (Il2CppClass *)pSVar13->klass == g_data_057b9c00)) {
      plVar10 = (long *)pSVar13;
    }
    lVar21 = 0;
    lStackY_180 = 0x43ff2e0;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)plVar10,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_180 = 0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_180 = 0x43ff300;
    pPVar20 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar20 == (Photon_Realtime_Player_o *)0x0) goto label_043ff43e;
    lVar21 = 0;
    lStackY_180 = 0x43ff314;
    bVar5 = System_String__IsNullOrEmpty
                      (*(System_String_o **)&(pPVar20->fields)._HasRejoined_k__BackingField,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 != '\0') goto label_043ff3b5;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_180 = 0x43ff32d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_180 = 0x43ff334;
    pPVar20 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    lStackY_180 = 0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    lStackY_180 = 0x43ff3ac;
    pPVar20 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar20 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    plVar10 = &TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      lStackY_180 = 0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_180 = 0x43ff3d4;
    pSVar13 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    lStackY_180 = 0x43ff3de;
    bVar5 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        lStackY_180 = 0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return;
    }
    if (lVar14 == 0) {
      return;
    }
    if (*(long *)(lVar14 + 0x30) == 0) {
      return;
    }
    lVar21 = 0;
    lStackY_180 = 0x43ff3fb;
    bVar5 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(lVar14 + 0x30) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    pPVar20 = *(Photon_Realtime_Player_o **)(lVar14 + 0x30);
  }
  if (pPVar20 != (Photon_Realtime_Player_o *)0x0) {
    return;
  }
label_043ff43e:
  lStackY_180 = 0x43ff443;
  uStackY_190 = il2cpp_runtime_helper_022b2c90();
  pSStackY_188 = (System_String_o *)plVar10;
  lStackY_180 = lVar14;
  if (g_data_057ae57a == '\0') {
    pcStackY_198 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStackY_198 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStackY_198 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStackY_198 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStackY_198 = (code *)0x43ff4aa;
  pSVar13 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStackY_198 = (code *)0x43ff4b4;
  bVar5 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStackY_198 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return;
  }
  if ((lVar21 == 0) || (*(long *)(lVar21 + 0x68) == 0)) {
    return;
  }
  pcStackY_198 = (code *)0x43ff4d1;
  bVar5 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(lVar21 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(long *)(lVar21 + 0x68) == 0) {
    pcStackY_198 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
    il2cpp_runtime_helper_022b2c90();
    pcStackY_198 = (code *)&TypeInfo_AccountManager;
    if (g_data_057ae57c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae57c = '\x01';
    }
    pSStackY_1a0 = (System_String_o *)0x0;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar20 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar20 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar20 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar20 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar5 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar20,&pSStackY_1a0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
    }
    PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStackY_1a0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.EditProfileProfilePanel$$OnEffectSelected
// il2cpp: void UI_EditProfileProfilePanel__OnEffectSelected (UI_EditProfileProfilePanel_o* __this, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool isName, const MethodInfo* method);
// 0x43ff5e0

void UI_EditProfileProfilePanel__OnEffectSelected
               (UI_EditProfileProfilePanel_o *__this,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC
               ,Settings_ColorSetting_o *colorD,bool_conflict isName,MethodInfo *method)

{
  UI_EditProfileProfilePanel_c *pUVar1;
  void *pvVar2;
  MethodInfo_2A24090 *pMVar3;
  long lVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Events_UnityAction_c *pUVar6;
  Il2CppMethodPointer vtableDispatch;
  Settings_TypedSetting_T__o *pSVar7;
  uint in_EAX;
  bool_conflict bVar8;
  PatreonEffects_NameEffectSettings_o *pPVar9;
  PatreonEffects_NameEffectSettings_o *pPVar10;
  UI_ColorSettingElement_o **ppUVar11;
  TMPro_TMP_Text_o *pTVar12;
  Settings_ColorSetting_o *text;
  System_String_o *pSVar13;
  Settings_ColorSetting_o *__this_00;
  Settings_ColorSetting_o *colorB_00;
  Settings_TypedSetting_T__o *__this_01;
  long *unaff_RBX;
  UI_ColorSettingElement_o **ppUVar14;
  Settings_StringSetting_o *pSVar15;
  MethodInfo *pMVar16;
  TMPro_TMP_Text_o *pTVar17;
  UI_EditProfileProfilePanel_o *pUVar18;
  UI_EditProfileProfilePanel_o *__this_02;
  TMPro_TMP_Text_o *__this_03;
  UnityEngine_Events_UnityAction_o *__this_04;
  char cVar19;
  Settings_ColorSetting_o *colorC_00;
  Settings_ColorSetting_o *pSVar20;
  Settings_ColorSetting_o *colorD_00;
  Settings_ColorSetting_o *pSVar21;
  UI_ColorSettingElement_o **ppUVar22;
  UI_EditProfileProfilePanel_o *unaff_R12;
  MethodInfo_2A24090 **unaff_R13;
  long *unaff_R14;
  long *plVar23;
  undefined1 auVar24 [16];
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_Fields UVar25;
  undefined8 uStackY_130;
  MethodInfo *in_stack_fffffffffffffef8;
  undefined8 uStack_f8;
  PatreonEffects_NameEffectSettings_o *pPStack_f0;
  Settings_ColorSetting_o *pSStack_e8;
  Settings_TypedSetting_T__o *pSStack_e0;
  long *plStack_d8;
  MethodInfo_2A24090 **ppMStack_d0;
  UI_EditProfileProfilePanel_o *pUStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  Settings_ColorSetting_o *pSStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  Settings_ColorSetting_o *pSStack_88;
  UI_EditProfileProfilePanel_o *pUStack_80;
  MethodInfo_2A24090 **ppMStack_78;
  long *plStack_70;
  MethodInfo *in_stack_ffffffffffffffb8;
  undefined8 uStack_38;
  
  __this_00 = colorB;
  pSVar15 = effectSetting;
  colorC_00 = colorC;
  colorD_00 = colorD;
  uStack_38._0_4_ = in_EAX;
  if (g_data_057ae56f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae56f = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (effectSetting != (Settings_StringSetting_o *)0x0) {
    bVar8 = PatreonEffects_NameEffectPresets__TryResolve
                      ((effectSetting->fields)._value,(int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pMVar16 = (MethodInfo *)(ulong)uStack_38._4_4_;
      if ((char)isName == '\0') {
        ppUVar22 = &(__this->fields)._guildColorA;
        pUVar18 = (UI_EditProfileProfilePanel_o *)&(__this->fields)._guildColorB;
        ppUVar14 = &(__this->fields)._guildColorC;
        ppUVar11 = &(__this->fields)._guildColorD;
      }
      else {
        ppUVar22 = &(__this->fields)._nameColorA;
        pUVar18 = (UI_EditProfileProfilePanel_o *)&(__this->fields)._nameColorB;
        ppUVar14 = &(__this->fields)._nameColorC;
        ppUVar11 = &(__this->fields)._nameColorD;
      }
      plStack_70 = (long *)0x43ff69d;
      UI_EditProfileProfilePanel__ApplyPreset
                (pUVar18,uStack_38._4_4_,colorA,colorB,colorC,colorD,ppUVar22,
                 (UI_ColorSettingElement_o **)pUVar18,ppUVar14,ppUVar11,in_stack_ffffffffffffffb8);
      UI_EditProfileProfilePanel__RefreshPreviews(__this,pMVar16);
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  colorB_00 = __this_00;
  pSStack_a0 = colorC_00;
  plStack_90 = unaff_RBX;
  pSStack_88 = colorD_00;
  if (g_data_057ae571 == '\0') {
    pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff71a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff726;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae571 = '\x01';
  }
  pUVar18 = (UI_EditProfileProfilePanel_o *)((ulong)pSVar15 & 0xffffffff);
  pTVar17 = (TMPro_TMP_Text_o *)0x0;
  pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff736;
  pPVar9 = PatreonEffects_NameEffectPresets__GetPreset((int32_t)pSVar15,(MethodInfo *)0x0);
  pPVar10 = (PatreonEffects_NameEffectSettings_o *)((ulong)pSVar15 & 0xffffffff);
  plVar23 = unaff_R14;
  if (pPVar9 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    uStack_c0._0_4_ = (pPVar9->fields).gradientA.fields.r;
    uStack_c0._4_4_ = (pPVar9->fields).gradientA.fields.g;
    uStack_b8 = 0;
    uStack_b0._0_4_ = (pPVar9->fields).gradientA.fields.b;
    uStack_b0._4_4_ = (pPVar9->fields).gradientA.fields.a;
    uStack_a8 = 0;
    plVar23 = &TypeInfo_Color255;
    pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff773;
    pUStack_80 = unaff_R12;
    ppMStack_78 = unaff_R13;
    plStack_70 = unaff_R14;
    unaff_R12 = (UI_EditProfileProfilePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    pTVar17 = (TMPro_TMP_Text_o *)0x0;
    pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff789;
    color.fields.b = (float)(undefined4)uStack_b0;
    color.fields.a = (float)uStack_b0._4_4_;
    color.fields.r = (float)(undefined4)uStack_c0;
    color.fields.g = (float)uStack_c0._4_4_;
    pUVar18 = unaff_R12;
    Utility_Color255___ctor_4388bb0((Utility_Color255_o *)unaff_R12,color,(MethodInfo *)0x0);
    pPVar10 = pPVar9;
    if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
      unaff_R13 = &MethodInfo_Void_set_Value;
      pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff7a7;
      Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)unaff_R12,MethodInfo_Void_set_Value);
      uStack_c0._0_4_ = (pPVar9->fields).gradientB.fields.r;
      uStack_c0._4_4_ = (pPVar9->fields).gradientB.fields.g;
      uStack_b8 = 0;
      uStack_b0._0_4_ = (pPVar9->fields).gradientB.fields.b;
      uStack_b0._4_4_ = (pPVar9->fields).gradientB.fields.a;
      uStack_a8 = 0;
      pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff7c2;
      unaff_R12 = (UI_EditProfileProfilePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      pTVar17 = (TMPro_TMP_Text_o *)0x0;
      pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff7d8;
      color_00.fields.b = (float)(undefined4)uStack_b0;
      color_00.fields.a = (float)uStack_b0._4_4_;
      color_00.fields.r = (float)(undefined4)uStack_c0;
      color_00.fields.g = (float)uStack_c0._4_4_;
      pUVar18 = unaff_R12;
      Utility_Color255___ctor_4388bb0((Utility_Color255_o *)unaff_R12,color_00,(MethodInfo *)0x0);
      if (__this_00 != (Settings_ColorSetting_o *)0x0) {
        pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff7ef;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)unaff_R12,MethodInfo_Void_set_Value);
        uStack_c0._0_4_ = (pPVar9->fields).gradientC.fields.r;
        uStack_c0._4_4_ = (pPVar9->fields).gradientC.fields.g;
        uStack_b8 = 0;
        uStack_b0._0_4_ = (pPVar9->fields).gradientC.fields.b;
        uStack_b0._4_4_ = (pPVar9->fields).gradientC.fields.a;
        uStack_a8 = 0;
        pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff80a;
        unaff_R12 = (UI_EditProfileProfilePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        pTVar17 = (TMPro_TMP_Text_o *)0x0;
        pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff820;
        color_01.fields.b = (float)(undefined4)uStack_b0;
        color_01.fields.a = (float)uStack_b0._4_4_;
        color_01.fields.r = (float)(undefined4)uStack_c0;
        color_01.fields.g = (float)uStack_c0._4_4_;
        Utility_Color255___ctor_4388bb0((Utility_Color255_o *)unaff_R12,color_01,(MethodInfo *)0x0);
        pUVar18 = (UI_EditProfileProfilePanel_o *)0x0;
        if (pSStack_a0 != (Settings_ColorSetting_o *)0x0) {
          pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff839;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSStack_a0,(Il2CppObject *)unaff_R12,MethodInfo_Void_set_Value);
          pSStack_a0 = *(Settings_ColorSetting_o **)&(pPVar9->fields).gradientD.fields;
          uStack_98 = 0;
          uStack_c0._0_4_ = (pPVar9->fields).gradientD.fields.b;
          uStack_c0._4_4_ = (pPVar9->fields).gradientD.fields.a;
          uStack_b8 = 0;
          pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff854;
          pPVar10 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          pTVar17 = (TMPro_TMP_Text_o *)0x0;
          pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff86a;
          color_02.fields.b = (float)(undefined4)uStack_c0;
          color_02.fields.a = (float)uStack_c0._4_4_;
          color_02.fields._0_8_ = pSStack_a0;
          Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pPVar10,color_02,(MethodInfo *)0x0);
          pUVar18 = (UI_EditProfileProfilePanel_o *)0x0;
          if (pSStack_88 != (Settings_ColorSetting_o *)0x0) {
            pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff883;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSStack_88,(Il2CppObject *)pPVar10,MethodInfo_Void_set_Value);
            plStack_90 = (long *)*plStack_90;
            if (plStack_90 != (long *)0x0) {
              pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff8a0;
              (**(code **)(*plStack_90 + 0x198))(plStack_90,*(undefined8 *)(*plStack_90 + 0x1a0));
            }
            pUVar1 = pUStack_80->klass;
            if (pUVar1 != (UI_EditProfileProfilePanel_c *)0x0) {
              pvVar2 = (pUVar1->_1).image;
              pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff8c7;
              (**(code **)((long)pvVar2 + 0x198))(pUVar1,*(undefined8 *)((long)pvVar2 + 0x1a0));
            }
            pMVar3 = *ppMStack_78;
            if (pMVar3 != (MethodInfo_2A24090 *)0x0) {
              pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff8e0;
              (**(code **)(pMVar3->methodPointer + 0x198))
                        (pMVar3,*(undefined8 *)(pMVar3->methodPointer + 0x1a0));
            }
            plStack_70 = (long *)*plStack_70;
            if (plStack_70 == (long *)0x0) {
              return;
            }
            (**(code **)(*plStack_70 + 0x198))(plStack_70,*(undefined8 *)(*plStack_70 + 0x1a0));
            return;
          }
        }
      }
    }
  }
  pUStack_c8 = (UI_EditProfileProfilePanel_o *)0x43ff91d;
  auVar24 = il2cpp_runtime_helper_022b2c90();
  uStack_f8 = auVar24._0_8_;
  text = colorB_00;
  pTVar12 = pTVar17;
  pSVar20 = colorC_00;
  pSVar21 = colorD_00;
  pPStack_f0 = pPVar10;
  pSStack_e8 = __this_00;
  pSStack_e0 = __this_01;
  plStack_d8 = plVar23;
  ppMStack_d0 = unaff_R13;
  pUStack_c8 = unaff_R12;
  if (g_data_057ae570 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae570 = '\x01';
  }
  cVar19 = (char)pSVar20;
  uStack_f8 = uStack_f8 & 0xffffffff;
  if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
    bVar8 = PatreonEffects_NameEffectPresets__TryResolve
                      ((System_String_o *)(pTVar17->fields).m_CancellationTokenSource,
                       (int32_t *)((long)&uStack_f8 + 4),(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pMVar16 = (MethodInfo *)(ulong)uStack_f8._4_4_;
      if ((char)uStack_b8 == '\0') {
        ppUVar22 = &(pUVar18->fields)._guildColorA;
        __this_02 = (UI_EditProfileProfilePanel_o *)&(pUVar18->fields)._guildColorB;
        ppUVar14 = &(pUVar18->fields)._guildColorC;
        ppUVar11 = &(pUVar18->fields)._guildColorD;
      }
      else {
        ppUVar22 = &(pUVar18->fields)._nameColorA;
        __this_02 = (UI_EditProfileProfilePanel_o *)&(pUVar18->fields)._nameColorB;
        ppUVar14 = &(pUVar18->fields)._nameColorC;
        ppUVar11 = &(pUVar18->fields)._nameColorD;
      }
      uStackY_130 = 0x43ff9dd;
      UI_EditProfileProfilePanel__ApplyPreset
                (__this_02,uStack_f8._4_4_,auVar24._8_8_,colorB_00,colorC_00,colorD_00,ppUVar22,
                 (UI_ColorSettingElement_o **)__this_02,ppUVar14,ppUVar11,in_stack_fffffffffffffef8);
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar18,pMVar16);
    }
    return;
  }
  auVar24 = il2cpp_runtime_helper_022b2c90();
  pTVar17 = auVar24._8_8_;
  uStackY_130 = auVar24._0_8_;
  if (g_data_057ae573 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae573 = '\x01';
  }
  uStackY_130 = uStackY_130 & 0xffffffff;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = pTVar12;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (pTVar12 == (TMPro_TMP_Text_o *)0x0) goto label_043ffc62;
    pTVar12 = (TMPro_TMP_Text_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pTVar12,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = pTVar12;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pTVar12 == (TMPro_TMP_Text_o *)0x0) goto label_043ffc62;
      TMPro_TMP_Text__set_richText(pTVar12,1,(MethodInfo *)0x0);
      if ((char)ppMStack_d0 != '\0') {
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        text = (Settings_ColorSetting_o *)MiscExtensions__HexColor((System_String_o *)text,(MethodInfo *)0x0);
      }
      (*(pTVar12->klass->vtable)._66_set_text.methodPtr)
                (pTVar12,text,(pTVar12->klass->vtable)._66_set_text.method);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = pTVar17;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if (cVar19 != '\0') {
      if (pSVar21 == (Settings_ColorSetting_o *)0x0) goto label_043ffc62;
      __this_03 = (TMPro_TMP_Text_o *)(pSVar21->fields)._value;
      bVar8 = PatreonEffects_NameEffectPresets__TryResolve
                        ((System_String_o *)__this_03,(int32_t *)((long)&uStackY_130 + 4),(MethodInfo *)0x0);
      pPVar10 = pPStack_f0;
      if ((char)bVar8 != '\0') {
        __this_03 = (TMPro_TMP_Text_o *)(ulong)uStackY_130._4_4_;
        pPVar9 = PatreonEffects_NameEffectPresets__GetPreset(uStackY_130._4_4_,(MethodInfo *)0x0);
        if ((((pPVar10 != (PatreonEffects_NameEffectSettings_o *)0x0) &&
             (__this_03 = *(TMPro_TMP_Text_o **)&(pPVar10->fields).gradientA.fields.b,
             __this_03 != (TMPro_TMP_Text_o *)0x0)) &&
            (UVar25 = (UnityEngine_Color_Fields)
                      Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0),
            pSVar7 = pSStack_e0, pPVar9 != (PatreonEffects_NameEffectSettings_o *)0x0)) &&
           (((pPVar9->fields).gradientA.fields = UVar25, pSStack_e8 != (Settings_ColorSetting_o *)0x0 &&
            (__this_03 = (TMPro_TMP_Text_o *)(pSStack_e8->fields)._value, __this_03 != (TMPro_TMP_Text_o *)0x0
            )))) {
          UVar25 = (UnityEngine_Color_Fields)
                   Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
          plVar23 = plStack_d8;
          (pPVar9->fields).gradientB.fields = UVar25;
          if ((pSVar7 != (Settings_TypedSetting_T__o *)0x0) &&
             (__this_03 = (TMPro_TMP_Text_o *)(pSVar7->fields)._value, __this_03 != (TMPro_TMP_Text_o *)0x0))
          {
            UVar25 = (UnityEngine_Color_Fields)
                     Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
            (pPVar9->fields).gradientC.fields = UVar25;
            if ((plVar23 != (long *)0x0) &&
               (__this_03 = (TMPro_TMP_Text_o *)plVar23[3], __this_03 != (TMPro_TMP_Text_o *)0x0)) {
              UVar25 = (UnityEngine_Color_Fields)
                       Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
              (pPVar9->fields).gradientD.fields = UVar25;
              if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
                PatreonEffects_NameEffectController__Apply
                          ((PatreonEffects_NameEffectController_o *)pTVar17,pPVar9,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_043ffc62;
      }
    }
    if (pTVar17 == (TMPro_TMP_Text_o *)0x0) {
label_043ffc62:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae577 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ae577 = '\x01';
      }
      __this_04 = (__this_03->fields).m_OnDirtyMaterialCallback;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x40), lVar4 != 0)) {
          pUVar5 = (__this_03->fields).m_OnDirtyMaterialCallback;
          __this_04 = *(UnityEngine_Events_UnityAction_o **)(lVar4 + 0x18);
          if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                              ((System_String_o *)__this_04,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0)
          ;
          if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
            pUVar6 = pUVar5->klass;
            vtableDispatch = pUVar6[2].vtable._1_Finalize.methodPtr;
            (*vtableDispatch)
                      (pUVar5,pSVar13,pUVar6[2].vtable._1_Finalize.method,pUVar6,vtableDispatch);
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_04,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    PatreonEffects_NameEffectController__Clear
              ((PatreonEffects_NameEffectController_o *)pTVar17,(MethodInfo *)0x0);
  }
  return;
}


// UI.EditProfileProfilePanel$$ResetEffectColors
// il2cpp: void UI_EditProfileProfilePanel__ResetEffectColors (UI_EditProfileProfilePanel_o* __this, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool isName, const MethodInfo* method);
// 0x43ff920

void UI_EditProfileProfilePanel__ResetEffectColors
               (UI_EditProfileProfilePanel_o *__this,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC
               ,Settings_ColorSetting_o *colorD,bool_conflict isName,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityAction_c *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  uint in_EAX;
  bool_conflict bVar4;
  UI_ColorSettingElement_o **elemD;
  TMPro_TMP_Text_o *pTVar5;
  Settings_ColorSetting_o *text;
  PatreonEffects_NameEffectSettings_o *settings;
  System_String_o *pSVar6;
  TMPro_TMP_Text_o *__this_00;
  long unaff_RBX;
  UI_ColorSettingElement_o **elemC;
  MethodInfo *method_00;
  UI_EditProfileProfilePanel_o *__this_01;
  TMPro_TMP_Text_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  char cVar7;
  Settings_ColorSetting_o *pSVar8;
  Settings_ColorSetting_o *pSVar9;
  UI_ColorSettingElement_o **elemA;
  long unaff_R12;
  long unaff_R13;
  long unaff_R14;
  char unaff_R15B;
  undefined1 auVar10 [16];
  UnityEngine_Color_Fields UVar11;
  undefined8 uStackY_70;
  MethodInfo *in_stack_ffffffffffffffb8;
  undefined8 uStack_38;
  
  text = colorB;
  pTVar5 = (TMPro_TMP_Text_o *)effectSetting;
  pSVar8 = colorC;
  pSVar9 = colorD;
  uStack_38._0_4_ = in_EAX;
  if (g_data_057ae570 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae570 = '\x01';
  }
  cVar7 = (char)pSVar8;
  uStack_38 = (ulong)(uint)uStack_38;
  if (effectSetting != (Settings_StringSetting_o *)0x0) {
    bVar4 = PatreonEffects_NameEffectPresets__TryResolve
                      ((effectSetting->fields)._value,(int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      method_00 = (MethodInfo *)(ulong)uStack_38._4_4_;
      if ((char)isName == '\0') {
        elemA = &(__this->fields)._guildColorA;
        __this_01 = (UI_EditProfileProfilePanel_o *)&(__this->fields)._guildColorB;
        elemC = &(__this->fields)._guildColorC;
        elemD = &(__this->fields)._guildColorD;
      }
      else {
        elemA = &(__this->fields)._nameColorA;
        __this_01 = (UI_EditProfileProfilePanel_o *)&(__this->fields)._nameColorB;
        elemC = &(__this->fields)._nameColorC;
        elemD = &(__this->fields)._nameColorD;
      }
      uStackY_70 = 0x43ff9dd;
      UI_EditProfileProfilePanel__ApplyPreset
                (__this_01,uStack_38._4_4_,colorA,colorB,colorC,colorD,elemA,
                 (UI_ColorSettingElement_o **)__this_01,elemC,elemD,in_stack_ffffffffffffffb8);
      UI_EditProfileProfilePanel__RefreshPreviews(__this,method_00);
    }
    return;
  }
  auVar10 = il2cpp_runtime_helper_022b2c90();
  __this_00 = auVar10._8_8_;
  uStackY_70 = auVar10._0_8_;
  if (g_data_057ae573 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae573 = '\x01';
  }
  uStackY_70 = uStackY_70 & 0xffffffff;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = pTVar5;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (pTVar5 == (TMPro_TMP_Text_o *)0x0) goto label_043ffc62;
    pTVar5 = (TMPro_TMP_Text_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pTVar5,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = pTVar5;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (pTVar5 == (TMPro_TMP_Text_o *)0x0) goto label_043ffc62;
      TMPro_TMP_Text__set_richText(pTVar5,1,(MethodInfo *)0x0);
      if (unaff_R15B != '\0') {
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        text = (Settings_ColorSetting_o *)MiscExtensions__HexColor((System_String_o *)text,(MethodInfo *)0x0);
      }
      (*(pTVar5->klass->vtable)._66_set_text.methodPtr)
                (pTVar5,text,(pTVar5->klass->vtable)._66_set_text.method);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = __this_00;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (cVar7 != '\0') {
      if (pSVar9 == (Settings_ColorSetting_o *)0x0) goto label_043ffc62;
      __this_02 = (TMPro_TMP_Text_o *)(pSVar9->fields)._value;
      bVar4 = PatreonEffects_NameEffectPresets__TryResolve
                        ((System_String_o *)__this_02,(int32_t *)((long)&uStackY_70 + 4),(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        __this_02 = (TMPro_TMP_Text_o *)(ulong)uStackY_70._4_4_;
        settings = PatreonEffects_NameEffectPresets__GetPreset(uStackY_70._4_4_,(MethodInfo *)0x0);
        if ((((unaff_RBX != 0) &&
             (__this_02 = *(TMPro_TMP_Text_o **)(unaff_RBX + 0x18), __this_02 != (TMPro_TMP_Text_o *)0x0)) &&
            (UVar11 = (UnityEngine_Color_Fields)
                      Utility_Color255__ToColor((Utility_Color255_o *)__this_02,(MethodInfo *)0x0),
            settings != (PatreonEffects_NameEffectSettings_o *)0x0)) &&
           (((settings->fields).gradientA.fields = UVar11, unaff_R12 != 0 &&
            (__this_02 = *(TMPro_TMP_Text_o **)(unaff_R12 + 0x18), __this_02 != (TMPro_TMP_Text_o *)0x0)))) {
          UVar11 = (UnityEngine_Color_Fields)
                   Utility_Color255__ToColor((Utility_Color255_o *)__this_02,(MethodInfo *)0x0);
          (settings->fields).gradientB.fields = UVar11;
          if ((unaff_R13 != 0) &&
             (__this_02 = *(TMPro_TMP_Text_o **)(unaff_R13 + 0x18), __this_02 != (TMPro_TMP_Text_o *)0x0)) {
            UVar11 = (UnityEngine_Color_Fields)
                     Utility_Color255__ToColor((Utility_Color255_o *)__this_02,(MethodInfo *)0x0);
            (settings->fields).gradientC.fields = UVar11;
            if ((unaff_R14 != 0) &&
               (__this_02 = *(TMPro_TMP_Text_o **)(unaff_R14 + 0x18), __this_02 != (TMPro_TMP_Text_o *)0x0)) {
              UVar11 = (UnityEngine_Color_Fields)
                       Utility_Color255__ToColor((Utility_Color255_o *)__this_02,(MethodInfo *)0x0);
              (settings->fields).gradientD.fields = UVar11;
              if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                PatreonEffects_NameEffectController__Apply
                          ((PatreonEffects_NameEffectController_o *)__this_00,settings,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_043ffc62;
      }
    }
    if (__this_00 == (TMPro_TMP_Text_o *)0x0) {
label_043ffc62:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae577 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ae577 = '\x01';
      }
      __this_03 = (__this_02->fields).m_OnDirtyMaterialCallback;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
        pUVar2 = (__this_02->fields).m_OnDirtyMaterialCallback;
        __this_03 = *(UnityEngine_Events_UnityAction_o **)(lVar1 + 0x18);
        if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                           ((System_String_o *)__this_03,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
          pUVar3 = pUVar2->klass;
          vtableDispatch = pUVar3[2].vtable._1_Finalize.methodPtr;
          (*vtableDispatch)
                    (pUVar2,pSVar6,pUVar3[2].vtable._1_Finalize.method,pUVar3,vtableDispatch);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_03,(MethodInfo *)0x0);
      return;
    }
    PatreonEffects_NameEffectController__Clear
              ((PatreonEffects_NameEffectController_o *)__this_00,(MethodInfo *)0x0);
  }
  return;
}


// UI.EditProfileProfilePanel$$ApplyPreset
// il2cpp: void UI_EditProfileProfilePanel__ApplyPreset (UI_EditProfileProfilePanel_o* __this, int32_t effectType, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, UI_ColorSettingElement_o** elemA, UI_ColorSettingElement_o** elemB, UI_ColorSettingElement_o** elemC, UI_ColorSettingElement_o** elemD, const MethodInfo* method);
// 0x43ff6c0

void UI_EditProfileProfilePanel__ApplyPreset
               (UI_EditProfileProfilePanel_o *__this,int32_t effectType,Settings_ColorSetting_o *colorA,
               Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD
               ,UI_ColorSettingElement_o **elemA,UI_ColorSettingElement_o **elemB,
               UI_ColorSettingElement_o **elemC,UI_ColorSettingElement_o **elemD,MethodInfo *method)

{
  UI_ColorSettingElement_o *pUVar1;
  long lVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_Events_UnityAction_c *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  UI_EditProfileProfilePanel_o *pUVar6;
  UI_EditProfileProfilePanel_o *pUVar7;
  UI_ColorSettingElement_o **elemD_00;
  TMPro_TMP_Text_o *pTVar8;
  Settings_ColorSetting_o *text;
  PatreonEffects_NameEffectSettings_o *settings;
  System_String_o *pSVar9;
  Settings_ColorSetting_o *pSVar10;
  UI_ColorSettingElement_o **ppUVar11;
  TMPro_TMP_Text_o *pTVar12;
  MethodInfo *method_00;
  UI_EditProfileProfilePanel_o *pUVar13;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  char cVar14;
  Settings_ColorSetting_o *pSVar15;
  Settings_ColorSetting_o *pSVar16;
  UI_ColorSettingElement_o **ppUVar17;
  undefined1 auVar18 [16];
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_Fields UVar19;
  undefined8 uStackY_f8;
  MethodInfo *in_stack_ffffffffffffff30;
  undefined8 uStack_c0;
  UI_EditProfileProfilePanel_o *pUStack_b8;
  Settings_ColorSetting_o *pSStack_b0;
  Settings_ColorSetting_o *pSStack_a8;
  UI_ColorSettingElement_o **ppUStack_a0;
  MethodInfo_2A24090 **ppMStack_98;
  UI_EditProfileProfilePanel_o *pUStack_90;
  Settings_StringSetting_o *local_88;
  undefined8 uStack_80;
  System_Threading_CancellationTokenSource_o *local_78;
  undefined8 uStack_70;
  Settings_ColorSetting_o *local_68;
  undefined8 uStack_60;
  UI_ColorSettingElement_o **local_58;
  Settings_ColorSetting_o *local_50;
  UI_ColorSettingElement_o **local_48;
  UI_ColorSettingElement_o **local_40;
  UI_ColorSettingElement_o **local_38;
  
  local_58 = elemA;
  pSVar10 = colorB;
  local_68 = colorC;
  local_50 = colorD;
  if (g_data_057ae571 == '\0') {
    pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff71a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff726;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae571 = '\x01';
  }
  pTVar12 = (TMPro_TMP_Text_o *)0x0;
  pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff736;
  pUVar13 = (UI_EditProfileProfilePanel_o *)(ulong)(uint)effectType;
  pUVar6 = (UI_EditProfileProfilePanel_o *)
           PatreonEffects_NameEffectPresets__GetPreset(effectType,(MethodInfo *)0x0);
  pUVar7 = (UI_EditProfileProfilePanel_o *)(ulong)(uint)effectType;
  if (pUVar6 != (UI_EditProfileProfilePanel_o *)0x0) {
    local_48 = elemB;
    local_40 = elemC;
    local_38 = elemD;
    local_88 = *(Settings_StringSetting_o **)&((UnityEngine_Color_o *)&(pUVar6->fields).m_CachedPtr)->fields;
    uStack_80 = 0;
    local_78 = (pUVar6->fields).m_CancellationTokenSource;
    uStack_70 = 0;
    elemD = (UI_ColorSettingElement_o **)&TypeInfo_Color255;
    pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff773;
    elemB = (UI_ColorSettingElement_o **)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    pTVar12 = (TMPro_TMP_Text_o *)0x0;
    pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff789;
    color.fields._8_8_ = local_78;
    color.fields._0_8_ = local_88;
    pUVar13 = (UI_EditProfileProfilePanel_o *)elemB;
    Utility_Color255___ctor_4388bb0((Utility_Color255_o *)elemB,color,(MethodInfo *)0x0);
    pUVar7 = pUVar6;
    if (colorA != (Settings_ColorSetting_o *)0x0) {
      pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff7a7;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)colorA,(Il2CppObject *)elemB,MethodInfo_Void_set_Value);
      local_88 = *(Settings_StringSetting_o **)&((UnityEngine_Color_o *)&(pUVar6->fields).SinglePanel)->fields
      ;
      uStack_80 = 0;
      local_78 = (System_Threading_CancellationTokenSource_o *)(pUVar6->fields).DoublePanelLeft;
      uStack_70 = 0;
      pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff7c2;
      elemB = (UI_ColorSettingElement_o **)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      pTVar12 = (TMPro_TMP_Text_o *)0x0;
      pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff7d8;
      color_00.fields._8_8_ = local_78;
      color_00.fields._0_8_ = local_88;
      pUVar13 = (UI_EditProfileProfilePanel_o *)elemB;
      Utility_Color255___ctor_4388bb0((Utility_Color255_o *)elemB,color_00,(MethodInfo *)0x0);
      elemC = (UI_ColorSettingElement_o **)&MethodInfo_Void_set_Value;
      if (colorB != (Settings_ColorSetting_o *)0x0) {
        pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff7ef;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)colorB,(Il2CppObject *)elemB,MethodInfo_Void_set_Value);
        local_88 = *(Settings_StringSetting_o **)
                    &((UnityEngine_Color_o *)&(pUVar6->fields).DoublePanelRight)->fields;
        uStack_80 = 0;
        local_78 = (System_Threading_CancellationTokenSource_o *)(pUVar6->fields)._popups;
        uStack_70 = 0;
        pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff80a;
        elemB = (UI_ColorSettingElement_o **)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        pTVar12 = (TMPro_TMP_Text_o *)0x0;
        pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff820;
        color_01.fields._8_8_ = local_78;
        color_01.fields._0_8_ = local_88;
        Utility_Color255___ctor_4388bb0((Utility_Color255_o *)elemB,color_01,(MethodInfo *)0x0);
        pUVar13 = (UI_EditProfileProfilePanel_o *)0x0;
        if (local_68 != (Settings_ColorSetting_o *)0x0) {
          pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff839;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)local_68,(Il2CppObject *)elemB,MethodInfo_Void_set_Value);
          local_68 = *(Settings_ColorSetting_o **)
                      &((UnityEngine_Color_o *)&(pUVar6->fields)._currentCategoryPanel)->fields;
          uStack_60 = 0;
          local_88 = (pUVar6->fields)._currentCategoryPanelName;
          uStack_80 = 0;
          pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff854;
          pUVar7 = (UI_EditProfileProfilePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          pTVar12 = (TMPro_TMP_Text_o *)0x0;
          pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff86a;
          color_02.fields._8_8_ = local_88;
          color_02.fields._0_8_ = local_68;
          Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pUVar7,color_02,(MethodInfo *)0x0);
          pUVar13 = (UI_EditProfileProfilePanel_o *)0x0;
          if (local_50 != (Settings_ColorSetting_o *)0x0) {
            pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff883;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)local_50,(Il2CppObject *)pUVar7,MethodInfo_Void_set_Value);
            pUVar1 = *local_58;
            if (pUVar1 != (UI_ColorSettingElement_o *)0x0) {
              pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff8a0;
              (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
            }
            ppUVar11 = local_38;
            ppUVar17 = local_40;
            pUVar1 = *local_48;
            if (pUVar1 != (UI_ColorSettingElement_o *)0x0) {
              pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff8c7;
              (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
            }
            pUVar1 = *ppUVar17;
            if (pUVar1 != (UI_ColorSettingElement_o *)0x0) {
              pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff8e0;
              (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
            }
            pUVar1 = *ppUVar11;
            if (pUVar1 == (UI_ColorSettingElement_o *)0x0) {
              return;
            }
            (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
            return;
          }
        }
      }
    }
  }
  pUStack_90 = (UI_EditProfileProfilePanel_o *)0x43ff91d;
  auVar18 = il2cpp_runtime_helper_022b2c90();
  uStack_c0 = auVar18._0_8_;
  text = pSVar10;
  pTVar8 = pTVar12;
  pSVar15 = colorC;
  pSVar16 = colorD;
  pUStack_b8 = pUVar7;
  pSStack_b0 = colorB;
  pSStack_a8 = colorA;
  ppUStack_a0 = elemD;
  ppMStack_98 = (MethodInfo_2A24090 **)elemC;
  pUStack_90 = (UI_EditProfileProfilePanel_o *)elemB;
  if (g_data_057ae570 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae570 = '\x01';
  }
  cVar14 = (char)pSVar15;
  uStack_c0 = uStack_c0 & 0xffffffff;
  if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
    bVar5 = PatreonEffects_NameEffectPresets__TryResolve
                      ((System_String_o *)(pTVar12->fields).m_CancellationTokenSource,
                       (int32_t *)((long)&uStack_c0 + 4),(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      method_00 = (MethodInfo *)(ulong)uStack_c0._4_4_;
      if ((char)uStack_80 == '\0') {
        ppUVar17 = &(pUVar13->fields)._guildColorA;
        pUVar7 = (UI_EditProfileProfilePanel_o *)&(pUVar13->fields)._guildColorB;
        ppUVar11 = &(pUVar13->fields)._guildColorC;
        elemD_00 = &(pUVar13->fields)._guildColorD;
      }
      else {
        ppUVar17 = &(pUVar13->fields)._nameColorA;
        pUVar7 = (UI_EditProfileProfilePanel_o *)&(pUVar13->fields)._nameColorB;
        ppUVar11 = &(pUVar13->fields)._nameColorC;
        elemD_00 = &(pUVar13->fields)._nameColorD;
      }
      uStackY_f8 = 0x43ff9dd;
      UI_EditProfileProfilePanel__ApplyPreset
                (pUVar7,uStack_c0._4_4_,auVar18._8_8_,pSVar10,colorC,colorD,ppUVar17,
                 (UI_ColorSettingElement_o **)pUVar7,ppUVar11,elemD_00,in_stack_ffffffffffffff30);
      UI_EditProfileProfilePanel__RefreshPreviews(pUVar13,method_00);
    }
    return;
  }
  auVar18 = il2cpp_runtime_helper_022b2c90();
  pTVar12 = auVar18._8_8_;
  uStackY_f8 = auVar18._0_8_;
  if (g_data_057ae573 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae573 = '\x01';
  }
  uStackY_f8 = uStackY_f8 & 0xffffffff;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = pTVar8;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (pTVar8 == (TMPro_TMP_Text_o *)0x0) goto label_043ffc62;
    pTVar8 = (TMPro_TMP_Text_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pTVar8,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = pTVar8;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (pTVar8 == (TMPro_TMP_Text_o *)0x0) goto label_043ffc62;
      TMPro_TMP_Text__set_richText(pTVar8,1,(MethodInfo *)0x0);
      if ((char)ppMStack_98 != '\0') {
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        text = (Settings_ColorSetting_o *)MiscExtensions__HexColor((System_String_o *)text,(MethodInfo *)0x0);
      }
      (*(pTVar8->klass->vtable)._66_set_text.methodPtr)
                (pTVar8,text,(pTVar8->klass->vtable)._66_set_text.method);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = pTVar12;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (cVar14 != '\0') {
      if (pSVar16 == (Settings_ColorSetting_o *)0x0) goto label_043ffc62;
      __this_00 = (TMPro_TMP_Text_o *)(pSVar16->fields)._value;
      bVar5 = PatreonEffects_NameEffectPresets__TryResolve
                        ((System_String_o *)__this_00,(int32_t *)((long)&uStackY_f8 + 4),(MethodInfo *)0x0);
      pUVar13 = pUStack_b8;
      if ((char)bVar5 != '\0') {
        __this_00 = (TMPro_TMP_Text_o *)(ulong)uStackY_f8._4_4_;
        settings = PatreonEffects_NameEffectPresets__GetPreset(uStackY_f8._4_4_,(MethodInfo *)0x0);
        if ((((pUVar13 != (UI_EditProfileProfilePanel_o *)0x0) &&
             (__this_00 = (TMPro_TMP_Text_o *)(pUVar13->fields).m_CancellationTokenSource,
             __this_00 != (TMPro_TMP_Text_o *)0x0)) &&
            (UVar19 = (UnityEngine_Color_Fields)
                      Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0),
            pSVar10 = pSStack_a8, settings != (PatreonEffects_NameEffectSettings_o *)0x0)) &&
           (((settings->fields).gradientA.fields = UVar19, pSStack_b0 != (Settings_ColorSetting_o *)0x0 &&
            (__this_00 = (TMPro_TMP_Text_o *)(pSStack_b0->fields)._value, __this_00 != (TMPro_TMP_Text_o *)0x0
            )))) {
          UVar19 = (UnityEngine_Color_Fields)
                   Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
          ppUVar17 = ppUStack_a0;
          (settings->fields).gradientB.fields = UVar19;
          if ((pSVar10 != (Settings_ColorSetting_o *)0x0) &&
             (__this_00 = (TMPro_TMP_Text_o *)(pSVar10->fields)._value, __this_00 != (TMPro_TMP_Text_o *)0x0))
          {
            UVar19 = (UnityEngine_Color_Fields)
                     Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
            (settings->fields).gradientC.fields = UVar19;
            if ((ppUVar17 != (UI_ColorSettingElement_o **)0x0) &&
               (__this_00 = (TMPro_TMP_Text_o *)ppUVar17[3], __this_00 != (TMPro_TMP_Text_o *)0x0)) {
              UVar19 = (UnityEngine_Color_Fields)
                       Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
              (settings->fields).gradientD.fields = UVar19;
              if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
                PatreonEffects_NameEffectController__Apply
                          ((PatreonEffects_NameEffectController_o *)pTVar12,settings,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_043ffc62;
      }
    }
    if (pTVar12 == (TMPro_TMP_Text_o *)0x0) {
label_043ffc62:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae577 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ae577 = '\x01';
      }
      __this_01 = (__this_00->fields).m_OnDirtyMaterialCallback;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)) {
        pUVar3 = (__this_00->fields).m_OnDirtyMaterialCallback;
        __this_01 = *(UnityEngine_Events_UnityAction_o **)(lVar2 + 0x18);
        if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                           ((System_String_o *)__this_01,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
          pUVar4 = pUVar3->klass;
          vtableDispatch = pUVar4[2].vtable._1_Finalize.methodPtr;
          (*vtableDispatch)
                    (pUVar3,pSVar9,pUVar4[2].vtable._1_Finalize.method,pUVar4,vtableDispatch);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
    PatreonEffects_NameEffectController__Clear
              ((PatreonEffects_NameEffectController_o *)pTVar12,(MethodInfo *)0x0);
  }
  return;
}


// UI.EditProfileProfilePanel$$RefreshPreviews
// il2cpp: void UI_EditProfileProfilePanel__RefreshPreviews (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x43fdcf0

void UI_EditProfileProfilePanel__RefreshPreviews(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  int32_t fontSize;
  System_String_array *options;
  UI_ColorPickPopup_o *pUVar2;
  Settings_NameSetting_o *pSVar3;
  undefined8 uVar4;
  void *pvVar5;
  UnityEngine_Events_UnityEvent_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar6;
  TMPro_TextMeshProUGUI_c *pTVar7;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  System_Type_array *pSVar10;
  UnityEngine_Events_UnityAction_o *pUVar11;
  System_Type_array *pSVar12;
  System_Type_array *pSVar13;
  UnityEngine_GameObject_o *pUVar14;
  UI_ColorSettingElement_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UI_ElementStyle_o *__this_01;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this_02;
  long lVar17;
  System_RuntimeTypeHandle_o SVar18;
  Settings_ProfileSettings_o *pSVar19;
  Il2CppObject *pIVar20;
  UnityEngine_UI_Selectable_o *__this_03;
  System_Type_o *pSVar21;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_05;
  Settings_StringSetting_o *pSVar22;
  undefined8 uVar23;
  Photon_Realtime_Player_o *pPVar24;
  UI_EditProfileProfilePanel_o *in_RCX;
  MethodInfo *method_00;
  MethodInfo_255A0F0 *style;
  UnityEngine_GameObject_o *extraout_RDX;
  MethodInfo *method_01;
  long *value_00;
  MethodInfo_255A0F0 *parent_00;
  long lVar25;
  UI_EditProfileProfilePanel_o *__this_06;
  System_Type_array *pSVar26;
  UI_ColorSettingElement_o **ppUVar27;
  Settings_ProfileSettings_c *pSVar28;
  TMPro_TextMeshProUGUI_o *__this_07;
  byte in_R8B;
  long *in_R9;
  PatreonEffects_NameEffectController_o *unaff_R12;
  bool bVar29;
  System_String_o *pSStackY_1f8;
  code *pcStackY_1f0;
  undefined8 uStackY_1e8;
  System_String_o *pSStackY_1e0;
  long lStackY_1d8;
  System_Type_array *pSStackY_1d0;
  System_Type_array *pSStackY_1c8;
  UnityEngine_GameObject_o *pUStackY_1c0;
  System_Nullable_float__Fields SStack_98;
  Settings_StringSetting_o **ppSStack_90;
  System_Type_array *pSStack_88;
  PatreonEffects_NameEffectController_o *pPStack_80;
  Settings_StringSetting_o *in_stack_ffffffffffffffb0;
  Settings_StringSetting_o *in_stack_ffffffffffffffb8;
  Settings_NameSetting_o *in_stack_ffffffffffffffc0;
  undefined4 in_stack_ffffffffffffffc8;
  undefined4 uStack_34;
  System_Type_array *in_stack_ffffffffffffffd0;
  System_Type_array *__this_08;
  
  if (g_data_057ae572 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae572 = '\x01';
  }
  pSVar26 = *(System_Type_array **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  __this_06 = (UI_EditProfileProfilePanel_o *)0x0;
  bVar8 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if ((pSVar26 != (System_Type_array *)0x0) &&
     ((Settings_NameSetting_o *)pSVar26->m_Items[2] != (Settings_NameSetting_o *)0x0)) {
    method = (MethodInfo *)(__this->fields)._namePreviewTMP;
    in_RCX = (UI_EditProfileProfilePanel_o *)(((Settings_NameSetting_o *)pSVar26->m_Items[2])->fields)._value;
    if ((char)bVar8 == '\0') {
      in_R8B = false;
    }
    else {
      if ((Settings_BoolSetting_o *)pSVar26->m_Items[0xc] == (Settings_BoolSetting_o *)0x0) goto label_043fde43;
      in_R8B = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar26->m_Items[0xc])->fields).DefaultValue + 1)
               != '\0';
    }
    in_stack_ffffffffffffffb8 = (Settings_StringSetting_o *)pSVar26->m_Items[0x10];
    in_stack_ffffffffffffffc0 = (Settings_NameSetting_o *)pSVar26->m_Items[0x11];
    in_stack_ffffffffffffffb0 = (Settings_StringSetting_o *)pSVar26->m_Items[0xf];
    in_R9 = (long *)pSVar26->m_Items[0xd];
    in_stack_ffffffffffffffc8 = 1;
    UI_EditProfileProfilePanel__RefreshSinglePreview
              (__this_06,(UnityEngine_GameObject_o *)method,(__this->fields)._namePreviewEffect,
               (System_String_o *)in_RCX,(uint)in_R8B,(Settings_StringSetting_o *)in_R9,
               (Settings_ColorSetting_o *)pSVar26->m_Items[0xe],
               (Settings_ColorSetting_o *)in_stack_ffffffffffffffb0,
               (Settings_ColorSetting_o *)in_stack_ffffffffffffffb8,
               (Settings_ColorSetting_o *)in_stack_ffffffffffffffc0,1,(MethodInfo *)in_stack_ffffffffffffffd0)
    ;
    pUVar14 = (__this->fields)._guildPreviewTMP;
    unaff_R12 = (__this->fields)._guildPreviewEffect;
    method = (MethodInfo *)pSVar26;
    pSVar9 = UI_EditProfileProfilePanel__GetGuildPreviewText
                       (__this_06,(Settings_ProfileSettings_o *)pSVar26,method_00);
    if ((char)bVar8 == '\0') {
      bVar29 = false;
label_043fddf7:
      UI_EditProfileProfilePanel__RefreshSinglePreview
                (__this_06,pUVar14,unaff_R12,pSVar9,(uint)bVar29,
                 (Settings_StringSetting_o *)pSVar26->m_Items[0x13],
                 (Settings_ColorSetting_o *)pSVar26->m_Items[0x14],
                 (Settings_ColorSetting_o *)pSVar26->m_Items[0x15],
                 (Settings_ColorSetting_o *)pSVar26->m_Items[0x16],
                 (Settings_ColorSetting_o *)pSVar26->m_Items[0x17],0,(MethodInfo *)in_stack_ffffffffffffffd0);
      if (g_data_057ae577 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ae577 = '\x01';
      }
      __this_07 = (__this->fields)._guildRoleSpriteButtonLabel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_07,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x40), lVar17 != 0)) {
        pTVar6 = (__this->fields)._guildRoleSpriteButtonLabel;
        __this_07 = *(TMPro_TextMeshProUGUI_o **)(lVar17 + 0x18);
        if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                           ((System_String_o *)__this_07,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
        if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pTVar7 = pTVar6->klass;
          vtableDispatch = (pTVar7->vtable)._66_set_text.methodPtr;
          (*vtableDispatch)
                    (pTVar6,pSVar9,(pTVar7->vtable)._66_set_text.method,pTVar7,vtableDispatch);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_07,(MethodInfo *)0x0);
      return;
    }
    in_RCX = (UI_EditProfileProfilePanel_o *)0x0;
    if ((Settings_BoolSetting_o *)pSVar26->m_Items[0x12] != (Settings_BoolSetting_o *)0x0) {
      bVar29 = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar26->m_Items[0x12])->fields).DefaultValue + 1)
               != '\0';
      goto label_043fddf7;
    }
  }
label_043fde43:
  il2cpp_runtime_helper_022b2c90();
  pSStack_88 = pSVar26;
  pPStack_80 = unaff_R12;
  if (g_data_057ae56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Gradient Colors");
    il2cpp_runtime_helper_023445d0(&"Reset Colors");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Effect");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae56e = '\x01';
  }
  pSVar10 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  parent_00 = (MethodInfo_255A0F0 *)0x0;
  pSVar26 = pSVar10;
  UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor
            ((UI_EditProfileProfilePanel___c__DisplayClass22_0_o *)pSVar10,(MethodInfo *)0x0);
  if (pSVar10 != (System_Type_array *)0x0) {
    ((Settings_ProfileSettings_Fields *)&pSVar10->bounds)->Settings =
         (System_Collections_Specialized_OrderedDictionary_o *)__this_06;
    il2cpp_runtime_helper_022b4080((Settings_ProfileSettings_Fields *)&pSVar10->bounds);
    pSVar10->max_length = (il2cpp_array_size_t)in_R9;
    il2cpp_runtime_helper_022b4080(&pSVar10->max_length,in_R9);
    ppSStack_90 = (Settings_StringSetting_o **)pSVar10->m_Items;
    pSVar10->m_Items[0] = (System_Type_o *)in_stack_ffffffffffffffb0;
    il2cpp_runtime_helper_022b4080(ppSStack_90,in_stack_ffffffffffffffb0);
    pSVar10->m_Items[1] = (System_Type_o *)in_stack_ffffffffffffffb8;
    il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 1,in_stack_ffffffffffffffb8);
    pSVar10->m_Items[2] = (System_Type_o *)in_stack_ffffffffffffffc0;
    il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 2,in_stack_ffffffffffffffc0);
    pSVar10->m_Items[3] = (System_Type_o *)CONCAT44(uStack_34,in_stack_ffffffffffffffc8);
    il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 3,
                       (Settings_NameSetting_o *)CONCAT44(uStack_34,in_stack_ffffffffffffffc8));
    *(byte *)(pSVar10->m_Items + 4) = in_R8B;
    in_R9 = (long *)pSVar10->max_length;
    if (*(int *)(TypeInfo_EditProfileProfilePanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    options = (System_String_array *)**(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8);
    SStack_98.hasValue = 0;
    SStack_98.value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)&SStack_98,260.0,MethodInfo_Nullable_1_Single);
    pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    in_RCX = "Effect";
    parent_00 = style;
    pSVar26 = (System_Type_array *)method;
    pSVar12 = (System_Type_array *)
              UI_ElementFactory__CreateDropdownSetting
                        ((UnityEngine_Transform_o *)method,(UI_ElementStyle_o *)style,
                         (Settings_BaseSetting_o *)in_R9,(System_String_o *)"Effect",options,"",
                         180.0,40.0,200.0,(System_Nullable_float__o)SStack_98,pUVar11,(MethodInfo *)0x0);
    if (pSVar12 != (System_Type_array *)0x0) {
      parent_00 = MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme;
      pSVar26 = pSVar12;
      __this_08 = in_stack_ffffffffffffffd0;
      pSVar13 = (System_Type_array *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar12,MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme)
      ;
      if (pSVar13 != (System_Type_array *)0x0) {
        parent_00 = (MethodInfo_255A0F0 *)0x0;
        UI_DropdownSettingElement__FixScale((UI_DropdownSettingElement_o *)pSVar13,(MethodInfo *)0x0);
        pSVar26 = pSVar13;
      }
      in_R9 = (long *)in_stack_ffffffffffffffd0;
      if (in_stack_ffffffffffffffd0 != (System_Type_array *)0x0) {
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffffd0,
                   (UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
        in_RCX = (UI_EditProfileProfilePanel_o *)0x0;
        pUVar14 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)method,(UI_ElementStyle_o *)style,"Gradient Colors",0,3,
                             (MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffffd0,pUVar14,(MethodInfo *)0x0);
        parent_00 = (MethodInfo_255A0F0 *)0x3;
        pSVar26 = (System_Type_array *)method;
        pSVar12 = (System_Type_array *)
                  UI_ElementFactory__CreateHorizontalGroup
                            ((UnityEngine_Transform_o *)method,10.0,3,(MethodInfo *)0x0);
        if (pSVar12 != (System_Type_array *)0x0) {
          cVar1 = *(char *)(pSVar10->m_Items + 4);
          parent_00 = (MethodInfo_255A0F0 *)0x0;
          in_R9 = (long *)UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
          pSVar22 = *ppSStack_90;
          if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar17 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
          pSVar26 = TypeInfo_UIManager;
          if (lVar17 != 0) {
            pUVar2 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
            pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pSVar26 = (System_Type_array *)in_R9;
            if (cVar1 == '\0') {
              UnityEngine_Events_UnityAction___ctor();
              in_RCX = "A";
              parent_00 = style;
              pUVar14 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar22,(System_String_o *)"A",pUVar2,
                                   "",60.0,30.0,pUVar11,(MethodInfo *)0x0);
              if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                pUVar15 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_06->fields)._guildColorA = pUVar15;
                in_RCX = __this_06;
                il2cpp_runtime_helper_022b4080(&(__this_06->fields)._guildColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar26 = pSVar12;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
                lVar17 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar17 != 0) {
                  pSVar22 = (Settings_StringSetting_o *)pSVar10->m_Items[1];
                  pUVar2 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                  pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  in_RCX = "B";
                  parent_00 = style;
                  pSVar26 = (System_Type_array *)in_R9;
                  pUVar14 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar22,(System_String_o *)"B",
                                       pUVar2,"",60.0,30.0,pUVar11,(MethodInfo *)0x0);
                  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar15 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_06->fields)._guildColorB = pUVar15;
                    in_RCX = __this_06;
                    il2cpp_runtime_helper_022b4080(&(__this_06->fields)._guildColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar26 = pSVar12;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
                    lVar17 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar17 != 0) {
                      pSVar3 = (Settings_NameSetting_o *)pSVar10->m_Items[2];
                      pUVar2 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                      pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      in_RCX = "C";
                      parent_00 = style;
                      pSVar26 = (System_Type_array *)in_R9;
                      pUVar14 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar3,(System_String_o *)"C",
                                           pUVar2,"",60.0,30.0,pUVar11,(MethodInfo *)0x0);
                      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar15 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_06->fields)._guildColorC = pUVar15;
                        in_RCX = __this_06;
                        il2cpp_runtime_helper_022b4080(&(__this_06->fields)._guildColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar26 = pSVar12;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
                        lVar17 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar17 != 0) {
                          pSVar3 = (Settings_NameSetting_o *)pSVar10->m_Items[3];
                          pUVar2 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                          pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          in_RCX = "D";
                          parent_00 = style;
                          pSVar26 = (System_Type_array *)in_R9;
                          pUVar14 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar3,
                                               (System_String_o *)"D",pUVar2,"",60.0,30.0,
                                               pUVar11,(MethodInfo *)0x0);
                          if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar15 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar27 = &(__this_06->fields)._guildColorD;
                            goto label_043fe805;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              UnityEngine_Events_UnityAction___ctor();
              in_RCX = "A";
              parent_00 = style;
              pUVar14 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar22,(System_String_o *)"A",pUVar2,
                                   "",60.0,30.0,pUVar11,(MethodInfo *)0x0);
              if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                pUVar15 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_06->fields)._nameColorA = pUVar15;
                in_RCX = __this_06;
                il2cpp_runtime_helper_022b4080(&(__this_06->fields)._nameColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar26 = pSVar12;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
                lVar17 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar17 != 0) {
                  pSVar22 = (Settings_StringSetting_o *)pSVar10->m_Items[1];
                  pUVar2 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                  pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  in_RCX = "B";
                  parent_00 = style;
                  pSVar26 = (System_Type_array *)in_R9;
                  pUVar14 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar22,(System_String_o *)"B",
                                       pUVar2,"",60.0,30.0,pUVar11,(MethodInfo *)0x0);
                  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar15 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_06->fields)._nameColorB = pUVar15;
                    in_RCX = __this_06;
                    il2cpp_runtime_helper_022b4080(&(__this_06->fields)._nameColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar26 = pSVar12;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
                    lVar17 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar17 != 0) {
                      pSVar3 = (Settings_NameSetting_o *)pSVar10->m_Items[2];
                      pUVar2 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                      pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      in_RCX = "C";
                      parent_00 = style;
                      pSVar26 = (System_Type_array *)in_R9;
                      pUVar14 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar3,(System_String_o *)"C",
                                           pUVar2,"",60.0,30.0,pUVar11,(MethodInfo *)0x0);
                      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar15 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_06->fields)._nameColorC = pUVar15;
                        in_RCX = __this_06;
                        il2cpp_runtime_helper_022b4080(&(__this_06->fields)._nameColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar26 = pSVar12;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
                        lVar17 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar17 != 0) {
                          pSVar3 = (Settings_NameSetting_o *)pSVar10->m_Items[3];
                          pUVar2 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                          pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          in_RCX = "D";
                          parent_00 = style;
                          pSVar26 = (System_Type_array *)in_R9;
                          pUVar14 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar3,
                                               (System_String_o *)"D",pUVar2,"",60.0,30.0,
                                               pUVar11,(MethodInfo *)0x0);
                          if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar15 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar27 = &(__this_06->fields)._nameColorD;
label_043fe805:
                            *ppUVar27 = pUVar15;
                            in_RCX = __this_06;
                            pSVar13 = __this_08;
                            il2cpp_runtime_helper_022b4080(ppUVar27,pUVar15);
                            UI_CollapsibleToggleSection__AddChild
                                      ((UI_CollapsibleToggleSection_o *)__this_08,
                                       (UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
                            pSVar12 = (System_Type_array *)
                                      UI_ElementFactory__CreateHorizontalGroup
                                                ((UnityEngine_Transform_o *)method,8.0,3,(MethodInfo *)0x0);
                            *(undefined1 *)(pSVar10->m_Items + 10) = *(undefined1 *)(pSVar10->m_Items + 4);
                            pSVar10->m_Items[5] = (System_Type_o *)pSVar10->max_length;
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 5);
                            pSVar10->m_Items[6] = (System_Type_o *)pSVar10->m_Items[0];
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 6);
                            pSVar10->m_Items[7] = (System_Type_o *)pSVar10->m_Items[1];
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 7);
                            pSVar10->m_Items[8] = (System_Type_o *)pSVar10->m_Items[2];
                            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 8);
                            parent_00 = (MethodInfo_255A0F0 *)pSVar10->m_Items[3];
                            pSVar26 = (System_Type_array *)(pSVar10->m_Items + 9);
                            pSVar10->m_Items[9] = (System_Type_o *)parent_00;
                            il2cpp_runtime_helper_022b4080();
                            if (pSVar12 != (System_Type_array *)0x0) {
                              parent_00 = (MethodInfo_255A0F0 *)0x0;
                              pSVar26 = pSVar12;
                              pUVar16 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
                              if (style != (MethodInfo_255A0F0 *)0x0) {
                                fontSize = *(int32_t *)
                                            &((Settings_NameSetting_Fields *)&style->invoker_method)->
                                             DefaultValue;
                                pSVar9 = (System_String_o *)
                                         (*(__this_06->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this_06,
                                                    (__this_06->klass->vtable)._4_get_ThemePanel.method);
                                __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar9,(MethodInfo *)0x0)
                                ;
                                pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
                                ;
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateTextButton
                                          (pUVar16,__this_01,"Reset Colors",0.0,pUVar11,(MethodInfo *)0x0);
                                UI_CollapsibleToggleSection__AddChild
                                          ((UI_CollapsibleToggleSection_o *)pSVar13,
                                           (UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae576 == '\0') {
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fe9c6;
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fe9d2;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fe9de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fe9ea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fe9f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea32;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea3e;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea4a;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea56;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea62;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateGuildRoleSpriteButton_b__0);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fea9e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feaaa;
    il2cpp_runtime_helper_023445d0(&"GuildRoleSpriteButton");
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feab6;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae576 = '\x01';
  }
  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feacc;
  __this_02 = (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fead9;
  UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(__this_02,(MethodInfo *)0x0);
  SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar26;
  pUVar14 = extraout_RDX;
  if (__this_02 == (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
label_043ff22f:
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff234;
    il2cpp_runtime_helper_022b2c90();
label_043ff234:
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff239;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    (__this_02->fields).settings = (Settings_ProfileSettings_o *)in_RCX;
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feaf9;
    il2cpp_runtime_helper_022b4080(&__this_02->fields,in_RCX);
    (__this_02->fields).__4__this = (UI_EditProfileProfilePanel_o *)pSVar26;
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feb12;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).__4__this,pSVar26);
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feb26;
    in_R9 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar18 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feb50;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feb5a;
    pSVar10 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
    if ((System_Type_array *)in_R9 == (System_Type_array *)0x0) goto label_043ff22f;
    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar10;
    if (pSVar10 == (System_Type_array *)0x0) {
label_043feb83:
      if ((int)((System_Type_array *)in_R9)->max_length != 0) {
        ((System_Type_array *)in_R9)->m_Items[0] = (System_Type_o *)pSVar10;
        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feb9e;
        il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items);
        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43febaf;
        SVar18.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (SVar18.fields.value != 0) {
          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43febc6;
          lVar17 = il2cpp_runtime_helper_023051f0(SVar18.fields.value);
          if (lVar17 == 0) goto label_043ff239;
        }
        if (1 < (uint)((System_Type_array *)in_R9)->max_length) {
          ((System_Type_array *)in_R9)->m_Items[1] = (System_Type_o *)SVar18.fields.value;
          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43febea;
          il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 1);
          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43febfb;
          SVar18.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (SVar18.fields.value != 0) {
            pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fec12;
            lVar17 = il2cpp_runtime_helper_023051f0(SVar18.fields.value);
            if (lVar17 == 0) goto label_043ff239;
          }
          if (2 < (uint)((System_Type_array *)in_R9)->max_length) {
            ((System_Type_array *)in_R9)->m_Items[2] = (System_Type_o *)SVar18.fields.value;
            pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fec36;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 2);
            pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fec47;
            SVar18.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if (SVar18.fields.value != 0) {
              pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fec5e;
              lVar17 = il2cpp_runtime_helper_023051f0(SVar18.fields.value);
              if (lVar17 == 0) goto label_043ff239;
            }
            if (3 < (uint)((System_Type_array *)in_R9)->max_length) {
              ((System_Type_array *)in_R9)->m_Items[3] = (System_Type_o *)SVar18.fields.value;
              pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fec82;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 3);
              pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fec93;
              SVar18.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if (SVar18.fields.value != 0) {
                pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fecaa;
                lVar17 = il2cpp_runtime_helper_023051f0(SVar18.fields.value);
                if (lVar17 == 0) goto label_043ff239;
              }
              if (4 < (uint)((System_Type_array *)in_R9)->max_length) {
                ((System_Type_array *)in_R9)->m_Items[4] = (System_Type_o *)SVar18.fields.value;
                pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fecd6;
                il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 4,SVar18.fields.value);
                pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fece5;
                pUVar14 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fecff;
                UnityEngine_GameObject___ctor_4dfc440
                          (pUVar14,"GuildRoleSpriteButton",(System_Type_array *)in_R9,(MethodInfo *)0x0);
                SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(intptr_t)&TypeInfo_GameObject;
                if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                  in_R9 = &TypeInfo_GameObject;
                  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fed15;
                  pUVar16 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
                  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fed2d;
                    UnityEngine_Transform__SetParent_4e09e30
                              (pUVar16,(UnityEngine_Transform_o *)parent_00,0,(MethodInfo *)0x0);
                    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fed3f;
                    pSVar19 = (Settings_ProfileSettings_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pSVar19 != (Settings_ProfileSettings_o *)0x0) {
                      pSVar28 = pSVar19->klass;
                      uVar23._0_4_ = pSVar28[1]._2.static_fields_size;
                      uVar23._4_4_ = pSVar28[1]._2.thread_static_fields_size;
                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fed66;
                      (**(code **)&pSVar28[1]._2.element_size)(0x43820000,pSVar19,uVar23);
                      pSVar28 = pSVar19->klass;
                      uVar4._0_2_ = pSVar28[1]._2.interfaces_count;
                      uVar4._2_2_ = pSVar28[1]._2.interface_offsets_count;
                      uVar4._4_1_ = pSVar28[1]._2.typeHierarchyDepth;
                      uVar4._5_1_ = pSVar28[1]._2.genericRecursionDepth;
                      uVar4._6_1_ = pSVar28[1]._2.rank;
                      uVar4._7_1_ = pSVar28[1]._2.minimumAlignment;
                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fed81;
                      (**(code **)&pSVar28[1]._2.field_count)(0x42200000,pSVar19,uVar4);
                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fed93;
                      pIVar20 = UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_Image_GetComponent_Image);
                      SVar18.fields.value =
                           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar19;
                      if (pIVar20 != (Il2CppObject *)0x0) {
                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fedbd;
                        (*pIVar20->klass->vtable[0x17].methodPtr)
                                  (0x3f800000,0x3f800000,pIVar20,pIVar20->klass->vtable[0x17].method);
                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fedcf;
                        __this_03 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_Button_GetComponent_Button);
                        if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fedea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fee9a;
                          value.fields.m_NormalColor.fields.b = 1.0;
                          value.fields.m_NormalColor.fields.a = 0.08;
                          value.fields.m_NormalColor.fields.r = 1.0;
                          value.fields.m_NormalColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.r = 1.0;
                          value.fields.m_HighlightedColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.b = 1.0;
                          value.fields.m_HighlightedColor.fields.a = 0.16;
                          value.fields.m_PressedColor.fields.r = 1.0;
                          value.fields.m_PressedColor.fields.g = 1.0;
                          value.fields.m_PressedColor.fields.b = 1.0;
                          value.fields.m_PressedColor.fields.a = 0.24;
                          value.fields.m_SelectedColor.fields.r = 1.0;
                          value.fields.m_SelectedColor.fields.g = 1.0;
                          value.fields.m_SelectedColor.fields.b = 1.0;
                          value.fields.m_SelectedColor.fields.a = 0.16;
                          value.fields.m_DisabledColor.fields.r = 1.0;
                          value.fields.m_DisabledColor.fields.g = 1.0;
                          value.fields.m_DisabledColor.fields.b = 1.0;
                          value.fields.m_DisabledColor.fields.a = 0.05;
                          value.fields.m_ColorMultiplier = 1.0;
                          value.fields.m_FadeDuration = 0.1;
                          UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
                          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feeae;
                          SVar18.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feebc;
                          pSVar21 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                          if (SVar18.fields.value != 0) {
                            if (pSVar21 != (System_Type_o *)0x0) {
                              pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feedc;
                              lVar17 = il2cpp_runtime_helper_023051f0(pSVar21);
                              if (lVar17 == 0) goto label_043ff239;
                            }
                            if ((int)((System_Type_array *)SVar18.fields.value)->max_length != 0) {
                              ((System_Type_array *)SVar18.fields.value)->m_Items[0] = pSVar21;
                              pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feeff;
                              il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar18.fields.value)->m_Items);
                              pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fef10;
                              pSVar21 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar21 != (System_Type_o *)0x0) {
                                pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fef27;
                                lVar17 = il2cpp_runtime_helper_023051f0(pSVar21);
                                if (lVar17 == 0) goto label_043ff239;
                              }
                              if (1 < (uint)((System_Type_array *)SVar18.fields.value)->max_length) {
                                ((System_Type_array *)SVar18.fields.value)->m_Items[1] = pSVar21;
                                pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fef4a;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar18.fields.value)->m_Items + 1);
                                pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fef5b;
                                pSVar21 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                if (pSVar21 != (System_Type_o *)0x0) {
                                  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fef72;
                                  lVar17 = il2cpp_runtime_helper_023051f0(pSVar21);
                                  if (lVar17 == 0) goto label_043ff239;
                                }
                                if (2 < (uint)((System_Type_array *)SVar18.fields.value)->max_length) {
                                  ((System_Type_array *)SVar18.fields.value)->m_Items[2] = pSVar21;
                                  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fef98;
                                  il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar18.fields.value)->m_Items + 2,
                                                     pSVar21);
                                  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fefa0;
                                  __this_04 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fefba;
                                  UnityEngine_GameObject___ctor_4dfc440
                                            (__this_04,"Text",(System_Type_array *)SVar18.fields.value,
                                             (MethodInfo *)0x0);
                                  if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
                                    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fefcd;
                                    pUVar16 = UnityEngine_GameObject__get_transform
                                                        (__this_04,(MethodInfo *)0x0);
                                    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43fefda;
                                    parent = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
                                    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feff2;
                                      UnityEngine_Transform__SetParent_4e09e30
                                                (pUVar16,parent,0,(MethodInfo *)0x0);
                                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff004;
                                      __this_05 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (g_data_057a694c == '\0') {
                                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff021;
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                        g_data_057a694c = '\x01';
                                      }
                                      SVar18.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      pUVar14 = extraout_RDX;
                                      if (__this_05 != (UnityEngine_RectTransform_o *)0x0) {
                                        in_R9 = &TypeInfo_Vector2;
                                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff050;
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_05,
                                                   (UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                   (MethodInfo *)0x0);
                                        if (g_data_057a9c86 == '\0') {
                                          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff065;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a9c86 = '\x01';
                                        }
                                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff085;
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_05,
                                                   (UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff097;
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_05,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff0a9;
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_05,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff0bb;
                                        pSVar22 = (Settings_StringSetting_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_04,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                        SVar18.fields.value =
                                             (System_RuntimeTypeHandle_Fields)(pSVar26->m_Items + 0xd);
                                        pSVar26->m_Items[0xd] = (System_Type_o *)pSVar22;
                                        pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff0d9;
                                        il2cpp_runtime_helper_022b4080(SVar18.fields.value);
                                        if ((TMPro_TMP_Text_o *)pSVar26->m_Items[0xd] !=
                                            (TMPro_TMP_Text_o *)0x0) {
                                          pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff0f5;
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pSVar26->m_Items[0xd],1,
                                                     (MethodInfo *)0x0);
                                          if ((extraout_RDX != (UnityEngine_GameObject_o *)0x0) &&
                                             ((TMPro_TMP_Text_o *)
                                              ((Settings_ProfileSettings_o *)SVar18.fields.value)->klass !=
                                              (TMPro_TMP_Text_o *)0x0)) {
                                            pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff11a;
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)
                                                       ((Settings_ProfileSettings_o *)SVar18.fields.value)->
                                                       klass,(float)(int)(extraout_RDX->fields).m_CachedPtr,
                                                       (MethodInfo *)0x0);
                                            if ((TMPro_TMP_Text_o *)
                                                ((Settings_ProfileSettings_o *)SVar18.fields.value)->klass !=
                                                (TMPro_TMP_Text_o *)0x0) {
                                              pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff132;
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)
                                                         ((Settings_ProfileSettings_o *)SVar18.fields.value)->
                                                         klass,1,(MethodInfo *)0x0);
                                              if ((TMPro_TMP_Text_o *)
                                                  ((Settings_ProfileSettings_o *)SVar18.fields.value)->klass
                                                  != (TMPro_TMP_Text_o *)0x0) {
                                                pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff14a;
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)
                                                           ((Settings_ProfileSettings_o *)SVar18.fields.value)
                                                           ->klass,0x1001,(MethodInfo *)0x0);
                                                pSVar28 = ((Settings_ProfileSettings_o *)SVar18.fields.value)
                                                          ->klass;
                                                if (pSVar28 != (Settings_ProfileSettings_c *)0x0) {
                                                  pvVar5 = (pSVar28->_1).image;
                                                  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff170;
                                                  (**(code **)((long)pvVar5 + 0x2a8))
                                                            (0x3f800000,0x3f800000,pSVar28,
                                                             *(undefined8 *)((long)pvVar5 + 0x2b0));
                                                  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff178;
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            ((UI_EditProfileProfilePanel_o *)pSVar28,
                                                             (TMPro_TextMeshProUGUI_o *)
                                                             ((Settings_ProfileSettings_o *)
                                                             SVar18.fields.value)->klass,method_01);
                                                  pSVar19 = (__this_02->fields).settings;
                                                  if ((pSVar19 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar22 = (pSVar19->fields).GuildRoleSprite,
                                                     pSVar22 != (Settings_StringSetting_o *)0x0)) {
                                                    pSVar28 = ((Settings_ProfileSettings_o *)
                                                              SVar18.fields.value)->klass;
                                                    pSVar9 = (pSVar22->fields)._value;
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff1b5;
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff1c1;
                                                    pSVar9 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar9,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                    if (pSVar28 != (Settings_ProfileSettings_c *)0x0) {
                                                      pvVar5 = (pSVar28->_1).image;
                                                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff1dc;
                                                      (**(code **)((long)pvVar5 + 0x558))
                                                                (pSVar28,pSVar9,
                                                                 *(undefined8 *)((long)pvVar5 + 0x560));
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_03->fields).m_CanvasGroupCache;
                                                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff1f2;
                                                      pUVar11 = (UnityEngine_Events_UnityAction_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff20c;
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      SVar18.fields.value = (System_RuntimeTypeHandle_Fields)0
                                                      ;
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,pUVar11,(MethodInfo *)0x0);
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
                                  goto label_043ff22f;
                                }
                              }
                            }
                            goto label_043ff234;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_043ff22f;
              }
            }
          }
        }
      }
      goto label_043ff234;
    }
    pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43feb7a;
    lVar17 = il2cpp_runtime_helper_023051f0(pSVar10);
    if (lVar17 != 0) goto label_043feb83;
  }
label_043ff239:
  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff23e;
  uVar23 = il2cpp_runtime_helper_0231b270();
  lVar17 = 0;
  pUStackY_1c0 = (UnityEngine_GameObject_o *)0x43ff248;
  il2cpp_runtime_helper_022b2b10(uVar23);
  pSStackY_1d0 = (System_Type_array *)SVar18.fields.value;
  pSStackY_1c8 = (System_Type_array *)in_R9;
  pUStackY_1c0 = pUVar14;
  if (g_data_057ae57b == '\0') {
    lStackY_1d8 = 0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    lStackY_1d8 = 0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    lStackY_1d8 = 0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStackY_1d8 = 0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    lStackY_1d8 = 0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    lStackY_1d8 = 0x43ff283;
    pPVar24 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar24 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_1d8 = 0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_1d8 = 0x43ff2a6;
    pPVar24 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    lStackY_1d8 = 0x43ff2ba;
    pSVar9 = (System_String_o *)PhotonExtensions__GetCustomProperty(pPVar24,"display_name",(MethodInfo *)0x0);
    value_00 = (long *)(System_String_o *)0x0;
    if ((pSVar9 != (System_String_o *)0x0) &&
       (value_00 = (long *)(System_String_o *)0x0, (Il2CppClass *)pSVar9->klass == g_data_057b9c00)) {
      value_00 = (long *)pSVar9;
    }
    lVar25 = 0;
    lStackY_1d8 = 0x43ff2e0;
    bVar8 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_1d8 = 0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_1d8 = 0x43ff300;
    pPVar24 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar24 == (Photon_Realtime_Player_o *)0x0) goto label_043ff43e;
    lVar25 = 0;
    lStackY_1d8 = 0x43ff314;
    bVar8 = System_String__IsNullOrEmpty
                      (*(System_String_o **)&(pPVar24->fields)._HasRejoined_k__BackingField,(MethodInfo *)0x0)
    ;
    if ((char)bVar8 != '\0') goto label_043ff3b5;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_1d8 = 0x43ff32d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_1d8 = 0x43ff334;
    pPVar24 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    lStackY_1d8 = 0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    lStackY_1d8 = 0x43ff3ac;
    pPVar24 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar24 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    value_00 = &TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      lStackY_1d8 = 0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_1d8 = 0x43ff3d4;
    pSVar9 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    lStackY_1d8 = 0x43ff3de;
    bVar8 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        lStackY_1d8 = 0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return;
    }
    if (lVar17 == 0) {
      return;
    }
    if (*(long *)(lVar17 + 0x30) == 0) {
      return;
    }
    lVar25 = 0;
    lStackY_1d8 = 0x43ff3fb;
    bVar8 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(lVar17 + 0x30) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pPVar24 = *(Photon_Realtime_Player_o **)(lVar17 + 0x30);
  }
  if (pPVar24 != (Photon_Realtime_Player_o *)0x0) {
    return;
  }
label_043ff43e:
  lStackY_1d8 = 0x43ff443;
  uStackY_1e8 = il2cpp_runtime_helper_022b2c90();
  pSStackY_1e0 = (System_String_o *)value_00;
  lStackY_1d8 = lVar17;
  if (g_data_057ae57a == '\0') {
    pcStackY_1f0 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStackY_1f0 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStackY_1f0 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStackY_1f0 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStackY_1f0 = (code *)0x43ff4aa;
  pSVar9 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStackY_1f0 = (code *)0x43ff4b4;
  bVar8 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStackY_1f0 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return;
  }
  if ((lVar25 == 0) || (*(long *)(lVar25 + 0x68) == 0)) {
    return;
  }
  pcStackY_1f0 = (code *)0x43ff4d1;
  bVar8 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(lVar25 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(long *)(lVar25 + 0x68) == 0) {
    pcStackY_1f0 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
    il2cpp_runtime_helper_022b2c90();
    pcStackY_1f0 = (code *)&TypeInfo_AccountManager;
    if (g_data_057ae57c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae57c = '\x01';
    }
    pSStackY_1f8 = (System_String_o *)0x0;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar24 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar24 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar24 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar24 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar8 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar24,&pSStackY_1f8,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
    }
    PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStackY_1f8,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.EditProfileProfilePanel$$RefreshSinglePreview
// il2cpp: void UI_EditProfileProfilePanel__RefreshSinglePreview (UI_EditProfileProfilePanel_o* __this, UnityEngine_GameObject_o* tmpObj, PatreonEffects_NameEffectController_o* controller, System_String_o* rawText, bool effectEnabled, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool applyHexColor, const MethodInfo* method);
// 0x43ffa00

void UI_EditProfileProfilePanel__RefreshSinglePreview
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_GameObject_o *tmpObj,
               PatreonEffects_NameEffectController_o *controller,System_String_o *rawText,
               bool_conflict effectEnabled,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC
               ,Settings_ColorSetting_o *colorD,bool_conflict applyHexColor,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityAction_c *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  uint in_EAX;
  bool_conflict bVar4;
  TMPro_TMP_Text_o *__this_00;
  PatreonEffects_NameEffectSettings_o *settings;
  System_String_o *pSVar5;
  TMPro_TMP_Text_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_Color_Fields UVar6;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (g_data_057ae573 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae573 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (TMPro_TMP_Text_o *)tmpObj;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmpObj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (tmpObj == (UnityEngine_GameObject_o *)0x0) goto label_043ffc62;
    __this_00 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent_object_(tmpObj,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = __this_00;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (__this_00 == (TMPro_TMP_Text_o *)0x0) goto label_043ffc62;
      TMPro_TMP_Text__set_richText(__this_00,1,(MethodInfo *)0x0);
      if ((char)applyHexColor != '\0') {
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        rawText = MiscExtensions__HexColor(rawText,(MethodInfo *)0x0);
      }
      (*(__this_00->klass->vtable)._66_set_text.methodPtr)
                (__this_00,rawText,(__this_00->klass->vtable)._66_set_text.method);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (TMPro_TMP_Text_o *)controller;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)controller,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if ((char)effectEnabled != '\0') {
      if (effectSetting == (Settings_StringSetting_o *)0x0) goto label_043ffc62;
      __this_01 = (TMPro_TMP_Text_o *)(effectSetting->fields)._value;
      bVar4 = PatreonEffects_NameEffectPresets__TryResolve
                        ((System_String_o *)__this_01,(int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        __this_01 = (TMPro_TMP_Text_o *)(ulong)uStack_38._4_4_;
        settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_38._4_4_,(MethodInfo *)0x0);
        if ((((colorA != (Settings_ColorSetting_o *)0x0) &&
             (__this_01 = (TMPro_TMP_Text_o *)(colorA->fields)._value, __this_01 != (TMPro_TMP_Text_o *)0x0))
            && (UVar6 = (UnityEngine_Color_Fields)
                        Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0),
               settings != (PatreonEffects_NameEffectSettings_o *)0x0)) &&
           (((settings->fields).gradientA.fields = UVar6, colorB != (Settings_ColorSetting_o *)0x0 &&
            (__this_01 = (TMPro_TMP_Text_o *)(colorB->fields)._value, __this_01 != (TMPro_TMP_Text_o *)0x0))))
        {
          UVar6 = (UnityEngine_Color_Fields)
                  Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
          (settings->fields).gradientB.fields = UVar6;
          if ((colorC != (Settings_ColorSetting_o *)0x0) &&
             (__this_01 = (TMPro_TMP_Text_o *)(colorC->fields)._value, __this_01 != (TMPro_TMP_Text_o *)0x0))
          {
            UVar6 = (UnityEngine_Color_Fields)
                    Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
            (settings->fields).gradientC.fields = UVar6;
            if ((colorD != (Settings_ColorSetting_o *)0x0) &&
               (__this_01 = (TMPro_TMP_Text_o *)(colorD->fields)._value, __this_01 != (TMPro_TMP_Text_o *)0x0)
               ) {
              UVar6 = (UnityEngine_Color_Fields)
                      Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
              (settings->fields).gradientD.fields = UVar6;
              if (controller != (PatreonEffects_NameEffectController_o *)0x0) {
                PatreonEffects_NameEffectController__Apply(controller,settings,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_043ffc62;
      }
    }
    if (controller == (PatreonEffects_NameEffectController_o *)0x0) {
label_043ffc62:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae577 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ae577 = '\x01';
      }
      __this_02 = (__this_01->fields).m_OnDirtyMaterialCallback;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
        if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
          pUVar2 = (__this_01->fields).m_OnDirtyMaterialCallback;
          __this_02 = *(UnityEngine_Events_UnityAction_o **)(lVar1 + 0x18);
          if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                             ((System_String_o *)__this_02,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
            pUVar3 = pUVar2->klass;
            vtableDispatch = pUVar3[2].vtable._1_Finalize.methodPtr;
            (*vtableDispatch)
                      (pUVar2,pSVar5,pUVar3[2].vtable._1_Finalize.method,pUVar3,vtableDispatch);
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    PatreonEffects_NameEffectController__Clear(controller,(MethodInfo *)0x0);
  }
  return;
}


// UI.EditProfileProfilePanel$$CreateProfileImage
// il2cpp: void UI_EditProfileProfilePanel__CreateProfileImage (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x43fd920

void UI_EditProfileProfilePanel__CreateProfileImage(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  char cVar2;
  int32_t fontSize;
  UnityEngine_Object_o *pUVar3;
  System_String_o *selectedRoleName;
  System_String_array *options;
  UI_ColorPickPopup_o *pUVar4;
  Settings_NameSetting_o *pSVar5;
  undefined8 uVar6;
  void *pvVar7;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar8;
  uint uVar9;
  System_String_o *pSVar10;
  UI_ElementStyle_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  TMPro_TMP_FontAsset_o *pTVar13;
  System_Type_array *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar14;
  System_Type_array *pSVar15;
  System_Type_array *pSVar16;
  UI_ColorSettingElement_o *pUVar17;
  System_Type_array *pSVar18;
  UnityEngine_Transform_o *pUVar19;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this_02;
  long lVar20;
  System_RuntimeTypeHandle_o SVar21;
  Settings_ProfileSettings_o *pSVar22;
  Il2CppObject *pIVar23;
  UnityEngine_UI_Selectable_o *__this_03;
  System_Type_o *pSVar24;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_05;
  Settings_StringSetting_o *pSVar25;
  undefined8 uVar26;
  Photon_Realtime_Player_o *pPVar27;
  UI_EditProfileProfilePanel_o *rawText;
  MethodInfo *method_00;
  MethodInfo_255A0F0 *style;
  UnityEngine_GameObject_o *extraout_RDX;
  MethodInfo *method_01;
  long *plVar28;
  TMPro_TMP_Text_o *pTVar29;
  TMPro_TMP_Text_o *__this_06;
  MethodInfo_255A0F0 *parent_00;
  long lVar30;
  TMPro_TMP_FontAsset_o *pTVar31;
  UI_EditProfileProfilePanel_o *__this_07;
  System_Type_array *pSVar32;
  UI_ColorSettingElement_o **ppUVar33;
  Settings_ProfileSettings_c *pSVar34;
  UI_CategoryPanel_o *__this_08;
  byte in_R8B;
  long *in_R9;
  long *tmpObj;
  bool bVar35;
  System_String_o *pSStackY_260;
  code *pcStackY_258;
  undefined8 uStackY_250;
  System_String_o *pSStackY_248;
  long lStackY_240;
  System_Type_array *pSStackY_238;
  System_Type_array *pSStackY_230;
  UnityEngine_GameObject_o *pUStackY_228;
  System_Nullable_float__Fields SStack_100;
  Settings_StringSetting_o **ppSStack_f8;
  System_Type_array *pSStack_f0;
  UI_EditProfileProfilePanel_o *pUStack_e8;
  long lStack_e0;
  TMPro_TMP_FontAsset_o *pTStack_d8;
  UnityEngine_GameObject_o *pUStack_d0;
  long *plStack_c8;
  Settings_StringSetting_o *in_stack_ffffffffffffff48;
  Settings_StringSetting_o *in_stack_ffffffffffffff50;
  Settings_NameSetting_o *in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 uStack_9c;
  System_Type_array *in_stack_ffffffffffffff68;
  System_Type_array *__this_09;
  
  if (g_data_057ae574 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    g_data_057ae574 = '\x01';
  }
  pSVar10 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar11 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  rawText = (UI_EditProfileProfilePanel_o *)0x0;
  UI_ElementStyle___ctor(pUVar11,0x18,100.0,20.0,pSVar10,(MethodInfo *)0x0);
  lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._profileImage;
  plVar28 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._profileImage;
  pTVar29 = (TMPro_TMP_Text_o *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar29 = (TMPro_TMP_Text_o *)0x0;
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x20) != 0)) {
    pUVar19 = (__this->fields)._group;
    pSVar10 = *(System_String_o **)(*(long *)(lVar20 + 0x20) + 0x18);
    if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = UI_UIManager__GetProfileIcon(pSVar10,(MethodInfo *)0x0);
    pSVar10 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar10,(MethodInfo *)0x0);
    pUVar12 = UI_ElementFactory__CreateRawImage(pUVar19,pUVar11,pSVar10,256.0,256.0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar12;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar12);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_06 = pTVar29;
  if (g_data_057ae578 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae578 = '\x01';
  }
  if ((pTVar29 != (TMPro_TMP_Text_o *)0x0) &&
     (lVar30 = *(long *)&(pTVar29->fields).m_SkipLayoutUpdate, lVar30 != 0)) {
    pSVar10 = *(System_String_o **)(lVar30 + 0x18);
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = Anticheat_ChatFilter__FilterBadWords(pSVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = (TMPro_TMP_Text_o *)0x0;
    pSVar10 = MiscExtensions__HexColor(pSVar10,(MethodInfo *)0x0);
    lVar30 = *(long *)&(pTVar29->fields).m_RaycastTarget;
    if (lVar30 != 0) {
      selectedRoleName = *(System_String_o **)(lVar30 + 0x18);
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                ((Photon_Realtime_Player_o *)0x0,pSVar10,selectedRoleName,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae579 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae579 = '\x01';
  }
  tmpObj = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pTVar13 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar18 = (System_Type_array *)0x0;
  pTVar31 = pTVar13;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_043fdc8f:
    pTVar13 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Type_array *)0x0;
    pTVar31 = pTVar13;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_spriteAsset(__this_06,(TMPro_TMP_SpriteAsset_o *)pTVar13,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_font(__this_06,pTVar13,(MethodInfo *)0x0);
    goto label_043fdc8f;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae572 == '\0') {
    plStack_c8 = (long *)0x43fdd14;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    plStack_c8 = (long *)0x43fdd20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    plStack_c8 = (long *)0x43fdd2c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae572 = '\x01';
  }
  pSVar32 = *(System_Type_array **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  __this_07 = (UI_EditProfileProfilePanel_o *)0x0;
  plStack_c8 = (long *)0x43fdd4f;
  uVar9 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (pSVar32 != (System_Type_array *)0x0) {
    plVar28 = (long *)(ulong)uVar9;
    if ((Settings_NameSetting_o *)pSVar32->m_Items[2] != (Settings_NameSetting_o *)0x0) {
      pSVar18 = *(System_Type_array **)&(pTVar31->fields).m_FaceInfo.fields.m_SuperscriptSize;
      rawText = (UI_EditProfileProfilePanel_o *)
                (((Settings_NameSetting_o *)pSVar32->m_Items[2])->fields)._value;
      if ((char)uVar9 == '\0') {
        in_R8B = false;
      }
      else {
        if ((Settings_BoolSetting_o *)pSVar32->m_Items[0xc] == (Settings_BoolSetting_o *)0x0)
        goto label_043fde43;
        in_R8B = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar32->m_Items[0xc])->fields).DefaultValue + 1
                          ) != '\0';
      }
      in_stack_ffffffffffffff50 = (Settings_StringSetting_o *)pSVar32->m_Items[0x10];
      in_stack_ffffffffffffff58 = (Settings_NameSetting_o *)pSVar32->m_Items[0x11];
      in_stack_ffffffffffffff48 = (Settings_StringSetting_o *)pSVar32->m_Items[0xf];
      in_R9 = (long *)pSVar32->m_Items[0xd];
      in_stack_ffffffffffffff60 = 1;
      plStack_c8 = (long *)0x43fddc8;
      UI_EditProfileProfilePanel__RefreshSinglePreview
                (__this_07,(UnityEngine_GameObject_o *)pSVar18,
                 *(PatreonEffects_NameEffectController_o **)
                  &(pTVar31->fields).m_FaceInfo.fields.m_SubscriptSize,(System_String_o *)rawText,(uint)in_R8B
                 ,(Settings_StringSetting_o *)in_R9,(Settings_ColorSetting_o *)pSVar32->m_Items[0xe],
                 (Settings_ColorSetting_o *)in_stack_ffffffffffffff48,
                 (Settings_ColorSetting_o *)in_stack_ffffffffffffff50,
                 (Settings_ColorSetting_o *)in_stack_ffffffffffffff58,1,
                 (MethodInfo *)in_stack_ffffffffffffff68);
      tmpObj = *(long **)&(pTVar31->fields).m_FaceInfo.fields.m_AscentLine;
      __this = *(UI_EditProfileProfilePanel_o **)&(pTVar31->fields).m_FaceInfo.fields.m_MeanLine;
      plStack_c8 = (long *)0x43fdddb;
      pSVar18 = pSVar32;
      pSVar10 = UI_EditProfileProfilePanel__GetGuildPreviewText
                          (__this_07,(Settings_ProfileSettings_o *)pSVar32,method_00);
      if ((char)uVar9 == '\0') {
        bVar35 = false;
label_043fddf7:
        plStack_c8 = (long *)0x43fde2f;
        UI_EditProfileProfilePanel__RefreshSinglePreview
                  (__this_07,(UnityEngine_GameObject_o *)tmpObj,
                   (PatreonEffects_NameEffectController_o *)__this,pSVar10,(uint)bVar35,
                   (Settings_StringSetting_o *)pSVar32->m_Items[0x13],
                   (Settings_ColorSetting_o *)pSVar32->m_Items[0x14],
                   (Settings_ColorSetting_o *)pSVar32->m_Items[0x15],
                   (Settings_ColorSetting_o *)pSVar32->m_Items[0x16],
                   (Settings_ColorSetting_o *)pSVar32->m_Items[0x17],0,(MethodInfo *)in_stack_ffffffffffffff68
                  );
        if (g_data_057ae577 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
          g_data_057ae577 = '\x01';
        }
        __this_08 = *(UI_CategoryPanel_o **)&(pTVar31->fields).m_FaceInfo.fields.m_DescentLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_08,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          return;
        }
        lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
        if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x40), lVar20 != 0)) {
          plVar28 = *(long **)&(pTVar31->fields).m_FaceInfo.fields.m_DescentLine;
          __this_08 = *(UI_CategoryPanel_o **)(lVar20 + 0x18);
          if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                              ((System_String_o *)__this_08,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0)
          ;
          if (plVar28 != (long *)0x0) {
            lVar20 = *plVar28;
            (**(code **)(lVar20 + 0x558))
                      (plVar28,pSVar10,*(undefined8 *)(lVar20 + 0x560),lVar20,*(code **)(lVar20 + 0x558));
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        UI_CategoryPanel___ctor(__this_08,(MethodInfo *)0x0);
        return;
      }
      rawText = (UI_EditProfileProfilePanel_o *)0x0;
      if ((Settings_BoolSetting_o *)pSVar32->m_Items[0x12] != (Settings_BoolSetting_o *)0x0) {
        bVar35 = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar32->m_Items[0x12])->fields).DefaultValue +
                          1) != '\0';
        goto label_043fddf7;
      }
    }
  }
label_043fde43:
  plStack_c8 = (long *)0x43fde48;
  il2cpp_runtime_helper_022b2c90();
  pSStack_f0 = pSVar32;
  pUStack_e8 = __this;
  lStack_e0 = lVar20;
  pTStack_d8 = pTVar31;
  pUStack_d0 = (UnityEngine_GameObject_o *)tmpObj;
  plStack_c8 = plVar28;
  if (g_data_057ae56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Gradient Colors");
    il2cpp_runtime_helper_023445d0(&"Reset Colors");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Effect");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae56e = '\x01';
  }
  __this_01 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  parent_00 = (MethodInfo_255A0F0 *)0x0;
  pSVar32 = __this_01;
  UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor
            ((UI_EditProfileProfilePanel___c__DisplayClass22_0_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (System_Type_array *)0x0) {
    ((Settings_ProfileSettings_Fields *)&__this_01->bounds)->Settings =
         (System_Collections_Specialized_OrderedDictionary_o *)__this_07;
    il2cpp_runtime_helper_022b4080((Settings_ProfileSettings_Fields *)&__this_01->bounds);
    __this_01->max_length = (il2cpp_array_size_t)in_R9;
    il2cpp_runtime_helper_022b4080(&__this_01->max_length,in_R9);
    ppSStack_f8 = (Settings_StringSetting_o **)__this_01->m_Items;
    __this_01->m_Items[0] = (System_Type_o *)in_stack_ffffffffffffff48;
    il2cpp_runtime_helper_022b4080(ppSStack_f8,in_stack_ffffffffffffff48);
    __this_01->m_Items[1] = (System_Type_o *)in_stack_ffffffffffffff50;
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 1,in_stack_ffffffffffffff50);
    __this_01->m_Items[2] = (System_Type_o *)in_stack_ffffffffffffff58;
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 2,in_stack_ffffffffffffff58);
    __this_01->m_Items[3] = (System_Type_o *)CONCAT44(uStack_9c,in_stack_ffffffffffffff60);
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 3,
                       (Settings_NameSetting_o *)CONCAT44(uStack_9c,in_stack_ffffffffffffff60));
    *(byte *)(__this_01->m_Items + 4) = in_R8B;
    in_R9 = (long *)__this_01->max_length;
    if (*(int *)(TypeInfo_EditProfileProfilePanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    options = (System_String_array *)**(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8);
    SStack_100.hasValue = 0;
    SStack_100.value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)&SStack_100,260.0,MethodInfo_Nullable_1_Single);
    pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    rawText = "Effect";
    parent_00 = style;
    pSVar32 = pSVar18;
    pSVar15 = (System_Type_array *)
              UI_ElementFactory__CreateDropdownSetting
                        ((UnityEngine_Transform_o *)pSVar18,(UI_ElementStyle_o *)style,
                         (Settings_BaseSetting_o *)in_R9,(System_String_o *)"Effect",options,"",
                         180.0,40.0,200.0,(System_Nullable_float__o)SStack_100,pUVar14,(MethodInfo *)0x0);
    if (pSVar15 != (System_Type_array *)0x0) {
      parent_00 = MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme;
      pSVar32 = pSVar15;
      __this_09 = in_stack_ffffffffffffff68;
      pSVar16 = (System_Type_array *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar15,MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme)
      ;
      if (pSVar16 != (System_Type_array *)0x0) {
        parent_00 = (MethodInfo_255A0F0 *)0x0;
        UI_DropdownSettingElement__FixScale((UI_DropdownSettingElement_o *)pSVar16,(MethodInfo *)0x0);
        pSVar32 = pSVar16;
      }
      in_R9 = (long *)in_stack_ffffffffffffff68;
      if (in_stack_ffffffffffffff68 != (System_Type_array *)0x0) {
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffff68,
                   (UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
        rawText = (UI_EditProfileProfilePanel_o *)0x0;
        pUVar12 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pSVar18,(UI_ElementStyle_o *)style,"Gradient Colors",0,3,
                             (MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffff68,pUVar12,(MethodInfo *)0x0);
        parent_00 = (MethodInfo_255A0F0 *)0x3;
        pSVar32 = pSVar18;
        pSVar15 = (System_Type_array *)
                  UI_ElementFactory__CreateHorizontalGroup
                            ((UnityEngine_Transform_o *)pSVar18,10.0,3,(MethodInfo *)0x0);
        if (pSVar15 != (System_Type_array *)0x0) {
          cVar2 = *(char *)(__this_01->m_Items + 4);
          parent_00 = (MethodInfo_255A0F0 *)0x0;
          in_R9 = (long *)UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
          pSVar25 = *ppSStack_f8;
          if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar20 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
          pSVar32 = TypeInfo_UIManager;
          if (lVar20 != 0) {
            pUVar4 = *(UI_ColorPickPopup_o **)(lVar20 + 0x48);
            pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pSVar32 = (System_Type_array *)in_R9;
            if (cVar2 == '\0') {
              UnityEngine_Events_UnityAction___ctor();
              rawText = "A";
              parent_00 = style;
              pUVar12 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar25,(System_String_o *)"A",pUVar4,
                                   "",60.0,30.0,pUVar14,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pUVar17 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_07->fields)._guildColorA = pUVar17;
                rawText = __this_07;
                il2cpp_runtime_helper_022b4080(&(__this_07->fields)._guildColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar32 = pSVar15;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
                lVar20 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar20 != 0) {
                  pSVar25 = (Settings_StringSetting_o *)__this_01->m_Items[1];
                  pUVar4 = *(UI_ColorPickPopup_o **)(lVar20 + 0x48);
                  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  rawText = "B";
                  parent_00 = style;
                  pSVar32 = (System_Type_array *)in_R9;
                  pUVar12 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar25,(System_String_o *)"B",
                                       pUVar4,"",60.0,30.0,pUVar14,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar17 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_07->fields)._guildColorB = pUVar17;
                    rawText = __this_07;
                    il2cpp_runtime_helper_022b4080(&(__this_07->fields)._guildColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar32 = pSVar15;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
                    lVar20 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar20 != 0) {
                      pSVar5 = (Settings_NameSetting_o *)__this_01->m_Items[2];
                      pUVar4 = *(UI_ColorPickPopup_o **)(lVar20 + 0x48);
                      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      rawText = "C";
                      parent_00 = style;
                      pSVar32 = (System_Type_array *)in_R9;
                      pUVar12 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar5,(System_String_o *)"C",
                                           pUVar4,"",60.0,30.0,pUVar14,(MethodInfo *)0x0);
                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar17 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_07->fields)._guildColorC = pUVar17;
                        rawText = __this_07;
                        il2cpp_runtime_helper_022b4080(&(__this_07->fields)._guildColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar32 = pSVar15;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
                        lVar20 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar20 != 0) {
                          pSVar5 = (Settings_NameSetting_o *)__this_01->m_Items[3];
                          pUVar4 = *(UI_ColorPickPopup_o **)(lVar20 + 0x48);
                          pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          rawText = "D";
                          parent_00 = style;
                          pSVar32 = (System_Type_array *)in_R9;
                          pUVar12 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar5,
                                               (System_String_o *)"D",pUVar4,"",60.0,30.0,
                                               pUVar14,(MethodInfo *)0x0);
                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar17 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar33 = &(__this_07->fields)._guildColorD;
                            goto label_043fe805;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              UnityEngine_Events_UnityAction___ctor();
              rawText = "A";
              parent_00 = style;
              pUVar12 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar25,(System_String_o *)"A",pUVar4,
                                   "",60.0,30.0,pUVar14,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pUVar17 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_07->fields)._nameColorA = pUVar17;
                rawText = __this_07;
                il2cpp_runtime_helper_022b4080(&(__this_07->fields)._nameColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar32 = pSVar15;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
                lVar20 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar20 != 0) {
                  pSVar25 = (Settings_StringSetting_o *)__this_01->m_Items[1];
                  pUVar4 = *(UI_ColorPickPopup_o **)(lVar20 + 0x48);
                  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  rawText = "B";
                  parent_00 = style;
                  pSVar32 = (System_Type_array *)in_R9;
                  pUVar12 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar25,(System_String_o *)"B",
                                       pUVar4,"",60.0,30.0,pUVar14,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar17 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_07->fields)._nameColorB = pUVar17;
                    rawText = __this_07;
                    il2cpp_runtime_helper_022b4080(&(__this_07->fields)._nameColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar32 = pSVar15;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
                    lVar20 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar20 != 0) {
                      pSVar5 = (Settings_NameSetting_o *)__this_01->m_Items[2];
                      pUVar4 = *(UI_ColorPickPopup_o **)(lVar20 + 0x48);
                      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      rawText = "C";
                      parent_00 = style;
                      pSVar32 = (System_Type_array *)in_R9;
                      pUVar12 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar5,(System_String_o *)"C",
                                           pUVar4,"",60.0,30.0,pUVar14,(MethodInfo *)0x0);
                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar17 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_07->fields)._nameColorC = pUVar17;
                        rawText = __this_07;
                        il2cpp_runtime_helper_022b4080(&(__this_07->fields)._nameColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar32 = pSVar15;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
                        lVar20 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar20 != 0) {
                          pSVar5 = (Settings_NameSetting_o *)__this_01->m_Items[3];
                          pUVar4 = *(UI_ColorPickPopup_o **)(lVar20 + 0x48);
                          pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          rawText = "D";
                          parent_00 = style;
                          pSVar32 = (System_Type_array *)in_R9;
                          pUVar12 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar5,
                                               (System_String_o *)"D",pUVar4,"",60.0,30.0,
                                               pUVar14,(MethodInfo *)0x0);
                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar17 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar33 = &(__this_07->fields)._nameColorD;
label_043fe805:
                            *ppUVar33 = pUVar17;
                            rawText = __this_07;
                            pSVar16 = __this_09;
                            il2cpp_runtime_helper_022b4080(ppUVar33,pUVar17);
                            UI_CollapsibleToggleSection__AddChild
                                      ((UI_CollapsibleToggleSection_o *)__this_09,
                                       (UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
                            pSVar18 = (System_Type_array *)
                                      UI_ElementFactory__CreateHorizontalGroup
                                                ((UnityEngine_Transform_o *)pSVar18,8.0,3,(MethodInfo *)0x0);
                            *(undefined1 *)(__this_01->m_Items + 10) = *(undefined1 *)(__this_01->m_Items + 4)
                            ;
                            __this_01->m_Items[5] = (System_Type_o *)__this_01->max_length;
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 5);
                            __this_01->m_Items[6] = (System_Type_o *)__this_01->m_Items[0];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 6);
                            __this_01->m_Items[7] = (System_Type_o *)__this_01->m_Items[1];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 7);
                            __this_01->m_Items[8] = (System_Type_o *)__this_01->m_Items[2];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 8);
                            parent_00 = (MethodInfo_255A0F0 *)__this_01->m_Items[3];
                            pSVar32 = (System_Type_array *)(__this_01->m_Items + 9);
                            __this_01->m_Items[9] = (System_Type_o *)parent_00;
                            il2cpp_runtime_helper_022b4080();
                            if (pSVar18 != (System_Type_array *)0x0) {
                              parent_00 = (MethodInfo_255A0F0 *)0x0;
                              pSVar32 = pSVar18;
                              pUVar19 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
                              if (style != (MethodInfo_255A0F0 *)0x0) {
                                fontSize = *(int32_t *)
                                            &((Settings_NameSetting_Fields *)&style->invoker_method)->
                                             DefaultValue;
                                pSVar10 = (System_String_o *)
                                          (*(__this_07->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this_07,
                                                     (__this_07->klass->vtable)._4_get_ThemePanel.method);
                                pUVar11 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                UI_ElementStyle___ctor(pUVar11,fontSize,120.0,20.0,pSVar10,(MethodInfo *)0x0);
                                pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
                                ;
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateTextButton
                                          (pUVar19,pUVar11,"Reset Colors",0.0,pUVar14,(MethodInfo *)0x0);
                                UI_CollapsibleToggleSection__AddChild
                                          ((UI_CollapsibleToggleSection_o *)pSVar16,
                                           (UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae576 == '\0') {
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fe9c6;
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fe9d2;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fe9de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fe9ea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fe9f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea32;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea3e;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea4a;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea56;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea62;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateGuildRoleSpriteButton_b__0);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fea9e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43feaaa;
    il2cpp_runtime_helper_023445d0(&"GuildRoleSpriteButton");
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43feab6;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae576 = '\x01';
  }
  pUStackY_228 = (UnityEngine_GameObject_o *)0x43feacc;
  __this_02 = (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pUStackY_228 = (UnityEngine_GameObject_o *)0x43fead9;
  UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(__this_02,(MethodInfo *)0x0);
  SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar32;
  pUVar12 = extraout_RDX;
  if (__this_02 == (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
label_043ff22f:
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff234;
    il2cpp_runtime_helper_022b2c90();
label_043ff234:
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff239;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    (__this_02->fields).settings = (Settings_ProfileSettings_o *)rawText;
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43feaf9;
    il2cpp_runtime_helper_022b4080(&__this_02->fields,rawText);
    (__this_02->fields).__4__this = (UI_EditProfileProfilePanel_o *)pSVar32;
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43feb12;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).__4__this,pSVar32);
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43feb26;
    in_R9 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar21 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pUStackY_228 = (UnityEngine_GameObject_o *)0x43feb50;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43feb5a;
    pSVar18 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
    if ((System_Type_array *)in_R9 == (System_Type_array *)0x0) goto label_043ff22f;
    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar18;
    if (pSVar18 == (System_Type_array *)0x0) {
label_043feb83:
      if ((int)((System_Type_array *)in_R9)->max_length != 0) {
        ((System_Type_array *)in_R9)->m_Items[0] = (System_Type_o *)pSVar18;
        pUStackY_228 = (UnityEngine_GameObject_o *)0x43feb9e;
        il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items);
        pUStackY_228 = (UnityEngine_GameObject_o *)0x43febaf;
        SVar21.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (SVar21.fields.value != 0) {
          pUStackY_228 = (UnityEngine_GameObject_o *)0x43febc6;
          lVar20 = il2cpp_runtime_helper_023051f0(SVar21.fields.value);
          if (lVar20 == 0) goto label_043ff239;
        }
        if (1 < (uint)((System_Type_array *)in_R9)->max_length) {
          ((System_Type_array *)in_R9)->m_Items[1] = (System_Type_o *)SVar21.fields.value;
          pUStackY_228 = (UnityEngine_GameObject_o *)0x43febea;
          il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 1);
          pUStackY_228 = (UnityEngine_GameObject_o *)0x43febfb;
          SVar21.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (SVar21.fields.value != 0) {
            pUStackY_228 = (UnityEngine_GameObject_o *)0x43fec12;
            lVar20 = il2cpp_runtime_helper_023051f0(SVar21.fields.value);
            if (lVar20 == 0) goto label_043ff239;
          }
          if (2 < (uint)((System_Type_array *)in_R9)->max_length) {
            ((System_Type_array *)in_R9)->m_Items[2] = (System_Type_o *)SVar21.fields.value;
            pUStackY_228 = (UnityEngine_GameObject_o *)0x43fec36;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 2);
            pUStackY_228 = (UnityEngine_GameObject_o *)0x43fec47;
            SVar21.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if (SVar21.fields.value != 0) {
              pUStackY_228 = (UnityEngine_GameObject_o *)0x43fec5e;
              lVar20 = il2cpp_runtime_helper_023051f0(SVar21.fields.value);
              if (lVar20 == 0) goto label_043ff239;
            }
            if (3 < (uint)((System_Type_array *)in_R9)->max_length) {
              ((System_Type_array *)in_R9)->m_Items[3] = (System_Type_o *)SVar21.fields.value;
              pUStackY_228 = (UnityEngine_GameObject_o *)0x43fec82;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 3);
              pUStackY_228 = (UnityEngine_GameObject_o *)0x43fec93;
              SVar21.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if (SVar21.fields.value != 0) {
                pUStackY_228 = (UnityEngine_GameObject_o *)0x43fecaa;
                lVar20 = il2cpp_runtime_helper_023051f0(SVar21.fields.value);
                if (lVar20 == 0) goto label_043ff239;
              }
              if (4 < (uint)((System_Type_array *)in_R9)->max_length) {
                ((System_Type_array *)in_R9)->m_Items[4] = (System_Type_o *)SVar21.fields.value;
                pUStackY_228 = (UnityEngine_GameObject_o *)0x43fecd6;
                il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 4,SVar21.fields.value);
                pUStackY_228 = (UnityEngine_GameObject_o *)0x43fece5;
                pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                pUStackY_228 = (UnityEngine_GameObject_o *)0x43fecff;
                UnityEngine_GameObject___ctor_4dfc440
                          (pUVar12,"GuildRoleSpriteButton",(System_Type_array *)in_R9,(MethodInfo *)0x0);
                SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(intptr_t)&TypeInfo_GameObject;
                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                  in_R9 = &TypeInfo_GameObject;
                  pUStackY_228 = (UnityEngine_GameObject_o *)0x43fed15;
                  pUVar19 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                  if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fed2d;
                    UnityEngine_Transform__SetParent_4e09e30
                              (pUVar19,(UnityEngine_Transform_o *)parent_00,0,(MethodInfo *)0x0);
                    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fed3f;
                    pSVar22 = (Settings_ProfileSettings_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pSVar22 != (Settings_ProfileSettings_o *)0x0) {
                      pSVar34 = pSVar22->klass;
                      uVar26._0_4_ = pSVar34[1]._2.static_fields_size;
                      uVar26._4_4_ = pSVar34[1]._2.thread_static_fields_size;
                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43fed66;
                      (**(code **)&pSVar34[1]._2.element_size)(0x43820000,pSVar22,uVar26);
                      pSVar34 = pSVar22->klass;
                      uVar6._0_2_ = pSVar34[1]._2.interfaces_count;
                      uVar6._2_2_ = pSVar34[1]._2.interface_offsets_count;
                      uVar6._4_1_ = pSVar34[1]._2.typeHierarchyDepth;
                      uVar6._5_1_ = pSVar34[1]._2.genericRecursionDepth;
                      uVar6._6_1_ = pSVar34[1]._2.rank;
                      uVar6._7_1_ = pSVar34[1]._2.minimumAlignment;
                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43fed81;
                      (**(code **)&pSVar34[1]._2.field_count)(0x42200000,pSVar22,uVar6);
                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43fed93;
                      pIVar23 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Image_GetComponent_Image);
                      SVar21.fields.value =
                           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar22;
                      if (pIVar23 != (Il2CppObject *)0x0) {
                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43fedbd;
                        (*pIVar23->klass->vtable[0x17].methodPtr)
                                  (0x3f800000,0x3f800000,pIVar23,pIVar23->klass->vtable[0x17].method);
                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43fedcf;
                        __this_03 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Button_GetComponent_Button);
                        if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                          pUStackY_228 = (UnityEngine_GameObject_o *)0x43fedea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUStackY_228 = (UnityEngine_GameObject_o *)0x43fee9a;
                          value.fields.m_NormalColor.fields.b = 1.0;
                          value.fields.m_NormalColor.fields.a = 0.08;
                          value.fields.m_NormalColor.fields.r = 1.0;
                          value.fields.m_NormalColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.r = 1.0;
                          value.fields.m_HighlightedColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.b = 1.0;
                          value.fields.m_HighlightedColor.fields.a = 0.16;
                          value.fields.m_PressedColor.fields.r = 1.0;
                          value.fields.m_PressedColor.fields.g = 1.0;
                          value.fields.m_PressedColor.fields.b = 1.0;
                          value.fields.m_PressedColor.fields.a = 0.24;
                          value.fields.m_SelectedColor.fields.r = 1.0;
                          value.fields.m_SelectedColor.fields.g = 1.0;
                          value.fields.m_SelectedColor.fields.b = 1.0;
                          value.fields.m_SelectedColor.fields.a = 0.16;
                          value.fields.m_DisabledColor.fields.r = 1.0;
                          value.fields.m_DisabledColor.fields.g = 1.0;
                          value.fields.m_DisabledColor.fields.b = 1.0;
                          value.fields.m_DisabledColor.fields.a = 0.05;
                          value.fields.m_ColorMultiplier = 1.0;
                          value.fields.m_FadeDuration = 0.1;
                          UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
                          pUStackY_228 = (UnityEngine_GameObject_o *)0x43feeae;
                          SVar21.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                          pUStackY_228 = (UnityEngine_GameObject_o *)0x43feebc;
                          pSVar24 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                          if (SVar21.fields.value != 0) {
                            if (pSVar24 != (System_Type_o *)0x0) {
                              pUStackY_228 = (UnityEngine_GameObject_o *)0x43feedc;
                              lVar20 = il2cpp_runtime_helper_023051f0(pSVar24);
                              if (lVar20 == 0) goto label_043ff239;
                            }
                            if ((int)((System_Type_array *)SVar21.fields.value)->max_length != 0) {
                              ((System_Type_array *)SVar21.fields.value)->m_Items[0] = pSVar24;
                              pUStackY_228 = (UnityEngine_GameObject_o *)0x43feeff;
                              il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar21.fields.value)->m_Items);
                              pUStackY_228 = (UnityEngine_GameObject_o *)0x43fef10;
                              pSVar24 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar24 != (System_Type_o *)0x0) {
                                pUStackY_228 = (UnityEngine_GameObject_o *)0x43fef27;
                                lVar20 = il2cpp_runtime_helper_023051f0(pSVar24);
                                if (lVar20 == 0) goto label_043ff239;
                              }
                              if (1 < (uint)((System_Type_array *)SVar21.fields.value)->max_length) {
                                ((System_Type_array *)SVar21.fields.value)->m_Items[1] = pSVar24;
                                pUStackY_228 = (UnityEngine_GameObject_o *)0x43fef4a;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar21.fields.value)->m_Items + 1);
                                pUStackY_228 = (UnityEngine_GameObject_o *)0x43fef5b;
                                pSVar24 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                if (pSVar24 != (System_Type_o *)0x0) {
                                  pUStackY_228 = (UnityEngine_GameObject_o *)0x43fef72;
                                  lVar20 = il2cpp_runtime_helper_023051f0(pSVar24);
                                  if (lVar20 == 0) goto label_043ff239;
                                }
                                if (2 < (uint)((System_Type_array *)SVar21.fields.value)->max_length) {
                                  ((System_Type_array *)SVar21.fields.value)->m_Items[2] = pSVar24;
                                  pUStackY_228 = (UnityEngine_GameObject_o *)0x43fef98;
                                  il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar21.fields.value)->m_Items + 2,
                                                     pSVar24);
                                  pUStackY_228 = (UnityEngine_GameObject_o *)0x43fefa0;
                                  __this_04 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                  pUStackY_228 = (UnityEngine_GameObject_o *)0x43fefba;
                                  UnityEngine_GameObject___ctor_4dfc440
                                            (__this_04,"Text",(System_Type_array *)SVar21.fields.value,
                                             (MethodInfo *)0x0);
                                  if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
                                    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fefcd;
                                    pUVar19 = UnityEngine_GameObject__get_transform
                                                        (__this_04,(MethodInfo *)0x0);
                                    pUStackY_228 = (UnityEngine_GameObject_o *)0x43fefda;
                                    parent = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                                    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                    if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43feff2;
                                      UnityEngine_Transform__SetParent_4e09e30
                                                (pUVar19,parent,0,(MethodInfo *)0x0);
                                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff004;
                                      __this_05 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (g_data_057a694c == '\0') {
                                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff021;
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                        g_data_057a694c = '\x01';
                                      }
                                      SVar21.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      pUVar12 = extraout_RDX;
                                      if (__this_05 != (UnityEngine_RectTransform_o *)0x0) {
                                        in_R9 = &TypeInfo_Vector2;
                                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff050;
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_05,
                                                   (UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                   (MethodInfo *)0x0);
                                        if (g_data_057a9c86 == '\0') {
                                          pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff065;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a9c86 = '\x01';
                                        }
                                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff085;
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_05,
                                                   (UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff097;
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_05,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff0a9;
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_05,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff0bb;
                                        pSVar25 = (Settings_StringSetting_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_04,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                        SVar21.fields.value =
                                             (System_RuntimeTypeHandle_Fields)(pSVar32->m_Items + 0xd);
                                        pSVar32->m_Items[0xd] = (System_Type_o *)pSVar25;
                                        pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff0d9;
                                        il2cpp_runtime_helper_022b4080(SVar21.fields.value);
                                        if ((TMPro_TMP_Text_o *)pSVar32->m_Items[0xd] !=
                                            (TMPro_TMP_Text_o *)0x0) {
                                          pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff0f5;
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pSVar32->m_Items[0xd],1,
                                                     (MethodInfo *)0x0);
                                          if ((extraout_RDX != (UnityEngine_GameObject_o *)0x0) &&
                                             ((TMPro_TMP_Text_o *)
                                              ((Settings_ProfileSettings_o *)SVar21.fields.value)->klass !=
                                              (TMPro_TMP_Text_o *)0x0)) {
                                            pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff11a;
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)
                                                       ((Settings_ProfileSettings_o *)SVar21.fields.value)->
                                                       klass,(float)(int)(extraout_RDX->fields).m_CachedPtr,
                                                       (MethodInfo *)0x0);
                                            if ((TMPro_TMP_Text_o *)
                                                ((Settings_ProfileSettings_o *)SVar21.fields.value)->klass !=
                                                (TMPro_TMP_Text_o *)0x0) {
                                              pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff132;
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)
                                                         ((Settings_ProfileSettings_o *)SVar21.fields.value)->
                                                         klass,1,(MethodInfo *)0x0);
                                              if ((TMPro_TMP_Text_o *)
                                                  ((Settings_ProfileSettings_o *)SVar21.fields.value)->klass
                                                  != (TMPro_TMP_Text_o *)0x0) {
                                                pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff14a;
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)
                                                           ((Settings_ProfileSettings_o *)SVar21.fields.value)
                                                           ->klass,0x1001,(MethodInfo *)0x0);
                                                pSVar34 = ((Settings_ProfileSettings_o *)SVar21.fields.value)
                                                          ->klass;
                                                if (pSVar34 != (Settings_ProfileSettings_c *)0x0) {
                                                  pvVar7 = (pSVar34->_1).image;
                                                  pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff170;
                                                  (**(code **)((long)pvVar7 + 0x2a8))
                                                            (0x3f800000,0x3f800000,pSVar34,
                                                             *(undefined8 *)((long)pvVar7 + 0x2b0));
                                                  pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff178;
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            ((UI_EditProfileProfilePanel_o *)pSVar34,
                                                             (TMPro_TextMeshProUGUI_o *)
                                                             ((Settings_ProfileSettings_o *)
                                                             SVar21.fields.value)->klass,method_01);
                                                  pSVar22 = (__this_02->fields).settings;
                                                  if ((pSVar22 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar25 = (pSVar22->fields).GuildRoleSprite,
                                                     pSVar25 != (Settings_StringSetting_o *)0x0)) {
                                                    pSVar34 = ((Settings_ProfileSettings_o *)
                                                              SVar21.fields.value)->klass;
                                                    pSVar10 = (pSVar25->fields)._value;
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff1b5;
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff1c1;
                                                    pSVar10 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar10,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                    if (pSVar34 != (Settings_ProfileSettings_c *)0x0) {
                                                      pvVar7 = (pSVar34->_1).image;
                                                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff1dc;
                                                      (**(code **)((long)pvVar7 + 0x558))
                                                                (pSVar34,pSVar10,
                                                                 *(undefined8 *)((long)pvVar7 + 0x560));
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_03->fields).m_CanvasGroupCache;
                                                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff1f2;
                                                      pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff20c;
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      SVar21.fields.value = (System_RuntimeTypeHandle_Fields)0
                                                      ;
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,pUVar14,(MethodInfo *)0x0);
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
                                  goto label_043ff22f;
                                }
                              }
                            }
                            goto label_043ff234;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_043ff22f;
              }
            }
          }
        }
      }
      goto label_043ff234;
    }
    pUStackY_228 = (UnityEngine_GameObject_o *)0x43feb7a;
    lVar20 = il2cpp_runtime_helper_023051f0(pSVar18);
    if (lVar20 != 0) goto label_043feb83;
  }
label_043ff239:
  pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff23e;
  uVar26 = il2cpp_runtime_helper_0231b270();
  lVar20 = 0;
  pUStackY_228 = (UnityEngine_GameObject_o *)0x43ff248;
  il2cpp_runtime_helper_022b2b10(uVar26);
  pSStackY_238 = (System_Type_array *)SVar21.fields.value;
  pSStackY_230 = (System_Type_array *)in_R9;
  pUStackY_228 = pUVar12;
  if (g_data_057ae57b == '\0') {
    lStackY_240 = 0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    lStackY_240 = 0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    lStackY_240 = 0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStackY_240 = 0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    lStackY_240 = 0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    lStackY_240 = 0x43ff283;
    pPVar27 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar27 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_240 = 0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_240 = 0x43ff2a6;
    pPVar27 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    lStackY_240 = 0x43ff2ba;
    pSVar10 = (System_String_o *)PhotonExtensions__GetCustomProperty(pPVar27,"display_name",(MethodInfo *)0x0);
    plVar28 = (long *)(System_String_o *)0x0;
    if ((pSVar10 != (System_String_o *)0x0) &&
       (plVar28 = (long *)(System_String_o *)0x0, (Il2CppClass *)pSVar10->klass == g_data_057b9c00)) {
      plVar28 = (long *)pSVar10;
    }
    lVar30 = 0;
    lStackY_240 = 0x43ff2e0;
    bVar8 = System_String__IsNullOrEmpty((System_String_o *)plVar28,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_240 = 0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_240 = 0x43ff300;
    pPVar27 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar27 == (Photon_Realtime_Player_o *)0x0) goto label_043ff43e;
    lVar30 = 0;
    lStackY_240 = 0x43ff314;
    bVar8 = System_String__IsNullOrEmpty
                      (*(System_String_o **)&(pPVar27->fields)._HasRejoined_k__BackingField,(MethodInfo *)0x0)
    ;
    if ((char)bVar8 != '\0') goto label_043ff3b5;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_240 = 0x43ff32d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_240 = 0x43ff334;
    pPVar27 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    lStackY_240 = 0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    lStackY_240 = 0x43ff3ac;
    pPVar27 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar27 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    plVar28 = &TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      lStackY_240 = 0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_240 = 0x43ff3d4;
    pSVar10 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    lStackY_240 = 0x43ff3de;
    bVar8 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        lStackY_240 = 0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return;
    }
    if (lVar20 == 0) {
      return;
    }
    if (*(long *)(lVar20 + 0x30) == 0) {
      return;
    }
    lVar30 = 0;
    lStackY_240 = 0x43ff3fb;
    bVar8 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(lVar20 + 0x30) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pPVar27 = *(Photon_Realtime_Player_o **)(lVar20 + 0x30);
  }
  if (pPVar27 != (Photon_Realtime_Player_o *)0x0) {
    return;
  }
label_043ff43e:
  lStackY_240 = 0x43ff443;
  uStackY_250 = il2cpp_runtime_helper_022b2c90();
  pSStackY_248 = (System_String_o *)plVar28;
  lStackY_240 = lVar20;
  if (g_data_057ae57a == '\0') {
    pcStackY_258 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStackY_258 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStackY_258 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStackY_258 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStackY_258 = (code *)0x43ff4aa;
  pSVar10 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStackY_258 = (code *)0x43ff4b4;
  bVar8 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStackY_258 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return;
  }
  if ((lVar30 == 0) || (*(long *)(lVar30 + 0x68) == 0)) {
    return;
  }
  pcStackY_258 = (code *)0x43ff4d1;
  bVar8 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(lVar30 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(long *)(lVar30 + 0x68) == 0) {
    pcStackY_258 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
    il2cpp_runtime_helper_022b2c90();
    pcStackY_258 = (code *)&TypeInfo_AccountManager;
    if (g_data_057ae57c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae57c = '\x01';
    }
    pSStackY_260 = (System_String_o *)0x0;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar27 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar27 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar27 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar27 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar8 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar27,&pSStackY_260,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
    }
    PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStackY_260,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.EditProfileProfilePanel$$GetProfileIconPaths
// il2cpp: System_String_array* UI_EditProfileProfilePanel__GetProfileIconPaths (UI_EditProfileProfilePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x43fd700

System_String_array *
UI_EditProfileProfilePanel__GetProfileIconPaths
          (UI_EditProfileProfilePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int *piVar1;
  bool_conflict *pbVar2;
  char cVar3;
  int32_t fontSize;
  UnityEngine_Object_o *pUVar4;
  System_String_o *selectedRoleName;
  UI_ColorPickPopup_o *pUVar5;
  Settings_NameSetting_o *pSVar6;
  undefined8 uVar7;
  void *pvVar8;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  int iVar9;
  bool_conflict bVar10;
  uint uVar11;
  PatreonEffects_NameEffectController_o *__this_01;
  System_String_o *pSVar12;
  UI_ElementStyle_o *pUVar13;
  UnityEngine_GameObject_o *pUVar14;
  System_String_array *pSVar15;
  undefined4 extraout_var;
  TMPro_TMP_FontAsset_o *pTVar16;
  undefined4 extraout_var_00;
  System_String_array *extraout_RAX;
  System_Type_array *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar17;
  System_Type_array *pSVar18;
  System_Type_array *pSVar19;
  UI_ColorSettingElement_o *pUVar20;
  System_Type_array *pSVar21;
  UnityEngine_Transform_o *pUVar22;
  System_String_array *extraout_RAX_00;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this_03;
  long lVar23;
  System_RuntimeTypeHandle_o SVar24;
  Settings_ProfileSettings_o *pSVar25;
  Il2CppObject *pIVar26;
  UnityEngine_UI_Selectable_o *__this_04;
  System_Type_o *pSVar27;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_06;
  Settings_StringSetting_o *pSVar28;
  System_String_array *extraout_RAX_01;
  undefined8 uVar29;
  Photon_Realtime_Player_o *pPVar30;
  undefined4 extraout_var_01;
  System_String_array *extraout_RAX_02;
  UI_EditProfileProfilePanel_o *rawText;
  MethodInfo *method_00;
  MethodInfo_255A0F0 *style;
  UnityEngine_GameObject_o *extraout_RDX;
  MethodInfo *method_01;
  ulong uVar31;
  System_String_o **tierLabel;
  long *plVar32;
  TMPro_TMP_Text_o *pTVar33;
  TMPro_TMP_Text_o *__this_07;
  MethodInfo_255A0F0 *parent_00;
  long lVar34;
  PatreonEffects_NameEffectController_o *controller;
  TMPro_TMP_FontAsset_o *pTVar35;
  UI_EditProfileProfilePanel_o *__this_08;
  System_Type_array *pSVar36;
  UI_ColorSettingElement_o **ppUVar37;
  Settings_ProfileSettings_c *pSVar38;
  UI_CategoryPanel_o *__this_09;
  byte in_R8B;
  long *in_R9;
  long *tmpObj;
  bool bVar39;
  System_String_o *pSStackY_298;
  code *pcStackY_290;
  undefined8 uStackY_288;
  System_String_array *pSStackY_280;
  long lStackY_278;
  System_Type_array *pSStackY_270;
  System_Type_array *pSStackY_268;
  UnityEngine_GameObject_o *pUStackY_260;
  System_Nullable_float__Fields SStack_138;
  Settings_StringSetting_o **ppSStack_130;
  System_Type_array *pSStack_128;
  PatreonEffects_NameEffectController_o *pPStack_120;
  long lStack_118;
  TMPro_TMP_FontAsset_o *pTStack_110;
  UnityEngine_GameObject_o *pUStack_108;
  long *plStack_100;
  Settings_StringSetting_o *in_stack_ffffffffffffff10;
  Settings_StringSetting_o *in_stack_ffffffffffffff18;
  Settings_NameSetting_o *in_stack_ffffffffffffff20;
  undefined4 in_stack_ffffffffffffff28;
  undefined4 uStack_d4;
  System_Type_array *in_stack_ffffffffffffff30;
  System_Type_array *__this_10;
  
  if (g_data_057ae575 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"/Icons/Profile/");
    g_data_057ae575 = '\x01';
  }
  __this_01 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  controller = __this_01;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    iVar9 = (int)options->max_length;
    if (__this_01 != (PatreonEffects_NameEffectController_o *)0x0) {
      if (iVar9 < 1) {
label_043fd8a1:
        pSVar15 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_String_ToArray);
        return pSVar15;
      }
      uVar31 = 0;
      if ((options->max_length & 0xffffffff) != 0) {
        do {
          pSVar12 = options->m_Items[uVar31];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          controller = (PatreonEffects_NameEffectController_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          in_R8B = 0;
          pSVar12 = System_String__Concat_3af7470
                              ((System_String_o *)controller,"/Icons/Profile/",pSVar12,"Icon",
                               (MethodInfo *)0x0);
          lVar34 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar23 = (__this_01->fields).m_CachedPtr;
          if (lVar23 == 0) goto label_043fd914;
          uVar11 = *(uint *)&(__this_01->fields).m_CancellationTokenSource;
          if (uVar11 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)&(__this_01->fields).m_CancellationTokenSource = uVar11 + 1;
            controller = (PatreonEffects_NameEffectController_o *)(lVar23 + (long)(int)uVar11 * 8 + 0x20);
            *(System_String_o **)(lVar23 + 0x20 + (long)(int)uVar11 * 8) = pSVar12;
            il2cpp_runtime_helper_022b4080(controller,pSVar12);
          }
          else {
            controller = __this_01;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
          }
          uVar31 = uVar31 + 1;
          uVar11 = (uint)options->max_length;
          if ((long)(int)uVar11 <= (long)uVar31) goto label_043fd8a1;
        } while (uVar31 < uVar11);
      }
      iVar9 = il2cpp_runtime_helper_022b2ca0();
    }
    if (0 < iVar9) {
      pSVar12 = options->m_Items[0];
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      controller = (PatreonEffects_NameEffectController_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      in_R8B = 0;
      System_String__Concat_3af7470
                ((System_String_o *)controller,"/Icons/Profile/",pSVar12,"Icon",(MethodInfo *)0x0);
    }
  }
label_043fd914:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae574 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    g_data_057ae574 = '\x01';
  }
  pSVar12 = (System_String_o *)
            (*(((System_String_c *)controller->klass)->vtable)._4_CompareTo.methodPtr)
                      (controller,(((System_String_c *)controller->klass)->vtable)._4_CompareTo.method);
  pUVar13 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  rawText = (UI_EditProfileProfilePanel_o *)0x0;
  UI_ElementStyle___ctor(pUVar13,0x18,100.0,20.0,pSVar12,(MethodInfo *)0x0);
  lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  pUVar4 = *(UnityEngine_Object_o **)&(controller->fields).popGradientHooked;
  plVar32 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pbVar2 = &(controller->fields).popGradientHooked;
  pTVar33 = (TMPro_TMP_Text_o *)0x0;
  bVar10 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    pUVar4 = *(UnityEngine_Object_o **)pbVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar33 = (TMPro_TMP_Text_o *)0x0;
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
  }
  if ((lVar23 != 0) && (*(long *)(lVar23 + 0x20) != 0)) {
    pUVar22 = *(UnityEngine_Transform_o **)&(controller->fields).cleared;
    pSVar12 = *(System_String_o **)(*(long *)(lVar23 + 0x20) + 0x18);
    if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = UI_UIManager__GetProfileIcon(pSVar12,(MethodInfo *)0x0);
    pSVar12 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar12,(MethodInfo *)0x0);
    pUVar14 = UI_ElementFactory__CreateRawImage(pUVar22,pUVar13,pSVar12,256.0,256.0,(MethodInfo *)0x0);
    *(UnityEngine_GameObject_o **)pbVar2 = pUVar14;
    pSVar15 = (System_String_array *)il2cpp_runtime_helper_022b4080(pbVar2,pUVar14);
    return pSVar15;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_07 = pTVar33;
  if (g_data_057ae578 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae578 = '\x01';
  }
  if ((pTVar33 != (TMPro_TMP_Text_o *)0x0) &&
     (lVar34 = *(long *)&(pTVar33->fields).m_SkipLayoutUpdate, lVar34 != 0)) {
    pSVar12 = *(System_String_o **)(lVar34 + 0x18);
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = Anticheat_ChatFilter__FilterBadWords(pSVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_07 = (TMPro_TMP_Text_o *)0x0;
    pSVar12 = MiscExtensions__HexColor(pSVar12,(MethodInfo *)0x0);
    lVar34 = *(long *)&(pTVar33->fields).m_RaycastTarget;
    if (lVar34 != 0) {
      selectedRoleName = *(System_String_o **)(lVar34 + 0x18);
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_String_array *)
                PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                          ((Photon_Realtime_Player_o *)0x0,pSVar12,selectedRoleName,(MethodInfo *)0x0);
      return pSVar15;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae579 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae579 = '\x01';
  }
  tmpObj = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_07,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return (System_String_array *)CONCAT44(extraout_var,bVar10);
  }
  pTVar16 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar21 = (System_Type_array *)0x0;
  pTVar35 = pTVar16;
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
label_043fdc8f:
    pTVar16 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar21 = (System_Type_array *)0x0;
    pTVar35 = pTVar16;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return (System_String_array *)CONCAT44(extraout_var_00,bVar10);
    }
    if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_spriteAsset(__this_07,(TMPro_TMP_SpriteAsset_o *)pTVar16,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  else if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_font(__this_07,pTVar16,(MethodInfo *)0x0);
    goto label_043fdc8f;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae572 == '\0') {
    plStack_100 = (long *)0x43fdd14;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    plStack_100 = (long *)0x43fdd20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    plStack_100 = (long *)0x43fdd2c;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae572 = '\x01';
  }
  pSVar36 = *(System_Type_array **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  __this_08 = (UI_EditProfileProfilePanel_o *)0x0;
  plStack_100 = (long *)0x43fdd4f;
  uVar11 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (pSVar36 != (System_Type_array *)0x0) {
    plVar32 = (long *)(ulong)uVar11;
    if ((Settings_NameSetting_o *)pSVar36->m_Items[2] != (Settings_NameSetting_o *)0x0) {
      pSVar21 = *(System_Type_array **)&(pTVar35->fields).m_FaceInfo.fields.m_SuperscriptSize;
      rawText = (UI_EditProfileProfilePanel_o *)
                (((Settings_NameSetting_o *)pSVar36->m_Items[2])->fields)._value;
      if ((char)uVar11 == '\0') {
        in_R8B = false;
      }
      else {
        if ((Settings_BoolSetting_o *)pSVar36->m_Items[0xc] == (Settings_BoolSetting_o *)0x0)
        goto label_043fde43;
        in_R8B = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar36->m_Items[0xc])->fields).DefaultValue + 1
                          ) != '\0';
      }
      in_stack_ffffffffffffff18 = (Settings_StringSetting_o *)pSVar36->m_Items[0x10];
      in_stack_ffffffffffffff20 = (Settings_NameSetting_o *)pSVar36->m_Items[0x11];
      in_stack_ffffffffffffff10 = (Settings_StringSetting_o *)pSVar36->m_Items[0xf];
      in_R9 = (long *)pSVar36->m_Items[0xd];
      in_stack_ffffffffffffff28 = 1;
      plStack_100 = (long *)0x43fddc8;
      UI_EditProfileProfilePanel__RefreshSinglePreview
                (__this_08,(UnityEngine_GameObject_o *)pSVar21,
                 *(PatreonEffects_NameEffectController_o **)
                  &(pTVar35->fields).m_FaceInfo.fields.m_SubscriptSize,(System_String_o *)rawText,(uint)in_R8B
                 ,(Settings_StringSetting_o *)in_R9,(Settings_ColorSetting_o *)pSVar36->m_Items[0xe],
                 (Settings_ColorSetting_o *)in_stack_ffffffffffffff10,
                 (Settings_ColorSetting_o *)in_stack_ffffffffffffff18,
                 (Settings_ColorSetting_o *)in_stack_ffffffffffffff20,1,
                 (MethodInfo *)in_stack_ffffffffffffff30);
      tmpObj = *(long **)&(pTVar35->fields).m_FaceInfo.fields.m_AscentLine;
      controller = *(PatreonEffects_NameEffectController_o **)&(pTVar35->fields).m_FaceInfo.fields.m_MeanLine;
      plStack_100 = (long *)0x43fdddb;
      pSVar21 = pSVar36;
      pSVar12 = UI_EditProfileProfilePanel__GetGuildPreviewText
                          (__this_08,(Settings_ProfileSettings_o *)pSVar36,method_00);
      if ((char)uVar11 == '\0') {
        bVar39 = false;
label_043fddf7:
        plStack_100 = (long *)0x43fde2f;
        UI_EditProfileProfilePanel__RefreshSinglePreview
                  (__this_08,(UnityEngine_GameObject_o *)tmpObj,controller,pSVar12,(uint)bVar39,
                   (Settings_StringSetting_o *)pSVar36->m_Items[0x13],
                   (Settings_ColorSetting_o *)pSVar36->m_Items[0x14],
                   (Settings_ColorSetting_o *)pSVar36->m_Items[0x15],
                   (Settings_ColorSetting_o *)pSVar36->m_Items[0x16],
                   (Settings_ColorSetting_o *)pSVar36->m_Items[0x17],0,(MethodInfo *)in_stack_ffffffffffffff30
                  );
        if (g_data_057ae577 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
          il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
          g_data_057ae577 = '\x01';
        }
        __this_09 = *(UI_CategoryPanel_o **)&(pTVar35->fields).m_FaceInfo.fields.m_DescentLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)__this_09,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
          if ((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x40), lVar23 != 0)) {
            plVar32 = *(long **)&(pTVar35->fields).m_FaceInfo.fields.m_DescentLine;
            __this_09 = *(UI_CategoryPanel_o **)(lVar23 + 0x18);
            if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                ((System_String_o *)__this_09,(Photon_Realtime_Player_o *)0x0,
                                 (MethodInfo *)0x0);
            if (plVar32 != (long *)0x0) {
              lVar23 = *plVar32;
              pSVar15 = (System_String_array *)
                        (**(code **)(lVar23 + 0x558))
                                  (plVar32,pSVar12,*(undefined8 *)(lVar23 + 0x560),lVar23,
                                   *(code **)(lVar23 + 0x558));
              return pSVar15;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          UI_CategoryPanel___ctor(__this_09,(MethodInfo *)0x0);
          return extraout_RAX_02;
        }
        return (System_String_array *)CONCAT44(extraout_var_01,bVar10);
      }
      rawText = (UI_EditProfileProfilePanel_o *)0x0;
      if ((Settings_BoolSetting_o *)pSVar36->m_Items[0x12] != (Settings_BoolSetting_o *)0x0) {
        bVar39 = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar36->m_Items[0x12])->fields).DefaultValue +
                          1) != '\0';
        goto label_043fddf7;
      }
    }
  }
label_043fde43:
  plStack_100 = (long *)0x43fde48;
  il2cpp_runtime_helper_022b2c90();
  pSStack_128 = pSVar36;
  pPStack_120 = controller;
  lStack_118 = lVar23;
  pTStack_110 = pTVar35;
  pUStack_108 = (UnityEngine_GameObject_o *)tmpObj;
  plStack_100 = plVar32;
  if (g_data_057ae56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Gradient Colors");
    il2cpp_runtime_helper_023445d0(&"Reset Colors");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Effect");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae56e = '\x01';
  }
  __this_02 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  parent_00 = (MethodInfo_255A0F0 *)0x0;
  pSVar36 = __this_02;
  UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor
            ((UI_EditProfileProfilePanel___c__DisplayClass22_0_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_Type_array *)0x0) {
    ((Settings_ProfileSettings_Fields *)&__this_02->bounds)->Settings =
         (System_Collections_Specialized_OrderedDictionary_o *)__this_08;
    il2cpp_runtime_helper_022b4080((Settings_ProfileSettings_Fields *)&__this_02->bounds);
    __this_02->max_length = (il2cpp_array_size_t)in_R9;
    il2cpp_runtime_helper_022b4080(&__this_02->max_length,in_R9);
    ppSStack_130 = (Settings_StringSetting_o **)__this_02->m_Items;
    __this_02->m_Items[0] = (System_Type_o *)in_stack_ffffffffffffff10;
    il2cpp_runtime_helper_022b4080(ppSStack_130,in_stack_ffffffffffffff10);
    __this_02->m_Items[1] = (System_Type_o *)in_stack_ffffffffffffff18;
    il2cpp_runtime_helper_022b4080(__this_02->m_Items + 1,in_stack_ffffffffffffff18);
    __this_02->m_Items[2] = (System_Type_o *)in_stack_ffffffffffffff20;
    il2cpp_runtime_helper_022b4080(__this_02->m_Items + 2,in_stack_ffffffffffffff20);
    __this_02->m_Items[3] = (System_Type_o *)CONCAT44(uStack_d4,in_stack_ffffffffffffff28);
    il2cpp_runtime_helper_022b4080(__this_02->m_Items + 3,
                       (Settings_NameSetting_o *)CONCAT44(uStack_d4,in_stack_ffffffffffffff28));
    *(byte *)(__this_02->m_Items + 4) = in_R8B;
    in_R9 = (long *)__this_02->max_length;
    if (*(int *)(TypeInfo_EditProfileProfilePanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_array *)**(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8);
    SStack_138.hasValue = 0;
    SStack_138.value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)&SStack_138,260.0,MethodInfo_Nullable_1_Single);
    pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    rawText = "Effect";
    parent_00 = style;
    pSVar36 = pSVar21;
    pSVar18 = (System_Type_array *)
              UI_ElementFactory__CreateDropdownSetting
                        ((UnityEngine_Transform_o *)pSVar21,(UI_ElementStyle_o *)style,
                         (Settings_BaseSetting_o *)in_R9,(System_String_o *)"Effect",pSVar15,"",
                         180.0,40.0,200.0,(System_Nullable_float__o)SStack_138,pUVar17,(MethodInfo *)0x0);
    if (pSVar18 != (System_Type_array *)0x0) {
      parent_00 = MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme;
      pSVar36 = pSVar18;
      __this_10 = in_stack_ffffffffffffff30;
      pSVar19 = (System_Type_array *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar18,MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme)
      ;
      if (pSVar19 != (System_Type_array *)0x0) {
        parent_00 = (MethodInfo_255A0F0 *)0x0;
        UI_DropdownSettingElement__FixScale((UI_DropdownSettingElement_o *)pSVar19,(MethodInfo *)0x0);
        pSVar36 = pSVar19;
      }
      in_R9 = (long *)in_stack_ffffffffffffff30;
      if (in_stack_ffffffffffffff30 != (System_Type_array *)0x0) {
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffff30,
                   (UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
        rawText = (UI_EditProfileProfilePanel_o *)0x0;
        pUVar14 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pSVar21,(UI_ElementStyle_o *)style,"Gradient Colors",0,3,
                             (MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffff30,pUVar14,(MethodInfo *)0x0);
        parent_00 = (MethodInfo_255A0F0 *)0x3;
        pSVar36 = pSVar21;
        pSVar18 = (System_Type_array *)
                  UI_ElementFactory__CreateHorizontalGroup
                            ((UnityEngine_Transform_o *)pSVar21,10.0,3,(MethodInfo *)0x0);
        if (pSVar18 != (System_Type_array *)0x0) {
          cVar3 = *(char *)(__this_02->m_Items + 4);
          parent_00 = (MethodInfo_255A0F0 *)0x0;
          in_R9 = (long *)UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
          pSVar28 = *ppSStack_130;
          if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar23 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
          pSVar36 = TypeInfo_UIManager;
          if (lVar23 != 0) {
            pUVar5 = *(UI_ColorPickPopup_o **)(lVar23 + 0x48);
            pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pSVar36 = (System_Type_array *)in_R9;
            if (cVar3 == '\0') {
              UnityEngine_Events_UnityAction___ctor();
              rawText = "A";
              parent_00 = style;
              pUVar14 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar28,(System_String_o *)"A",pUVar5,
                                   "",60.0,30.0,pUVar17,(MethodInfo *)0x0);
              if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                pUVar20 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_08->fields)._guildColorA = pUVar20;
                rawText = __this_08;
                il2cpp_runtime_helper_022b4080(&(__this_08->fields)._guildColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar36 = pSVar18;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
                lVar23 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar23 != 0) {
                  pSVar28 = (Settings_StringSetting_o *)__this_02->m_Items[1];
                  pUVar5 = *(UI_ColorPickPopup_o **)(lVar23 + 0x48);
                  pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  rawText = "B";
                  parent_00 = style;
                  pSVar36 = (System_Type_array *)in_R9;
                  pUVar14 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar28,(System_String_o *)"B",
                                       pUVar5,"",60.0,30.0,pUVar17,(MethodInfo *)0x0);
                  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar20 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_08->fields)._guildColorB = pUVar20;
                    rawText = __this_08;
                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._guildColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar36 = pSVar18;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
                    lVar23 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar23 != 0) {
                      pSVar6 = (Settings_NameSetting_o *)__this_02->m_Items[2];
                      pUVar5 = *(UI_ColorPickPopup_o **)(lVar23 + 0x48);
                      pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      rawText = "C";
                      parent_00 = style;
                      pSVar36 = (System_Type_array *)in_R9;
                      pUVar14 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar6,(System_String_o *)"C",
                                           pUVar5,"",60.0,30.0,pUVar17,(MethodInfo *)0x0);
                      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar20 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_08->fields)._guildColorC = pUVar20;
                        rawText = __this_08;
                        il2cpp_runtime_helper_022b4080(&(__this_08->fields)._guildColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar36 = pSVar18;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
                        lVar23 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar23 != 0) {
                          pSVar6 = (Settings_NameSetting_o *)__this_02->m_Items[3];
                          pUVar5 = *(UI_ColorPickPopup_o **)(lVar23 + 0x48);
                          pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          rawText = "D";
                          parent_00 = style;
                          pSVar36 = (System_Type_array *)in_R9;
                          pUVar14 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar6,
                                               (System_String_o *)"D",pUVar5,"",60.0,30.0,
                                               pUVar17,(MethodInfo *)0x0);
                          if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar20 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar37 = &(__this_08->fields)._guildColorD;
                            goto label_043fe805;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              UnityEngine_Events_UnityAction___ctor();
              rawText = "A";
              parent_00 = style;
              pUVar14 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar28,(System_String_o *)"A",pUVar5,
                                   "",60.0,30.0,pUVar17,(MethodInfo *)0x0);
              if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                pUVar20 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_08->fields)._nameColorA = pUVar20;
                rawText = __this_08;
                il2cpp_runtime_helper_022b4080(&(__this_08->fields)._nameColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar36 = pSVar18;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
                lVar23 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar23 != 0) {
                  pSVar28 = (Settings_StringSetting_o *)__this_02->m_Items[1];
                  pUVar5 = *(UI_ColorPickPopup_o **)(lVar23 + 0x48);
                  pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  rawText = "B";
                  parent_00 = style;
                  pSVar36 = (System_Type_array *)in_R9;
                  pUVar14 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar28,(System_String_o *)"B",
                                       pUVar5,"",60.0,30.0,pUVar17,(MethodInfo *)0x0);
                  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar20 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_08->fields)._nameColorB = pUVar20;
                    rawText = __this_08;
                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._nameColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar36 = pSVar18;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
                    lVar23 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar23 != 0) {
                      pSVar6 = (Settings_NameSetting_o *)__this_02->m_Items[2];
                      pUVar5 = *(UI_ColorPickPopup_o **)(lVar23 + 0x48);
                      pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      rawText = "C";
                      parent_00 = style;
                      pSVar36 = (System_Type_array *)in_R9;
                      pUVar14 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar6,(System_String_o *)"C",
                                           pUVar5,"",60.0,30.0,pUVar17,(MethodInfo *)0x0);
                      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar20 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_08->fields)._nameColorC = pUVar20;
                        rawText = __this_08;
                        il2cpp_runtime_helper_022b4080(&(__this_08->fields)._nameColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar36 = pSVar18;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
                        lVar23 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar23 != 0) {
                          pSVar6 = (Settings_NameSetting_o *)__this_02->m_Items[3];
                          pUVar5 = *(UI_ColorPickPopup_o **)(lVar23 + 0x48);
                          pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          rawText = "D";
                          parent_00 = style;
                          pSVar36 = (System_Type_array *)in_R9;
                          pUVar14 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar6,
                                               (System_String_o *)"D",pUVar5,"",60.0,30.0,
                                               pUVar17,(MethodInfo *)0x0);
                          if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar20 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar37 = &(__this_08->fields)._nameColorD;
label_043fe805:
                            *ppUVar37 = pUVar20;
                            rawText = __this_08;
                            pSVar19 = __this_10;
                            il2cpp_runtime_helper_022b4080(ppUVar37,pUVar20);
                            UI_CollapsibleToggleSection__AddChild
                                      ((UI_CollapsibleToggleSection_o *)__this_10,
                                       (UnityEngine_GameObject_o *)pSVar18,(MethodInfo *)0x0);
                            pSVar21 = (System_Type_array *)
                                      UI_ElementFactory__CreateHorizontalGroup
                                                ((UnityEngine_Transform_o *)pSVar21,8.0,3,(MethodInfo *)0x0);
                            *(undefined1 *)(__this_02->m_Items + 10) = *(undefined1 *)(__this_02->m_Items + 4)
                            ;
                            __this_02->m_Items[5] = (System_Type_o *)__this_02->max_length;
                            il2cpp_runtime_helper_022b4080(__this_02->m_Items + 5);
                            __this_02->m_Items[6] = (System_Type_o *)__this_02->m_Items[0];
                            il2cpp_runtime_helper_022b4080(__this_02->m_Items + 6);
                            __this_02->m_Items[7] = (System_Type_o *)__this_02->m_Items[1];
                            il2cpp_runtime_helper_022b4080(__this_02->m_Items + 7);
                            __this_02->m_Items[8] = (System_Type_o *)__this_02->m_Items[2];
                            il2cpp_runtime_helper_022b4080(__this_02->m_Items + 8);
                            parent_00 = (MethodInfo_255A0F0 *)__this_02->m_Items[3];
                            pSVar36 = (System_Type_array *)(__this_02->m_Items + 9);
                            __this_02->m_Items[9] = (System_Type_o *)parent_00;
                            il2cpp_runtime_helper_022b4080();
                            if (pSVar21 != (System_Type_array *)0x0) {
                              parent_00 = (MethodInfo_255A0F0 *)0x0;
                              pSVar36 = pSVar21;
                              pUVar22 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar21,(MethodInfo *)0x0);
                              if (style != (MethodInfo_255A0F0 *)0x0) {
                                fontSize = *(int32_t *)
                                            &((Settings_NameSetting_Fields *)&style->invoker_method)->
                                             DefaultValue;
                                pSVar12 = (System_String_o *)
                                          (*(__this_08->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this_08,
                                                     (__this_08->klass->vtable)._4_get_ThemePanel.method);
                                pUVar13 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                UI_ElementStyle___ctor(pUVar13,fontSize,120.0,20.0,pSVar12,(MethodInfo *)0x0);
                                pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
                                ;
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateTextButton
                                          (pUVar22,pUVar13,"Reset Colors",0.0,pUVar17,(MethodInfo *)0x0);
                                UI_CollapsibleToggleSection__AddChild
                                          ((UI_CollapsibleToggleSection_o *)pSVar19,
                                           (UnityEngine_GameObject_o *)pSVar21,(MethodInfo *)0x0);
                                return extraout_RAX_00;
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae576 == '\0') {
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fe9c6;
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fe9d2;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fe9de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fe9ea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fe9f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea32;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea3e;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea4a;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea56;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea62;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateGuildRoleSpriteButton_b__0);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fea9e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43feaaa;
    il2cpp_runtime_helper_023445d0(&"GuildRoleSpriteButton");
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43feab6;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae576 = '\x01';
  }
  pUStackY_260 = (UnityEngine_GameObject_o *)0x43feacc;
  __this_03 = (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pUStackY_260 = (UnityEngine_GameObject_o *)0x43fead9;
  UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(__this_03,(MethodInfo *)0x0);
  SVar24.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar36;
  pUVar14 = extraout_RDX;
  if (__this_03 == (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
label_043ff22f:
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff234;
    il2cpp_runtime_helper_022b2c90();
label_043ff234:
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff239;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    (__this_03->fields).settings = (Settings_ProfileSettings_o *)rawText;
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43feaf9;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,rawText);
    (__this_03->fields).__4__this = (UI_EditProfileProfilePanel_o *)pSVar36;
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43feb12;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).__4__this,pSVar36);
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43feb26;
    in_R9 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar24 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pUStackY_260 = (UnityEngine_GameObject_o *)0x43feb50;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43feb5a;
    pSVar21 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar24,(MethodInfo *)0x0);
    if ((System_Type_array *)in_R9 == (System_Type_array *)0x0) goto label_043ff22f;
    SVar24.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar21;
    if (pSVar21 == (System_Type_array *)0x0) {
label_043feb83:
      if ((int)((System_Type_array *)in_R9)->max_length != 0) {
        ((System_Type_array *)in_R9)->m_Items[0] = (System_Type_o *)pSVar21;
        pUStackY_260 = (UnityEngine_GameObject_o *)0x43feb9e;
        il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items);
        pUStackY_260 = (UnityEngine_GameObject_o *)0x43febaf;
        SVar24.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (SVar24.fields.value != 0) {
          pUStackY_260 = (UnityEngine_GameObject_o *)0x43febc6;
          lVar23 = il2cpp_runtime_helper_023051f0(SVar24.fields.value);
          if (lVar23 == 0) goto label_043ff239;
        }
        if (1 < (uint)((System_Type_array *)in_R9)->max_length) {
          ((System_Type_array *)in_R9)->m_Items[1] = (System_Type_o *)SVar24.fields.value;
          pUStackY_260 = (UnityEngine_GameObject_o *)0x43febea;
          il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 1);
          pUStackY_260 = (UnityEngine_GameObject_o *)0x43febfb;
          SVar24.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (SVar24.fields.value != 0) {
            pUStackY_260 = (UnityEngine_GameObject_o *)0x43fec12;
            lVar23 = il2cpp_runtime_helper_023051f0(SVar24.fields.value);
            if (lVar23 == 0) goto label_043ff239;
          }
          if (2 < (uint)((System_Type_array *)in_R9)->max_length) {
            ((System_Type_array *)in_R9)->m_Items[2] = (System_Type_o *)SVar24.fields.value;
            pUStackY_260 = (UnityEngine_GameObject_o *)0x43fec36;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 2);
            pUStackY_260 = (UnityEngine_GameObject_o *)0x43fec47;
            SVar24.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if (SVar24.fields.value != 0) {
              pUStackY_260 = (UnityEngine_GameObject_o *)0x43fec5e;
              lVar23 = il2cpp_runtime_helper_023051f0(SVar24.fields.value);
              if (lVar23 == 0) goto label_043ff239;
            }
            if (3 < (uint)((System_Type_array *)in_R9)->max_length) {
              ((System_Type_array *)in_R9)->m_Items[3] = (System_Type_o *)SVar24.fields.value;
              pUStackY_260 = (UnityEngine_GameObject_o *)0x43fec82;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 3);
              pUStackY_260 = (UnityEngine_GameObject_o *)0x43fec93;
              SVar24.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if (SVar24.fields.value != 0) {
                pUStackY_260 = (UnityEngine_GameObject_o *)0x43fecaa;
                lVar23 = il2cpp_runtime_helper_023051f0(SVar24.fields.value);
                if (lVar23 == 0) goto label_043ff239;
              }
              if (4 < (uint)((System_Type_array *)in_R9)->max_length) {
                ((System_Type_array *)in_R9)->m_Items[4] = (System_Type_o *)SVar24.fields.value;
                pUStackY_260 = (UnityEngine_GameObject_o *)0x43fecd6;
                il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 4,SVar24.fields.value);
                pUStackY_260 = (UnityEngine_GameObject_o *)0x43fece5;
                pUVar14 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                pUStackY_260 = (UnityEngine_GameObject_o *)0x43fecff;
                UnityEngine_GameObject___ctor_4dfc440
                          (pUVar14,"GuildRoleSpriteButton",(System_Type_array *)in_R9,(MethodInfo *)0x0);
                SVar24.fields.value = (System_RuntimeTypeHandle_Fields)(intptr_t)&TypeInfo_GameObject;
                if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                  in_R9 = &TypeInfo_GameObject;
                  pUStackY_260 = (UnityEngine_GameObject_o *)0x43fed15;
                  pUVar22 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
                  if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
                    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fed2d;
                    UnityEngine_Transform__SetParent_4e09e30
                              (pUVar22,(UnityEngine_Transform_o *)parent_00,0,(MethodInfo *)0x0);
                    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fed3f;
                    pSVar25 = (Settings_ProfileSettings_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pSVar25 != (Settings_ProfileSettings_o *)0x0) {
                      pSVar38 = pSVar25->klass;
                      uVar29._0_4_ = pSVar38[1]._2.static_fields_size;
                      uVar29._4_4_ = pSVar38[1]._2.thread_static_fields_size;
                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43fed66;
                      (**(code **)&pSVar38[1]._2.element_size)(0x43820000,pSVar25,uVar29);
                      pSVar38 = pSVar25->klass;
                      uVar7._0_2_ = pSVar38[1]._2.interfaces_count;
                      uVar7._2_2_ = pSVar38[1]._2.interface_offsets_count;
                      uVar7._4_1_ = pSVar38[1]._2.typeHierarchyDepth;
                      uVar7._5_1_ = pSVar38[1]._2.genericRecursionDepth;
                      uVar7._6_1_ = pSVar38[1]._2.rank;
                      uVar7._7_1_ = pSVar38[1]._2.minimumAlignment;
                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43fed81;
                      (**(code **)&pSVar38[1]._2.field_count)(0x42200000,pSVar25,uVar7);
                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43fed93;
                      pIVar26 = UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_Image_GetComponent_Image);
                      SVar24.fields.value =
                           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar25;
                      if (pIVar26 != (Il2CppObject *)0x0) {
                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43fedbd;
                        (*pIVar26->klass->vtable[0x17].methodPtr)
                                  (0x3f800000,0x3f800000,pIVar26,pIVar26->klass->vtable[0x17].method);
                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43fedcf;
                        __this_04 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_Button_GetComponent_Button);
                        if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                          pUStackY_260 = (UnityEngine_GameObject_o *)0x43fedea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUStackY_260 = (UnityEngine_GameObject_o *)0x43fee9a;
                          value.fields.m_NormalColor.fields.b = 1.0;
                          value.fields.m_NormalColor.fields.a = 0.08;
                          value.fields.m_NormalColor.fields.r = 1.0;
                          value.fields.m_NormalColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.r = 1.0;
                          value.fields.m_HighlightedColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.b = 1.0;
                          value.fields.m_HighlightedColor.fields.a = 0.16;
                          value.fields.m_PressedColor.fields.r = 1.0;
                          value.fields.m_PressedColor.fields.g = 1.0;
                          value.fields.m_PressedColor.fields.b = 1.0;
                          value.fields.m_PressedColor.fields.a = 0.24;
                          value.fields.m_SelectedColor.fields.r = 1.0;
                          value.fields.m_SelectedColor.fields.g = 1.0;
                          value.fields.m_SelectedColor.fields.b = 1.0;
                          value.fields.m_SelectedColor.fields.a = 0.16;
                          value.fields.m_DisabledColor.fields.r = 1.0;
                          value.fields.m_DisabledColor.fields.g = 1.0;
                          value.fields.m_DisabledColor.fields.b = 1.0;
                          value.fields.m_DisabledColor.fields.a = 0.05;
                          value.fields.m_ColorMultiplier = 1.0;
                          value.fields.m_FadeDuration = 0.1;
                          UnityEngine_UI_Selectable__set_colors(__this_04,value,(MethodInfo *)0x0);
                          pUStackY_260 = (UnityEngine_GameObject_o *)0x43feeae;
                          SVar24.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                          pUStackY_260 = (UnityEngine_GameObject_o *)0x43feebc;
                          pSVar27 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                          if (SVar24.fields.value != 0) {
                            if (pSVar27 != (System_Type_o *)0x0) {
                              pUStackY_260 = (UnityEngine_GameObject_o *)0x43feedc;
                              lVar23 = il2cpp_runtime_helper_023051f0(pSVar27);
                              if (lVar23 == 0) goto label_043ff239;
                            }
                            if ((int)((System_Type_array *)SVar24.fields.value)->max_length != 0) {
                              ((System_Type_array *)SVar24.fields.value)->m_Items[0] = pSVar27;
                              pUStackY_260 = (UnityEngine_GameObject_o *)0x43feeff;
                              il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar24.fields.value)->m_Items);
                              pUStackY_260 = (UnityEngine_GameObject_o *)0x43fef10;
                              pSVar27 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar27 != (System_Type_o *)0x0) {
                                pUStackY_260 = (UnityEngine_GameObject_o *)0x43fef27;
                                lVar23 = il2cpp_runtime_helper_023051f0(pSVar27);
                                if (lVar23 == 0) goto label_043ff239;
                              }
                              if (1 < (uint)((System_Type_array *)SVar24.fields.value)->max_length) {
                                ((System_Type_array *)SVar24.fields.value)->m_Items[1] = pSVar27;
                                pUStackY_260 = (UnityEngine_GameObject_o *)0x43fef4a;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar24.fields.value)->m_Items + 1);
                                pUStackY_260 = (UnityEngine_GameObject_o *)0x43fef5b;
                                pSVar27 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                if (pSVar27 != (System_Type_o *)0x0) {
                                  pUStackY_260 = (UnityEngine_GameObject_o *)0x43fef72;
                                  lVar23 = il2cpp_runtime_helper_023051f0(pSVar27);
                                  if (lVar23 == 0) goto label_043ff239;
                                }
                                if (2 < (uint)((System_Type_array *)SVar24.fields.value)->max_length) {
                                  ((System_Type_array *)SVar24.fields.value)->m_Items[2] = pSVar27;
                                  pUStackY_260 = (UnityEngine_GameObject_o *)0x43fef98;
                                  il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar24.fields.value)->m_Items + 2,
                                                     pSVar27);
                                  pUStackY_260 = (UnityEngine_GameObject_o *)0x43fefa0;
                                  __this_05 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                  pUStackY_260 = (UnityEngine_GameObject_o *)0x43fefba;
                                  UnityEngine_GameObject___ctor_4dfc440
                                            (__this_05,"Text",(System_Type_array *)SVar24.fields.value,
                                             (MethodInfo *)0x0);
                                  if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
                                    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fefcd;
                                    pUVar22 = UnityEngine_GameObject__get_transform
                                                        (__this_05,(MethodInfo *)0x0);
                                    pUStackY_260 = (UnityEngine_GameObject_o *)0x43fefda;
                                    parent = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
                                    SVar24.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                    if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
                                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43feff2;
                                      UnityEngine_Transform__SetParent_4e09e30
                                                (pUVar22,parent,0,(MethodInfo *)0x0);
                                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff004;
                                      __this_06 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_05,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (g_data_057a694c == '\0') {
                                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff021;
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                        g_data_057a694c = '\x01';
                                      }
                                      SVar24.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      pUVar14 = extraout_RDX;
                                      if (__this_06 != (UnityEngine_RectTransform_o *)0x0) {
                                        in_R9 = &TypeInfo_Vector2;
                                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff050;
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_06,
                                                   (UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                   (MethodInfo *)0x0);
                                        if (g_data_057a9c86 == '\0') {
                                          pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff065;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a9c86 = '\x01';
                                        }
                                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff085;
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_06,
                                                   (UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff097;
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_06,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff0a9;
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_06,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff0bb;
                                        pSVar28 = (Settings_StringSetting_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_05,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                        SVar24.fields.value =
                                             (System_RuntimeTypeHandle_Fields)(pSVar36->m_Items + 0xd);
                                        pSVar36->m_Items[0xd] = (System_Type_o *)pSVar28;
                                        pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff0d9;
                                        il2cpp_runtime_helper_022b4080(SVar24.fields.value);
                                        if ((TMPro_TMP_Text_o *)pSVar36->m_Items[0xd] !=
                                            (TMPro_TMP_Text_o *)0x0) {
                                          pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff0f5;
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pSVar36->m_Items[0xd],1,
                                                     (MethodInfo *)0x0);
                                          if ((extraout_RDX != (UnityEngine_GameObject_o *)0x0) &&
                                             ((TMPro_TMP_Text_o *)
                                              ((Settings_ProfileSettings_o *)SVar24.fields.value)->klass !=
                                              (TMPro_TMP_Text_o *)0x0)) {
                                            pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff11a;
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)
                                                       ((Settings_ProfileSettings_o *)SVar24.fields.value)->
                                                       klass,(float)(int)(extraout_RDX->fields).m_CachedPtr,
                                                       (MethodInfo *)0x0);
                                            if ((TMPro_TMP_Text_o *)
                                                ((Settings_ProfileSettings_o *)SVar24.fields.value)->klass !=
                                                (TMPro_TMP_Text_o *)0x0) {
                                              pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff132;
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)
                                                         ((Settings_ProfileSettings_o *)SVar24.fields.value)->
                                                         klass,1,(MethodInfo *)0x0);
                                              if ((TMPro_TMP_Text_o *)
                                                  ((Settings_ProfileSettings_o *)SVar24.fields.value)->klass
                                                  != (TMPro_TMP_Text_o *)0x0) {
                                                pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff14a;
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)
                                                           ((Settings_ProfileSettings_o *)SVar24.fields.value)
                                                           ->klass,0x1001,(MethodInfo *)0x0);
                                                pSVar38 = ((Settings_ProfileSettings_o *)SVar24.fields.value)
                                                          ->klass;
                                                if (pSVar38 != (Settings_ProfileSettings_c *)0x0) {
                                                  pvVar8 = (pSVar38->_1).image;
                                                  pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff170;
                                                  (**(code **)((long)pvVar8 + 0x2a8))
                                                            (0x3f800000,0x3f800000,pSVar38,
                                                             *(undefined8 *)((long)pvVar8 + 0x2b0));
                                                  pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff178;
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            ((UI_EditProfileProfilePanel_o *)pSVar38,
                                                             (TMPro_TextMeshProUGUI_o *)
                                                             ((Settings_ProfileSettings_o *)
                                                             SVar24.fields.value)->klass,method_01);
                                                  pSVar25 = (__this_03->fields).settings;
                                                  if ((pSVar25 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar28 = (pSVar25->fields).GuildRoleSprite,
                                                     pSVar28 != (Settings_StringSetting_o *)0x0)) {
                                                    pSVar38 = ((Settings_ProfileSettings_o *)
                                                              SVar24.fields.value)->klass;
                                                    pSVar12 = (pSVar28->fields)._value;
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff1b5;
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff1c1;
                                                    pSVar12 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar12,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    SVar24.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                    if (pSVar38 != (Settings_ProfileSettings_c *)0x0) {
                                                      pvVar8 = (pSVar38->_1).image;
                                                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff1dc;
                                                      (**(code **)((long)pvVar8 + 0x558))
                                                                (pSVar38,pSVar12,
                                                                 *(undefined8 *)((long)pvVar8 + 0x560));
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_04->fields).m_CanvasGroupCache;
                                                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff1f2;
                                                      pUVar17 = (UnityEngine_Events_UnityAction_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff20c;
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      SVar24.fields.value = (System_RuntimeTypeHandle_Fields)0
                                                      ;
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,pUVar17,(MethodInfo *)0x0);
                                                        return extraout_RAX_01;
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
                                  goto label_043ff22f;
                                }
                              }
                            }
                            goto label_043ff234;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_043ff22f;
              }
            }
          }
        }
      }
      goto label_043ff234;
    }
    pUStackY_260 = (UnityEngine_GameObject_o *)0x43feb7a;
    lVar23 = il2cpp_runtime_helper_023051f0(pSVar21);
    if (lVar23 != 0) goto label_043feb83;
  }
label_043ff239:
  pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff23e;
  uVar29 = il2cpp_runtime_helper_0231b270();
  lVar23 = 0;
  pUStackY_260 = (UnityEngine_GameObject_o *)0x43ff248;
  il2cpp_runtime_helper_022b2b10(uVar29);
  pSStackY_270 = (System_Type_array *)SVar24.fields.value;
  pSStackY_268 = (System_Type_array *)in_R9;
  pUStackY_260 = pUVar14;
  if (g_data_057ae57b == '\0') {
    lStackY_278 = 0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    lStackY_278 = 0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    lStackY_278 = 0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStackY_278 = 0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    lStackY_278 = 0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    lStackY_278 = 0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    lStackY_278 = 0x43ff3ac;
    pPVar30 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar30 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_278 = 0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_278 = 0x43ff2a6;
    pPVar30 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    lStackY_278 = 0x43ff2ba;
    pSVar15 = (System_String_array *)
              PhotonExtensions__GetCustomProperty(pPVar30,"display_name",(MethodInfo *)0x0);
    plVar32 = (long *)(System_String_array *)0x0;
    if ((pSVar15 != (System_String_array *)0x0) &&
       (plVar32 = (long *)(System_String_array *)0x0, (pSVar15->obj).klass == g_data_057b9c00)) {
      plVar32 = (long *)pSVar15;
    }
    lVar34 = 0;
    lStackY_278 = 0x43ff2e0;
    bVar10 = System_String__IsNullOrEmpty((System_String_o *)plVar32,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return (System_String_array *)plVar32;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_278 = 0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_278 = 0x43ff300;
    pPVar30 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar30 != (Photon_Realtime_Player_o *)0x0) {
      lVar34 = 0;
      lStackY_278 = 0x43ff314;
      bVar10 = System_String__IsNullOrEmpty
                         (*(System_String_o **)&(pPVar30->fields)._HasRejoined_k__BackingField,
                          (MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_043ff3b5;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        lStackY_278 = 0x43ff32d;
        il2cpp_runtime_helper_02337ed0();
      }
      lStackY_278 = 0x43ff334;
      pPVar30 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar30 != (Photon_Realtime_Player_o *)0x0) {
        return *(System_String_array **)&(pPVar30->fields)._HasRejoined_k__BackingField;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    lStackY_278 = 0x43ff283;
    pPVar30 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar30 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    plVar32 = &TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      lStackY_278 = 0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_278 = 0x43ff3d4;
    pSVar12 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    lStackY_278 = 0x43ff3de;
    bVar10 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        lStackY_278 = 0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_String_array *)ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return pSVar15;
    }
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x30) == 0)) {
      return "N/A";
    }
    lVar34 = 0;
    lStackY_278 = 0x43ff3fb;
    bVar10 = System_String__IsNullOrEmpty
                       (*(System_String_o **)(*(long *)(lVar23 + 0x30) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return "N/A";
    }
    if (*(long *)(lVar23 + 0x30) != 0) {
      return *(System_String_array **)(*(long *)(lVar23 + 0x30) + 0x18);
    }
  }
  lStackY_278 = 0x43ff443;
  uStackY_288 = il2cpp_runtime_helper_022b2c90();
  pSStackY_280 = (System_String_array *)plVar32;
  lStackY_278 = lVar23;
  if (g_data_057ae57a == '\0') {
    pcStackY_290 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStackY_290 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStackY_290 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStackY_290 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStackY_290 = (code *)0x43ff4aa;
  pSVar12 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStackY_290 = (code *)0x43ff4b4;
  bVar10 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStackY_290 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_array *)ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return pSVar15;
  }
  if ((lVar34 == 0) || (*(long *)(lVar34 + 0x68) == 0)) {
    return "N/A";
  }
  pcStackY_290 = (code *)0x43ff4d1;
  bVar10 = System_String__IsNullOrEmpty
                     (*(System_String_o **)(*(long *)(lVar34 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return "N/A";
  }
  if (*(long *)(lVar34 + 0x68) != 0) {
    return *(System_String_array **)(*(long *)(lVar34 + 0x68) + 0x18);
  }
  pcStackY_290 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
  il2cpp_runtime_helper_022b2c90();
  pcStackY_290 = (code *)&TypeInfo_AccountManager;
  if (g_data_057ae57c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae57c = '\x01';
  }
  pSStackY_298 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar30 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar30 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar30 != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar30 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    tierLabel = &pSStackY_298;
    bVar10 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar30,tierLabel,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_043ff5d0;
  }
  tierLabel = &pSStackY_298;
  bVar10 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    tierLabel = (System_String_o **)&"None";
  }
label_043ff5d0:
  return (System_String_array *)*tierLabel;
}


// UI.EditProfileProfilePanel$$CreateGuildRoleSpriteButton
// il2cpp: void UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton (UI_EditProfileProfilePanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x43fe990

void UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar3;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this_01;
  System_Type_array *pSVar4;
  long lVar5;
  System_RuntimeTypeHandle_o SVar6;
  UI_ElementStyle_o *__this_02;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  UnityEngine_UI_Selectable_o *__this_03;
  System_Type_o *pSVar10;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *__this_05;
  TMPro_TextMeshProUGUI_o *pTVar11;
  System_String_o *pSVar12;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar13;
  Photon_Realtime_Player_o *pPVar14;
  MethodInfo *method_00;
  long *value_00;
  long lVar15;
  long *unaff_R14;
  System_String_o *pSStackY_138;
  code *pcStackY_130;
  undefined8 uStackY_128;
  System_String_o *pSStackY_120;
  long lStackY_118;
  System_Type_array *pSStackY_110;
  System_Type_array *pSStackY_108;
  UI_ElementStyle_o *pUStackY_100;
  
  if (g_data_057ae576 == '\0') {
    pUStackY_100 = (UI_ElementStyle_o *)0x43fe9c6;
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fe9d2;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fe9de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fe9ea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fe9f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea32;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea3e;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea4a;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea56;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea62;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateGuildRoleSpriteButton_b__0);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    pUStackY_100 = (UI_ElementStyle_o *)0x43fea9e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_100 = (UI_ElementStyle_o *)0x43feaaa;
    il2cpp_runtime_helper_023445d0(&"GuildRoleSpriteButton");
    pUStackY_100 = (UI_ElementStyle_o *)0x43feab6;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae576 = '\x01';
  }
  pUStackY_100 = (UI_ElementStyle_o *)0x43feacc;
  __this_01 = (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pUStackY_100 = (UI_ElementStyle_o *)0x43fead9;
  UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(__this_01,(MethodInfo *)0x0);
  SVar6.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this;
  __this_02 = style;
  if (__this_01 == (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
label_043ff22f:
    pUStackY_100 = (UI_ElementStyle_o *)0x43ff234;
    il2cpp_runtime_helper_022b2c90();
label_043ff234:
    pUStackY_100 = (UI_ElementStyle_o *)0x43ff239;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    (__this_01->fields).settings = settings;
    pUStackY_100 = (UI_ElementStyle_o *)0x43feaf9;
    il2cpp_runtime_helper_022b4080(&__this_01->fields,settings);
    (__this_01->fields).__4__this = __this;
    pUStackY_100 = (UI_ElementStyle_o *)0x43feb12;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,__this);
    pUStackY_100 = (UI_ElementStyle_o *)0x43feb26;
    unaff_R14 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar6 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pUStackY_100 = (UI_ElementStyle_o *)0x43feb50;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStackY_100 = (UI_ElementStyle_o *)0x43feb5a;
    pSVar4 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
    if ((System_Type_array *)unaff_R14 == (System_Type_array *)0x0) goto label_043ff22f;
    SVar6.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar4;
    if (pSVar4 == (System_Type_array *)0x0) {
label_043feb83:
      if ((int)((System_Type_array *)unaff_R14)->max_length != 0) {
        ((System_Type_array *)unaff_R14)->m_Items[0] = (System_Type_o *)pSVar4;
        pUStackY_100 = (UI_ElementStyle_o *)0x43feb9e;
        il2cpp_runtime_helper_022b4080(((System_Type_array *)unaff_R14)->m_Items);
        pUStackY_100 = (UI_ElementStyle_o *)0x43febaf;
        SVar6.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (SVar6.fields.value != 0) {
          pUStackY_100 = (UI_ElementStyle_o *)0x43febc6;
          lVar5 = il2cpp_runtime_helper_023051f0(SVar6.fields.value);
          if (lVar5 == 0) goto label_043ff239;
        }
        if (1 < (uint)((System_Type_array *)unaff_R14)->max_length) {
          ((System_Type_array *)unaff_R14)->m_Items[1] = (System_Type_o *)SVar6.fields.value;
          pUStackY_100 = (UI_ElementStyle_o *)0x43febea;
          il2cpp_runtime_helper_022b4080(((System_Type_array *)unaff_R14)->m_Items + 1);
          pUStackY_100 = (UI_ElementStyle_o *)0x43febfb;
          SVar6.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (SVar6.fields.value != 0) {
            pUStackY_100 = (UI_ElementStyle_o *)0x43fec12;
            lVar5 = il2cpp_runtime_helper_023051f0(SVar6.fields.value);
            if (lVar5 == 0) goto label_043ff239;
          }
          if (2 < (uint)((System_Type_array *)unaff_R14)->max_length) {
            ((System_Type_array *)unaff_R14)->m_Items[2] = (System_Type_o *)SVar6.fields.value;
            pUStackY_100 = (UI_ElementStyle_o *)0x43fec36;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)unaff_R14)->m_Items + 2);
            pUStackY_100 = (UI_ElementStyle_o *)0x43fec47;
            SVar6.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if (SVar6.fields.value != 0) {
              pUStackY_100 = (UI_ElementStyle_o *)0x43fec5e;
              lVar5 = il2cpp_runtime_helper_023051f0(SVar6.fields.value);
              if (lVar5 == 0) goto label_043ff239;
            }
            if (3 < (uint)((System_Type_array *)unaff_R14)->max_length) {
              ((System_Type_array *)unaff_R14)->m_Items[3] = (System_Type_o *)SVar6.fields.value;
              pUStackY_100 = (UI_ElementStyle_o *)0x43fec82;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)unaff_R14)->m_Items + 3);
              pUStackY_100 = (UI_ElementStyle_o *)0x43fec93;
              SVar6.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if (SVar6.fields.value != 0) {
                pUStackY_100 = (UI_ElementStyle_o *)0x43fecaa;
                lVar5 = il2cpp_runtime_helper_023051f0(SVar6.fields.value);
                if (lVar5 == 0) goto label_043ff239;
              }
              if (4 < (uint)((System_Type_array *)unaff_R14)->max_length) {
                ((System_Type_array *)unaff_R14)->m_Items[4] = (System_Type_o *)SVar6.fields.value;
                pUStackY_100 = (UI_ElementStyle_o *)0x43fecd6;
                il2cpp_runtime_helper_022b4080(((System_Type_array *)unaff_R14)->m_Items + 4,SVar6.fields.value);
                pUStackY_100 = (UI_ElementStyle_o *)0x43fece5;
                __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                pUStackY_100 = (UI_ElementStyle_o *)0x43fecff;
                UnityEngine_GameObject___ctor_4dfc440
                          ((UnityEngine_GameObject_o *)__this_02,"GuildRoleSpriteButton",(System_Type_array *)unaff_R14,
                           (MethodInfo *)0x0);
                SVar6.fields.value =
                     (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)&TypeInfo_GameObject;
                if (__this_02 != (UI_ElementStyle_o *)0x0) {
                  unaff_R14 = &TypeInfo_GameObject;
                  pUStackY_100 = (UI_ElementStyle_o *)0x43fed15;
                  pUVar7 = UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    pUStackY_100 = (UI_ElementStyle_o *)0x43fed2d;
                    UnityEngine_Transform__SetParent_4e09e30(pUVar7,parent,0,(MethodInfo *)0x0);
                    pUStackY_100 = (UI_ElementStyle_o *)0x43fed3f;
                    pIVar8 = UnityEngine_GameObject__GetComponent_object_
                                       ((UnityEngine_GameObject_o *)__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar8 != (Il2CppObject *)0x0) {
                      pUStackY_100 = (UI_ElementStyle_o *)0x43fed66;
                      (*pIVar8->klass->vtable[0x24].methodPtr)
                                (0x43820000,pIVar8,pIVar8->klass->vtable[0x24].method);
                      pUStackY_100 = (UI_ElementStyle_o *)0x43fed81;
                      (*pIVar8->klass->vtable[0x26].methodPtr)
                                (0x42200000,pIVar8,pIVar8->klass->vtable[0x26].method);
                      pUStackY_100 = (UI_ElementStyle_o *)0x43fed93;
                      pIVar9 = UnityEngine_GameObject__GetComponent_object_
                                         ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Image_GetComponent_Image);
                      SVar6.fields.value =
                           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar8;
                      if (pIVar9 != (Il2CppObject *)0x0) {
                        pUStackY_100 = (UI_ElementStyle_o *)0x43fedbd;
                        (*pIVar9->klass->vtable[0x17].methodPtr)
                                  (0x3f800000,0x3f800000,pIVar9,pIVar9->klass->vtable[0x17].method);
                        pUStackY_100 = (UI_ElementStyle_o *)0x43fedcf;
                        __this_03 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
                        if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                          pUStackY_100 = (UI_ElementStyle_o *)0x43fedea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUStackY_100 = (UI_ElementStyle_o *)0x43fee9a;
                          value.fields.m_NormalColor.fields.b = 1.0;
                          value.fields.m_NormalColor.fields.a = 0.08;
                          value.fields.m_NormalColor.fields.r = 1.0;
                          value.fields.m_NormalColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.r = 1.0;
                          value.fields.m_HighlightedColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.b = 1.0;
                          value.fields.m_HighlightedColor.fields.a = 0.16;
                          value.fields.m_PressedColor.fields.r = 1.0;
                          value.fields.m_PressedColor.fields.g = 1.0;
                          value.fields.m_PressedColor.fields.b = 1.0;
                          value.fields.m_PressedColor.fields.a = 0.24;
                          value.fields.m_SelectedColor.fields.r = 1.0;
                          value.fields.m_SelectedColor.fields.g = 1.0;
                          value.fields.m_SelectedColor.fields.b = 1.0;
                          value.fields.m_SelectedColor.fields.a = 0.16;
                          value.fields.m_DisabledColor.fields.r = 1.0;
                          value.fields.m_DisabledColor.fields.g = 1.0;
                          value.fields.m_DisabledColor.fields.b = 1.0;
                          value.fields.m_DisabledColor.fields.a = 0.05;
                          value.fields.m_ColorMultiplier = 1.0;
                          value.fields.m_FadeDuration = 0.1;
                          UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
                          pUStackY_100 = (UI_ElementStyle_o *)0x43feeae;
                          SVar6.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                          pUStackY_100 = (UI_ElementStyle_o *)0x43feebc;
                          pSVar10 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                          if (SVar6.fields.value != 0) {
                            if (pSVar10 != (System_Type_o *)0x0) {
                              pUStackY_100 = (UI_ElementStyle_o *)0x43feedc;
                              lVar5 = il2cpp_runtime_helper_023051f0(pSVar10);
                              if (lVar5 == 0) goto label_043ff239;
                            }
                            if ((int)((System_Type_array *)SVar6.fields.value)->max_length != 0) {
                              ((System_Type_array *)SVar6.fields.value)->m_Items[0] = pSVar10;
                              pUStackY_100 = (UI_ElementStyle_o *)0x43feeff;
                              il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar6.fields.value)->m_Items);
                              pUStackY_100 = (UI_ElementStyle_o *)0x43fef10;
                              pSVar10 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar10 != (System_Type_o *)0x0) {
                                pUStackY_100 = (UI_ElementStyle_o *)0x43fef27;
                                lVar5 = il2cpp_runtime_helper_023051f0(pSVar10);
                                if (lVar5 == 0) goto label_043ff239;
                              }
                              if (1 < (uint)((System_Type_array *)SVar6.fields.value)->max_length) {
                                ((System_Type_array *)SVar6.fields.value)->m_Items[1] = pSVar10;
                                pUStackY_100 = (UI_ElementStyle_o *)0x43fef4a;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar6.fields.value)->m_Items + 1);
                                pUStackY_100 = (UI_ElementStyle_o *)0x43fef5b;
                                pSVar10 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                if (pSVar10 != (System_Type_o *)0x0) {
                                  pUStackY_100 = (UI_ElementStyle_o *)0x43fef72;
                                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar10);
                                  if (lVar5 == 0) goto label_043ff239;
                                }
                                if (2 < (uint)((System_Type_array *)SVar6.fields.value)->max_length) {
                                  ((System_Type_array *)SVar6.fields.value)->m_Items[2] = pSVar10;
                                  pUStackY_100 = (UI_ElementStyle_o *)0x43fef98;
                                  il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar6.fields.value)->m_Items + 2,
                                                     pSVar10);
                                  pUStackY_100 = (UI_ElementStyle_o *)0x43fefa0;
                                  __this_04 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                  pUStackY_100 = (UI_ElementStyle_o *)0x43fefba;
                                  UnityEngine_GameObject___ctor_4dfc440
                                            (__this_04,"Text",(System_Type_array *)SVar6.fields.value,
                                             (MethodInfo *)0x0);
                                  if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
                                    pUStackY_100 = (UI_ElementStyle_o *)0x43fefcd;
                                    pUVar7 = UnityEngine_GameObject__get_transform
                                                       (__this_04,(MethodInfo *)0x0);
                                    pUStackY_100 = (UI_ElementStyle_o *)0x43fefda;
                                    parent_00 = UnityEngine_GameObject__get_transform
                                                          ((UnityEngine_GameObject_o *)__this_02,
                                                           (MethodInfo *)0x0);
                                    SVar6.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                      pUStackY_100 = (UI_ElementStyle_o *)0x43feff2;
                                      UnityEngine_Transform__SetParent_4e09e30
                                                (pUVar7,parent_00,0,(MethodInfo *)0x0);
                                      pUStackY_100 = (UI_ElementStyle_o *)0x43ff004;
                                      __this_05 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (g_data_057a694c == '\0') {
                                        pUStackY_100 = (UI_ElementStyle_o *)0x43ff021;
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                        g_data_057a694c = '\x01';
                                      }
                                      SVar6.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      __this_02 = style;
                                      if (__this_05 != (UnityEngine_RectTransform_o *)0x0) {
                                        unaff_R14 = &TypeInfo_Vector2;
                                        pUStackY_100 = (UI_ElementStyle_o *)0x43ff050;
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_05,
                                                   (UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                   (MethodInfo *)0x0);
                                        if (g_data_057a9c86 == '\0') {
                                          pUStackY_100 = (UI_ElementStyle_o *)0x43ff065;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a9c86 = '\x01';
                                        }
                                        pUStackY_100 = (UI_ElementStyle_o *)0x43ff085;
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_05,
                                                   (UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                        pUStackY_100 = (UI_ElementStyle_o *)0x43ff097;
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_05,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_100 = (UI_ElementStyle_o *)0x43ff0a9;
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_05,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_100 = (UI_ElementStyle_o *)0x43ff0bb;
                                        pTVar11 = (TMPro_TextMeshProUGUI_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_04,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                        SVar6.fields.value =
                                             (System_RuntimeTypeHandle_Fields)
                                             &(__this->fields)._guildRoleSpriteButtonLabel;
                                        (__this->fields)._guildRoleSpriteButtonLabel = pTVar11;
                                        pUStackY_100 = (UI_ElementStyle_o *)0x43ff0d9;
                                        il2cpp_runtime_helper_022b4080(SVar6.fields.value);
                                        pTVar11 = (__this->fields)._guildRoleSpriteButtonLabel;
                                        if (pTVar11 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                          pUStackY_100 = (UI_ElementStyle_o *)0x43ff0f5;
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pTVar11,1,(MethodInfo *)0x0);
                                          if ((style != (UI_ElementStyle_o *)0x0) &&
                                             (*(TMPro_TextMeshProUGUI_o **)SVar6.fields.value !=
                                              (TMPro_TextMeshProUGUI_o *)0x0)) {
                                            pUStackY_100 = (UI_ElementStyle_o *)0x43ff11a;
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)
                                                       *(TMPro_TextMeshProUGUI_o **)SVar6.fields.value,
                                                       (float)(style->fields).FontSize,(MethodInfo *)0x0);
                                            if (*(TMPro_TextMeshProUGUI_o **)SVar6.fields.value !=
                                                (TMPro_TextMeshProUGUI_o *)0x0) {
                                              pUStackY_100 = (UI_ElementStyle_o *)0x43ff132;
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)
                                                         *(TMPro_TextMeshProUGUI_o **)SVar6.fields.value,1,
                                                         (MethodInfo *)0x0);
                                              if (*(TMPro_TextMeshProUGUI_o **)SVar6.fields.value !=
                                                  (TMPro_TextMeshProUGUI_o *)0x0) {
                                                pUStackY_100 = (UI_ElementStyle_o *)0x43ff14a;
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)
                                                           *(TMPro_TextMeshProUGUI_o **)SVar6.fields.value,
                                                           0x1001,(MethodInfo *)0x0);
                                                pTVar11 = *(TMPro_TextMeshProUGUI_o **)SVar6.fields.value;
                                                if (pTVar11 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                  pUStackY_100 = (UI_ElementStyle_o *)0x43ff170;
                                                  (*(pTVar11->klass->vtable)._23_set_color.methodPtr)
                                                            (0x3f800000,0x3f800000,pTVar11,
                                                             (pTVar11->klass->vtable)._23_set_color.method);
                                                  pUStackY_100 = (UI_ElementStyle_o *)0x43ff178;
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            ((UI_EditProfileProfilePanel_o *)pTVar11,
                                                             *(TMPro_TextMeshProUGUI_o **)SVar6.fields.value,
                                                             method_00);
                                                  pSVar1 = (__this_01->fields).settings;
                                                  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar2 = (pSVar1->fields).GuildRoleSprite,
                                                     pSVar2 != (Settings_StringSetting_o *)0x0)) {
                                                    pTVar11 = *(TMPro_TextMeshProUGUI_o **)SVar6.fields.value;
                                                    pSVar12 = (pSVar2->fields)._value;
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      pUStackY_100 = (UI_ElementStyle_o *)0x43ff1b5;
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pUStackY_100 = (UI_ElementStyle_o *)0x43ff1c1;
                                                    pSVar12 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar12,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    SVar6.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                    if (pTVar11 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                      pUStackY_100 = (UI_ElementStyle_o *)0x43ff1dc;
                                                      (*(pTVar11->klass->vtable)._66_set_text.methodPtr)
                                                                (pTVar11,pSVar12,
                                                                 (pTVar11->klass->vtable)._66_set_text.method)
                                                      ;
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_03->fields).m_CanvasGroupCache;
                                                      pUStackY_100 = (UI_ElementStyle_o *)0x43ff1f2;
                                                      call = (UnityEngine_Events_UnityAction_o *)
                                                             il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      pUStackY_100 = (UI_ElementStyle_o *)0x43ff20c;
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      SVar6.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,call,(MethodInfo *)0x0);
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
                                  goto label_043ff22f;
                                }
                              }
                            }
                            goto label_043ff234;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_043ff22f;
              }
            }
          }
        }
      }
      goto label_043ff234;
    }
    pUStackY_100 = (UI_ElementStyle_o *)0x43feb7a;
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_043feb83;
  }
label_043ff239:
  pUStackY_100 = (UI_ElementStyle_o *)0x43ff23e;
  uVar13 = il2cpp_runtime_helper_0231b270();
  lVar5 = 0;
  pUStackY_100 = (UI_ElementStyle_o *)0x43ff248;
  il2cpp_runtime_helper_022b2b10(uVar13);
  pSStackY_110 = (System_Type_array *)SVar6.fields.value;
  pSStackY_108 = (System_Type_array *)unaff_R14;
  pUStackY_100 = __this_02;
  if (g_data_057ae57b == '\0') {
    lStackY_118 = 0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    lStackY_118 = 0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    lStackY_118 = 0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStackY_118 = 0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    lStackY_118 = 0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    lStackY_118 = 0x43ff283;
    pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar14 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_118 = 0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_118 = 0x43ff2a6;
    pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    lStackY_118 = 0x43ff2ba;
    pSVar12 = (System_String_o *)PhotonExtensions__GetCustomProperty(pPVar14,"display_name",(MethodInfo *)0x0);
    value_00 = (long *)(System_String_o *)0x0;
    if ((pSVar12 != (System_String_o *)0x0) &&
       (value_00 = (long *)(System_String_o *)0x0, (Il2CppClass *)pSVar12->klass == g_data_057b9c00)) {
      value_00 = (long *)pSVar12;
    }
    lVar15 = 0;
    lStackY_118 = 0x43ff2e0;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_118 = 0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_118 = 0x43ff300;
    pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar14 == (Photon_Realtime_Player_o *)0x0) goto label_043ff43e;
    lVar15 = 0;
    lStackY_118 = 0x43ff314;
    bVar3 = System_String__IsNullOrEmpty
                      (*(System_String_o **)&(pPVar14->fields)._HasRejoined_k__BackingField,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') goto label_043ff3b5;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_118 = 0x43ff32d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_118 = 0x43ff334;
    pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    lStackY_118 = 0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    lStackY_118 = 0x43ff3ac;
    pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar14 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    value_00 = &TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      lStackY_118 = 0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_118 = 0x43ff3d4;
    pSVar12 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    lStackY_118 = 0x43ff3de;
    bVar3 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        lStackY_118 = 0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    if (*(long *)(lVar5 + 0x30) == 0) {
      return;
    }
    lVar15 = 0;
    lStackY_118 = 0x43ff3fb;
    bVar3 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    pPVar14 = *(Photon_Realtime_Player_o **)(lVar5 + 0x30);
  }
  if (pPVar14 != (Photon_Realtime_Player_o *)0x0) {
    return;
  }
label_043ff43e:
  lStackY_118 = 0x43ff443;
  uStackY_128 = il2cpp_runtime_helper_022b2c90();
  pSStackY_120 = (System_String_o *)value_00;
  lStackY_118 = lVar5;
  if (g_data_057ae57a == '\0') {
    pcStackY_130 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStackY_130 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStackY_130 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStackY_130 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStackY_130 = (code *)0x43ff4aa;
  pSVar12 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStackY_130 = (code *)0x43ff4b4;
  bVar3 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStackY_130 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return;
  }
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x68) == 0)) {
    return;
  }
  pcStackY_130 = (code *)0x43ff4d1;
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(lVar15 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(long *)(lVar15 + 0x68) == 0) {
    pcStackY_130 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
    il2cpp_runtime_helper_022b2c90();
    pcStackY_130 = (code *)&TypeInfo_AccountManager;
    if (g_data_057ae57c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae57c = '\x01';
    }
    pSStackY_138 = (System_String_o *)0x0;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar14 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar14,&pSStackY_138,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return;
      }
    }
    PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStackY_138,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.EditProfileProfilePanel$$UpdateGuildRoleSpriteButtonText
// il2cpp: void UI_EditProfileProfilePanel__UpdateGuildRoleSpriteButtonText (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x43ffc70

void UI_EditProfileProfilePanel__UpdateGuildRoleSpriteButtonText
               (UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  long lVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  TMPro_TextMeshProUGUI_c *pTVar3;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  TMPro_TextMeshProUGUI_o *__this_00;
  
  if (g_data_057ae577 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae577 = '\x01';
  }
  __this_00 = (__this->fields)._guildRoleSpriteButtonLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    pTVar2 = (__this->fields)._guildRoleSpriteButtonLabel;
    __this_00 = *(TMPro_TextMeshProUGUI_o **)(lVar1 + 0x18);
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                       ((System_String_o *)__this_00,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pTVar3 = pTVar2->klass;
      vtableDispatch = (pTVar3->vtable)._66_set_text.methodPtr;
      (*vtableDispatch)
                (pTVar2,pSVar5,(pTVar3->vtable)._66_set_text.method,pTVar3,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel$$GetGuildPreviewText
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetGuildPreviewText (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x43fdad0

System_String_o *
UI_EditProfileProfilePanel__GetGuildPreviewText
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  char cVar1;
  int32_t fontSize;
  Settings_NameSetting_o *pSVar2;
  System_String_o *selectedRoleName;
  System_String_array *options;
  UI_ColorPickPopup_o *pUVar3;
  undefined8 uVar4;
  void *pvVar5;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  undefined4 extraout_var;
  TMPro_TMP_FontAsset_o *pTVar8;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  System_Type_array *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar9;
  System_Type_array *pSVar10;
  System_Type_array *pSVar11;
  UnityEngine_GameObject_o *pUVar12;
  UI_ColorSettingElement_o *pUVar13;
  System_Type_array *pSVar14;
  UnityEngine_Transform_o *pUVar15;
  UI_ElementStyle_o *__this_02;
  System_String_o *extraout_RAX_00;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this_03;
  long lVar16;
  System_RuntimeTypeHandle_o SVar17;
  Settings_ProfileSettings_o *pSVar18;
  Il2CppObject *pIVar19;
  UnityEngine_UI_Selectable_o *__this_04;
  System_Type_o *pSVar20;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_06;
  Settings_StringSetting_o *pSVar21;
  System_String_o *extraout_RAX_01;
  undefined8 uVar22;
  Photon_Realtime_Player_o *pPVar23;
  undefined4 extraout_var_01;
  System_String_o *extraout_RAX_02;
  UI_EditProfileProfilePanel_o *in_RCX;
  MethodInfo *method_00;
  MethodInfo_255A0F0 *style;
  UnityEngine_GameObject_o *extraout_RDX;
  MethodInfo *method_01;
  long *plVar24;
  System_String_o **tierLabel;
  TMPro_TMP_Text_o *__this_07;
  MethodInfo_255A0F0 *parent_00;
  long lVar25;
  TMPro_TMP_FontAsset_o *pTVar26;
  UI_EditProfileProfilePanel_o *__this_08;
  System_Type_array *pSVar27;
  UI_ColorSettingElement_o **ppUVar28;
  Settings_ProfileSettings_c *pSVar29;
  UI_CategoryPanel_o *__this_09;
  byte in_R8B;
  long *in_R9;
  PatreonEffects_NameEffectController_o *unaff_R12;
  bool bVar30;
  System_String_o *pSStackY_228;
  code *pcStackY_220;
  undefined8 uStackY_218;
  System_String_o *pSStackY_210;
  long lStackY_208;
  System_Type_array *pSStackY_200;
  System_Type_array *pSStackY_1f8;
  UnityEngine_GameObject_o *pUStackY_1f0;
  System_Nullable_float__Fields SStack_c8;
  Settings_StringSetting_o **ppSStack_c0;
  System_Type_array *pSStack_b8;
  PatreonEffects_NameEffectController_o *pPStack_b0;
  Settings_StringSetting_o *in_stack_ffffffffffffff80;
  Settings_StringSetting_o *in_stack_ffffffffffffff88;
  Settings_NameSetting_o *in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff98;
  undefined4 uStack_64;
  System_Type_array *in_stack_ffffffffffffffa0;
  System_Type_array *__this_10;
  
  __this_07 = (TMPro_TMP_Text_o *)settings;
  if (g_data_057ae578 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae578 = '\x01';
  }
  if ((settings != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar2 = (settings->fields).Guild, pSVar2 != (Settings_NameSetting_o *)0x0)) {
    pSVar7 = (pSVar2->fields)._value;
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = Anticheat_ChatFilter__FilterBadWords(pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_07 = (TMPro_TMP_Text_o *)0x0;
    pSVar7 = MiscExtensions__HexColor(pSVar7,(MethodInfo *)0x0);
    pSVar21 = (settings->fields).GuildRoleSprite;
    if (pSVar21 != (Settings_StringSetting_o *)0x0) {
      selectedRoleName = (pSVar21->fields)._value;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                         ((Photon_Realtime_Player_o *)0x0,pSVar7,selectedRoleName,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae579 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae579 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_07,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var,bVar6);
  }
  pTVar8 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = (System_Type_array *)0x0;
  pTVar26 = pTVar8;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_043fdc8f:
    pTVar8 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = (System_Type_array *)0x0;
    pTVar26 = pTVar8;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_00,bVar6);
    }
    if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_spriteAsset(__this_07,(TMPro_TMP_SpriteAsset_o *)pTVar8,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  else if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_font(__this_07,pTVar8,(MethodInfo *)0x0);
    goto label_043fdc8f;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae572 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae572 = '\x01';
  }
  pSVar27 = *(System_Type_array **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  __this_08 = (UI_EditProfileProfilePanel_o *)0x0;
  bVar6 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if ((pSVar27 != (System_Type_array *)0x0) &&
     ((Settings_NameSetting_o *)pSVar27->m_Items[2] != (Settings_NameSetting_o *)0x0)) {
    pSVar14 = *(System_Type_array **)&(pTVar26->fields).m_FaceInfo.fields.m_SuperscriptSize;
    in_RCX = (UI_EditProfileProfilePanel_o *)(((Settings_NameSetting_o *)pSVar27->m_Items[2])->fields)._value;
    if ((char)bVar6 == '\0') {
      in_R8B = false;
    }
    else {
      if ((Settings_BoolSetting_o *)pSVar27->m_Items[0xc] == (Settings_BoolSetting_o *)0x0) goto label_043fde43;
      in_R8B = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar27->m_Items[0xc])->fields).DefaultValue + 1)
               != '\0';
    }
    in_stack_ffffffffffffff88 = (Settings_StringSetting_o *)pSVar27->m_Items[0x10];
    in_stack_ffffffffffffff90 = (Settings_NameSetting_o *)pSVar27->m_Items[0x11];
    in_stack_ffffffffffffff80 = (Settings_StringSetting_o *)pSVar27->m_Items[0xf];
    in_R9 = (long *)pSVar27->m_Items[0xd];
    in_stack_ffffffffffffff98 = 1;
    UI_EditProfileProfilePanel__RefreshSinglePreview
              (__this_08,(UnityEngine_GameObject_o *)pSVar14,
               *(PatreonEffects_NameEffectController_o **)&(pTVar26->fields).m_FaceInfo.fields.m_SubscriptSize
               ,(System_String_o *)in_RCX,(uint)in_R8B,(Settings_StringSetting_o *)in_R9,
               (Settings_ColorSetting_o *)pSVar27->m_Items[0xe],
               (Settings_ColorSetting_o *)in_stack_ffffffffffffff80,
               (Settings_ColorSetting_o *)in_stack_ffffffffffffff88,
               (Settings_ColorSetting_o *)in_stack_ffffffffffffff90,1,(MethodInfo *)in_stack_ffffffffffffffa0)
    ;
    pUVar12 = *(UnityEngine_GameObject_o **)&(pTVar26->fields).m_FaceInfo.fields.m_AscentLine;
    unaff_R12 = *(PatreonEffects_NameEffectController_o **)&(pTVar26->fields).m_FaceInfo.fields.m_MeanLine;
    pSVar14 = pSVar27;
    pSVar7 = UI_EditProfileProfilePanel__GetGuildPreviewText
                       (__this_08,(Settings_ProfileSettings_o *)pSVar27,method_00);
    if ((char)bVar6 == '\0') {
      bVar30 = false;
label_043fddf7:
      UI_EditProfileProfilePanel__RefreshSinglePreview
                (__this_08,pUVar12,unaff_R12,pSVar7,(uint)bVar30,
                 (Settings_StringSetting_o *)pSVar27->m_Items[0x13],
                 (Settings_ColorSetting_o *)pSVar27->m_Items[0x14],
                 (Settings_ColorSetting_o *)pSVar27->m_Items[0x15],
                 (Settings_ColorSetting_o *)pSVar27->m_Items[0x16],
                 (Settings_ColorSetting_o *)pSVar27->m_Items[0x17],0,(MethodInfo *)in_stack_ffffffffffffffa0);
      if (g_data_057ae577 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ae577 = '\x01';
      }
      __this_09 = *(UI_CategoryPanel_o **)&(pTVar26->fields).m_FaceInfo.fields.m_DescentLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_09,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar6);
      }
      lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x40), lVar16 != 0)) {
        plVar24 = *(long **)&(pTVar26->fields).m_FaceInfo.fields.m_DescentLine;
        __this_09 = *(UI_CategoryPanel_o **)(lVar16 + 0x18);
        if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                           ((System_String_o *)__this_09,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
        if (plVar24 != (long *)0x0) {
          lVar16 = *plVar24;
          pSVar7 = (System_String_o *)
                   (**(code **)(lVar16 + 0x558))
                             (plVar24,pSVar7,*(undefined8 *)(lVar16 + 0x560),lVar16,*(code **)(lVar16 + 0x558)
                             );
          return pSVar7;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      UI_CategoryPanel___ctor(__this_09,(MethodInfo *)0x0);
      return extraout_RAX_02;
    }
    in_RCX = (UI_EditProfileProfilePanel_o *)0x0;
    if ((Settings_BoolSetting_o *)pSVar27->m_Items[0x12] != (Settings_BoolSetting_o *)0x0) {
      bVar30 = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar27->m_Items[0x12])->fields).DefaultValue + 1)
               != '\0';
      goto label_043fddf7;
    }
  }
label_043fde43:
  il2cpp_runtime_helper_022b2c90();
  pSStack_b8 = pSVar27;
  pPStack_b0 = unaff_R12;
  if (g_data_057ae56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Gradient Colors");
    il2cpp_runtime_helper_023445d0(&"Reset Colors");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Effect");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae56e = '\x01';
  }
  __this_01 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  parent_00 = (MethodInfo_255A0F0 *)0x0;
  pSVar27 = __this_01;
  UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor
            ((UI_EditProfileProfilePanel___c__DisplayClass22_0_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (System_Type_array *)0x0) {
    ((Settings_ProfileSettings_Fields *)&__this_01->bounds)->Settings =
         (System_Collections_Specialized_OrderedDictionary_o *)__this_08;
    il2cpp_runtime_helper_022b4080((Settings_ProfileSettings_Fields *)&__this_01->bounds);
    __this_01->max_length = (il2cpp_array_size_t)in_R9;
    il2cpp_runtime_helper_022b4080(&__this_01->max_length,in_R9);
    ppSStack_c0 = (Settings_StringSetting_o **)__this_01->m_Items;
    __this_01->m_Items[0] = (System_Type_o *)in_stack_ffffffffffffff80;
    il2cpp_runtime_helper_022b4080(ppSStack_c0,in_stack_ffffffffffffff80);
    __this_01->m_Items[1] = (System_Type_o *)in_stack_ffffffffffffff88;
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 1,in_stack_ffffffffffffff88);
    __this_01->m_Items[2] = (System_Type_o *)in_stack_ffffffffffffff90;
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 2,in_stack_ffffffffffffff90);
    __this_01->m_Items[3] = (System_Type_o *)CONCAT44(uStack_64,in_stack_ffffffffffffff98);
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 3,
                       (Settings_NameSetting_o *)CONCAT44(uStack_64,in_stack_ffffffffffffff98));
    *(byte *)(__this_01->m_Items + 4) = in_R8B;
    in_R9 = (long *)__this_01->max_length;
    if (*(int *)(TypeInfo_EditProfileProfilePanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    options = (System_String_array *)**(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8);
    SStack_c8.hasValue = 0;
    SStack_c8.value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)&SStack_c8,260.0,MethodInfo_Nullable_1_Single);
    pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    in_RCX = "Effect";
    parent_00 = style;
    pSVar27 = pSVar14;
    pSVar10 = (System_Type_array *)
              UI_ElementFactory__CreateDropdownSetting
                        ((UnityEngine_Transform_o *)pSVar14,(UI_ElementStyle_o *)style,
                         (Settings_BaseSetting_o *)in_R9,(System_String_o *)"Effect",options,"",
                         180.0,40.0,200.0,(System_Nullable_float__o)SStack_c8,pUVar9,(MethodInfo *)0x0);
    if (pSVar10 != (System_Type_array *)0x0) {
      parent_00 = MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme;
      pSVar27 = pSVar10;
      __this_10 = in_stack_ffffffffffffffa0;
      pSVar11 = (System_Type_array *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar10,MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme)
      ;
      if (pSVar11 != (System_Type_array *)0x0) {
        parent_00 = (MethodInfo_255A0F0 *)0x0;
        UI_DropdownSettingElement__FixScale((UI_DropdownSettingElement_o *)pSVar11,(MethodInfo *)0x0);
        pSVar27 = pSVar11;
      }
      in_R9 = (long *)in_stack_ffffffffffffffa0;
      if (in_stack_ffffffffffffffa0 != (System_Type_array *)0x0) {
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffffa0,
                   (UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
        in_RCX = (UI_EditProfileProfilePanel_o *)0x0;
        pUVar12 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pSVar14,(UI_ElementStyle_o *)style,"Gradient Colors",0,3,
                             (MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffffa0,pUVar12,(MethodInfo *)0x0);
        parent_00 = (MethodInfo_255A0F0 *)0x3;
        pSVar27 = pSVar14;
        pSVar10 = (System_Type_array *)
                  UI_ElementFactory__CreateHorizontalGroup
                            ((UnityEngine_Transform_o *)pSVar14,10.0,3,(MethodInfo *)0x0);
        if (pSVar10 != (System_Type_array *)0x0) {
          cVar1 = *(char *)(__this_01->m_Items + 4);
          parent_00 = (MethodInfo_255A0F0 *)0x0;
          in_R9 = (long *)UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
          pSVar21 = *ppSStack_c0;
          if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
          pSVar27 = TypeInfo_UIManager;
          if (lVar16 != 0) {
            pUVar3 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
            pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pSVar27 = (System_Type_array *)in_R9;
            if (cVar1 == '\0') {
              UnityEngine_Events_UnityAction___ctor();
              in_RCX = "A";
              parent_00 = style;
              pUVar12 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar21,(System_String_o *)"A",pUVar3,
                                   "",60.0,30.0,pUVar9,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pUVar13 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_08->fields)._guildColorA = pUVar13;
                in_RCX = __this_08;
                il2cpp_runtime_helper_022b4080(&(__this_08->fields)._guildColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar27 = pSVar10;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar16 != 0) {
                  pSVar21 = (Settings_StringSetting_o *)__this_01->m_Items[1];
                  pUVar3 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  in_RCX = "B";
                  parent_00 = style;
                  pSVar27 = (System_Type_array *)in_R9;
                  pUVar12 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar21,(System_String_o *)"B",
                                       pUVar3,"",60.0,30.0,pUVar9,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar13 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_08->fields)._guildColorB = pUVar13;
                    in_RCX = __this_08;
                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._guildColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar27 = pSVar10;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                    lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar16 != 0) {
                      pSVar2 = (Settings_NameSetting_o *)__this_01->m_Items[2];
                      pUVar3 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                      pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      in_RCX = "C";
                      parent_00 = style;
                      pSVar27 = (System_Type_array *)in_R9;
                      pUVar12 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar2,(System_String_o *)"C",
                                           pUVar3,"",60.0,30.0,pUVar9,(MethodInfo *)0x0);
                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar13 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_08->fields)._guildColorC = pUVar13;
                        in_RCX = __this_08;
                        il2cpp_runtime_helper_022b4080(&(__this_08->fields)._guildColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar27 = pSVar10;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                        lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar16 != 0) {
                          pSVar2 = (Settings_NameSetting_o *)__this_01->m_Items[3];
                          pUVar3 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                          pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          in_RCX = "D";
                          parent_00 = style;
                          pSVar27 = (System_Type_array *)in_R9;
                          pUVar12 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar2,
                                               (System_String_o *)"D",pUVar3,"",60.0,30.0,
                                               pUVar9,(MethodInfo *)0x0);
                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar13 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar28 = &(__this_08->fields)._guildColorD;
                            goto label_043fe805;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              UnityEngine_Events_UnityAction___ctor();
              in_RCX = "A";
              parent_00 = style;
              pUVar12 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar21,(System_String_o *)"A",pUVar3,
                                   "",60.0,30.0,pUVar9,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pUVar13 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_08->fields)._nameColorA = pUVar13;
                in_RCX = __this_08;
                il2cpp_runtime_helper_022b4080(&(__this_08->fields)._nameColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar27 = pSVar10;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar16 != 0) {
                  pSVar21 = (Settings_StringSetting_o *)__this_01->m_Items[1];
                  pUVar3 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  in_RCX = "B";
                  parent_00 = style;
                  pSVar27 = (System_Type_array *)in_R9;
                  pUVar12 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar21,(System_String_o *)"B",
                                       pUVar3,"",60.0,30.0,pUVar9,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar13 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_08->fields)._nameColorB = pUVar13;
                    in_RCX = __this_08;
                    il2cpp_runtime_helper_022b4080(&(__this_08->fields)._nameColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar27 = pSVar10;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                    lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar16 != 0) {
                      pSVar2 = (Settings_NameSetting_o *)__this_01->m_Items[2];
                      pUVar3 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                      pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      in_RCX = "C";
                      parent_00 = style;
                      pSVar27 = (System_Type_array *)in_R9;
                      pUVar12 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar2,(System_String_o *)"C",
                                           pUVar3,"",60.0,30.0,pUVar9,(MethodInfo *)0x0);
                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar13 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_08->fields)._nameColorC = pUVar13;
                        in_RCX = __this_08;
                        il2cpp_runtime_helper_022b4080(&(__this_08->fields)._nameColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar27 = pSVar10;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                        lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar16 != 0) {
                          pSVar2 = (Settings_NameSetting_o *)__this_01->m_Items[3];
                          pUVar3 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                          pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          in_RCX = "D";
                          parent_00 = style;
                          pSVar27 = (System_Type_array *)in_R9;
                          pUVar12 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar2,
                                               (System_String_o *)"D",pUVar3,"",60.0,30.0,
                                               pUVar9,(MethodInfo *)0x0);
                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar13 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar28 = &(__this_08->fields)._nameColorD;
label_043fe805:
                            *ppUVar28 = pUVar13;
                            in_RCX = __this_08;
                            pSVar11 = __this_10;
                            il2cpp_runtime_helper_022b4080(ppUVar28,pUVar13);
                            UI_CollapsibleToggleSection__AddChild
                                      ((UI_CollapsibleToggleSection_o *)__this_10,
                                       (UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                            pSVar14 = (System_Type_array *)
                                      UI_ElementFactory__CreateHorizontalGroup
                                                ((UnityEngine_Transform_o *)pSVar14,8.0,3,(MethodInfo *)0x0);
                            *(undefined1 *)(__this_01->m_Items + 10) = *(undefined1 *)(__this_01->m_Items + 4)
                            ;
                            __this_01->m_Items[5] = (System_Type_o *)__this_01->max_length;
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 5);
                            __this_01->m_Items[6] = (System_Type_o *)__this_01->m_Items[0];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 6);
                            __this_01->m_Items[7] = (System_Type_o *)__this_01->m_Items[1];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 7);
                            __this_01->m_Items[8] = (System_Type_o *)__this_01->m_Items[2];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 8);
                            parent_00 = (MethodInfo_255A0F0 *)__this_01->m_Items[3];
                            pSVar27 = (System_Type_array *)(__this_01->m_Items + 9);
                            __this_01->m_Items[9] = (System_Type_o *)parent_00;
                            il2cpp_runtime_helper_022b4080();
                            if (pSVar14 != (System_Type_array *)0x0) {
                              parent_00 = (MethodInfo_255A0F0 *)0x0;
                              pSVar27 = pSVar14;
                              pUVar15 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar14,(MethodInfo *)0x0);
                              if (style != (MethodInfo_255A0F0 *)0x0) {
                                fontSize = *(int32_t *)
                                            &((Settings_NameSetting_Fields *)&style->invoker_method)->
                                             DefaultValue;
                                pSVar7 = (System_String_o *)
                                         (*(__this_08->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this_08,
                                                    (__this_08->klass->vtable)._4_get_ThemePanel.method);
                                __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar7,(MethodInfo *)0x0)
                                ;
                                pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateTextButton
                                          (pUVar15,__this_02,"Reset Colors",0.0,pUVar9,(MethodInfo *)0x0);
                                UI_CollapsibleToggleSection__AddChild
                                          ((UI_CollapsibleToggleSection_o *)pSVar11,
                                           (UnityEngine_GameObject_o *)pSVar14,(MethodInfo *)0x0);
                                return extraout_RAX_00;
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae576 == '\0') {
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fe9c6;
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fe9d2;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fe9de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fe9ea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fe9f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea32;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea3e;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea4a;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea56;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea62;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateGuildRoleSpriteButton_b__0);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fea9e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feaaa;
    il2cpp_runtime_helper_023445d0(&"GuildRoleSpriteButton");
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feab6;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae576 = '\x01';
  }
  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feacc;
  __this_03 = (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fead9;
  UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(__this_03,(MethodInfo *)0x0);
  SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar27;
  pUVar12 = extraout_RDX;
  if (__this_03 == (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
label_043ff22f:
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff234;
    il2cpp_runtime_helper_022b2c90();
label_043ff234:
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff239;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    (__this_03->fields).settings = (Settings_ProfileSettings_o *)in_RCX;
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feaf9;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,in_RCX);
    (__this_03->fields).__4__this = (UI_EditProfileProfilePanel_o *)pSVar27;
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feb12;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).__4__this,pSVar27);
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feb26;
    in_R9 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar17 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feb50;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feb5a;
    pSVar14 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
    if ((System_Type_array *)in_R9 == (System_Type_array *)0x0) goto label_043ff22f;
    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar14;
    if (pSVar14 == (System_Type_array *)0x0) {
label_043feb83:
      if ((int)((System_Type_array *)in_R9)->max_length != 0) {
        ((System_Type_array *)in_R9)->m_Items[0] = (System_Type_o *)pSVar14;
        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feb9e;
        il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items);
        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43febaf;
        SVar17.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (SVar17.fields.value != 0) {
          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43febc6;
          lVar16 = il2cpp_runtime_helper_023051f0(SVar17.fields.value);
          if (lVar16 == 0) goto label_043ff239;
        }
        if (1 < (uint)((System_Type_array *)in_R9)->max_length) {
          ((System_Type_array *)in_R9)->m_Items[1] = (System_Type_o *)SVar17.fields.value;
          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43febea;
          il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 1);
          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43febfb;
          SVar17.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (SVar17.fields.value != 0) {
            pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fec12;
            lVar16 = il2cpp_runtime_helper_023051f0(SVar17.fields.value);
            if (lVar16 == 0) goto label_043ff239;
          }
          if (2 < (uint)((System_Type_array *)in_R9)->max_length) {
            ((System_Type_array *)in_R9)->m_Items[2] = (System_Type_o *)SVar17.fields.value;
            pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fec36;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 2);
            pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fec47;
            SVar17.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if (SVar17.fields.value != 0) {
              pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fec5e;
              lVar16 = il2cpp_runtime_helper_023051f0(SVar17.fields.value);
              if (lVar16 == 0) goto label_043ff239;
            }
            if (3 < (uint)((System_Type_array *)in_R9)->max_length) {
              ((System_Type_array *)in_R9)->m_Items[3] = (System_Type_o *)SVar17.fields.value;
              pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fec82;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 3);
              pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fec93;
              SVar17.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if (SVar17.fields.value != 0) {
                pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fecaa;
                lVar16 = il2cpp_runtime_helper_023051f0(SVar17.fields.value);
                if (lVar16 == 0) goto label_043ff239;
              }
              if (4 < (uint)((System_Type_array *)in_R9)->max_length) {
                ((System_Type_array *)in_R9)->m_Items[4] = (System_Type_o *)SVar17.fields.value;
                pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fecd6;
                il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 4,SVar17.fields.value);
                pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fece5;
                pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fecff;
                UnityEngine_GameObject___ctor_4dfc440
                          (pUVar12,"GuildRoleSpriteButton",(System_Type_array *)in_R9,(MethodInfo *)0x0);
                SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(intptr_t)&TypeInfo_GameObject;
                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                  in_R9 = &TypeInfo_GameObject;
                  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fed15;
                  pUVar15 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                  if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fed2d;
                    UnityEngine_Transform__SetParent_4e09e30
                              (pUVar15,(UnityEngine_Transform_o *)parent_00,0,(MethodInfo *)0x0);
                    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fed3f;
                    pSVar18 = (Settings_ProfileSettings_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pSVar18 != (Settings_ProfileSettings_o *)0x0) {
                      pSVar29 = pSVar18->klass;
                      uVar22._0_4_ = pSVar29[1]._2.static_fields_size;
                      uVar22._4_4_ = pSVar29[1]._2.thread_static_fields_size;
                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fed66;
                      (**(code **)&pSVar29[1]._2.element_size)(0x43820000,pSVar18,uVar22);
                      pSVar29 = pSVar18->klass;
                      uVar4._0_2_ = pSVar29[1]._2.interfaces_count;
                      uVar4._2_2_ = pSVar29[1]._2.interface_offsets_count;
                      uVar4._4_1_ = pSVar29[1]._2.typeHierarchyDepth;
                      uVar4._5_1_ = pSVar29[1]._2.genericRecursionDepth;
                      uVar4._6_1_ = pSVar29[1]._2.rank;
                      uVar4._7_1_ = pSVar29[1]._2.minimumAlignment;
                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fed81;
                      (**(code **)&pSVar29[1]._2.field_count)(0x42200000,pSVar18,uVar4);
                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fed93;
                      pIVar19 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Image_GetComponent_Image);
                      SVar17.fields.value =
                           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar18;
                      if (pIVar19 != (Il2CppObject *)0x0) {
                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fedbd;
                        (*pIVar19->klass->vtable[0x17].methodPtr)
                                  (0x3f800000,0x3f800000,pIVar19,pIVar19->klass->vtable[0x17].method);
                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fedcf;
                        __this_04 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Button_GetComponent_Button);
                        if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fedea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fee9a;
                          value.fields.m_NormalColor.fields.b = 1.0;
                          value.fields.m_NormalColor.fields.a = 0.08;
                          value.fields.m_NormalColor.fields.r = 1.0;
                          value.fields.m_NormalColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.r = 1.0;
                          value.fields.m_HighlightedColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.b = 1.0;
                          value.fields.m_HighlightedColor.fields.a = 0.16;
                          value.fields.m_PressedColor.fields.r = 1.0;
                          value.fields.m_PressedColor.fields.g = 1.0;
                          value.fields.m_PressedColor.fields.b = 1.0;
                          value.fields.m_PressedColor.fields.a = 0.24;
                          value.fields.m_SelectedColor.fields.r = 1.0;
                          value.fields.m_SelectedColor.fields.g = 1.0;
                          value.fields.m_SelectedColor.fields.b = 1.0;
                          value.fields.m_SelectedColor.fields.a = 0.16;
                          value.fields.m_DisabledColor.fields.r = 1.0;
                          value.fields.m_DisabledColor.fields.g = 1.0;
                          value.fields.m_DisabledColor.fields.b = 1.0;
                          value.fields.m_DisabledColor.fields.a = 0.05;
                          value.fields.m_ColorMultiplier = 1.0;
                          value.fields.m_FadeDuration = 0.1;
                          UnityEngine_UI_Selectable__set_colors(__this_04,value,(MethodInfo *)0x0);
                          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feeae;
                          SVar17.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feebc;
                          pSVar20 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                          if (SVar17.fields.value != 0) {
                            if (pSVar20 != (System_Type_o *)0x0) {
                              pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feedc;
                              lVar16 = il2cpp_runtime_helper_023051f0(pSVar20);
                              if (lVar16 == 0) goto label_043ff239;
                            }
                            if ((int)((System_Type_array *)SVar17.fields.value)->max_length != 0) {
                              ((System_Type_array *)SVar17.fields.value)->m_Items[0] = pSVar20;
                              pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feeff;
                              il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar17.fields.value)->m_Items);
                              pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fef10;
                              pSVar20 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar20 != (System_Type_o *)0x0) {
                                pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fef27;
                                lVar16 = il2cpp_runtime_helper_023051f0(pSVar20);
                                if (lVar16 == 0) goto label_043ff239;
                              }
                              if (1 < (uint)((System_Type_array *)SVar17.fields.value)->max_length) {
                                ((System_Type_array *)SVar17.fields.value)->m_Items[1] = pSVar20;
                                pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fef4a;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar17.fields.value)->m_Items + 1);
                                pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fef5b;
                                pSVar20 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                if (pSVar20 != (System_Type_o *)0x0) {
                                  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fef72;
                                  lVar16 = il2cpp_runtime_helper_023051f0(pSVar20);
                                  if (lVar16 == 0) goto label_043ff239;
                                }
                                if (2 < (uint)((System_Type_array *)SVar17.fields.value)->max_length) {
                                  ((System_Type_array *)SVar17.fields.value)->m_Items[2] = pSVar20;
                                  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fef98;
                                  il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar17.fields.value)->m_Items + 2,
                                                     pSVar20);
                                  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fefa0;
                                  __this_05 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fefba;
                                  UnityEngine_GameObject___ctor_4dfc440
                                            (__this_05,"Text",(System_Type_array *)SVar17.fields.value,
                                             (MethodInfo *)0x0);
                                  if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
                                    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fefcd;
                                    pUVar15 = UnityEngine_GameObject__get_transform
                                                        (__this_05,(MethodInfo *)0x0);
                                    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43fefda;
                                    parent = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                                    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                    if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feff2;
                                      UnityEngine_Transform__SetParent_4e09e30
                                                (pUVar15,parent,0,(MethodInfo *)0x0);
                                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff004;
                                      __this_06 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_05,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (g_data_057a694c == '\0') {
                                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff021;
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                        g_data_057a694c = '\x01';
                                      }
                                      SVar17.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      pUVar12 = extraout_RDX;
                                      if (__this_06 != (UnityEngine_RectTransform_o *)0x0) {
                                        in_R9 = &TypeInfo_Vector2;
                                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff050;
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_06,
                                                   (UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                   (MethodInfo *)0x0);
                                        if (g_data_057a9c86 == '\0') {
                                          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff065;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a9c86 = '\x01';
                                        }
                                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff085;
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_06,
                                                   (UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff097;
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_06,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff0a9;
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_06,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff0bb;
                                        pSVar21 = (Settings_StringSetting_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_05,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                        SVar17.fields.value =
                                             (System_RuntimeTypeHandle_Fields)(pSVar27->m_Items + 0xd);
                                        pSVar27->m_Items[0xd] = (System_Type_o *)pSVar21;
                                        pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff0d9;
                                        il2cpp_runtime_helper_022b4080(SVar17.fields.value);
                                        if ((TMPro_TMP_Text_o *)pSVar27->m_Items[0xd] !=
                                            (TMPro_TMP_Text_o *)0x0) {
                                          pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff0f5;
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pSVar27->m_Items[0xd],1,
                                                     (MethodInfo *)0x0);
                                          if ((extraout_RDX != (UnityEngine_GameObject_o *)0x0) &&
                                             ((TMPro_TMP_Text_o *)
                                              ((Settings_ProfileSettings_o *)SVar17.fields.value)->klass !=
                                              (TMPro_TMP_Text_o *)0x0)) {
                                            pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff11a;
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)
                                                       ((Settings_ProfileSettings_o *)SVar17.fields.value)->
                                                       klass,(float)(int)(extraout_RDX->fields).m_CachedPtr,
                                                       (MethodInfo *)0x0);
                                            if ((TMPro_TMP_Text_o *)
                                                ((Settings_ProfileSettings_o *)SVar17.fields.value)->klass !=
                                                (TMPro_TMP_Text_o *)0x0) {
                                              pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff132;
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)
                                                         ((Settings_ProfileSettings_o *)SVar17.fields.value)->
                                                         klass,1,(MethodInfo *)0x0);
                                              if ((TMPro_TMP_Text_o *)
                                                  ((Settings_ProfileSettings_o *)SVar17.fields.value)->klass
                                                  != (TMPro_TMP_Text_o *)0x0) {
                                                pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff14a;
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)
                                                           ((Settings_ProfileSettings_o *)SVar17.fields.value)
                                                           ->klass,0x1001,(MethodInfo *)0x0);
                                                pSVar29 = ((Settings_ProfileSettings_o *)SVar17.fields.value)
                                                          ->klass;
                                                if (pSVar29 != (Settings_ProfileSettings_c *)0x0) {
                                                  pvVar5 = (pSVar29->_1).image;
                                                  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff170;
                                                  (**(code **)((long)pvVar5 + 0x2a8))
                                                            (0x3f800000,0x3f800000,pSVar29,
                                                             *(undefined8 *)((long)pvVar5 + 0x2b0));
                                                  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff178;
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            ((UI_EditProfileProfilePanel_o *)pSVar29,
                                                             (TMPro_TextMeshProUGUI_o *)
                                                             ((Settings_ProfileSettings_o *)
                                                             SVar17.fields.value)->klass,method_01);
                                                  pSVar18 = (__this_03->fields).settings;
                                                  if ((pSVar18 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar21 = (pSVar18->fields).GuildRoleSprite,
                                                     pSVar21 != (Settings_StringSetting_o *)0x0)) {
                                                    pSVar29 = ((Settings_ProfileSettings_o *)
                                                              SVar17.fields.value)->klass;
                                                    pSVar7 = (pSVar21->fields)._value;
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff1b5;
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff1c1;
                                                    pSVar7 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar7,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                    if (pSVar29 != (Settings_ProfileSettings_c *)0x0) {
                                                      pvVar5 = (pSVar29->_1).image;
                                                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff1dc;
                                                      (**(code **)((long)pvVar5 + 0x558))
                                                                (pSVar29,pSVar7,
                                                                 *(undefined8 *)((long)pvVar5 + 0x560));
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_04->fields).m_CanvasGroupCache;
                                                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff1f2;
                                                      pUVar9 = (UnityEngine_Events_UnityAction_o *)
                                                               il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff20c;
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      SVar17.fields.value = (System_RuntimeTypeHandle_Fields)0
                                                      ;
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,pUVar9,(MethodInfo *)0x0);
                                                        return extraout_RAX_01;
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
                                  goto label_043ff22f;
                                }
                              }
                            }
                            goto label_043ff234;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_043ff22f;
              }
            }
          }
        }
      }
      goto label_043ff234;
    }
    pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43feb7a;
    lVar16 = il2cpp_runtime_helper_023051f0(pSVar14);
    if (lVar16 != 0) goto label_043feb83;
  }
label_043ff239:
  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff23e;
  uVar22 = il2cpp_runtime_helper_0231b270();
  lVar16 = 0;
  pUStackY_1f0 = (UnityEngine_GameObject_o *)0x43ff248;
  il2cpp_runtime_helper_022b2b10(uVar22);
  pSStackY_200 = (System_Type_array *)SVar17.fields.value;
  pSStackY_1f8 = (System_Type_array *)in_R9;
  pUStackY_1f0 = pUVar12;
  if (g_data_057ae57b == '\0') {
    lStackY_208 = 0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    lStackY_208 = 0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    lStackY_208 = 0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStackY_208 = 0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    lStackY_208 = 0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    lStackY_208 = 0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    lStackY_208 = 0x43ff3ac;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar23 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_208 = 0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_208 = 0x43ff2a6;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    lStackY_208 = 0x43ff2ba;
    pSVar7 = (System_String_o *)PhotonExtensions__GetCustomProperty(pPVar23,"display_name",(MethodInfo *)0x0);
    plVar24 = (long *)(System_String_o *)0x0;
    if ((pSVar7 != (System_String_o *)0x0) &&
       (plVar24 = (long *)(System_String_o *)0x0, (Il2CppClass *)pSVar7->klass == g_data_057b9c00)) {
      plVar24 = (long *)pSVar7;
    }
    lVar25 = 0;
    lStackY_208 = 0x43ff2e0;
    bVar6 = System_String__IsNullOrEmpty((System_String_o *)plVar24,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return (System_String_o *)plVar24;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_208 = 0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_208 = 0x43ff300;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar23 != (Photon_Realtime_Player_o *)0x0) {
      lVar25 = 0;
      lStackY_208 = 0x43ff314;
      bVar6 = System_String__IsNullOrEmpty
                        (*(System_String_o **)&(pPVar23->fields)._HasRejoined_k__BackingField,
                         (MethodInfo *)0x0);
      if ((char)bVar6 != '\0') goto label_043ff3b5;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        lStackY_208 = 0x43ff32d;
        il2cpp_runtime_helper_02337ed0();
      }
      lStackY_208 = 0x43ff334;
      pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar23 != (Photon_Realtime_Player_o *)0x0) {
        return *(System_String_o **)&(pPVar23->fields)._HasRejoined_k__BackingField;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    lStackY_208 = 0x43ff283;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar23 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    plVar24 = &TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      lStackY_208 = 0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_208 = 0x43ff3d4;
    pSVar7 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    lStackY_208 = 0x43ff3de;
    bVar6 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        lStackY_208 = 0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return pSVar7;
    }
    if ((lVar16 == 0) || (*(long *)(lVar16 + 0x30) == 0)) {
      return "N/A";
    }
    lVar25 = 0;
    lStackY_208 = 0x43ff3fb;
    bVar6 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(lVar16 + 0x30) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return "N/A";
    }
    if (*(long *)(lVar16 + 0x30) != 0) {
      return *(System_String_o **)(*(long *)(lVar16 + 0x30) + 0x18);
    }
  }
  lStackY_208 = 0x43ff443;
  uStackY_218 = il2cpp_runtime_helper_022b2c90();
  pSStackY_210 = (System_String_o *)plVar24;
  lStackY_208 = lVar16;
  if (g_data_057ae57a == '\0') {
    pcStackY_220 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStackY_220 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStackY_220 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStackY_220 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStackY_220 = (code *)0x43ff4aa;
  pSVar7 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStackY_220 = (code *)0x43ff4b4;
  bVar6 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStackY_220 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return pSVar7;
  }
  if ((lVar25 == 0) || (*(long *)(lVar25 + 0x68) == 0)) {
    return "N/A";
  }
  pcStackY_220 = (code *)0x43ff4d1;
  bVar6 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(lVar25 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return "N/A";
  }
  if (*(long *)(lVar25 + 0x68) != 0) {
    return *(System_String_o **)(*(long *)(lVar25 + 0x68) + 0x18);
  }
  pcStackY_220 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
  il2cpp_runtime_helper_022b2c90();
  pcStackY_220 = (code *)&TypeInfo_AccountManager;
  if (g_data_057ae57c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae57c = '\x01';
  }
  pSStackY_228 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar23 != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    tierLabel = &pSStackY_228;
    bVar6 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar23,tierLabel,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto label_043ff5d0;
  }
  tierLabel = &pSStackY_228;
  bVar6 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    tierLabel = (System_String_o **)&"None";
  }
label_043ff5d0:
  return *tierLabel;
}


// UI.EditProfileProfilePanel$$ApplyChatFont
// il2cpp: void UI_EditProfileProfilePanel__ApplyChatFont (UI_EditProfileProfilePanel_o* __this, TMPro_TextMeshProUGUI_o* tmp, const MethodInfo* method);
// 0x43fdbc0

void UI_EditProfileProfilePanel__ApplyChatFont
               (UI_EditProfileProfilePanel_o *__this,TMPro_TextMeshProUGUI_o *tmp,MethodInfo *method)

{
  char cVar1;
  int32_t fontSize;
  System_String_array *options;
  UI_ColorPickPopup_o *pUVar2;
  Settings_NameSetting_o *pSVar3;
  undefined8 uVar4;
  void *pvVar5;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar6;
  TMPro_TMP_FontAsset_o *pTVar7;
  System_String_o *pSVar8;
  System_Type_array *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar9;
  System_Type_array *pSVar10;
  System_Type_array *pSVar11;
  UnityEngine_GameObject_o *pUVar12;
  UI_ColorSettingElement_o *pUVar13;
  System_Type_array *pSVar14;
  UnityEngine_Transform_o *pUVar15;
  UI_ElementStyle_o *__this_02;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this_03;
  long lVar16;
  System_RuntimeTypeHandle_o SVar17;
  Settings_ProfileSettings_o *pSVar18;
  Il2CppObject *pIVar19;
  UnityEngine_UI_Selectable_o *__this_04;
  System_Type_o *pSVar20;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_06;
  Settings_StringSetting_o *pSVar21;
  undefined8 uVar22;
  Photon_Realtime_Player_o *pPVar23;
  UI_EditProfileProfilePanel_o *in_RCX;
  MethodInfo *method_00;
  MethodInfo_255A0F0 *style;
  UnityEngine_GameObject_o *extraout_RDX;
  MethodInfo *method_01;
  long *plVar24;
  MethodInfo_255A0F0 *parent_00;
  long lVar25;
  TMPro_TMP_FontAsset_o *pTVar26;
  UI_EditProfileProfilePanel_o *__this_07;
  System_Type_array *pSVar27;
  UI_ColorSettingElement_o **ppUVar28;
  Settings_ProfileSettings_c *pSVar29;
  UI_CategoryPanel_o *__this_08;
  byte in_R8B;
  long *in_R9;
  PatreonEffects_NameEffectController_o *unaff_R12;
  bool bVar30;
  System_String_o *pSStackY_210;
  code *pcStackY_208;
  undefined8 uStackY_200;
  System_String_o *pSStackY_1f8;
  long lStackY_1f0;
  System_Type_array *pSStackY_1e8;
  System_Type_array *pSStackY_1e0;
  UnityEngine_GameObject_o *pUStackY_1d8;
  System_Nullable_float__Fields SStack_b0;
  Settings_StringSetting_o **ppSStack_a8;
  System_Type_array *pSStack_a0;
  PatreonEffects_NameEffectController_o *pPStack_98;
  Settings_StringSetting_o *in_stack_ffffffffffffff98;
  Settings_StringSetting_o *in_stack_ffffffffffffffa0;
  Settings_NameSetting_o *in_stack_ffffffffffffffa8;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 uStack_4c;
  System_Type_array *in_stack_ffffffffffffffb8;
  System_Type_array *__this_09;
  
  if (g_data_057ae579 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae579 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pTVar7 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = (System_Type_array *)0x0;
  pTVar26 = pTVar7;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_043fdc8f:
    pTVar7 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = (System_Type_array *)0x0;
    pTVar26 = pTVar7;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_spriteAsset
                ((TMPro_TMP_Text_o *)tmp,(TMPro_TMP_SpriteAsset_o *)pTVar7,(MethodInfo *)0x0);
      return;
    }
  }
  else if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)tmp,pTVar7,(MethodInfo *)0x0);
    goto label_043fdc8f;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae572 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae572 = '\x01';
  }
  pSVar27 = *(System_Type_array **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  __this_07 = (UI_EditProfileProfilePanel_o *)0x0;
  bVar6 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if ((pSVar27 != (System_Type_array *)0x0) &&
     ((Settings_NameSetting_o *)pSVar27->m_Items[2] != (Settings_NameSetting_o *)0x0)) {
    pSVar14 = *(System_Type_array **)&(pTVar26->fields).m_FaceInfo.fields.m_SuperscriptSize;
    in_RCX = (UI_EditProfileProfilePanel_o *)(((Settings_NameSetting_o *)pSVar27->m_Items[2])->fields)._value;
    if ((char)bVar6 == '\0') {
      in_R8B = false;
    }
    else {
      if ((Settings_BoolSetting_o *)pSVar27->m_Items[0xc] == (Settings_BoolSetting_o *)0x0) goto label_043fde43;
      in_R8B = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar27->m_Items[0xc])->fields).DefaultValue + 1)
               != '\0';
    }
    in_stack_ffffffffffffffa0 = (Settings_StringSetting_o *)pSVar27->m_Items[0x10];
    in_stack_ffffffffffffffa8 = (Settings_NameSetting_o *)pSVar27->m_Items[0x11];
    in_stack_ffffffffffffff98 = (Settings_StringSetting_o *)pSVar27->m_Items[0xf];
    in_R9 = (long *)pSVar27->m_Items[0xd];
    in_stack_ffffffffffffffb0 = 1;
    UI_EditProfileProfilePanel__RefreshSinglePreview
              (__this_07,(UnityEngine_GameObject_o *)pSVar14,
               *(PatreonEffects_NameEffectController_o **)&(pTVar26->fields).m_FaceInfo.fields.m_SubscriptSize
               ,(System_String_o *)in_RCX,(uint)in_R8B,(Settings_StringSetting_o *)in_R9,
               (Settings_ColorSetting_o *)pSVar27->m_Items[0xe],
               (Settings_ColorSetting_o *)in_stack_ffffffffffffff98,
               (Settings_ColorSetting_o *)in_stack_ffffffffffffffa0,
               (Settings_ColorSetting_o *)in_stack_ffffffffffffffa8,1,(MethodInfo *)in_stack_ffffffffffffffb8)
    ;
    pUVar12 = *(UnityEngine_GameObject_o **)&(pTVar26->fields).m_FaceInfo.fields.m_AscentLine;
    unaff_R12 = *(PatreonEffects_NameEffectController_o **)&(pTVar26->fields).m_FaceInfo.fields.m_MeanLine;
    pSVar14 = pSVar27;
    pSVar8 = UI_EditProfileProfilePanel__GetGuildPreviewText
                       (__this_07,(Settings_ProfileSettings_o *)pSVar27,method_00);
    if ((char)bVar6 == '\0') {
      bVar30 = false;
label_043fddf7:
      UI_EditProfileProfilePanel__RefreshSinglePreview
                (__this_07,pUVar12,unaff_R12,pSVar8,(uint)bVar30,
                 (Settings_StringSetting_o *)pSVar27->m_Items[0x13],
                 (Settings_ColorSetting_o *)pSVar27->m_Items[0x14],
                 (Settings_ColorSetting_o *)pSVar27->m_Items[0x15],
                 (Settings_ColorSetting_o *)pSVar27->m_Items[0x16],
                 (Settings_ColorSetting_o *)pSVar27->m_Items[0x17],0,(MethodInfo *)in_stack_ffffffffffffffb8);
      if (g_data_057ae577 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ae577 = '\x01';
      }
      __this_08 = *(UI_CategoryPanel_o **)&(pTVar26->fields).m_FaceInfo.fields.m_DescentLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_08,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x40), lVar16 != 0)) {
        plVar24 = *(long **)&(pTVar26->fields).m_FaceInfo.fields.m_DescentLine;
        __this_08 = *(UI_CategoryPanel_o **)(lVar16 + 0x18);
        if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                           ((System_String_o *)__this_08,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
        if (plVar24 != (long *)0x0) {
          lVar16 = *plVar24;
          (**(code **)(lVar16 + 0x558))
                    (plVar24,pSVar8,*(undefined8 *)(lVar16 + 0x560),lVar16,*(code **)(lVar16 + 0x558));
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      UI_CategoryPanel___ctor(__this_08,(MethodInfo *)0x0);
      return;
    }
    in_RCX = (UI_EditProfileProfilePanel_o *)0x0;
    if ((Settings_BoolSetting_o *)pSVar27->m_Items[0x12] != (Settings_BoolSetting_o *)0x0) {
      bVar30 = *(char *)((long)&(((Settings_BoolSetting_o *)pSVar27->m_Items[0x12])->fields).DefaultValue + 1)
               != '\0';
      goto label_043fddf7;
    }
  }
label_043fde43:
  il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = pSVar27;
  pPStack_98 = unaff_R12;
  if (g_data_057ae56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateEffectChildren_b__9);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Gradient Colors");
    il2cpp_runtime_helper_023445d0(&"Reset Colors");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Effect");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae56e = '\x01';
  }
  __this_01 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  parent_00 = (MethodInfo_255A0F0 *)0x0;
  pSVar27 = __this_01;
  UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor
            ((UI_EditProfileProfilePanel___c__DisplayClass22_0_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (System_Type_array *)0x0) {
    ((Settings_ProfileSettings_Fields *)&__this_01->bounds)->Settings =
         (System_Collections_Specialized_OrderedDictionary_o *)__this_07;
    il2cpp_runtime_helper_022b4080((Settings_ProfileSettings_Fields *)&__this_01->bounds);
    __this_01->max_length = (il2cpp_array_size_t)in_R9;
    il2cpp_runtime_helper_022b4080(&__this_01->max_length,in_R9);
    ppSStack_a8 = (Settings_StringSetting_o **)__this_01->m_Items;
    __this_01->m_Items[0] = (System_Type_o *)in_stack_ffffffffffffff98;
    il2cpp_runtime_helper_022b4080(ppSStack_a8,in_stack_ffffffffffffff98);
    __this_01->m_Items[1] = (System_Type_o *)in_stack_ffffffffffffffa0;
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 1,in_stack_ffffffffffffffa0);
    __this_01->m_Items[2] = (System_Type_o *)in_stack_ffffffffffffffa8;
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 2,in_stack_ffffffffffffffa8);
    __this_01->m_Items[3] = (System_Type_o *)CONCAT44(uStack_4c,in_stack_ffffffffffffffb0);
    il2cpp_runtime_helper_022b4080(__this_01->m_Items + 3,
                       (Settings_NameSetting_o *)CONCAT44(uStack_4c,in_stack_ffffffffffffffb0));
    *(byte *)(__this_01->m_Items + 4) = in_R8B;
    in_R9 = (long *)__this_01->max_length;
    if (*(int *)(TypeInfo_EditProfileProfilePanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    options = (System_String_array *)**(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8);
    SStack_b0.hasValue = 0;
    SStack_b0.value = 0.0;
    System_Nullable_float____ctor((System_Nullable_float__o)&SStack_b0,260.0,MethodInfo_Nullable_1_Single);
    pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    in_RCX = "Effect";
    parent_00 = style;
    pSVar27 = pSVar14;
    pSVar10 = (System_Type_array *)
              UI_ElementFactory__CreateDropdownSetting
                        ((UnityEngine_Transform_o *)pSVar14,(UI_ElementStyle_o *)style,
                         (Settings_BaseSetting_o *)in_R9,(System_String_o *)"Effect",options,"",
                         180.0,40.0,200.0,(System_Nullable_float__o)SStack_b0,pUVar9,(MethodInfo *)0x0);
    if (pSVar10 != (System_Type_array *)0x0) {
      parent_00 = MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme;
      pSVar27 = pSVar10;
      __this_09 = in_stack_ffffffffffffffb8;
      pSVar11 = (System_Type_array *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar10,MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme)
      ;
      if (pSVar11 != (System_Type_array *)0x0) {
        parent_00 = (MethodInfo_255A0F0 *)0x0;
        UI_DropdownSettingElement__FixScale((UI_DropdownSettingElement_o *)pSVar11,(MethodInfo *)0x0);
        pSVar27 = pSVar11;
      }
      in_R9 = (long *)in_stack_ffffffffffffffb8;
      if (in_stack_ffffffffffffffb8 != (System_Type_array *)0x0) {
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffffb8,
                   (UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
        in_RCX = (UI_EditProfileProfilePanel_o *)0x0;
        pUVar12 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pSVar14,(UI_ElementStyle_o *)style,"Gradient Colors",0,3,
                             (MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild
                  ((UI_CollapsibleToggleSection_o *)in_stack_ffffffffffffffb8,pUVar12,(MethodInfo *)0x0);
        parent_00 = (MethodInfo_255A0F0 *)0x3;
        pSVar27 = pSVar14;
        pSVar10 = (System_Type_array *)
                  UI_ElementFactory__CreateHorizontalGroup
                            ((UnityEngine_Transform_o *)pSVar14,10.0,3,(MethodInfo *)0x0);
        if (pSVar10 != (System_Type_array *)0x0) {
          cVar1 = *(char *)(__this_01->m_Items + 4);
          parent_00 = (MethodInfo_255A0F0 *)0x0;
          in_R9 = (long *)UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
          pSVar21 = *ppSStack_a8;
          if (*(int *)((long)TypeInfo_UIManager->m_Items + 0xc4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
          pSVar27 = TypeInfo_UIManager;
          if (lVar16 != 0) {
            pUVar2 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
            pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pSVar27 = (System_Type_array *)in_R9;
            if (cVar1 == '\0') {
              UnityEngine_Events_UnityAction___ctor();
              in_RCX = "A";
              parent_00 = style;
              pUVar12 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar21,(System_String_o *)"A",pUVar2,
                                   "",60.0,30.0,pUVar9,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pUVar13 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_07->fields)._guildColorA = pUVar13;
                in_RCX = __this_07;
                il2cpp_runtime_helper_022b4080(&(__this_07->fields)._guildColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar27 = pSVar10;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar16 != 0) {
                  pSVar21 = (Settings_StringSetting_o *)__this_01->m_Items[1];
                  pUVar2 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  in_RCX = "B";
                  parent_00 = style;
                  pSVar27 = (System_Type_array *)in_R9;
                  pUVar12 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar21,(System_String_o *)"B",
                                       pUVar2,"",60.0,30.0,pUVar9,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar13 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_07->fields)._guildColorB = pUVar13;
                    in_RCX = __this_07;
                    il2cpp_runtime_helper_022b4080(&(__this_07->fields)._guildColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar27 = pSVar10;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                    lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar16 != 0) {
                      pSVar3 = (Settings_NameSetting_o *)__this_01->m_Items[2];
                      pUVar2 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                      pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      in_RCX = "C";
                      parent_00 = style;
                      pSVar27 = (System_Type_array *)in_R9;
                      pUVar12 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar3,(System_String_o *)"C",
                                           pUVar2,"",60.0,30.0,pUVar9,(MethodInfo *)0x0);
                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar13 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_07->fields)._guildColorC = pUVar13;
                        in_RCX = __this_07;
                        il2cpp_runtime_helper_022b4080(&(__this_07->fields)._guildColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar27 = pSVar10;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                        lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar16 != 0) {
                          pSVar3 = (Settings_NameSetting_o *)__this_01->m_Items[3];
                          pUVar2 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                          pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          in_RCX = "D";
                          parent_00 = style;
                          pSVar27 = (System_Type_array *)in_R9;
                          pUVar12 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar3,
                                               (System_String_o *)"D",pUVar2,"",60.0,30.0,
                                               pUVar9,(MethodInfo *)0x0);
                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar13 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar28 = &(__this_07->fields)._guildColorD;
                            goto label_043fe805;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              UnityEngine_Events_UnityAction___ctor();
              in_RCX = "A";
              parent_00 = style;
              pUVar12 = UI_ElementFactory__CreateColorSetting
                                  ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                   (Settings_BaseSetting_o *)pSVar21,(System_String_o *)"A",pUVar2,
                                   "",60.0,30.0,pUVar9,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pUVar13 = (UI_ColorSettingElement_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                (__this_07->fields)._nameColorA = pUVar13;
                in_RCX = __this_07;
                il2cpp_runtime_helper_022b4080(&(__this_07->fields)._nameColorA);
                parent_00 = (MethodInfo_255A0F0 *)0x0;
                pSVar27 = pSVar10;
                in_R9 = (long *)UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                if (lVar16 != 0) {
                  pSVar21 = (Settings_StringSetting_o *)__this_01->m_Items[1];
                  pUVar2 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  in_RCX = "B";
                  parent_00 = style;
                  pSVar27 = (System_Type_array *)in_R9;
                  pUVar12 = UI_ElementFactory__CreateColorSetting
                                      ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                       (Settings_BaseSetting_o *)pSVar21,(System_String_o *)"B",
                                       pUVar2,"",60.0,30.0,pUVar9,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar13 = (UI_ColorSettingElement_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                    (__this_07->fields)._nameColorB = pUVar13;
                    in_RCX = __this_07;
                    il2cpp_runtime_helper_022b4080(&(__this_07->fields)._nameColorB);
                    parent_00 = (MethodInfo_255A0F0 *)0x0;
                    pSVar27 = pSVar10;
                    in_R9 = (long *)UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                    lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                    if (lVar16 != 0) {
                      pSVar3 = (Settings_NameSetting_o *)__this_01->m_Items[2];
                      pUVar2 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                      pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      in_RCX = "C";
                      parent_00 = style;
                      pSVar27 = (System_Type_array *)in_R9;
                      pUVar12 = UI_ElementFactory__CreateColorSetting
                                          ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                           (Settings_BaseSetting_o *)pSVar3,(System_String_o *)"C",
                                           pUVar2,"",60.0,30.0,pUVar9,(MethodInfo *)0x0);
                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar13 = (UI_ColorSettingElement_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                        (__this_07->fields)._nameColorC = pUVar13;
                        in_RCX = __this_07;
                        il2cpp_runtime_helper_022b4080(&(__this_07->fields)._nameColorC);
                        parent_00 = (MethodInfo_255A0F0 *)0x0;
                        pSVar27 = pSVar10;
                        in_R9 = (long *)UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                        lVar16 = TypeInfo_UIManager->m_Items[0x13][1].fields._impl.fields.value;
                        if (lVar16 != 0) {
                          pSVar3 = (Settings_NameSetting_o *)__this_01->m_Items[3];
                          pUVar2 = *(UI_ColorPickPopup_o **)(lVar16 + 0x48);
                          pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          in_RCX = "D";
                          parent_00 = style;
                          pSVar27 = (System_Type_array *)in_R9;
                          pUVar12 = UI_ElementFactory__CreateColorSetting
                                              ((UnityEngine_Transform_o *)in_R9,(UI_ElementStyle_o *)style,
                                               (Settings_BaseSetting_o *)pSVar3,
                                               (System_String_o *)"D",pUVar2,"",60.0,30.0,
                                               pUVar9,(MethodInfo *)0x0);
                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar13 = (UI_ColorSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ColorSettingElement_GetComponent_ColorSettingElement);
                            ppUVar28 = &(__this_07->fields)._nameColorD;
label_043fe805:
                            *ppUVar28 = pUVar13;
                            in_RCX = __this_07;
                            pSVar11 = __this_09;
                            il2cpp_runtime_helper_022b4080(ppUVar28,pUVar13);
                            UI_CollapsibleToggleSection__AddChild
                                      ((UI_CollapsibleToggleSection_o *)__this_09,
                                       (UnityEngine_GameObject_o *)pSVar10,(MethodInfo *)0x0);
                            pSVar14 = (System_Type_array *)
                                      UI_ElementFactory__CreateHorizontalGroup
                                                ((UnityEngine_Transform_o *)pSVar14,8.0,3,(MethodInfo *)0x0);
                            *(undefined1 *)(__this_01->m_Items + 10) = *(undefined1 *)(__this_01->m_Items + 4)
                            ;
                            __this_01->m_Items[5] = (System_Type_o *)__this_01->max_length;
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 5);
                            __this_01->m_Items[6] = (System_Type_o *)__this_01->m_Items[0];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 6);
                            __this_01->m_Items[7] = (System_Type_o *)__this_01->m_Items[1];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 7);
                            __this_01->m_Items[8] = (System_Type_o *)__this_01->m_Items[2];
                            il2cpp_runtime_helper_022b4080(__this_01->m_Items + 8);
                            parent_00 = (MethodInfo_255A0F0 *)__this_01->m_Items[3];
                            pSVar27 = (System_Type_array *)(__this_01->m_Items + 9);
                            __this_01->m_Items[9] = (System_Type_o *)parent_00;
                            il2cpp_runtime_helper_022b4080();
                            if (pSVar14 != (System_Type_array *)0x0) {
                              parent_00 = (MethodInfo_255A0F0 *)0x0;
                              pSVar27 = pSVar14;
                              pUVar15 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar14,(MethodInfo *)0x0);
                              if (style != (MethodInfo_255A0F0 *)0x0) {
                                fontSize = *(int32_t *)
                                            &((Settings_NameSetting_Fields *)&style->invoker_method)->
                                             DefaultValue;
                                pSVar8 = (System_String_o *)
                                         (*(__this_07->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this_07,
                                                    (__this_07->klass->vtable)._4_get_ThemePanel.method);
                                __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar8,(MethodInfo *)0x0)
                                ;
                                pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateTextButton
                                          (pUVar15,__this_02,"Reset Colors",0.0,pUVar9,(MethodInfo *)0x0);
                                UI_CollapsibleToggleSection__AddChild
                                          ((UI_CollapsibleToggleSection_o *)pSVar11,
                                           (UnityEngine_GameObject_o *)pSVar14,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae576 == '\0') {
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fe9c6;
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fe9d2;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fe9de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fe9ea;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fe9f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea32;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea3e;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea4a;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea56;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea62;
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea6e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateGuildRoleSpriteButton_b__0);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fea9e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feaaa;
    il2cpp_runtime_helper_023445d0(&"GuildRoleSpriteButton");
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feab6;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae576 = '\x01';
  }
  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feacc;
  __this_03 = (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fead9;
  UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(__this_03,(MethodInfo *)0x0);
  SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar27;
  pUVar12 = extraout_RDX;
  if (__this_03 == (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
label_043ff22f:
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff234;
    il2cpp_runtime_helper_022b2c90();
label_043ff234:
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff239;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    (__this_03->fields).settings = (Settings_ProfileSettings_o *)in_RCX;
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feaf9;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,in_RCX);
    (__this_03->fields).__4__this = (UI_EditProfileProfilePanel_o *)pSVar27;
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feb12;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).__4__this,pSVar27);
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feb26;
    in_R9 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar17 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feb50;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feb5a;
    pSVar14 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
    if ((System_Type_array *)in_R9 == (System_Type_array *)0x0) goto label_043ff22f;
    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar14;
    if (pSVar14 == (System_Type_array *)0x0) {
label_043feb83:
      if ((int)((System_Type_array *)in_R9)->max_length != 0) {
        ((System_Type_array *)in_R9)->m_Items[0] = (System_Type_o *)pSVar14;
        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feb9e;
        il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items);
        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43febaf;
        SVar17.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (SVar17.fields.value != 0) {
          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43febc6;
          lVar16 = il2cpp_runtime_helper_023051f0(SVar17.fields.value);
          if (lVar16 == 0) goto label_043ff239;
        }
        if (1 < (uint)((System_Type_array *)in_R9)->max_length) {
          ((System_Type_array *)in_R9)->m_Items[1] = (System_Type_o *)SVar17.fields.value;
          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43febea;
          il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 1);
          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43febfb;
          SVar17.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (SVar17.fields.value != 0) {
            pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fec12;
            lVar16 = il2cpp_runtime_helper_023051f0(SVar17.fields.value);
            if (lVar16 == 0) goto label_043ff239;
          }
          if (2 < (uint)((System_Type_array *)in_R9)->max_length) {
            ((System_Type_array *)in_R9)->m_Items[2] = (System_Type_o *)SVar17.fields.value;
            pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fec36;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 2);
            pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fec47;
            SVar17.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if (SVar17.fields.value != 0) {
              pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fec5e;
              lVar16 = il2cpp_runtime_helper_023051f0(SVar17.fields.value);
              if (lVar16 == 0) goto label_043ff239;
            }
            if (3 < (uint)((System_Type_array *)in_R9)->max_length) {
              ((System_Type_array *)in_R9)->m_Items[3] = (System_Type_o *)SVar17.fields.value;
              pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fec82;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 3);
              pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fec93;
              SVar17.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if (SVar17.fields.value != 0) {
                pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fecaa;
                lVar16 = il2cpp_runtime_helper_023051f0(SVar17.fields.value);
                if (lVar16 == 0) goto label_043ff239;
              }
              if (4 < (uint)((System_Type_array *)in_R9)->max_length) {
                ((System_Type_array *)in_R9)->m_Items[4] = (System_Type_o *)SVar17.fields.value;
                pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fecd6;
                il2cpp_runtime_helper_022b4080(((System_Type_array *)in_R9)->m_Items + 4,SVar17.fields.value);
                pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fece5;
                pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fecff;
                UnityEngine_GameObject___ctor_4dfc440
                          (pUVar12,"GuildRoleSpriteButton",(System_Type_array *)in_R9,(MethodInfo *)0x0);
                SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(intptr_t)&TypeInfo_GameObject;
                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                  in_R9 = &TypeInfo_GameObject;
                  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fed15;
                  pUVar15 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                  if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fed2d;
                    UnityEngine_Transform__SetParent_4e09e30
                              (pUVar15,(UnityEngine_Transform_o *)parent_00,0,(MethodInfo *)0x0);
                    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fed3f;
                    pSVar18 = (Settings_ProfileSettings_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pSVar18 != (Settings_ProfileSettings_o *)0x0) {
                      pSVar29 = pSVar18->klass;
                      uVar22._0_4_ = pSVar29[1]._2.static_fields_size;
                      uVar22._4_4_ = pSVar29[1]._2.thread_static_fields_size;
                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fed66;
                      (**(code **)&pSVar29[1]._2.element_size)(0x43820000,pSVar18,uVar22);
                      pSVar29 = pSVar18->klass;
                      uVar4._0_2_ = pSVar29[1]._2.interfaces_count;
                      uVar4._2_2_ = pSVar29[1]._2.interface_offsets_count;
                      uVar4._4_1_ = pSVar29[1]._2.typeHierarchyDepth;
                      uVar4._5_1_ = pSVar29[1]._2.genericRecursionDepth;
                      uVar4._6_1_ = pSVar29[1]._2.rank;
                      uVar4._7_1_ = pSVar29[1]._2.minimumAlignment;
                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fed81;
                      (**(code **)&pSVar29[1]._2.field_count)(0x42200000,pSVar18,uVar4);
                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fed93;
                      pIVar19 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Image_GetComponent_Image);
                      SVar17.fields.value =
                           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar18;
                      if (pIVar19 != (Il2CppObject *)0x0) {
                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fedbd;
                        (*pIVar19->klass->vtable[0x17].methodPtr)
                                  (0x3f800000,0x3f800000,pIVar19,pIVar19->klass->vtable[0x17].method);
                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fedcf;
                        __this_04 = (UnityEngine_UI_Selectable_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Button_GetComponent_Button);
                        if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fedea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fee9a;
                          value.fields.m_NormalColor.fields.b = 1.0;
                          value.fields.m_NormalColor.fields.a = 0.08;
                          value.fields.m_NormalColor.fields.r = 1.0;
                          value.fields.m_NormalColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.r = 1.0;
                          value.fields.m_HighlightedColor.fields.g = 1.0;
                          value.fields.m_HighlightedColor.fields.b = 1.0;
                          value.fields.m_HighlightedColor.fields.a = 0.16;
                          value.fields.m_PressedColor.fields.r = 1.0;
                          value.fields.m_PressedColor.fields.g = 1.0;
                          value.fields.m_PressedColor.fields.b = 1.0;
                          value.fields.m_PressedColor.fields.a = 0.24;
                          value.fields.m_SelectedColor.fields.r = 1.0;
                          value.fields.m_SelectedColor.fields.g = 1.0;
                          value.fields.m_SelectedColor.fields.b = 1.0;
                          value.fields.m_SelectedColor.fields.a = 0.16;
                          value.fields.m_DisabledColor.fields.r = 1.0;
                          value.fields.m_DisabledColor.fields.g = 1.0;
                          value.fields.m_DisabledColor.fields.b = 1.0;
                          value.fields.m_DisabledColor.fields.a = 0.05;
                          value.fields.m_ColorMultiplier = 1.0;
                          value.fields.m_FadeDuration = 0.1;
                          UnityEngine_UI_Selectable__set_colors(__this_04,value,(MethodInfo *)0x0);
                          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feeae;
                          SVar17.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feebc;
                          pSVar20 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                          if (SVar17.fields.value != 0) {
                            if (pSVar20 != (System_Type_o *)0x0) {
                              pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feedc;
                              lVar16 = il2cpp_runtime_helper_023051f0(pSVar20);
                              if (lVar16 == 0) goto label_043ff239;
                            }
                            if ((int)((System_Type_array *)SVar17.fields.value)->max_length != 0) {
                              ((System_Type_array *)SVar17.fields.value)->m_Items[0] = pSVar20;
                              pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feeff;
                              il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar17.fields.value)->m_Items);
                              pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fef10;
                              pSVar20 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar20 != (System_Type_o *)0x0) {
                                pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fef27;
                                lVar16 = il2cpp_runtime_helper_023051f0(pSVar20);
                                if (lVar16 == 0) goto label_043ff239;
                              }
                              if (1 < (uint)((System_Type_array *)SVar17.fields.value)->max_length) {
                                ((System_Type_array *)SVar17.fields.value)->m_Items[1] = pSVar20;
                                pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fef4a;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar17.fields.value)->m_Items + 1);
                                pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fef5b;
                                pSVar20 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                if (pSVar20 != (System_Type_o *)0x0) {
                                  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fef72;
                                  lVar16 = il2cpp_runtime_helper_023051f0(pSVar20);
                                  if (lVar16 == 0) goto label_043ff239;
                                }
                                if (2 < (uint)((System_Type_array *)SVar17.fields.value)->max_length) {
                                  ((System_Type_array *)SVar17.fields.value)->m_Items[2] = pSVar20;
                                  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fef98;
                                  il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar17.fields.value)->m_Items + 2,
                                                     pSVar20);
                                  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fefa0;
                                  __this_05 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fefba;
                                  UnityEngine_GameObject___ctor_4dfc440
                                            (__this_05,"Text",(System_Type_array *)SVar17.fields.value,
                                             (MethodInfo *)0x0);
                                  if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
                                    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fefcd;
                                    pUVar15 = UnityEngine_GameObject__get_transform
                                                        (__this_05,(MethodInfo *)0x0);
                                    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43fefda;
                                    parent = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                                    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                    if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feff2;
                                      UnityEngine_Transform__SetParent_4e09e30
                                                (pUVar15,parent,0,(MethodInfo *)0x0);
                                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff004;
                                      __this_06 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_05,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (g_data_057a694c == '\0') {
                                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff021;
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                        g_data_057a694c = '\x01';
                                      }
                                      SVar17.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      pUVar12 = extraout_RDX;
                                      if (__this_06 != (UnityEngine_RectTransform_o *)0x0) {
                                        in_R9 = &TypeInfo_Vector2;
                                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff050;
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_06,
                                                   (UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                   (MethodInfo *)0x0);
                                        if (g_data_057a9c86 == '\0') {
                                          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff065;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a9c86 = '\x01';
                                        }
                                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff085;
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_06,
                                                   (UnityEngine_Vector2_o)
                                                   *(UnityEngine_Vector2_Fields *)
                                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff097;
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_06,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff0a9;
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_06,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff0bb;
                                        pSVar21 = (Settings_StringSetting_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (__this_05,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                        SVar17.fields.value =
                                             (System_RuntimeTypeHandle_Fields)(pSVar27->m_Items + 0xd);
                                        pSVar27->m_Items[0xd] = (System_Type_o *)pSVar21;
                                        pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff0d9;
                                        il2cpp_runtime_helper_022b4080(SVar17.fields.value);
                                        if ((TMPro_TMP_Text_o *)pSVar27->m_Items[0xd] !=
                                            (TMPro_TMP_Text_o *)0x0) {
                                          pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff0f5;
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pSVar27->m_Items[0xd],1,
                                                     (MethodInfo *)0x0);
                                          if ((extraout_RDX != (UnityEngine_GameObject_o *)0x0) &&
                                             ((TMPro_TMP_Text_o *)
                                              ((Settings_ProfileSettings_o *)SVar17.fields.value)->klass !=
                                              (TMPro_TMP_Text_o *)0x0)) {
                                            pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff11a;
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)
                                                       ((Settings_ProfileSettings_o *)SVar17.fields.value)->
                                                       klass,(float)(int)(extraout_RDX->fields).m_CachedPtr,
                                                       (MethodInfo *)0x0);
                                            if ((TMPro_TMP_Text_o *)
                                                ((Settings_ProfileSettings_o *)SVar17.fields.value)->klass !=
                                                (TMPro_TMP_Text_o *)0x0) {
                                              pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff132;
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)
                                                         ((Settings_ProfileSettings_o *)SVar17.fields.value)->
                                                         klass,1,(MethodInfo *)0x0);
                                              if ((TMPro_TMP_Text_o *)
                                                  ((Settings_ProfileSettings_o *)SVar17.fields.value)->klass
                                                  != (TMPro_TMP_Text_o *)0x0) {
                                                pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff14a;
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)
                                                           ((Settings_ProfileSettings_o *)SVar17.fields.value)
                                                           ->klass,0x1001,(MethodInfo *)0x0);
                                                pSVar29 = ((Settings_ProfileSettings_o *)SVar17.fields.value)
                                                          ->klass;
                                                if (pSVar29 != (Settings_ProfileSettings_c *)0x0) {
                                                  pvVar5 = (pSVar29->_1).image;
                                                  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff170;
                                                  (**(code **)((long)pvVar5 + 0x2a8))
                                                            (0x3f800000,0x3f800000,pSVar29,
                                                             *(undefined8 *)((long)pvVar5 + 0x2b0));
                                                  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff178;
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            ((UI_EditProfileProfilePanel_o *)pSVar29,
                                                             (TMPro_TextMeshProUGUI_o *)
                                                             ((Settings_ProfileSettings_o *)
                                                             SVar17.fields.value)->klass,method_01);
                                                  pSVar18 = (__this_03->fields).settings;
                                                  if ((pSVar18 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar21 = (pSVar18->fields).GuildRoleSprite,
                                                     pSVar21 != (Settings_StringSetting_o *)0x0)) {
                                                    pSVar29 = ((Settings_ProfileSettings_o *)
                                                              SVar17.fields.value)->klass;
                                                    pSVar8 = (pSVar21->fields)._value;
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff1b5;
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff1c1;
                                                    pSVar8 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar8,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                                    if (pSVar29 != (Settings_ProfileSettings_c *)0x0) {
                                                      pvVar5 = (pSVar29->_1).image;
                                                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff1dc;
                                                      (**(code **)((long)pvVar5 + 0x558))
                                                                (pSVar29,pSVar8,
                                                                 *(undefined8 *)((long)pvVar5 + 0x560));
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_04->fields).m_CanvasGroupCache;
                                                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff1f2;
                                                      pUVar9 = (UnityEngine_Events_UnityAction_o *)
                                                               il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                      pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff20c;
                                                      UnityEngine_Events_UnityAction___ctor();
                                                      SVar17.fields.value = (System_RuntimeTypeHandle_Fields)0
                                                      ;
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,pUVar9,(MethodInfo *)0x0);
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
                                  goto label_043ff22f;
                                }
                              }
                            }
                            goto label_043ff234;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_043ff22f;
              }
            }
          }
        }
      }
      goto label_043ff234;
    }
    pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43feb7a;
    lVar16 = il2cpp_runtime_helper_023051f0(pSVar14);
    if (lVar16 != 0) goto label_043feb83;
  }
label_043ff239:
  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff23e;
  uVar22 = il2cpp_runtime_helper_0231b270();
  lVar16 = 0;
  pUStackY_1d8 = (UnityEngine_GameObject_o *)0x43ff248;
  il2cpp_runtime_helper_022b2b10(uVar22);
  pSStackY_1e8 = (System_Type_array *)SVar17.fields.value;
  pSStackY_1e0 = (System_Type_array *)in_R9;
  pUStackY_1d8 = pUVar12;
  if (g_data_057ae57b == '\0') {
    lStackY_1f0 = 0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    lStackY_1f0 = 0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    lStackY_1f0 = 0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStackY_1f0 = 0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    lStackY_1f0 = 0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    lStackY_1f0 = 0x43ff283;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar23 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_1f0 = 0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_1f0 = 0x43ff2a6;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    lStackY_1f0 = 0x43ff2ba;
    pSVar8 = (System_String_o *)PhotonExtensions__GetCustomProperty(pPVar23,"display_name",(MethodInfo *)0x0);
    plVar24 = (long *)(System_String_o *)0x0;
    if ((pSVar8 != (System_String_o *)0x0) &&
       (plVar24 = (long *)(System_String_o *)0x0, (Il2CppClass *)pSVar8->klass == g_data_057b9c00)) {
      plVar24 = (long *)pSVar8;
    }
    lVar25 = 0;
    lStackY_1f0 = 0x43ff2e0;
    bVar6 = System_String__IsNullOrEmpty((System_String_o *)plVar24,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_1f0 = 0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_1f0 = 0x43ff300;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar23 == (Photon_Realtime_Player_o *)0x0) goto label_043ff43e;
    lVar25 = 0;
    lStackY_1f0 = 0x43ff314;
    bVar6 = System_String__IsNullOrEmpty
                      (*(System_String_o **)&(pPVar23->fields)._HasRejoined_k__BackingField,(MethodInfo *)0x0)
    ;
    if ((char)bVar6 != '\0') goto label_043ff3b5;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      lStackY_1f0 = 0x43ff32d;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_1f0 = 0x43ff334;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    lStackY_1f0 = 0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    lStackY_1f0 = 0x43ff3ac;
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar23 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    plVar24 = &TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      lStackY_1f0 = 0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    lStackY_1f0 = 0x43ff3d4;
    pSVar8 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    lStackY_1f0 = 0x43ff3de;
    bVar6 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        lStackY_1f0 = 0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return;
    }
    if (lVar16 == 0) {
      return;
    }
    if (*(long *)(lVar16 + 0x30) == 0) {
      return;
    }
    lVar25 = 0;
    lStackY_1f0 = 0x43ff3fb;
    bVar6 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(lVar16 + 0x30) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    pPVar23 = *(Photon_Realtime_Player_o **)(lVar16 + 0x30);
  }
  if (pPVar23 != (Photon_Realtime_Player_o *)0x0) {
    return;
  }
label_043ff43e:
  lStackY_1f0 = 0x43ff443;
  uStackY_200 = il2cpp_runtime_helper_022b2c90();
  pSStackY_1f8 = (System_String_o *)plVar24;
  lStackY_1f0 = lVar16;
  if (g_data_057ae57a == '\0') {
    pcStackY_208 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStackY_208 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStackY_208 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStackY_208 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStackY_208 = (code *)0x43ff4aa;
  pSVar8 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStackY_208 = (code *)0x43ff4b4;
  bVar6 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStackY_208 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return;
  }
  if ((lVar25 == 0) || (*(long *)(lVar25 + 0x68) == 0)) {
    return;
  }
  pcStackY_208 = (code *)0x43ff4d1;
  bVar6 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(lVar25 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (*(long *)(lVar25 + 0x68) == 0) {
    pcStackY_208 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
    il2cpp_runtime_helper_022b2c90();
    pcStackY_208 = (code *)&TypeInfo_AccountManager;
    if (g_data_057ae57c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae57c = '\x01';
    }
    pSStackY_210 = (System_String_o *)0x0;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar23 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar6 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar23,&pSStackY_210,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
    }
    PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStackY_210,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.EditProfileProfilePanel$$GetDisplayUserId
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayUserId (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x43ff450

System_String_o *
UI_EditProfileProfilePanel__GetDisplayUserId
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_o **tierLabel;
  System_String_o *pSStack_28;
  code *pcStack_20;
  
  if (g_data_057ae57a == '\0') {
    pcStack_20 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStack_20 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStack_20 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStack_20 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_20 = (code *)0x43ff4aa;
  pSVar3 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStack_20 = (code *)0x43ff4b4;
  bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStack_20 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return pSVar3;
  }
  if ((settings == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar1 = (settings->fields).ID, pSVar1 == (Settings_StringSetting_o *)0x0)) {
    return "N/A";
  }
  pcStack_20 = (code *)0x43ff4d1;
  bVar2 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return "N/A";
  }
  pSVar1 = (settings->fields).ID;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    return (pSVar1->fields)._value;
  }
  pcStack_20 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
  il2cpp_runtime_helper_022b2c90();
  pcStack_20 = (code *)&TypeInfo_AccountManager;
  if (g_data_057ae57c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae57c = '\x01';
  }
  pSStack_28 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    tierLabel = &pSStack_28;
    bVar2 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar4,tierLabel,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') goto label_043ff5d0;
  }
  tierLabel = &pSStack_28;
  bVar2 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    tierLabel = (System_String_o **)&"None";
  }
label_043ff5d0:
  return *tierLabel;
}


// UI.EditProfileProfilePanel$$GetDisplayDisplayName
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayDisplayName (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x43ff250

System_String_o *
UI_EditProfileProfilePanel__GetDisplayDisplayName
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o **tierLabel;
  long lVar6;
  System_String_o *pSStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  System_String_o *pSStack_28;
  Settings_ProfileSettings_o *pSStack_20;
  
  if (g_data_057ae57b == '\0') {
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff352;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff35e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff36a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff376;
    il2cpp_runtime_helper_023445d0(&"N/A");
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff382;
    il2cpp_runtime_helper_023445d0(&"display_name");
    g_data_057ae57b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043ff27c;
label_043ff3a0:
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff3a5;
    il2cpp_runtime_helper_02337ed0();
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff3ac;
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_043ff3b5;
label_043ff28c:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      pSStack_20 = (Settings_ProfileSettings_o *)0x43ff29d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff2a6;
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff2ba;
    pSVar4 = (System_String_o *)PhotonExtensions__GetCustomProperty(pPVar3,"display_name",(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)0x0;
    if ((pSVar4 != (System_String_o *)0x0) &&
       (pSVar5 = (System_String_o *)0x0, (Il2CppClass *)pSVar4->klass == g_data_057b9c00)) {
      pSVar5 = pSVar4;
    }
    lVar6 = 0;
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff2e0;
    bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return pSVar5;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      pSStack_20 = (Settings_ProfileSettings_o *)0x43ff2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff300;
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      lVar6 = 0;
      pSStack_20 = (Settings_ProfileSettings_o *)0x43ff314;
      bVar2 = System_String__IsNullOrEmpty
                        (*(System_String_o **)&(pPVar3->fields)._HasRejoined_k__BackingField,(MethodInfo *)0x0
                        );
      if ((char)bVar2 != '\0') goto label_043ff3b5;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        pSStack_20 = (Settings_ProfileSettings_o *)0x43ff32d;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_20 = (Settings_ProfileSettings_o *)0x43ff334;
      pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
        return *(System_String_o **)&(pPVar3->fields)._HasRejoined_k__BackingField;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043ff3a0;
label_043ff27c:
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff283;
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) goto label_043ff28c;
label_043ff3b5:
    pSVar5 = (System_String_o *)&TypeInfo_AccountManager;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pSStack_20 = (Settings_ProfileSettings_o *)0x43ff3cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff3d4;
    pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff3de;
    bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        pSStack_20 = (Settings_ProfileSettings_o *)0x43ff423;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return pSVar5;
    }
    if ((settings == (Settings_ProfileSettings_o *)0x0) ||
       (pSVar1 = (settings->fields).Name, pSVar1 == (Settings_NameSetting_o *)0x0)) {
      return "N/A";
    }
    lVar6 = 0;
    pSStack_20 = (Settings_ProfileSettings_o *)0x43ff3fb;
    bVar2 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return "N/A";
    }
    pSVar1 = (settings->fields).Name;
    if (pSVar1 != (Settings_NameSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
  }
  pSStack_20 = (Settings_ProfileSettings_o *)0x43ff443;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pSStack_28 = pSVar5;
  pSStack_20 = settings;
  if (g_data_057ae57a == '\0') {
    pcStack_38 = (code *)0x43ff46c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pcStack_38 = (code *)0x43ff478;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pcStack_38 = (code *)0x43ff484;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae57a = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pcStack_38 = (code *)0x43ff4a3;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_38 = (code *)0x43ff4aa;
  pSVar5 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  pcStack_38 = (code *)0x43ff4b4;
  bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      pcStack_38 = (code *)0x43ff4f8;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    return pSVar5;
  }
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) {
    return "N/A";
  }
  pcStack_38 = (code *)0x43ff4d1;
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(lVar6 + 0x68) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return "N/A";
  }
  if (*(long *)(lVar6 + 0x68) != 0) {
    return *(System_String_o **)(*(long *)(lVar6 + 0x68) + 0x18);
  }
  pcStack_38 = UI_EditProfileProfilePanel__GetDisplayPatreonTier;
  il2cpp_runtime_helper_022b2c90();
  pcStack_38 = (code *)&TypeInfo_AccountManager;
  if (g_data_057ae57c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae57c = '\x01';
  }
  pSStack_40 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    tierLabel = &pSStack_40;
    bVar2 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar3,tierLabel,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') goto label_043ff5d0;
  }
  tierLabel = &pSStack_40;
  bVar2 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    tierLabel = (System_String_o **)&"None";
  }
label_043ff5d0:
  return *tierLabel;
}


// UI.EditProfileProfilePanel$$GetDisplayPatreonTier
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayPatreonTier (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x43ff520

System_String_o *
UI_EditProfileProfilePanel__GetDisplayPatreonTier(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o **tierLabel;
  System_String_o *local_10;
  
  if (g_data_057ae57c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae57c = '\x01';
  }
  local_10 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    tierLabel = &local_10;
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar2,tierLabel,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') goto label_043ff5d0;
  }
  tierLabel = &local_10;
  bVar1 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    tierLabel = (System_String_o **)&"None";
  }
label_043ff5d0:
  return *tierLabel;
}


// UI.EditProfileProfilePanel$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___ctor (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x43ffd70

void UI_EditProfileProfilePanel___ctor(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel$$.cctor
// il2cpp: void UI_EditProfileProfilePanel___cctor (const MethodInfo* method);
// 0x43ffd80

void UI_EditProfileProfilePanel___cctor(MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_String_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Object_array *pSVar1;
  
  if (g_data_057ae57d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeRef_NameEffectType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_cctor_b__38_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae57d = '\x01';
  }
  handle.fields.value = TypeRef_NameEffectType.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
  System_Func_object__bool____ctor();
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_IEnumerable_1_System_String_Where_String);
  pSVar1 = System_Linq_Enumerable__ToArray_object_(source_00,MethodInfo_String_ToArray_String);
  **(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8) = pSVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_EditProfileProfilePanel + 0xb8),pSVar1);
  return;
}


