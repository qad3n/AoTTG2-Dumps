// Type: UI.MapPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MapPopup.cs
// --------------------------------

// UI.MapPopup$$get_Title
// il2cpp: System_String_o* UI_MapPopup__get_Title (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d35210

System_String_o * UI_MapPopup__get_Title(UI_MapPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547e45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    Il2CppMethodInitialized_07547e45 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Map",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_MapPopup__get_PopupAnimationType (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d35270

int32_t UI_MapPopup__get_PopupAnimationType(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.MapPopup$$get_MinFadeAlpha
// il2cpp: float UI_MapPopup__get_MinFadeAlpha (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d35280

float UI_MapPopup__get_MinFadeAlpha(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.MapPopup$$get_Width
// il2cpp: float UI_MapPopup__get_Width (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d35290

float UI_MapPopup__get_Width(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 900.0;
}


// UI.MapPopup$$get_Height
// il2cpp: float UI_MapPopup__get_Height (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d352a0

float UI_MapPopup__get_Height(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 1028.0;
}


// UI.MapPopup$$Setup
// il2cpp: void UI_MapPopup__Setup (UI_MapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d352b0

void UI_MapPopup__Setup(UI_MapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o **footer;
  TMPro_TMP_Text_o **targetAddress;
  UnityEngine_UI_RawImage_o **targetAddress_00;
  UnityEngine_Transform_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_o *pSVar2;
  TMPro_TMP_Text_o *pTVar3;
  UnityEngine_UI_RawImage_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_01;
  UI_MapDragArea_o *pUVar6;
  System_Action_Vector2__o *__this_02;
  System_Action_o *__this_03;
  float width;
  float height;
  UnityEngine_Transform_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07547e46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MapDragArea);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapPopup_OnDrag);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapPopup_OnEndDrag);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameHeaderTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameMapCoordinates");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"ZoomOut");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.map.back");
    il2cpp_codegen_initialize_runtime_metadata(&"out");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"ZoomIn");
    il2cpp_codegen_initialize_runtime_metadata(&"in");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.General");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.map.zoom");
    Il2CppMethodInitialized_07547e46 = '\x01';
  }
  pUStack_38 = (UnityEngine_Transform_o *)0x0;
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  width = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  height = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                     (__this,(__this->klass->vtable)._6_get_Height.method);
  footer = &(__this->fields).BottomBar;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
                        (pUVar1,width,height,64.0,64.0,&pUStack_38,footer,"inGameHeader",
                         (MethodInfo *)0x0);
  pUVar1 = pUStack_38;
  pSVar2 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                     (__this,(__this->klass->vtable)._35_get_Title.method);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameView__Text
              (__this_00,pUVar1,pSVar2,360.0,54.0,"inGameHeaderTitle",(MethodInfo *)0x0);
    pTVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (__this_00,pUStack_38,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),428.0,
                        36.0,"inGameMapCoordinates",(MethodInfo *)0x0);
    targetAddress = &(__this->fields)._label;
    (__this->fields)._label = pTVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__RawImage(__this_00,pUVar1,900.0,900.0,(MethodInfo *)0x0);
    targetAddress_00 = &(__this->fields)._background;
    (__this->fields)._background = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pUVar4 = (__this->fields)._background;
    if (pUVar4 != (UnityEngine_UI_RawImage_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_
                  (pUVar5,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
        if (*targetAddress_00 != (UnityEngine_UI_RawImage_o *)0x0) {
          pUVar1 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          Gisketch_Aottg2UI_Game_AottgInGameView__Position
                    (pUVar1,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          pUVar4 = *targetAddress_00;
          if (pUVar4 != (UnityEngine_UI_RawImage_o *)0x0) {
            (*(pUVar4->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar4,true,(pUVar4->klass->vtable)._25_set_raycastTarget.method);
            if (*targetAddress != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_alignment(*targetAddress,0x1004,(MethodInfo *)0x0);
              if (*targetAddress != (TMPro_TMP_Text_o *)0x0) {
                __this_01 = TMPro_TMP_Text__get_transform(*targetAddress,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar5 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar6 = UnityEngine_GameObject__AddComponent_object_
                                         (pUVar5,(MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_MapDragArea);
                      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Vector2);
                      System_Action_Vector2____ctor
                                (__this_02,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapPopup_OnDrag,
                                 (MethodInfo_4A84290 *)0x0);
                      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                      System_Action___ctor
                                (__this_03,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapPopup_OnEndDrag,
                                 (MethodInfo *)0x0);
                      if (pUVar6 != (UI_MapDragArea_o *)0x0) {
                        (pUVar6->fields)._onDrag = __this_02;
                        Il2CppCodeGenWriteBarrier(&(pUVar6->fields)._onDrag);
                        (pUVar6->fields)._onEndDrag = __this_03;
                        Il2CppCodeGenWriteBarrier(&(pUVar6->fields)._onEndDrag);
                        pUVar1 = *footer;
                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                        }
                        pSVar2 = UI_UIManager__GetLocale
                                           ("SettingsPopup","Keybinds.General","ZoomIn",
                                            "","",(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                  (__this_00,pUVar1,pSVar2,"ingame.map.zoom","in",200.0,
                                   44.0,3,(MethodInfo *)0x0);
                        pUVar1 = *footer;
                        pSVar2 = UI_UIManager__GetLocale
                                           ("SettingsPopup","Keybinds.General","ZoomOut",
                                            "","",(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                  (__this_00,pUVar1,pSVar2,"ingame.map.zoom","out",200.0,
                                   44.0,3,(MethodInfo *)0x0);
                        pUVar1 = *footer;
                        pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                  (__this_00,pUVar1,pSVar2,"ingame.map.back",(System_String_o *)0x0,200.0,
                                   44.0,3,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.MapPopup$$Show
// il2cpp: void UI_MapPopup__Show (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d358b0

void UI_MapPopup__Show(UI_MapPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar4;
  
  if (Il2CppMethodInitialized_07547e47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547e47 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      (__this->fields)._center.fields = UVar4;
      (__this->fields)._needSync = true;
      (__this->fields)._syncCooldownLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapPopup$$Update
// il2cpp: void UI_MapPopup__Update (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d35970

void UI_MapPopup__Update(UI_MapPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  Cameras_BaseCamera_c *x;
  void *pvVar5;
  TMPro_TMP_Text_o *pTVar6;
  Cameras_MinimapCamera_o *__this_00;
  bool bVar7;
  System_String_array *values;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  float fVar9;
  UnityEngine_Vector3_o UStack_40;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547e48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"F0");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    Il2CppMethodInitialized_07547e48 = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UStack_40 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      x = (*(uint64_t *)((char *)pCVar2 + 0x38));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        if ((((*(uint64_t *)((char *)pCVar2 + 0x38)) == (Cameras_BaseCamera_c *)0x0) ||
            (pvVar5 = (((*(Il2CppClass **)((char *)pCVar2 + 0x38)))->_1).fields, pvVar5 == (void *)0x0)) ||
           (pUVar4 = *(UnityEngine_Transform_o **)((long)pvVar5 + 0x10),
           pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05d35c8b;
        UStack_40 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      }
      pTVar6 = (__this->fields)._label;
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
      pSVar8 = System_Single__ToString_54d0a60((float *)&UStack_40,"F0",(MethodInfo *)0x0);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = pSVar8;
          Il2CppCodeGenWriteBarrier(values->m_Items);
          if ((values->max_length & 0xfffffffe) != 0) {
            values->m_Items[1] = ", ";
            Il2CppCodeGenWriteBarrier(values->m_Items + 1);
            pSVar8 = System_Single__ToString_54d0a60
                               (&UStack_40.fields.y,"F0",(MethodInfo *)0x0);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = pSVar8;
              Il2CppCodeGenWriteBarrier(values->m_Items + 2);
              if ((values->max_length & 0xfffffffc) != 0) {
                values->m_Items[3] = ", ";
                Il2CppCodeGenWriteBarrier(values->m_Items + 3);
                pSVar8 = System_Single__ToString_54d0a60
                                   (&UStack_40.fields.z,"F0",(MethodInfo *)0x0);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = pSVar8;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                  method_00 = (MethodInfo *)System_String__Concat_5302910(values,(MethodInfo *)0x0);
                  if (pTVar6 != (TMPro_TMP_Text_o *)0x0) {
                    (*(pTVar6->klass->vtable)._66_set_text.methodPtr)
                              (pTVar6,(System_String_o *)method_00,(pTVar6->klass->vtable)._66_set_text.method
                              );
                    UI_MapPopup__UpdateZoomInput(__this,method_00);
                    fStack_34 = (__this->fields)._syncCooldownLeft;
                    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                    (__this->fields)._syncCooldownLeft = fStack_34 - fVar9;
                    if (Il2CppMethodInitialized_07547e4a == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
                      Il2CppMethodInitialized_07547e4a = '\x01';
                    }
                    if (((__this->fields)._needSync != false) && ((__this->fields)._syncCooldownLeft <= 0.0))
                    {
                      __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
                      if (__this_00 == (Cameras_MinimapCamera_o *)0x0) goto label_05d35c8b;
                      method_00 = (MethodInfo *)0x0;
                      bVar7 = Cameras_MinimapCamera__Ready(__this_00,(MethodInfo *)0x0);
                      if (bVar7) {
                        UI_MapPopup__Sync(__this,method_00);
                      }
                    }
                    UI_MapPopup__SyncIcons(__this,method_00);
                    UI_MapPopup__UpdateIcons(__this,method_00);
                    return;
                  }
                  goto label_05d35c8b;
                }
              }
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05d35c8b:
  ThrowNullReferenceException();
}


// UI.MapPopup$$UpdateZoomInput
// il2cpp: void UI_MapPopup__UpdateZoomInput (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d35ca0

void UI_MapPopup__UpdateZoomInput(UI_MapPopup_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547e49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547e49 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_GeneralInputSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).ZoomIn, pSVar3 == (Settings_KeybindSetting_o *)0x0)) {
label_05d35d54:
    ThrowNullReferenceException();
  }
  bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
  if (bVar4) {
    fVar5 = -500.0;
  }
  else {
    pSVar3 = (pSVar2->fields).ZoomOut;
    if (pSVar3 == (Settings_KeybindSetting_o *)0x0) goto label_05d35d54;
    bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    fVar5 = 500.0;
  }
  fVar5 = fVar5 + (__this->fields)._height;
  if (fVar5 <= 100.0) {
    fVar5 = 100.0;
  }
  (__this->fields)._height = fVar5;
  (__this->fields)._needSync = true;
  return;
}


// UI.MapPopup$$SetHeight
// il2cpp: void UI_MapPopup__SetHeight (UI_MapPopup_o* __this, float height, const MethodInfo* method);
// 0x5d369b0

void UI_MapPopup__SetHeight(UI_MapPopup_o *__this,float height,MethodInfo *method)

{
  if (height <= 100.0) {
    height = 100.0;
  }
  (__this->fields)._height = height;
  (__this->fields)._needSync = true;
  return;
}


// UI.MapPopup$$OnDrag
// il2cpp: void UI_MapPopup__OnDrag (UI_MapPopup_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method);
// 0x5d369d0

void UI_MapPopup__OnDrag(UI_MapPopup_o *__this,UnityEngine_Vector2_o delta,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar2 = (__this->fields)._center.fields.x;
  uVar3 = (__this->fields)._center.fields.y;
  fVar1 = (__this->fields)._center.fields.z;
  fVar4 = (__this->fields)._height / 900.0;
  (__this->fields)._center.fields.x = (float)uVar2 - fVar4 * delta.fields.x;
  (__this->fields)._center.fields.y = (float)uVar3 - fVar4 * 0.0;
  (__this->fields)._center.fields.z = fVar1 - delta.fields.y * fVar4;
  (__this->fields)._needSync = true;
  return;
}


// UI.MapPopup$$OnEndDrag
// il2cpp: void UI_MapPopup__OnEndDrag (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d36a30

void UI_MapPopup__OnEndDrag(UI_MapPopup_o *__this,MethodInfo *method)

{
  Cameras_MinimapCamera_o *__this_00;
  bool bVar1;
  
  (__this->fields)._syncCooldownLeft = 0.0;
  if (Il2CppMethodInitialized_07547e4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547e4a = '\x01';
  }
  if (((__this->fields)._needSync != false) && ((__this->fields)._syncCooldownLeft <= 0.0)) {
    __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
    if (__this_00 == (Cameras_MinimapCamera_o *)0x0) {
      ThrowNullReferenceException();
    }
    method = (MethodInfo *)0x0;
    bVar1 = Cameras_MinimapCamera__Ready(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      UI_MapPopup__Sync(__this,method);
    }
  }
  UI_MapPopup__UpdateIcons(__this,method);
  return;
}


// UI.MapPopup$$SyncIfNeeded
// il2cpp: void UI_MapPopup__SyncIfNeeded (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d35d60

void UI_MapPopup__SyncIfNeeded(UI_MapPopup_o *__this,MethodInfo *method)

{
  Cameras_MinimapCamera_o *__this_00;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547e4a = '\x01';
  }
  if (((__this->fields)._needSync != false) && ((__this->fields)._syncCooldownLeft <= 0.0)) {
    __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
    if (__this_00 == (Cameras_MinimapCamera_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = Cameras_MinimapCamera__Ready(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      UI_MapPopup__Sync(__this,method_00);
      return;
    }
  }
  return;
}


// UI.MapPopup$$UpdateIcons
// il2cpp: void UI_MapPopup__UpdateIcons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d362c0
// eh: try 0x5d36460..0x5d368a5 -> pad 0x5d3694e (+38 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d3691b..0x5d36920 -> pad 0x5d3693f cleanup
// eh: try 0x5d36942..0x5d3694c -> pad 0x5d369a5 catch (...) [compiler noexcept guard]
// eh: try 0x5d36966..0x5d3696b -> pad 0x5d36990 cleanup
// eh: try 0x5d36993..0x5d3699d -> pad 0x5d369a5 catch (...) [compiler noexcept guard]
// asm: 79 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d36530: jmp 0x5d3654e
// asm:   0x5d36809: nop dword ptr [rax]
// asm:   0x5d368a5: jmp 0x5d3694e
// asm:   0x5d368aa: jmp 0x5d3694e
// asm:   0x5d368af: jmp 0x5d3694e
// asm:   0x5d368b4: jmp 0x5d3694e
// asm:   0x5d368b9: jmp 0x5d3694e
// asm:   0x5d368be: jmp 0x5d3694e
// asm:   0x5d368c3: jmp 0x5d3694e
// asm:   0x5d368c8: jmp 0x5d3694e
// asm:   0x5d368cd: jmp 0x5d3694e
// asm:   0x5d368cf: jmp 0x5d3694e
// asm:   0x5d368d1: jmp 0x5d3694e
// asm:   0x5d368d3: jmp 0x5d3694e
// asm:   0x5d368d5: jmp 0x5d3694e
// asm:   0x5d368d7: jmp 0x5d3694e
// asm:   0x5d368d9: jmp 0x5d3694e
// asm:   0x5d368db: jmp 0x5d3694e
// asm:   0x5d368dd: jmp 0x5d3694e
// asm:   0x5d368df: jmp 0x5d3694e
// asm:   0x5d368e1: jmp 0x5d3694e
// asm:   0x5d368e3: jmp 0x5d3694e
// asm:   0x5d368e5: jmp 0x5d3694e
// asm:   0x5d368e7: jmp 0x5d3694e
// asm:   0x5d368e9: jmp 0x5d3694e
// asm:   0x5d368eb: jmp 0x5d3694e
// asm:   0x5d368ed: jmp 0x5d3694e
// asm:   0x5d368ef: jmp 0x5d3694e
// asm:   0x5d368f1: jmp 0x5d3694e
// asm:   0x5d368f3: jmp 0x5d3694e
// asm:   0x5d368f5: jmp 0x5d3694e
// asm:   0x5d368f7: jmp 0x5d3694e
// asm:   0x5d368f9: jmp 0x5d3694e
// asm:   0x5d368fb: jmp 0x5d3694e
// asm:   0x5d368fd: jmp 0x5d36903
// asm:   0x5d368ff: jmp 0x5d36903
// asm:   0x5d36901: jmp 0x5d3694e
// asm:   0x5d36903: mov rbx, rax
// asm:   0x5d36906: cmp edx, 1
// asm:   0x5d36909: jne 0x5d36942
// asm:   0x5d3690b: mov rdi, rbx
// asm:   0x5d3690e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d36913: mov rbx, qword ptr [rax]
// asm:   0x5d36916: mov qword ptr [rsp + 8], rbx
// asm:   0x5d3691b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d36920: lea rax, [rip + 0x1558399]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose
// asm:   0x5d36927: mov rsi, qword ptr [rax]
// asm:   0x5d3692a: lea rdi, [rsp + 0x60]
// asm:   0x5d3692f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d36934: test rbx, rbx
// asm:   0x5d36937: je 0x5d36850
// asm:   0x5d3693d: jmp 0x5d36988
// asm:   0x5d3693f: mov rbx, rax
// asm:   0x5d36942: lea rdi, [rsp + 8]
// asm:   0x5d36947: call 0x2fdc5b0  ; il2cpp_runtime_helper_02fdc5b0()
// asm:   0x5d3694c: jmp 0x5d3699d
// asm:   0x5d3694e: mov rbx, rax
// asm:   0x5d36951: cmp edx, 1
// asm:   0x5d36954: jne 0x5d36993
// asm:   0x5d36956: mov rdi, rbx
// asm:   0x5d36959: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d3695e: mov rbx, qword ptr [rax]
// asm:   0x5d36961: mov qword ptr [rsp + 8], rbx
// asm:   0x5d36966: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d3696b: lea rax, [rip + 0x15599fe]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
// asm:   0x5d36972: mov rsi, qword ptr [rax]
// asm:   0x5d36975: lea rdi, [rsp + 0x20]
// asm:   0x5d3697a: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d3697f: test rbx, rbx
// asm:   0x5d36982: je 0x5d367c5
// asm:   0x5d36988: mov rdi, rbx
// asm:   0x5d3698b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d36990: mov rbx, rax
// asm:   0x5d36993: lea rdi, [rsp + 8]
// asm:   0x5d36998: call 0x2fdc580  ; il2cpp_runtime_helper_02fdc580()
// asm:   0x5d3699d: mov rdi, rbx
// asm:   0x5d369a0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d369a5: mov rdi, rax
// asm:   0x5d369a8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapPopup__UpdateIcons(UI_MapPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  int32_t length;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_List_Transform__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UnityEngine_Transform_array *pUVar7;
  undefined1 auVar8 [16];
  MethodInfo *pMVar9;
  UnityEngine_Transform_o *__this_00;
  bool bVar10;
  bool bVar11;
  undefined4 extraout_EAX;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  UnityEngine_Transform_o *__this_02;
  Characters_BaseCharacter_o *x;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Object_o *obj;
  char cVar13;
  int iVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Db;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  undefined1 local_a0 [16];
  UnityEngine_Transform_o *local_90;
  undefined1 local_88 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_80;
  UnityEngine_Transform_o *local_78;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  fVar2 = in_XMM1_Db;
  if (Il2CppMethodInitialized_07547e4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Transform_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Transform_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e4b = '\x01';
    fVar2 = in_XMM1_Db;
  }
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_78 = (UnityEngine_Transform_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields)._iconsToRemove;
  if (pSVar5 != (System_Collections_Generic_List_Transform__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
    if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (pSVar6,(MethodInfo_4AAD0F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys
                              ),
       __this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_a0,
                 __this_01,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
                );
      local_78 = local_90;
      local_88 = (undefined1  [8])local_a0._0_8_;
      pSStack_80 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   local_a0._8_8_;
      local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_a0._8_8_ =
           (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_88;
      while (bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                  *)local_88,
                                 (MethodInfo_4CE7080 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
                                ), __this_00 = local_78, bVar10) {
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar6,(Il2CppObject *)local_78,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar10) {
          if (__this_00 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          x = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this_00,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          cVar13 = '\0';
          if (bVar10) {
            if (x == (Characters_BaseCharacter_o *)0x0) {
              ThrowNullReferenceException();
            }
            cVar13 = (x->fields).Dead;
          }
          bVar10 = cVar13 != '\0';
          uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
        }
        else {
          bVar10 = false;
          uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pMVar9 = MethodInfo_System_Collections_Generic_List_Transform_Add;
        if (bVar10 || bVar11) {
          pSVar5 = (__this->fields)._iconsToRemove;
          if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) {
label_05d36864:
            ThrowNullReferenceException();
          }
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar5->fields)._items;
          if (pUVar7 == (UnityEngine_Transform_array *)0x0) goto label_05d36864;
          uVar4 = (pSVar5->fields)._size;
          if (uVar4 < (uint)pUVar7->max_length) {
            (pSVar5->fields)._size = uVar4 + 1;
            pUVar7->m_Items[(int)uVar4] = __this_00;
            Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                       (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
          }
          if (__this_02 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
        }
        else {
          if (__this_00 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar18 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          local_58._8_4_ = extraout_XMM0_Dc;
          local_58._0_8_ = UVar18.fields._0_8_;
          local_58._12_4_ = extraout_XMM0_Dd;
          _local_68 = ZEXT416((uint)(__this->fields)._renderedCenter.fields.x);
          UVar18 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          fVar17 = 900.0 / (__this->fields)._renderedHeight;
          fVar15 = (float)local_58._0_4_ - (float)local_68._0_4_;
          fVar16 = (float)local_58._4_4_ - (float)local_68._4_4_;
          local_58 = ZEXT416((uint)fVar17);
          local_68._0_4_ = fVar17 * (UVar18.fields.z - (__this->fields)._renderedCenter.fields.z);
          local_68._4_4_ = fVar17 * fVar15;
          fStack_60 = fVar17 * (fVar2 - 0.0);
          fStack_5c = fVar17 * fVar16;
          fVar2 = (float)-(uint)(450.0 < ABS((float)local_68._0_4_));
          iVar14 = -(uint)(450.0 < ABS((float)local_68._4_4_));
          auVar8._4_4_ = fVar2;
          auVar8._0_4_ = fVar2;
          auVar8._8_4_ = iVar14;
          auVar8._12_4_ = iVar14;
          iVar14 = movmskpd(extraout_EAX,auVar8);
          if (iVar14 == 0) {
            if (__this_02 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
            if (!bVar10) {
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
              if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
            }
            UVar18.fields.z = (float)local_58._0_4_ * 0.0;
            UVar18.fields.y = (float)local_68._0_4_;
            UVar18.fields.x = (float)local_68._4_4_;
            UnityEngine_Transform__set_localPosition(__this_02,UVar18,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e72b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_0753e72b = '\x01';
            }
            fVar2 = ((UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields)->w;
            UnityEngine_Transform__set_rotation
                      (__this_02,
                       (UnityEngine_Quaternion_o)
                       *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                       (MethodInfo *)0x0);
          }
          else {
            if (__this_02 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
            if (bVar10) {
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
              if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
            }
          }
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_88,
                 (MethodInfo_4CE7070 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
                );
      pSVar5 = (__this->fields)._iconsToRemove;
      if (pSVar5 != (System_Collections_Generic_List_Transform__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)pSVar5,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Transform_GetEnumerator);
        local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_a0._8_8_ = &local_48;
        while( true ) {
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Transform_MoveNext);
          if (!bVar10) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose);
            return;
          }
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar6,local_48.fields._current,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Remove);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapPopup$$Sync
// il2cpp: void UI_MapPopup__Sync (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d36ab0

void UI_MapPopup__Sync(UI_MapPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  Cameras_MinimapCamera_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  bool bVar2;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_07547e4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547e4c = '\x01';
  }
  (__this->fields)._syncCooldownLeft = 0.1;
  __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
  if (__this_00 == (Cameras_MinimapCamera_o *)0x0) {
label_05d36ba3:
    ThrowNullReferenceException();
  }
  fVar1 = (__this->fields)._height;
  position.fields.y = fVar1;
  position.fields.x = (__this->fields)._center.fields.x;
  position.fields.z = (__this->fields)._center.fields.z;
  value = (UnityEngine_Texture_o *)
          Cameras_MinimapCamera__RenderMap(__this_00,position,fVar1,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_01 = (__this->fields)._background;
    if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d36ba3;
    UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
    (__this->fields)._renderedCenter.fields.z = (__this->fields)._center.fields.z;
    fVar1 = (__this->fields)._center.fields.y;
    (__this->fields)._renderedCenter.fields.x = (__this->fields)._center.fields.x;
    (__this->fields)._renderedCenter.fields.y = fVar1;
    (__this->fields)._renderedHeight = (__this->fields)._height;
    (__this->fields)._needSync = false;
  }
  return;
}


// UI.MapPopup$$SyncIcons
// il2cpp: void UI_MapPopup__SyncIcons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d35dd0
// eh: try 0x5d35f3a..0x5d36219 -> pad 0x5d36260 (+33 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d36278..0x5d3627d -> pad 0x5d362a0 cleanup
// eh: try 0x5d362a3..0x5d362ad -> pad 0x5d362b5 catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d35eb2: jmp 0x5d361d3
// asm:   0x5d3621e: jmp 0x5d36260
// asm:   0x5d36220: jmp 0x5d36260
// asm:   0x5d36222: jmp 0x5d36260
// asm:   0x5d36224: jmp 0x5d36260
// asm:   0x5d36226: jmp 0x5d36260
// asm:   0x5d36228: jmp 0x5d36260
// asm:   0x5d3622a: jmp 0x5d36260
// asm:   0x5d3622c: jmp 0x5d36260
// asm:   0x5d3622e: jmp 0x5d36260
// asm:   0x5d36230: jmp 0x5d36260
// asm:   0x5d36232: jmp 0x5d36260
// asm:   0x5d36234: jmp 0x5d36260
// asm:   0x5d36236: jmp 0x5d36260
// asm:   0x5d36238: jmp 0x5d36260
// asm:   0x5d3623a: jmp 0x5d36260
// asm:   0x5d3623c: jmp 0x5d36260
// asm:   0x5d3623e: jmp 0x5d36260
// asm:   0x5d36240: jmp 0x5d36260
// asm:   0x5d36242: jmp 0x5d36260
// asm:   0x5d36244: jmp 0x5d36260
// asm:   0x5d36246: jmp 0x5d36260
// asm:   0x5d36248: jmp 0x5d36260
// asm:   0x5d3624a: jmp 0x5d36260
// asm:   0x5d3624c: jmp 0x5d36260
// asm:   0x5d3624e: jmp 0x5d36260
// asm:   0x5d36250: jmp 0x5d36260
// asm:   0x5d36252: jmp 0x5d36260
// asm:   0x5d36254: jmp 0x5d36260
// asm:   0x5d36256: jmp 0x5d36260
// asm:   0x5d36258: jmp 0x5d36260
// asm:   0x5d3625a: jmp 0x5d36260
// asm:   0x5d3625c: jmp 0x5d36260
// asm:   0x5d3625e: jmp 0x5d36260
// asm:   0x5d36260: mov rbx, rax
// asm:   0x5d36263: cmp edx, 1
// asm:   0x5d36266: jne 0x5d362a3
// asm:   0x5d36268: mov rdi, rbx
// asm:   0x5d3626b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d36270: mov rbx, qword ptr [rax]
// asm:   0x5d36273: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d36278: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d3627d: lea rax, [rip + 0x155a0ec]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
// asm:   0x5d36284: mov rsi, qword ptr [rax]
// asm:   0x5d36287: mov rdi, rsp
// asm:   0x5d3628a: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d3628f: test rbx, rbx
// asm:   0x5d36292: je 0x5d361d3
// asm:   0x5d36298: mov rdi, rbx
// asm:   0x5d3629b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d362a0: mov rbx, rax
// asm:   0x5d362a3: lea rdi, [rsp + 0x20]
// asm:   0x5d362a8: call 0x2fdc5e0  ; il2cpp_runtime_helper_02fdc5e0()
// asm:   0x5d362ad: mov rdi, rbx
// asm:   0x5d362b0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d362b5: mov rdi, rax
// asm:   0x5d362b8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapPopup__SyncIcons(UI_MapPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_UI_RawImage_o *__this_00;
  Il2CppObject *x;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  Characters_BaseCharacter_o *x_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *p;
  UI_MinimapHandler_c *method_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07547e4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e4d = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_UI_MinimapHandler;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                UI_MinimapHandler__GetIcons((MethodInfo *)method_00);
  }
  else {
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                UI_MinimapHandler__GetIcons((MethodInfo *)TypeInfo_UI_MinimapHandler);
  }
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02 = System_Collections_Generic_Dictionary_object__object___get_Keys
                          (__this_01,
                           (MethodInfo_4AAD0F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
    if (__this_02 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
               __this_02,
               (MethodInfo_511A520 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
              );
    local_68.fields._currentKey = (Il2CppObject *)local_38;
    local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
    local_68.fields._index = local_48._8_4_;
    local_68.fields._version = local_48._12_4_;
    local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_48._8_8_ = &local_68;
label_05d35f30:
    bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (&local_68,
                       (MethodInfo_4CE7080 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
                      );
    x = local_68.fields._currentKey;
    if (bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar1,x,(MethodInfo_4AAD6F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ContainsKey
                          );
        if (!bVar2) {
          if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
            ThrowNullReferenceException();
          }
          x_00 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)x,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
          ;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (x_00 == (Characters_BaseCharacter_o *)0x0) {
              ThrowNullReferenceException();
            }
            if ((x_00->fields).Dead != false) goto label_05d35f30;
          }
          pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_01,x,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item);
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          pUVar4 = UnityEngine_Object__Instantiate_object__35a4190
                             ((Il2CppObject *)pUVar4,
                              (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          __this_00 = (__this->fields)._background;
          if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
            ThrowNullReferenceException();
          }
          p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Transform__SetParent(pUVar3,p,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b6 = '\x01';
          }
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o)
                            (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Transform__set_localScale
                    (pUVar3,(UnityEngine_Vector3_o)
                            (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,(MethodInfo *)0x0)
          ;
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e72b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
            Il2CppMethodInitialized_0753e72b = '\x01';
          }
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Transform__set_rotation
                    (pUVar3,(UnityEngine_Quaternion_o)
                            *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                     (MethodInfo *)0x0);
          UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,x,(Il2CppObject *)pUVar3,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Add);
        }
      }
      goto label_05d35f30;
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (&local_68,
               (MethodInfo_4CE7070 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
              );
  }
  return;
}


// UI.MapPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapPopup__OnBottomBarButtonClick (UI_MapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d36c70

void UI_MapPopup__OnBottomBarButtonClick(UI_MapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547e4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Plus");
    il2cpp_codegen_initialize_runtime_metadata(&"Minus");
    Il2CppMethodInitialized_07547e4e = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = System_String__op_Equality(name,"Plus",(MethodInfo *)0x0);
    if (bVar2) {
      fVar3 = (__this->fields)._height + -500.0;
    }
    else {
      bVar2 = System_String__op_Equality(name,"Minus",(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      fVar3 = (__this->fields)._height + 500.0;
    }
    if (fVar3 <= 100.0) {
      fVar3 = 100.0;
    }
    (__this->fields)._height = fVar3;
    (__this->fields)._needSync = true;
    return;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__SetMapMenu(__this_00,false,true,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$.ctor
// il2cpp: void UI_MapPopup___ctor (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x5d36de0

void UI_MapPopup___ctor(UI_MapPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  System_Collections_Generic_Dictionary_Transform__Transform__o *__this_00;
  System_Collections_Generic_List_Transform__o *__this_01;
  
  if (Il2CppMethodInitialized_07547e4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Transform_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    Il2CppMethodInitialized_07547e4f = '\x01';
  }
  (__this->fields)._height = 2000.0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ctor);
  (__this->fields)._icons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icons);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._center.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._center.fields.y = fVar3;
  (__this->fields)._center.fields.z = fVar1;
  (__this->fields)._renderedHeight = 2000.0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._iconsToRemove = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._iconsToRemove);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


