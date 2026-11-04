// Type: UI.MinimapHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MinimapHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MinimapHandler.cs
// --------------------------------

// UI.MinimapHandler$$Awake
// il2cpp: void UI_MinimapHandler__Awake (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x18225ac10

void UI_MinimapHandler__Awake(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_GeneralSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UI_BaseMenu_o *pUVar4;
  System_Threading_CancellationTokenSource_o *value;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_RawImage_array *pUVar6;
  uint uVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  System_String_o *pSVar10;
  UnityEngine_UI_RawImage_o *obj;
  Il2CppObject *pIVar11;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_1843472d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CompassLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Mask");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Tiles");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_1843472d4 = '\x01';
  }
  local_res8[0] = 0;
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  TypeInfo_UI_MinimapHandler->static_fields->Instance = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MinimapHandler->static_fields->Instance,__this);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar2 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).MinimapCameraHeight, pSVar3 != (Settings_FloatSetting_o *)0x0)) {
    (__this->fields)._height = (pSVar3->fields)._value;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar4 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
      }
      value = (*(uint64_t *)((char *)pUVar4 + 0x1e0));
      (__this->fields)._minimapPanel = (UnityEngine_GameObject_o *)value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._minimapPanel,value);
      pUVar5 = (__this->fields)._minimapPanel;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__Find(pUVar8,"PositionLabel",(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar9 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar8,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            (__this->fields)._positionLabel = pUVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._positionLabel,pUVar9);
            pUVar5 = (__this->fields)._minimapPanel;
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                pUVar8 = UnityEngine_Transform__Find(pUVar8,"CompassLabel",(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  pUVar9 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar8,
                                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text)
                  ;
                  (__this->fields)._compassLabel = pUVar9;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._compassLabel,pUVar9);
                  pUVar5 = (__this->fields)._minimapPanel;
                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar8 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                      pUVar8 = UnityEngine_Transform__Find(pUVar8,"Mask",(MethodInfo *)0x0);
                      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                        pUVar8 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                        (__this->fields)._maskTransform = pUVar8;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._maskTransform,pUVar8);
                        pUVar8 = (__this->fields)._maskTransform;
                        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                          pUVar8 = UnityEngine_Transform__Find(pUVar8,"Tiles",(MethodInfo *)0x0)
                          ;
                          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                            pUVar8 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                            (__this->fields)._tileTransform = pUVar8;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._tileTransform,pUVar8);
                            local_res8[0] = 0;
                            while( true ) {
                              uVar7 = local_res8[0];
                              pUVar6 = (__this->fields)._images;
                              pUVar8 = (__this->fields)._tileTransform;
                              pSVar10 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
                              pSVar10 = System_String__Concat_1969e50
                                                  ("Image",pSVar10,(MethodInfo *)0x0);
                              if (pUVar8 == (UnityEngine_Transform_o *)0x0) break;
                              pUVar8 = UnityEngine_Transform__Find(pUVar8,pSVar10,(MethodInfo *)0x0);
                              if (pUVar8 == (UnityEngine_Transform_o *)0x0) break;
                              obj = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar8,
                                               (MethodInfo_6651A0 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_RawImage);
                              if (pUVar6 == (UnityEngine_UI_RawImage_array *)0x0) break;
                              if (obj != (UnityEngine_UI_RawImage_o *)0x0) {
                                pIVar11 = il2cpp_vm_Object_IsInst
                                                    ((Il2CppObject *)obj,
                                                     (((pUVar6->obj).klass)->_1).element_class);
                                if (pIVar11 == (Il2CppObject *)0x0) {
                                  pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
                                }
                              }
                              if ((uint)pUVar6->max_length <= uVar7) {
                                ThrowIndexOutOfRangeException();
                              }
                              pUVar6->m_Items[(int)uVar7] = obj;
                              Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar7,obj);
                              local_res8[0] = local_res8[0] + 1;
                              if (8 < (int)local_res8[0]) {
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
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$CreateMinimapIcon
// il2cpp: void UI_MinimapHandler__CreateMinimapIcon (UnityEngine_Transform_o* transform, System_String_o* type, const MethodInfo* method);
// 0x18225b4b0

void UI_MinimapHandler__CreateMinimapIcon
               (UnityEngine_Transform_o *transform,System_String_o *type,MethodInfo *method)

{
  UI_MinimapHandler_o *x;
  bool bVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843472d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Textures/MinimapSupplyIcon");
    Il2CppMethodInitialized_1843472d5 = '\x01';
  }
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  x = TypeInfo_UI_MinimapHandler->static_fields->Instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    }
    local_18.r = 1.0;
    local_18.g = 1.0;
    local_18.b = 1.0;
    local_18.a = 1.0;
    UI_MinimapHandler__SetupIcon
              ("Minimap/Textures/MinimapSupplyIcon",(UnityEngine_Color_o *)&local_18,transform,(MethodInfo *)0x0);
  }
  return;
}


// UI.MinimapHandler$$CreateMinimapIcon
// il2cpp: void UI_MinimapHandler__CreateMinimapIcon (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x18225aff0

void UI_MinimapHandler__CreateMinimapIcon_225aff0(Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  UI_MinimapHandler_o *x;
  UI_MinimapHandler_StaticFields *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *transform;
  System_String_o *a;
  System_String_o *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Textures/MinimapHumanIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Mine");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Textures/MinimapTitanIcon");
    Il2CppMethodInitialized_1843472d6 = '\x01';
  }
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  x = TypeInfo_UI_MinimapHandler->static_fields->Instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (character == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = (character->fields).Team;
    fVar5 = 1.0;
    fVar6 = 1.0;
    fVar7 = 1.0;
    fVar8 = 1.0;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar3 = System_String__op_Equality
                      (a,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
    if (bVar3) {
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((character->klass->_2).typeHierarchyDepth < bVar1) ||
         ((character->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_Human)) {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        a = TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
      }
      else {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        a = TypeInfo_GameManagers_TeamInfo->static_fields->Human;
      }
    }
    bVar3 = Characters_BaseCharacter__IsMainCharacter(character,(MethodInfo *)0x0);
    pSVar4 = "Mine";
    if (bVar3) {
      if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
      }
      pUVar2 = TypeInfo_UI_MinimapHandler->static_fields;
      fVar5 = (pUVar2->_mineColor).fields.r;
      fVar6 = (pUVar2->_mineColor).fields.g;
      fVar7 = (pUVar2->_mineColor).fields.b;
      fVar8 = (pUVar2->_mineColor).fields.a;
      a = pSVar4;
    }
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((character->klass->_2).typeHierarchyDepth < bVar1) ||
       (pSVar4 = "Minimap/Textures/MinimapHumanIcon",
       (character->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)
       ) {
      pSVar4 = "Minimap/Textures/MinimapTitanIcon";
    }
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar3 = System_String__op_Equality
                      (a,TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
      }
      pUVar2 = TypeInfo_UI_MinimapHandler->static_fields;
      fVar5 = (pUVar2->_humanColor).fields.r;
      fVar6 = (pUVar2->_humanColor).fields.g;
      fVar7 = (pUVar2->_humanColor).fields.b;
      fVar8 = (pUVar2->_humanColor).fields.a;
    }
    else {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar3 = System_String__op_Equality
                        (a,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
        }
        pUVar2 = TypeInfo_UI_MinimapHandler->static_fields;
        fVar5 = (pUVar2->_titanColor).fields.r;
        fVar6 = (pUVar2->_titanColor).fields.g;
        fVar7 = (pUVar2->_titanColor).fields.b;
        fVar8 = (pUVar2->_titanColor).fields.a;
      }
      else {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar3 = System_String__op_Equality
                          (a,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
          }
          pUVar2 = TypeInfo_UI_MinimapHandler->static_fields;
          fVar5 = (pUVar2->_teamBlueColor).fields.r;
          fVar6 = (pUVar2->_teamBlueColor).fields.g;
          fVar7 = (pUVar2->_teamBlueColor).fields.b;
          fVar8 = (pUVar2->_teamBlueColor).fields.a;
        }
        else {
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          bVar3 = System_String__op_Equality
                            (a,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
          if (bVar3) {
            if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
            }
            pUVar2 = TypeInfo_UI_MinimapHandler->static_fields;
            fVar5 = (pUVar2->_teamRedColor).fields.r;
            fVar6 = (pUVar2->_teamRedColor).fields.g;
            fVar7 = (pUVar2->_teamRedColor).fields.b;
            fVar8 = (pUVar2->_teamRedColor).fields.a;
          }
        }
      }
    }
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)character,(MethodInfo *)0x0);
    if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    }
    local_58[0].fields.r = fVar5;
    local_58[0].fields.g = fVar6;
    local_58[0].fields.b = fVar7;
    local_58[0].fields.a = fVar8;
    UI_MinimapHandler__SetupIcon(pSVar4,local_58,transform,(MethodInfo *)0x0);
  }
  return;
}


// UI.MinimapHandler$$GetIcons
// il2cpp: System_Collections_Generic_Dictionary_Transform__Transform__o* UI_MinimapHandler__GetIcons (const MethodInfo* method);
// 0x18225b790

System_Collections_Generic_Dictionary_Transform__Transform__o *
UI_MinimapHandler__GetIcons(MethodInfo *method)

{
  UI_MinimapHandler_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843472d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843472d7 = '\x01';
  }
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    }
    pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
    if (pUVar1 != (UI_MinimapHandler_o *)0x0) {
      return (pUVar1->fields)._icons;
    }
    ThrowNullReferenceException();
  }
  return (System_Collections_Generic_Dictionary_Transform__Transform__o *)0x0;
}


// UI.MinimapHandler$$SetupIcon
// il2cpp: void UI_MinimapHandler__SetupIcon (System_String_o* texture, UnityEngine_Color_o color, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x18225bcf0

void UI_MinimapHandler__SetupIcon
               (System_String_o *texture,UnityEngine_Color_o *color,UnityEngine_Transform_o *transform,
               MethodInfo *method)

{
  System_String_o *path;
  UI_MinimapHandler_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  bool bVar5;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_o bitMask;
  UnityEngine_UI_RawImage_o *__this;
  UnityEngine_Texture_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  Characters_BaseCharacter_o *x;
  UnityEngine_Texture_o *value;
  UnityEngine_Quaternion_Fields local_38;
  
  if (Il2CppMethodInitialized_1843472d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Prefabs/MinimapIcon");
    Il2CppMethodInitialized_1843472d8 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  bitMask.fields.bitMask =
       (UnityEngine_LowLevelPhysics2D_PhysicsMask_Fields)
       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                 (path,"Minimap/Prefabs/MinimapIcon",true,
                  (MethodInfo_795F00 *)
                  MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (bitMask.fields.bitMask != 0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       ((UnityEngine_GameObject_o *)bitMask.fields.bitMask,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    pUVar6 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (TypeInfo_Utility_ResourcePaths->static_fields->UI,texture,true,(MethodInfo *)0x0);
    if (__this != (UnityEngine_UI_RawImage_o *)0x0) {
      value = (UnityEngine_Texture_o *)0x0;
      if (pUVar6 != (UnityEngine_Texture_o *)0x0) {
        if (pUVar6->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
          value = pUVar6;
        }
        if (value == (UnityEngine_Texture_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar6,TypeInfo_UnityEngine_Texture2D);
        }
      }
      UnityEngine_UI_RawImage__set_texture(__this,value,(MethodInfo *)0x0);
      local_38.x = (color->fields).r;
      local_38.y = (color->fields).g;
      local_38.z = (color->fields).b;
      local_38.w = (color->fields).a;
      (*(__this->klass->vtable)._23_set_color.methodPtr)
                (__this,(UnityEngine_Color_o *)&local_38,(__this->klass->vtable)._23_set_color.method);
      if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
      }
      pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
      if (pUVar1 != (UI_MinimapHandler_o *)0x0) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._icons;
        pUVar7 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)bitMask.fields.bitMask,(MethodInfo *)0x0);
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar2,(Il2CppObject *)transform,(Il2CppObject *)pUVar7,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Add);
          if (transform != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)transform,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              x = UnityEngine_GameObject__GetComponent_object_
                            (pUVar8,(MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar5) {
                if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
                }
                pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
                if ((pUVar1 == (UI_MinimapHandler_o *)0x0) ||
                   (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (pUVar1->fields)._characters,
                   pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
                goto label_18225c0c0;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar2,(Il2CppObject *)transform,(Il2CppObject *)x,
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_Add);
              }
              pUVar7 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)bitMask.fields.bitMask,(MethodInfo *)0x0);
              if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
              }
              pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
              if ((pUVar1 != (UI_MinimapHandler_o *)0x0) && (pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar7,(pUVar1->fields)._maskTransform,(MethodInfo *)0x0);
                pUVar7 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)bitMask.fields.bitMask,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433dbea == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433dbea = '\x01';
                }
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
                  local_38.x = (pUVar3->zeroVector).fields.x;
                  local_38.y = (pUVar3->zeroVector).fields.y;
                  local_38.z = (pUVar3->zeroVector).fields.z;
                  UnityEngine_Transform__set_localPosition
                            (pUVar7,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
                  pUVar7 = UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)bitMask.fields.bitMask,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_18433de5b == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                    Il2CppMethodInitialized_18433de5b = '\x01';
                  }
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
                    local_38.x = (pUVar4->identityQuaternion).fields.x;
                    local_38.y = (pUVar4->identityQuaternion).fields.y;
                    local_38.z = (pUVar4->identityQuaternion).fields.z;
                    local_38.w = (pUVar4->identityQuaternion).fields.w;
                    UnityEngine_Transform__set_rotation
                              (pUVar7,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
                    pUVar8 = (UnityEngine_GameObject_o *)
                             UnityEngine_LowLevelPhysics2D_PhysicsMask__op_Implicit(bitMask,(MethodInfo *)0x0)
                    ;
                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
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
label_18225c0c0:
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$Update
// il2cpp: void UI_MinimapHandler__Update (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x18225d350

void UI_MinimapHandler__Update(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  float rotation;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  float fVar5;
  UnityEngine_GameObject_o *__this_00;
  Cameras_InGameCamera_o *camera;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  bool bVar8;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_o local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_1843472d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843472d9 = '\x01';
  }
  local_38[0].x = 0.0;
  local_38[0].y = 0.0;
  local_38[0].z = 0.0;
  local_38[0].w = 0.0;
  UI_MinimapHandler__RemoveOldIcons(__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._minimapPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar8 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar8) {
      return;
    }
    camera = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (camera != (Cameras_InGameCamera_o *)0x0) {
      bVar4 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if (((camera->klass->_2).typeHierarchyDepth < bVar4) ||
         ((camera->klass->_2).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
        il2cpp_codegen_raise_invalid_cast_exception(camera);
      }
      pUVar6 = (camera->fields).Cache;
      if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar7 = (pUVar6->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
        pUVar9 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)&local_58,pUVar7,(MethodInfo *)0x0);
        pUVar6 = (camera->fields).Cache;
        if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar7 = (pUVar6->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
          fVar5 = (pUVar9->fields).z;
          uVar2._0_4_ = (pUVar9->fields).x;
          uVar2._4_4_ = (pUVar9->fields).y;
          pUVar10 = UnityEngine_Transform__get_rotation(&local_48,pUVar7,(MethodInfo *)0x0);
          local_38[0].x = (pUVar10->fields).x;
          local_38[0].y = (pUVar10->fields).y;
          local_38[0].z = (pUVar10->fields).z;
          local_38[0].w = (pUVar10->fields).w;
          pUVar9 = UnityEngine_Quaternion__Internal_ToEulerRad
                             ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)local_38,
                              (MethodInfo *)0x0);
          uVar1 = (pUVar9->fields).x;
          uVar3 = (pUVar9->fields).y;
          local_58.y = (float)uVar3 * 57.29578;
          local_58.x = (float)uVar1 * 57.29578;
          local_58.z = (pUVar9->fields).z * 57.29578;
          pUVar9 = UnityEngine_Quaternion__Internal_MakePositive
                             ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                              (MethodInfo *)0x0);
          rotation = (pUVar9->fields).y;
          local_58._0_8_ = uVar2;
          local_58.z = fVar5;
          UI_MinimapHandler__UpdateTiles(__this,(UnityEngine_Vector3_o *)&local_58,rotation,(MethodInfo *)0x0)
          ;
          local_58._0_8_ = uVar2;
          local_58.z = fVar5;
          UI_MinimapHandler__UpdateIcons(__this,(UnityEngine_Vector3_o *)&local_58,rotation,(MethodInfo *)0x0)
          ;
          local_58._0_8_ = uVar2;
          local_58.z = fVar5;
          UI_MinimapHandler__UpdateCompass
                    (__this,camera,(UnityEngine_Vector3_o *)&local_58,rotation,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$UpdateCompass
// il2cpp: void UI_MinimapHandler__UpdateCompass (UI_MinimapHandler_o* __this, Cameras_InGameCamera_o* camera, UnityEngine_Vector3_o position, float y, const MethodInfo* method);
// 0x18225c0e0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18225c229: mov rdx, qword ptr [rip + 0x1e5ea08]  ; "E"
// asm:   0x18225c230: jmp 0x18225c2c9
// asm:   0x18225c247: mov rdx, qword ptr [rip + 0x1e184aa]  ; "SE"
// asm:   0x18225c24e: jmp 0x18225c2c9
// asm:   0x18225c25e: mov rdx, qword ptr [rip + 0x1e2a4fb]  ; "NE"
// asm:   0x18225c265: jmp 0x18225c2c9
// asm:   0x18225c298: mov rdx, qword ptr [rip + 0x1e5cdf1]  ; "W"
// asm:   0x18225c29f: jmp 0x18225c2c9
// asm:   0x18225c2af: mov rdx, qword ptr [rip + 0x1e1c25a]  ; "SW"
// asm:   0x18225c2b6: jmp 0x18225c2c9

void UI_MinimapHandler__UpdateCompass
               (UI_MinimapHandler_o *__this,Cameras_InGameCamera_o *camera,UnityEngine_Vector3_o *position,
               float y,MethodInfo *method)

{
  float fVar1;
  UnityEngine_UI_Text_o *pUVar2;
  Settings_UISettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Characters_BaseCharacter_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  float fVar7;
  bool bVar8;
  UnityEngine_Vector3_o *pUVar9;
  System_String_array *values;
  System_String_o *pSVar10;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"S");
    il2cpp_codegen_initialize_runtime_metadata(&"F0");
    il2cpp_codegen_initialize_runtime_metadata(&"SW");
    il2cpp_codegen_initialize_runtime_metadata(&"W");
    il2cpp_codegen_initialize_runtime_metadata(&"SE");
    il2cpp_codegen_initialize_runtime_metadata(&"E");
    il2cpp_codegen_initialize_runtime_metadata(&"NW");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"NE");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"N");
    Il2CppMethodInitialized_1843472da = '\x01';
  }
  if (y < 0.0) {
    y = y + 360.0;
  }
  if (360.0 < y) {
    y = y + -360.0;
  }
  if ((y < 22.5) || (202.5 < y)) {
    if ((y < 202.5) || (337.5 < y)) {
      if ((337.5 <= y) || (pSVar10 = "", y <= 22.5)) {
        pSVar10 = "N";
      }
    }
    else {
      pSVar10 = "SW";
      if ((247.5 < y) &&
         (((y < 247.5 || (pSVar10 = "W", 292.5 < y)) &&
          (pSVar10 = "", 292.5 <= y)))) {
        pSVar10 = "NW";
      }
    }
  }
  else {
    pSVar10 = "NE";
    if ((((67.5 < y) && ((y < 67.5 || (pSVar10 = "E", 112.5 < y)))) &&
        ((y < 112.5 || (pSVar10 = "SE", 157.5 < y)))) &&
       (pSVar10 = "", 157.5 <= y)) {
      pSVar10 = "S";
    }
  }
  pUVar2 = (__this->fields)._compassLabel;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar10,(pUVar2->klass->vtable)._75_set_text.method);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).Coordinates, pSVar4 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar4->fields)._value == 1) {
        if (camera != (Cameras_InGameCamera_o *)0x0) {
          pCVar5 = (camera->fields)._follow;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar8) {
            pCVar5 = (camera->fields)._follow;
            if (((pCVar5 == (Characters_BaseCharacter_o *)0x0) ||
                (pUVar6 = (pCVar5->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
               (__this_00 = (pUVar6->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
            goto label_18225c4e0;
            pUVar9 = UnityEngine_Transform__get_position(local_28,__this_00,(MethodInfo *)0x0);
            fVar7 = (pUVar9->fields).y;
            fVar1 = (pUVar9->fields).z;
            (position->fields).x = (pUVar9->fields).x;
            (position->fields).y = fVar7;
            (position->fields).z = fVar1;
          }
          pUVar2 = (__this->fields)._positionLabel;
          values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
          pSVar10 = System_Single__ToString_1b49f60((float *)position,"F0",(MethodInfo *)0x0)
          ;
          if (values != (System_String_array *)0x0) {
            if ((int)values->max_length != 0) {
              values->m_Items[0] = pSVar10;
              Il2CppCodeGenWriteBarrier(values->m_Items,pSVar10);
              pSVar10 = ", ";
              if (1 < (uint)values->max_length) {
                values->m_Items[1] = ", ";
                Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar10);
                pSVar10 = System_Single__ToString_1b49f60
                                    (&(position->fields).y,"F0",(MethodInfo *)0x0);
                if (2 < (uint)values->max_length) {
                  values->m_Items[2] = pSVar10;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar10);
                  pSVar10 = ", ";
                  if (3 < (uint)values->max_length) {
                    values->m_Items[3] = ", ";
                    Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar10);
                    pSVar10 = System_Single__ToString_1b49f60
                                        (&(position->fields).z,"F0",(MethodInfo *)0x0);
                    if (4 < (uint)values->max_length) {
                      values->m_Items[4] = pSVar10;
                      Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar10);
                      pSVar10 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar2,pSVar10,(pUVar2->klass->vtable)._75_set_text.method);
                        return;
                      }
                      goto label_18225c4e0;
                    }
                  }
                }
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
      else {
        pUVar2 = (__this->fields)._positionLabel;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                    (pUVar2,"",(pUVar2->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
label_18225c4e0:
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$RemoveOldIcons
// il2cpp: void UI_MinimapHandler__RemoveOldIcons (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x18225b8a0
// eh: try 0x18225ba50..0x18225bce0 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18225bba2: mov rdx, qword ptr [rip + 0x1e65e17]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
// asm:   0x18225bba9: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18225bbae: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18225bbb3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18225bbb8: test rcx, rcx
// asm:   0x18225bbbb: jne 0x18225bccf
// asm:   0x18225bbc1: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x18225bc7b: mov rdx, qword ptr [rip + 0x1e3ee76]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose
// asm:   0x18225bc82: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18225bc87: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18225bc8c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18225bc91: test rcx, rcx
// asm:   0x18225bc94: jne 0x18225bce0
// asm:   0x18225bccf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18225bce0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_MinimapHandler__RemoveOldIcons(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Transform__o *pSVar2;
  System_Collections_Generic_Dictionary_Transform__Transform__o *__this_00;
  System_Collections_Generic_Dictionary_Transform__BaseCharacter__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  bool bVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Characters_BaseCharacter_o *x;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Object_o *pUVar6;
  undefined1 local_68 [16];
  UnityEngine_Object_o *local_58;
  undefined1 local_50 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_48;
  UnityEngine_Object_o *local_40;
  undefined1 local_38 [8];
  uint64_t uStack_30;
  UnityEngine_Object_o *local_28;
  
  if (Il2CppMethodInitialized_1843472db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_get_Item);
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
    Il2CppMethodInitialized_1843472db = '\x01';
  }
  local_50 = (undefined1  [8])0x0;
  pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_40 = (UnityEngine_Object_o *)0x0;
  local_38 = (undefined1  [8])0x0;
  uStack_30 = 0;
  local_28 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._iconsToRemove;
  if (pSVar2 != (System_Collections_Generic_List_Transform__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields)._icons;
    if (__this_00 != (System_Collections_Generic_Dictionary_Transform__Transform__o *)0x0) {
      __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
      if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_68,__this_02,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
                  );
        local_50 = (undefined1  [8])local_68._0_8_;
        pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68._8_8_;
        local_40 = local_58;
        local_68._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50;
        while( true ) {
          bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )local_50,
                             (MethodInfo_156BDD0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
                            );
          pUVar6 = local_40;
          if (!bVar4) break;
          __this_01 = (__this->fields)._characters;
          if (__this_01 == (System_Collections_Generic_Dictionary_Transform__BaseCharacter__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = false;
          bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (Il2CppObject *)local_40,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_ContainsKey
                            );
          if (bVar5) {
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            x = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar3,(Il2CppObject *)pUVar6,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_get_Item);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar5) {
              if (x == (Characters_BaseCharacter_o *)0x0) {
                ThrowNullReferenceException();
              }
              if ((x->fields).Dead == false) goto label_18225baee;
            }
            bVar4 = true;
          }
label_18225baee:
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5 || bVar4) {
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_03 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar3,(Il2CppObject *)pUVar6,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item
                                  );
            pSVar2 = (__this->fields)._iconsToRemove;
            if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pSVar2,pUVar6,MethodInfo_System_Collections_Generic_List_Transform_Add);
            if (__this_03 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar6 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_2f1ff70(pUVar6,(MethodInfo *)0x0);
          }
        }
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
                  );
        pSVar2 = (__this->fields)._iconsToRemove;
        if (pSVar2 != (System_Collections_Generic_List_Transform__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                     (System_Collections_Generic_List_T__o *)pSVar2,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Transform_GetEnumerator);
          local_38 = (undefined1  [8])local_68._0_8_;
          uStack_30 = local_68._8_8_;
          local_28 = local_58;
          local_68._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
          while( true ) {
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Transform_MoveNext);
            pUVar6 = local_28;
            if (!bVar4) {
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                         MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose);
              return;
            }
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar3,(Il2CppObject *)local_28,
                       (MethodInfo_1470BF0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Remove);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar3,(Il2CppObject *)pUVar6,
                       (MethodInfo_1470BF0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_Remove);
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$UpdateIcons
// il2cpp: void UI_MinimapHandler__UpdateIcons (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, float y, const MethodInfo* method);
// 0x18225c4f0
// eh: try 0x18225c608..0x18225c8dc -> pad 0x18333c7d0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18225c86b: mov rdx, qword ptr [rip + 0x1e6514e]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
// asm:   0x18225c872: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18225c877: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18225c87c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18225c881: test rcx, rcx
// asm:   0x18225c884: jne 0x18225c8dc
// asm:   0x18225c8dc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c7d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c7d5: push rbp
// asm:   0x18333c7d6: sub rsp, 0x20
// asm:   0x18333c7da: mov rbp, rdx
// asm:   0x18333c7dd: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333c7e4: mov rcx, qword ptr [rax]
// asm:   0x18333c7e7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333c7eb: movabs rax, 0
// asm:   0x18333c7f5: add rsp, 0x20
// asm:   0x18333c7f9: pop rbp
// asm:   0x18333c7fa: ret 

void UI_MinimapHandler__UpdateIcons
               (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o *position,float y,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_Dictionary_Transform__Transform__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  Il2CppObject *__this_02;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *local_100;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_f8;
  UnityEngine_Vector3_Fields local_d8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_c8;
  UnityEngine_Vector3_o local_a0;
  UnityEngine_Vector3_o local_90 [8];
  
  if (Il2CppMethodInitialized_1843472dc == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MinimapCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843472dc = '\x01';
  }
  local_f8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.fields._index = 0;
  local_f8.fields._version = 0;
  local_f8.fields._currentKey = (Il2CppObject *)0x0;
  local_118 = 0;
  local_110 = 0.0;
  __this_00 = (__this->fields)._icons;
  if (__this_00 != (System_Collections_Generic_Dictionary_Transform__Transform__o *)0x0) {
    __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                (&local_c8,__this_03,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
                );
      local_f8.fields._dictionary = local_c8.fields._dictionary;
      local_f8.fields._index = local_c8.fields._index;
      local_f8.fields._version = local_c8.fields._version;
      local_f8.fields._currentKey = local_c8.fields._currentValue;
      local_108 = 0;
      local_100 = &local_f8;
      while( true ) {
        while( true ) {
          do {
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                              (&local_f8,
                               (MethodInfo_156BDD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
                              );
            __this_02 = local_f8.fields._currentKey;
            if (!bVar3) {
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_f8,
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
                        );
              return;
            }
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_04 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (__this_01,local_f8.fields._currentKey,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item
                                  );
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
          } while (!bVar3);
          if ((UnityEngine_Transform_o *)__this_02 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar4 = UnityEngine_Transform__get_position
                             (&local_a0,(UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
          fVar6 = (pUVar4->fields).x;
          pUVar4 = UnityEngine_Transform__get_position
                             (local_90,(UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
          fVar7 = (position->fields).x;
          fVar8 = (pUVar4->fields).z;
          fVar1 = (position->fields).z;
          local_110 = 0.0;
          if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
          }
          fVar9 = (float)TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize / (__this->fields)._height
          ;
          fVar7 = (fVar6 - fVar7) * fVar9;
          fVar8 = (fVar8 - fVar1) * fVar9;
          local_118 = CONCAT44(fVar8,fVar7);
          local_110 = fVar9 * 0.0;
          fVar6 = (float)il2cpp_runtime_helper_180546a40(&local_118);
          if (fVar6 <= (float)TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize * 0.5) break;
          if (__this_04 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
          if (bVar3) {
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
          }
        }
        if (__this_04 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
        ;
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) break;
        bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
        if (!bVar3) {
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        }
        local_118 = CONCAT44(fVar8,fVar7);
        local_d8.y = fVar8;
        local_d8.x = fVar7;
        local_d8.z = fVar9 * 0.0;
        UnityEngine_Transform__set_localPosition
                  (__this_04,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433de5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_18433de5b = '\x01';
        }
        pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
        local_c8.fields._dictionary =
             *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(pUVar2->identityQuaternion).fields;
        local_c8.fields._index = (int32_t)(pUVar2->identityQuaternion).fields.z;
        local_c8.fields._version = (int32_t)(pUVar2->identityQuaternion).fields.w;
        UnityEngine_Transform__set_rotation(__this_04,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0)
        ;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$UpdateTiles
// il2cpp: void UI_MinimapHandler__UpdateTiles (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, float rotation, const MethodInfo* method);
// 0x18225c8f0
// eh: try 0x18225cc10..0x18225d33f -> pad 0x183333bc0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18225cc0e: nop 
// asm:   0x18225ccc9: mov rdx, qword ptr [rip + 0x1e661f0]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_Dispose
// asm:   0x18225ccd0: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x18225ccd5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18225ccda: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x18225ccdf: test rcx, rcx
// asm:   0x18225cce2: jne 0x18225d324
// asm:   0x18225cce8: mov r14, qword ptr [rsp + 0x120]
// asm:   0x18225ccf0: mov rsi, qword ptr [rsp + 0x40]
// asm:   0x18225ccf5: mov r13d, dword ptr [rsp + 0x80]
// asm:   0x18225ccfd: mov dword ptr [rsp + 0x50], r13d
// asm:   0x18225ce25: mov rdx, qword ptr [rip + 0x1e3fc44]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_Dispose
// asm:   0x18225ce2c: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x18225ce31: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18225ce36: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x18225ce3b: test rcx, rcx
// asm:   0x18225ce3e: jne 0x18225d33f
// asm:   0x18225ce44: mov r14, qword ptr [rsp + 0x120]
// asm:   0x18225ce4c: mov r13d, dword ptr [rsp + 0x80]
// asm:   0x18225ce54: mov dword ptr [rsp + 0x50], r13d
// asm:   0x18225d07d: mov rdi, qword ptr [rsp + 0x128]
// asm:   0x18225d324: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18225d33f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183333bc0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183333bc5: push rbp
// asm:   0x183333bc6: sub rsp, 0x40
// asm:   0x183333bca: mov rbp, rdx
// asm:   0x183333bcd: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x183333bd4: mov rcx, qword ptr [rax]
// asm:   0x183333bd7: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183333bdb: movabs rax, 0
// asm:   0x183333be5: add rsp, 0x40
// asm:   0x183333be9: pop rbp
// asm:   0x183333bea: ret 
// asm:   0x18333f870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f875: push rbp
// asm:   0x18333f876: sub rsp, 0x40
// asm:   0x18333f87a: mov rbp, rdx
// asm:   0x18333f87d: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x18333f884: mov rcx, qword ptr [rax]
// asm:   0x18333f887: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333f88b: movabs rax, 0
// asm:   0x18333f895: add rsp, 0x40
// asm:   0x18333f899: pop rbp
// asm:   0x18333f89a: ret 

void UI_MinimapHandler__UpdateTiles
               (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o *position,float rotation,MethodInfo *method)

{
  int32_t width;
  UnityEngine_Vector2Int_Fields UVar1;
  System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *pSVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *pSVar3;
  System_Collections_Generic_Queue_Vector3__o *__this_00;
  System_Collections_Generic_Queue_Vector2Int__o *pSVar4;
  UnityEngine_UI_RawImage_array *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Photon_Realtime_AppSettings_o *__this_01;
  Cameras_MinimapCamera_o *__this_02;
  bool bVar7;
  int iVar8;
  System_Collections_Generic_List_Vector2Int__o *__this_03;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  UnityEngine_Texture2D_o *pUVar9;
  UnityEngine_Texture_o *value;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Vector2Int_o key;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector2Int_o local_res8;
  undefined8 local_d8;
  float local_d0;
  int local_c8;
  undefined1 local_b8 [16];
  UnityEngine_Vector2Int_Fields local_a8;
  int local_98;
  int local_94;
  UnityEngine_Vector2Int_Fields local_90;
  int local_88;
  undefined1 local_80 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_78;
  UnityEngine_Vector2Int_Fields local_70;
  undefined1 local_68 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_60;
  UnityEngine_Vector2Int_Fields local_58;
  UnityEngine_Vector2Int_Fields local_50;
  
  if (Il2CppMethodInitialized_1843472dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Vector2Int_Texture2D_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2Int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector2Int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2Int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2Int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MinimapCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_Vector2Int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_Vector2Int_Dequeue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_Vector2Int_Enqueue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Queue_Vector2Int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_1843472dd = '\x01';
  }
  local_80 = (undefined1  [8])0x0;
  pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_70.m_X = 0;
  local_70.m_Y = 0;
  local_68 = (undefined1  [8])0x0;
  pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_58.m_X = 0;
  local_58.m_Y = 0;
  local_90.m_X = 0;
  local_90.m_Y = 0;
  fVar14 = (position->fields).x;
  fVar15 = (position->fields).z;
  fVar16 = (__this->fields)._height * 0.5;
  if (0.0 < fVar14) {
    fVar14 = fVar14 + fVar16;
  }
  else if (fVar14 < 0.0) {
    fVar14 = fVar14 - fVar16;
  }
  if (0.0 < fVar15) {
    fVar15 = fVar15 + fVar16;
  }
  else if (fVar15 < 0.0) {
    fVar15 = fVar15 - fVar16;
  }
  fVar16 = (__this->fields)._height;
  local_res8.fields.m_X = (int32_t)(fVar14 / fVar16);
  iVar12 = (int)(fVar15 / fVar16);
  UVar1 = (__this->fields)._currentTile.fields;
  if (local_res8.fields.m_X != UVar1.m_X || iVar12 != UVar1.m_Y) {
    (__this->fields)._needUpdateTiles = true;
  }
  local_c8 = local_res8.fields.m_X;
  local_88 = iVar12;
  if ((__this->fields)._needUpdateTiles != false) {
    (__this->fields)._needUpdateTiles = false;
    (__this->fields)._currentTile.fields.m_X = local_res8.fields.m_X;
    (__this->fields)._currentTile.fields.m_Y = iVar12;
    (__this->fields)._currentTileCenter.fields.x = (float)local_res8.fields.m_X * fVar16;
    (__this->fields)._currentTileCenter.fields.y = fVar16;
    (__this->fields)._currentTileCenter.fields.z = (float)iVar12 * fVar16;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2Int);
    System_Collections_Generic_List_Vector2Int____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector2Int_ctor);
    pSVar2 = (__this->fields)._tileTextures;
    if ((pSVar2 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) ||
       (local_98 = local_res8.fields.m_X, local_94 = iVar12,
       __this_04 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                   System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                              (MethodInfo_13C6500 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Keys),
       __this_04 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto label_18225d318;
    local_d8 = __this_03;
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_b8,
               __this_04,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Vector2Int_Texture2D_GetEnumerator
              );
    local_80 = (undefined1  [8])local_b8._0_8_;
    pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8._8_8_;
    local_70 = local_a8;
    local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
label_18225cc10:
    bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_AottgChangelogService_ListKey__object___MoveNext
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_80,(MethodInfo_155CDD0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_MoveNext
                      );
    UVar1 = local_70;
    if (bVar7) {
      local_50 = local_70;
      if (Il2CppMethodInitialized_184341267 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_184341267 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar8 = UVar1.m_X - local_res8.fields.m_X;
      iVar11 = -iVar8;
      if (iVar11 < 0) {
        iVar11 = iVar8;
      }
      if (iVar11 < 3) goto code_r0x00018225cc7e;
      goto label_18225cc98;
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_Dispose
              );
    if (__this_03 == (System_Collections_Generic_List_Vector2Int__o *)0x0) goto label_18225d318;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
               (System_Collections_Generic_List_T__o *)__this_03,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Vector2Int_GetEnumerator);
    local_68 = (undefined1  [8])local_b8._0_8_;
    pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8._8_8_;
    local_58 = local_a8;
    local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68;
    while (bVar7 = System_Collections_Generic_List_Enumerator_ProbeVolumeStreamableAsset_StreamableCellDesc___MoveNext
                             ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                              (MethodInfo_152A910 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_MoveNext),
          UVar1 = local_58, bVar7) {
      pSVar2 = (__this->fields)._tileTextures;
      if (pSVar2 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar9 = System_Collections_Generic_Dictionary_Vector2Int__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          (UnityEngine_Vector2Int_o)local_58,
                          (MethodInfo_14CFCB0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
      pSVar2 = (__this->fields)._tileTextures;
      if (pSVar2 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_Vector2Int__object___Remove
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (UnityEngine_Vector2Int_o)UVar1,
                 (MethodInfo_14C3440 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_Remove);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._finishedTiles;
      if (pSVar3 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_Collections_Generic_HashSet_Vector2Int___Contains
                        (pSVar3,(UnityEngine_Vector2Int_o)UVar1,
                         (MethodInfo_177DB60 *)
                         MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Contains);
      if (bVar7) {
        pSVar3 = (__this->fields)._finishedTiles;
        if (pSVar3 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_Vector2Int___Remove
                  (pSVar3,(UnityEngine_Vector2Int_o)UVar1,
                   (MethodInfo_178C9B0 *)MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Remove);
      }
    }
    System_Collections_Generic_List_Enumerator_Vector2Int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
               MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_Dispose);
    __this_00 = (System_Collections_Generic_Queue_Vector3__o *)(__this->fields)._createTileQueue;
    if (__this_00 == (System_Collections_Generic_Queue_Vector3__o *)0x0) goto label_18225d318;
    System_Collections_Generic_Queue_Vector3___Clear
              (__this_00,(MethodInfo_B92D30 *)MethodInfo_System_Collections_Generic_Queue_Vector2Int_Clear);
    iVar12 = local_94;
    pSVar3 = (__this->fields)._finishedTiles;
    if (pSVar3 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) goto label_18225d318;
    local_res8.fields.m_Y = local_94;
    bVar7 = System_Collections_Generic_HashSet_Vector2Int___Contains
                      (pSVar3,local_res8,
                       (MethodInfo_177DB60 *)MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Contains
                      );
    if (!bVar7) {
      pSVar4 = (__this->fields)._createTileQueue;
      if (pSVar4 == (System_Collections_Generic_Queue_Vector2Int__o *)0x0) goto label_18225d318;
      local_res8.fields.m_Y = iVar12;
      System_Collections_Generic_Queue_Vector2Int___Enqueue
                (pSVar4,local_res8,
                 (MethodInfo_B93A70 *)MethodInfo_System_Collections_Generic_Queue_Vector2Int_Enqueue);
    }
    uVar13 = 0;
    do {
      iVar11 = local_res8.fields.m_X + (uVar13 / 3) * -3 + -1 + uVar13;
      iVar12 = (iVar12 - uVar13 / 3) + 1;
      local_90.m_Y = iVar12;
      local_90.m_X = iVar11;
      UVar1 = local_90;
      pSVar2 = (__this->fields)._tileTextures;
      if (pSVar2 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) goto label_18225d318;
      bVar7 = System_Collections_Generic_Dictionary_Vector2Int__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (UnityEngine_Vector2Int_o)local_90,
                         (MethodInfo_14BA400 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey);
      if (!bVar7) {
        pSVar2 = (__this->fields)._tileTextures;
        if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
        }
        width = TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize;
        pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
        UnityEngine_Texture2D___ctor_2efc630(pUVar9,width,width,3,false,(MethodInfo *)0x0);
        if (pSVar2 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0)
        goto label_18225d318;
        System_Collections_Generic_Dictionary_Vector2Int__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                   (UnityEngine_Vector2Int_o)UVar1,(Il2CppObject *)pUVar9,
                   (MethodInfo_14D04D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_set_Item);
        local_res8.fields.m_X = local_c8;
        iVar11 = local_90.m_X;
      }
      pSVar3 = (__this->fields)._finishedTiles;
      if (pSVar3 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) goto label_18225d318;
      bVar7 = System_Collections_Generic_HashSet_Vector2Int___Contains
                        (pSVar3,(UnityEngine_Vector2Int_o)UVar1,
                         (MethodInfo_177DB60 *)
                         MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Contains);
      if ((!bVar7) && ((iVar11 != local_res8.fields.m_X || (iVar12 != local_88)))) {
        pSVar4 = (__this->fields)._createTileQueue;
        if (pSVar4 == (System_Collections_Generic_Queue_Vector2Int__o *)0x0) goto label_18225d318;
        System_Collections_Generic_Queue_Vector2Int___Enqueue
                  (pSVar4,(UnityEngine_Vector2Int_o)UVar1,
                   (MethodInfo_B93A70 *)MethodInfo_System_Collections_Generic_Queue_Vector2Int_Enqueue);
      }
      pSVar2 = (__this->fields)._tileTextures;
      if (pSVar2 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) goto label_18225d318;
      value = (UnityEngine_Texture_o *)
              System_Collections_Generic_Dictionary_Vector2Int__object___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (UnityEngine_Vector2Int_o)UVar1,
                         (MethodInfo_14CFCB0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
      pUVar5 = (__this->fields)._images;
      if (pUVar5 == (UnityEngine_UI_RawImage_array *)0x0) goto label_18225d318;
      if ((uint)pUVar5->max_length <= uVar13) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar5->m_Items[uVar13] == (UnityEngine_UI_RawImage_o *)0x0) goto label_18225d318;
      UnityEngine_UI_RawImage__set_texture(pUVar5->m_Items[uVar13],value,(MethodInfo *)0x0);
      uVar13 = uVar13 + 1;
      iVar12 = local_94;
    } while ((int)uVar13 < 9);
  }
  if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
  }
  fVar14 = (float)TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize / (__this->fields)._height;
  pUVar6 = (__this->fields)._tileTransform;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    local_d8._4_4_ = ((__this->fields)._currentTileCenter.fields.z - (position->fields).z) * fVar14;
    local_d8._0_4_ = ((__this->fields)._currentTileCenter.fields.x - (position->fields).x) * fVar14;
    local_d0 = 0.0;
    UnityEngine_Transform__set_localPosition(pUVar6,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._maskTransform;
    local_d8 = (System_Collections_Generic_List_Vector2Int__o *)0x0;
    local_d0 = rotation * 0.017453292;
    pUVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)local_b8,(UnityEngine_Vector3_o *)&local_d8,
                         (MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      local_b8._0_8_ = *(undefined8 *)&pUVar10->fields;
      local_b8._8_8_ = *(undefined8 *)&(pUVar10->fields).z;
      UnityEngine_Transform__set_localRotation(pUVar6,(UnityEngine_Quaternion_o *)local_b8,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._createTileQueue;
      if (pSVar4 != (System_Collections_Generic_Queue_Vector2Int__o *)0x0) {
        if ((pSVar4->fields)._size < 1) {
          return;
        }
        __this_01 = (Photon_Realtime_AppSettings_o *)
                    TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
        if (__this_01 != (Photon_Realtime_AppSettings_o *)0x0) {
          bVar7 = Photon_Realtime_AppSettings__get_IsMasterServerAddress(__this_01,(MethodInfo *)0x0);
          if (!bVar7) {
            return;
          }
          pSVar4 = (__this->fields)._createTileQueue;
          if (pSVar4 != (System_Collections_Generic_Queue_Vector2Int__o *)0x0) {
            key = System_Collections_Generic_Queue_Vector2Int___Dequeue
                            (pSVar4,(MethodInfo_B92F80 *)
                                    MethodInfo_System_Collections_Generic_Queue_Vector2Int_Dequeue);
            if (Il2CppMethodInitialized_1843472de == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Add);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
              Il2CppMethodInitialized_1843472de = '\x01';
            }
            pSVar2 = (__this->fields)._tileTextures;
            if (pSVar2 != (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
              bVar7 = System_Collections_Generic_Dictionary_Vector2Int__object___ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,
                                 (MethodInfo_14BA400 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey
                                );
              if (!bVar7) {
                return;
              }
              pSVar2 = (__this->fields)._tileTextures;
              if (pSVar2 != (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
                pUVar9 = System_Collections_Generic_Dictionary_Vector2Int__object___get_Item
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,
                                    (MethodInfo_14CFCB0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item
                                   );
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar7) {
                  return;
                }
                __this_02 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
                local_res8.fields.m_Y = key.fields.m_Y;
                if (__this_02 != (Cameras_MinimapCamera_o *)0x0) {
                  fVar14 = (__this->fields)._height;
                  local_d8 = (System_Collections_Generic_List_Vector2Int__o *)
                             CONCAT44(fVar14,(float)key.fields.m_X * (__this->fields)._height);
                  local_d0 = (float)local_res8.fields.m_Y * fVar14;
                  Cameras_MinimapCamera__TakeSnapshot
                            (__this_02,(UnityEngine_Vector3_o *)&local_d8,fVar14,pUVar9,true,false,
                             (MethodInfo *)0x0);
                  pSVar3 = (__this->fields)._finishedTiles;
                  if (pSVar3 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
                    System_Collections_Generic_HashSet_Vector2Int___Add
                              (pSVar3,key,
                               (MethodInfo_177B710 *)
                               MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Add);
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
label_18225d318:
  ThrowNullReferenceException();
code_r0x00018225cc7e:
  iVar11 = il2cpp_runtime_helper_1814f1de0(local_50.m_Y - iVar12,0);
  if (2 < iVar11) {
label_18225cc98:
    if (__this_03 == (System_Collections_Generic_List_Vector2Int__o *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_runtime_helper_180030d60(__this_03,UVar1,MethodInfo_System_Collections_Generic_List_Vector2Int_Add);
  }
  goto label_18225cc10;
}


// UI.MinimapHandler$$GetCurrentTile
// il2cpp: UnityEngine_Vector2Int_o UI_MinimapHandler__GetCurrentTile (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x18225b700

UnityEngine_Vector2Int_o
UI_MinimapHandler__GetCurrentTile
          (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2Int_Fields UVar2;
  float fVar3;
  
  fVar1 = (position->fields).x;
  fVar3 = (__this->fields)._height * 0.5;
  if (0.0 < fVar1) {
    (position->fields).x = fVar1 + fVar3;
  }
  else if (fVar1 < 0.0) {
    (position->fields).x = fVar1 - fVar3;
  }
  fVar1 = (position->fields).z;
  if (0.0 < fVar1) {
    (position->fields).z = fVar3 + fVar1;
  }
  else if (fVar1 < 0.0) {
    (position->fields).z = fVar1 - fVar3;
  }
  UVar2.m_Y = (int)((position->fields).z / (__this->fields)._height);
  UVar2.m_X = (int)((position->fields).x / (__this->fields)._height);
  return (UnityEngine_Vector2Int_o)UVar2;
}


// UI.MinimapHandler$$GetTilePosition
// il2cpp: UnityEngine_Vector3_o UI_MinimapHandler__GetTilePosition (UI_MinimapHandler_o* __this, UnityEngine_Vector2Int_o tile, const MethodInfo* method);
// 0x18225b860

UnityEngine_Vector3_o *
UI_MinimapHandler__GetTilePosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,UI_MinimapHandler_o *__this,
          UnityEngine_Vector2Int_o tile,MethodInfo *method)

{
  (__return_storage_ptr__->fields).y = (__this->fields)._height;
  (__return_storage_ptr__->fields).x = (float)tile.fields.m_X * (__this->fields)._height;
  (__return_storage_ptr__->fields).z = (float)tile.fields.m_Y * (__this->fields)._height;
  return __return_storage_ptr__;
}


// UI.MinimapHandler$$CreateTile
// il2cpp: void UI_MinimapHandler__CreateTile (UI_MinimapHandler_o* __this, UnityEngine_Vector2Int_o tile, const MethodInfo* method);
// 0x18225b590

void UI_MinimapHandler__CreateTile
               (UI_MinimapHandler_o *__this,UnityEngine_Vector2Int_o tile,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *pSVar1;
  Cameras_MinimapCamera_o *__this_00;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  bool bVar2;
  UnityEngine_Texture2D_o *texture;
  int iStackX_14;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843472de = '\x01';
  }
  pSVar1 = (__this->fields)._tileTextures;
  if (pSVar1 != (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_Vector2Int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,tile,
                       (MethodInfo_14BA400 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey);
    if (!bVar2) {
      return;
    }
    pSVar1 = (__this->fields)._tileTextures;
    if (pSVar1 != (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
      texture = System_Collections_Generic_Dictionary_Vector2Int__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,tile,
                           (MethodInfo_14CFCB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        return;
      }
      iStackX_14 = tile.fields.m_Y;
      __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
      if (__this_00 != (Cameras_MinimapCamera_o *)0x0) {
        local_18.fields.y = (__this->fields)._height;
        local_18.fields.z = (float)iStackX_14 * local_18.fields.y;
        local_18.fields.x = (float)tile.fields.m_X * (__this->fields)._height;
        Cameras_MinimapCamera__TakeSnapshot
                  (__this_00,&local_18,local_18.fields.y,texture,true,false,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._finishedTiles;
        if (__this_01 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
          System_Collections_Generic_HashSet_Vector2Int___Add
                    (__this_01,tile,
                     (MethodInfo_177B710 *)MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Add);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$.ctor
// il2cpp: void UI_MinimapHandler___ctor (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x18225d660

void UI_MinimapHandler___ctor(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_array *value;
  System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *__this_00;
  System_Collections_Generic_Queue_Vector2Int__o *__this_01;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_02;
  System_Collections_Generic_Dictionary_Transform__Transform__o *__this_03;
  System_Collections_Generic_Dictionary_Transform__BaseCharacter__o *__this_04;
  System_Collections_Generic_List_Transform__o *__this_05;
  
  if (Il2CppMethodInitialized_1843472df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Transform_Transform);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Vector2Int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Vector2Int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_Vector2Int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Queue_Vector2Int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_RawImage_array);
    Il2CppMethodInitialized_1843472df = '\x01';
  }
  value = (UnityEngine_UI_RawImage_array *)SZArrayNew(TypeInfo_UnityEngine_UI_RawImage_array,9);
  (__this->fields)._images = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._images,value);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D);
  System_Collections_Generic_Dictionary_Vector2Int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_14CF610 *)MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ctor)
  ;
  (__this->fields)._tileTextures = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tileTextures,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_Vector2Int);
  System_Collections_Generic_Queue_Vector2Int____ctor
            ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)__this_01,
             (MethodInfo_B96030 *)MethodInfo_System_Collections_Generic_Queue_Vector2Int_ctor);
  (__this->fields)._createTileQueue = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._createTileQueue,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Vector2Int)
  ;
  System_Collections_Generic_HashSet_Vector2Int____ctor
            (__this_02,(MethodInfo_17932A0 *)MethodInfo_System_Collections_Generic_HashSet_Vector2Int_ctor);
  (__this->fields)._finishedTiles = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._finishedTiles,__this_02);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ctor);
  (__this->fields)._icons = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icons,__this_03);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter
                        );
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_ctor);
  (__this->fields)._characters = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characters,__this_04);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_05,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._iconsToRemove = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._iconsToRemove,__this_05);
  (__this->fields)._needUpdateTiles = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MinimapHandler$$.cctor
// il2cpp: void UI_MinimapHandler___cctor (const MethodInfo* method);
// 0x18225d560

void UI_MinimapHandler___cctor(MethodInfo *method)

{
  UI_MinimapHandler_StaticFields *pUVar1;
  
  if (Il2CppMethodInitialized_1843472e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    Il2CppMethodInitialized_1843472e0 = '\x01';
  }
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields;
  (pUVar1->_mineColor).fields.r = 0.455;
  (pUVar1->_mineColor).fields.g = 0.608;
  (pUVar1->_mineColor).fields.b = 0.816;
  (pUVar1->_mineColor).fields.a = 1.0;
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields;
  (pUVar1->_titanColor).fields.r = 1.0;
  (pUVar1->_titanColor).fields.g = 1.0;
  (pUVar1->_titanColor).fields.b = 0.44;
  (pUVar1->_titanColor).fields.a = 1.0;
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields;
  (pUVar1->_humanColor).fields.r = 0.58;
  (pUVar1->_humanColor).fields.g = 1.0;
  (pUVar1->_humanColor).fields.b = 0.5;
  (pUVar1->_humanColor).fields.a = 1.0;
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields;
  (pUVar1->_teamBlueColor).fields.r = 0.0;
  (pUVar1->_teamBlueColor).fields.g = 0.67;
  (pUVar1->_teamBlueColor).fields.b = 1.0;
  (pUVar1->_teamBlueColor).fields.a = 1.0;
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields;
  (pUVar1->_teamRedColor).fields.r = 0.87;
  (pUVar1->_teamRedColor).fields.g = 0.25;
  (pUVar1->_teamRedColor).fields.b = 0.25;
  (pUVar1->_teamRedColor).fields.a = 1.0;
  return;
}


