// Type: UI.MapEditorTopPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorTopPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorTopPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorTopPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorTopPanel___c___cctor (const MethodInfo* method);
// 0x4129550

void UI_MapEditorTopPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704933 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704933 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.MapEditorTopPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorTopPanel___c___ctor (UI_MapEditorTopPanel___c_o* __this, const MethodInfo* method);
// 0x41295c0

void UI_MapEditorTopPanel_<>c___ctor(UI_MapEditorTopPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel.<>c$$<OnFileClick>b__30_8
// il2cpp: System_String_o* UI_MapEditorTopPanel___c___OnFileClick_b__30_8 (UI_MapEditorTopPanel___c_o* __this, System_String_o* c, const MethodInfo* method);
// 0x41295d0

System_String_o *
UI_MapEditorTopPanel_<>c__<OnFileClick>b__30_8
          (UI_MapEditorTopPanel___c_o *__this,System_String_o *c,MethodInfo *method)

{
  return c;
}


// UI.MapEditorTopPanel.<>c$$<Autosave>b__32_0
// il2cpp: System_DateTime_o UI_MapEditorTopPanel___c___Autosave_b__32_0 (UI_MapEditorTopPanel___c_o* __this, System_IO_FileInfo_o* x, const MethodInfo* method);
// 0x41295e0

System_DateTime_o
UI_MapEditorTopPanel_<>c__<Autosave>b__32_0
          (UI_MapEditorTopPanel___c_o *__this,System_IO_FileInfo_o *x,MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if (x != (System_IO_FileInfo_o *)0x0) {
    SVar1 = System_IO_FileSystemInfo__get_LastWriteTime
                      ((System_IO_FileSystemInfo_o *)x,(MethodInfo *)0x0);
    return (System_DateTime_o)SVar1.fields._dateData;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$get_Width
// il2cpp: float UI_MapEditorTopPanel__get_Width (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4124f70

float UI_MapEditorTopPanel__get_Width(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 1960.0;
}


// UI.MapEditorTopPanel$$get_Height
// il2cpp: float UI_MapEditorTopPanel__get_Height (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4124f80

float UI_MapEditorTopPanel__get_Height(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 60.0;
}


// UI.MapEditorTopPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorTopPanel__get_TopBarHeight (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4124f90

float UI_MapEditorTopPanel__get_TopBarHeight(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorTopPanel__get_BottomBarHeight (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4124fa0

float UI_MapEditorTopPanel__get_BottomBarHeight(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorTopPanel__get_VerticalSpacing (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4124fb0

float UI_MapEditorTopPanel__get_VerticalSpacing(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorTopPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorTopPanel__get_HorizontalPadding (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4124fc0

int32_t UI_MapEditorTopPanel__get_HorizontalPadding
                  (UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.MapEditorTopPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorTopPanel__get_VerticalPadding (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4124fd0

int32_t UI_MapEditorTopPanel__get_VerticalPadding(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorTopPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_MapEditorTopPanel__get_ThemePanel (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4124fe0

System_String_o *
UI_MapEditorTopPanel__get_ThemePanel(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  if (DAT_05704913 == '\0') {
    il2cpp_init_method_metadata(&"MapEditor");
    DAT_05704913 = '\x01';
  }
  return "MapEditor";
}


// UI.MapEditorTopPanel$$Setup
// il2cpp: void UI_MapEditorTopPanel__Setup (UI_MapEditorTopPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4125010

void UI_MapEditorTopPanel__Setup
               (UI_MapEditorTopPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_StringSetting_o **ppSVar1;
  int32_t *piVar2;
  byte bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_DropdownSelectElement__o *pSVar6;
  UI_DropdownSelectElement_array *pUVar7;
  Settings_IntSetting_o *pSVar8;
  long lVar9;
  System_RuntimeTypeHandle_o handle;
  UnityEngine_Transform_o *pUVar10;
  UI_ElementStyle_o *pUVar11;
  UI_MapEditorTopPanel_o *pUVar12;
  bool_conflict bVar13;
  System_String_o *pSVar14;
  UnityEngine_GameObject_o *pUVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  long lVar17;
  System_String_array *pSVar18;
  UnityEngine_Events_UnityAction_o *pUVar19;
  UI_DropdownSelectElement_o *pUVar20;
  System_Type_o *pSVar21;
  UI_MultiSelectDropdownElement_o *pUVar22;
  System_Type_array *components;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar23;
  Il2CppClass *pIVar24;
  undefined8 uVar25;
  ulong uVar26;
  UI_MapEditorMenu_o *pUVar27;
  System_Nullable_float__Fields SStack_70;
  UnityEngine_Transform_o *pUStack_68;
  UI_ElementStyle_o *pUStack_60;
  Settings_HashSetSetting_int__o *pSStack_58;
  UI_MapEditorTopPanel_o *pUStack_50;
  Settings_IntSetting_o *pSStack_48;
  System_Nullable_float__Fields SStack_40;
  Settings_StringSetting_o **ppSStack_38;
  
  if (DAT_05704914 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_DropdownSelectElement_GetComponent_DropdownSelec);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_MultiSelectDropdownElement_GetComponent_MultiSel);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayerOption);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_10);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_11);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_4);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_5);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_6);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_7);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_8);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28_9);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Weather");
    il2cpp_init_method_metadata(&"Top");
    il2cpp_init_method_metadata(&"TutorialButton");
    il2cpp_init_method_metadata(&"File");
    il2cpp_init_method_metadata(&"Spacer");
    il2cpp_init_method_metadata(&"CustomLogic");
    il2cpp_init_method_metadata(&"LoadAutosave");
    il2cpp_init_method_metadata(&"MapInfo");
    il2cpp_init_method_metadata(&"SaveQuit");
    il2cpp_init_method_metadata(&"Open");
    il2cpp_init_method_metadata(&"MapEditor");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"Editor");
    il2cpp_init_method_metadata(&"Camera");
    il2cpp_init_method_metadata(&"Light");
    il2cpp_init_method_metadata(&"Gizmo: Position");
    il2cpp_init_method_metadata(&"LoadPreset");
    il2cpp_init_method_metadata(&"Keybinds");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"Redo");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"Layers");
    il2cpp_init_method_metadata(&"Edit");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"Paste");
    il2cpp_init_method_metadata(&"CustomAssets");
    il2cpp_init_method_metadata(&"MapEditorSettings");
    il2cpp_init_method_metadata(&"Snap: Off");
    il2cpp_init_method_metadata(&"Undo");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"New");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"Cut");
    il2cpp_init_method_metadata(&"Intro");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Export");
    il2cpp_init_method_metadata(&"Brush: Off");
    il2cpp_init_method_metadata(&"Options");
    il2cpp_init_method_metadata(&"Orientation: Center");
    il2cpp_init_method_metadata(&"AddObject");
    DAT_05704914 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar27 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar27 == (UI_MapEditorMenu_o *)0x0) goto LAB_0412547f;
LAB_04125404:
    pIVar24 = TypeInfo_MapEditorMenu;
    bVar3 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((pUVar27->klass->_2).naturalAligment < bVar3) ||
       ((pUVar27->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_MapEditorMenu)) goto LAB_0412672f;
    (__this->fields)._menu = pUVar27;
    if (((pUVar27->klass->_2).naturalAligment < bVar3) ||
       ((pUVar27->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != pIVar24)) goto LAB_0412672f;
  }
  else {
    pUVar27 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar27 != (UI_MapEditorMenu_o *)0x0) goto LAB_04125404;
LAB_0412547f:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  il2cpp_runtime_glue(&(__this->fields)._menu);
  lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (lVar17 != 0) {
    ppSVar1 = &(__this->fields)._currentMap;
    (__this->fields)._currentMap = *(Settings_StringSetting_o **)(lVar17 + 0x20);
    il2cpp_runtime_glue(ppSVar1);
    pIVar24 = TypeInfo_MapEditorGameManager;
    pUVar27 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    ppSStack_38 = ppSVar1;
    if (pUVar27 == (UI_MapEditorMenu_o *)0x0) {
      (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
    }
    else {
      bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
      if (((pUVar27->klass->_2).naturalAligment < bVar3) ||
         ((pUVar27->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_MapEditorGameManager)) {
LAB_0412672f:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar27,pIVar24);
      }
      (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar27;
      if (((pUVar27->klass->_2).naturalAligment < bVar3) ||
         ((pUVar27->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != pIVar24)) goto LAB_0412672f;
    }
    il2cpp_runtime_glue(&(__this->fields)._gameManager);
    pSStack_58 = "MapEditor";
    pSVar14 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUStack_60 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(pUStack_60,0x18,0.0,20.0,pSVar14,(MethodInfo *)0x0);
    pUVar15 = UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
    if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
      pUStack_68 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
      pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(pSVar16,MethodInfo_List_1_System_String);
      lVar17 = il2cpp_glue_02274930(TypeInfo_string,10);
      if (lVar17 != 0) {
        if (*(int *)(lVar17 + 0x18) != 0) {
          *(undefined8 *)(lVar17 + 0x20) = "New";
          il2cpp_runtime_glue((undefined8 *)(lVar17 + 0x20));
          if (1 < *(uint *)(lVar17 + 0x18)) {
            *(undefined8 *)(lVar17 + 0x28) = "Open";
            il2cpp_runtime_glue(lVar17 + 0x28);
            if (2 < *(uint *)(lVar17 + 0x18)) {
              *(undefined8 *)(lVar17 + 0x30) = "Rename";
              il2cpp_runtime_glue(lVar17 + 0x30);
              if (3 < *(uint *)(lVar17 + 0x18)) {
                *(undefined8 *)(lVar17 + 0x38) = "Save";
                il2cpp_runtime_glue(lVar17 + 0x38);
                if (4 < *(uint *)(lVar17 + 0x18)) {
                  *(undefined8 *)(lVar17 + 0x40) = "Import";
                  il2cpp_runtime_glue(lVar17 + 0x40);
                  if (5 < *(uint *)(lVar17 + 0x18)) {
                    *(undefined8 *)(lVar17 + 0x48) = "Export";
                    il2cpp_runtime_glue(lVar17 + 0x48);
                    if (6 < *(uint *)(lVar17 + 0x18)) {
                      *(undefined8 *)(lVar17 + 0x50) = "LoadPreset";
                      il2cpp_runtime_glue(lVar17 + 0x50);
                      if (7 < *(uint *)(lVar17 + 0x18)) {
                        *(undefined8 *)(lVar17 + 0x58) = "LoadAutosave";
                        il2cpp_runtime_glue(lVar17 + 0x58);
                        if (8 < *(uint *)(lVar17 + 0x18)) {
                          *(undefined8 *)(lVar17 + 0x60) = "Quit";
                          il2cpp_runtime_glue(lVar17 + 0x60);
                          if (9 < *(uint *)(lVar17 + 0x18)) {
                            *(undefined8 *)(lVar17 + 0x68) = "SaveQuit";
                            il2cpp_runtime_glue(lVar17 + 0x68);
                            if ((int)*(ulong *)(lVar17 + 0x18) < 1) {
LAB_0412585f:
                              pSStack_48 = (__this->fields)._dropdownSelection;
                              pUStack_50 = __this;
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              pSVar14 = UI_UIManager__GetLocale
                                                  ((System_String_o *)pSStack_58,"Top",
                                                   "File","","",
                                                   (MethodInfo *)0x0);
                              if (pSVar16 != (System_Collections_Generic_List_object__o *)0x0) {
                                pSVar18 = (System_String_array *)
                                          System_Collections_Generic_List<object>__ToArray
                                                    (pSVar16,MethodInfo_String___ToArray);
                                SStack_70.hasValue = 0;
                                SStack_70.value = 0.0;
                                System_Nullable<float>___ctor
                                          ((System_Nullable_float__o)&SStack_70,180.0,MethodInfo_Nullable_1_Single);
                                pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                          il2cpp_runtime_glue(TypeInfo_UnityAction);
                                pUVar12 = pUStack_50;
                                UnityEngine_Events_UnityAction___ctor();
                                pUVar15 = UI_ElementFactory__CreateDropdownSelect
                                                    (pUStack_68,pUStack_60,
                                                     (Settings_BaseSetting_o *)pSStack_48,pSVar14,
                                                     pSVar18,"",100.0,40.0,500.0,
                                                     (System_Nullable_float__o)SStack_70,pUVar19,
                                                     (MethodInfo *)0x0);
                                if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                  pSVar6 = (pUVar12->fields)._dropdowns;
                                  pUVar20 = (UI_DropdownSelectElement_o *)
                                            UnityEngine_GameObject__GetComponent<object>
                                                      (pUVar15,MethodInfo_DropdownSelectElement_GetComponent_DropdownSelec);
                                  lVar17 = MethodInfo_Void_Add;
                                  if (pSVar6 != (System_Collections_Generic_List_DropdownSelectElement__o
                                                 *)0x0) {
                                    piVar2 = &(pSVar6->fields)._version;
                                    *piVar2 = *piVar2 + 1;
                                    pUVar7 = (pSVar6->fields)._items;
                                    if (pUVar7 != (UI_DropdownSelectElement_array *)0x0) {
                                      uVar4 = (pSVar6->fields)._size;
                                      if (uVar4 < (uint)pUVar7->max_length) {
                                        (pSVar6->fields)._size = uVar4 + 1;
                                        pUVar7->m_Items[(int)uVar4] = pUVar20;
                                        il2cpp_runtime_glue(pUVar7->m_Items + (int)uVar4,pUVar20);
                                      }
                                      else {
                                        System_Collections_Generic_List<object>__AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)
                                                   pSVar6,(Il2CppObject *)pUVar20,
                                                   *(MethodInfo_35A7350 **)
                                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      pSVar16 = (System_Collections_Generic_List_object__o *)
                                                il2cpp_runtime_glue(TypeInfo_List_string);
                                      System_Collections_Generic_List<object>___ctor
                                                (pSVar16,MethodInfo_List_1_System_String);
                                      lVar17 = il2cpp_glue_02274930(TypeInfo_string,6);
                                      if (lVar17 != 0) {
                                        if (*(int *)(lVar17 + 0x18) != 0) {
                                          *(undefined8 *)(lVar17 + 0x20) = "Undo";
                                          il2cpp_runtime_glue(lVar17 + 0x20);
                                          if (1 < *(uint *)(lVar17 + 0x18)) {
                                            *(undefined8 *)(lVar17 + 0x28) = "Redo";
                                            il2cpp_runtime_glue(lVar17 + 0x28);
                                            if (2 < *(uint *)(lVar17 + 0x18)) {
                                              *(System_String_o **)(lVar17 + 0x30) = "Copy";
                                              il2cpp_runtime_glue(lVar17 + 0x30);
                                              if (3 < *(uint *)(lVar17 + 0x18)) {
                                                *(undefined8 *)(lVar17 + 0x38) = "Paste";
                                                il2cpp_runtime_glue(lVar17 + 0x38);
                                                if (4 < *(uint *)(lVar17 + 0x18)) {
                                                  *(undefined8 *)(lVar17 + 0x40) = "Cut";
                                                  il2cpp_runtime_glue(lVar17 + 0x40);
                                                  if (5 < *(uint *)(lVar17 + 0x18)) {
                                                    *(System_String_o **)(lVar17 + 0x48) =
                                                         "Delete";
                                                    il2cpp_runtime_glue(lVar17 + 0x48);
                                                    if ((int)*(ulong *)(lVar17 + 0x18) < 1) {
LAB_04125c5f:
                                                      pUVar12 = pUStack_50;
                                                      pSVar8 = (pUStack_50->fields).
                                                               _dropdownSelection;
                                                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                        il2cpp_init_class();
                                                      }
                                                      pSVar14 = UI_UIManager__GetLocaleCommon
                                                                          ("Edit",
                                                                           (MethodInfo *)0x0);
                                                      pUVar11 = pUStack_60;
                                                      if (pSVar16 !=
                                                          (System_Collections_Generic_List_object__o
                                                           *)0x0) {
                                                        pSVar18 = (System_String_array *)
                                                                                                                                    
                                                  System_Collections_Generic_List<object>__ToArray
                                                            (pSVar16,MethodInfo_String___ToArray);
                                                  SStack_70.hasValue = 0;
                                                  SStack_70.value = 0.0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&SStack_70,
                                                             180.0,MethodInfo_Nullable_1_Single);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUVar15 = UI_ElementFactory__CreateDropdownSelect
                                                                      (pUStack_68,pUVar11,
                                                                       (Settings_BaseSetting_o *)
                                                                       pSVar8,pSVar14,pSVar18,
                                                                       "",100.0,40.0,500.0
                                                                       ,(System_Nullable_float__o)
                                                                        SStack_70,pUVar19,
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                                    pSVar6 = (pUVar12->fields)._dropdowns;
                                                    pUVar20 = (UI_DropdownSelectElement_o *)
                                                                                                                            
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar15,MethodInfo_DropdownSelectElement_GetComponent_DropdownSelec);
                                                  lVar17 = MethodInfo_Void_Add;
                                                  if (pSVar6 != (
                                                  System_Collections_Generic_List_DropdownSelectElement__o
                                                  *)0x0) {
                                                    piVar2 = &(pSVar6->fields)._version;
                                                    *piVar2 = *piVar2 + 1;
                                                    pUVar7 = (pSVar6->fields)._items;
                                                    if (pUVar7 != (UI_DropdownSelectElement_array *)
                                                                  0x0) {
                                                      uVar4 = (pSVar6->fields)._size;
                                                      if (uVar4 < (uint)pUVar7->max_length) {
                                                        (pSVar6->fields)._size = uVar4 + 1;
                                                        pUVar7->m_Items[(int)uVar4] = pUVar20;
                                                        il2cpp_runtime_glue(pUVar7->m_Items +
                                                                           (int)uVar4,pUVar20);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar6
                                                  ,(Il2CppObject *)pUVar20,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                   0x70));
                                                  }
                                                  pSVar16 = (
                                                  System_Collections_Generic_List_object__o *)
                                                  il2cpp_runtime_glue(TypeInfo_List_string);
                                                  System_Collections_Generic_List<object>___ctor
                                                            (pSVar16,MethodInfo_List_1_System_String);
                                                  lVar17 = il2cpp_glue_02274930(TypeInfo_string,5);
                                                  if (lVar17 != 0) {
                                                    if (*(int *)(lVar17 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar17 + 0x20) = "Editor";
                                                      il2cpp_runtime_glue((undefined8 *)
                                                                         (lVar17 + 0x20));
                                                      if (1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x28) =
                                                             "MapInfo";
                                                        il2cpp_runtime_glue(lVar17 + 0x28);
                                                        if (2 < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0x30) =
                                                               "Weather";
                                                          il2cpp_runtime_glue(lVar17 + 0x30);
                                                          if (3 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x38) =
                                                                 "CustomLogic";
                                                            il2cpp_runtime_glue(lVar17 + 0x38);
                                                            if (4 < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x40) =
                                                                   "CustomAssets";
                                                              il2cpp_runtime_glue(lVar17 + 0x40);
                                                              if ((int)*(ulong *)(lVar17 + 0x18) < 1
                                                                 ) {
LAB_04125fca:
                                                                pSVar8 = (pUStack_50->fields).
                                                                         _dropdownSelection;
                                                                if (*(int *)(TypeInfo_UIManager + 0xe4) ==
                                                                    0) {
                                                                  il2cpp_init_class();
                                                                }
                                                                pSVar14 = 
                                                  UI_UIManager__GetLocaleCommon
                                                            ("Options",(MethodInfo *)0x0);
                                                  if (pSVar16 !=
                                                      (System_Collections_Generic_List_object__o *)
                                                      0x0) {
                                                    pSVar18 = (System_String_array *)
                                                                                                                            
                                                  System_Collections_Generic_List<object>__ToArray
                                                            (pSVar16,MethodInfo_String___ToArray);
                                                  SStack_70.hasValue = 0;
                                                  SStack_70.value = 0.0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&SStack_70,
                                                             180.0,MethodInfo_Nullable_1_Single);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  pUVar12 = pUStack_50;
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUVar15 = UI_ElementFactory__CreateDropdownSelect
                                                                      (pUStack_68,pUStack_60,
                                                                       (Settings_BaseSetting_o *)
                                                                       pSVar8,pSVar14,pSVar18,
                                                                       "",130.0,40.0,500.0
                                                                       ,(System_Nullable_float__o)
                                                                        SStack_70,pUVar19,
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                                    pSVar6 = (pUVar12->fields)._dropdowns;
                                                    pUVar20 = (UI_DropdownSelectElement_o *)
                                                                                                                            
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar15,MethodInfo_DropdownSelectElement_GetComponent_DropdownSelec);
                                                  lVar17 = MethodInfo_Void_Add;
                                                  if (pSVar6 != (
                                                  System_Collections_Generic_List_DropdownSelectElement__o
                                                  *)0x0) {
                                                    piVar2 = &(pSVar6->fields)._version;
                                                    *piVar2 = *piVar2 + 1;
                                                    pUVar7 = (pSVar6->fields)._items;
                                                    if (pUVar7 != (UI_DropdownSelectElement_array *)
                                                                  0x0) {
                                                      uVar4 = (pSVar6->fields)._size;
                                                      if (uVar4 < (uint)pUVar7->max_length) {
                                                        (pSVar6->fields)._size = uVar4 + 1;
                                                        pUVar7->m_Items[(int)uVar4] = pUVar20;
                                                        il2cpp_runtime_glue(pUVar7->m_Items +
                                                                           (int)uVar4,pUVar20);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar6
                                                  ,(Il2CppObject *)pUVar20,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                   0x70));
                                                  }
                                                  pSVar14 = UI_UIManager__GetLocale
                                                                      ("MapEditorSettings","Keybinds",
                                                                       "AddObject","",
                                                                       "",
                                                                       (MethodInfo *)0x0);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUVar11 = pUStack_60;
                                                  pUVar10 = pUStack_68;
                                                  UI_ElementFactory__CreateDefaultButton
                                                            (pUStack_68,pUStack_60,pSVar14,0.0,40.0,
                                                             pUVar19,(MethodInfo *)0x0);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUVar15 = UI_ElementFactory__CreateDefaultButton
                                                                      (pUVar10,pUVar11,"Gizmo: Position",
                                                                       0.0,40.0,pUVar19,
                                                                       (MethodInfo *)0x0);
                                                  (pUVar12->fields)._gizmoButton = pUVar15;
                                                  il2cpp_runtime_glue(&(pUVar12->fields)._gizmoButton
                                                                     ,pUVar15);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUVar15 = UI_ElementFactory__CreateDefaultButton
                                                                      (pUVar10,pUVar11,"Orientation: Center",
                                                                       0.0,40.0,pUVar19,
                                                                       (MethodInfo *)0x0);
                                                  (pUVar12->fields)._gizmoOrientationButton =
                                                       pUVar15;
                                                  il2cpp_runtime_glue(&(pUVar12->fields).
                                                                      _gizmoOrientationButton,
                                                                     pUVar15);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUVar15 = UI_ElementFactory__CreateDefaultButton
                                                                      (pUVar10,pUVar11,"Snap: Off",
                                                                       0.0,40.0,pUVar19,
                                                                       (MethodInfo *)0x0);
                                                  (pUVar12->fields)._snapButton = pUVar15;
                                                  il2cpp_runtime_glue(&(pUVar12->fields)._snapButton,
                                                                     pUVar15);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUVar15 = UI_ElementFactory__CreateDefaultButton
                                                                      (pUVar10,pUVar11,"Brush: Off",
                                                                       0.0,40.0,pUVar19,
                                                                       (MethodInfo *)0x0);
                                                  (pUVar12->fields)._brushButton = pUVar15;
                                                  il2cpp_runtime_glue(&(pUVar12->fields)._brushButton
                                                                     ,pUVar15);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  UI_ElementFactory__CreateDefaultButton
                                                            (pUVar10,pUVar11,"Camera",0.0,40.0,
                                                             pUVar19,(MethodInfo *)0x0);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  UI_ElementFactory__CreateDefaultButton
                                                            (pUVar10,pUVar11,"Light",0.0,40.0,
                                                             pUVar19,(MethodInfo *)0x0);
                                                  pSStack_58 = (pUVar12->fields)._layerSelection;
                                                  pSStack_48 = (Settings_IntSetting_o *)
                                                               UI_UIManager__GetLocaleCommon
                                                                         ("Layers",
                                                                          (MethodInfo *)0x0);
                                                  handle = TypeRef_LayerOption;
                                                  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                                                    il2cpp_init_class();
                                                  }
                                                  pSVar21 = System_Type__GetTypeFromHandle
                                                                      (handle,(MethodInfo *)0x0);
                                                  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
                                                    il2cpp_init_class();
                                                  }
                                                  pSVar18 = System_Enum__GetNames
                                                                      (pSVar21,(MethodInfo *)0x0);
                                                  SStack_40.hasValue = 0;
                                                  SStack_40.value = 0.0;
                                                  System_Nullable<float>___ctor
                                                            ((System_Nullable_float__o)&SStack_40,
                                                             180.0,MethodInfo_Nullable_1_Single);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUVar11 = pUStack_60;
                                                  pUVar10 = pUStack_68;
                                                  pUVar15 = 
                                                  UI_ElementFactory__CreateMultiSelectDropdown
                                                            (pUStack_68,pUStack_60,pSStack_58,
                                                             (System_String_o *)pSStack_48,pSVar18,
                                                             "",130.0,40.0,500.0,
                                                             (System_Nullable_float__o)SStack_40,
                                                             pUVar19,(MethodInfo *)0x0);
                                                  if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar22 = (UI_MultiSelectDropdownElement_o *)
                                                                                                                            
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar15,MethodInfo_MultiSelectDropdownElement_GetComponent_MultiSel);
                                                  (pUVar12->fields)._layerDropdown = pUVar22;
                                                  il2cpp_runtime_glue(&(pUVar12->fields).
                                                                      _layerDropdown,pUVar22);
                                                  pSVar14 = UI_UIManager__GetLocale
                                                                      ("MainMenu","Intro",
                                                                       "TutorialButton","",
                                                                       "",
                                                                       (MethodInfo *)0x0);
                                                  pUVar19 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  UI_ElementFactory__CreateDefaultButton
                                                            (pUVar10,pUVar11,pSVar14,0.0,40.0,
                                                             pUVar19,(MethodInfo *)0x0);
                                                  components = (System_Type_array *)
                                                               il2cpp_glue_02274930(TypeInfo_Type);
                                                  pSVar21 = System_Type__GetTypeFromHandle
                                                                      (TypeRef_RectTransform,
                                                                       (MethodInfo *)0x0);
                                                  if (components != (System_Type_array *)0x0) {
                                                    if ((pSVar21 != (System_Type_o *)0x0) &&
                                                       (lVar17 = il2cpp_runtime_glue(pSVar21,(((
                                                  components->obj).klass)->_1).element_class),
                                                  lVar17 == 0)) {
LAB_0412673a:
                                                    uVar25 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                                                    il2cpp_glue_02274a00(uVar25,0);
                                                  }
                                                  if ((int)components->max_length != 0) {
                                                    components->m_Items[0] = pSVar21;
                                                    il2cpp_runtime_glue(components->m_Items);
                                                    pSVar21 = System_Type__GetTypeFromHandle
                                                                        (TypeRef_LayoutElement,
                                                                         (MethodInfo *)0x0);
                                                    if ((pSVar21 != (System_Type_o *)0x0) &&
                                                       (lVar17 = il2cpp_runtime_glue(pSVar21,(((
                                                  components->obj).klass)->_1).element_class),
                                                  lVar17 == 0)) goto LAB_0412673a;
                                                  if (1 < (uint)components->max_length) {
                                                    components->m_Items[1] = pSVar21;
                                                    il2cpp_runtime_glue(components->m_Items + 1,
                                                                       pSVar21);
                                                    pUVar15 = (UnityEngine_GameObject_o *)
                                                              il2cpp_runtime_glue(TypeInfo_GameObject);
                                                    UnityEngine_GameObject___ctor
                                                              (pUVar15,"Spacer",components,
                                                               (MethodInfo *)0x0);
                                                    if ((pUVar15 != (UnityEngine_GameObject_o *)0x0)
                                                       && (__this_00 = 
                                                  UnityEngine_GameObject__get_transform
                                                            (pUVar15,(MethodInfo *)0x0),
                                                  ppSVar1 = ppSStack_38,
                                                  __this_00 != (UnityEngine_Transform_o *)0x0)) {
                                                    UnityEngine_Transform__SetParent
                                                              (__this_00,pUVar10,0,(MethodInfo *)0x0
                                                              );
                                                    pIVar23 = 
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar15,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                                  if (pIVar23 != (Il2CppObject *)0x0) {
                                                    (*pIVar23->klass->vtable[0x28].methodPtr)
                                                              (0x3f800000,pIVar23,
                                                               pIVar23->klass->vtable[0x28].method);
                                                    if (*ppSVar1 != (Settings_StringSetting_o *)0x0)
                                                    {
                                                      pSVar14 = System_String__Concat
                                                                          (((*ppSVar1)->fields).
                                                                           _value,".txt",
                                                                           (MethodInfo *)0x0);
                                                      UI_ElementFactory__CreateDefaultLabel
                                                                (pUVar10,pUVar11,pSVar14,0,4,
                                                                 (MethodInfo *)0x0);
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  goto LAB_04126725;
                                                  }
                                                  }
                                                  goto LAB_0412672a;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_04126725;
                                                  }
                                                  if (pSVar16 ==
                                                      (System_Collections_Generic_List_object__o *)
                                                      0x0) {
                                                    pSVar14 = *(System_String_o **)(lVar17 + 0x20);
                                                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                      il2cpp_init_class();
                                                    }
                                                    UI_UIManager__GetLocale
                                                              ((System_String_o *)pSStack_58,
                                                               "Top",pSVar14,"",
                                                               "",(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                                                    il2cpp_raise_exception();
                                                  }
                                                  uVar26 = 0;
                                                  if ((*(ulong *)(lVar17 + 0x18) & 0xffffffff) != 0)
                                                  {
                                                    do {
                                                      pSVar14 = *(System_String_o **)
                                                                 (lVar17 + 0x20 + uVar26 * 8);
                                                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                        il2cpp_init_class();
                                                      }
                                                      pSVar14 = UI_UIManager__GetLocale
                                                                          ((System_String_o *)
                                                                           pSStack_58,"Top",
                                                                           pSVar14,"",
                                                                           "",
                                                                           (MethodInfo *)0x0);
                                                      lVar9 = MethodInfo_Void_Add;
                                                      piVar2 = &(pSVar16->fields)._version;
                                                      *piVar2 = *piVar2 + 1;
                                                      pSVar5 = (pSVar16->fields)._items;
                                                      if (pSVar5 == (System_Object_array *)0x0)
                                                      goto LAB_04126725;
                                                      uVar4 = (pSVar16->fields)._size;
                                                      if (uVar4 < (uint)pSVar5->max_length) {
                                                        (pSVar16->fields)._size = uVar4 + 1;
                                                        pSVar5->m_Items[(int)uVar4] =
                                                             (Il2CppObject *)pSVar14;
                                                        il2cpp_runtime_glue(pSVar5->m_Items +
                                                                           (int)uVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            (pSVar16,(Il2CppObject *)pSVar14,
                                                             *(MethodInfo_35A7350 **)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  uVar26 = uVar26 + 1;
                                                  if ((long)(int)*(uint *)(lVar17 + 0x18) <=
                                                      (long)uVar26) goto LAB_04125fca;
                                                  } while (uVar26 < *(uint *)(lVar17 + 0x18));
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_0412672a;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_04126725;
                                                  }
                                                  uVar26 = 0;
                                                  if ((*(ulong *)(lVar17 + 0x18) & 0xffffffff) != 0)
                                                  {
                                                    do {
                                                      pSVar14 = *(System_String_o **)
                                                                 (lVar17 + 0x20 + uVar26 * 8);
                                                      bVar13 = System_String__op_Equality
                                                                         (pSVar14,"Copy",
                                                                          (MethodInfo *)0x0);
                                                      if (((char)bVar13 == '\0') &&
                                                         (bVar13 = System_String__op_Equality
                                                                             (pSVar14,"Delete",
                                                                              (MethodInfo *)0x0),
                                                         (char)bVar13 == '\0')) {
                                                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                          il2cpp_init_class();
                                                        }
                                                        pSVar14 = UI_UIManager__GetLocale
                                                                            ("MapEditorSettings",
                                                                             "Keybinds",pSVar14,
                                                                             "",
                                                                             "",
                                                                             (MethodInfo *)0x0);
                                                        lVar9 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                          il2cpp_init_class();
                                                        }
                                                        pSVar14 = UI_UIManager__GetLocaleCommon
                                                                            (pSVar14,(MethodInfo *)
                                                                                     0x0);
                                                        lVar9 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar9;
                                                      if (pSVar16 ==
                                                          (System_Collections_Generic_List_object__o
                                                           *)0x0) goto LAB_04126725;
                                                      piVar2 = &(pSVar16->fields)._version;
                                                      *piVar2 = *piVar2 + 1;
                                                      pSVar5 = (pSVar16->fields)._items;
                                                      if (pSVar5 == (System_Object_array *)0x0)
                                                      goto LAB_04126725;
                                                      uVar4 = (pSVar16->fields)._size;
                                                      if (uVar4 < (uint)pSVar5->max_length) {
                                                        (pSVar16->fields)._size = uVar4 + 1;
                                                        pSVar5->m_Items[(int)uVar4] =
                                                             (Il2CppObject *)pSVar14;
                                                        il2cpp_runtime_glue(pSVar5->m_Items +
                                                                           (int)uVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            (pSVar16,(Il2CppObject *)pSVar14,
                                                             *(MethodInfo_35A7350 **)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  uVar26 = uVar26 + 1;
                                                  if ((long)(int)*(uint *)(lVar17 + 0x18) <=
                                                      (long)uVar26) goto LAB_04125c5f;
                                                  } while (uVar26 < *(uint *)(lVar17 + 0x18));
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto LAB_0412672a;
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_04126725;
                            }
                            if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                              pSVar14 = *(System_String_o **)(lVar17 + 0x20);
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              UI_UIManager__GetLocaleCommon(pSVar14,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            uVar26 = 0;
                            if ((*(ulong *)(lVar17 + 0x18) & 0xffffffff) != 0) {
                              do {
                                pSVar14 = *(System_String_o **)(lVar17 + 0x20 + uVar26 * 8);
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_init_class();
                                }
                                pSVar14 = UI_UIManager__GetLocaleCommon(pSVar14,(MethodInfo *)0x0);
                                lVar9 = MethodInfo_Void_Add;
                                piVar2 = &(pSVar16->fields)._version;
                                *piVar2 = *piVar2 + 1;
                                pSVar5 = (pSVar16->fields)._items;
                                if (pSVar5 == (System_Object_array *)0x0) goto LAB_04126725;
                                uVar4 = (pSVar16->fields)._size;
                                if (uVar4 < (uint)pSVar5->max_length) {
                                  (pSVar16->fields)._size = uVar4 + 1;
                                  pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar14;
                                  il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            (pSVar16,(Il2CppObject *)pSVar14,
                                             *(MethodInfo_35A7350 **)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                }
                                uVar26 = uVar26 + 1;
                                if ((long)(int)*(uint *)(lVar17 + 0x18) <= (long)uVar26)
                                goto LAB_0412585f;
                              } while (uVar26 < *(uint *)(lVar17 + 0x18));
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
LAB_0412672a:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_04126725:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$IsDropdownOpen
// il2cpp: bool UI_MapEditorTopPanel__IsDropdownOpen (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4122690

bool_conflict
UI_MapEditorTopPanel__IsDropdownOpen(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DropdownSelectElement__o *__this_00;
  UI_MultiSelectDropdownElement_o *pUVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  undefined8 extraout_RAX;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  UI_DropdownSettingElement_o *__this_04;
  
  if (DAT_05704915 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_DropdownSelectElement_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_DropdownSelectElement__G);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704915 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  __this_04 = (UI_DropdownSettingElement_o *)0x0;
  __this_00 = (__this->fields)._dropdowns;
  if (__this_00 != (System_Collections_Generic_List_DropdownSelectElement__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_DropdownSelectElement__G);
    while (__this_01.fields._8_8_ = pIVar4, __this_01.fields._list = pSVar3,
          __this_01.fields._current = (Il2CppObject *)__this_04,
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8),
          (char)bVar2 != '\0') {
      if (__this_04 == (UI_DropdownSettingElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = UI_DropdownSettingElement__IsOpen(__this_04,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        __this_02.fields._8_8_ = pIVar4;
        __this_02.fields._list = pSVar3;
        __this_02.fields._current = (Il2CppObject *)__this_04;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
        return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      }
    }
    __this_03.fields._8_8_ = pIVar4;
    __this_03.fields._list = pSVar3;
    __this_03.fields._current = (Il2CppObject *)__this_04;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    pUVar1 = (__this->fields)._layerDropdown;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pUVar1 = (__this->fields)._layerDropdown;
      if (pUVar1 == (UI_MultiSelectDropdownElement_o *)0x0) goto LAB_041227df;
      bVar2 = UI_MultiSelectDropdownElement__IsOpen(pUVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
      }
    }
    return 0;
  }
LAB_041227df:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnFileClick
// il2cpp: void UI_MapEditorTopPanel__OnFileClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41267c0

void UI_MapEditorTopPanel__OnFileClick(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint uVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  UI_ImportPopup_o *__this_00;
  long lVar6;
  UI_MapEditorMenu_o *pUVar7;
  UI_SelectListPopup_o *pUVar8;
  GameManagers_MapEditorGameManager_o *pGVar9;
  Map_MapScript_o *pMVar10;
  Map_MapScriptObjects_o *pMVar11;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  Il2CppClass *item;
  Map_MapScriptBaseObject_array *pMVar12;
  System_String_array *pSVar13;
  UI_ExportPopup_o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar14;
  int iVar15;
  System_String_array *pSVar16;
  System_Collections_Generic_List_string__o *pSVar17;
  System_Collections_Generic_List_string__o *disallowedDelete;
  UnityEngine_Events_UnityAction_o *pUVar18;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_String_o *pSVar19;
  UnityEngine_Events_UnityAction_o *pUVar20;
  Map_MapScript_o *__this_05;
  undefined8 uVar21;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  System_String_o *pSVar22;
  ulong uVar23;
  MethodInfo *method_00;
  ulong uVar24;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff70;
  Il2CppObject *in_stack_ffffffffffffff78;
  int local_74;
  System_String_array *local_70;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  System_String_array *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05704916 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_String__OrderByDesce);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_4);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_5);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_6);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_7);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnFileClick_b__30_9);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String__OnFileClick_b__30_8);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Warning: importing will override current save.");
    il2cpp_init_method_metadata(&"LoadAutosave");
    il2cpp_init_method_metadata(&"Open");
    il2cpp_init_method_metadata(&"LoadPreset");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"Untitled");
    il2cpp_init_method_metadata(&"New");
    il2cpp_init_method_metadata(&"");
    DAT_05704916 = '\x01';
  }
  local_74 = 0;
  local_68 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0
  ;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = Map_BuiltinLevels__GetMapNames("Custom",(MethodInfo *)0x0);
  pSVar17 = (System_Collections_Generic_List_string__o *)
            System_Linq_Enumerable__ToList<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,MethodInfo_List_1_System_String__ToList_String);
  pSVar4 = (__this->fields)._dropdownSelection;
  if (pSVar4 == (Settings_IntSetting_o *)0x0) goto LAB_04127431;
  uVar2 = (pSVar4->fields)._value;
  disallowedDelete = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)disallowedDelete,MethodInfo_List_1_System_String);
  lVar6 = MethodInfo_Void_Add;
  pSVar5 = (__this->fields)._currentMap;
  if ((pSVar5 == (Settings_StringSetting_o *)0x0) ||
     (disallowedDelete == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_04127431;
  method_00 = (MethodInfo *)(pSVar5->fields)._value;
  piVar1 = &(disallowedDelete->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar16 = (disallowedDelete->fields)._items;
  if (pSVar16 == (System_String_array *)0x0) goto LAB_04127431;
  uVar3 = (disallowedDelete->fields)._size;
  if (uVar3 < (uint)pSVar16->max_length) {
    (disallowedDelete->fields)._size = uVar3 + 1;
    pSVar16->m_Items[(int)uVar3] = (System_String_o *)method_00;
    il2cpp_runtime_glue(pSVar16->m_Items + (int)uVar3);
    pSVar19 = "Untitled";
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)disallowedDelete,
               (Il2CppObject *)method_00,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    pSVar19 = "Untitled";
  }
  if (9 < uVar2) {
    "Untitled" = pSVar19;
    return;
  }
  "Untitled" = pSVar19;
  switch(uVar2) {
  case 0:
    local_74 = 1;
    pSVar22 = System_Int32__ToString((int32_t)&local_74,(MethodInfo *)0x0);
    pSVar22 = System_String__Concat(pSVar19,pSVar22,(MethodInfo *)0x0);
    if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) break;
    bVar14 = System_Collections_Generic_List<object>__Contains
                       ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar22
                        ,MethodInfo_Boolean_Contains);
    if ((char)bVar14 != '\0') {
      do {
        local_74 = local_74 + 1;
        pSVar22 = System_Int32__ToString((int32_t)&local_74,(MethodInfo *)0x0);
        pSVar22 = System_String__Concat(pSVar19,pSVar22,(MethodInfo *)0x0);
        bVar14 = System_Collections_Generic_List<object>__Contains
                           ((System_Collections_Generic_List_object__o *)pSVar17,
                            (Il2CppObject *)pSVar22,MethodInfo_Boolean_Contains);
      } while ((char)bVar14 != '\0');
    }
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) break;
    local_70 = (System_String_array *)(pUVar7->fields).SelectListPopup;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_50 = (System_String_array *)UI_UIManager__GetLocaleCommon("New",(MethodInfo *)0x0);
    pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pSVar16 = local_70;
    pSVar13 = local_50;
    goto joined_r0x04126d82;
  case 1:
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 != (UI_MapEditorMenu_o *)0x0) {
      pUVar8 = (pUVar7->fields).SelectListPopup;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_70 = (System_String_array *)
                 UI_UIManager__GetLocaleCommon("Open",(MethodInfo *)0x0);
      pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar8 != (UI_SelectListPopup_o *)0x0) {
        UI_SelectListPopup__ShowLoad
                  (pUVar8,pSVar17,(System_String_o *)local_70,pUVar20,pUVar18,disallowedDelete,
                   (MethodInfo *)0x0);
        return;
      }
    }
    break;
  case 2:
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) break;
    pSVar16 = (System_String_array *)(pUVar7->fields).SelectListPopup;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_70 = (System_String_array *)UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
    pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pSVar19 = "";
    pSVar13 = local_70;
joined_r0x04126d82:
    if (pSVar16 != (System_String_array *)0x0) {
      UI_SelectListPopup__ShowSave
                ((UI_SelectListPopup_o *)pSVar16,pSVar17,(System_String_o *)pSVar13,pSVar19,pUVar20,
                 (System_Collections_Generic_List_string__o *)0x0,pUVar18,disallowedDelete,
                 (MethodInfo *)0x0);
      return;
    }
    break;
  case 3:
    UI_MapEditorTopPanel__Save(__this,method_00);
    return;
  case 4:
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 != (UI_MapEditorMenu_o *)0x0) {
      __this_00 = (pUVar7->fields).ImportPopup;
      pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UI_ImportPopup_o *)0x0) {
        UI_ImportPopup__Show(__this_00,pUVar20,1,"Warning: importing will override current save.",(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case 5:
    __this_05 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
    Map_MapScript___ctor(__this_05,(MethodInfo *)0x0);
    pGVar9 = (__this->fields)._gameManager;
    if (((pGVar9 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pMVar10 = (pGVar9->fields).MapScript, pMVar10 != (Map_MapScript_o *)0x0)) &&
       (uVar21 = (*(pMVar10->klass->vtable)._4_Serialize.methodPtr)
                           (pMVar10,(pMVar10->klass->vtable)._4_Serialize.method),
       __this_05 != (Map_MapScript_o *)0x0)) {
      (*(__this_05->klass->vtable)._5_Deserialize.methodPtr)
                (__this_05,uVar21,(__this_05->klass->vtable)._5_Deserialize.method);
      pMVar11 = (__this_05->fields).Objects;
      if ((pMVar11 != (Map_MapScriptObjects_o *)0x0) &&
         (__this_01 = (pMVar11->fields).Objects,
         __this_01 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar15 = (__this_01->fields)._size;
        (__this_01->fields)._size = 0;
        if (0 < iVar15) {
          System_Array__Clear((System_Array_o *)(__this_01->fields)._items,0,iVar15,
                              (MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (((System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
             (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
           (__this_06 = System_Collections_Generic_Dictionary<int__object>__get_Values
                                  ((System_Collections_Generic_Dictionary_int__object__o *)
                                   **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
           __this_06 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0
           )) {
          System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                      *)local_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
          local_58 = local_38;
          local_68 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                      *)local_48._0_8_;
          pIStack_60 = (Il2CppType *)local_48._8_8_;
          while (__this_03.fields._index = (int)in_stack_ffffffffffffff70,
                __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20),
                __this_03.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     in_stack_ffffffffffffff68,
                __this_03.fields._currentValue = in_stack_ffffffffffffff78,
                bVar14 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                                   (__this_03,(MethodInfo_31C3100 *)&local_68), lVar6 = MethodInfo_Void_Add
                , (char)bVar14 != '\0') {
            if (local_58 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            item = local_58[2].klass;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pMVar12 = (__this_01->fields)._items;
            if (pMVar12 == (Map_MapScriptBaseObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pMVar12->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pMVar12->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)item;
              il2cpp_runtime_glue(pMVar12->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item
                         ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
          __this_04.fields._index = (int)in_stack_ffffffffffffff70;
          __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
          __this_04.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
          __this_04.fields._currentValue = in_stack_ffffffffffffff78;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                    (__this_04,(MethodInfo_31C30F0 *)&local_68);
          pUVar7 = (__this->fields)._menu;
          if (pUVar7 != (UI_MapEditorMenu_o *)0x0) {
            __this_02 = (pUVar7->fields).ExportPopup;
            pSVar19 = (System_String_o *)
                      (*(__this_05->klass->vtable)._4_Serialize.methodPtr)
                                (__this_05,(__this_05->klass->vtable)._4_Serialize.method);
            if (__this_02 != (UI_ExportPopup_o *)0x0) {
              UI_ExportPopup__Show(__this_02,pSVar19,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    break;
  case 6:
    pSVar17 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar17,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar16 = Map_BuiltinLevels__GetMapCategories((MethodInfo *)0x0);
    if (pSVar16 == (System_String_array *)0x0) break;
    if (0 < (int)pSVar16->max_length) {
      uVar24 = 0;
      local_70 = pSVar16;
      if ((pSVar16->max_length & 0xffffffff) != 0) {
        do {
          pSVar19 = local_70->m_Items[uVar24];
          bVar14 = System_String__op_Equality(pSVar19,"Custom",(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar16 = Map_BuiltinLevels__GetMapNames(pSVar19,(MethodInfo *)0x0);
            if (pSVar16 == (System_String_array *)0x0) goto LAB_04127431;
            iVar15 = (int)pSVar16->max_length;
            if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) {
              if (0 < iVar15) {
                System_String__Concat(pSVar19,"/",pSVar16->m_Items[0],(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
            else if (0 < iVar15) {
              uVar23 = 0;
              if ((pSVar16->max_length & 0xffffffff) == 0) break;
              while( true ) {
                pSVar22 = System_String__Concat
                                    (pSVar19,"/",pSVar16->m_Items[uVar23],(MethodInfo *)0x0
                                    );
                lVar6 = MethodInfo_Void_Add;
                piVar1 = &(pSVar17->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar13 = (pSVar17->fields)._items;
                if (pSVar13 == (System_String_array *)0x0) goto LAB_04127431;
                uVar2 = (pSVar17->fields)._size;
                if (uVar2 < (uint)pSVar13->max_length) {
                  (pSVar17->fields)._size = uVar2 + 1;
                  pSVar13->m_Items[(int)uVar2] = pSVar22;
                  il2cpp_runtime_glue(pSVar13->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar17,
                             (Il2CppObject *)pSVar22,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                uVar23 = uVar23 + 1;
                uVar2 = (uint)pSVar16->max_length;
                if ((long)(int)uVar2 <= (long)uVar23) break;
                if (uVar2 <= uVar23) goto LAB_04127436;
              }
            }
          }
          uVar24 = uVar24 + 1;
          if ((long)(int)*(uint *)&local_70->max_length <= (long)uVar24) goto LAB_0412733d;
        } while (uVar24 < *(uint *)&local_70->max_length);
      }
LAB_04127436:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0412733d:
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) break;
    pUVar8 = (pUVar7->fields).SelectListPopup;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar19 = UI_UIManager__GetLocaleCommon("LoadPreset",(MethodInfo *)0x0);
    pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    goto joined_r0x04126f17;
  case 7:
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar16 = Map_BuiltinLevels__GetAutosaveNames((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_string__string);
      System_Func<object__object>___ctor();
      lVar6 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar6 + 8) = keySelector;
      il2cpp_runtime_glue(lVar6 + 8,keySelector);
    }
    source = System_Linq_Enumerable__OrderByDescending<object__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,keySelector,
                        MethodInfo_IOrderedEnumerable_1_System_String__OrderByDesce);
    pSVar17 = (System_Collections_Generic_List_string__o *)
              System_Linq_Enumerable__ToList<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String__ToList_String);
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) break;
    pUVar8 = (pUVar7->fields).SelectListPopup;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar19 = UI_UIManager__GetLocaleCommon("LoadAutosave",(MethodInfo *)0x0);
    pUVar20 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
joined_r0x04126f17:
    if (pUVar8 != (UI_SelectListPopup_o *)0x0) {
      UI_SelectListPopup__ShowLoad
                (pUVar8,pSVar17,pSVar19,pUVar20,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
      return;
    }
    break;
  case 8:
    goto switchD_04126b06_caseD_8;
  case 9:
    UI_MapEditorTopPanel__Save(__this,method_00);
    goto switchD_04126b06_caseD_8;
  }
LAB_04127431:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
switchD_04126b06_caseD_8:
  ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorTopPanel$$Save
// il2cpp: void UI_MapEditorTopPanel__Save (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4110d00

void UI_MapEditorTopPanel__Save(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  uint uVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  Map_MapScript_o *pMVar4;
  Map_MapScriptObjects_o *pMVar5;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Il2CppClass *item;
  Map_MapScriptBaseObject_array *pMVar6;
  Settings_StringSetting_o *pSVar7;
  System_String_o *name;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  long lVar8;
  bool_conflict bVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar11;
  Il2CppType *pIVar12;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_05704917 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05704917 = '\x01';
  }
  pGVar3 = (__this->fields)._gameManager;
  if ((((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar4 = (pGVar3->fields).MapScript, pMVar4 != (Map_MapScript_o *)0x0)) &&
      (pMVar5 = (pMVar4->fields).Objects, pMVar5 != (Map_MapScriptObjects_o *)0x0)) &&
     (__this_00 = (pMVar5->fields).Objects,
     __this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)
        **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      __this_03 = System_Collections_Generic_Dictionary<int__object>__get_Values
                            ((System_Collections_Generic_Dictionary_int__object__o *)
                             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
      if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
      {
        System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                    *)local_40,__this_03,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
        pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
        pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                   *)local_40._8_8_;
        pIVar12 = local_30;
        while( true ) {
          __this_01.fields._8_8_ = pSVar11;
          __this_01.fields._dictionary = pSVar10;
          __this_01.fields._currentValue = (Il2CppObject *)pIVar12;
          bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                            (__this_01,(MethodInfo_31C3100 *)&stack0xffffffffffffffa8);
          lVar8 = MethodInfo_Void_Add;
          if ((char)bVar9 == '\0') break;
          if (pIVar12 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item = pIVar12[2].data;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar6 = (__this_00->fields)._items;
          if (pMVar6 == (Map_MapScriptBaseObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pMVar6->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pMVar6->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)item;
            il2cpp_runtime_glue(pMVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        __this_02.fields._8_8_ = pSVar11;
        __this_02.fields._dictionary = pSVar10;
        __this_02.fields._currentValue = (Il2CppObject *)pIVar12;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                  (__this_02,(MethodInfo_31C30F0 *)&stack0xffffffffffffffa8);
        pSVar7 = (__this->fields)._currentMap;
        if ((pSVar7 != (Settings_StringSetting_o *)0x0) &&
           (pGVar3 = (__this->fields)._gameManager,
           pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0)) {
          name = (pSVar7->fields)._value;
          pMVar4 = (pGVar3->fields).MapScript;
          if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Map_BuiltinLevels__SaveCustomMap(name,pMVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$Autosave
// il2cpp: void UI_MapEditorTopPanel__Autosave (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41274f0

/* WARNING: Removing unreachable block (ram,0x04127cd0) */

void UI_MapEditorTopPanel__Autosave(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  int length;
  uint uVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  Map_MapScript_o *pMVar5;
  Map_MapScriptObjects_o *pMVar6;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Map_MapScriptBaseObject_o *item;
  Map_MapScriptBaseObject_array *pMVar7;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Settings_StringSetting_o *pSVar10;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  char cVar11;
  bool_conflict bVar12;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_IO_DirectoryInfo_o *__this_04;
  System_IO_FileInfo_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar13;
  VirtualInvokeData *pVVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  System_String_o *str1;
  System_String_o *pSVar18;
  long lVar19;
  long lVar20;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar21;
  Il2CppType **ppIVar22;
  Il2CppRGCTXData *pIVar23;
  System_DateTime_Fields local_48;
  undefined1 local_40 [16];
  Il2CppRGCTXData *local_30;
  
  if (DAT_05704918 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&TypeInfo_DirectoryInfo);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_IO_FileInfo__OrderBy);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_IO_FileInfo__Skip_FileInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_Func_FileInfo__DateTime);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_FileInfo);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_FileInfo);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_DateTime__Autosave_b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"MM-dd-yyyy-HH-mm");
    DAT_05704918 = '\x01';
  }
  local_48._dateData = 0;
  pGVar4 = (__this->fields)._gameManager;
  if ((((pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar5 = (pGVar4->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0)) &&
      (pMVar6 = (pMVar5->fields).Objects, pMVar6 != (Map_MapScriptObjects_o *)0x0)) &&
     (__this_00 = (pMVar6->fields).Objects,
     __this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((System_Collections_Generic_Dictionary_int__object__o *)
         **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
         (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (__this_03 = System_Collections_Generic_Dictionary<int__object>__get_Values
                              ((System_Collections_Generic_Dictionary_int__object__o *)
                               **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
       __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )local_40,__this_03,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      pSVar21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      ppIVar22 = (Il2CppType **)local_40._8_8_;
      pIVar23 = local_30;
      while (__this_01.fields._8_8_ = ppIVar22, __this_01.fields._dictionary = pSVar21,
            __this_01.fields._currentValue = (Il2CppObject *)pIVar23,
            bVar12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                               (__this_01,(MethodInfo_31C3100 *)&stack0xffffffffffffff98),
            lVar19 = MethodInfo_Void_Add, (char)bVar12 != '\0') {
        if (pIVar23 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        item = (Map_MapScriptBaseObject_o *)pIVar23[4].method;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar7 = (__this_00->fields)._items;
        if (pMVar7 == (Map_MapScriptBaseObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pMVar7->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pMVar7->m_Items[(int)uVar3] = item;
          il2cpp_runtime_glue(pMVar7->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
      }
      __this_02.fields._8_8_ = ppIVar22;
      __this_02.fields._dictionary = pSVar21;
      __this_02.fields._currentValue = (Il2CppObject *)pIVar23;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                (__this_02,(MethodInfo_31C30F0 *)&stack0xffffffffffffff98);
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x68);
      __this_04 = (System_IO_DirectoryInfo_o *)il2cpp_runtime_glue(TypeInfo_DirectoryInfo);
      System_IO_DirectoryInfo___ctor(__this_04,pSVar18,(MethodInfo *)0x0);
      if (__this_04 != (System_IO_DirectoryInfo_o *)0x0) {
        source = System_IO_DirectoryInfo__GetFiles(__this_04,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_FileInfo__DateTime);
          System_Func<object__DateTime>___ctor();
          lVar19 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_TSource__TKey__o **)(lVar19 + 0x10) = keySelector;
          il2cpp_runtime_glue(lVar19 + 0x10,keySelector);
        }
        source_00 = System_Linq_Enumerable__OrderByDescending<object__DateTime>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               keySelector,MethodInfo_IOrderedEnumerable_1_System_IO_FileInfo__OrderBy);
        pSVar13 = System_Linq_Enumerable__Skip<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,100,
                             MethodInfo_IEnumerable_1_System_IO_FileInfo__Skip_FileInfo);
        if (pSVar13 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
          pSVar8 = pSVar13->klass;
          uVar2._0_1_ = (pSVar8->_2).rank;
          uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar9 = (pSVar8->_1).interfaceOffsets;
            lVar19 = 0;
            do {
              if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerable_FileInfo) {
                pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
                goto LAB_04127931;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar19);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IEnumerable_FileInfo,0);
LAB_04127931:
          plVar15 = (long *)(*pVVar14->methodPtr)(pSVar13,pVVar14->method);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          do {
            lVar19 = *plVar15;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IEnumerator) {
                  puVar16 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + lVar19 +
                            0x138);
                  goto LAB_041279b3;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IEnumerator,0);
LAB_041279b3:
            cVar11 = (*(code *)*puVar16)(plVar15,puVar16[1]);
            if (cVar11 == '\0') {
              if (plVar15 == (long *)0x0) goto LAB_04127b96;
              lVar19 = *plVar15;
              if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto LAB_04127b6f;
              lVar20 = 0;
              goto LAB_04127b60;
            }
            lVar19 = *plVar15;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar20 = 0;
              do {
                if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IEnumerator_FileInfo) {
                  puVar16 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + lVar19 +
                            0x138);
                  goto LAB_04127a23;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
            }
            puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IEnumerator_FileInfo,0);
LAB_04127a23:
            plVar17 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            (**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
          } while( true );
        }
      }
    }
  }
  goto LAB_04127ccb;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
LAB_04127b60:
    if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar16 = (undefined8 *)
                (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto LAB_04127b8d;
    }
  }
LAB_04127b6f:
  puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IDisposable,0);
LAB_04127b8d:
  (*(code *)*puVar16)(plVar15,puVar16[1]);
LAB_04127b96:
  pSVar10 = (__this->fields)._currentMap;
  if (pSVar10 != (Settings_StringSetting_o *)0x0) {
    pSVar18 = (pSVar10->fields)._value;
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_48._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    str1 = System_DateTime__ToString((System_DateTime_o)&local_48,"MM-dd-yyyy-HH-mm",(MethodInfo *)0x0);
    pSVar18 = System_String__Concat(pSVar18,str1,(MethodInfo *)0x0);
    pGVar4 = (__this->fields)._gameManager;
    if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
      pMVar5 = (pGVar4->fields).MapScript;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_BuiltinLevels__AutosaveCustomMap(pSVar18,pMVar5,(MethodInfo *)0x0);
      return;
    }
  }
LAB_04127ccb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnEditClick
// il2cpp: void UI_MapEditorTopPanel__OnEditClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4127cf0

void UI_MapEditorTopPanel__OnEditClick(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  Settings_IntSetting_o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  bool_conflict bVar3;
  
  if (DAT_05704919 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704919 = '\x01';
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar3 = UI_MapEditorMenu__IsPopupActive(__this_00,method);
    if ((char)bVar3 != '\0') {
switchD_04127d52_default:
      return;
    }
    pSVar1 = (__this->fields)._dropdownSelection;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      switch((pSVar1->fields)._value) {
      case 0:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Undo(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 1:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Redo(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 2:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Copy(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 3:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Paste(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 4:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Cut(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case 5:
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__Delete(pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      default:
        goto switchD_04127d52_default;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnOptionsClick
// il2cpp: void UI_MapEditorTopPanel__OnOptionsClick (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4127de0

void UI_MapEditorTopPanel__OnOptionsClick(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  Settings_IntSetting_o *pSVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  undefined8 extraout_RDX;
  UI_MapEditorCustomLogicPopup_o *pUVar4;
  
  if (DAT_0570491a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570491a = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    bVar3 = UI_MapEditorMenu__IsPopupActive(pUVar1,method);
    if ((char)bVar3 != '\0') {
switchD_04127e42_default:
      return;
    }
    pSVar2 = (__this->fields)._dropdownSelection;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_04127edc;
    switch((pSVar2->fields)._value) {
    case 0:
      pUVar1 = (__this->fields)._menu;
      if ((pUVar1 == (UI_MapEditorMenu_o *)0x0) ||
         (pUVar4 = (UI_MapEditorCustomLogicPopup_o *)(pUVar1->fields).SettingsPopup,
         pUVar4 == (UI_MapEditorCustomLogicPopup_o *)0x0)) goto LAB_04127edc;
      goto LAB_04127ec8;
    case 1:
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_04127edc;
      pUVar4 = (UI_MapEditorCustomLogicPopup_o *)(pUVar1->fields).InfoPopup;
      break;
    case 2:
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_04127edc;
      pUVar4 = (UI_MapEditorCustomLogicPopup_o *)(pUVar1->fields).WeatherPopup;
      break;
    case 3:
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_04127edc;
      pUVar4 = (pUVar1->fields).CustomLogicPopup;
      break;
    case 4:
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_04127edc;
      pUVar4 = (UI_MapEditorCustomLogicPopup_o *)(pUVar1->fields).CustomAssetsPopup;
      break;
    default:
      goto switchD_04127e42_default;
    }
    if (pUVar4 != (UI_MapEditorCustomLogicPopup_o *)0x0) {
LAB_04127ec8:
      vtable_dispatch =
           (((UI_MapEditorSettingsPopup_c *)pUVar4->klass)->vtable)._21_Show.methodPtr;
      (*vtable_dispatch)
                (pUVar4,(((UI_MapEditorSettingsPopup_c *)pUVar4->klass)->vtable)._21_Show.method,
                 extraout_RDX,vtable_dispatch);
      return;
    }
  }
LAB_04127edc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnButtonClick
// il2cpp: void UI_MapEditorTopPanel__OnButtonClick (UI_MapEditorTopPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4127ef0

void UI_MapEditorTopPanel__OnButtonClick
               (UI_MapEditorTopPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorCameraPopup_o *pUVar2;
  GameManagers_MapEditorGameManager_o *__this_00;
  UI_ExternalLinkPopup_o *__this_01;
  bool_conflict bVar3;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)name;
  if (DAT_0570491b == '\0') {
    il2cpp_init_method_metadata(&"Camera");
    il2cpp_init_method_metadata(&"GizmoOrientation");
    il2cpp_init_method_metadata(&"Light");
    il2cpp_init_method_metadata(&"https://aottg2.gitbook.io/custom-maps");
    il2cpp_init_method_metadata(&"Gizmo");
    il2cpp_init_method_metadata(&"Tutorial");
    il2cpp_init_method_metadata(&"Snap");
    il2cpp_init_method_metadata(&"AddObject");
    il2cpp_init_method_metadata(&"Brush");
    DAT_0570491b = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_04128139;
  bVar3 = UI_MapEditorMenu__IsPopupActive(pUVar1,pMVar4);
  if ((char)bVar3 != '\0') {
    return;
  }
  bVar3 = System_String__op_Equality(name,"AddObject",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"Camera",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pMVar4 = "Gizmo";
      bVar3 = System_String__op_Equality(name,(System_String_o *)"Gizmo",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        UI_MapEditorTopPanel__NextGizmo(__this,pMVar4);
        return;
      }
      pMVar4 = "GizmoOrientation";
      bVar3 = System_String__op_Equality(name,(System_String_o *)"GizmoOrientation",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        UI_MapEditorTopPanel__NextGizmoOrientation(__this,pMVar4);
        return;
      }
      pMVar4 = "Snap";
      bVar3 = System_String__op_Equality(name,(System_String_o *)"Snap",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        UI_MapEditorTopPanel__ToggleSnap(__this,pMVar4);
        return;
      }
      pMVar4 = "Brush";
      bVar3 = System_String__op_Equality(name,(System_String_o *)"Brush",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        UI_MapEditorTopPanel__ToggleBrush(__this,pMVar4);
        return;
      }
      bVar3 = System_String__op_Equality(name,"Light",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        bVar3 = System_String__op_Equality(name,"Tutorial",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        pUVar1 = (__this->fields)._menu;
        if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
           (__this_01 = (pUVar1->fields).ExternalLinkPopup,
           __this_01 != (UI_ExternalLinkPopup_o *)0x0)) {
          UI_ExternalLinkPopup__Show(__this_01,"https://aottg2.gitbook.io/custom-maps",(MethodInfo *)0x0);
          return;
        }
      }
      else {
        __this_00 = (__this->fields)._gameManager;
        if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
          GameManagers_MapEditorGameManager__ToggleLights(__this_00,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_04128139;
    }
    pUVar1 = (__this->fields)._menu;
    if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_04128139;
    pUVar2 = (pUVar1->fields).CameraPopup;
  }
  else {
    pUVar1 = (__this->fields)._menu;
    if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_04128139;
    pUVar2 = (UI_MapEditorCameraPopup_o *)(pUVar1->fields).AddObjectPopup;
  }
  if (pUVar2 != (UI_MapEditorCameraPopup_o *)0x0) {
    (*(((UI_MapEditorAddObjectPopup_c *)pUVar2->klass)->vtable)._21_Show.methodPtr)
              (pUVar2,(((UI_MapEditorAddObjectPopup_c *)pUVar2->klass)->vtable)._21_Show.method);
    return;
  }
LAB_04128139:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$ToggleSnap
// il2cpp: void UI_MapEditorTopPanel__ToggleSnap (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128430

void UI_MapEditorTopPanel__ToggleSnap(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *pIVar4;
  undefined8 *puVar5;
  
  if (DAT_0570491c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Snap: Off");
    il2cpp_init_method_metadata(&"Snap: On");
    DAT_0570491c = '\x01';
  }
  __this_00 = (__this->fields)._snapButton;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pIVar4 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
          if ((char)(pGVar1->fields).Snap == '\0') {
            *(undefined1 *)&(pGVar1->fields).Snap = 1;
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0412850a;
            puVar5 = &"Snap: On";
          }
          else {
            *(undefined1 *)&(pGVar1->fields).Snap = 0;
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0412850a;
            puVar5 = &"Snap: Off";
          }
          pIVar2 = pIVar4->klass;
          vtable_dispatch = pIVar2->vtable[0x4b].methodPtr;
          (*vtable_dispatch)
                    (pIVar4,*puVar5,pIVar2->vtable[0x4b].method,pIVar2,vtable_dispatch);
          return;
        }
      }
    }
  }
LAB_0412850a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$ToggleLights
// il2cpp: void UI_MapEditorTopPanel__ToggleLights (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128610

void UI_MapEditorTopPanel__ToggleLights(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *__this_00;
  
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__ToggleLights(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$ToggleBrush
// il2cpp: void UI_MapEditorTopPanel__ToggleBrush (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128510

void UI_MapEditorTopPanel__ToggleBrush(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  UnityEngine_GameObject_o *__this_00;
  MapEditor_MapEditorBrush_o *pMVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Transform_o *pUVar4;
  Il2CppObject *pIVar5;
  undefined8 *puVar6;
  
  if (DAT_0570491d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Brush: On");
    il2cpp_init_method_metadata(&"Brush: Off");
    DAT_0570491d = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__ToggleBrush(pGVar1,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._brushButton;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pIVar5 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
          pGVar1 = (__this->fields)._gameManager;
          if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
              (pMVar2 = (pGVar1->fields).Brush, pMVar2 != (MapEditor_MapEditorBrush_o *)0x0)) &&
             (pIVar5 != (Il2CppObject *)0x0)) {
            if ((char)(pMVar2->fields).Active == '\0') {
              puVar6 = &"Brush: Off";
            }
            else {
              puVar6 = &"Brush: On";
            }
            pIVar3 = pIVar5->klass;
            vtable_dispatch = pIVar3->vtable[0x4b].methodPtr;
            (*vtable_dispatch)
                      (pIVar5,*puVar6,pIVar3->vtable[0x4b].method,pIVar3,vtable_dispatch);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnLayersChanged
// il2cpp: void UI_MapEditorTopPanel__OnLayersChanged (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128630

void UI_MapEditorTopPanel__OnLayersChanged(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  GameManagers_MapEditorGameManager_o *__this_01;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar1 = UI_MapEditorMenu__IsPopupActive(__this_00,method);
    if ((char)bVar1 != '\0') {
      return;
    }
    __this_01 = (__this->fields)._gameManager;
    if (__this_01 != (GameManagers_MapEditorGameManager_o *)0x0) {
      GameManagers_MapEditorGameManager__SetLayerVisibility
                (__this_01,(__this->fields)._layerSelection,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$NextGizmoOrientation
// il2cpp: void UI_MapEditorTopPanel__NextGizmoOrientation (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128330

void UI_MapEditorTopPanel__NextGizmoOrientation(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  GameManagers_MapEditorGameManager_o *__this_01;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Transform_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined8 *puVar3;
  
  if (DAT_0570491e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Orientation: Local");
    il2cpp_init_method_metadata(&"Orientation: Center");
    DAT_0570491e = '\x01';
  }
  __this_00 = (__this->fields)._gizmoOrientationButton;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pIVar2 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
        __this_01 = (__this->fields)._gameManager;
        if (__this_01 != (GameManagers_MapEditorGameManager_o *)0x0) {
          if ((__this_01->fields).CurrentGizmoMode == 0) {
            GameManagers_MapEditorGameManager__SetGizmoMode(__this_01,1,(MethodInfo *)0x0);
            if (pIVar2 == (Il2CppObject *)0x0) goto LAB_04128426;
            puVar3 = &"Orientation: Local";
          }
          else {
            GameManagers_MapEditorGameManager__SetGizmoMode(__this_01,0,(MethodInfo *)0x0);
            if (pIVar2 == (Il2CppObject *)0x0) goto LAB_04128426;
            puVar3 = &"Orientation: Center";
          }
          vtable_dispatch = pIVar2->klass->vtable[0x4b].methodPtr;
          (*vtable_dispatch)
                    (pIVar2,*puVar3,pIVar2->klass->vtable[0x4b].method,vtable_dispatch);
          return;
        }
      }
    }
  }
LAB_04128426:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$NextGizmo
// il2cpp: void UI_MapEditorTopPanel__NextGizmo (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128140

void UI_MapEditorTopPanel__NextGizmo(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_BaseGizmo_o *pMVar2;
  MapEditor_PositionGizmo_o *y;
  MapEditor_RotationGizmo_o *y_00;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  Il2CppObject *pIVar5;
  undefined8 *puVar6;
  
  if (DAT_0570491f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Gizmo: Scale");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Gizmo: Position");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Gizmo: Rotation");
    DAT_0570491f = '\x01';
  }
  __this_00 = (__this->fields)._gizmoButton;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pIVar5 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
          pMVar2 = (pGVar1->fields).CurrentGizmo;
          y = (pGVar1->fields)._positionGizmo;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pMVar2,(UnityEngine_Object_o *)y,
                             (MethodInfo *)0x0);
          pGVar1 = (__this->fields)._gameManager;
          if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
            if ((char)bVar3 == '\0') {
              pMVar2 = (pGVar1->fields).CurrentGizmo;
              y_00 = (pGVar1->fields)._rotationGizmo;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar3 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pMVar2,(UnityEngine_Object_o *)y_00,
                                 (MethodInfo *)0x0);
              pGVar1 = (__this->fields)._gameManager;
              if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
                if ((char)bVar3 == '\0') {
                  GameManagers_MapEditorGameManager__SetGizmo(pGVar1,"Position",(MethodInfo *)0x0)
                  ;
                  if (pIVar5 == (Il2CppObject *)0x0) goto LAB_04128327;
                  puVar6 = &"Gizmo: Position";
                }
                else {
                  GameManagers_MapEditorGameManager__SetGizmo(pGVar1,"Scale",(MethodInfo *)0x0)
                  ;
                  if (pIVar5 == (Il2CppObject *)0x0) goto LAB_04128327;
                  puVar6 = &"Gizmo: Scale";
                }
LAB_04128305:
                vtable_dispatch = pIVar5->klass->vtable[0x4b].methodPtr;
                (*vtable_dispatch)
                          (pIVar5,*puVar6,pIVar5->klass->vtable[0x4b].method,vtable_dispatch);
                return;
              }
            }
            else {
              GameManagers_MapEditorGameManager__SetGizmo(pGVar1,"Rotation",(MethodInfo *)0x0);
              if (pIVar5 != (Il2CppObject *)0x0) {
                puVar6 = &"Gizmo: Rotation";
                goto LAB_04128305;
              }
            }
          }
        }
      }
    }
  }
LAB_04128327:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnDeleteMap
// il2cpp: void UI_MapEditorTopPanel__OnDeleteMap (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128670

void UI_MapEditorTopPanel__OnDeleteMap(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *name;
  
  if (DAT_05704920 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704920 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
      (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
     (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    name = (pSVar3->fields)._value;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) != 0) {
      Map_BuiltinLevels__DeleteCustomMap(name,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    Map_BuiltinLevels__DeleteCustomMap(name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnNewFinish
// il2cpp: void UI_MapEditorTopPanel__OnNewFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128700

void UI_MapEditorTopPanel__OnNewFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *__this_00;
  System_String_o *name;
  long *plVar4;
  Map_MapScript_o *script;
  
  if (DAT_05704921 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704921 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if ((((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
      (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._currentMap, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar3->fields)._value,
               MethodInfo_Void_set_Value);
    pSVar3 = (__this->fields)._currentMap;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      name = (pSVar3->fields)._value;
      script = Map_MapScript__CreateDefault((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
      plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x238))();
        ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnRenameFinish
// il2cpp: void UI_MapEditorTopPanel__OnRenameFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128820

void UI_MapEditorTopPanel__OnRenameFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_SelectListPopup_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *a;
  GameManagers_MapEditorGameManager_o *pGVar5;
  System_String_o *name;
  Map_MapScript_o *script;
  long *plVar6;
  bool_conflict bVar7;
  
  if (DAT_05704922 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704922 = '\x01';
  }
  pSVar1 = (__this->fields)._currentMap;
  if ((((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (pUVar2 = (__this->fields)._menu, pUVar2 != (UI_MapEditorMenu_o *)0x0)) &&
      (pUVar3 = (pUVar2->fields).SelectListPopup, pUVar3 != (UI_SelectListPopup_o *)0x0)) &&
     (pSVar4 = (pUVar3->fields).FinishSetting, pSVar4 != (Settings_StringSetting_o *)0x0)) {
    a = (pSVar1->fields)._value;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)(pSVar4->fields)._value,
               MethodInfo_Void_set_Value);
    pSVar1 = (__this->fields)._currentMap;
    if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (pGVar5 = (__this->fields)._gameManager, pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0
       )) {
      name = (pSVar1->fields)._value;
      script = (pGVar5->fields).MapScript;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_BuiltinLevels__SaveCustomMap(name,script,(MethodInfo *)0x0);
      plVar6 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        pSVar1 = (__this->fields)._currentMap;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          bVar7 = System_String__op_Inequality(a,(pSVar1->fields)._value,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Map_BuiltinLevels__DeleteCustomMap(a,(MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnOpenFinish
// il2cpp: void UI_MapEditorTopPanel__OnOpenFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128990

void UI_MapEditorTopPanel__OnOpenFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *__this_00;
  long *plVar4;
  
  if (DAT_05704923 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704923 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if ((((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
      (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._currentMap, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar3->fields)._value,
               MethodInfo_Void_set_Value);
    plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x238))();
      ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnImportFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128a50

void UI_MapEditorTopPanel__OnImportFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *onConfirm;
  
  if (DAT_05704924 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__OnImportFinish_b__46_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Importing will overwrite current save.");
    DAT_05704924 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Importing will overwrite current save.",onConfirm,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnImportConfirm
// il2cpp: void UI_MapEditorTopPanel__OnImportConfirm (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128af0

void UI_MapEditorTopPanel__OnImportConfirm(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ImportPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *name;
  Map_MapScript_o *__this_00;
  
  if (DAT_05704925 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704925 = '\x01';
  }
  __this_00 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
  Map_MapScript___ctor(__this_00,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar2 = (pUVar1->fields).ImportPopup;
  if (pUVar2 == (UI_ImportPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (pUVar2->fields).ImportSetting;
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    if (__this_00 == (Map_MapScript_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(__this_00->klass->vtable)._5_Deserialize.methodPtr)
              (__this_00,(pSVar3->fields)._value,(__this_00->klass->vtable)._5_Deserialize.method);
    pSVar3 = (__this->fields)._currentMap;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      name = (pSVar3->fields)._value;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_BuiltinLevels__SaveCustomMap(name,__this_00,(MethodInfo *)0x0);
      ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnImportPresetFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportPresetFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128d00

void UI_MapEditorTopPanel__OnImportPresetFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *onConfirm;
  
  if (DAT_05704926 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__OnImportPresetFinish_b__48_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Loading preset will overwrite current save.");
    DAT_05704926 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Loading preset will overwrite current save.",onConfirm,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnImportAutosaveFinish
// il2cpp: void UI_MapEditorTopPanel__OnImportAutosaveFinish (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128da0

void UI_MapEditorTopPanel__OnImportAutosaveFinish(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *onConfirm;
  
  if (DAT_05704927 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__OnImportAutosaveFinish_b__49_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Loading autosave will overwrite current save.");
    DAT_05704927 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    __this_00 = (pUVar1->fields).ConfirmPopup;
    onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show
                (__this_00,"Loading autosave will overwrite current save.",onConfirm,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnImportPresetConfirm
// il2cpp: void UI_MapEditorTopPanel__OnImportPresetConfirm (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128e40

void UI_MapEditorTopPanel__OnImportPresetConfirm(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_SelectListPopup_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *name;
  System_String_array *pSVar5;
  Map_MapScript_o *__this_00;
  System_String_o *pSVar6;
  
  if (DAT_05704928 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704928 = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if ((((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar3 = (pUVar2->fields).SelectListPopup, pUVar3 != (UI_SelectListPopup_o *)0x0)) &&
      (pSVar4 = (pUVar3->fields).FinishSetting, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar6 = (pSVar4->fields)._value, pSVar6 != (System_String_o *)0x0)) {
    pSVar5 = System_String__Split(pSVar6,0x2f,0,(MethodInfo *)0x0);
    if (pSVar5 != (System_String_array *)0x0) {
      iVar1 = (int)pSVar5->max_length;
      if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = pSVar5->m_Items[0];
      name = pSVar5->m_Items[1];
      __this_00 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
      Map_MapScript___ctor(__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = Map_BuiltinLevels__LoadMap(pSVar6,name,(MethodInfo *)0x0);
      if (__this_00 != (Map_MapScript_o *)0x0) {
        (*(__this_00->klass->vtable)._5_Deserialize.methodPtr)
                  (__this_00,pSVar6,(__this_00->klass->vtable)._5_Deserialize.method);
        pSVar4 = (__this->fields)._currentMap;
        if (pSVar4 != (Settings_StringSetting_o *)0x0) {
          Map_BuiltinLevels__SaveCustomMap((pSVar4->fields)._value,__this_00,(MethodInfo *)0x0);
          ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$OnImportAutosaveConfirm
// il2cpp: void UI_MapEditorTopPanel__OnImportAutosaveConfirm (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4128f90

void UI_MapEditorTopPanel__OnImportAutosaveConfirm
               (UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_SelectListPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  Map_MapScript_o *__this_00;
  System_String_o *pSVar4;
  
  if (DAT_05704929 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704929 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
      (pUVar2 = (pUVar1->fields).SelectListPopup, pUVar2 != (UI_SelectListPopup_o *)0x0)) &&
     (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    pSVar4 = (pSVar3->fields)._value;
    __this_00 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
    Map_MapScript___ctor(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = Map_BuiltinLevels__LoadAutosave(pSVar4,(MethodInfo *)0x0);
    if (__this_00 != (Map_MapScript_o *)0x0) {
      (*(__this_00->klass->vtable)._5_Deserialize.methodPtr)
                (__this_00,pSVar4,(__this_00->klass->vtable)._5_Deserialize.method);
      pSVar3 = (__this->fields)._currentMap;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Map_BuiltinLevels__SaveCustomMap((pSVar3->fields)._value,__this_00,(MethodInfo *)0x0);
        ApplicationManagers_SceneLoader__LoadScene(3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$.ctor
// il2cpp: void UI_MapEditorTopPanel___ctor (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129090

void UI_MapEditorTopPanel___ctor(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Settings_HashSetSetting_int__o *__this_02;
  System_Collections_Generic_List_DropdownSelectElement__o *__this_03;
  
  if (DAT_0570492a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSetSetting_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSetSetting_int);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_DropdownSelectElement);
    il2cpp_init_method_metadata(&TypeInfo_List_DropdownSelectElement);
    DAT_0570492a = '\x01';
  }
  __this_00 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(__this_00,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._dropdownSelection = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._dropdownSelection,__this_00);
  __this_01 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet<int>___ctor(__this_01,MethodInfo_HashSet_1_System_Int32);
  if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet<int>__Add(__this_01,0,MethodInfo_Boolean_Add);
    __this_02 = (Settings_HashSetSetting_int__o *)il2cpp_runtime_glue(TypeInfo_HashSetSetting_int);
    Settings_HashSetSetting<int>___ctor
              (__this_02,(System_Collections_Generic_HashSet_T__o *)__this_01,MethodInfo_HashSetSetting_1_System_Int32);
    (__this->fields)._layerSelection = __this_02;
    il2cpp_runtime_glue(&(__this->fields)._layerSelection,__this_02);
    __this_03 = (System_Collections_Generic_List_DropdownSelectElement__o *)
                il2cpp_runtime_glue(TypeInfo_List_DropdownSelectElement);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UI_DropdownSelectElement);
    (__this->fields)._dropdowns = __this_03;
    il2cpp_runtime_glue(&(__this->fields)._dropdowns);
    UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$<Setup>b__28_0
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129220

void UI_MapEditorTopPanel__<Setup>b__28_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnFileClick(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_1
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_1 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129230

void UI_MapEditorTopPanel__<Setup>b__28_1(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnEditClick(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_2
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_2 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129240

void UI_MapEditorTopPanel__<Setup>b__28_2(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnOptionsClick(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_3
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_3 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129250

void UI_MapEditorTopPanel__<Setup>b__28_3(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570492b == '\0') {
    il2cpp_init_method_metadata(&"AddObject");
    DAT_0570492b = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"AddObject",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_4
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_4 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129290

void UI_MapEditorTopPanel__<Setup>b__28_4(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570492c == '\0') {
    il2cpp_init_method_metadata(&"Gizmo");
    DAT_0570492c = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"Gizmo",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_5
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_5 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41292d0

void UI_MapEditorTopPanel__<Setup>b__28_5(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570492d == '\0') {
    il2cpp_init_method_metadata(&"GizmoOrientation");
    DAT_0570492d = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"GizmoOrientation",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_6
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_6 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129310

void UI_MapEditorTopPanel__<Setup>b__28_6(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570492e == '\0') {
    il2cpp_init_method_metadata(&"Snap");
    DAT_0570492e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"Snap",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_7
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_7 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129350

void UI_MapEditorTopPanel__<Setup>b__28_7(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570492f == '\0') {
    il2cpp_init_method_metadata(&"Brush");
    DAT_0570492f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"Brush",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_8
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_8 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129390

void UI_MapEditorTopPanel__<Setup>b__28_8(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704930 == '\0') {
    il2cpp_init_method_metadata(&"Camera");
    DAT_05704930 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"Camera",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_9
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_9 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41293d0

void UI_MapEditorTopPanel__<Setup>b__28_9(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704931 == '\0') {
    il2cpp_init_method_metadata(&"Light");
    DAT_05704931 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"Light",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<Setup>b__28_10
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_10 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129410

void UI_MapEditorTopPanel__<Setup>b__28_10(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  GameManagers_MapEditorGameManager_o *__this_01;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    bVar1 = UI_MapEditorMenu__IsPopupActive(__this_00,method);
    if ((char)bVar1 != '\0') {
      return;
    }
    __this_01 = (__this->fields)._gameManager;
    if (__this_01 != (GameManagers_MapEditorGameManager_o *)0x0) {
      GameManagers_MapEditorGameManager__SetLayerVisibility
                (__this_01,(__this->fields)._layerSelection,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTopPanel$$<Setup>b__28_11
// il2cpp: void UI_MapEditorTopPanel___Setup_b__28_11 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129450

void UI_MapEditorTopPanel__<Setup>b__28_11(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704932 == '\0') {
    il2cpp_init_method_metadata(&"Tutorial");
    DAT_05704932 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorTopPanel__OnButtonClick(__this,"Tutorial",in_RDX);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_5
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_5 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129490

void UI_MapEditorTopPanel__<OnFileClick>b__30_5(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnNewFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_6
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_6 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41294a0

void UI_MapEditorTopPanel__<OnFileClick>b__30_6(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_0
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41294b0

void UI_MapEditorTopPanel__<OnFileClick>b__30_0(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnOpenFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_1
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_1 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41294c0

void UI_MapEditorTopPanel__<OnFileClick>b__30_1(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_2
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_2 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41294d0

void UI_MapEditorTopPanel__<OnFileClick>b__30_2(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnRenameFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_3
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_3 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41294e0

void UI_MapEditorTopPanel__<OnFileClick>b__30_3(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnDeleteMap(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_4
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_4 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x41294f0

void UI_MapEditorTopPanel__<OnFileClick>b__30_4(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_7
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_7 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129500

void UI_MapEditorTopPanel__<OnFileClick>b__30_7(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportPresetFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnFileClick>b__30_9
// il2cpp: void UI_MapEditorTopPanel___OnFileClick_b__30_9 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129510

void UI_MapEditorTopPanel__<OnFileClick>b__30_9(UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportAutosaveFinish(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnImportFinish>b__46_0
// il2cpp: void UI_MapEditorTopPanel___OnImportFinish_b__46_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129520

void UI_MapEditorTopPanel__<OnImportFinish>b__46_0
               (UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportConfirm(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnImportPresetFinish>b__48_0
// il2cpp: void UI_MapEditorTopPanel___OnImportPresetFinish_b__48_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129530

void UI_MapEditorTopPanel__<OnImportPresetFinish>b__48_0
               (UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportPresetConfirm(__this,method);
  return;
}


// UI.MapEditorTopPanel$$<OnImportAutosaveFinish>b__49_0
// il2cpp: void UI_MapEditorTopPanel___OnImportAutosaveFinish_b__49_0 (UI_MapEditorTopPanel_o* __this, const MethodInfo* method);
// 0x4129540

void UI_MapEditorTopPanel__<OnImportAutosaveFinish>b__49_0
               (UI_MapEditorTopPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel__OnImportAutosaveConfirm(__this,method);
  return;
}


