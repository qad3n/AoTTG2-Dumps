// Type: UI.MapEditorMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorMenu.cs
// --------------------------------

// UI.MapEditorMenu$$Setup
// il2cpp: void UI_MapEditorMenu__Setup (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d958e0

void UI_MapEditorMenu__Setup(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  UnityEngine_Transform_o *pUVar1;
  UI_MapEditorTopPanel_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Image_o *pUVar4;
  
  if (Il2CppMethodInitialized_0754805c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorTopPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/MapEditorDragImage");
    Il2CppMethodInitialized_0754805c = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar1,true,
                      (MethodInfo_34D7370 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorTopPanel);
  (__this->fields)._topPanel = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._topPanel);
  pUVar2 = (__this->fields)._topPanel;
  if (pUVar2 != (UI_MapEditorTopPanel_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar3,1,1,(UnityEngine_Vector2_o)0x40a00000c0a00000,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/Misc/MapEditorDragImage",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
      targetAddress = &(__this->fields).DragImage;
      (__this->fields).DragImage = pUVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar4 = (__this->fields).DragImage;
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UI_ElementFactory__SetAnchor
                  (pUVar3,6,6,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        pUVar4 = *targetAddress;
        if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
            }
            Gisketch_Aottg2UI_Game_AottgMobileUi__CreateControls_57c5260(pUVar1,__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$SetupPopups
// il2cpp: void UI_MapEditorMenu__SetupPopups (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d95ac0

void UI_MapEditorMenu__SetupPopups(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_MapEditorTexturePopup_o **targetAddress;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_MapEditorAddObjectPopup_o *pUVar7;
  UI_MapEditorAddVariantPopup_o *pUVar8;
  UI_MapEditorTexturePopup_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_MapEditorCameraPopup_o *pUVar11;
  UI_MapEditorInfoPopup_o *pUVar12;
  UI_MapEditorSettingsPopup_o *pUVar13;
  UI_MapEditorCustomLogicPopup_o *pUVar14;
  UI_MapEditorAddComponentPopup_o *pUVar15;
  UI_MapEditorMapObjectPickerPopup_o *pUVar16;
  UI_MapEditorErrorPopup_o *pUVar17;
  UI_MapEditorCustomAssetPopup_o *pUVar18;
  UI_MapEditorWeatherPopup_o *pUVar19;
  UI_MapEditorVersionConversionPopup_o *pUVar20;
  
  if (Il2CppMethodInitialized_0754805d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddComponentPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddObjectPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddVariantPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCameraPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCustomAssetPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCustomLogicPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorErrorPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorInfoPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorMapObjectPickerPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorSettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorTexturePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorVersionConversionPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorWeatherPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_0754805d = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar6,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddObjectPopup);
  (__this->fields).AddObjectPopup = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AddObjectPopup);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar6,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddVariantPopup);
  (__this->fields).AddVariantPopup = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AddVariantPopup);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar6,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorTexturePopup);
  targetAddress = &(__this->fields).TexturePopup;
  (__this->fields).TexturePopup = pUVar9;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar7 = (__this->fields).AddObjectPopup;
  if (pUVar7 != (UI_MapEditorAddObjectPopup_o *)0x0) {
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar10,4,4,(UnityEngine_Vector2_o)0xc2820000,(MethodInfo *)0x0);
    pUVar9 = *targetAddress;
    if (pUVar9 != (UI_MapEditorTexturePopup_o *)0x0) {
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar10,4,4,(UnityEngine_Vector2_o)0xc2820000,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar11 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCameraPopup);
      (__this->fields).CameraPopup = pUVar11;
      Il2CppCodeGenWriteBarrier(&(__this->fields).CameraPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar12 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorInfoPopup);
      (__this->fields).InfoPopup = pUVar12;
      Il2CppCodeGenWriteBarrier(&(__this->fields).InfoPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar13 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorSettingsPopup);
      (__this->fields).SettingsPopup = pUVar13;
      Il2CppCodeGenWriteBarrier(&(__this->fields).SettingsPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar14 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCustomLogicPopup);
      (__this->fields).CustomLogicPopup = pUVar14;
      Il2CppCodeGenWriteBarrier(&(__this->fields).CustomLogicPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar15 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorAddComponentPopup);
      (__this->fields).AddComponentPopup = pUVar15;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AddComponentPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar16 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorMapObjectPickerPopup);
      (__this->fields).MapObjectPickerPopup = pUVar16;
      Il2CppCodeGenWriteBarrier(&(__this->fields).MapObjectPickerPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar17 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorErrorPopup);
      (__this->fields).ErrorPopup = pUVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields).ErrorPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar18 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorCustomAssetPopup);
      (__this->fields).CustomAssetsPopup = pUVar18;
      Il2CppCodeGenWriteBarrier(&(__this->fields).CustomAssetsPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar19 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorWeatherPopup);
      (__this->fields).WeatherPopup = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields).WeatherPopup);
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar20 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar6,false,
                           (MethodInfo_34D7290 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapEditorVersionConversionPopup);
      (__this->fields).VersionConversionPopup = pUVar20;
      Il2CppCodeGenWriteBarrier(&(__this->fields).VersionConversionPopup);
      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
      pSVar3 = (__this->fields)._popups;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar7 = (__this->fields).AddObjectPopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
          pSVar3 = (__this->fields)._popups;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar8 = (__this->fields).AddVariantPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar3->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
              pSVar3 = (__this->fields)._popups;
              if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                pUVar9 = (__this->fields).TexturePopup;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar4 = (pSVar3->fields)._items;
                if (pUVar4 != (UI_BasePopup_array *)0x0) {
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar4->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                  }
                  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                  pSVar3 = (__this->fields)._popups;
                  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    pUVar11 = (__this->fields).CameraPopup;
                    piVar1 = &(pSVar3->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar4 = (pSVar3->fields)._items;
                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                      uVar2 = (pSVar3->fields)._size;
                      if (uVar2 < (uint)pUVar4->max_length) {
                        (pSVar3->fields)._size = uVar2 + 1;
                        pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar11;
                        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar11
                                   ,(MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                      }
                      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                      pSVar3 = (__this->fields)._popups;
                      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                        pUVar12 = (__this->fields).InfoPopup;
                        piVar1 = &(pSVar3->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar4 = (pSVar3->fields)._items;
                        if (pUVar4 != (UI_BasePopup_array *)0x0) {
                          uVar2 = (pSVar3->fields)._size;
                          if (uVar2 < (uint)pUVar4->max_length) {
                            (pSVar3->fields)._size = uVar2 + 1;
                            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar12;
                            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar3,
                                       (Il2CppObject *)pUVar12,
                                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                          }
                          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                          pSVar3 = (__this->fields)._popups;
                          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                            pUVar13 = (__this->fields).SettingsPopup;
                            piVar1 = &(pSVar3->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar4 = (pSVar3->fields)._items;
                            if (pUVar4 != (UI_BasePopup_array *)0x0) {
                              uVar2 = (pSVar3->fields)._size;
                              if (uVar2 < (uint)pUVar4->max_length) {
                                (pSVar3->fields)._size = uVar2 + 1;
                                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar13;
                                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar3,
                                           (Il2CppObject *)pUVar13,
                                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                              }
                              pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                              pSVar3 = (__this->fields)._popups;
                              if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                pUVar14 = (__this->fields).CustomLogicPopup;
                                piVar1 = &(pSVar3->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pUVar4 = (pSVar3->fields)._items;
                                if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                  uVar2 = (pSVar3->fields)._size;
                                  if (uVar2 < (uint)pUVar4->max_length) {
                                    (pSVar3->fields)._size = uVar2 + 1;
                                    pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar14;
                                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar3,
                                               (Il2CppObject *)pUVar14,
                                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                                  }
                                  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                  pSVar3 = (__this->fields)._popups;
                                  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                    pUVar15 = (__this->fields).AddComponentPopup;
                                    piVar1 = &(pSVar3->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar4 = (pSVar3->fields)._items;
                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                      uVar2 = (pSVar3->fields)._size;
                                      if (uVar2 < (uint)pUVar4->max_length) {
                                        (pSVar3->fields)._size = uVar2 + 1;
                                        pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar15;
                                        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pSVar3,
                                                   (Il2CppObject *)pUVar15,
                                                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method
                                                  );
                                      }
                                      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                      pSVar3 = (__this->fields)._popups;
                                      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                        pUVar16 = (__this->fields).MapObjectPickerPopup;
                                        piVar1 = &(pSVar3->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar4 = (pSVar3->fields)._items;
                                        if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                          uVar2 = (pSVar3->fields)._size;
                                          if (uVar2 < (uint)pUVar4->max_length) {
                                            (pSVar3->fields)._size = uVar2 + 1;
                                            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar16;
                                            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)pSVar3,
                                                       (Il2CppObject *)pUVar16,
                                                       (MethodInfo_395D230 *)
                                                       pMVar5->klass->rgctx_data[0xe].method);
                                          }
                                          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                          pSVar3 = (__this->fields)._popups;
                                          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                            pUVar17 = (__this->fields).ErrorPopup;
                                            piVar1 = &(pSVar3->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar4 = (pSVar3->fields)._items;
                                            if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                              uVar2 = (pSVar3->fields)._size;
                                              if (uVar2 < (uint)pUVar4->max_length) {
                                                (pSVar3->fields)._size = uVar2 + 1;
                                                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar17;
                                                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)pSVar3
                                                           ,(Il2CppObject *)pUVar17,
                                                           (MethodInfo_395D230 *)
                                                           pMVar5->klass->rgctx_data[0xe].method);
                                              }
                                              pMVar5 = 
                                              MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                              pSVar3 = (__this->fields)._popups;
                                              if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)
                                                            0x0) {
                                                pUVar18 = (__this->fields).CustomAssetsPopup;
                                                piVar1 = &(pSVar3->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar4 = (pSVar3->fields)._items;
                                                if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                  uVar2 = (pSVar3->fields)._size;
                                                  if (uVar2 < (uint)pUVar4->max_length) {
                                                    (pSVar3->fields)._size = uVar2 + 1;
                                                    pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar18;
                                                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               pSVar3,(Il2CppObject *)pUVar18,
                                                               (MethodInfo_395D230 *)
                                                               pMVar5->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                                  pSVar3 = (__this->fields)._popups;
                                                  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o
                                                                 *)0x0) {
                                                    pUVar19 = (__this->fields).WeatherPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar19;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (pUVar4->m_Items + (int)uVar2);
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)pSVar3,(Il2CppObject *)pUVar19,
                                                                   (MethodInfo_395D230 *)
                                                                   pMVar5->klass->rgctx_data[0xe].method);
                                                      }
                                                      pMVar5 = 
                                                      MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                      ;
                                                      pSVar3 = (__this->fields)._popups;
                                                      if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                        pUVar20 = (__this->fields).VersionConversionPopup;
                                                        piVar1 = &(pSVar3->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pUVar4 = (pSVar3->fields)._items;
                                                        if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                          uVar2 = (pSVar3->fields)._size;
                                                          if (uVar2 < (uint)pUVar4->max_length) {
                                                            (pSVar3->fields)._size = uVar2 + 1;
                                                            pUVar4->m_Items[(int)uVar2] =
                                                                 (UI_BasePopup_o *)pUVar20;
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pUVar4->m_Items + (int)uVar2);
                                                            return;
                                                          }
                                                                                                                    
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar20,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
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
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$SetDrag
// il2cpp: void UI_MapEditorMenu__SetDrag (UI_MapEditorMenu_o* __this, bool active, UnityEngine_Vector2_o start, UnityEngine_Vector2_o end, const MethodInfo* method);
// 0x5d96370

void UI_MapEditorMenu__SetDrag
               (UI_MapEditorMenu_o *__this,bool active,UnityEngine_Vector2_o start,UnityEngine_Vector2_o end,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UI_BaseMenu_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_RectTransform_o *pUVar6;
  float fVar7;
  UnityEngine_Vector2_o value;
  undefined8 in_XMM0_Qb;
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
  if (Il2CppMethodInitialized_0754805e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754805e = '\x01';
  }
  pUVar1 = (__this->fields).DragImage;
  if (active) {
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
        if (!bVar4) {
          pUVar1 = (__this->fields).DragImage;
          if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_05d9653d;
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05d9653d;
          UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (__this_00 != (UI_BaseMenu_o *)0x0) {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_00,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
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
                auVar9._8_4_ = fVar7;
                auVar9._12_4_ = fVar7;
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
                    auVar2._8_4_ = fVar7;
                    auVar2._12_4_ = fVar7;
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
  else if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pUVar1 = (__this->fields).DragImage;
      if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05d9653d:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$ShowInspector
// il2cpp: void UI_MapEditorMenu__ShowInspector (UI_MapEditorMenu_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5d96550

void UI_MapEditorMenu__ShowInspector(UI_MapEditorMenu_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapObject_array *pMVar3;
  System_Collections_Generic_List_MapObject__o *objs;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_0754805f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_0754805f = '\x01';
  }
  objs = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)objs,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  pMVar4 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
  if (objs != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(objs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (objs->fields)._items;
    if (pMVar3 != (Map_MapObject_array *)0x0) {
      uVar2 = (objs->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        (objs->fields)._size = uVar2 + 1;
        pMVar3->m_Items[(int)uVar2] = obj;
        Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2);
        pMVar4 = extraout_RDX;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)objs,(Il2CppObject *)obj,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        pMVar4 = extraout_RDX_00;
      }
      UI_MapEditorMenu__ShowInspector_5c96630(__this,objs,pMVar4);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$ShowInspector
// il2cpp: void UI_MapEditorMenu__ShowInspector (UI_MapEditorMenu_o* __this, System_Collections_Generic_List_MapObject__o* objs, const MethodInfo* method);
// 0x5d96630

void UI_MapEditorMenu__ShowInspector_5c96630
               (UI_MapEditorMenu_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  UI_MapEditorInspectPanel_o *pUVar1;
  UnityEngine_RectTransform_o *rt;
  MethodInfo **method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)objs;
  if (Il2CppMethodInitialized_07548060 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    Il2CppMethodInitialized_07548060 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,method_01);
  if ((objs == (System_Collections_Generic_List_MapObject__o *)0x0) || ((objs->fields)._size == 0)) {
    return;
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_00 = &MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorInspectPanel;
  pUVar1 = UI_ElementFactory__CreateHeadedPanel_object_
                     (parent,false,
                      (MethodInfo_34D7370 *)
                      MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorInspectPanel);
  (__this->fields).InspectPanel = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InspectPanel);
  pUVar1 = (__this->fields).InspectPanel;
  if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
    rt = UnityEngine_Component__GetComponent_object_
                   ((UnityEngine_Component_o *)pUVar1,
                    (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    UI_MapEditorMenu__ApplyStretchAnchor(__this,rt,false,(MethodInfo *)method_00);
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
      UI_MapEditorInspectPanel__Show_5c856c0(pUVar1,objs,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$RebuildInspectorPreservingScroll
// il2cpp: void UI_MapEditorMenu__RebuildInspectorPreservingScroll (UI_MapEditorMenu_o* __this, System_Collections_Generic_List_MapObject__o* objs, const MethodInfo* method);
// 0x5d96940

void UI_MapEditorMenu__RebuildInspectorPreservingScroll
               (UI_MapEditorMenu_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float position;
  
  if (Il2CppMethodInitialized_07548061 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548061 = '\x01';
  }
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) goto label_05d96a21;
    position = UI_MapEditorInspectPanel__GetScrollPosition(pUVar1,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    position = 1.0;
    method_00 = extraout_RDX;
  }
  UI_MapEditorMenu__ShowInspector_5c96630(__this,objs,method_00);
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).InspectPanel;
  if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorInspectPanel__RestoreScrollPosition(pUVar1,position,(MethodInfo *)0x0);
    return;
  }
label_05d96a21:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$HideInspector
// il2cpp: void UI_MapEditorMenu__HideInspector (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d96710

void UI_MapEditorMenu__HideInspector(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  bool bVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07548062 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548062 = '\x01';
  }
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MapEditorMenu$$ShowBrushPanel
// il2cpp: void UI_MapEditorMenu__ShowBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d96a30

void UI_MapEditorMenu__ShowBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o **targetAddress;
  bool bVar1;
  UnityEngine_Transform_o *parent;
  UI_MapEditorBrushPanel_o *pUVar2;
  UnityEngine_GameObject_o *obj;
  
  if (Il2CppMethodInitialized_07548063 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorBrushPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548063 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,method);
  pUVar2 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).BrushPanel;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateHeadedPanel_object_
                       (parent,false,
                        (MethodInfo_34D7370 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorBrushPanel);
    (__this->fields).BrushPanel = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = (__this->fields).BrushPanel;
    if (pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) goto label_05d96b10;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(obj,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
  }
  pUVar2 = *targetAddress;
  if (pUVar2 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__Show(pUVar2,(MethodInfo *)0x0);
    return;
  }
label_05d96b10:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$HideBrushPanel
// il2cpp: void UI_MapEditorMenu__HideBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d96b20

void UI_MapEditorMenu__HideBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *x;
  bool bVar1;
  UnityEngine_Object_o *obj;
  UI_MapEditorBrushPanel_o **targetAddress;
  
  if (Il2CppMethodInitialized_07548064 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548064 = '\x01';
  }
  x = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    targetAddress = &(__this->fields).BrushPanel;
    if (*targetAddress == (UI_MapEditorBrushPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    *targetAddress = (UI_MapEditorBrushPanel_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  return;
}


// UI.MapEditorMenu$$ShowRulerPanel
// il2cpp: void UI_MapEditorMenu__ShowRulerPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d96bd0

void UI_MapEditorMenu__ShowRulerPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorRulerPanel_o **targetAddress;
  bool bVar1;
  UnityEngine_Transform_o *parent;
  UI_MapEditorRulerPanel_o *pUVar2;
  UnityEngine_GameObject_o *obj;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorRulerPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548065 = '\x01';
  }
  UI_MapEditorMenu__HideInspector(__this,method);
  pUVar2 = (__this->fields).RulerPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).RulerPanel;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateHeadedPanel_object_
                       (parent,false,
                        (MethodInfo_34D7370 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorRulerPanel);
    (__this->fields).RulerPanel = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = (__this->fields).RulerPanel;
    if (pUVar2 == (UI_MapEditorRulerPanel_o *)0x0) goto label_05d96cbb;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(obj,2,2,(UnityEngine_Vector2_o)0xc2820000c0a00000,(MethodInfo *)0x0);
  }
  pUVar2 = *targetAddress;
  if (pUVar2 != (UI_MapEditorRulerPanel_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UI_BasePanel__Show((UI_BasePanel_o *)pUVar2,(MethodInfo *)0x0);
    UI_MapEditorRulerPanel__Rebuild(pUVar2,method_00);
    return;
  }
label_05d96cbb:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$HideRulerPanel
// il2cpp: void UI_MapEditorMenu__HideRulerPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d96ce0

void UI_MapEditorMenu__HideRulerPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorRulerPanel_o *x;
  bool bVar1;
  UnityEngine_Object_o *obj;
  UI_MapEditorRulerPanel_o **targetAddress;
  
  if (Il2CppMethodInitialized_07548066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548066 = '\x01';
  }
  x = (__this->fields).RulerPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    targetAddress = &(__this->fields).RulerPanel;
    if (*targetAddress == (UI_MapEditorRulerPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    *targetAddress = (UI_MapEditorRulerPanel_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  return;
}


// UI.MapEditorMenu$$SyncRulerPanel
// il2cpp: void UI_MapEditorMenu__SyncRulerPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d96d90

void UI_MapEditorMenu__SyncRulerPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorRulerPanel_o *pUVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548067 = '\x01';
  }
  pUVar1 = (__this->fields).RulerPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).RulerPanel;
    if (pUVar1 == (UI_MapEditorRulerPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MapEditorRulerPanel__Rebuild(pUVar1,method_00);
    return;
  }
  return;
}


// UI.MapEditorMenu$$SyncBrushPanel
// il2cpp: void UI_MapEditorMenu__SyncBrushPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98340

void UI_MapEditorMenu__SyncBrushPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548068 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548068 = '\x01';
  }
  pUVar1 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).BrushPanel;
    if (pUVar1 == (UI_MapEditorBrushPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MapEditorBrushPanel__Rebuild(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MapEditorMenu$$SyncBrushPanelValues
// il2cpp: void UI_MapEditorMenu__SyncBrushPanelValues (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d983c0

void UI_MapEditorMenu__SyncBrushPanelValues(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548069 = '\x01';
  }
  pUVar1 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).BrushPanel;
    if (pUVar1 == (UI_MapEditorBrushPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MapEditorBrushPanel__SyncValues(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MapEditorMenu$$SyncInspector
// il2cpp: void UI_MapEditorMenu__SyncInspector (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98440

void UI_MapEditorMenu__SyncInspector(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754806a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754806a = '\x01';
  }
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).InspectPanel;
    if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MapEditorMenu__ShowInspector_5c96630(__this,(pUVar1->fields)._mapObjects,method_00);
    return;
  }
  return;
}


// UI.MapEditorMenu$$ShowHierarchyPanel
// il2cpp: void UI_MapEditorMenu__ShowHierarchyPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d984d0

void UI_MapEditorMenu__ShowHierarchyPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o **targetAddress;
  UI_MapEditorTopPanel_o *pUVar1;
  bool bVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *parent;
  UI_MapEditorHierarchyPanel_o *pUVar3;
  UnityEngine_RectTransform_o *rt;
  MethodInfo **method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754806b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorHierarchyPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754806b = '\x01';
  }
  pUVar3 = (__this->fields).HierarchyPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).HierarchyPanel;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = *targetAddress;
    if (pUVar3 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_05d98644;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_00 = &MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorHierarchyPanel;
  pUVar3 = UI_ElementFactory__CreateHeadedPanel_object_
                     (parent,false,
                      (MethodInfo_34D7370 *)
                      MethodInfo_UI_ElementFactory_CreateHeadedPanel_MapEditorHierarchyPanel);
  (__this->fields).HierarchyPanel = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar3 = (__this->fields).HierarchyPanel;
  if (pUVar3 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    rt = UnityEngine_Component__GetComponent_object_
                   ((UnityEngine_Component_o *)pUVar3,
                    (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    UI_MapEditorMenu__ApplyStretchAnchor(__this,rt,true,(MethodInfo *)method_00);
    pUVar3 = (__this->fields).HierarchyPanel;
    if (pUVar3 != (UI_MapEditorHierarchyPanel_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      pUVar1 = (__this->fields)._topPanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_01 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pUVar1 = (__this->fields)._topPanel;
      if (pUVar1 != (UI_MapEditorTopPanel_o *)0x0) {
        UI_MapEditorTopPanel__RefreshSideToolbarPosition(pUVar1,method_01);
        return;
      }
    }
  }
label_05d98644:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$ApplyStretchAnchor
// il2cpp: void UI_MapEditorMenu__ApplyStretchAnchor (UI_MapEditorMenu_o* __this, UnityEngine_RectTransform_o* rt, bool isLeft, const MethodInfo* method);
// 0x5d967b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9686f: jmp 0x5d96879

void UI_MapEditorMenu__ApplyStretchAnchor
               (UI_MapEditorMenu_o *__this,UnityEngine_RectTransform_o *rt,bool isLeft,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *__this_00;
  float fVar5;
  float fVar6;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_0754806c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754806c = '\x01';
  }
  pUVar1 = (__this->fields)._topPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (__this->fields)._topPanel;
    if ((pUVar1 == (UI_MapEditorTopPanel_o *)0x0) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
       __this_00 == (UnityEngine_RectTransform_o *)0x0)) goto label_05d96931;
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    UVar3 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    fStack_44 = UVar2.fields.y;
    fStack_44 = fStack_44 - UVar3.fields.y;
    fVar5 = 0.0;
    if (0.0 <= fStack_44) {
      fVar5 = fStack_44;
    }
  }
  else {
    fVar5 = 55.0;
  }
  if (rt != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(rt,(MethodInfo *)0x0);
    local_48 = UVar2.fields.x;
    if (isLeft) {
      UnityEngine_RectTransform__set_anchorMin(rt,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax(rt,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
      ;
      fVar6 = 0.0;
    }
    else {
      UnityEngine_RectTransform__set_anchorMin(rt,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax(rt,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0)
      ;
      fVar6 = -local_48;
      local_48 = 0.0;
    }
    UVar2.fields.y = 0.0;
    UVar2.fields.x = fVar6;
    UnityEngine_RectTransform__set_offsetMin(rt,UVar2,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_offsetMax
              (rt,(UnityEngine_Vector2_o)(CONCAT44(fVar5,local_48) ^ 0x8000000000000000),(MethodInfo *)0x0);
    return;
  }
label_05d96931:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$SyncHierarchyPanel
// il2cpp: void UI_MapEditorMenu__SyncHierarchyPanel (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98770

void UI_MapEditorMenu__SyncHierarchyPanel(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).HierarchyPanel;
  if (__this_00 == (UI_MapEditorHierarchyPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorHierarchyPanel__Sync(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMenu$$RebuildPanels
// il2cpp: void UI_MapEditorMenu__RebuildPanels (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d95ab0

void UI_MapEditorMenu__RebuildPanels(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorMenu$$ApplyHUDScale
// il2cpp: void UI_MapEditorMenu__ApplyHUDScale (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98790

void UI_MapEditorMenu__ApplyHUDScale(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *rt;
  UnityEngine_RectTransform_c **in_RCX;
  
  if (Il2CppMethodInitialized_0754806d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_0754806d = '\x01';
  }
  pUVar1 = (__this->fields).HierarchyPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields).HierarchyPanel;
    if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_05d988eb;
    rt = (UnityEngine_RectTransform_o *)
         UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (rt != (UnityEngine_RectTransform_o *)0x0) {
      in_RCX = &TypeInfo_UnityEngine_RectTransform;
      if (rt->klass != TypeInfo_UnityEngine_RectTransform) goto label_05d988f0;
    }
    UI_MapEditorMenu__ApplyStretchAnchor(__this,rt,true,(MethodInfo *)in_RCX);
    pUVar1 = (__this->fields).HierarchyPanel;
    if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_05d988eb;
    (*(pUVar1->klass->vtable)._45_RefreshContentScale.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._45_RefreshContentScale.method);
    pUVar1 = (__this->fields).HierarchyPanel;
    if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_05d988eb;
    UI_MapEditorHierarchyPanel__Sync(pUVar1,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar2 = (__this->fields).InspectPanel;
  if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
    rt = (UnityEngine_RectTransform_o *)
         UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (rt != (UnityEngine_RectTransform_o *)0x0) {
      in_RCX = &TypeInfo_UnityEngine_RectTransform;
      if (rt->klass != TypeInfo_UnityEngine_RectTransform) {
label_05d988f0:
        il2cpp_codegen_raise_invalid_cast_exception(rt);
      }
    }
    UI_MapEditorMenu__ApplyStretchAnchor(__this,rt,false,(MethodInfo *)in_RCX);
    pUVar2 = (__this->fields).InspectPanel;
    if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
      (*(pUVar2->klass->vtable)._45_RefreshContentScale.methodPtr)
                (pUVar2,(pUVar2->klass->vtable)._45_RefreshContentScale.method);
      return;
    }
  }
label_05d988eb:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$GetMinMouseX
// il2cpp: float UI_MapEditorMenu__GetMinMouseX (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98900

float UI_MapEditorMenu__GetMinMouseX(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_0754806e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754806e = '\x01';
  }
  pUVar1 = (__this->fields).HierarchyPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar3 = 0.0;
  if (bVar2) {
    pUVar1 = (__this->fields).HierarchyPanel;
    if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar3 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
    fVar3 = fVar3 + 10.0;
  }
  return fVar3;
}


// UI.MapEditorMenu$$GetMaxMouseX
// il2cpp: float UI_MapEditorMenu__GetMaxMouseX (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98980

float UI_MapEditorMenu__GetMaxMouseX(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorBrushPanel_o *pUVar2;
  UI_MapEditorRulerPanel_o *pUVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_GameObject_o *pUVar6;
  float fVar7;
  float local_24;
  
  if (Il2CppMethodInitialized_0754806f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754806f = '\x01';
  }
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar1 = (__this->fields).InspectPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  local_24 = (float)iVar5;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (__this->fields).InspectPanel;
    if ((pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto label_05d98b53;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar1 = (__this->fields).InspectPanel;
      if (pUVar1 == (UI_MapEditorInspectPanel_o *)0x0) goto label_05d98b53;
      fVar7 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
      local_24 = local_24 - (fVar7 + 10.0);
    }
  }
  pUVar2 = (__this->fields).BrushPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields).BrushPanel;
    if ((pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto label_05d98b53;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields).BrushPanel;
      if (pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) goto label_05d98b53;
      fVar7 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar2,(MethodInfo *)0x0);
      local_24 = local_24 - (fVar7 + 10.0);
    }
  }
  pUVar3 = (__this->fields).RulerPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return local_24;
  }
  pUVar3 = (__this->fields).RulerPanel;
  if ((pUVar3 != (UI_MapEditorRulerPanel_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if (!bVar4) {
      return local_24;
    }
    pUVar3 = (__this->fields).RulerPanel;
    if (pUVar3 != (UI_MapEditorRulerPanel_o *)0x0) {
      fVar7 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar3,(MethodInfo *)0x0);
      return local_24 - (fVar7 + 10.0);
    }
  }
label_05d98b53:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$GetMinMouseY
// il2cpp: float UI_MapEditorMenu__GetMinMouseY (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98b60

float UI_MapEditorMenu__GetMinMouseY(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorMenu$$GetMaxMouseY
// il2cpp: float UI_MapEditorMenu__GetMaxMouseY (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98b70

float UI_MapEditorMenu__GetMaxMouseY(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07548070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548070 = '\x01';
  }
  pUVar1 = (__this->fields)._topPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._topPanel;
    if (pUVar1 == (UI_MapEditorTopPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar4 = UI_BasePanel__GetPhysicalHeight((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
  }
  else {
    fVar4 = 60.0;
  }
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return (float)iVar3 - fVar4;
}


// UI.MapEditorMenu$$Update
// il2cpp: void UI_MapEditorMenu__Update (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98c10
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d98d7a: jmp 0x5d98d9d
// asm:   0x5d98d7c: mov rbx, r12
// asm:   0x5d98d7f: test rbx, rbx
// asm:   0x5d98d82: je 0x5d98d9d
// asm:   0x5d98d95: mov rbx, r12
// asm:   0x5d98d98: test rbx, rbx

void UI_MapEditorMenu__Update(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  bool bVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  UnityEngine_UI_InputField_o *x_00;
  TMPro_TMP_InputField_o *x_01;
  
  if (Il2CppMethodInitialized_07548071 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548071 = '\x01';
  }
  UI_MapEditorMenu__UpdateMouseUI(__this,method);
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_05d98d9d;
  x = (UnityEngine_Object_o *)(pUVar3->fields).m_CurrentSelected;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    }
    bVar1 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
    bVar2 = true;
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_05d98d9d;
      x_00 = UnityEngine_GameObject__GetComponent_object_
                       ((UnityEngine_GameObject_o *)x,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        x_01 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)x,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
        ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (__this == (UI_MapEditorMenu_o *)0x0) goto label_05d98d9d;
        goto label_05d98d84;
      }
    }
  }
  if (__this != (UI_MapEditorMenu_o *)0x0) {
label_05d98d84:
    (__this->fields).IsInputFocused = bVar2;
    return;
  }
label_05d98d9d:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$ToggleAddObjectPopup
// il2cpp: void UI_MapEditorMenu__ToggleAddObjectPopup (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98f10

void UI_MapEditorMenu__ToggleAddObjectPopup(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPopup_o *pUVar1;
  UI_MapEditorAddVariantPopup_o *pUVar2;
  bool bVar3;
  
  pUVar1 = (__this->fields).AddObjectPopup;
  if (pUVar1 == (UI_MapEditorAddObjectPopup_o *)0x0) goto label_05d98f9c;
  if ((pUVar1->fields).IsActive == false) {
    pUVar2 = (__this->fields).AddVariantPopup;
    if (pUVar2 == (UI_MapEditorAddVariantPopup_o *)0x0) goto label_05d98f9c;
    if ((pUVar2->fields).IsActive == false) {
      bVar3 = UI_MapEditorMenu__IsPopupActive(__this,method);
      if (bVar3) {
        return;
      }
      pUVar1 = (__this->fields).AddObjectPopup;
      if (pUVar1 != (UI_MapEditorAddObjectPopup_o *)0x0) {
        (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
        return;
      }
      goto label_05d98f9c;
    }
  }
  (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
  pUVar2 = (__this->fields).AddVariantPopup;
  if (pUVar2 != (UI_MapEditorAddVariantPopup_o *)0x0) {
    (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
    return;
  }
label_05d98f9c:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$IsPopupActive
// il2cpp: bool UI_MapEditorMenu__IsPopupActive (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98fb0
// eh: try 0x5d99053..0x5d990a2 -> pad 0x5d990a9 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d990c1..0x5d990c6 -> pad 0x5d990e5 cleanup
// eh: try 0x5d990e8..0x5d990f2 -> pad 0x5d990fa catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9904c: nop dword ptr [rax]
// asm:   0x5d99078: jmp 0x5d99050
// asm:   0x5d990a7: jmp 0x5d990a9
// asm:   0x5d990a9: mov rbx, rax
// asm:   0x5d990ac: cmp edx, 1
// asm:   0x5d990af: jne 0x5d990e8
// asm:   0x5d990b1: mov rdi, rbx
// asm:   0x5d990b4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d990b9: mov rbx, qword ptr [rax]
// asm:   0x5d990bc: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d990c1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d990c6: lea rax, [rip + 0x14f4693]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5d990cd: mov rsi, qword ptr [rax]
// asm:   0x5d990d0: mov rdi, rsp
// asm:   0x5d990d3: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d990d8: test rbx, rbx
// asm:   0x5d990db: je 0x5d9908c
// asm:   0x5d990dd: mov rdi, rbx
// asm:   0x5d990e0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d990e5: mov rbx, rax
// asm:   0x5d990e8: lea rdi, [rsp + 0x18]
// asm:   0x5d990ed: call 0x2fdd910  ; il2cpp_runtime_helper_02fdd910()
// asm:   0x5d990f2: mov rdi, rbx
// asm:   0x5d990f5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d990fa: mov rdi, rax
// asm:   0x5d990fd: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_MapEditorMenu__IsPopupActive(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07548072 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_07548072 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  bVar1 = false;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
                );
      return bVar1;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) break;
    if (*(char *)&local_48.fields._current[9].klass != '\0') {
      bVar1 = true;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$UpdateMouseUI
// il2cpp: void UI_MapEditorMenu__UpdateMouseUI (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d98db0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d98e23: mov rdi, qword ptr [rbx + 0xb8]
// asm:   0x5d98e2a: test rdi, rdi
// asm:   0x5d98e2d: je 0x5d98f00
// asm:   0x5d98ecc: mov r13, r12
// asm:   0x5d98ecf: jmp 0x5d98e04

void UI_MapEditorMenu__UpdateMouseUI(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *pUVar1;
  UI_MapEditorHierarchyPanel_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  bool bVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  float local_48;
  float fStack_44;
  
  UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  bVar3 = UI_MapEditorMenu__IsPopupActive(__this,method);
  bVar4 = true;
  if (!bVar3) {
    pUVar1 = (__this->fields)._topPanel;
    if (pUVar1 == (UI_MapEditorTopPanel_o *)0x0) goto label_05d98f00;
    bVar3 = UI_MapEditorTopPanel__IsDropdownOpen(pUVar1,method);
    if (!bVar3) {
      pUVar1 = (__this->fields)._topPanel;
      if (pUVar1 == (UI_MapEditorTopPanel_o *)0x0) goto label_05d98f00;
      bVar3 = UI_MapEditorTopPanel__IsPointerOverSideToolbar
                        (pUVar1,(UnityEngine_Vector2_o)UVar6.fields._0_8_,method);
      if (!bVar3) {
        if (Il2CppMethodInitialized_0754806e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_0754806e = '\x01';
        }
        pUVar2 = (__this->fields).HierarchyPanel;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method_00 = (MethodInfo *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar5 = 0.0;
        if (bVar3) {
          pUVar2 = (__this->fields).HierarchyPanel;
          if (pUVar2 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_05d98f00;
          method_00 = (MethodInfo *)0x0;
          fVar5 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar2,(MethodInfo *)0x0);
          fVar5 = fVar5 + 10.0;
        }
        local_48 = UVar6.fields.x;
        if (fVar5 <= local_48) {
          fVar5 = UI_MapEditorMenu__GetMaxMouseX(__this,method_00);
          fStack_44 = UVar6.fields.y;
          if ((local_48 <= fVar5) && (0.0 <= fStack_44)) {
            fVar5 = UI_MapEditorMenu__GetMaxMouseY(__this,method_00);
            bVar4 = fVar5 < fStack_44;
          }
        }
      }
    }
  }
  if (__this != (UI_MapEditorMenu_o *)0x0) {
    (__this->fields).IsMouseUI = bVar4;
    return;
  }
label_05d98f00:
  ThrowNullReferenceException();
}


// UI.MapEditorMenu$$IsTouchUI
// il2cpp: bool UI_MapEditorMenu__IsTouchUI (UI_MapEditorMenu_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5d99410

bool UI_MapEditorMenu__IsTouchUI(UI_MapEditorMenu_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  UI_MapEditorTopPanel_o *__this_00;
  UI_MapEditorHierarchyPanel_o *pUVar1;
  bool bVar2;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  float local_28;
  float fStack_24;
  
  bVar2 = UI_MapEditorMenu__IsPopupActive(__this,method);
  bVar3 = true;
  if (!bVar2) {
    __this_00 = (__this->fields)._topPanel;
    if (__this_00 == (UI_MapEditorTopPanel_o *)0x0) {
label_05d994fa:
      ThrowNullReferenceException();
    }
    bVar2 = UI_MapEditorTopPanel__IsDropdownOpen(__this_00,method);
    if (!bVar2) {
      if (Il2CppMethodInitialized_0754806e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754806e = '\x01';
      }
      pUVar1 = (__this->fields).HierarchyPanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar4 = 0.0;
      if (bVar2) {
        pUVar1 = (__this->fields).HierarchyPanel;
        if (pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_05d994fa;
        method_00 = (MethodInfo *)0x0;
        fVar4 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)pUVar1,(MethodInfo *)0x0);
        fVar4 = fVar4 + 10.0;
      }
      local_28 = position.fields.x;
      if (fVar4 <= local_28) {
        fVar4 = UI_MapEditorMenu__GetMaxMouseX(__this,method_00);
        fStack_24 = position.fields.y;
        if ((local_28 <= fVar4) && (0.0 <= fStack_24)) {
          fVar4 = UI_MapEditorMenu__GetMaxMouseY(__this,method_00);
          bVar3 = fVar4 < fStack_24;
        }
      }
    }
  }
  return bVar3;
}


// UI.MapEditorMenu$$.ctor
// il2cpp: void UI_MapEditorMenu___ctor (UI_MapEditorMenu_o* __this, const MethodInfo* method);
// 0x5d99500

void UI_MapEditorMenu___ctor(UI_MapEditorMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


