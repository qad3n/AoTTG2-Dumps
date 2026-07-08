// Type: UI.CreateGameWeatherPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGameWeatherPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CreateGamePopup/CreateGameWeatherPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CreateGameWeatherPanel.<>c__DisplayClass2_0$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_0___ctor (UI_CreateGameWeatherPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x40747d0

void UI_CreateGameWeatherPanel_<>c__DisplayClass2_0___ctor
               (UI_CreateGameWeatherPanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_0$$<Setup>b__1
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_0___Setup_b__1 (UI_CreateGameWeatherPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x4076090

void UI_CreateGameWeatherPanel_<>c__DisplayClass2_0__<Setup>b__1
               (UI_CreateGameWeatherPanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick(__this_00,(__this->fields).button,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_1$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_1___ctor (UI_CreateGameWeatherPanel___c__DisplayClass2_1_o* __this, const MethodInfo* method);
// 0x4074b40

void UI_CreateGameWeatherPanel_<>c__DisplayClass2_1___ctor
               (UI_CreateGameWeatherPanel___c__DisplayClass2_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_1$$<Setup>b__2
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_1___Setup_b__2 (UI_CreateGameWeatherPanel___c__DisplayClass2_1_o* __this, const MethodInfo* method);
// 0x40760b0

void UI_CreateGameWeatherPanel_<>c__DisplayClass2_1__<Setup>b__2
               (UI_CreateGameWeatherPanel___c__DisplayClass2_1_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick(__this_00,(__this->fields).button,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_2$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_2___ctor (UI_CreateGameWeatherPanel___c__DisplayClass2_2_o* __this, const MethodInfo* method);
// 0x4074b50

void UI_CreateGameWeatherPanel_<>c__DisplayClass2_2___ctor
               (UI_CreateGameWeatherPanel___c__DisplayClass2_2_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass2_2$$<Setup>b__3
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass2_2___Setup_b__3 (UI_CreateGameWeatherPanel___c__DisplayClass2_2_o* __this, const MethodInfo* method);
// 0x40760d0

void UI_CreateGameWeatherPanel_<>c__DisplayClass2_2__<Setup>b__3
               (UI_CreateGameWeatherPanel___c__DisplayClass2_2_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  System_String_o *name;
  MethodInfo *method_00;
  
  if (DAT_057044ba == '\0') {
    il2cpp_init_method_metadata(&"Schedule");
    DAT_057044ba = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  name = System_String__Concat((__this->fields).button,"Schedule",(MethodInfo *)0x0);
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick(__this_00,name,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___ctor (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4075850

void UI_CreateGameWeatherPanel_<>c__DisplayClass4_0___ctor
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__0
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__0 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4076120

void UI_CreateGameWeatherPanel_<>c__DisplayClass4_0__<OnWeatherPanelButtonClick>b__0
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__1
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__1 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4076140

void UI_CreateGameWeatherPanel_<>c__DisplayClass4_0__<OnWeatherPanelButtonClick>b__1
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__5
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__5 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4076160

void UI_CreateGameWeatherPanel_<>c__DisplayClass4_0__<OnWeatherPanelButtonClick>b__5
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__2
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__2 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4076180

void UI_CreateGameWeatherPanel_<>c__DisplayClass4_0__<OnWeatherPanelButtonClick>b__2
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__3
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__3 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x40761a0

void UI_CreateGameWeatherPanel_<>c__DisplayClass4_0__<OnWeatherPanelButtonClick>b__3
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel.<>c__DisplayClass4_0$$<OnWeatherPanelButtonClick>b__4
// il2cpp: void UI_CreateGameWeatherPanel___c__DisplayClass4_0___OnWeatherPanelButtonClick_b__4 (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x40761c0

void UI_CreateGameWeatherPanel_<>c__DisplayClass4_0__<OnWeatherPanelButtonClick>b__4
               (UI_CreateGameWeatherPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGameWeatherPanel_o *)0x0) {
    UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameWeatherPanel__get_ScrollBar (UI_CreateGameWeatherPanel_o* __this, const MethodInfo* method);
// 0x4073740

bool_conflict
UI_CreateGameWeatherPanel__get_ScrollBar(UI_CreateGameWeatherPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameWeatherPanel$$Setup
// il2cpp: void UI_CreateGameWeatherPanel__Setup (UI_CreateGameWeatherPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4073750

void UI_CreateGameWeatherPanel__Setup
               (UI_CreateGameWeatherPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Settings_TypedSetting_int__o *__this_00;
  UI_ColorPickPopup_o *colorPickPopup;
  Settings_SetSettingsContainer_T__o *__this_01;
  Settings_IntSetting_o *setting;
  Il2CppClass *pIVar4;
  Settings_BoolSetting_o *pSVar5;
  UI_Vector3Popup_o *vector3Popup;
  Settings_BaseSetSetting_c *setting_00;
  System_String_o *pSVar6;
  UI_ElementStyle_o *style;
  UI_ElementStyle_o *style_00;
  System_String_array *pSVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  long lVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Transform_o *pUVar12;
  Settings_BaseSetSetting_o *pSVar13;
  void *pvVar14;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar15;
  MethodInfo *method_01;
  undefined8 *puVar16;
  MethodInfo *method_02;
  ulong uVar17;
  MethodInfo *pMVar18;
  MethodInfo *in_stack_ffffffffffffff88;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (DAT_057044b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass2_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass2_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass2_2);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_String___EnumToStringArray_WeatherSkybox);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSet);
    il2cpp_init_method_metadata(&"Wind direction");
    il2cpp_init_method_metadata(&"Flashlight");
    il2cpp_init_method_metadata(&"Loop schedule");
    il2cpp_init_method_metadata(&"*Weather presets cannot be modified. Create a new set to use custom settings.");
    il2cpp_init_method_metadata(&"Rain");
    il2cpp_init_method_metadata(&"Daylight");
    il2cpp_init_method_metadata(&"Fog color");
    il2cpp_init_method_metadata(&"Rain force");
    il2cpp_init_method_metadata(&"Daylight intensity");
    il2cpp_init_method_metadata(&"Wind");
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"Daylight direction");
    il2cpp_init_method_metadata(&"Ambient light");
    il2cpp_init_method_metadata(&"Snow force");
    il2cpp_init_method_metadata(&"Skybox color");
    il2cpp_init_method_metadata(&"Wind force");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"Weather set");
    il2cpp_init_method_metadata(&"Use schedule");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"* = preset and cannot be modified or deleted. Create a new set to use custom settings.");
    il2cpp_init_method_metadata(&"Follow a programmed weather schedule.");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"Snow");
    il2cpp_init_method_metadata(&"Fog density");
    il2cpp_init_method_metadata(&"Skybox");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Export");
    il2cpp_init_method_metadata(&"Thunder");
    DAT_057044b6 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 180.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar6;
  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar6);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar10 == 0) goto LAB_040747c5;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) ||
      (lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58), lVar3 == 0)) ||
     ((lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0 ||
      (__this_00 = *(Settings_TypedSetting_int__o **)(*(long *)(lVar2 + 0x20) + 0x20),
      __this_00 == (Settings_TypedSetting_int__o *)0x0)))) goto LAB_040747c5;
  colorPickPopup = *(UI_ColorPickPopup_o **)(lVar10 + 0x48);
  Settings_TypedSetting<int>__set_Value(__this_00,*(int32_t *)(lVar3 + 0x14),MethodInfo_Void_set_Value);
  pUVar12 = (__this->fields).DoublePanelLeft;
  pSVar6 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style_00,(MethodInfo *)0x0);
  (style_00->fields).FontSize = 0x18;
  (style_00->fields).TitleWidth = 140.0;
  (style_00->fields).Spacing = 20.0;
  (style_00->fields).ThemePanel = pSVar6;
  il2cpp_runtime_glue(&(style_00->fields).ThemePanel,pSVar6);
  __this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20);
  if (__this_01 == (Settings_SetSettingsContainer_T__o *)0x0) goto LAB_040747c5;
  setting = (__this_01->fields).SelectedSetIndex;
  pSVar7 = Settings_SetSettingsContainer<object>__GetSetNames(__this_01,MethodInfo_String___GetSetNames);
  pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pMVar18 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateDropdownSetting
            (pUVar12,style_00,(Settings_BaseSetting_o *)setting,"Weather set",pSVar7,"* = preset and cannot be modified or deleted. Create a new set to use custom settings.",
             205.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar8,in_stack_ffffffffffffff88);
  pUVar9 = UI_ElementFactory__CreateHorizontalGroup
                     ((__this->fields).DoublePanelLeft,10.0,0,method_00);
  lVar10 = il2cpp_glue_02274930(TypeInfo_string,4);
  if (lVar10 == 0) goto LAB_040747c5;
  if (*(int *)(lVar10 + 0x18) != 0) {
    puVar16 = (undefined8 *)(lVar10 + 0x20);
    *(undefined8 *)(lVar10 + 0x20) = "Create";
    il2cpp_runtime_glue(puVar16);
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_040747ac;
    *(undefined8 *)(lVar10 + 0x28) = "Delete";
    il2cpp_runtime_glue(lVar10 + 0x28);
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_040747ac;
    *(undefined8 *)(lVar10 + 0x30) = "Rename";
    il2cpp_runtime_glue(lVar10 + 0x30);
    if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_040747ac;
    *(undefined8 *)(lVar10 + 0x38) = "Copy";
    il2cpp_runtime_glue(lVar10 + 0x38);
    pMVar15 = extraout_RDX;
    if (0 < *(int *)(lVar10 + 0x18)) {
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
        pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_0);
        System_Object___ctor(pIVar11,(MethodInfo *)0x0);
        if (pIVar11 == (Il2CppObject *)0x0) goto LAB_040747c5;
        pIVar11[1].monitor = __this;
        il2cpp_runtime_glue(&pIVar11[1].monitor,__this);
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_040747ac;
        goto LAB_0407475b;
      }
      uVar17 = 0;
      do {
        pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_0);
        System_Object___ctor(pIVar11,(MethodInfo *)0x0);
        if (pIVar11 == (Il2CppObject *)0x0) goto LAB_040747c5;
        pIVar11[1].monitor = __this;
        il2cpp_runtime_glue(&pIVar11[1].monitor,__this);
        if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_040747ac;
        pIVar11[1].klass = *(Il2CppClass **)(lVar10 + 0x20 + uVar17 * 8);
        il2cpp_runtime_glue(pIVar11 + 1);
        pUVar12 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
        pIVar4 = pIVar11[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar4,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (pUVar12,style,pSVar6,0.0,0.0,pUVar8,(MethodInfo *)pSVar7);
        uVar17 = uVar17 + 1;
        pMVar15 = extraout_RDX_00;
      } while ((long)uVar17 < (long)*(int *)(lVar10 + 0x18));
    }
    pUVar9 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields).DoublePanelLeft,10.0,0,pMVar15);
    lVar10 = il2cpp_glue_02274930(TypeInfo_string,2);
    if (lVar10 == 0) goto LAB_040747c5;
    if (*(int *)(lVar10 + 0x18) != 0) {
      puVar16 = (undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar10 + 0x20) = "Import";
      il2cpp_runtime_glue(puVar16);
      if (1 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + 0x28) = "Export";
        il2cpp_runtime_glue(lVar10 + 0x28);
        if (0 < *(int *)(lVar10 + 0x18)) {
          if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
            pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_1);
            System_Object___ctor(pIVar11,(MethodInfo *)0x0);
            if (pIVar11 == (Il2CppObject *)0x0) goto LAB_040747c5;
            pIVar11[1].monitor = __this;
            il2cpp_runtime_glue(&pIVar11[1].monitor,__this);
            if (*(int *)(lVar10 + 0x18) != 0) {
LAB_0407475b:
              pIVar11[1].klass = (Il2CppClass *)*puVar16;
              il2cpp_runtime_glue(pIVar11 + 1);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            goto LAB_040747ac;
          }
          uVar17 = 0;
          do {
            pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_1);
            System_Object___ctor(pIVar11,(MethodInfo *)0x0);
            if (pIVar11 == (Il2CppObject *)0x0) goto LAB_040747c5;
            pIVar11[1].monitor = __this;
            il2cpp_runtime_glue(&pIVar11[1].monitor,__this);
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_040747ac;
            pIVar11[1].klass = *(Il2CppClass **)(lVar10 + 0x20 + uVar17 * 8);
            il2cpp_runtime_glue(pIVar11 + 1);
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
            pIVar4 = pIVar11[1].klass;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar6 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar4,(MethodInfo *)0x0);
            pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_ElementFactory__CreateDefaultButton
                      (pUVar12,style,pSVar6,0.0,0.0,pUVar8,(MethodInfo *)pSVar7);
            uVar17 = uVar17 + 1;
          } while ((long)uVar17 < (long)*(int *)(lVar10 + 0x18));
        }
        if (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
            (Settings_SetSettingsContainer_T__o *)0x0) {
          pSVar13 = Settings_SetSettingsContainer<object>__GetSelectedSet
                              (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
          if (pSVar13 != (Settings_BaseSetSetting_o *)0x0) {
            bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
            if (((pSVar13->klass->_2).naturalAligment < bVar1) ||
               ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pSVar13);
            }
          }
          UI_BasePanel__CreateHorizontalDivider
                    ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0
                    );
          pvVar14 = (void *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
          pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
          System_Object___ctor(pIVar11,(MethodInfo *)0x0);
          pIVar11[1].klass = (Il2CppClass *)0x4316000000000018;
          *(undefined4 *)&pIVar11[2].klass = 0x41a00000;
          pIVar11[1].monitor = pvVar14;
          il2cpp_runtime_glue(&pIVar11[1].monitor,pvVar14);
          if (pSVar13 != (Settings_BaseSetSetting_o *)0x0) {
            UI_ElementFactory__CreateToggleSetting
                      ((__this->fields).DoublePanelLeft,style,
                       (Settings_BaseSetting_o *)pSVar13[3].fields.TypedSettings,"Use schedule",
                       "Follow a programmed weather schedule.",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,pMVar18);
            method_02 = (MethodInfo *)0x0;
            pMVar15 = "";
            UI_ElementFactory__CreateToggleSetting
                      ((__this->fields).DoublePanelLeft,style,
                       (Settings_BaseSetting_o *)pSVar13[3].fields.Name,"Loop schedule",
                       (System_String_o *)"",30.0,30.0,
                       (UnityEngine_Events_UnityAction_o *)0x0,pMVar18);
            pUVar9 = UI_ElementFactory__CreateHorizontalGroup
                               ((__this->fields).DoublePanelLeft,10.0,0,method_01);
            lVar10 = il2cpp_glue_02274930(TypeInfo_string,2);
            if (lVar10 != 0) {
              if (*(int *)(lVar10 + 0x18) != 0) {
                *(undefined8 *)(lVar10 + 0x20) = "Import";
                il2cpp_runtime_glue((undefined8 *)(lVar10 + 0x20));
                if (1 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x28) = "Export";
                  il2cpp_runtime_glue(lVar10 + 0x28);
                  if (0 < *(int *)(lVar10 + 0x18)) {
                    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                      pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_2);
                      System_Object___ctor(pIVar11,(MethodInfo *)0x0);
                      if (pIVar11 != (Il2CppObject *)0x0) {
                        pIVar11[1].monitor = __this;
                        il2cpp_runtime_glue(&pIVar11[1].monitor,__this);
                        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_040747ac;
                        pIVar11[1].klass = *(Il2CppClass **)(lVar10 + 0x20);
                        il2cpp_runtime_glue(pIVar11 + 1);
                      }
                      goto LAB_040747c5;
                    }
                    uVar17 = 0;
                    do {
                      pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_2);
                      System_Object___ctor(pIVar11,(MethodInfo *)0x0);
                      if (pIVar11 == (Il2CppObject *)0x0) goto LAB_040747c5;
                      pIVar11[1].monitor = __this;
                      il2cpp_runtime_glue(&pIVar11[1].monitor,__this);
                      if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_040747ac;
                      pIVar11[1].klass = *(Il2CppClass **)(lVar10 + 0x20 + uVar17 * 8);
                      il2cpp_runtime_glue(pIVar11 + 1);
                      pUVar12 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                      pIVar4 = pIVar11[1].klass;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar6 = UI_UIManager__GetLocaleCommon
                                         ((System_String_o *)pIVar4,(MethodInfo *)0x0);
                      pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      UI_ElementFactory__CreateDefaultButton
                                (pUVar12,style,pSVar6,0.0,0.0,pUVar8,pMVar15);
                      uVar17 = uVar17 + 1;
                    } while ((long)uVar17 < (long)*(int *)(lVar10 + 0x18));
                  }
                  pSVar5 = (pSVar13->fields).Preset;
                  if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                    if (*(char *)((long)&(pSVar5->fields).DefaultValue + 1) != '\0') {
                      UI_ElementFactory__CreateDefaultLabel
                                ((__this->fields).DoublePanelRight,style,"*Weather presets cannot be modified. Create a new set to use custom settings.",0,4,method_02)
                      ;
                    }
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    lVar10 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if (lVar10 != 0) {
                      vector3Popup = *(UI_Vector3Popup_o **)(lVar10 + 0x60);
                      pUVar12 = (__this->fields).DoublePanelRight;
                      setting_00 = pSVar13[1].klass;
                      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar7 = Utility_Util__EnumToStringArray<Int32Enum>(MethodInfo_String___EnumToStringArray_WeatherSkybox);
                      pMVar15 = (MethodInfo *)0x0;
                      UI_ElementFactory__CreateDropdownSetting
                                (pUVar12,style,(Settings_BaseSetting_o *)setting_00,"Skybox",
                                 pSVar7,(System_String_o *)"",140.0,40.0,300.0,
                                 (System_Nullable_float__o)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,in_stack_ffffffffffffff88);
                      UI_ElementFactory__CreateColorSetting
                                ((__this->fields).DoublePanelRight,style,pSVar13[1].monitor,
                                 "Skybox color",colorPickPopup,(System_String_o *)"",90.0,
                                 30.0,(UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                      pMVar18 = (MethodInfo *)0x0;
                      UI_ElementFactory__CreateColorSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[1].fields.Settings,"Daylight",
                                 colorPickPopup,(System_String_o *)"",90.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                      UI_ElementFactory__CreateSliderSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[1].fields.TypedSettings,
                                 "Daylight intensity",(System_String_o *)"",150.0,16.0,2,pMVar18);
                      UI_ElementFactory__CreateVector3Setting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[1].fields.Name,"Daylight direction",
                                 vector3Popup,(System_String_o *)"",90.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                      UI_ElementFactory__CreateColorSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[1].fields.Preset,"Ambient light",
                                 colorPickPopup,(System_String_o *)"",90.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                      UI_ElementFactory__CreateColorSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[1].fields.UniqueId,"Flashlight",
                                 colorPickPopup,(System_String_o *)"",90.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                      pMVar18 = (MethodInfo *)0x0;
                      UI_ElementFactory__CreateColorSetting
                                ((__this->fields).DoublePanelRight,style,pSVar13[2].monitor,
                                 "Fog color",colorPickPopup,(System_String_o *)"",90.0,
                                 30.0,(UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                      UI_ElementFactory__CreateSliderInputSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[2].klass,"Fog density",
                                 (System_String_o *)"",130.0,16.0,70.0,40.0,3,pMVar18);
                      UI_ElementFactory__CreateSliderSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[2].fields.Settings,"Rain",
                                 (System_String_o *)"",150.0,16.0,2,pMVar18);
                      UI_ElementFactory__CreateSliderSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[2].fields.TypedSettings,
                                 "Thunder",(System_String_o *)"",150.0,16.0,2,pMVar18);
                      UI_ElementFactory__CreateSliderSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[2].fields.Name,"Snow",
                                 (System_String_o *)"",150.0,16.0,2,pMVar18);
                      UI_ElementFactory__CreateSliderSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[2].fields.Preset,"Wind",
                                 (System_String_o *)"",150.0,16.0,2,pMVar18);
                      UI_ElementFactory__CreateVector3Setting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[2].fields.UniqueId,"Wind direction",
                                 vector3Popup,(System_String_o *)"",90.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,pMVar15);
                      UI_ElementFactory__CreateInputSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[3].klass,"Rain force",
                                 (System_String_o *)"",140.0,40.0,0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff98);
                      UI_ElementFactory__CreateInputSetting
                                ((__this->fields).DoublePanelRight,style,pSVar13[3].monitor,
                                 "Snow force",(System_String_o *)"",140.0,40.0,0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff98);
                      UI_ElementFactory__CreateInputSetting
                                ((__this->fields).DoublePanelRight,style,
                                 (Settings_BaseSetting_o *)pSVar13[3].fields.Settings,"Wind force",
                                 (System_String_o *)"",140.0,40.0,0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff98);
                      return;
                    }
                  }
                  goto LAB_040747c5;
                }
              }
              goto LAB_040747ac;
            }
          }
        }
LAB_040747c5:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_040747ac:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel$$OnWeatherSetSelected
// il2cpp: void UI_CreateGameWeatherPanel__OnWeatherSetSelected (UI_CreateGameWeatherPanel_o* __this, const MethodInfo* method);
// 0x4074eb0

void UI_CreateGameWeatherPanel__OnWeatherSetSelected
               (UI_CreateGameWeatherPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  Settings_TypedSetting_int__o *__this_00;
  UI_BasePanel_o *__this_01;
  
  if (DAT_057044b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057044b7 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((((lVar1 != 0) && (lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48), lVar2 != 0)) &&
      (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
     ((lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0 &&
      (__this_00 = *(Settings_TypedSetting_int__o **)(lVar1 + 0x60),
      __this_00 != (Settings_TypedSetting_int__o *)0x0)))) {
    Settings_TypedSetting<int>__set_Value(__this_00,*(int32_t *)(lVar2 + 0x14),MethodInfo_Void_set_Value);
    __this_01 = (__this->fields).Parent;
    if (__this_01 != (UI_BasePanel_o *)0x0) {
      UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel$$OnWeatherPanelButtonClick
// il2cpp: void UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick (UI_CreateGameWeatherPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4074f50

void UI_CreateGameWeatherPanel__OnWeatherPanelButtonClick
               (UI_CreateGameWeatherPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  UI_SetNamePopup_o *__this_00;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  UI_ConfirmPopup_o *__this_01;
  Settings_BaseSetSetting_c *pSVar6;
  char cVar7;
  uint32_t uVar8;
  bool_conflict bVar9;
  Il2CppObject *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar10;
  Settings_BaseSetSetting_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  long *plVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  Settings_BoolSetting_c *value;
  System_String_o **ppSVar16;
  UI_ExportPopup_o *__this_03;
  UI_ImportPopup_o *__this_04;
  
  if (DAT_057044b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_CanDeleteSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_CanEditSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnWeatherPanelButtonClick_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnWeatherPanelButtonClick_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnWeatherPanelButtonClick_b__2);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnWeatherPanelButtonClick_b__3);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnWeatherPanelButtonClick_b__4);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnWeatherPanelButtonClick_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSet);
    il2cpp_init_method_metadata(&"ExportSchedule");
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"ImportSchedule");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"DeleteWarning");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"Preset");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Export");
    il2cpp_init_method_metadata(&"New set");
    DAT_057044b8 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (Il2CppObject *)0x0) goto LAB_0407583a;
  __this_02[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_02 + 1,__this);
  __this_02[1].monitor = name;
  il2cpp_runtime_glue(&__this_02[1].monitor);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar3 == 0) goto LAB_0407583a;
  __this_00 = *(UI_SetNamePopup_o **)(lVar3 + 0x88);
  pSVar13 = __this_02[1].monitor;
  uVar8 = <PrivateImplementationDetails>__ComputeStringHash(pSVar13,(MethodInfo *)0x0);
  if (uVar8 < 0x658f3665) {
    if (uVar8 < 0x573e0af5) {
      if (uVar8 == 0x3302295a) {
        bVar9 = System_String__op_Equality(pSVar13,"ExportSchedule",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (((lVar3 == 0) || (lVar2 == 0)) ||
           (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) ==
            (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0407583a;
        __this_03 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
        pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet
                            (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
        if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) goto LAB_0407583a;
        bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet))
        goto LAB_0407583f;
        pSVar5 = pSVar11[3].fields.Preset;
        if ((pSVar5 == (Settings_BoolSetting_o *)0x0) || (__this_03 == (UI_ExportPopup_o *)0x0))
        goto LAB_0407583a;
        value = pSVar5[1].klass;
        goto LAB_04075825;
      }
      if (uVar8 != 0x573e0af4) {
        return;
      }
      bVar9 = System_String__op_Equality(pSVar13,"Import",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if ((lVar2 == 0) ||
         (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) ==
          (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0407583a;
      bVar9 = Settings_SetSettingsContainer<object>__CanEditSelectedSet
                        (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar2 == 0) goto LAB_0407583a;
      __this_04 = *(UI_ImportPopup_o **)(lVar2 + 0x70);
      pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
LAB_040753f3:
      UnityEngine_Events_UnityAction___ctor();
      if (__this_04 != (UI_ImportPopup_o *)0x0) {
        UI_ImportPopup__Show(__this_04,pUVar10,1,"",(MethodInfo *)0x0);
        return;
      }
      goto LAB_0407583a;
    }
    if (uVar8 == 0x5797ea6a) {
      bVar9 = System_String__op_Equality(pSVar13,"Delete",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if ((lVar2 != 0) &&
         (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) !=
          (Settings_SetSettingsContainer_T__o *)0x0)) {
        bVar9 = Settings_SetSettingsContainer<object>__CanDeleteSelectedSet
                          (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar2 != 0) {
          __this_01 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
          pSVar13 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pSVar12 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
          if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
            UI_ConfirmPopup__Show(__this_01,pSVar13,pUVar10,pSVar12,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto LAB_0407583a;
    }
    if (uVar8 != 0x658f3664) {
      return;
    }
    ppSVar16 = &"Copy";
    bVar9 = System_String__op_Equality(pSVar13,"Copy",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  }
  else {
    if (0xc80631f3 < uVar8) {
      if (uVar8 != 0xe86349d3) {
        if (uVar8 != 0xe9d2f4f9) {
          return;
        }
        bVar9 = System_String__op_Equality(pSVar13,"ImportSchedule",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar2 == 0) goto LAB_0407583a;
        __this_04 = *(UI_ImportPopup_o **)(lVar2 + 0x70);
        pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        goto LAB_040753f3;
      }
      bVar9 = System_String__op_Equality(pSVar13,"Export",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (((lVar2 == 0) ||
          (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) ==
           (Settings_SetSettingsContainer_T__o *)0x0)) ||
         (pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet
                              (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
         pSVar11 == (Settings_BaseSetSetting_o *)0x0)) goto LAB_0407583a;
      bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
      if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
         ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) {
LAB_0407583f:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar11);
      }
      pSVar6 = pSVar11->klass;
      bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
      if (((pSVar6->_2).naturalAligment < bVar1) ||
         ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) goto LAB_0407583f;
      plVar14 = (long *)(*(pSVar6->vtable)._5_SerializeToJsonObject.methodPtr)
                                  (pSVar11,(pSVar6->vtable)._5_SerializeToJsonObject.method);
      if (plVar14 == (long *)0x0) goto LAB_0407583a;
      cVar7 = (**(code **)(*plVar14 + 0x2f8))
                        (plVar14,"Preset",*(undefined8 *)(*plVar14 + 0x300));
      if (cVar7 == '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_040757e5;
LAB_0407577a:
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      else {
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit(0,(MethodInfo *)0x0);
        (**(code **)(*plVar14 + 0x1b8))
                  (plVar14,"Preset",pSVar15,*(undefined8 *)(*plVar14 + 0x1c0));
        if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_0407577a;
LAB_040757e5:
        il2cpp_init_class();
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      if (lVar2 != 0) {
        __this_03 = *(UI_ExportPopup_o **)(lVar2 + 0x68);
        value = (Settings_BoolSetting_c *)
                (**(code **)(*plVar14 + 0x318))(plVar14,4,*(undefined8 *)(*plVar14 + 800));
        if (__this_03 != (UI_ExportPopup_o *)0x0) {
LAB_04075825:
          UI_ExportPopup__Show(__this_03,(System_String_o *)value,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_0407583a;
    }
    if (uVar8 != 0x990de47d) {
      if (uVar8 != 0xc80631f3) {
        return;
      }
      bVar9 = System_String__op_Equality(pSVar13,"Rename",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if ((lVar2 == 0) ||
         (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) ==
          (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0407583a;
      bVar9 = Settings_SetSettingsContainer<object>__CanEditSelectedSet
                        (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_Boolean_CanEditSelectedSet);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (((*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20) ==
            (Settings_SetSettingsContainer_T__o *)0x0) ||
          (pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet
                               (*(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet)
          , pSVar11 == (Settings_BaseSetSetting_o *)0x0)) ||
         (pSVar4 = (pSVar11->fields).Name, pSVar4 == (Settings_StringSetting_o *)0x0))
      goto LAB_0407583a;
      pSVar13 = (pSVar4->fields)._value;
      pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar12 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
      if (__this_00 == (UI_SetNamePopup_o *)0x0) goto LAB_0407583a;
      goto LAB_04075580;
    }
    ppSVar16 = &"Create";
    bVar9 = System_String__op_Equality(pSVar13,"Create",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  }
  UnityEngine_Events_UnityAction___ctor();
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar12 = UI_UIManager__GetLocaleCommon(*ppSVar16,(MethodInfo *)0x0);
  pSVar13 = "New set";
  if (__this_00 != (UI_SetNamePopup_o *)0x0) {
LAB_04075580:
    UI_SetNamePopup__Show
              (__this_00,pSVar13,pUVar10,pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
LAB_0407583a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel$$OnWeatherSetOperationFinish
// il2cpp: void UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish (UI_CreateGameWeatherPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4075860

void UI_CreateGameWeatherPanel__OnWeatherSetOperationFinish
               (UI_CreateGameWeatherPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  Settings_SetSettingsContainer_T__o *__this_00;
  UI_ImportPopup_o *__this_01;
  Settings_StringSetting_o *pSVar6;
  Settings_BoolSetting_o *__this_02;
  Settings_TypedSetting_T__o *__this_03;
  bool_conflict bVar7;
  int iVar8;
  VirtualInvokeData *pVVar9;
  Settings_BaseSetSetting_o *pSVar10;
  Settings_ListSetting_T__c *pSVar11;
  Weather_WeatherSchedule_o *__this_04;
  System_String_o *pSVar12;
  Il2CppRuntimeInterfaceOffsetPair *pIVar13;
  Settings_ListSetting_T__o *pSVar14;
  long lVar15;
  UI_BasePanel_o *__this_05;
  Settings_IntSetting_o *pSVar16;
  
  if (DAT_057044b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_CopySelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_CreateSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_DeleteSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSchedule);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSet);
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"ImportSchedule");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"Import");
    DAT_057044b9 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_0407588f;
LAB_040759c2:
    il2cpp_init_class();
    lVar15 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_040759c2;
LAB_0407588f:
    lVar15 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if ((lVar15 == 0) || (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48), lVar4 == 0))
  goto LAB_04075f0c;
  lVar5 = *(long *)(lVar15 + 0x88);
  __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20);
  __this_01 = *(UI_ImportPopup_o **)(lVar15 + 0x70);
  bVar7 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0xb8) == 0)) ||
       (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04075f0c;
    Settings_SetSettingsContainer<object>__CreateSet
              (__this_00,*(System_String_o **)(*(long *)(lVar5 + 0xb8) + 0x18),MethodInfo_Void_CreateSet);
    pSVar14 = (__this_00->fields).Sets;
    if (pSVar14 == (Settings_ListSetting_T__o *)0x0) goto LAB_04075f0c;
    pSVar16 = (__this_00->fields).SelectedSetIndex;
    pSVar11 = pSVar14->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar13 = (pSVar11->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar13->interfaceType + lVar15) == TypeInfo_IListSetting) goto LAB_04075c54;
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar15);
    }
LAB_04075ab3:
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IListSetting,0);
    goto LAB_04075c67;
  }
  bVar7 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    bVar7 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (((__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) ||
          (pSVar10 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
          pSVar10 == (Settings_BaseSetSetting_o *)0x0)) ||
         ((lVar5 == 0 ||
          ((*(long *)(lVar5 + 0xb8) == 0 ||
           (pSVar6 = (pSVar10->fields).Name, pSVar6 == (Settings_StringSetting_o *)0x0))))))
      goto LAB_04075f0c;
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar6,
                 *(Il2CppObject **)(*(long *)(lVar5 + 0xb8) + 0x18),MethodInfo_Void_set_Value);
      __this_05 = (__this->fields).Parent;
      if (__this_05 == (UI_BasePanel_o *)0x0) goto LAB_04075f0c;
      goto LAB_04075c9d;
    }
    bVar7 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0xb8) == 0)) ||
         (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04075f0c;
      Settings_SetSettingsContainer<object>__CopySelectedSet
                (__this_00,*(System_String_o **)(*(long *)(lVar5 + 0xb8) + 0x18),MethodInfo_Void_CopySelectedSet);
      pSVar14 = (__this_00->fields).Sets;
      if (pSVar14 == (Settings_ListSetting_T__o *)0x0) goto LAB_04075f0c;
      pSVar16 = (__this_00->fields).SelectedSetIndex;
      pSVar11 = pSVar14->klass;
      uVar3._0_1_ = (pSVar11->_2).rank;
      uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar13 = (pSVar11->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar13->interfaceType + lVar15) == TypeInfo_IListSetting) goto LAB_04075c54;
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar15);
      }
      goto LAB_04075ab3;
    }
    bVar7 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      bVar7 = System_String__op_Equality(name,"ImportSchedule",(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        __this_04 = (Weather_WeatherSchedule_o *)il2cpp_runtime_glue(TypeInfo_WeatherSchedule);
        Weather_WeatherSchedule___ctor(__this_04,(MethodInfo *)0x0);
        if (((__this_01 == (UI_ImportPopup_o *)0x0) ||
            (pSVar6 = (__this_01->fields).ImportSetting, pSVar6 == (Settings_StringSetting_o *)0x0))
           || (__this_04 == (Weather_WeatherSchedule_o *)0x0)) goto LAB_04075f0c;
        pSVar12 = Weather_WeatherSchedule__DeserializeFromCSV
                            (__this_04,(pSVar6->fields)._value,(MethodInfo *)0x0);
        bVar7 = System_String__op_Inequality
                          (pSVar12,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                           (MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          if ((__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) ||
             (pSVar10 = Settings_SetSettingsContainer<object>__GetSelectedSet
                                  (__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
             pSVar10 == (Settings_BaseSetSetting_o *)0x0)) goto LAB_04075f0c;
          bVar1 = (TypeInfo_WeatherSet->_2).naturalAligment;
          if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
             ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WeatherSet)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar10);
          }
          pSVar6 = (__this_01->fields).ImportSetting;
          if ((pSVar6 == (Settings_StringSetting_o *)0x0) ||
             (__this_03 = (Settings_TypedSetting_T__o *)pSVar10[3].fields.Preset,
             __this_03 == (Settings_TypedSetting_T__o *)0x0)) goto LAB_04075f0c;
          Settings_TypedSetting<object>__set_Value
                    (__this_03,(Il2CppObject *)(pSVar6->fields)._value,MethodInfo_Void_set_Value);
          (*(__this_01->klass->vtable)._22_Hide.methodPtr)(__this_01);
          __this_05 = (__this->fields).Parent;
        }
        else {
          UI_ImportPopup__ShowError(__this_01,pSVar12,(MethodInfo *)0x0);
          __this_05 = (__this->fields).Parent;
        }
        goto joined_r0x04075e64;
      }
    }
    else {
      if (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar10 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
      if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = (pSVar10->fields).Name;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar12 = (pSVar6->fields)._value;
      pSVar10 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
      if (__this_01 == (UI_ImportPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = (__this_01->fields).ImportSetting;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(pSVar10->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                (pSVar10,(pSVar6->fields)._value,
                 (pSVar10->klass->vtable)._8_DeserializeFromJsonString.method);
      pSVar10 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
      if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_02 = (pSVar10->fields).Preset;
      if (__this_02 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Settings_TypedSetting<bool>__set_Value
                ((Settings_TypedSetting_bool__o *)__this_02,0,MethodInfo_Void_set_Value);
      pSVar10 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
      if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = (pSVar10->fields).Name;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar12,MethodInfo_Void_set_Value);
      (*(__this_01->klass->vtable)._22_Hide.methodPtr)(__this_01);
    }
    goto LAB_04075c90;
  }
  if (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) goto LAB_04075f0c;
  Settings_SetSettingsContainer<object>__DeleteSelectedSet(__this_00,MethodInfo_Void_DeleteSelectedSet);
  pSVar16 = (__this_00->fields).SelectedSetIndex;
  if (pSVar16 == (Settings_IntSetting_o *)0x0) goto LAB_04075f0c;
  Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar16,0,MethodInfo_Void_set_Value);
  __this_05 = (__this->fields).Parent;
  goto joined_r0x04075e64;
LAB_04075c54:
  pVVar9 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar13->offset + lVar15);
LAB_04075c67:
  iVar8 = (*pVVar9->methodPtr)(pSVar14,pVVar9->method);
  if (pSVar16 == (Settings_IntSetting_o *)0x0) goto LAB_04075f0c;
  Settings_TypedSetting<int>__set_Value
            ((Settings_TypedSetting_int__o *)pSVar16,iVar8 + -1,MethodInfo_Void_set_Value);
LAB_04075c90:
  __this_05 = (__this->fields).Parent;
joined_r0x04075e64:
  if (__this_05 != (UI_BasePanel_o *)0x0) {
LAB_04075c9d:
    UI_BasePanel__RebuildCategoryPanel(__this_05,(MethodInfo *)0x0);
    return;
  }
LAB_04075f0c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameWeatherPanel$$.ctor
// il2cpp: void UI_CreateGameWeatherPanel___ctor (UI_CreateGameWeatherPanel_o* __this, const MethodInfo* method);
// 0x4076070

void UI_CreateGameWeatherPanel___ctor(UI_CreateGameWeatherPanel_o *__this,MethodInfo *method)

{
  UI_CreateGameCategoryPanel___ctor((UI_CreateGameCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameWeatherPanel$$<Setup>b__2_0
// il2cpp: void UI_CreateGameWeatherPanel___Setup_b__2_0 (UI_CreateGameWeatherPanel_o* __this, const MethodInfo* method);
// 0x4076080

void UI_CreateGameWeatherPanel__<Setup>b__2_0
               (UI_CreateGameWeatherPanel_o *__this,MethodInfo *method)

{
  UI_CreateGameWeatherPanel__OnWeatherSetSelected(__this,method);
  return;
}


