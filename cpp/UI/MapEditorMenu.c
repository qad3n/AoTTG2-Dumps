// Type: UI.MapEditorMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorMenu.cs
// --------------------------------

// UI.MapEditorMenu$$Setup
// il2cpp: void UI_MapEditorMenu__Setup (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4436540

void UI_MapEditorMenu__Setup(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  UI_MapEditorTopPanel_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  
  if (g_data_057ae693 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorTopPanel_CreateHeadedPanel_MapEditorTopPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/MapEditorDragImage");
    g_data_057ae693 = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = (UI_MapEditorTopPanel_o *)UI_ElementFactory__CreateHeadedPanel_object_(pUVar2,1,MethodInfo_MapEditorTopPanel_CreateHeadedPanel_MapEditorTopPanel);
  (__this->fields)._topPanel = pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._topPanel);
  pUVar3 = (__this->fields)._topPanel;
  if (pUVar3 != (UI_MapEditorTopPanel_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar4,1,1,(UnityEngine_Vector2_o)0x40a00000c0a00000,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__InstantiateAndBind(pUVar2,"Prefabs/Misc/MapEditorDragImage",(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = (UnityEngine_UI_Image_o *)UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_Image_GetComponent_Image);
      ppUVar1 = &(__this->fields).DragImage;
      (__this->fields).DragImage = pUVar5;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      pUVar5 = (__this->fields).DragImage;
      if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        UI_ElementFactory__SetAnchor
                  (pUVar4,6,6,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pUVar5 = *ppUVar1;
        if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MapEditorMenu$$SetupPopups
// il2cpp: void UI_MapEditorMenu__SetupPopups (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x44366e0

void UI_MapEditorMenu__SetupPopups(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_MapEditorTexturePopup_o **ppUVar2;
  UI_MapEditorBrushPanel_o **ppUVar3;
  void **ppvVar4;
  uint uVar5;
  UI_MapEditorTexturePopup_o *__this_00;
  UI_BasePopup_array *pUVar6;
  Map_MapObject_array *pMVar7;
  Settings_BoolSetting_o *x;
  Settings_IntSetting_o *pSVar8;
  long *plVar9;
  UI_BasePanel_o *__this_01;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  bool_conflict bVar15;
  UnityEngine_Transform_o *pUVar16;
  UI_MapEditorAddObjectPopup_o *pUVar17;
  UI_MapEditorAddVariantPopup_o *pUVar18;
  UI_MapEditorCameraPopup_o *pUVar19;
  UnityEngine_GameObject_o *pUVar20;
  UI_MapEditorInfoPopup_o *pUVar21;
  UI_MapEditorSettingsPopup_o *pUVar22;
  UI_MapEditorCustomLogicPopup_o *pUVar23;
  UI_MapEditorAddComponentPopup_o *pUVar24;
  UI_MapEditorErrorPopup_o *pUVar25;
  UI_MapEditorCustomAssetPopup_o *pUVar26;
  UnityEngine_Canvas_o *__this_02;
  UnityEngine_RectTransform_o *pUVar27;
  System_Collections_Generic_List_MapObject__o *objs;
  UnityEngine_Object_o *pUVar28;
  UI_MapEditorBrushPanel_o *pUVar29;
  Il2CppObject *pIVar30;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar31;
  MethodInfo *method_00;
  System_Collections_Generic_List_BasePopup__o *pSVar32;
  System_Collections_Generic_List_BasePopup__c *__this_03;
  System_Collections_Generic_List_MapObject__o *pSVar33;
  UI_MapEditorMenu_o *__this_04;
  long lVar34;
  UnityEngine_Component_o *__this_05;
  Settings_IntSetting_o *x_00;
  UI_BasePanel_o *pUVar35;
  undefined8 *puVar36;
  float fVar37;
  UnityEngine_Vector2_o value;
  undefined8 uVar38;
  undefined4 extraout_XMM0_Dc;
  undefined8 extraout_XMM0_Qb;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fStack_40;
  float fStack_3c;
  
  if (g_data_057ae694 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorAddComponentPopup_CreateDefaultPopup_MapEditorA);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorAddObjectPopup_CreateDefaultPopup_MapEditorAddO);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorAddVariantPopup_CreateDefaultPopup_MapEditorAdd);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorCameraPopup_CreateDefaultPopup_MapEditorCameraP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorCustomAssetPopup_CreateDefaultPopup_MapEditorCu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorCustomLogicPopup_CreateDefaultPopup_MapEditorCu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorErrorPopup_CreateDefaultPopup_MapEditorErrorPop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorInfoPopup_CreateDefaultPopup_MapEditorInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorSettingsPopup_CreateDefaultPopup_MapEditorSetti);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorTexturePopup_CreateDefaultPopup_MapEditorTextur);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorWeatherPopup_CreateDefaultPopup_MapEditorWeathe);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae694 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar17 = (UI_MapEditorAddObjectPopup_o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorAddObjectPopup_CreateDefaultPopup_MapEditorAddO);
  (__this->fields).AddObjectPopup = pUVar17;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AddObjectPopup);
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar18 = (UI_MapEditorAddVariantPopup_o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorAddVariantPopup_CreateDefaultPopup_MapEditorAdd);
  (__this->fields).AddVariantPopup = pUVar18;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AddVariantPopup);
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar19 = (UI_MapEditorCameraPopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorTexturePopup_CreateDefaultPopup_MapEditorTextur)
  ;
  ppUVar2 = &(__this->fields).TexturePopup;
  (__this->fields).TexturePopup = (UI_MapEditorTexturePopup_o *)pUVar19;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  pUVar17 = (__this->fields).AddObjectPopup;
  pSVar32 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  if (pUVar17 != (UI_MapEditorAddObjectPopup_o *)0x0) {
    pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
    pUVar19 = (UI_MapEditorCameraPopup_o *)&g_data_00000004;
    UI_ElementFactory__SetAnchor(pUVar20,4,4,(UnityEngine_Vector2_o)0xc2820000,(MethodInfo *)0x0);
    __this_00 = *ppUVar2;
    pSVar32 = (System_Collections_Generic_List_BasePopup__o *)0x0;
    if (__this_00 != (UI_MapEditorTexturePopup_o *)0x0) {
      pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar20,4,4,(UnityEngine_Vector2_o)0xc2820000,(MethodInfo *)0x0);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar19 = (UI_MapEditorCameraPopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorCameraPopup_CreateDefaultPopup_MapEditorCameraP);
      (__this->fields).CameraPopup = pUVar19;
      il2cpp_runtime_helper_022b4080(&(__this->fields).CameraPopup);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar21 = (UI_MapEditorInfoPopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorInfoPopup_CreateDefaultPopup_MapEditorInfoPopup);
      (__this->fields).InfoPopup = pUVar21;
      il2cpp_runtime_helper_022b4080(&(__this->fields).InfoPopup);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar22 = (UI_MapEditorSettingsPopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorSettingsPopup_CreateDefaultPopup_MapEditorSetti);
      (__this->fields).SettingsPopup = pUVar22;
      il2cpp_runtime_helper_022b4080(&(__this->fields).SettingsPopup);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar23 = (UI_MapEditorCustomLogicPopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorCustomLogicPopup_CreateDefaultPopup_MapEditorCu);
      (__this->fields).CustomLogicPopup = pUVar23;
      il2cpp_runtime_helper_022b4080(&(__this->fields).CustomLogicPopup);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar24 = (UI_MapEditorAddComponentPopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorAddComponentPopup_CreateDefaultPopup_MapEditorA);
      (__this->fields).AddComponentPopup = pUVar24;
      il2cpp_runtime_helper_022b4080(&(__this->fields).AddComponentPopup);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar25 = (UI_MapEditorErrorPopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorErrorPopup_CreateDefaultPopup_MapEditorErrorPop);
      (__this->fields).ErrorPopup = pUVar25;
      il2cpp_runtime_helper_022b4080(&(__this->fields).ErrorPopup);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar26 = (UI_MapEditorCustomAssetPopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorCustomAssetPopup_CreateDefaultPopup_MapEditorCu);
      (__this->fields).CustomAssetsPopup = pUVar26;
      il2cpp_runtime_helper_022b4080(&(__this->fields).CustomAssetsPopup);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar19 = (UI_MapEditorCameraPopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapEditorWeatherPopup_CreateDefaultPopup_MapEditorWeathe);
      (__this->fields).WeatherPopup = (UI_MapEditorWeatherPopup_o *)pUVar19;
      il2cpp_runtime_helper_022b4080(&(__this->fields).WeatherPopup);
      lVar34 = MethodInfo_Void_Add;
      pSVar32 = (__this->fields)._popups;
      if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar19 = (UI_MapEditorCameraPopup_o *)(__this->fields).AddObjectPopup;
        piVar1 = &(pSVar32->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (pSVar32->fields)._items;
        if (pUVar6 != (UI_BasePopup_array *)0x0) {
          uVar5 = (pSVar32->fields)._size;
          if (uVar5 < (uint)pUVar6->max_length) {
            (pSVar32->fields)._size = uVar5 + 1;
            pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
            il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
            pSVar32 = (__this->fields)._popups;
            lVar34 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar32,(Il2CppObject *)pUVar19,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
            pSVar32 = (__this->fields)._popups;
            lVar34 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar34;
          if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar19 = (UI_MapEditorCameraPopup_o *)(__this->fields).AddVariantPopup;
            piVar1 = &(pSVar32->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar6 = (pSVar32->fields)._items;
            if (pUVar6 != (UI_BasePopup_array *)0x0) {
              uVar5 = (pSVar32->fields)._size;
              if (uVar5 < (uint)pUVar6->max_length) {
                (pSVar32->fields)._size = uVar5 + 1;
                pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                pSVar32 = (__this->fields)._popups;
                lVar34 = MethodInfo_Void_Add;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar32,(Il2CppObject *)pUVar19,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
                pSVar32 = (__this->fields)._popups;
                lVar34 = MethodInfo_Void_Add;
              }
              MethodInfo_Void_Add = lVar34;
              if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                pUVar19 = (UI_MapEditorCameraPopup_o *)(__this->fields).TexturePopup;
                piVar1 = &(pSVar32->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar6 = (pSVar32->fields)._items;
                if (pUVar6 != (UI_BasePopup_array *)0x0) {
                  uVar5 = (pSVar32->fields)._size;
                  if (uVar5 < (uint)pUVar6->max_length) {
                    (pSVar32->fields)._size = uVar5 + 1;
                    pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                    il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                    pSVar32 = (__this->fields)._popups;
                    lVar34 = MethodInfo_Void_Add;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar32,(Il2CppObject *)pUVar19,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
                    pSVar32 = (__this->fields)._popups;
                    lVar34 = MethodInfo_Void_Add;
                  }
                  MethodInfo_Void_Add = lVar34;
                  if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    pUVar19 = (__this->fields).CameraPopup;
                    piVar1 = &(pSVar32->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar6 = (pSVar32->fields)._items;
                    if (pUVar6 != (UI_BasePopup_array *)0x0) {
                      uVar5 = (pSVar32->fields)._size;
                      if (uVar5 < (uint)pUVar6->max_length) {
                        (pSVar32->fields)._size = uVar5 + 1;
                        pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                        il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                        pSVar32 = (__this->fields)._popups;
                        lVar34 = MethodInfo_Void_Add;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar32,
                                   (Il2CppObject *)pUVar19,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70)
                                  );
                        pSVar32 = (__this->fields)._popups;
                        lVar34 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar34;
                      if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                        pUVar19 = (UI_MapEditorCameraPopup_o *)(__this->fields).InfoPopup;
                        piVar1 = &(pSVar32->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar6 = (pSVar32->fields)._items;
                        if (pUVar6 != (UI_BasePopup_array *)0x0) {
                          uVar5 = (pSVar32->fields)._size;
                          if (uVar5 < (uint)pUVar6->max_length) {
                            (pSVar32->fields)._size = uVar5 + 1;
                            pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                            il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                            pSVar32 = (__this->fields)._popups;
                            lVar34 = MethodInfo_Void_Add;
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar32,
                                       (Il2CppObject *)pUVar19,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
                            pSVar32 = (__this->fields)._popups;
                            lVar34 = MethodInfo_Void_Add;
                          }
                          MethodInfo_Void_Add = lVar34;
                          if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                            pUVar19 = (UI_MapEditorCameraPopup_o *)(__this->fields).SettingsPopup;
                            piVar1 = &(pSVar32->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar6 = (pSVar32->fields)._items;
                            if (pUVar6 != (UI_BasePopup_array *)0x0) {
                              uVar5 = (pSVar32->fields)._size;
                              if (uVar5 < (uint)pUVar6->max_length) {
                                (pSVar32->fields)._size = uVar5 + 1;
                                pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                                il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                                pSVar32 = (__this->fields)._popups;
                                lVar34 = MethodInfo_Void_Add;
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar32,
                                           (Il2CppObject *)pUVar19,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
                                pSVar32 = (__this->fields)._popups;
                                lVar34 = MethodInfo_Void_Add;
                              }
                              MethodInfo_Void_Add = lVar34;
                              if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                pUVar19 = (UI_MapEditorCameraPopup_o *)(__this->fields).CustomLogicPopup;
                                piVar1 = &(pSVar32->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pUVar6 = (pSVar32->fields)._items;
                                if (pUVar6 != (UI_BasePopup_array *)0x0) {
                                  uVar5 = (pSVar32->fields)._size;
                                  if (uVar5 < (uint)pUVar6->max_length) {
                                    (pSVar32->fields)._size = uVar5 + 1;
                                    pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                                    il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                                    pSVar32 = (__this->fields)._popups;
                                    lVar34 = MethodInfo_Void_Add;
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar32,
                                               (Il2CppObject *)pUVar19,
                                               *(MethodInfo_362C220 **)
                                                (*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
                                    pSVar32 = (__this->fields)._popups;
                                    lVar34 = MethodInfo_Void_Add;
                                  }
                                  MethodInfo_Void_Add = lVar34;
                                  if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                    pUVar19 = (UI_MapEditorCameraPopup_o *)(__this->fields).AddComponentPopup;
                                    piVar1 = &(pSVar32->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar6 = (pSVar32->fields)._items;
                                    if (pUVar6 != (UI_BasePopup_array *)0x0) {
                                      uVar5 = (pSVar32->fields)._size;
                                      if (uVar5 < (uint)pUVar6->max_length) {
                                        (pSVar32->fields)._size = uVar5 + 1;
                                        pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                                        il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                                        pSVar32 = (__this->fields)._popups;
                                        lVar34 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pSVar32,
                                                   (Il2CppObject *)pUVar19,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
                                        pSVar32 = (__this->fields)._popups;
                                        lVar34 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar34;
                                      if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                        pUVar19 = (UI_MapEditorCameraPopup_o *)(__this->fields).ErrorPopup;
                                        piVar1 = &(pSVar32->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar6 = (pSVar32->fields)._items;
                                        if (pUVar6 != (UI_BasePopup_array *)0x0) {
                                          uVar5 = (pSVar32->fields)._size;
                                          if (uVar5 < (uint)pUVar6->max_length) {
                                            (pSVar32->fields)._size = uVar5 + 1;
                                            pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                                            il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                                            pSVar32 = (__this->fields)._popups;
                                            lVar34 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)pSVar32,
                                                       (Il2CppObject *)pUVar19,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
                                            pSVar32 = (__this->fields)._popups;
                                            lVar34 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar34;
                                          if (pSVar32 != (System_Collections_Generic_List_BasePopup__o *)0x0)
                                          {
                                            pUVar19 = (UI_MapEditorCameraPopup_o *)
                                                      (__this->fields).CustomAssetsPopup;
                                            piVar1 = &(pSVar32->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar6 = (pSVar32->fields)._items;
                                            if (pUVar6 != (UI_BasePopup_array *)0x0) {
                                              uVar5 = (pSVar32->fields)._size;
                                              if (uVar5 < (uint)pUVar6->max_length) {
                                                (pSVar32->fields)._size = uVar5 + 1;
                                                pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                                                il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
                                                pSVar32 = (__this->fields)._popups;
                                                lVar34 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)
                                                           pSVar32,(Il2CppObject *)pUVar19,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70
                                                            ));
                                                pSVar32 = (__this->fields)._popups;
                                                lVar34 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar34;
                                              if (pSVar32 !=
                                                  (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                pUVar19 = (UI_MapEditorCameraPopup_o *)
                                                          (__this->fields).WeatherPopup;
                                                piVar1 = &(pSVar32->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar6 = (pSVar32->fields)._items;
                                                if (pUVar6 != (UI_BasePopup_array *)0x0) {
                                                  uVar5 = (pSVar32->fields)._size;
                                                  if ((uint)pUVar6->max_length <= uVar5) {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               pSVar32,(Il2CppObject *)pUVar19,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) +
                                                                0x70));
                                                    return;
                                                  }
                                                  (pSVar32->fields)._size = uVar5 + 1;
                                                  pUVar6->m_Items[(int)uVar5] = (UI_BasePopup_o *)pUVar19;
                                                  il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar5);
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
  uVar38 = il2cpp_runtime_helper_022b2c90();
  cVar14 = (char)pUVar19;
  if (g_data_057ae695 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae695 = '\x01';
  }
  __this_03 = pSVar32[7].klass;
  if (__this_03 != (System_Collections_Generic_List_BasePopup__c *)0x0) {
    pUVar19 = (UI_MapEditorCameraPopup_o *)0x0;
    pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
      pUVar19 = (UI_MapEditorCameraPopup_o *)0x0;
      bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
      if (cVar14 == '\0') {
        if ((char)bVar15 == '\0') {
          return;
        }
        __this_03 = pSVar32[7].klass;
        if (__this_03 != (System_Collections_Generic_List_BasePopup__c *)0x0) {
          pUVar19 = (UI_MapEditorCameraPopup_o *)0x0;
          pUVar20 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if ((char)bVar15 == '\0') {
        __this_03 = pSVar32[7].klass;
        if (__this_03 != (System_Collections_Generic_List_BasePopup__c *)0x0) {
          pUVar19 = (UI_MapEditorCameraPopup_o *)0x0;
          pUVar20 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
            pUVar19 = (UI_MapEditorCameraPopup_o *)0x1;
            UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
            goto label_04436f73;
          }
        }
      }
      else {
label_04436f73:
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = *(System_Collections_Generic_List_BasePopup__c **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if ((__this_03 != (System_Collections_Generic_List_BasePopup__c *)0x0) &&
           (pUVar19 = MethodInfo_Canvas_GetComponent_Canvas,
           __this_02 = (UnityEngine_Canvas_o *)
                       UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas),
           __this_02 != (UnityEngine_Canvas_o *)0x0)) {
          pUVar19 = (UI_MapEditorCameraPopup_o *)0x0;
          fVar37 = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
          __this_03 = pSVar32[7].klass;
          if (__this_03 != (System_Collections_Generic_List_BasePopup__c *)0x0) {
            pUVar19 = (UI_MapEditorCameraPopup_o *)0x0;
            pUVar27 = UnityEngine_UI_Graphic__get_rectTransform
                                ((UnityEngine_UI_Graphic_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar27 != (UnityEngine_RectTransform_o *)0x0) {
              auVar12._8_8_ = extraout_XMM0_Qb;
              auVar12._0_8_ = uVar38;
              auVar39._4_4_ = in_XMM1_Db;
              auVar39._0_4_ = in_XMM1_Da;
              auVar39._8_4_ = in_XMM1_Dc;
              auVar39._12_4_ = in_XMM1_Dd;
              auVar39 = minps(auVar12,auVar39);
              auVar40._4_4_ = fVar37;
              auVar40._0_4_ = fVar37;
              auVar40._8_4_ = extraout_XMM0_Dc;
              auVar40._12_4_ = extraout_XMM0_Dd;
              auVar40 = divps(auVar39,auVar40);
              pUVar19 = (UI_MapEditorCameraPopup_o *)0x0;
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar27,(UnityEngine_Vector2_o)auVar40._0_8_,(MethodInfo *)0x0);
              __this_03 = pSVar32[7].klass;
              if (__this_03 != (System_Collections_Generic_List_BasePopup__c *)0x0) {
                pUVar19 = (UI_MapEditorCameraPopup_o *)0x0;
                pUVar27 = UnityEngine_UI_Graphic__get_rectTransform
                                    ((UnityEngine_UI_Graphic_o *)__this_03,(MethodInfo *)0x0);
                if (pUVar27 != (UnityEngine_RectTransform_o *)0x0) {
                  auVar13._8_8_ = extraout_XMM0_Qb;
                  auVar13._0_8_ = uVar38;
                  auVar11._4_4_ = in_XMM1_Db;
                  auVar11._0_4_ = in_XMM1_Da;
                  auVar11._8_4_ = in_XMM1_Dc;
                  auVar11._12_4_ = in_XMM1_Dd;
                  auVar39 = maxps(auVar13,auVar11);
                  auVar10._4_4_ = fVar37;
                  auVar10._0_4_ = fVar37;
                  auVar10._8_4_ = extraout_XMM0_Dc;
                  auVar10._12_4_ = extraout_XMM0_Dd;
                  auVar39 = divps(auVar39,auVar10);
                  fStack_40 = auVar40._0_4_;
                  fStack_3c = auVar40._4_4_;
                  value.fields.x = auVar39._0_4_ - fStack_40;
                  value.fields.y = auVar39._4_4_ - fStack_3c;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar27,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae696 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    g_data_057ae696 = '\x01';
  }
  objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
  pSVar33 = objs;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)objs,MethodInfo_List_1_Map_MapObject);
  lVar34 = MethodInfo_Void_Add;
  if (objs != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(objs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar7 = (objs->fields)._items;
    if (pMVar7 != (Map_MapObject_array *)0x0) {
      uVar5 = (objs->fields)._size;
      if (uVar5 < (uint)pMVar7->max_length) {
        (objs->fields)._size = uVar5 + 1;
        pMVar7->m_Items[(int)uVar5] = (Map_MapObject_o *)pUVar19;
        il2cpp_runtime_helper_022b4080(pMVar7->m_Items + (int)uVar5,pUVar19);
        pMVar31 = extraout_RDX;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)objs,(Il2CppObject *)pUVar19,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
        pMVar31 = extraout_RDX_00;
      }
      UI_MapEditorMenu__ShowInspector_4335270((UI_MapEditorMenu_o *)__this_03,objs,pMVar31);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae698 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae698 = '\x01';
  }
  pUVar28 = (UnityEngine_Object_o *)pSVar33[3].fields._syncRoot;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar31 = (MethodInfo *)0x0;
  bVar15 = UnityEngine_Object__op_Inequality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return;
  }
  __this_04 = (UI_MapEditorMenu_o *)pSVar33[3].fields._syncRoot;
  if (__this_04 != (UI_MapEditorMenu_o *)0x0) {
    pUVar28 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar28,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae699 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae699 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this_04,pMVar31);
  pUVar29 = (__this_04->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar3 = &(__this_04->fields).BrushPanel;
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
label_044372dc:
    pUVar29 = *ppUVar3;
    if (pUVar29 != (UI_MapEditorBrushPanel_o *)0x0) {
      UI_MapEditorBrushPanel__Show(pUVar29,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    pUVar29 = (UI_MapEditorBrushPanel_o *)UI_ElementFactory__CreateHeadedPanel_object_(pUVar16,0,MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane)
    ;
    (__this_04->fields).BrushPanel = pUVar29;
    il2cpp_runtime_helper_022b4080(ppUVar3);
    pUVar29 = (__this_04->fields).BrushPanel;
    if (pUVar29 != (UI_MapEditorBrushPanel_o *)0x0) {
      pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar29,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar20,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
      goto label_044372dc;
    }
  }
  lVar34 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69a = '\x01';
  }
  pUVar28 = *(UnityEngine_Object_o **)(lVar34 + 0xa0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return;
  }
  puVar36 = (undefined8 *)(lVar34 + 0xa0);
  __this_05 = (UnityEngine_Component_o *)*puVar36;
  if (__this_05 != (UnityEngine_Component_o *)0x0) {
    pUVar28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_05,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar28,(MethodInfo *)0x0);
    *puVar36 = 0;
    il2cpp_runtime_helper_022b4080(puVar36,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69b = '\x01';
  }
  pUVar28 = (UnityEngine_Object_o *)__this_05[6].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return;
  }
  pUVar29 = (UI_MapEditorBrushPanel_o *)__this_05[6].fields.m_CachedPtr;
  if (pUVar29 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Rebuild(pUVar29,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69c = '\x01';
  }
  x = (pUVar29->fields)._randomize;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return;
  }
  pUVar29 = (UI_MapEditorBrushPanel_o *)(pUVar29->fields)._randomize;
  if (pUVar29 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__SyncValues(pUVar29,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x_00 = (pUVar29->fields)._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return;
  }
  pSVar8 = (pUVar29->fields)._count;
  if (pSVar8 != (Settings_IntSetting_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270
              ((UI_MapEditorMenu_o *)pUVar29,
               *(System_Collections_Generic_List_MapObject__o **)&pSVar8[4].fields.MinValue,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar28 = x_00[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar4 = &x_00[5].monitor;
  bVar15 = UnityEngine_Object__op_Inequality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
label_044375dc:
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
    pIVar30 = UI_ElementFactory__CreateHeadedPanel_object_(pUVar16,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    x_00[5].monitor = pIVar30;
    il2cpp_runtime_helper_022b4080(ppvVar4);
    if (x_00[5].monitor != (UnityEngine_Component_o *)0x0) {
      pUVar20 = UnityEngine_Component__get_gameObject(x_00[5].monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar20,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      plVar9 = *ppvVar4;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x288))(plVar9,*(undefined8 *)(*plVar9 + 0x290));
        return;
      }
    }
  }
  else if (*ppvVar4 != (UnityEngine_Component_o *)0x0) {
    pUVar28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar28,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar34 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar28 = *(UnityEngine_Object_o **)(lVar34 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return;
  }
  pUVar35 = *(UI_BasePanel_o **)(lVar34 + 0xa8);
  if (pUVar35 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar35,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar16 = pUVar35[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar16 = pUVar35[1].fields.DoublePanelRight;
    if ((pUVar16 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      __this_01 = (UI_BasePanel_o *)pUVar35[1].fields.DoublePanelRight;
      if (__this_01 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_01,(MethodInfo *)0x0);
    }
  }
  pSVar32 = pUVar35[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pSVar32 = pUVar35[1].fields._popups;
    if ((pSVar32 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar32,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      pUVar35 = (UI_BasePanel_o *)pUVar35[1].fields._popups;
      if (pUVar35 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar35,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$SetDrag
// il2cpp: void UI_MapEditorMenu__SetDrag (UI_MapEditorMenu_o* __this, bool active, UnityEngine_Vector2_o start, UnityEngine_Vector2_o end, const MethodInfo* method);
// 0x4436ed0

void UI_MapEditorMenu__SetDrag
               (UI_MapEditorMenu_o *__this,bool_conflict active,UnityEngine_Vector2_o start,
               UnityEngine_Vector2_o end,MethodInfo *method)

{
  int32_t *piVar1;
  UI_MapEditorBrushPanel_o **ppUVar2;
  void **ppvVar3;
  uint uVar4;
  Map_MapObject_array *pMVar5;
  Settings_BoolSetting_o *x;
  Settings_IntSetting_o *pSVar6;
  long *plVar7;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool_conflict bVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_RectTransform_o *pUVar13;
  System_Collections_Generic_List_MapObject__o *objs;
  UnityEngine_Object_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UI_MapEditorBrushPanel_o *pUVar16;
  Il2CppObject *pIVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo_24E7B40 *item;
  UI_MapEditorMenu_o *pUVar19;
  System_Collections_Generic_List_MapObject__o *pSVar20;
  long lVar21;
  UnityEngine_Component_o *__this_02;
  Settings_IntSetting_o *x_00;
  UI_BasePanel_o *pUVar22;
  undefined8 *puVar23;
  float fVar24;
  UnityEngine_Vector2_o value;
  undefined4 extraout_XMM0_Dc;
  undefined8 in_XMM0_Qb;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float local_28;
  float fStack_24;
  
  item = (MethodInfo_24E7B40 *)CONCAT44(in_register_00000034,active);
  auVar27._8_4_ = in_XMM1_Dc;
  auVar27._0_8_ = end.fields;
  auVar27._12_4_ = in_XMM1_Dd;
  if (g_data_057ae695 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae695 = '\x01';
  }
  pUVar19 = (UI_MapEditorMenu_o *)(__this->fields).DragImage;
  if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
    item = (MethodInfo_24E7B40 *)0x0;
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
      item = (MethodInfo_24E7B40 *)0x0;
      bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
      if ((char)active == '\0') {
        if ((char)bVar11 == '\0') {
          return;
        }
        pUVar19 = (UI_MapEditorMenu_o *)(__this->fields).DragImage;
        if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
          item = (MethodInfo_24E7B40 *)0x0;
          pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if ((char)bVar11 == '\0') {
        pUVar19 = (UI_MapEditorMenu_o *)(__this->fields).DragImage;
        if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
          item = (MethodInfo_24E7B40 *)0x0;
          pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            item = (MethodInfo_24E7B40 *)0x1;
            UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
            goto label_04436f73;
          }
        }
      }
      else {
label_04436f73:
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar19 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if ((pUVar19 != (UI_MapEditorMenu_o *)0x0) &&
           (item = MethodInfo_Canvas_GetComponent_Canvas,
           __this_01 = (UnityEngine_Canvas_o *)
                       UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar19,MethodInfo_Canvas_GetComponent_Canvas),
           __this_01 != (UnityEngine_Canvas_o *)0x0)) {
          item = (MethodInfo_24E7B40 *)0x0;
          fVar24 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
          pUVar19 = (UI_MapEditorMenu_o *)(__this->fields).DragImage;
          if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
            item = (MethodInfo_24E7B40 *)0x0;
            pUVar13 = UnityEngine_UI_Graphic__get_rectTransform
                                ((UnityEngine_UI_Graphic_o *)pUVar19,(MethodInfo *)0x0);
            if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
              auVar25._8_8_ = in_XMM0_Qb;
              auVar25._0_8_ = start.fields;
              auVar25 = minps(auVar25,auVar27);
              auVar26._4_4_ = fVar24;
              auVar26._0_4_ = fVar24;
              auVar26._8_4_ = extraout_XMM0_Dc;
              auVar26._12_4_ = extraout_XMM0_Dd;
              auVar26 = divps(auVar25,auVar26);
              item = (MethodInfo_24E7B40 *)0x0;
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar13,(UnityEngine_Vector2_o)auVar26._0_8_,(MethodInfo *)0x0);
              pUVar19 = (UI_MapEditorMenu_o *)(__this->fields).DragImage;
              if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
                item = (MethodInfo_24E7B40 *)0x0;
                pUVar13 = UnityEngine_UI_Graphic__get_rectTransform
                                    ((UnityEngine_UI_Graphic_o *)pUVar19,(MethodInfo *)0x0);
                if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                  auVar10._8_8_ = in_XMM0_Qb;
                  auVar10._0_8_ = start.fields;
                  auVar27 = maxps(auVar10,auVar27);
                  auVar9._4_4_ = fVar24;
                  auVar9._0_4_ = fVar24;
                  auVar9._8_4_ = extraout_XMM0_Dc;
                  auVar9._12_4_ = extraout_XMM0_Dd;
                  auVar27 = divps(auVar27,auVar9);
                  local_28 = auVar26._0_4_;
                  fStack_24 = auVar26._4_4_;
                  value.fields.x = auVar27._0_4_ - local_28;
                  value.fields.y = auVar27._4_4_ - fStack_24;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar13,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae696 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    g_data_057ae696 = '\x01';
  }
  objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
  pSVar20 = objs;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)objs,MethodInfo_List_1_Map_MapObject);
  lVar21 = MethodInfo_Void_Add;
  if (objs != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(objs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar5 = (objs->fields)._items;
    if (pMVar5 != (Map_MapObject_array *)0x0) {
      uVar4 = (objs->fields)._size;
      if (uVar4 < (uint)pMVar5->max_length) {
        (objs->fields)._size = uVar4 + 1;
        pMVar5->m_Items[(int)uVar4] = (Map_MapObject_o *)item;
        il2cpp_runtime_helper_022b4080(pMVar5->m_Items + (int)uVar4,item);
        pMVar18 = extraout_RDX;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)objs,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        pMVar18 = extraout_RDX_00;
      }
      UI_MapEditorMenu__ShowInspector_4335270(pUVar19,objs,pMVar18);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae698 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae698 = '\x01';
  }
  pUVar14 = (UnityEngine_Object_o *)pSVar20[3].fields._syncRoot;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar18 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUVar19 = (UI_MapEditorMenu_o *)pSVar20[3].fields._syncRoot;
  if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
    pUVar14 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae699 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae699 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(pUVar19,pMVar18);
  pUVar16 = (pUVar19->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(pUVar19->fields).BrushPanel;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_044372dc:
    pUVar16 = *ppUVar2;
    if (pUVar16 != (UI_MapEditorBrushPanel_o *)0x0) {
      UI_MapEditorBrushPanel__Show(pUVar16,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
    pUVar16 = (UI_MapEditorBrushPanel_o *)UI_ElementFactory__CreateHeadedPanel_object_(pUVar15,0,MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane)
    ;
    (pUVar19->fields).BrushPanel = pUVar16;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    pUVar16 = (pUVar19->fields).BrushPanel;
    if (pUVar16 != (UI_MapEditorBrushPanel_o *)0x0) {
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar12,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
      goto label_044372dc;
    }
  }
  lVar21 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69a = '\x01';
  }
  pUVar14 = *(UnityEngine_Object_o **)(lVar21 + 0xa0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  puVar23 = (undefined8 *)(lVar21 + 0xa0);
  __this_02 = (UnityEngine_Component_o *)*puVar23;
  if (__this_02 != (UnityEngine_Component_o *)0x0) {
    pUVar14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
    *puVar23 = 0;
    il2cpp_runtime_helper_022b4080(puVar23,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69b = '\x01';
  }
  pUVar14 = (UnityEngine_Object_o *)__this_02[6].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUVar16 = (UI_MapEditorBrushPanel_o *)__this_02[6].fields.m_CachedPtr;
  if (pUVar16 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Rebuild(pUVar16,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69c = '\x01';
  }
  x = (pUVar16->fields)._randomize;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUVar16 = (UI_MapEditorBrushPanel_o *)(pUVar16->fields)._randomize;
  if (pUVar16 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__SyncValues(pUVar16,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x_00 = (pUVar16->fields)._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pSVar6 = (pUVar16->fields)._count;
  if (pSVar6 != (Settings_IntSetting_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270
              ((UI_MapEditorMenu_o *)pUVar16,
               *(System_Collections_Generic_List_MapObject__o **)&pSVar6[4].fields.MinValue,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar14 = x_00[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar3 = &x_00[5].monitor;
  bVar11 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_044375dc:
    pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
    pIVar17 = UI_ElementFactory__CreateHeadedPanel_object_(pUVar15,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    x_00[5].monitor = pIVar17;
    il2cpp_runtime_helper_022b4080(ppvVar3);
    if (x_00[5].monitor != (UnityEngine_Component_o *)0x0) {
      pUVar12 = UnityEngine_Component__get_gameObject(x_00[5].monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar12,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      plVar7 = *ppvVar3;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x288))(plVar7,*(undefined8 *)(*plVar7 + 0x290));
        return;
      }
    }
  }
  else if (*ppvVar3 != (UnityEngine_Component_o *)0x0) {
    pUVar14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar21 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar14 = *(UnityEngine_Object_o **)(lVar21 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUVar22 = *(UI_BasePanel_o **)(lVar21 + 0xa8);
  if (pUVar22 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar22,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar15 = pUVar22[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    pUVar15 = pUVar22[1].fields.DoublePanelRight;
    if ((pUVar15 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar22[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar8 = pUVar22[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    pSVar8 = pUVar22[1].fields._popups;
    if ((pSVar8 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pUVar22 = (UI_BasePanel_o *)pUVar22[1].fields._popups;
      if (pUVar22 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar22,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$ShowInspector
// il2cpp: void UI_MapEditorMenu__ShowInspector (UI_MapEditorMenu_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x4437090

void UI_MapEditorMenu__ShowInspector(UI_MapEditorMenu_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  UI_MapEditorBrushPanel_o **ppUVar2;
  void **ppvVar3;
  uint uVar4;
  Map_MapObject_array *pMVar5;
  Settings_BoolSetting_o *x;
  Settings_IntSetting_o *pSVar6;
  long *plVar7;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_MapObject__o *objs;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UI_MapEditorBrushPanel_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  Il2CppObject *pIVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar15;
  MethodInfo *method_00;
  System_Collections_Generic_List_MapObject__o *pSVar16;
  UI_MapEditorMenu_o *__this_01;
  long lVar17;
  UnityEngine_Component_o *__this_02;
  Settings_IntSetting_o *x_00;
  UI_BasePanel_o *pUVar18;
  undefined8 *puVar19;
  
  if (g_data_057ae696 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    g_data_057ae696 = '\x01';
  }
  objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
  pSVar16 = objs;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)objs,MethodInfo_List_1_Map_MapObject);
  lVar17 = MethodInfo_Void_Add;
  if (objs != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(objs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar5 = (objs->fields)._items;
    if (pMVar5 != (Map_MapObject_array *)0x0) {
      uVar4 = (objs->fields)._size;
      if (uVar4 < (uint)pMVar5->max_length) {
        (objs->fields)._size = uVar4 + 1;
        pMVar5->m_Items[(int)uVar4] = obj;
        il2cpp_runtime_helper_022b4080(pMVar5->m_Items + (int)uVar4,obj);
        pMVar15 = extraout_RDX;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)objs,(Il2CppObject *)obj,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        pMVar15 = extraout_RDX_00;
      }
      UI_MapEditorMenu__ShowInspector_4335270(__this,objs,pMVar15);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae698 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae698 = '\x01';
  }
  pUVar10 = (UnityEngine_Object_o *)pSVar16[3].fields._syncRoot;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar15 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  __this_01 = (UI_MapEditorMenu_o *)pSVar16[3].fields._syncRoot;
  if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae699 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae699 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this_01,pMVar15);
  pUVar12 = (__this_01->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(__this_01->fields).BrushPanel;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_044372dc:
    pUVar12 = *ppUVar2;
    if (pUVar12 != (UI_MapEditorBrushPanel_o *)0x0) {
      UI_MapEditorBrushPanel__Show(pUVar12,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pUVar12 = (UI_MapEditorBrushPanel_o *)UI_ElementFactory__CreateHeadedPanel_object_(pUVar11,0,MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane)
    ;
    (__this_01->fields).BrushPanel = pUVar12;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    pUVar12 = (__this_01->fields).BrushPanel;
    if (pUVar12 != (UI_MapEditorBrushPanel_o *)0x0) {
      pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar13,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
      goto label_044372dc;
    }
  }
  lVar17 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69a = '\x01';
  }
  pUVar10 = *(UnityEngine_Object_o **)(lVar17 + 0xa0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  puVar19 = (undefined8 *)(lVar17 + 0xa0);
  __this_02 = (UnityEngine_Component_o *)*puVar19;
  if (__this_02 != (UnityEngine_Component_o *)0x0) {
    pUVar10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
    *puVar19 = 0;
    il2cpp_runtime_helper_022b4080(puVar19,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69b = '\x01';
  }
  pUVar10 = (UnityEngine_Object_o *)__this_02[6].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pUVar12 = (UI_MapEditorBrushPanel_o *)__this_02[6].fields.m_CachedPtr;
  if (pUVar12 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Rebuild(pUVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69c = '\x01';
  }
  x = (pUVar12->fields)._randomize;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pUVar12 = (UI_MapEditorBrushPanel_o *)(pUVar12->fields)._randomize;
  if (pUVar12 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__SyncValues(pUVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x_00 = (pUVar12->fields)._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pSVar6 = (pUVar12->fields)._count;
  if (pSVar6 != (Settings_IntSetting_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270
              ((UI_MapEditorMenu_o *)pUVar12,
               *(System_Collections_Generic_List_MapObject__o **)&pSVar6[4].fields.MinValue,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar10 = x_00[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar3 = &x_00[5].monitor;
  bVar9 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_044375dc:
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
    pIVar14 = UI_ElementFactory__CreateHeadedPanel_object_(pUVar11,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    x_00[5].monitor = pIVar14;
    il2cpp_runtime_helper_022b4080(ppvVar3);
    if (x_00[5].monitor != (UnityEngine_Component_o *)0x0) {
      pUVar13 = UnityEngine_Component__get_gameObject(x_00[5].monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar13,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      plVar7 = *ppvVar3;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x288))(plVar7,*(undefined8 *)(*plVar7 + 0x290));
        return;
      }
    }
  }
  else if (*ppvVar3 != (UnityEngine_Component_o *)0x0) {
    pUVar10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar17 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar10 = *(UnityEngine_Object_o **)(lVar17 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pUVar18 = *(UI_BasePanel_o **)(lVar17 + 0xa8);
  if (pUVar18 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar18,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar11 = pUVar18[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pUVar11 = pUVar18[1].fields.DoublePanelRight;
    if ((pUVar11 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
       pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar13,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar18[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar8 = pUVar18[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pSVar8 = pUVar18[1].fields._popups;
    if ((pSVar8 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0),
       pUVar13 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar13,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pUVar18 = (UI_BasePanel_o *)pUVar18[1].fields._popups;
      if (pUVar18 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar18,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$ShowInspector
// il2cpp: void UI_MapEditorMenu__ShowInspector (UI_MapEditorMenu_o* __this, System_Collections_Generic_List_MapObject__o* objs, const MethodInfo* method);
// 0x4435270

void UI_MapEditorMenu__ShowInspector_4335270
               (UI_MapEditorMenu_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               MethodInfo *method)

{
  UI_MapEditorInspectPanel_o **ppUVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  UnityEngine_Transform_o *parent;
  UI_MapEditorInspectPanel_o *method_00;
  UnityEngine_GameObject_o *obj;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  UI_MapEditorMenu_o *__this_03;
  Settings_StringSetting_o *pSVar4;
  GameManagers_MapEditorGameManager_o *__this_04;
  UI_InputSettingElement_o *__this_05;
  UnityEngine_UI_Text_o *__this_06;
  Settings_FloatSetting_o *pSVar5;
  UI_MapEditorHierarchyPanel_c *__this_07;
  System_Threading_CancellationTokenSource_o *__this_08;
  System_Collections_Generic_List_BasePopup__o *__this_09;
  System_Collections_Generic_Dictionary_string__Type__o *__this_10;
  UnityEngine_UI_RawImage_o *__this_11;
  UI_BasePanel_o *__this_12;
  System_Collections_Generic_Dictionary_string__Button__o *__this_13;
  System_Collections_Generic_List_GameObject__o *__this_14;
  System_Collections_Generic_Dictionary_int__GameObject__o *__this_15;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long lVar6;
  UI_MapEditorHierarchyPanel_o *__this_16;
  
  method_02 = (MethodInfo *)objs;
  if (g_data_057ae697 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorInspectPanel_CreateHeadedPanel_MapEditorInspect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae697 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,method_02);
  if ((objs == (System_Collections_Generic_List_MapObject__o *)0x0) || ((objs->fields)._size == 0)) {
    return;
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_00 = (UI_MapEditorInspectPanel_o *)
              UI_ElementFactory__CreateHeadedPanel_object_(parent,0,MethodInfo_MapEditorInspectPanel_CreateHeadedPanel_MapEditorInspect);
  ppUVar1 = &(__this->fields).InspectPanel;
  (__this->fields).InspectPanel = method_00;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar2 = (__this->fields).InspectPanel;
  if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    method_00 = (UI_MapEditorInspectPanel_o *)0x2;
    UI_ElementFactory__SetAnchor(obj,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
    pUVar2 = *ppUVar1;
    if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
      UI_MapEditorInspectPanel__Show_4329a10(pUVar2,objs,method_01);
      return;
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  __this_16 = *(UI_MapEditorHierarchyPanel_o **)(lVar6 + 0xa8);
  if (__this_16 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__Sync(__this_16,(MethodInfo *)method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae687 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Misc/None");
    g_data_057ae687 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_Map_MapObject);
  (__this_16->fields)._indexToId = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._indexToId,pSVar3);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  (__this_16->fields)._selected = (System_Collections_Generic_HashSet_int__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._selected,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_String);
  *(System_Collections_Generic_Dictionary_object__object__o **)&(__this_16->fields)._lastClickedItem =
       __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._lastClickedItem,__this_01);
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  *(System_Collections_Generic_List_object__o **)&(__this_16->fields)._draggingItem = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._draggingItem);
  __this_03 = (UI_MapEditorMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor((Settings_IntSetting_o *)__this_03,(MethodInfo *)0x0);
  (__this_16->fields)._menu = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._menu);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar4,(MethodInfo *)0x0);
  (__this_16->fields)._style = (UI_ElementStyle_o *)pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._style);
  __this_04 = (GameManagers_MapEditorGameManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor((Settings_BoolSetting_o *)__this_04,(MethodInfo *)0x0);
  (__this_16->fields)._gameManager = __this_04;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._gameManager);
  __this_05 = (UI_InputSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor((Settings_BoolSetting_o *)__this_05,(MethodInfo *)0x0);
  (__this_16->fields)._searchInput = __this_05;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._searchInput);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor((Settings_BoolSetting_o *)pSVar4,(MethodInfo *)0x0);
  (__this_16->fields)._searchSetting = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._searchSetting);
  __this_06 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor((Settings_BoolSetting_o *)__this_06,(MethodInfo *)0x0);
  (__this_16->fields)._pageLabel = __this_06;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._pageLabel);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
  *(Settings_FloatSetting_o **)&(__this_16->fields)._currentPage = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._currentPage);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
  (__this_16->fields)._topGroup = (UnityEngine_Transform_o *)pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._topGroup);
  __this_07 = (UI_MapEditorHierarchyPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_07,(MethodInfo *)0x0);
  __this_16[1].klass = __this_07;
  il2cpp_runtime_helper_022b4080(__this_16 + 1);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
  __this_16[1].monitor = pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_16[1].monitor);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
  __this_16[1].fields.m_CachedPtr = (intptr_t)pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields);
  __this_08 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_08,(MethodInfo *)0x0);
  __this_16[1].fields.m_CancellationTokenSource = __this_08;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.m_CancellationTokenSource);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
  __this_16[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.SinglePanel);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
  __this_16[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.DoublePanelLeft);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
  __this_16[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.DoublePanelRight);
  __this_09 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor((Settings_StringSetting_o *)__this_09,(MethodInfo *)0x0);
  __this_16[1].fields._popups = __this_09;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._popups);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar4,(MethodInfo *)0x0);
  __this_16[1].fields._currentCategoryPanel = (UnityEngine_GameObject_o *)pSVar4;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._currentCategoryPanel);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar4,(MethodInfo *)0x0);
  __this_16[1].fields._currentCategoryPanelName = pSVar4;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._currentCategoryPanelName);
  __this_10 = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor((Settings_StringSetting_o *)__this_10,(MethodInfo *)0x0);
  __this_16[1].fields._categoryPanelTypes = __this_10;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._categoryPanelTypes);
  __this_11 = (UnityEngine_UI_RawImage_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor((Settings_ColorSetting_o *)__this_11,(MethodInfo *)0x0);
  __this_16[1].fields.MaskBackground = __this_11;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.MaskBackground);
  __this_12 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor((Settings_ColorSetting_o *)__this_12,(MethodInfo *)0x0);
  __this_16[1].fields.Parent = __this_12;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.Parent,__this_12);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar4,"Misc/None",0x7fffffff,(MethodInfo *)0x0);
  __this_16[1].fields.BottomBar = (UnityEngine_Transform_o *)pSVar4;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.BottomBar);
  pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar5,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  __this_16[1].fields.TopBar = (UnityEngine_Transform_o *)pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.TopBar);
  __this_13 = (System_Collections_Generic_Dictionary_string__Button__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30
            ((Settings_FloatSetting_o *)__this_13,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  __this_16[1].fields._topButtons = __this_13;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._topButtons);
  __this_14 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_14,(MethodInfo *)0x0);
  __this_16[1].fields._items = __this_14;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._items);
  __this_15 = (System_Collections_Generic_Dictionary_int__GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_15,(MethodInfo *)0x0);
  __this_16[1].fields._idToItem = __this_15;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._idToItem,__this_15);
  pSVar3 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Dictionary_string_BaseSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_Dictionary_2_System_String_Settings_BaseSetting);
  __this_16[1].fields._idToIndex = pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._idToIndex,pSVar3);
  pSVar3 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_System_String);
  __this_16[1].fields._indexToId = pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._indexToId);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_16,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMenu$$HideInspector
// il2cpp: void UI_MapEditorMenu__HideInspector (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437170

void UI_MapEditorMenu__HideInspector(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o **ppSVar1;
  void **ppvVar2;
  Settings_BoolSetting_o *x;
  Settings_IntSetting_o *pSVar3;
  long *plVar4;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar5;
  bool_conflict bVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_Generic_HashSet_string__o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  Il2CppObject *pIVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_MapEditorInspectPanel_o *pUVar12;
  long lVar13;
  UnityEngine_Component_o *__this_01;
  UI_MapEditorBrushPanel_o *pUVar14;
  Settings_IntSetting_o *x_00;
  UI_BasePanel_o *pUVar15;
  undefined8 *puVar16;
  
  if (g_data_057ae698 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae698 = '\x01';
  }
  pUVar12 = (__this->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar12 = (__this->fields).InspectPanel;
  if (pUVar12 != (UI_MapEditorInspectPanel_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae699 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae699 = '\x01';
  }
  UI_MapEditorMenu__HideInspector((UI_MapEditorMenu_o *)pUVar12,method_01);
  pSVar9 = (pUVar12->fields)._mixedFields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppSVar1 = &(pUVar12->fields)._mixedFields;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_044372dc:
    pUVar14 = (UI_MapEditorBrushPanel_o *)*ppSVar1;
    if (pUVar14 != (UI_MapEditorBrushPanel_o *)0x0) {
      UI_MapEditorBrushPanel__Show(pUVar14,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
    pSVar9 = (System_Collections_Generic_HashSet_string__o *)
             UI_ElementFactory__CreateHeadedPanel_object_(pUVar8,0,MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane);
    (pUVar12->fields)._mixedFields = pSVar9;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    pSVar9 = (pUVar12->fields)._mixedFields;
    if (pSVar9 != (System_Collections_Generic_HashSet_string__o *)0x0) {
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar9,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar10,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
      goto label_044372dc;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69a = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)(lVar13 + 0xa0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  puVar16 = (undefined8 *)(lVar13 + 0xa0);
  __this_01 = (UnityEngine_Component_o *)*puVar16;
  if (__this_01 != (UnityEngine_Component_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
    *puVar16 = 0;
    il2cpp_runtime_helper_022b4080(puVar16,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69b = '\x01';
  }
  pUVar7 = (UnityEngine_Object_o *)__this_01[6].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar14 = (UI_MapEditorBrushPanel_o *)__this_01[6].fields.m_CachedPtr;
  if (pUVar14 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Rebuild(pUVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69c = '\x01';
  }
  x = (pUVar14->fields)._randomize;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar14 = (UI_MapEditorBrushPanel_o *)(pUVar14->fields)._randomize;
  if (pUVar14 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__SyncValues(pUVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x_00 = (pUVar14->fields)._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pSVar3 = (pUVar14->fields)._count;
  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270
              ((UI_MapEditorMenu_o *)pUVar14,
               *(System_Collections_Generic_List_MapObject__o **)&pSVar3[4].fields.MinValue,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar7 = x_00[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar2 = &x_00[5].monitor;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_044375dc:
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
    pIVar11 = UI_ElementFactory__CreateHeadedPanel_object_(pUVar8,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    x_00[5].monitor = pIVar11;
    il2cpp_runtime_helper_022b4080(ppvVar2);
    if (x_00[5].monitor != (UnityEngine_Component_o *)0x0) {
      pUVar10 = UnityEngine_Component__get_gameObject(x_00[5].monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar10,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      plVar4 = *ppvVar2;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
        return;
      }
    }
  }
  else if (*ppvVar2 != (UnityEngine_Component_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)(lVar13 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar15 = *(UI_BasePanel_o **)(lVar13 + 0xa8);
  if (pUVar15 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar8 = pUVar15[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar8 = pUVar15[1].fields.DoublePanelRight;
    if ((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar15[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar5 = pUVar15[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pSVar5 = pUVar15[1].fields._popups;
    if ((pSVar5 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar15 = (UI_BasePanel_o *)pUVar15[1].fields._popups;
      if (pUVar15 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar15,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$ShowBrushPanel
// il2cpp: void UI_MapEditorMenu__ShowBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437210

void UI_MapEditorMenu__ShowBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o **ppUVar1;
  void **ppvVar2;
  Settings_BoolSetting_o *x;
  Settings_IntSetting_o *pSVar3;
  long *plVar4;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar5;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  UI_MapEditorBrushPanel_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Object_o *pUVar10;
  Il2CppObject *pIVar11;
  MethodInfo *method_00;
  long lVar12;
  UnityEngine_Component_o *__this_01;
  Settings_IntSetting_o *x_00;
  UI_BasePanel_o *pUVar13;
  undefined8 *puVar14;
  
  if (g_data_057ae699 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae699 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,method);
  pUVar8 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).BrushPanel;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_044372dc:
    pUVar8 = *ppUVar1;
    if (pUVar8 != (UI_MapEditorBrushPanel_o *)0x0) {
      UI_MapEditorBrushPanel__Show(pUVar8,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = (UI_MapEditorBrushPanel_o *)UI_ElementFactory__CreateHeadedPanel_object_(pUVar7,0,MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorBrushPane);
    (__this->fields).BrushPanel = pUVar8;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar8 = (__this->fields).BrushPanel;
    if (pUVar8 != (UI_MapEditorBrushPanel_o *)0x0) {
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar9,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
      goto label_044372dc;
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69a = '\x01';
  }
  pUVar10 = *(UnityEngine_Object_o **)(lVar12 + 0xa0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  puVar14 = (undefined8 *)(lVar12 + 0xa0);
  __this_01 = (UnityEngine_Component_o *)*puVar14;
  if (__this_01 != (UnityEngine_Component_o *)0x0) {
    pUVar10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
    *puVar14 = 0;
    il2cpp_runtime_helper_022b4080(puVar14,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69b = '\x01';
  }
  pUVar10 = (UnityEngine_Object_o *)__this_01[6].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar8 = (UI_MapEditorBrushPanel_o *)__this_01[6].fields.m_CachedPtr;
  if (pUVar8 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Rebuild(pUVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69c = '\x01';
  }
  x = (pUVar8->fields)._randomize;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar8 = (UI_MapEditorBrushPanel_o *)(pUVar8->fields)._randomize;
  if (pUVar8 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__SyncValues(pUVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x_00 = (pUVar8->fields)._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pSVar3 = (pUVar8->fields)._count;
  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270
              ((UI_MapEditorMenu_o *)pUVar8,
               *(System_Collections_Generic_List_MapObject__o **)&pSVar3[4].fields.MinValue,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar10 = x_00[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar2 = &x_00[5].monitor;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_044375dc:
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
    pIVar11 = UI_ElementFactory__CreateHeadedPanel_object_(pUVar7,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    x_00[5].monitor = pIVar11;
    il2cpp_runtime_helper_022b4080(ppvVar2);
    if (x_00[5].monitor != (UnityEngine_Component_o *)0x0) {
      pUVar9 = UnityEngine_Component__get_gameObject(x_00[5].monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar9,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      plVar4 = *ppvVar2;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
        return;
      }
    }
  }
  else if (*ppvVar2 != (UnityEngine_Component_o *)0x0) {
    pUVar10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar10 = *(UnityEngine_Object_o **)(lVar12 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar13 = *(UI_BasePanel_o **)(lVar12 + 0xa8);
  if (pUVar13 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar7 = pUVar13[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar7 = pUVar13[1].fields.DoublePanelRight;
    if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar13[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar5 = pUVar13[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pSVar5 = pUVar13[1].fields._popups;
    if ((pSVar5 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar13 = (UI_BasePanel_o *)pUVar13[1].fields._popups;
      if (pUVar13 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar13,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$HideBrushPanel
// il2cpp: void UI_MapEditorMenu__HideBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437300

void UI_MapEditorMenu__HideBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  long *plVar4;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar5;
  bool_conflict bVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *pUVar10;
  MethodInfo *method_00;
  UI_MapEditorBrushPanel_o *pUVar11;
  Settings_IntSetting_o *x;
  long lVar12;
  UI_BasePanel_o *pUVar13;
  UI_MapEditorBrushPanel_o **ppUVar14;
  
  if (g_data_057ae69a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69a = '\x01';
  }
  pUVar11 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  ppUVar14 = &(__this->fields).BrushPanel;
  pUVar11 = *ppUVar14;
  if (pUVar11 != (UI_MapEditorBrushPanel_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
    *ppUVar14 = (UI_MapEditorBrushPanel_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar14,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69b = '\x01';
  }
  pSVar2 = (pUVar11->fields)._randomize;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar11 = (UI_MapEditorBrushPanel_o *)(pUVar11->fields)._randomize;
  if (pUVar11 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Rebuild(pUVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69c = '\x01';
  }
  pSVar2 = (pUVar11->fields)._randomize;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar11 = (UI_MapEditorBrushPanel_o *)(pUVar11->fields)._randomize;
  if (pUVar11 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__SyncValues(pUVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x = (pUVar11->fields)._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pSVar3 = (pUVar11->fields)._count;
  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270
              ((UI_MapEditorMenu_o *)pUVar11,
               *(System_Collections_Generic_List_MapObject__o **)&pSVar3[4].fields.MinValue,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar7 = x[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar1 = &x[5].monitor;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_044375dc:
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    pIVar9 = UI_ElementFactory__CreateHeadedPanel_object_(pUVar8,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    x[5].monitor = pIVar9;
    il2cpp_runtime_helper_022b4080(ppvVar1);
    if (x[5].monitor != (UnityEngine_Component_o *)0x0) {
      pUVar10 = UnityEngine_Component__get_gameObject(x[5].monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar10,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      plVar4 = *ppvVar1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
        return;
      }
    }
  }
  else if (*ppvVar1 != (UnityEngine_Component_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)(lVar12 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar13 = *(UI_BasePanel_o **)(lVar12 + 0xa8);
  if (pUVar13 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar8 = pUVar13[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar8 = pUVar13[1].fields.DoublePanelRight;
    if ((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar13[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar5 = pUVar13[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pSVar5 = pUVar13[1].fields._popups;
    if ((pSVar5 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar13 = (UI_BasePanel_o *)pUVar13[1].fields._popups;
      if (pUVar13 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar13,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$SyncBrushPanel
// il2cpp: void UI_MapEditorMenu__SyncBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x44373b0

void UI_MapEditorMenu__SyncBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  Settings_BoolSetting_o *x;
  Settings_IntSetting_o *pSVar2;
  long *plVar3;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  MethodInfo *method_00;
  UI_MapEditorBrushPanel_o *pUVar10;
  Settings_IntSetting_o *x_00;
  long lVar11;
  UI_BasePanel_o *pUVar12;
  
  if (g_data_057ae69b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69b = '\x01';
  }
  pUVar10 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar10 = (__this->fields).BrushPanel;
  if (pUVar10 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Rebuild(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69c = '\x01';
  }
  x = (pUVar10->fields)._randomize;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar10 = (UI_MapEditorBrushPanel_o *)(pUVar10->fields)._randomize;
  if (pUVar10 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__SyncValues(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x_00 = (pUVar10->fields)._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pSVar2 = (pUVar10->fields)._count;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270
              ((UI_MapEditorMenu_o *)pUVar10,
               *(System_Collections_Generic_List_MapObject__o **)&pSVar2[4].fields.MinValue,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar6 = x_00[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar1 = &x_00[5].monitor;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_044375dc:
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
    pIVar8 = UI_ElementFactory__CreateHeadedPanel_object_(pUVar7,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    x_00[5].monitor = pIVar8;
    il2cpp_runtime_helper_022b4080(ppvVar1);
    if (x_00[5].monitor != (UnityEngine_Component_o *)0x0) {
      pUVar9 = UnityEngine_Component__get_gameObject(x_00[5].monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar9,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      plVar3 = *ppvVar1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x288))(plVar3,*(undefined8 *)(*plVar3 + 0x290));
        return;
      }
    }
  }
  else if (*ppvVar1 != (UnityEngine_Component_o *)0x0) {
    pUVar6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar6,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar6 = *(UnityEngine_Object_o **)(lVar11 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar12 = *(UI_BasePanel_o **)(lVar11 + 0xa8);
  if (pUVar12 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar7 = pUVar12[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = pUVar12[1].fields.DoublePanelRight;
    if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar12[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar4 = pUVar12[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pSVar4 = pUVar12[1].fields._popups;
    if ((pSVar4 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar12 = (UI_BasePanel_o *)pUVar12[1].fields._popups;
      if (pUVar12 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar12,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$SyncBrushPanelValues
// il2cpp: void UI_MapEditorMenu__SyncBrushPanelValues (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437430

void UI_MapEditorMenu__SyncBrushPanelValues(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  Settings_IntSetting_o *pSVar2;
  long *plVar3;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  MethodInfo *method_00;
  UI_MapEditorBrushPanel_o *pUVar10;
  Settings_IntSetting_o *x;
  long lVar11;
  UI_BasePanel_o *pUVar12;
  
  if (g_data_057ae69c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69c = '\x01';
  }
  pUVar10 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar10 = (__this->fields).BrushPanel;
  if (pUVar10 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__SyncValues(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x = (pUVar10->fields)._count;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pSVar2 = (pUVar10->fields)._count;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270
              ((UI_MapEditorMenu_o *)pUVar10,
               *(System_Collections_Generic_List_MapObject__o **)&pSVar2[4].fields.MinValue,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar6 = x[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar1 = &x[5].monitor;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_044375dc:
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    pIVar8 = UI_ElementFactory__CreateHeadedPanel_object_(pUVar7,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    x[5].monitor = pIVar8;
    il2cpp_runtime_helper_022b4080(ppvVar1);
    if (x[5].monitor != (UnityEngine_Component_o *)0x0) {
      pUVar9 = UnityEngine_Component__get_gameObject(x[5].monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar9,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      plVar3 = *ppvVar1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x288))(plVar3,*(undefined8 *)(*plVar3 + 0x290));
        return;
      }
    }
  }
  else if (*ppvVar1 != (UnityEngine_Component_o *)0x0) {
    pUVar6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar6,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar6 = *(UnityEngine_Object_o **)(lVar11 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar12 = *(UI_BasePanel_o **)(lVar11 + 0xa8);
  if (pUVar12 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar7 = pUVar12[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = pUVar12[1].fields.DoublePanelRight;
    if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar12[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar4 = pUVar12[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pSVar4 = pUVar12[1].fields._popups;
    if ((pSVar4 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar12 = (UI_BasePanel_o *)pUVar12[1].fields._popups;
      if (pUVar12 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar12,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$SyncInspector
// il2cpp: void UI_MapEditorMenu__SyncInspector (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x44374b0

void UI_MapEditorMenu__SyncInspector(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o **ppSVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_Dictionary_string__string__o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  MethodInfo *method_00;
  UI_MapEditorInspectPanel_o *x;
  long lVar9;
  UI_BasePanel_o *pUVar10;
  
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x = (__this->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pUVar2 = (__this->fields).InspectPanel;
  if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270(__this,(pUVar2->fields)._mapObjects,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pSVar7 = (x->fields)._syncedSerialized;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppSVar1 = &(x->fields)._syncedSerialized;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_044375dc:
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    pSVar7 = (System_Collections_Generic_Dictionary_string__string__o *)
             UI_ElementFactory__CreateHeadedPanel_object_(pUVar6,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    (x->fields)._syncedSerialized = pSVar7;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    pSVar7 = (x->fields)._syncedSerialized;
    if (pSVar7 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar8,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      pSVar7 = *ppSVar1;
      if (pSVar7 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        (*(pSVar7->klass->vtable)._21_System_Collections_IDictionary_get_Item.methodPtr)
                  (pSVar7,(pSVar7->klass->vtable)._21_System_Collections_IDictionary_get_Item.method);
        return;
      }
    }
  }
  else if (*ppSVar1 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    pUVar5 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*ppSVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar5,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar5 = *(UnityEngine_Object_o **)(lVar9 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pUVar10 = *(UI_BasePanel_o **)(lVar9 + 0xa8);
  if (pUVar10 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar6 = pUVar10[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar6 = pUVar10[1].fields.DoublePanelRight;
    if ((pUVar6 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar10[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar3 = pUVar10[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pSVar3 = pUVar10[1].fields._popups;
    if ((pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar10 = (UI_BasePanel_o *)pUVar10[1].fields._popups;
      if (pUVar10 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar10,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$ShowHierarchyPanel
// il2cpp: void UI_MapEditorMenu__ShowHierarchyPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437540

void UI_MapEditorMenu__ShowHierarchyPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o **ppUVar1;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UI_MapEditorHierarchyPanel_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  long lVar8;
  UI_BasePanel_o *pUVar9;
  
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pUVar6 = (__this->fields).HierarchyPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).HierarchyPanel;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_044375dc:
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar6 = (UI_MapEditorHierarchyPanel_o *)
             UI_ElementFactory__CreateHeadedPanel_object_(pUVar5,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    (__this->fields).HierarchyPanel = pUVar6;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar6 = (__this->fields).HierarchyPanel;
    if (pUVar6 != (UI_MapEditorHierarchyPanel_o *)0x0) {
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar7,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      pUVar6 = *ppUVar1;
      if (pUVar6 != (UI_MapEditorHierarchyPanel_o *)0x0) {
        (*(pUVar6->klass->vtable)._21_Show.methodPtr)(pUVar6,(pUVar6->klass->vtable)._21_Show.method);
        return;
      }
    }
  }
  else if (*ppUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    pUVar4 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)(lVar8 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar9 = *(UI_BasePanel_o **)(lVar8 + 0xa8);
  if (pUVar9 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar5 = pUVar9[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar5 = pUVar9[1].fields.DoublePanelRight;
    if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar9[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar2 = pUVar9[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pSVar2 = pUVar9[1].fields._popups;
    if ((pSVar2 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar9 = (UI_BasePanel_o *)pUVar9[1].fields._popups;
      if (pUVar9 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar9,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorMenu$$SyncHierarchyPanel
// il2cpp: void UI_MapEditorMenu__SyncHierarchyPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4435340

void UI_MapEditorMenu__SyncHierarchyPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  UI_MapEditorMenu_o *__this_03;
  Settings_StringSetting_o *pSVar2;
  GameManagers_MapEditorGameManager_o *__this_04;
  UI_InputSettingElement_o *__this_05;
  UnityEngine_UI_Text_o *__this_06;
  Settings_FloatSetting_o *pSVar3;
  UI_MapEditorHierarchyPanel_c *__this_07;
  System_Threading_CancellationTokenSource_o *__this_08;
  System_Collections_Generic_List_BasePopup__o *__this_09;
  System_Collections_Generic_Dictionary_string__Type__o *__this_10;
  UnityEngine_UI_RawImage_o *__this_11;
  UI_BasePanel_o *__this_12;
  System_Collections_Generic_Dictionary_string__Button__o *__this_13;
  System_Collections_Generic_List_GameObject__o *__this_14;
  System_Collections_Generic_Dictionary_int__GameObject__o *__this_15;
  UI_MapEditorHierarchyPanel_o *__this_16;
  
  __this_16 = (__this->fields).HierarchyPanel;
  if (__this_16 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__Sync(__this_16,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae687 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Misc/None");
    g_data_057ae687 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_Map_MapObject);
  (__this_16->fields)._indexToId = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._indexToId,pSVar1);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  (__this_16->fields)._selected = (System_Collections_Generic_HashSet_int__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._selected,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_String);
  *(System_Collections_Generic_Dictionary_object__object__o **)&(__this_16->fields)._lastClickedItem =
       __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._lastClickedItem,__this_01);
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  *(System_Collections_Generic_List_object__o **)&(__this_16->fields)._draggingItem = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._draggingItem);
  __this_03 = (UI_MapEditorMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor((Settings_IntSetting_o *)__this_03,(MethodInfo *)0x0);
  (__this_16->fields)._menu = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._menu);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this_16->fields)._style = (UI_ElementStyle_o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._style);
  __this_04 = (GameManagers_MapEditorGameManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor((Settings_BoolSetting_o *)__this_04,(MethodInfo *)0x0);
  (__this_16->fields)._gameManager = __this_04;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._gameManager);
  __this_05 = (UI_InputSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor((Settings_BoolSetting_o *)__this_05,(MethodInfo *)0x0);
  (__this_16->fields)._searchInput = __this_05;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._searchInput);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor((Settings_BoolSetting_o *)pSVar2,(MethodInfo *)0x0);
  (__this_16->fields)._searchSetting = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._searchSetting);
  __this_06 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor((Settings_BoolSetting_o *)__this_06,(MethodInfo *)0x0);
  (__this_16->fields)._pageLabel = __this_06;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._pageLabel);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  *(Settings_FloatSetting_o **)&(__this_16->fields)._currentPage = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._currentPage);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this_16->fields)._topGroup = (UnityEngine_Transform_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_16->fields)._topGroup);
  __this_07 = (UI_MapEditorHierarchyPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_07,(MethodInfo *)0x0);
  __this_16[1].klass = __this_07;
  il2cpp_runtime_helper_022b4080(__this_16 + 1);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  __this_16[1].monitor = pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_16[1].monitor);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  __this_16[1].fields.m_CachedPtr = (intptr_t)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields);
  __this_08 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_08,(MethodInfo *)0x0);
  __this_16[1].fields.m_CancellationTokenSource = __this_08;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.m_CancellationTokenSource);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  __this_16[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.SinglePanel);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  __this_16[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.DoublePanelLeft);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  __this_16[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.DoublePanelRight);
  __this_09 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor((Settings_StringSetting_o *)__this_09,(MethodInfo *)0x0);
  __this_16[1].fields._popups = __this_09;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._popups);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,(MethodInfo *)0x0);
  __this_16[1].fields._currentCategoryPanel = (UnityEngine_GameObject_o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._currentCategoryPanel);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,(MethodInfo *)0x0);
  __this_16[1].fields._currentCategoryPanelName = pSVar2;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._currentCategoryPanelName);
  __this_10 = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor((Settings_StringSetting_o *)__this_10,(MethodInfo *)0x0);
  __this_16[1].fields._categoryPanelTypes = __this_10;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._categoryPanelTypes);
  __this_11 = (UnityEngine_UI_RawImage_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor((Settings_ColorSetting_o *)__this_11,(MethodInfo *)0x0);
  __this_16[1].fields.MaskBackground = __this_11;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.MaskBackground);
  __this_12 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor((Settings_ColorSetting_o *)__this_12,(MethodInfo *)0x0);
  __this_16[1].fields.Parent = __this_12;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.Parent,__this_12);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,"Misc/None",0x7fffffff,(MethodInfo *)0x0);
  __this_16[1].fields.BottomBar = (UnityEngine_Transform_o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.BottomBar);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  __this_16[1].fields.TopBar = (UnityEngine_Transform_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields.TopBar);
  __this_13 = (System_Collections_Generic_Dictionary_string__Button__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30
            ((Settings_FloatSetting_o *)__this_13,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  __this_16[1].fields._topButtons = __this_13;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._topButtons);
  __this_14 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_14,(MethodInfo *)0x0);
  __this_16[1].fields._items = __this_14;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._items);
  __this_15 = (System_Collections_Generic_Dictionary_int__GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_15,(MethodInfo *)0x0);
  __this_16[1].fields._idToItem = __this_15;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._idToItem,__this_15);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Dictionary_string_BaseSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_Dictionary_2_System_String_Settings_BaseSetting);
  __this_16[1].fields._idToIndex = pSVar1;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._idToIndex,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_System_String);
  __this_16[1].fields._indexToId = pSVar1;
  il2cpp_runtime_helper_022b4080(&__this_16[1].fields._indexToId);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_16,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMenu$$RebuildPanels
// il2cpp: void UI_MapEditorMenu__RebuildPanels (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x44366d0

void UI_MapEditorMenu__RebuildPanels(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorMenu$$GetMinMouseX
// il2cpp: float UI_MapEditorMenu__GetMinMouseX (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437660

float UI_MapEditorMenu__GetMinMouseX(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  UI_BasePanel_o *pUVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_MapEditorHierarchyPanel_o *pUVar7;
  float fVar8;
  float fStack_3c;
  
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar7 = (__this->fields).HierarchyPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return 0.0;
  }
  pUVar7 = (__this->fields).HierarchyPanel;
  if (pUVar7 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    fVar8 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar7,(MethodInfo *)0x0);
    return fVar8 + 10.0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pSVar1 = (pUVar7->fields)._indexToId;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fStack_3c = (float)iVar5;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pSVar1 = (pUVar7->fields)._indexToId;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar1,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar2 = (UI_BasePanel_o *)(pUVar7->fields)._indexToId;
      if (pUVar2 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      fVar8 = UI_BasePanel__GetPhysicalWidth(pUVar2,(MethodInfo *)0x0);
      fStack_3c = fStack_3c - (fVar8 + 10.0);
    }
  }
  pSVar3 = (pUVar7->fields)._selected;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pSVar3 = (pUVar7->fields)._selected;
    if ((pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return 0.0;
    }
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar2 = (UI_BasePanel_o *)(pUVar7->fields)._selected;
      if (pUVar2 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      fVar8 = UI_BasePanel__GetPhysicalWidth(pUVar2,(MethodInfo *)0x0);
      fStack_3c = fStack_3c - (fVar8 + 10.0);
    }
  }
  return fStack_3c;
}


// UI.MapEditorMenu$$GetMaxMouseX
// il2cpp: float UI_MapEditorMenu__GetMaxMouseX (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x44376e0

float UI_MapEditorMenu__GetMaxMouseX(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorBrushPanel_o *pUVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  float fVar6;
  float local_24;
  
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar1 = (__this->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_24 = (float)iVar3;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar1 = (__this->fields).InspectPanel;
    if ((pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar1 = (__this->fields).InspectPanel;
      if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) goto label_0443782e;
      fVar6 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
      local_24 = local_24 - (fVar6 + 10.0);
    }
  }
  pUVar2 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar2 = (__this->fields).BrushPanel;
    if ((pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return 0.0;
    }
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar2 = (__this->fields).BrushPanel;
      if (pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) goto label_0443782e;
      fVar6 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar2,(MethodInfo *)0x0);
      local_24 = local_24 - (fVar6 + 10.0);
    }
  }
  return local_24;
}


// UI.MapEditorMenu$$GetMinMouseY
// il2cpp: float UI_MapEditorMenu__GetMinMouseY (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437840

float UI_MapEditorMenu__GetMinMouseY(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorMenu$$GetMaxMouseY
// il2cpp: float UI_MapEditorMenu__GetMaxMouseY (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437850

float UI_MapEditorMenu__GetMaxMouseY(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return (float)iVar1 + -60.0;
}


// UI.MapEditorMenu$$Update
// il2cpp: void UI_MapEditorMenu__Update (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437870

void UI_MapEditorMenu__Update(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UI_MapEditorTopPanel_o *__this_00;
  UI_MapEditorHierarchyPanel_o *pUVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  UI_MapEditorMenu_o *pUVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  UnityEngine_EventSystems_EventSystem_o *pUVar7;
  UI_MapEditorMenu_o *unaff_RBX;
  UI_MapEditorMenu_o *__this_01;
  UI_MapEditorMenu_o *unaff_R12;
  bool bVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar10;
  undefined1 auStack_60 [24];
  
  if (g_data_057ae6a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae6a1 = '\x01';
  }
  UI_MapEditorMenu__UpdateMouseUI(__this,method);
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UI_MapEditorMenu_o *)0x0;
  pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    x = (UnityEngine_Object_o *)(pUVar7->fields).m_CurrentSelected;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    *(char *)((long)&(__this->fields).IsMouseUI + 1) = (char)bVar5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  auVar2._8_4_ = extraout_XMM0_Dc;
  auVar2._0_8_ = UVar10.fields._0_8_;
  auVar2._12_4_ = extraout_XMM0_Dd;
  bVar5 = UI_MapEditorMenu__IsPopupActive(__this_01,method);
  bVar8 = true;
  pUVar4 = __this_01;
  auStack_60._0_16_ = auVar2;
  if ((char)bVar5 == '\0') {
    __this_00 = (__this_01->fields)._topPanel;
    if (__this_00 == (UI_MapEditorTopPanel_o *)0x0) goto label_044379ed;
    bVar5 = UI_MapEditorTopPanel__IsDropdownOpen(__this_00,method);
    unaff_R12 = (UI_MapEditorMenu_o *)0x0;
    if ((char)bVar5 == '\0') {
      if (g_data_057ae69f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae69f = '\x01';
      }
      pUVar1 = (__this_01->fields).HierarchyPanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar9 = 0.0;
      unaff_R12 = __this_01;
      if ((char)bVar5 != '\0') {
        pUVar1 = (__this_01->fields).HierarchyPanel;
        if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_044379ed;
        method = (MethodInfo *)0x0;
        fVar9 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
        fVar9 = fVar9 + 10.0;
      }
      auStack_60._0_4_ = UVar10.fields.x;
      bVar3 = fVar9 <= (float)auStack_60._0_4_;
      unaff_RBX = __this_01;
      if (bVar3) goto label_044379f2;
    }
  }
  while (unaff_RBX = pUVar4, unaff_RBX == (UI_MapEditorMenu_o *)0x0) {
label_044379ed:
    while( true ) {
      il2cpp_runtime_helper_022b2c90();
label_044379f2:
      fVar9 = UI_MapEditorMenu__GetMaxMouseX(__this_01,method);
      pUVar4 = unaff_R12;
      if (fVar9 < (float)auStack_60._0_4_) break;
      if (0.0 <= (float)auStack_60._4_4_) {
        auStack_60._0_4_ = auStack_60._4_4_;
        iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        bVar8 = (float)iVar6 + -60.0 < (float)auStack_60._4_4_;
      }
      if (unaff_RBX != (UI_MapEditorMenu_o *)0x0) goto label_04437a43;
    }
  }
label_04437a43:
  *(bool *)&(unaff_RBX->fields).IsMouseUI = bVar8;
  return;
}


// UI.MapEditorMenu$$IsPopupActive
// il2cpp: bool UI_MapEditorMenu__IsPopupActive (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4428930

bool_conflict UI_MapEditorMenu__IsPopupActive(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  undefined8 extraout_RAX;
  undefined8 uVar3;
  long *plVar4;
  undefined8 extraout_RAX_00;
  char unaff_BPL;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  
  if (g_data_057ae6a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae6a2 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    unaff_BPL = '\0';
    while (__this_01.fields._8_8_ = pIVar7, __this_01.fields._list = pSVar6,
          __this_01.fields._current = pIVar8,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
      if (pIVar8 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04428a12;
      }
      if (*(char *)&pIVar8[9].klass != '\0') {
        unaff_BPL = '\x01';
      }
    }
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._list = pSVar6;
    __this_02.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar3 = extraout_RAX;
label_044289fc:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),unaff_BPL != '\0');
  }
label_04428a12:
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = pSVar6;
    __this_03.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar3 = extraout_RAX_00;
    if (lVar1 == 0) goto label_044289fc;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._list = pSVar6;
  __this_04.fields._current = pIVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.MapEditorMenu$$UpdateMouseUI
// il2cpp: void UI_MapEditorMenu__UpdateMouseUI (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437910

void UI_MapEditorMenu__UpdateMouseUI(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *__this_00;
  UI_MapEditorHierarchyPanel_o *pUVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  UI_MapEditorMenu_o *pUVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  UI_MapEditorMenu_o *unaff_RBX;
  UI_MapEditorMenu_o *unaff_R12;
  bool bVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar9;
  undefined1 local_48 [24];
  
  UVar9 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  auVar2._8_4_ = extraout_XMM0_Dc;
  auVar2._0_8_ = UVar9.fields._0_8_;
  auVar2._12_4_ = extraout_XMM0_Dd;
  bVar5 = UI_MapEditorMenu__IsPopupActive(__this,method);
  bVar7 = true;
  pUVar4 = __this;
  local_48._0_16_ = auVar2;
  if ((char)bVar5 == '\0') {
    __this_00 = (__this->fields)._topPanel;
    if (__this_00 == (UI_MapEditorTopPanel_o *)0x0) goto label_044379ed;
    bVar5 = UI_MapEditorTopPanel__IsDropdownOpen(__this_00,method);
    unaff_R12 = (UI_MapEditorMenu_o *)0x0;
    if ((char)bVar5 == '\0') {
      if (g_data_057ae69f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae69f = '\x01';
      }
      pUVar1 = (__this->fields).HierarchyPanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar8 = 0.0;
      unaff_R12 = __this;
      if ((char)bVar5 != '\0') {
        pUVar1 = (__this->fields).HierarchyPanel;
        if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_044379ed;
        method = (MethodInfo *)0x0;
        fVar8 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
        fVar8 = fVar8 + 10.0;
      }
      local_48._0_4_ = UVar9.fields.x;
      bVar3 = fVar8 <= (float)local_48._0_4_;
      unaff_RBX = __this;
      if (bVar3) goto label_044379f2;
    }
  }
  while (unaff_RBX = pUVar4, unaff_RBX == (UI_MapEditorMenu_o *)0x0) {
label_044379ed:
    while( true ) {
      il2cpp_runtime_helper_022b2c90();
label_044379f2:
      fVar8 = UI_MapEditorMenu__GetMaxMouseX(__this,method);
      pUVar4 = unaff_R12;
      if (fVar8 < (float)local_48._0_4_) break;
      if (0.0 <= (float)local_48._4_4_) {
        local_48._0_4_ = local_48._4_4_;
        iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        bVar7 = (float)iVar6 + -60.0 < (float)local_48._4_4_;
      }
      if (unaff_RBX != (UI_MapEditorMenu_o *)0x0) goto label_04437a43;
    }
  }
label_04437a43:
  *(bool *)&(unaff_RBX->fields).IsMouseUI = bVar7;
  return;
}


// UI.MapEditorMenu$$.ctor
// il2cpp: void UI_MapEditorMenu___ctor (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4437c40

void UI_MapEditorMenu___ctor(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


