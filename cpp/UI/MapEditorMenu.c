// Type: UI.MapEditorMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorMenu$$Setup
// il2cpp: void UI_MapEditorMenu__Setup (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4121170

void UI_MapEditorMenu__Setup(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  UI_MapEditorTopPanel_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  
  if (DAT_057048f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapEditorTopPanel_CreateHeadedPanel_MapEditorTop);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&"Prefabs/Misc/MapEditorDragImage");
    DAT_057048f0 = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar3 = (UI_MapEditorTopPanel_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(pUVar2,1,MethodInfo_MapEditorTopPanel_CreateHeadedPanel_MapEditorTop);
  (__this->fields)._topPanel = pUVar3;
  il2cpp_runtime_glue(&(__this->fields)._topPanel);
  pUVar3 = (__this->fields)._topPanel;
  if (pUVar3 != (UI_MapEditorTopPanel_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor
              (pUVar4,1,1,(UnityEngine_Vector2_o)0x40a00000c0a00000,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__InstantiateAndBind(pUVar2,"Prefabs/Misc/MapEditorDragImage",(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = (UnityEngine_UI_Image_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Image_GetComponent_Image);
      ppUVar1 = &(__this->fields).DragImage;
      (__this->fields).DragImage = pUVar5;
      il2cpp_runtime_glue(ppUVar1);
      pUVar5 = (__this->fields).DragImage;
      if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        if (DAT_056fe093 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
        }
        UI_ElementFactory__SetAnchor
                  (pUVar4,6,6,
                   (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pUVar5 = *ppUVar1;
        if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$SetupPopups
// il2cpp: void UI_MapEditorMenu__SetupPopups (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4121310

void UI_MapEditorMenu__SetupPopups(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_MapEditorTexturePopup_o **ppUVar2;
  uint uVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  UI_BasePopup_array *pUVar5;
  long lVar6;
  UnityEngine_Transform_o *pUVar7;
  UI_MapEditorAddObjectPopup_o *pUVar8;
  UI_MapEditorAddVariantPopup_o *pUVar9;
  UI_MapEditorTexturePopup_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UI_MapEditorCameraPopup_o *pUVar12;
  UI_MapEditorInfoPopup_o *pUVar13;
  UI_MapEditorSettingsPopup_o *pUVar14;
  UI_MapEditorCustomLogicPopup_o *pUVar15;
  UI_MapEditorAddComponentPopup_o *pUVar16;
  UI_MapEditorErrorPopup_o *pUVar17;
  UI_MapEditorCustomAssetPopup_o *pUVar18;
  UI_MapEditorWeatherPopup_o *pUVar19;
  
  if (DAT_057048f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapEditorAddComponentPopup_CreateDefaultPopup_Ma);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorAddObjectPopup_CreateDefaultPopup_MapEd);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorAddVariantPopup_CreateDefaultPopup_MapE);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorCameraPopup_CreateDefaultPopup_MapEdito);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorCustomAssetPopup_CreateDefaultPopup_Map);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorCustomLogicPopup_CreateDefaultPopup_Map);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorErrorPopup_CreateDefaultPopup_MapEditor);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorInfoPopup_CreateDefaultPopup_MapEditorI);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorSettingsPopup_CreateDefaultPopup_MapEdi);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorTexturePopup_CreateDefaultPopup_MapEdit);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorWeatherPopup_CreateDefaultPopup_MapEdit);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057048f1 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar8 = (UI_MapEditorAddObjectPopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorAddObjectPopup_CreateDefaultPopup_MapEd);
  (__this->fields).AddObjectPopup = pUVar8;
  il2cpp_runtime_glue(&(__this->fields).AddObjectPopup);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar9 = (UI_MapEditorAddVariantPopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorAddVariantPopup_CreateDefaultPopup_MapE);
  (__this->fields).AddVariantPopup = pUVar9;
  il2cpp_runtime_glue(&(__this->fields).AddVariantPopup);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar10 = (UI_MapEditorTexturePopup_o *)
            UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorTexturePopup_CreateDefaultPopup_MapEdit);
  ppUVar2 = &(__this->fields).TexturePopup;
  (__this->fields).TexturePopup = pUVar10;
  il2cpp_runtime_glue(ppUVar2);
  pUVar8 = (__this->fields).AddObjectPopup;
  if (pUVar8 != (UI_MapEditorAddObjectPopup_o *)0x0) {
    pUVar11 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar11,4,4,(UnityEngine_Vector2_o)0xc2820000,(MethodInfo *)0x0);
    pUVar10 = *ppUVar2;
    if (pUVar10 != (UI_MapEditorTexturePopup_o *)0x0) {
      pUVar11 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar11,4,4,(UnityEngine_Vector2_o)0xc2820000,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar12 = (UI_MapEditorCameraPopup_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorCameraPopup_CreateDefaultPopup_MapEdito);
      (__this->fields).CameraPopup = pUVar12;
      il2cpp_runtime_glue(&(__this->fields).CameraPopup);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar13 = (UI_MapEditorInfoPopup_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorInfoPopup_CreateDefaultPopup_MapEditorI);
      (__this->fields).InfoPopup = pUVar13;
      il2cpp_runtime_glue(&(__this->fields).InfoPopup);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar14 = (UI_MapEditorSettingsPopup_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorSettingsPopup_CreateDefaultPopup_MapEdi);
      (__this->fields).SettingsPopup = pUVar14;
      il2cpp_runtime_glue(&(__this->fields).SettingsPopup);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar15 = (UI_MapEditorCustomLogicPopup_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorCustomLogicPopup_CreateDefaultPopup_Map);
      (__this->fields).CustomLogicPopup = pUVar15;
      il2cpp_runtime_glue(&(__this->fields).CustomLogicPopup);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar16 = (UI_MapEditorAddComponentPopup_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorAddComponentPopup_CreateDefaultPopup_Ma);
      (__this->fields).AddComponentPopup = pUVar16;
      il2cpp_runtime_glue(&(__this->fields).AddComponentPopup);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar17 = (UI_MapEditorErrorPopup_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorErrorPopup_CreateDefaultPopup_MapEditor);
      (__this->fields).ErrorPopup = pUVar17;
      il2cpp_runtime_glue(&(__this->fields).ErrorPopup);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar18 = (UI_MapEditorCustomAssetPopup_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorCustomAssetPopup_CreateDefaultPopup_Map);
      (__this->fields).CustomAssetsPopup = pUVar18;
      il2cpp_runtime_glue(&(__this->fields).CustomAssetsPopup);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar19 = (UI_MapEditorWeatherPopup_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MapEditorWeatherPopup_CreateDefaultPopup_MapEdit);
      (__this->fields).WeatherPopup = pUVar19;
      il2cpp_runtime_glue(&(__this->fields).WeatherPopup,pUVar19);
      lVar6 = MethodInfo_Void_Add;
      pSVar4 = (__this->fields)._popups;
      if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar8 = (__this->fields).AddObjectPopup;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar4->fields)._items;
        if (pUVar5 != (UI_BasePopup_array *)0x0) {
          uVar3 = (pSVar4->fields)._size;
          if (uVar3 < (uint)pUVar5->max_length) {
            (pSVar4->fields)._size = uVar3 + 1;
            pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar8;
            il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
            pSVar4 = (__this->fields)._popups;
            lVar6 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar8,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            pSVar4 = (__this->fields)._popups;
            lVar6 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar6;
          if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar9 = (__this->fields).AddVariantPopup;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar4->fields)._items;
            if (pUVar5 != (UI_BasePopup_array *)0x0) {
              uVar3 = (pSVar4->fields)._size;
              if (uVar3 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar3 + 1;
                pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar9;
                il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                pSVar4 = (__this->fields)._popups;
                lVar6 = MethodInfo_Void_Add;
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (Il2CppObject *)pUVar9,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                pSVar4 = (__this->fields)._popups;
                lVar6 = MethodInfo_Void_Add;
              }
              MethodInfo_Void_Add = lVar6;
              if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                pUVar10 = (__this->fields).TexturePopup;
                piVar1 = &(pSVar4->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar4->fields)._items;
                if (pUVar5 != (UI_BasePopup_array *)0x0) {
                  uVar3 = (pSVar4->fields)._size;
                  if (uVar3 < (uint)pUVar5->max_length) {
                    (pSVar4->fields)._size = uVar3 + 1;
                    pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar10;
                    il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                    pSVar4 = (__this->fields)._popups;
                    lVar6 = MethodInfo_Void_Add;
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar4,
                               (Il2CppObject *)pUVar10,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                    pSVar4 = (__this->fields)._popups;
                    lVar6 = MethodInfo_Void_Add;
                  }
                  MethodInfo_Void_Add = lVar6;
                  if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    pUVar12 = (__this->fields).CameraPopup;
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar5 = (pSVar4->fields)._items;
                    if (pUVar5 != (UI_BasePopup_array *)0x0) {
                      uVar3 = (pSVar4->fields)._size;
                      if (uVar3 < (uint)pUVar5->max_length) {
                        (pSVar4->fields)._size = uVar3 + 1;
                        pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar12;
                        il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                        pSVar4 = (__this->fields)._popups;
                        lVar6 = MethodInfo_Void_Add;
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar4,
                                   (Il2CppObject *)pUVar12,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                        pSVar4 = (__this->fields)._popups;
                        lVar6 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar6;
                      if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                        pUVar13 = (__this->fields).InfoPopup;
                        piVar1 = &(pSVar4->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar5 = (pSVar4->fields)._items;
                        if (pUVar5 != (UI_BasePopup_array *)0x0) {
                          uVar3 = (pSVar4->fields)._size;
                          if (uVar3 < (uint)pUVar5->max_length) {
                            (pSVar4->fields)._size = uVar3 + 1;
                            pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar13;
                            il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                            pSVar4 = (__this->fields)._popups;
                            lVar6 = MethodInfo_Void_Add;
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                       (Il2CppObject *)pUVar13,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            pSVar4 = (__this->fields)._popups;
                            lVar6 = MethodInfo_Void_Add;
                          }
                          MethodInfo_Void_Add = lVar6;
                          if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                            pUVar14 = (__this->fields).SettingsPopup;
                            piVar1 = &(pSVar4->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar5 = (pSVar4->fields)._items;
                            if (pUVar5 != (UI_BasePopup_array *)0x0) {
                              uVar3 = (pSVar4->fields)._size;
                              if (uVar3 < (uint)pUVar5->max_length) {
                                (pSVar4->fields)._size = uVar3 + 1;
                                pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar14;
                                il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                                pSVar4 = (__this->fields)._popups;
                                lVar6 = MethodInfo_Void_Add;
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar4,
                                           (Il2CppObject *)pUVar14,
                                           *(MethodInfo_35A7350 **)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                pSVar4 = (__this->fields)._popups;
                                lVar6 = MethodInfo_Void_Add;
                              }
                              MethodInfo_Void_Add = lVar6;
                              if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                pUVar15 = (__this->fields).CustomLogicPopup;
                                piVar1 = &(pSVar4->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pUVar5 = (pSVar4->fields)._items;
                                if (pUVar5 != (UI_BasePopup_array *)0x0) {
                                  uVar3 = (pSVar4->fields)._size;
                                  if (uVar3 < (uint)pUVar5->max_length) {
                                    (pSVar4->fields)._size = uVar3 + 1;
                                    pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar15;
                                    il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                                    pSVar4 = (__this->fields)._popups;
                                    lVar6 = MethodInfo_Void_Add;
                                  }
                                  else {
                                    System_Collections_Generic_List<object>__AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar4,
                                               (Il2CppObject *)pUVar15,
                                               *(MethodInfo_35A7350 **)
                                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                    pSVar4 = (__this->fields)._popups;
                                    lVar6 = MethodInfo_Void_Add;
                                  }
                                  MethodInfo_Void_Add = lVar6;
                                  if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0)
                                  {
                                    pUVar16 = (__this->fields).AddComponentPopup;
                                    piVar1 = &(pSVar4->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar5 = (pSVar4->fields)._items;
                                    if (pUVar5 != (UI_BasePopup_array *)0x0) {
                                      uVar3 = (pSVar4->fields)._size;
                                      if (uVar3 < (uint)pUVar5->max_length) {
                                        (pSVar4->fields)._size = uVar3 + 1;
                                        pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar16;
                                        il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                                        pSVar4 = (__this->fields)._popups;
                                        lVar6 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List<object>__AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)
                                                   pSVar4,(Il2CppObject *)pUVar16,
                                                   *(MethodInfo_35A7350 **)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                                        pSVar4 = (__this->fields)._popups;
                                        lVar6 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar6;
                                      if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)
                                                    0x0) {
                                        pUVar17 = (__this->fields).ErrorPopup;
                                        piVar1 = &(pSVar4->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar5 = (pSVar4->fields)._items;
                                        if (pUVar5 != (UI_BasePopup_array *)0x0) {
                                          uVar3 = (pSVar4->fields)._size;
                                          if (uVar3 < (uint)pUVar5->max_length) {
                                            (pSVar4->fields)._size = uVar3 + 1;
                                            pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar17;
                                            il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                                            pSVar4 = (__this->fields)._popups;
                                            lVar6 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List<object>__AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)
                                                       pSVar4,(Il2CppObject *)pUVar17,
                                                       *(MethodInfo_35A7350 **)
                                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                        0x70));
                                            pSVar4 = (__this->fields)._popups;
                                            lVar6 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar6;
                                          if (pSVar4 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                             ) {
                                            pUVar18 = (__this->fields).CustomAssetsPopup;
                                            piVar1 = &(pSVar4->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar5 = (pSVar4->fields)._items;
                                            if (pUVar5 != (UI_BasePopup_array *)0x0) {
                                              uVar3 = (pSVar4->fields)._size;
                                              if (uVar3 < (uint)pUVar5->max_length) {
                                                (pSVar4->fields)._size = uVar3 + 1;
                                                pUVar5->m_Items[(int)uVar3] =
                                                     (UI_BasePopup_o *)pUVar18;
                                                il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
                                                pSVar4 = (__this->fields)._popups;
                                                lVar6 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List<object>__AddWithResize
                                                          ((
                                                  System_Collections_Generic_List_object__o *)pSVar4
                                                  ,(Il2CppObject *)pUVar18,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                pSVar4 = (__this->fields)._popups;
                                                lVar6 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar6;
                                              if (pSVar4 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                 ) {
                                                pUVar19 = (__this->fields).WeatherPopup;
                                                piVar1 = &(pSVar4->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar5 = (pSVar4->fields)._items;
                                                if (pUVar5 != (UI_BasePopup_array *)0x0) {
                                                  uVar3 = (pSVar4->fields)._size;
                                                  if (uVar3 < (uint)pUVar5->max_length) {
                                                    (pSVar4->fields)._size = uVar3 + 1;
                                                    pUVar5->m_Items[(int)uVar3] =
                                                         (UI_BasePopup_o *)pUVar19;
                                                    il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3)
                                                    ;
                                                    return;
                                                  }
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar4
                                                  ,(Il2CppObject *)pUVar19,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70
                                                   ));
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$SetDrag
// il2cpp: void UI_MapEditorMenu__SetDrag (UI_MapEditorMenu_o* __this, bool active, UnityEngine_Vector2_o start, UnityEngine_Vector2_o end, const MethodInfo* method);
// 0x4121b00

void UI_MapEditorMenu__SetDrag
               (UI_MapEditorMenu_o *__this,bool_conflict active,UnityEngine_Vector2_o start,
               UnityEngine_Vector2_o end,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Component_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_RectTransform_o *pUVar6;
  float fVar7;
  UnityEngine_Vector2_o value;
  undefined4 extraout_XMM0_Dc;
  undefined8 in_XMM0_Qb;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float local_28;
  float fStack_24;
  
  auVar10._8_4_ = in_XMM1_Dc;
  auVar10._0_8_ = end.fields;
  auVar10._12_4_ = in_XMM1_Dd;
  if (DAT_057048f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057048f2 = '\x01';
  }
  pUVar1 = (__this->fields).DragImage;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)active == '\0') {
        if ((char)bVar4 == '\0') {
          return;
        }
        pUVar1 = (__this->fields).DragImage;
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if ((char)bVar4 == '\0') {
          pUVar1 = (__this->fields).DragImage;
          if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_04121cb2;
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_04121cb2;
          UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          __this_01 = (UnityEngine_Canvas_o *)
                      UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_Canvas_GetComponent_Canvas);
          if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
            fVar7 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).DragImage;
            if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
              pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                auVar8._8_8_ = in_XMM0_Qb;
                auVar8._0_8_ = start.fields;
                auVar8 = minps(auVar8,auVar10);
                auVar9._4_4_ = fVar7;
                auVar9._0_4_ = fVar7;
                auVar9._8_4_ = extraout_XMM0_Dc;
                auVar9._12_4_ = extraout_XMM0_Dd;
                auVar9 = divps(auVar8,auVar9);
                UnityEngine_RectTransform__set_anchoredPosition
                          (pUVar6,(UnityEngine_Vector2_o)auVar9._0_8_,(MethodInfo *)0x0);
                pUVar1 = (__this->fields).DragImage;
                if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                  pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                     ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                    auVar3._8_8_ = in_XMM0_Qb;
                    auVar3._0_8_ = start.fields;
                    auVar10 = maxps(auVar3,auVar10);
                    auVar2._4_4_ = fVar7;
                    auVar2._0_4_ = fVar7;
                    auVar2._8_4_ = extraout_XMM0_Dc;
                    auVar2._12_4_ = extraout_XMM0_Dd;
                    auVar10 = divps(auVar10,auVar2);
                    local_28 = auVar9._0_4_;
                    fStack_24 = auVar9._4_4_;
                    value.fields.x = auVar10._0_4_ - local_28;
                    value.fields.y = auVar10._4_4_ - fStack_24;
                    UnityEngine_RectTransform__set_sizeDelta(pUVar6,value,(MethodInfo *)0x0);
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
LAB_04121cb2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$ShowInspector
// il2cpp: void UI_MapEditorMenu__ShowInspector (UI_MapEditorMenu_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x4121cc0

void UI_MapEditorMenu__ShowInspector
               (UI_MapEditorMenu_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapObject_array *pMVar3;
  long lVar4;
  System_Collections_Generic_List_MapObject__o *objs;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_057048f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    DAT_057048f3 = '\x01';
  }
  objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)objs,MethodInfo_List_1_Map_MapObject);
  lVar4 = MethodInfo_Void_Add;
  if (objs != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(objs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (objs->fields)._items;
    if (pMVar3 != (Map_MapObject_array *)0x0) {
      uVar2 = (objs->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        (objs->fields)._size = uVar2 + 1;
        pMVar3->m_Items[(int)uVar2] = obj;
        il2cpp_runtime_glue(pMVar3->m_Items + (int)uVar2,obj);
        method_00 = extraout_RDX;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)objs,(Il2CppObject *)obj,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        method_00 = extraout_RDX_00;
      }
      UI_MapEditorMenu__ShowInspector(__this,objs,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$ShowInspector
// il2cpp: void UI_MapEditorMenu__ShowInspector (UI_MapEditorMenu_o* __this, System_Collections_Generic_List_MapObject__o* objs, const MethodInfo* method);
// 0x4120360

void UI_MapEditorMenu__ShowInspector
               (UI_MapEditorMenu_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               MethodInfo *method)

{
  UI_MapEditorInspectPanel_o **ppUVar1;
  UnityEngine_Transform_o *parent;
  UI_MapEditorInspectPanel_o *pUVar2;
  UnityEngine_GameObject_o *obj;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)objs;
  if (DAT_057048f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapEditorInspectPanel_CreateHeadedPanel_MapEdito);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057048f4 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,method_01);
  if ((objs != (System_Collections_Generic_List_MapObject__o *)0x0) && ((objs->fields)._size != 0))
  {
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = (UI_MapEditorInspectPanel_o *)
             UI_ElementFactory__CreateHeadedPanel<object>(parent,0,MethodInfo_MapEditorInspectPanel_CreateHeadedPanel_MapEdito);
    ppUVar1 = &(__this->fields).InspectPanel;
    (__this->fields).InspectPanel = pUVar2;
    il2cpp_runtime_glue(ppUVar1);
    pUVar2 = (__this->fields).InspectPanel;
    if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
      obj = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                (obj,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
      pUVar2 = *ppUVar1;
      if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
        UI_MapEditorInspectPanel__Show(pUVar2,objs,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.MapEditorMenu$$HideInspector
// il2cpp: void UI_MapEditorMenu__HideInspector (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4121da0

void UI_MapEditorMenu__HideInspector(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *obj;
  
  if (DAT_057048f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048f5 = '\x01';
  }
  pUVar1 = (__this->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.MapEditorMenu$$ShowBrushPanel
// il2cpp: void UI_MapEditorMenu__ShowBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4121e40

void UI_MapEditorMenu__ShowBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o **ppUVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *parent;
  UI_MapEditorBrushPanel_o *pUVar3;
  UnityEngine_GameObject_o *obj;
  
  if (DAT_057048f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorB);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048f6 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,method);
  pUVar3 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).BrushPanel;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = (UI_MapEditorBrushPanel_o *)
             UI_ElementFactory__CreateHeadedPanel<object>(parent,0,MethodInfo_MapEditorBrushPanel_CreateHeadedPanel_MapEditorB);
    (__this->fields).BrushPanel = pUVar3;
    il2cpp_runtime_glue(ppUVar1);
    pUVar3 = (__this->fields).BrushPanel;
    if (pUVar3 == (UI_MapEditorBrushPanel_o *)0x0) goto LAB_04121f20;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0)
    ;
    UI_ElementFactory__SetAnchor
              (obj,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
  }
  pUVar3 = *ppUVar1;
  if (pUVar3 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Show(pUVar3,(MethodInfo *)0x0);
    return;
  }
LAB_04121f20:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$HideBrushPanel
// il2cpp: void UI_MapEditorMenu__HideBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4121f30

void UI_MapEditorMenu__HideBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *x;
  bool_conflict bVar1;
  UnityEngine_Object_o *obj;
  UI_MapEditorBrushPanel_o **ppUVar2;
  
  if (DAT_057048f7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048f7 = '\x01';
  }
  x = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    ppUVar2 = &(__this->fields).BrushPanel;
    if (*ppUVar2 != (UI_MapEditorBrushPanel_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)*ppUVar2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      *ppUVar2 = (UI_MapEditorBrushPanel_o *)0x0;
      il2cpp_runtime_glue(ppUVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.MapEditorMenu$$SyncBrushPanel
// il2cpp: void UI_MapEditorMenu__SyncBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4121fe0

void UI_MapEditorMenu__SyncBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057048f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048f8 = '\x01';
  }
  pUVar1 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).BrushPanel;
    if (pUVar1 != (UI_MapEditorBrushPanel_o *)0x0) {
      UI_MapEditorBrushPanel__Rebuild(pUVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.MapEditorMenu$$SyncBrushPanelValues
// il2cpp: void UI_MapEditorMenu__SyncBrushPanelValues (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4122060

void UI_MapEditorMenu__SyncBrushPanelValues(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057048f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048f9 = '\x01';
  }
  pUVar1 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).BrushPanel;
    if (pUVar1 != (UI_MapEditorBrushPanel_o *)0x0) {
      UI_MapEditorBrushPanel__SyncValues(pUVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.MapEditorMenu$$SyncInspector
// il2cpp: void UI_MapEditorMenu__SyncInspector (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x41220e0

void UI_MapEditorMenu__SyncInspector(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_057048fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048fa = '\x01';
  }
  pUVar1 = (__this->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
      UI_MapEditorMenu__ShowInspector(__this,(pUVar1->fields)._mapObjects,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.MapEditorMenu$$ShowHierarchyPanel
// il2cpp: void UI_MapEditorMenu__ShowHierarchyPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4122170

void UI_MapEditorMenu__ShowHierarchyPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o **ppUVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *parent;
  UI_MapEditorHierarchyPanel_o *pUVar3;
  UnityEngine_GameObject_o *obj_00;
  
  if (DAT_057048fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEdi);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048fb = '\x01';
  }
  pUVar3 = (__this->fields).HierarchyPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).HierarchyPanel;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*ppUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto LAB_0412228a;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject
                    ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar3 = (UI_MapEditorHierarchyPanel_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(parent,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEdi);
  (__this->fields).HierarchyPanel = pUVar3;
  il2cpp_runtime_glue(ppUVar1);
  pUVar3 = (__this->fields).HierarchyPanel;
  if (pUVar3 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    obj_00 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor
              (obj_00,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
    pUVar3 = *ppUVar1;
    if (pUVar3 != (UI_MapEditorHierarchyPanel_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      return;
    }
  }
LAB_0412228a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$SyncHierarchyPanel
// il2cpp: void UI_MapEditorMenu__SyncHierarchyPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4120430

void UI_MapEditorMenu__SyncHierarchyPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).HierarchyPanel;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__Sync(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$RebuildPanels
// il2cpp: void UI_MapEditorMenu__RebuildPanels (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4121300

void UI_MapEditorMenu__RebuildPanels(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorMenu$$GetMinMouseX
// il2cpp: float UI_MapEditorMenu__GetMinMouseX (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4122290

float UI_MapEditorMenu__GetMinMouseX(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_057048fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048fc = '\x01';
  }
  pUVar1 = (__this->fields).HierarchyPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar3 = 0.0;
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields).HierarchyPanel;
    if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar3 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
    fVar3 = fVar3 + 10.0;
  }
  return fVar3;
}


// UI.MapEditorMenu$$GetMaxMouseX
// il2cpp: float UI_MapEditorMenu__GetMaxMouseX (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4122310

float UI_MapEditorMenu__GetMaxMouseX(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorBrushPanel_o *pUVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  float fVar6;
  float local_24;
  
  if (DAT_057048fd == '\0') {
    il2cpp_init_method_metadata();
    DAT_057048fd = '\x01';
  }
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar1 = (__this->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_24 = (float)iVar3;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar1 = (__this->fields).InspectPanel;
    if ((pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0412245e;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar1 = (__this->fields).InspectPanel;
      if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) goto LAB_0412245e;
      fVar6 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
      local_24 = local_24 - (fVar6 + 10.0);
    }
  }
  pUVar2 = (__this->fields).BrushPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar2 = (__this->fields).BrushPanel;
    if ((pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) {
LAB_0412245e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar2 = (__this->fields).BrushPanel;
      if (pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) goto LAB_0412245e;
      fVar6 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar2,(MethodInfo *)0x0);
      local_24 = local_24 - (fVar6 + 10.0);
    }
  }
  return local_24;
}


// UI.MapEditorMenu$$GetMinMouseY
// il2cpp: float UI_MapEditorMenu__GetMinMouseY (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4122470

float UI_MapEditorMenu__GetMinMouseY(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorMenu$$GetMaxMouseY
// il2cpp: float UI_MapEditorMenu__GetMaxMouseY (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4122480

float UI_MapEditorMenu__GetMaxMouseY(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return (float)iVar1 + -60.0;
}


// UI.MapEditorMenu$$Update
// il2cpp: void UI_MapEditorMenu__Update (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x41224a0

void UI_MapEditorMenu__Update(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  
  if (DAT_057048fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048fe = '\x01';
  }
  UI_MapEditorMenu__UpdateMouseUI(__this,method);
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    *(char *)((long)&(__this->fields).IsMouseUI + 1) = (char)bVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$IsPopupActive
// il2cpp: bool UI_MapEditorMenu__IsPopupActive (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4114460

bool_conflict UI_MapEditorMenu__IsPopupActive(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  undefined1 uVar1;
  bool_conflict bVar2;
  undefined8 extraout_RAX;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppObject *pIVar5;
  
  if (DAT_057048ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    DAT_057048ff = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  pIVar5 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
  uVar1 = 0;
  while( true ) {
    __this_01.fields._8_8_ = pIVar4;
    __this_01.fields._list = pSVar3;
    __this_01.fields._current = pIVar5;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
    if ((char)bVar2 == '\0') {
      __this_02.fields._8_8_ = pIVar4;
      __this_02.fields._list = pSVar3;
      __this_02.fields._current = pIVar5;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),uVar1);
    }
    if (pIVar5 == (Il2CppObject *)0x0) break;
    if (*(char *)&pIVar5[9].klass != '\0') {
      uVar1 = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$UpdateMouseUI
// il2cpp: void UI_MapEditorMenu__UpdateMouseUI (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4122540

void UI_MapEditorMenu__UpdateMouseUI(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *__this_00;
  UI_MapEditorHierarchyPanel_o *pUVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  bool bVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  float local_48;
  float fStack_44;
  
  UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  bVar2 = UI_MapEditorMenu__IsPopupActive(__this,method);
  bVar4 = true;
  if ((char)bVar2 == '\0') {
    __this_00 = (__this->fields)._topPanel;
    if (__this_00 == (UI_MapEditorTopPanel_o *)0x0) goto LAB_0412261d;
    bVar2 = UI_MapEditorTopPanel__IsDropdownOpen(__this_00,method);
    if ((char)bVar2 == '\0') {
      if (DAT_057048fc == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_057048fc = '\x01';
      }
      pUVar1 = (__this->fields).HierarchyPanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      fVar5 = 0.0;
      if ((char)bVar2 != '\0') {
        pUVar1 = (__this->fields).HierarchyPanel;
        if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto LAB_0412261d;
        method_00 = (MethodInfo *)0x0;
        fVar5 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
        fVar5 = fVar5 + 10.0;
      }
      local_48 = UVar6.fields.x;
      if (fVar5 <= local_48) {
        fVar5 = UI_MapEditorMenu__GetMaxMouseX(__this,method_00);
        fStack_44 = UVar6.fields.y;
        if ((local_48 <= fVar5) && (0.0 <= fStack_44)) {
          iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          bVar4 = (float)iVar3 + -60.0 < fStack_44;
        }
      }
    }
  }
  if (__this != (UI_MapEditorMenu_o *)0x0) {
    *(bool *)&(__this->fields).IsMouseUI = bVar4;
    return;
  }
LAB_0412261d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorMenu$$.ctor
// il2cpp: void UI_MapEditorMenu___ctor (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x4122870

void UI_MapEditorMenu___ctor(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


