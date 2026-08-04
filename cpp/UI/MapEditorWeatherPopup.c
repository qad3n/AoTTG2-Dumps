// Type: UI.MapEditorWeatherPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorWeatherPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorWeatherPopup.cs
// --------------------------------

// UI.MapEditorWeatherPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass15_0___ctor (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x443efb0

void UI_MapEditorWeatherPopup___c__DisplayClass15_0___ctor
               (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass15_0$$<Setup>b__1
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass15_0___Setup_b__1 (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x44410b0

void UI_MapEditorWeatherPopup___c__DisplayClass15_0___Setup_b__1
               (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_String_o *name;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_MapEditorWeatherPopup_o *pUVar1;
  System_String_o *str0;
  System_String_Fields __this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorWeatherPopup_o *)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherButtonClick(pUVar1,(__this->fields).button,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6de == '\0') {
    il2cpp_runtime_helper_023445d0(&"Schedule");
    g_data_057ae6de = '\x01';
  }
  str0 = (System_String_o *)(pUVar1->fields).m_CachedPtr;
  pUVar1 = (UI_MapEditorWeatherPopup_o *)(pUVar1->fields).m_CancellationTokenSource;
  name = System_String__Concat_3ae5ba0(str0,"Schedule",(MethodInfo *)0x0);
  if (pUVar1 != (UI_MapEditorWeatherPopup_o *)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherButtonClick(pUVar1,name,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = str0->fields;
  if (__this_00 != (System_String_Fields)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish
              ((UI_MapEditorWeatherPopup_o *)__this_00,(System_String_o *)str0[1].klass,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(UI_MapEditorWeatherPopup_o **)((long)__this_00 + 0x10) != (UI_MapEditorWeatherPopup_o *)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish
              (*(UI_MapEditorWeatherPopup_o **)((long)__this_00 + 0x10),
               *(System_String_o **)((long)__this_00 + 0x18),method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass16_0___ctor (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x44405b0

void UI_MapEditorWeatherPopup___c__DisplayClass16_0___ctor
               (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass16_0$$<Show>b__0
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass16_0___Show_b__0 (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x44410d0

void UI_MapEditorWeatherPopup___c__DisplayClass16_0___Show_b__0
               (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_MapEditorWeatherPopup_o *__this_00;
  System_String_o *name;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *str0;
  System_String_Fields __this_01;
  
  if (g_data_057ae6de == '\0') {
    il2cpp_runtime_helper_023445d0(&"Schedule");
    g_data_057ae6de = '\x01';
  }
  str0 = (__this->fields).button;
  __this_00 = (__this->fields).__4__this;
  name = System_String__Concat_3ae5ba0(str0,"Schedule",(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorWeatherPopup_o *)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherButtonClick(__this_00,name,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = str0->fields;
  if (__this_01 != (System_String_Fields)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish
              ((UI_MapEditorWeatherPopup_o *)__this_01,(System_String_o *)str0[1].klass,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(UI_MapEditorWeatherPopup_o **)((long)__this_01 + 0x10) != (UI_MapEditorWeatherPopup_o *)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish
              (*(UI_MapEditorWeatherPopup_o **)((long)__this_01 + 0x10),
               *(System_String_o **)((long)__this_01 + 0x18),method_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass17_0___ctor (UI_MapEditorWeatherPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4440b70

void UI_MapEditorWeatherPopup___c__DisplayClass17_0___ctor
               (UI_MapEditorWeatherPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass17_0$$<OnWeatherButtonClick>b__0
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass17_0___OnWeatherButtonClick_b__0 (UI_MapEditorWeatherPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4441120

void UI_MapEditorWeatherPopup___c__DisplayClass17_0___OnWeatherButtonClick_b__0
               (UI_MapEditorWeatherPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_MapEditorWeatherPopup_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  UI_MapEditorWeatherPopup_o *__this_01;
  
  __this_01 = (__this->fields).__4__this;
  if (__this_01 != (UI_MapEditorWeatherPopup_o *)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish(__this_01,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UI_MapEditorWeatherPopup_o *)(__this_01->fields).m_CachedPtr;
  if (__this_00 != (UI_MapEditorWeatherPopup_o *)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish
              (__this_00,(System_String_o *)(__this_01->fields).m_CancellationTokenSource,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass17_0$$<OnWeatherButtonClick>b__1
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass17_0___OnWeatherButtonClick_b__1 (UI_MapEditorWeatherPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4441140

void UI_MapEditorWeatherPopup___c__DisplayClass17_0___OnWeatherButtonClick_b__1
               (UI_MapEditorWeatherPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_MapEditorWeatherPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorWeatherPopup_o *)0x0) {
    UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MapEditorWeatherPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorWeatherPopup__get_Title (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x443e9d0

System_String_o * UI_MapEditorWeatherPopup__get_Title(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae6d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Weather");
    g_data_057ae6d7 = '\x01';
  }
  return "Weather";
}


// UI.MapEditorWeatherPopup$$get_Width
// il2cpp: float UI_MapEditorWeatherPopup__get_Width (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x443ea00

float UI_MapEditorWeatherPopup__get_Width(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  return 1010.0;
}


// UI.MapEditorWeatherPopup$$get_Height
// il2cpp: float UI_MapEditorWeatherPopup__get_Height (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x443ea10

float UI_MapEditorWeatherPopup__get_Height(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.MapEditorWeatherPopup$$get_DoublePanel
// il2cpp: bool UI_MapEditorWeatherPopup__get_DoublePanel (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x443ea20

bool_conflict UI_MapEditorWeatherPopup__get_DoublePanel(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorWeatherPopup$$get_DoublePanelDivider
// il2cpp: bool UI_MapEditorWeatherPopup__get_DoublePanelDivider (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x443ea30

bool_conflict
UI_MapEditorWeatherPopup__get_DoublePanelDivider(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorWeatherPopup$$get_ScrollBar
// il2cpp: bool UI_MapEditorWeatherPopup__get_ScrollBar (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x443ea40

bool_conflict UI_MapEditorWeatherPopup__get_ScrollBar(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorWeatherPopup$$Setup
// il2cpp: void UI_MapEditorWeatherPopup__Setup (UI_MapEditorWeatherPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x443ea50

void UI_MapEditorWeatherPopup__Setup
               (UI_MapEditorWeatherPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_Fields UVar2;
  UnityEngine_Transform_o *parent_00;
  UI_ElementStyle_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  UI_ToggleSettingElement_o *pUVar4;
  long lVar5;
  System_String_o *pSVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *parent_01;
  MethodInfo *method_00;
  ulong uVar8;
  
  if (g_data_057ae6d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToggleSettingElement_GetComponent_ToggleSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Map has weather");
    il2cpp_runtime_helper_023445d0(&"Make the Map Default selection use these weather settings.");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae6d8 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  themePanel = (UI_ElementStyle_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,180.0,20.0,(System_String_o *)themePanel,(MethodInfo *)0x0);
  parent_01 = (UI_ElementStyle_o *)(__this->fields).DoublePanelLeft;
  method_00 = (MethodInfo *)0x0;
  pUVar3 = UI_ElementFactory__CreateToggleSetting
                     ((UnityEngine_Transform_o *)parent_01,__this_00,
                      (Settings_BaseSetting_o *)(__this->fields)._hasWeather,"Map has weather","Make the Map Default selection use these weather settings.",30.0,
                      30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_0443efa7;
  pUVar4 = (UI_ToggleSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(pUVar3,MethodInfo_ToggleSettingElement_GetComponent_ToggleSettingElement);
  (__this->fields)._hasWeatherElement = pUVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hasWeatherElement,pUVar4);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateHorizontalGroup((__this->fields).DoublePanelLeft,10.0,0,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).DoublePanelLeft,10.0,0,(MethodInfo *)0x0)
  ;
  parent_01 = TypeInfo_string;
  lVar5 = il2cpp_runtime_helper_022b2a40();
  if (lVar5 == 0) goto label_0443efa7;
  __this_01 = __this_00;
  if (*(int *)(lVar5 + 0x18) == 0) {
label_0443ef8e:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this_01 = (UI_ElementStyle_o *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = "Import";
    il2cpp_runtime_helper_022b4080(__this_01);
    if (*(uint *)(lVar5 + 0x18) < 2) goto label_0443ef8e;
    *(undefined8 *)(lVar5 + 0x28) = "Export";
    il2cpp_runtime_helper_022b4080(lVar5 + 0x28);
    if (*(int *)(lVar5 + 0x18) < 1) {
label_0443ee3e:
      parent_00 = (__this->fields).BottomBar;
      pSVar6 = "Save";
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = "Save";
      }
      "Save" = pSVar6;
      if (g_data_057ae727 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"Common");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ae727 = '\x01';
        iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = UI_UIManager__GetLocale("Common",pSVar6,"","","",method_00);
      pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
      return;
    }
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      uVar8 = 0;
      do {
        __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
        parent_01 = __this_01;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (UI_ElementStyle_o *)0x0) goto label_0443efa7;
        (__this_01->fields).ThemePanel = (System_String_o *)__this;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields).ThemePanel,__this);
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto label_0443ef8e;
        UVar2.m_CachedPtr = *(intptr_t *)(lVar5 + 0x20 + uVar8 * 8);
        (__this_01->fields).FontSize = (int)UVar2.m_CachedPtr;
        (__this_01->fields).TitleWidth = (float)(int)((ulong)UVar2.m_CachedPtr >> 0x20);
        il2cpp_runtime_helper_022b4080(&__this_01->fields);
        themePanel = (UI_ElementStyle_o *)UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        UVar2.m_CachedPtr._0_4_ = (__this_01->fields).FontSize;
        UVar2.m_CachedPtr._4_4_ = (__this_01->fields).TitleWidth;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ae727 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
          il2cpp_runtime_helper_023445d0(&"Common");
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ae727 = '\x01';
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = UI_UIManager__GetLocale
                           ("Common",(System_String_o *)UVar2.m_CachedPtr,"","",
                            "",method_00);
        pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  ((UnityEngine_Transform_o *)themePanel,__this_00,pSVar6,0.0,0.0,pUVar7,(MethodInfo *)0x0);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(lVar5 + 0x18));
      goto label_0443ee3e;
    }
    themePanel = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
    parent_01 = themePanel;
    System_Object___ctor((Il2CppObject *)themePanel,(MethodInfo *)0x0);
    if (themePanel == (UI_ElementStyle_o *)0x0) goto label_0443efa7;
    (themePanel->fields).ThemePanel = (System_String_o *)__this;
    il2cpp_runtime_helper_022b4080(&(themePanel->fields).ThemePanel,__this);
    if (*(int *)(lVar5 + 0x18) == 0) goto label_0443ef8e;
  }
  UVar2.m_CachedPtr = (intptr_t)__this_01->klass;
  parent_01 = (UI_ElementStyle_o *)&themePanel->fields;
  (themePanel->fields).FontSize = (int)UVar2.m_CachedPtr;
  (themePanel->fields).TitleWidth = (float)(int)((ulong)UVar2.m_CachedPtr >> 0x20);
  il2cpp_runtime_helper_022b4080();
label_0443efa7:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)parent_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup$$Show
// il2cpp: void UI_MapEditorWeatherPopup__Show (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x443f040

void UI_MapEditorWeatherPopup__Show(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  int length;
  uint uVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  long lVar5;
  Settings_BoolSetting_o *__this_00;
  UI_ToggleSettingElement_o *pUVar6;
  UnityEngine_GameObject_array *pUVar7;
  Il2CppRGCTXData *setting;
  InvokerMethod pIVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined8 uVar9;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  UI_ElementStyle_o *__this_05;
  UnityEngine_GameObject_o *pUVar12;
  long lVar13;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *parent;
  System_String_array *options;
  UI_DropdownSettingElement_o *__this_06;
  long *plVar14;
  long *unaff_RBX;
  MethodInfo *method_00;
  long *unaff_R14;
  ulong uVar15;
  undefined1 auVar16 [12];
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  Il2CppObject *in_stack_ffffffffffffff58;
  long lStack_88;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [16];
  _union_249395 _Stack_38;
  
  if (g_data_057ae6d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Show_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArray_WeatherSkybox);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Wind direction");
    il2cpp_runtime_helper_023445d0(&"Flashlight");
    il2cpp_runtime_helper_023445d0(&"Loop schedule");
    il2cpp_runtime_helper_023445d0(&"Rain");
    il2cpp_runtime_helper_023445d0(&"Daylight");
    il2cpp_runtime_helper_023445d0(&"Fog color");
    il2cpp_runtime_helper_023445d0(&"Rain force");
    il2cpp_runtime_helper_023445d0(&"Daylight intensity");
    il2cpp_runtime_helper_023445d0(&"Wind");
    il2cpp_runtime_helper_023445d0(&"Daylight direction");
    il2cpp_runtime_helper_023445d0(&"Ambient light");
    il2cpp_runtime_helper_023445d0(&"Snow force");
    il2cpp_runtime_helper_023445d0(&"Skybox color");
    il2cpp_runtime_helper_023445d0(&"Wind force");
    il2cpp_runtime_helper_023445d0(&"Use schedule");
    il2cpp_runtime_helper_023445d0(&"Follow a programmed weather schedule.");
    il2cpp_runtime_helper_023445d0(&"Snow");
    il2cpp_runtime_helper_023445d0(&"Fog density");
    il2cpp_runtime_helper_023445d0(&"Skybox");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    il2cpp_runtime_helper_023445d0(&"Thunder");
    g_data_057ae6d9 = '\x01';
  }
  auStack_78._0_8_ = (UI_ColorPickPopup_c *)0x0;
  auStack_78._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_78._16_8_ = (UnityEngine_Object_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._elements;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_044404f1;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  auStack_78._16_8_ = _Stack_38;
  auStack_78._0_8_ = auStack_48._0_8_;
  auStack_78._8_8_ = auStack_48._8_8_;
  unaff_R14 = &MethodInfo_Boolean_MoveNext;
  unaff_RBX = (long *)auStack_78;
  while (__this_01.fields._index = (int)in_stack_ffffffffffffff50,
        __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff50 >> 0x20),
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48,
        __this_01.fields._current = in_stack_ffffffffffffff58,
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_01,(MethodInfo_321A1D0 *)unaff_RBX), uVar9 = auStack_78._16_8_,
        (char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)uVar9,(MethodInfo *)0x0);
  }
  __this_02.fields._index = (int)in_stack_ffffffffffffff50;
  __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
  __this_02.fields._current = in_stack_ffffffffffffff58;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)auStack_78);
  do {
    pSVar4 = (__this->fields)._elements;
    if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_044404f1;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    plVar14 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar14 == (long *)0x0) {
label_0443f392:
      pSVar11 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_05 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(__this_05,0x18,180.0,20.0,pSVar11,(MethodInfo *)0x0);
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar13 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((((lVar13 == 0) || (plVar14 == (long *)0x0)) || (plVar14[5] == 0)) ||
         ((lVar5 = *(long *)(plVar14[5] + 0x20), lVar5 == 0 ||
          (__this_00 = (__this->fields)._hasWeather, __this_00 == (Settings_BoolSetting_o *)0x0)))) {
label_044404f1:
        il2cpp_runtime_helper_022b2c90();
        goto label_044404f6;
      }
      unaff_RBX = *(long **)(lVar13 + 0x48);
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,(uint)*(byte *)(lVar5 + 0x20),MethodInfo_Void_set_Value);
      pUVar6 = (__this->fields)._hasWeatherElement;
      if (pUVar6 == (UI_ToggleSettingElement_o *)0x0) goto label_044404f1;
      auStack_78._40_8_ = unaff_RBX;
      (*(pUVar6->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar6,(pUVar6->klass->vtable)._6_SyncElement.method);
      if ((plVar14[5] == 0) ||
         (unaff_RBX = *(long **)(plVar14[5] + 0x38),
         (System_Collections_Generic_List_Enumerator_T__c *)unaff_RBX ==
         (System_Collections_Generic_List_Enumerator_T__c *)0x0)) goto label_044404f1;
      pSVar4 = (__this->fields)._elements;
      in_stack_ffffffffffffff48 = 0;
      pUVar12 = UI_ElementFactory__CreateToggleSetting
                          ((__this->fields).DoublePanelLeft,__this_05,
                           (Settings_BaseSetting_o *)
                           ((System_Collections_Generic_List_Enumerator_T__c *)unaff_RBX)->rgctx_data,
                           "Use schedule","Follow a programmed weather schedule.",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (MethodInfo *)0x0);
      lVar13 = MethodInfo_Void_Add;
      if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_044404f1;
      unaff_R14 = &MethodInfo_Void_Add;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar7 = (pSVar4->fields)._items;
      if (pUVar7 == (UnityEngine_GameObject_array *)0x0) goto label_044404f1;
      uVar3 = (pSVar4->fields)._size;
      if (uVar3 < (uint)pUVar7->max_length) {
        (pSVar4->fields)._size = uVar3 + 1;
        pUVar7->m_Items[(int)uVar3] = pUVar12;
        il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      pSVar4 = (__this->fields)._elements;
      in_stack_ffffffffffffff48 = 0;
      method_00 = (MethodInfo *)0x0;
      pUVar12 = UI_ElementFactory__CreateToggleSetting
                          ((__this->fields).DoublePanelLeft,__this_05,
                           (Settings_BaseSetting_o *)
                           (((System_Collections_Generic_List_Enumerator_T__c *)unaff_RBX)->_2).typeHierarchy,
                           "Loop schedule","",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (MethodInfo *)0x0);
      lVar13 = MethodInfo_Void_Add;
      if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_044404f1;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar7 = (pSVar4->fields)._items;
      if (pUVar7 == (UnityEngine_GameObject_array *)0x0) goto label_044404f1;
      uVar3 = (pSVar4->fields)._size;
      if (uVar3 < (uint)pUVar7->max_length) {
        (pSVar4->fields)._size = uVar3 + 1;
        pUVar7->m_Items[(int)uVar3] = pUVar12;
        il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      pUVar12 = UI_ElementFactory__CreateHorizontalGroup
                          ((__this->fields).DoublePanelLeft,10.0,0,(MethodInfo *)0x0);
      lVar13 = MethodInfo_Void_Add;
      pSVar4 = (__this->fields)._elements;
      if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_044404f1;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar7 = (pSVar4->fields)._items;
      if (pUVar7 == (UnityEngine_GameObject_array *)0x0) goto label_044404f1;
      uVar3 = (pSVar4->fields)._size;
      if (uVar3 < (uint)pUVar7->max_length) {
        (pSVar4->fields)._size = uVar3 + 1;
        pUVar7->m_Items[(int)uVar3] = pUVar12;
        il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      lVar13 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
      if (lVar13 == 0) goto label_044404f1;
      if (*(int *)(lVar13 + 0x18) != 0) {
        unaff_R14 = (long *)(lVar13 + 0x20);
        *(undefined8 *)(lVar13 + 0x20) = "Import";
        auStack_78._32_8_ = unaff_RBX;
        il2cpp_runtime_helper_022b4080(unaff_R14);
        lStack_88 = lVar13;
        if (1 < *(uint *)(lVar13 + 0x18)) {
          *(undefined8 *)(lVar13 + 0x28) = "Export";
          il2cpp_runtime_helper_022b4080(lVar13 + 0x28);
          if (0 < *(int *)(lVar13 + 0x18)) {
            if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_044404d0;
            uVar15 = 0;
            do {
              unaff_R14 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
              System_Object___ctor((Il2CppObject *)unaff_R14,(MethodInfo *)0x0);
              if ((UI_Vector3Popup_o *)unaff_R14 == (UI_Vector3Popup_o *)0x0) goto label_044404f1;
              (((UI_Vector3Popup_o *)unaff_R14)->fields).m_CancellationTokenSource =
                   (System_Threading_CancellationTokenSource_o *)__this;
              il2cpp_runtime_helper_022b4080(&(((UI_Vector3Popup_o *)unaff_R14)->fields).m_CancellationTokenSource,__this)
              ;
              if (*(uint *)(lVar13 + 0x18) <= uVar15) goto label_04440511;
              (((UI_Vector3Popup_o *)unaff_R14)->fields).m_CachedPtr =
                   *(intptr_t *)(lVar13 + 0x20 + uVar15 * 8);
              il2cpp_runtime_helper_022b4080(&((UI_Vector3Popup_o *)unaff_R14)->fields);
              parent = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
              pSVar11 = (System_String_o *)(((UI_Vector3Popup_o *)unaff_R14)->fields).m_CachedPtr;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ae727 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                il2cpp_runtime_helper_023445d0(&"Common");
                il2cpp_runtime_helper_023445d0(&"");
                g_data_057ae727 = '\x01';
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              unaff_RBX = (long *)UI_UIManager__GetLocale
                                            ("Common",pSVar11,"","","",
                                             method_00);
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              UI_ElementFactory__CreateDefaultButton
                        (parent,__this_05,(System_String_o *)unaff_RBX,0.0,0.0,onClick,(MethodInfo *)0x0);
              uVar15 = uVar15 + 1;
            } while ((long)uVar15 < (long)*(int *)(lVar13 + 0x18));
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar9 = auStack_78._32_8_;
          lVar13 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar13 != 0) {
            unaff_R14 = *(long **)(lVar13 + 0x60);
            unaff_RBX = (long *)(__this->fields).DoublePanelRight;
            setting = *(Il2CppRGCTXData **)&(((Il2CppClass_1 *)auStack_78._32_8_)->this_arg).bits;
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            options = Utility_Util__EnumToStringArray_Int32Enum_(MethodInfo_String_EnumToStringArray_WeatherSkybox);
            in_stack_ffffffffffffff48 = 0;
            in_stack_ffffffffffffff50 = 0;
            in_stack_ffffffffffffff58 = (Il2CppObject *)0x0;
            pUVar12 = UI_ElementFactory__CreateDropdownSetting
                                ((UnityEngine_Transform_o *)unaff_RBX,__this_05,
                                 (Settings_BaseSetting_o *)setting,"Skybox",options,"",140.0,
                                 40.0,300.0,(System_Nullable_float__o)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
            if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_06 = (UI_DropdownSettingElement_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_DropdownSettingElement_GetComponent_DropdownSettingEleme),
               unaff_RBX = (long *)auStack_78._40_8_, __this_06 != (UI_DropdownSettingElement_o *)0x0)) {
              UI_DropdownSettingElement__FixScale(__this_06,(MethodInfo *)0x0);
              lVar13 = MethodInfo_Void_Add;
              pSVar4 = (__this->fields)._elements;
              if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                piVar1 = &(pSVar4->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar7 = (pSVar4->fields)._items;
                if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                  uVar3 = (pSVar4->fields)._size;
                  if (uVar3 < (uint)pUVar7->max_length) {
                    (pSVar4->fields)._size = uVar3 + 1;
                    pUVar7->m_Items[(int)uVar3] = pUVar12;
                    il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar4 = (__this->fields)._elements;
                  in_stack_ffffffffffffff48 = 0;
                  in_stack_ffffffffffffff50 = 0;
                  pUVar12 = UI_ElementFactory__CreateColorSetting
                                      ((__this->fields).DoublePanelRight,__this_05,
                                       ((_union_249689 *)&((Il2CppClass_1 *)uVar9)->element_class)->
                                       genericMethod,"Skybox color",(UI_ColorPickPopup_o *)unaff_RBX,
                                       "",90.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                       (MethodInfo *)0x0);
                  lVar13 = MethodInfo_Void_Add;
                  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar7 = (pSVar4->fields)._items;
                    if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                      uVar3 = (pSVar4->fields)._size;
                      if (uVar3 < (uint)pUVar7->max_length) {
                        (pSVar4->fields)._size = uVar3 + 1;
                        pUVar7->m_Items[(int)uVar3] = pUVar12;
                        il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12
                                   ,*(MethodInfo_362C220 **)
                                     (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      pSVar4 = (__this->fields)._elements;
                      in_stack_ffffffffffffff48 = 0;
                      in_stack_ffffffffffffff50 = 0;
                      pUVar12 = UI_ElementFactory__CreateColorSetting
                                          ((__this->fields).DoublePanelRight,__this_05,
                                           (Settings_BaseSetting_o *)((Il2CppClass_1 *)uVar9)->castClass,
                                           "Daylight",(UI_ColorPickPopup_o *)unaff_RBX,"",90.0,
                                           30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                      lVar13 = MethodInfo_Void_Add;
                      if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                        piVar1 = &(pSVar4->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar7 = (pSVar4->fields)._items;
                        if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                          uVar3 = (pSVar4->fields)._size;
                          if (uVar3 < (uint)pUVar7->max_length) {
                            (pSVar4->fields)._size = uVar3 + 1;
                            pUVar7->m_Items[(int)uVar3] = pUVar12;
                            il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                       (Il2CppObject *)pUVar12,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar4 = (__this->fields)._elements;
                          in_stack_ffffffffffffff48 = 0;
                          pUVar12 = UI_ElementFactory__CreateSliderSetting
                                              ((__this->fields).DoublePanelRight,__this_05,
                                               (Settings_BaseSetting_o *)
                                               ((Il2CppClass_1 *)uVar9)->declaringType,"Daylight intensity",
                                               "",150.0,16.0,2,(MethodInfo *)0x0);
                          lVar13 = MethodInfo_Void_Add;
                          if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                            piVar1 = &(pSVar4->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar7 = (pSVar4->fields)._items;
                            if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                              uVar3 = (pSVar4->fields)._size;
                              if (uVar3 < (uint)pUVar7->max_length) {
                                (pSVar4->fields)._size = uVar3 + 1;
                                pUVar7->m_Items[(int)uVar3] = pUVar12;
                                il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar4,
                                           (Il2CppObject *)pUVar12,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                              }
                              pSVar4 = (__this->fields)._elements;
                              in_stack_ffffffffffffff48 = 0;
                              in_stack_ffffffffffffff50 = 0;
                              pUVar12 = UI_ElementFactory__CreateVector3Setting
                                                  ((__this->fields).DoublePanelRight,__this_05,
                                                   (Settings_BaseSetting_o *)((Il2CppClass_1 *)uVar9)->parent,
                                                   "Daylight direction",(UI_Vector3Popup_o *)unaff_R14,"",
                                                   90.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                   (MethodInfo *)0x0);
                              lVar13 = MethodInfo_Void_Add;
                              if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                                piVar1 = &(pSVar4->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pUVar7 = (pSVar4->fields)._items;
                                if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                  uVar3 = (pSVar4->fields)._size;
                                  if (uVar3 < (uint)pUVar7->max_length) {
                                    (pSVar4->fields)._size = uVar3 + 1;
                                    pUVar7->m_Items[(int)uVar3] = pUVar12;
                                    il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar4,
                                               (Il2CppObject *)pUVar12,
                                               *(MethodInfo_362C220 **)
                                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                                  }
                                  pSVar4 = (__this->fields)._elements;
                                  in_stack_ffffffffffffff48 = 0;
                                  in_stack_ffffffffffffff50 = 0;
                                  pUVar12 = UI_ElementFactory__CreateColorSetting
                                                      ((__this->fields).DoublePanelRight,__this_05,
                                                       (Settings_BaseSetting_o *)
                                                       ((Il2CppClass_1 *)uVar9)->generic_class,"Ambient light",
                                                       (UI_ColorPickPopup_o *)unaff_RBX,"",90.0,30.0
                                                       ,(UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                  lVar13 = MethodInfo_Void_Add;
                                  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                                    piVar1 = &(pSVar4->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar7 = (pSVar4->fields)._items;
                                    if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                      uVar3 = (pSVar4->fields)._size;
                                      if (uVar3 < (uint)pUVar7->max_length) {
                                        (pSVar4->fields)._size = uVar3 + 1;
                                        pUVar7->m_Items[(int)uVar3] = pUVar12;
                                        il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pSVar4,
                                                   (Il2CppObject *)pUVar12,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                                      }
                                      pSVar4 = (__this->fields)._elements;
                                      in_stack_ffffffffffffff48 = 0;
                                      in_stack_ffffffffffffff50 = 0;
                                      pUVar12 = UI_ElementFactory__CreateColorSetting
                                                          ((__this->fields).DoublePanelRight,__this_05,
                                                           (Settings_BaseSetting_o *)
                                                           ((Il2CppClass_1 *)uVar9)->typeMetadataHandle,
                                                           "Flashlight",(UI_ColorPickPopup_o *)unaff_RBX,
                                                           "",90.0,30.0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (MethodInfo *)0x0);
                                      lVar13 = MethodInfo_Void_Add;
                                      if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                                        piVar1 = &(pSVar4->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar7 = (pSVar4->fields)._items;
                                        if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                          uVar3 = (pSVar4->fields)._size;
                                          if (uVar3 < (uint)pUVar7->max_length) {
                                            (pSVar4->fields)._size = uVar3 + 1;
                                            pUVar7->m_Items[(int)uVar3] = pUVar12;
                                            il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                                       (Il2CppObject *)pUVar12,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                                          }
                                          pSVar4 = (__this->fields)._elements;
                                          in_stack_ffffffffffffff48 = 0;
                                          in_stack_ffffffffffffff50 = 0;
                                          pUVar12 = UI_ElementFactory__CreateColorSetting
                                                              ((__this->fields).DoublePanelRight,__this_05,
                                                               (Settings_BaseSetting_o *)
                                                               ((Il2CppClass_1 *)uVar9)->klass,"Fog color",
                                                               (UI_ColorPickPopup_o *)unaff_RBX,"",
                                                               90.0,30.0,
                                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                                               (MethodInfo *)0x0);
                                          lVar13 = MethodInfo_Void_Add;
                                          if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0)
                                          {
                                            piVar1 = &(pSVar4->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar7 = (pSVar4->fields)._items;
                                            if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                              uVar3 = (pSVar4->fields)._size;
                                              if (uVar3 < (uint)pUVar7->max_length) {
                                                (pSVar4->fields)._size = uVar3 + 1;
                                                pUVar7->m_Items[(int)uVar3] = pUVar12;
                                                il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)pSVar4
                                                           ,(Il2CppObject *)pUVar12,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70
                                                            ));
                                              }
                                              pSVar4 = (__this->fields)._elements;
                                              in_stack_ffffffffffffff48 = 0;
                                              pUVar12 = UI_ElementFactory__CreateSliderInputSetting
                                                                  ((__this->fields).DoublePanelRight,__this_05
                                                                   ,(Settings_BaseSetting_o *)
                                                                    ((Il2CppClass_1 *)uVar9)->interopData,
                                                                   "Fog density","",130.0,16.0,70.0,
                                                                   40.0,3,(MethodInfo *)0x0);
                                              lVar13 = MethodInfo_Void_Add;
                                              if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)
                                                            0x0) {
                                                piVar1 = &(pSVar4->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar7 = (pSVar4->fields)._items;
                                                if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                                  uVar3 = (pSVar4->fields)._size;
                                                  if (uVar3 < (uint)pUVar7->max_length) {
                                                    (pSVar4->fields)._size = uVar3 + 1;
                                                    pUVar7->m_Items[(int)uVar3] = pUVar12;
                                                    il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,pUVar12);
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               pSVar4,(Il2CppObject *)pUVar12,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                                0x70));
                                                  }
                                                  pSVar4 = (__this->fields)._elements;
                                                  in_stack_ffffffffffffff48 = 0;
                                                  pUVar12 = UI_ElementFactory__CreateSliderSetting
                                                                      ((__this->fields).DoublePanelRight,
                                                                       __this_05,
                                                                       ((Il2CppClass_1 *)uVar9)->fields,
                                                                       "Rain","",150.0,16.0,2,
                                                                       (MethodInfo *)0x0);
                                                  lVar13 = MethodInfo_Void_Add;
                                                  if (pSVar4 != (System_Collections_Generic_List_GameObject__o
                                                                 *)0x0) {
                                                    piVar1 = &(pSVar4->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar7 = (pSVar4->fields)._items;
                                                    if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                                      uVar3 = (pSVar4->fields)._size;
                                                      if (uVar3 < (uint)pUVar7->max_length) {
                                                        (pSVar4->fields)._size = uVar3 + 1;
                                                        pUVar7->m_Items[(int)uVar3] = pUVar12;
                                                        il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,
                                                                           pUVar12);
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)pSVar4,(Il2CppObject *)pUVar12,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                              ) + 0x70));
                                                      }
                                                      pSVar4 = (__this->fields)._elements;
                                                      in_stack_ffffffffffffff48 = 0;
                                                      pUVar12 = UI_ElementFactory__CreateSliderSetting
                                                                          ((__this->fields).DoublePanelRight,
                                                                           __this_05,
                                                                           (Settings_BaseSetting_o *)
                                                                           ((Il2CppClass_1 *)uVar9)->events,
                                                                           "Thunder","",150.0,
                                                                           16.0,2,(MethodInfo *)0x0);
                                                      lVar13 = MethodInfo_Void_Add;
                                                      if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                        piVar1 = &(pSVar4->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pUVar7 = (pSVar4->fields)._items;
                                                        if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                                          uVar3 = (pSVar4->fields)._size;
                                                          if (uVar3 < (uint)pUVar7->max_length) {
                                                            (pSVar4->fields)._size = uVar3 + 1;
                                                            pUVar7->m_Items[(int)uVar3] = pUVar12;
                                                            il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,
                                                                               pUVar12);
                                                          }
                                                          else {
                                                                                                                        
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar12,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pSVar4 = (__this->fields)._elements;
                                                       in_stack_ffffffffffffff48 = 0;
                                                       pUVar12 = UI_ElementFactory__CreateSliderSetting
                                                                           ((__this->fields).DoublePanelRight,
                                                                            __this_05,
                                                                            ((Il2CppClass_1 *)uVar9)->
                                                                            properties,"Snow",
                                                                            "",150.0,16.0,2,
                                                                            (MethodInfo *)0x0);
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar7 = (pSVar4->fields)._items;
                                                         if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar7->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar7->m_Items[(int)uVar3] = pUVar12;
                                                             il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,
                                                                                pUVar12);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar12,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pSVar4 = (__this->fields)._elements;
                                                       in_stack_ffffffffffffff48 = 0;
                                                       pUVar12 = UI_ElementFactory__CreateSliderSetting
                                                                           ((__this->fields).DoublePanelRight,
                                                                            __this_05,
                                                                            (Settings_BaseSetting_o *)
                                                                            ((Il2CppClass_1 *)uVar9)->methods,
                                                                            "Wind","",150.0,
                                                                            16.0,2,(MethodInfo *)0x0);
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar7 = (pSVar4->fields)._items;
                                                         if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar7->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar7->m_Items[(int)uVar3] = pUVar12;
                                                             il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,
                                                                                pUVar12);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar12,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pSVar4 = (__this->fields)._elements;
                                                       in_stack_ffffffffffffff48 = 0;
                                                       in_stack_ffffffffffffff50 = 0;
                                                       pUVar12 = UI_ElementFactory__CreateVector3Setting
                                                                           ((__this->fields).DoublePanelRight,
                                                                            __this_05,
                                                                            (Settings_BaseSetting_o *)
                                                                            ((Il2CppClass_1 *)uVar9)->
                                                                            nestedTypes,"Wind direction",
                                                                            (UI_Vector3Popup_o *)unaff_R14,
                                                                            "",90.0,30.0,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(MethodInfo *)0x0);
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar7 = (pSVar4->fields)._items;
                                                         if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar7->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar7->m_Items[(int)uVar3] = pUVar12;
                                                             il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar3,
                                                                                pUVar12);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar12,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       unaff_RBX = (long *)(__this->fields)._elements;
                                                       in_stack_ffffffffffffff58 = (Il2CppObject *)0x0;
                                                       in_stack_ffffffffffffff48 = 0;
                                                       in_stack_ffffffffffffff50 = 0;
                                                       pUVar12 = UI_ElementFactory__CreateInputSetting
                                                                           ((__this->fields).DoublePanelRight,
                                                                            __this_05,
                                                                            (Settings_BaseSetting_o *)
                                                                            ((Il2CppClass_1 *)uVar9)->
                                                                            implementedInterfaces,"Rain force"
                                                                            ,"",140.0,40.0,0,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if ((System_Collections_Generic_List_Enumerator_T__c *)
                                                           unaff_RBX !=
                                                           (System_Collections_Generic_List_Enumerator_T__c *)
                                                           0x0) {
                                                         piVar2 = (int *)((long)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze + 4);
                                                       *piVar2 = *piVar2 + 1;
                                                       pIVar8 = (InvokerMethod)
                                                                ((UI_ColorPickPopup_Fields *)
                                                                &(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).name)->m_CachedPtr;
                                                       if (pIVar8 != (InvokerMethod)0x0) {
                                                         uVar3 = *(uint *)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze;
                                                       if (uVar3 < *(uint *)(pIVar8 + 0x18)) {
                                                         *(uint *)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze = uVar3 + 1;
                                                       *(UnityEngine_GameObject_o **)
                                                        (pIVar8 + (long)(int)uVar3 * 8 + 0x20) = pUVar12;
                                                       il2cpp_runtime_helper_022b4080(pIVar8 + (long)(int)uVar3 * 8 + 0x20
                                                                          ,pUVar12);
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )unaff_RBX,(Il2CppObject *)pUVar12,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       unaff_RBX = (long *)(__this->fields)._elements;
                                                       in_stack_ffffffffffffff58 = (Il2CppObject *)0x0;
                                                       in_stack_ffffffffffffff48 = 0;
                                                       in_stack_ffffffffffffff50 = 0;
                                                       pUVar12 = UI_ElementFactory__CreateInputSetting
                                                                           ((__this->fields).DoublePanelRight,
                                                                            __this_05,
                                                                            (Settings_BaseSetting_o *)
                                                                            ((Il2CppClass_1 *)uVar9)->
                                                                            interfaceOffsets,"Snow force",
                                                                            "",140.0,40.0,0,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if ((System_Collections_Generic_List_Enumerator_T__c *)
                                                           unaff_RBX !=
                                                           (System_Collections_Generic_List_Enumerator_T__c *)
                                                           0x0) {
                                                         piVar2 = (int *)((long)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze + 4);
                                                       *piVar2 = *piVar2 + 1;
                                                       pIVar8 = (InvokerMethod)
                                                                ((UI_ColorPickPopup_Fields *)
                                                                &(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).name)->m_CachedPtr;
                                                       if (pIVar8 != (InvokerMethod)0x0) {
                                                         uVar3 = *(uint *)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze;
                                                       if (uVar3 < *(uint *)(pIVar8 + 0x18)) {
                                                         *(uint *)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze = uVar3 + 1;
                                                       *(UnityEngine_GameObject_o **)
                                                        (pIVar8 + (long)(int)uVar3 * 8 + 0x20) = pUVar12;
                                                       il2cpp_runtime_helper_022b4080(pIVar8 + (long)(int)uVar3 * 8 + 0x20
                                                                          ,pUVar12);
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )unaff_RBX,(Il2CppObject *)pUVar12,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       unaff_RBX = (long *)(__this->fields)._elements;
                                                       in_stack_ffffffffffffff58 = (Il2CppObject *)0x0;
                                                       in_stack_ffffffffffffff48 = 0;
                                                       in_stack_ffffffffffffff50 = 0;
                                                       pUVar12 = UI_ElementFactory__CreateInputSetting
                                                                           ((__this->fields).DoublePanelRight,
                                                                            __this_05,
                                                                            (Settings_BaseSetting_o *)
                                                                            *(UnityEngine_UI_Image_o **)
                                                                             (uVar9 + 0xb8),"Wind force",
                                                                            "",140.0,40.0,0,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if ((System_Collections_Generic_List_Enumerator_T__c *)
                                                           unaff_RBX !=
                                                           (System_Collections_Generic_List_Enumerator_T__c *)
                                                           0x0) {
                                                         piVar2 = (int *)((long)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze + 4);
                                                       *piVar2 = *piVar2 + 1;
                                                       pIVar8 = (InvokerMethod)
                                                                ((UI_ColorPickPopup_Fields *)
                                                                &(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).name)->m_CachedPtr;
                                                       if (pIVar8 != (InvokerMethod)0x0) {
                                                         uVar3 = *(uint *)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze;
                                                       if (uVar3 < *(uint *)(pIVar8 + 0x18)) {
                                                         *(uint *)&(((
                                                       System_Collections_Generic_List_Enumerator_T__c *)
                                                       unaff_RBX)->_1).namespaze = uVar3 + 1;
                                                       *(UnityEngine_GameObject_o **)
                                                        (pIVar8 + (long)(int)uVar3 * 8 + 0x20) = pUVar12;
                                                       il2cpp_runtime_helper_022b4080(pIVar8 + (long)(int)uVar3 * 8 + 0x20
                                                                          ,pUVar12);
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )unaff_RBX,(Il2CppObject *)pUVar12,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
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
          goto label_044404f1;
        }
      }
label_04440511:
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      if ((*(byte *)(TypeInfo_MapEditorGameManager + 0x130) <= *(byte *)(*plVar14 + 0x130)) &&
         (*(long *)(*(long *)(*plVar14 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorGameManager + 0x130) * 8) ==
          TypeInfo_MapEditorGameManager)) goto label_0443f392;
      il2cpp_runtime_helper_022b2fd0(plVar14);
label_044404d0:
      unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
      System_Object___ctor((Il2CppObject *)unaff_RBX,(MethodInfo *)0x0);
      if ((System_Collections_Generic_List_Enumerator_T__c *)unaff_RBX ==
          (System_Collections_Generic_List_Enumerator_T__c *)0x0) goto label_044404f1;
label_044404f6:
      (((System_Collections_Generic_List_Enumerator_T__c *)unaff_RBX)->_1).namespaze = (char *)__this;
      il2cpp_runtime_helper_022b4080(&(((System_Collections_Generic_List_Enumerator_T__c *)unaff_RBX)->_1).namespaze,
                         __this);
      if (*(int *)(lStack_88 + 0x18) == 0) goto label_04440511;
    }
    ((UI_ColorPickPopup_Fields *)&(((System_Collections_Generic_List_Enumerator_T__c *)unaff_RBX)->_1).name)->
    m_CachedPtr = (intptr_t)((UI_Vector3Popup_o *)unaff_R14)->klass;
    il2cpp_runtime_helper_022b4080((UI_ColorPickPopup_Fields *)
                       &(((System_Collections_Generic_List_Enumerator_T__c *)unaff_RBX)->_1).name);
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) goto label_04440575;
    plVar14 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar13 = *plVar14;
    __cxa_end_catch();
    __this_03.fields._index = (int)in_stack_ffffffffffffff50;
    __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_03.fields._current = in_stack_ffffffffffffff58;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)auStack_78);
    unaff_R14 = (long *)0x0;
  } while (lVar13 == 0);
  il2cpp_runtime_helper_022fefe0(lVar13);
label_04440575:
  __this_04.fields._index = (int)in_stack_ffffffffffffff50;
  __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
  __this_04.fields._current = in_stack_ffffffffffffff58;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_78);
  _Unwind_Resume(auVar16._0_8_);
}


// UI.MapEditorWeatherPopup$$OnWeatherButtonClick
// il2cpp: void UI_MapEditorWeatherPopup__OnWeatherButtonClick (UI_MapEditorWeatherPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44405c0

void UI_MapEditorWeatherPopup__OnWeatherButtonClick
               (UI_MapEditorWeatherPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  long lVar3;
  Settings_BoolSetting_o *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  Il2CppObject *__this_00;
  UnityEngine_Events_UnityAction_o *onSave;
  long *plVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  UI_ExportPopup_o *__this_01;
  UI_ImportPopup_o *__this_02;
  
  if (g_data_057ae6da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherButtonClick_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnWeatherButtonClick_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"ExportSchedule");
    il2cpp_runtime_helper_023445d0(&"ImportSchedule");
    il2cpp_runtime_helper_023445d0(&"Import");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Export");
    g_data_057ae6da = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
    __this_00[1].monitor = name;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
    pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    name = pSVar9;
    if (pSVar9 != (System_String_o *)0x0) {
      bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
      if (((pSVar9->klass->_2).naturalAligment < bVar1) ||
         ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorGameManager)) goto label_04440b61;
      if (pSVar9[1].fields != (System_String_Fields)0x0) {
        plVar7 = *(long **)((long)pSVar9[1].fields + 0x38);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (*(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28) != 0) {
          pSVar2 = __this_00[1].monitor;
          bVar6 = System_String__op_Equality(pSVar2,"Import",(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            bVar6 = System_String__op_Equality(pSVar2,"Export",(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              bVar6 = System_String__op_Equality(pSVar2,"ImportSchedule",(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                bVar6 = System_String__op_Equality(pSVar2,"ExportSchedule",(MethodInfo *)0x0);
                if ((char)bVar6 == '\0') {
                  bVar6 = System_String__op_Equality(pSVar2,"Save",(MethodInfo *)0x0);
                  if ((char)bVar6 == '\0') {
                    return;
                  }
                  if (((pSVar9[1].fields != (System_String_Fields)0x0) &&
                      (pSVar4 = (__this->fields)._hasWeather, pSVar4 != (Settings_BoolSetting_o *)0x0)) &&
                     (lVar3 = *(long *)((long)pSVar9[1].fields + 0x20), lVar3 != 0)) {
                    *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)((long)&(pSVar4->fields).DefaultValue + 1);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if (pSVar2 != (System_String_o *)0x0) {
                      bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
                      name = pSVar2;
                      if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
                         ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorMenu))
                      goto label_04440b61;
                      name = pSVar9;
                      if (pSVar2[7].monitor != (UI_MapEditorTopPanel_o *)0x0) {
                        UI_MapEditorTopPanel__Save(pSVar2[7].monitor,(MethodInfo *)0x0);
                        (*(__this->klass->vtable)._22_Hide.methodPtr)
                                  (__this,(__this->klass->vtable)._22_Hide.method);
                        return;
                      }
                    }
                  }
                }
                else {
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (((lVar3 != 0) && (plVar7 != (long *)0x0)) &&
                     ((plVar7[0x1a] != 0 &&
                      (__this_01 = *(UI_ExportPopup_o **)(lVar3 + 0x68), __this_01 != (UI_ExportPopup_o *)0x0)
                      ))) {
                    pSVar9 = *(System_String_o **)(plVar7[0x1a] + 0x18);
                    goto label_044409e6;
                  }
                }
              }
              else {
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                if (lVar3 != 0) {
                  __this_02 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
                  onSave = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  goto label_04440809;
                }
              }
            }
            else if ((plVar7 != (long *)0x0) &&
                    (plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7), plVar7 != (long *)0x0)) {
              cVar5 = (**(code **)(*plVar7 + 0x2f8))(plVar7,"Preset",*(undefined8 *)(*plVar7 + 0x300));
              if (cVar5 == '\0') {
                if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_044409a7;
label_04440909:
                il2cpp_runtime_helper_02337ed0();
                lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              else {
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450(0,(MethodInfo *)0x0);
                (**(code **)(*plVar7 + 0x1b8))(plVar7,"Preset",pSVar8,*(undefined8 *)(*plVar7 + 0x1c0));
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04440909;
label_044409a7:
                lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              if (lVar3 != 0) {
                __this_01 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
                pSVar9 = (System_String_o *)
                         (**(code **)(*plVar7 + 0x318))(plVar7,4,*(undefined8 *)(*plVar7 + 800));
                if (__this_01 != (UI_ExportPopup_o *)0x0) {
label_044409e6:
                  UI_ExportPopup__Show(__this_01,pSVar9,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar3 != 0) {
              __this_02 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
              onSave = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
label_04440809:
              UnityEngine_Events_UnityAction___ctor();
              if (__this_02 != (UI_ImportPopup_o *)0x0) {
                UI_ImportPopup__Show(__this_02,onSave,1,"",(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04440b61:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)name,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup$$OnWeatherSetOperationFinish
// il2cpp: void UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish (UI_MapEditorWeatherPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4440b80

void UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish
               (UI_MapEditorWeatherPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long lVar1;
  Settings_StringSetting_o *pSVar2;
  Il2CppObject *value;
  char cVar3;
  bool_conflict bVar4;
  Weather_WeatherSchedule_o *__this_00;
  long *plVar5;
  System_String_o *a;
  long *plVar6;
  UI_ImportPopup_o *unaff_R15;
  undefined1 auVar7 [12];
  
  if (g_data_057ae6db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSchedule);
    il2cpp_runtime_helper_023445d0(&"ImportSchedule");
    il2cpp_runtime_helper_023445d0(&"Import");
    g_data_057ae6db = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04440c51;
label_04440bae:
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04440bae;
label_04440c51:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  plVar5 = &TypeInfo_UIManager;
  if (lVar1 != 0) {
    plVar5 = &TypeInfo_UIManager;
    plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TypeInfo_MapEditorGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorGameManager + 0x130) * 8) !=
          TypeInfo_MapEditorGameManager)) {
        il2cpp_runtime_helper_022b2fd0();
label_04440ea2:
        il2cpp_runtime_helper_022b2c90();
label_04440ea7:
        il2cpp_runtime_helper_022b2c90();
label_04440eac:
        il2cpp_runtime_helper_022b2c90();
label_04440eb1:
        il2cpp_runtime_helper_022b2c90();
label_04440eb6:
        il2cpp_runtime_helper_022b2c90();
label_04440ebb:
        auVar7 = il2cpp_runtime_helper_022b2c90();
        if (auVar7._8_4_ != 1) {
          _Unwind_Resume(auVar7._0_8_);
        }
        plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
        cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*plVar5);
        if (cVar3 == '\0') goto label_04440f6b;
        __cxa_end_catch();
        if (unaff_R15 != (UI_ImportPopup_o *)0x0) {
          a = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid weather preset.");
label_04440e24:
          UI_ImportPopup__ShowError(unaff_R15,a,(MethodInfo *)0x0);
label_04440e7c:
          (*(__this->klass->vtable)._21_Show.methodPtr)(__this,(__this->klass->vtable)._21_Show.method);
          return;
        }
      }
      else if (plVar6[5] != 0) {
        unaff_R15 = *(UI_ImportPopup_o **)(lVar1 + 0x70);
        plVar5 = *(long **)(plVar6[5] + 0x38);
        bVar4 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (plVar5 == (long *)0x0) goto label_04440ea2;
          if (plVar5[4] == 0) goto label_04440ea7;
          if (unaff_R15 == (UI_ImportPopup_o *)0x0) goto label_04440eac;
          pSVar2 = (unaff_R15->fields).ImportSetting;
          if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_04440eb1;
          value = *(Il2CppObject **)(plVar5[4] + 0x18);
          (**(code **)(*plVar5 + 0x1b8))(plVar5,(pSVar2->fields)._value,*(undefined8 *)(*plVar5 + 0x1c0));
          if ((Settings_TypedSetting_bool__o *)plVar5[5] == (Settings_TypedSetting_bool__o *)0x0)
          goto label_04440eb6;
          Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)plVar5[5],0,MethodInfo_Void_set_Value);
          if ((Settings_TypedSetting_T__o *)plVar5[4] != (Settings_TypedSetting_T__o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)plVar5[4],value,MethodInfo_Void_set_Value);
            (*(unaff_R15->klass->vtable)._22_Hide.methodPtr)
                      (unaff_R15,(unaff_R15->klass->vtable)._22_Hide.method);
            goto label_04440e7c;
          }
          goto label_04440ebb;
        }
        bVar4 = System_String__op_Equality(name,"ImportSchedule",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') goto label_04440e7c;
        __this_00 = (Weather_WeatherSchedule_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSchedule);
        Weather_WeatherSchedule___ctor(__this_00,(MethodInfo *)0x0);
        if (((unaff_R15 != (UI_ImportPopup_o *)0x0) &&
            (pSVar2 = (unaff_R15->fields).ImportSetting, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
           (__this_00 != (Weather_WeatherSchedule_o *)0x0)) {
          a = Weather_WeatherSchedule__DeserializeFromCSV(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0)
          ;
          bVar4 = System_String__op_Inequality
                            (a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') goto label_04440e24;
          if (((plVar5 != (long *)0x0) &&
              (pSVar2 = (unaff_R15->fields).ImportSetting, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
             ((Settings_TypedSetting_T__o *)plVar5[0x1a] != (Settings_TypedSetting_T__o *)0x0)) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)plVar5[0x1a],(Il2CppObject *)(pSVar2->fields)._value,
                       MethodInfo_Void_set_Value);
            (*(unaff_R15->klass->vtable)._22_Hide.methodPtr)
                      (unaff_R15,(unaff_R15->klass->vtable)._22_Hide.method);
            goto label_04440e7c;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04440f6b:
  plVar6 = (long *)__cxa_allocate_exception(8);
  *plVar6 = *plVar5;
  __cxa_throw(plVar6,&PTR_PTR_05215060,0);
}


// UI.MapEditorWeatherPopup$$.ctor
// il2cpp: void UI_MapEditorWeatherPopup___ctor (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x4440fb0

void UI_MapEditorWeatherPopup___ctor(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  System_Collections_Generic_List_GameObject__o *__this_01;
  
  if (g_data_057ae6dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae6dc = '\x01';
  }
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(__this_00,0,(MethodInfo *)0x0);
  (__this->fields)._hasWeather = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hasWeather,__this_00);
  __this_01 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._elements = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._elements);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup$$<Setup>b__15_0
// il2cpp: void UI_MapEditorWeatherPopup___Setup_b__15_0 (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x4441070

void UI_MapEditorWeatherPopup___Setup_b__15_0(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae6dd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6dd = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorWeatherPopup__OnWeatherButtonClick(__this,"Save",in_RDX);
  return;
}


