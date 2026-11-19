// Type: UI.MinimapHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MinimapHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MinimapHandler.cs
// --------------------------------

// UI.MinimapHandler$$Awake
// il2cpp: void UI_MinimapHandler__Awake (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x5d370a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3739c: nop dword ptr [rax]

void UI_MinimapHandler__Awake(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_GeneralSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UI_BaseMenu_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_RawImage_array *pUVar6;
  uint in_EAX;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_UI_RawImage_o *obj;
  Il2CppObject *pIVar10;
  uint uVar11;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07547e51 == '\0') {
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
    Il2CppMethodInitialized_07547e51 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  TypeInfo_UI_MinimapHandler->static_fields->Instance = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MinimapHandler->static_fields->Instance);
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
         ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      (__this->fields)._minimapPanel = (*(uint64_t *)((char *)pUVar4 + 0x1d0));
      Il2CppCodeGenWriteBarrier(&(__this->fields)._minimapPanel);
      pUVar5 = (__this->fields)._minimapPanel;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"PositionLabel",(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar7,
                                (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            (__this->fields)._positionLabel = pUVar8;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._positionLabel);
            pUVar5 = (__this->fields)._minimapPanel;
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar7 = UnityEngine_Transform__Find(pUVar7,"CompassLabel",(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  pUVar8 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar7,
                                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text
                                     );
                  (__this->fields)._compassLabel = pUVar8;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._compassLabel);
                  pUVar5 = (__this->fields)._minimapPanel;
                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Mask",(MethodInfo *)0x0);
                      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                        pUVar7 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                        (__this->fields)._maskTransform = pUVar7;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._maskTransform);
                        pUVar7 = (__this->fields)._maskTransform;
                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                          uVar11 = 0;
                          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Tiles",(MethodInfo *)0x0)
                          ;
                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                            (__this->fields)._tileTransform = pUVar7;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._tileTransform);
                            uStack_38 = uStack_38 & 0xffffffff;
                            while( true ) {
                              pUVar6 = (__this->fields)._images;
                              pUVar7 = (__this->fields)._tileTransform;
                              pSVar9 = System_Int32__ToString
                                                 ((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
                              pSVar9 = System_String__Concat_52f0320
                                                 ("Image",pSVar9,(MethodInfo *)0x0);
                              if (pUVar7 == (UnityEngine_Transform_o *)0x0) break;
                              pUVar7 = UnityEngine_Transform__Find(pUVar7,pSVar9,(MethodInfo *)0x0);
                              if (pUVar7 == (UnityEngine_Transform_o *)0x0) break;
                              obj = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar7,
                                               (MethodInfo_34B0830 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_RawImage);
                              if (pUVar6 == (UnityEngine_UI_RawImage_array *)0x0) break;
                              if (obj != (UnityEngine_UI_RawImage_o *)0x0) {
                                pIVar10 = il2cpp_vm_Object_IsInst
                                                    ((Il2CppObject *)obj,
                                                     (((pUVar6->obj).klass)->_1).element_class);
                                if (pIVar10 == (Il2CppObject *)0x0) {
                                  pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
                                }
                              }
                              if ((uint)pUVar6->max_length <= uVar11) {
                                ThrowIndexOutOfRangeException();
                              }
                              pUVar6->m_Items[(int)uVar11] = obj;
                              Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar11);
                              uVar11 = uStack_38._4_4_ + 1;
                              uStack_38 = CONCAT44(uVar11,(uint)uStack_38);
                              if (8 < (int)uVar11) {
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
// 0x5d37480

void UI_MinimapHandler__CreateMinimapIcon
               (UnityEngine_Transform_o *transform,System_String_o *type,MethodInfo *method)

{
  UI_MinimapHandler_o *x;
  bool bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07547e52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Textures/MinimapSupplyIcon");
    Il2CppMethodInitialized_07547e52 = '\x01';
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
  if (bVar1) {
    return;
  }
  method_00 = extraout_RDX;
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    method_00 = extraout_RDX_00;
  }
  color.fields.b = 1.0;
  color.fields.a = 1.0;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  UI_MinimapHandler__SetupIcon("Minimap/Textures/MinimapSupplyIcon",color,transform,method_00);
  return;
}


// UI.MinimapHandler$$CreateMinimapIcon
// il2cpp: void UI_MinimapHandler__CreateMinimapIcon (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5d37950
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d37b50: jmp 0x5d37b69

void UI_MinimapHandler__CreateMinimapIcon_5c37950(Characters_BaseCharacter_o *character,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint32_t uVar4;
  UI_MinimapHandler_o *x;
  UI_MinimapHandler_StaticFields *pUVar5;
  System_String_o *pSVar6;
  bool bVar7;
  System_String_o **ppSVar8;
  float *pfVar9;
  UnityEngine_Transform_o *transform;
  UnityEngine_Color_o *pUVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  System_String_o *a;
  UnityEngine_Color_o color;
  undefined8 local_48;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07547e53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Textures/MinimapHumanIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Mine");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Textures/MinimapTitanIcon");
    Il2CppMethodInitialized_07547e53 = '\x01';
  }
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  x = TypeInfo_UI_MinimapHandler->static_fields->Instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (character->fields).Team;
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar7 = System_String__op_Equality(a,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
  if (bVar7) {
    bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((character->klass->_2).typeHierarchyDepth < bVar3) ||
       ((character->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      ppSVar8 = &TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
    }
    else {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      ppSVar8 = &TypeInfo_GameManagers_TeamInfo->static_fields->Human;
    }
    a = *ppSVar8;
  }
  bVar7 = Characters_BaseCharacter__IsMainCharacter(character,(MethodInfo *)0x0);
  pSVar6 = "Mine";
  if (bVar7) {
    if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    }
    pUVar5 = TypeInfo_UI_MinimapHandler->static_fields;
    local_38._0_4_ = (pUVar5->_mineColor).fields.r;
    local_38._4_4_ = (pUVar5->_mineColor).fields.g;
    uVar1 = (pUVar5->_mineColor).fields.b;
    uVar2 = (pUVar5->_mineColor).fields.a;
    a = pSVar6;
  }
  else {
    uVar1 = 0x3f800000;
    uVar2 = 0x3f800000;
    local_38 = 0x3f8000003f800000;
  }
  local_48 = CONCAT44(uVar2,uVar1);
  bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((character->klass->_2).typeHierarchyDepth < bVar3) ||
     ((character->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    uVar4 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
    pSVar6 = "Minimap/Textures/MinimapTitanIcon";
  }
  else {
    uVar4 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
    pSVar6 = "Minimap/Textures/MinimapHumanIcon";
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar7 = System_String__op_Equality(a,TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0)
  ;
  if (bVar7) {
    if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    }
    pUVar10 = &TypeInfo_UI_MinimapHandler->static_fields->_humanColor;
    pfVar9 = &(TypeInfo_UI_MinimapHandler->static_fields->_humanColor).fields.b;
  }
  else {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar7 = System_String__op_Equality
                      (a,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
    if (bVar7) {
      if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
      }
      pUVar10 = &TypeInfo_UI_MinimapHandler->static_fields->_titanColor;
      pfVar9 = &(TypeInfo_UI_MinimapHandler->static_fields->_titanColor).fields.b;
    }
    else {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar7 = System_String__op_Equality
                        (a,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
      if (bVar7) {
        if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
        }
        pUVar10 = &TypeInfo_UI_MinimapHandler->static_fields->_teamBlueColor;
        pfVar9 = &(TypeInfo_UI_MinimapHandler->static_fields->_teamBlueColor).fields.b;
      }
      else {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar7 = System_String__op_Equality
                          (a,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
        if (!bVar7) goto label_05d37cc8;
        if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
        }
        pUVar10 = &TypeInfo_UI_MinimapHandler->static_fields->_teamRedColor;
        pfVar9 = &(TypeInfo_UI_MinimapHandler->static_fields->_teamRedColor).fields.b;
      }
    }
  }
  local_38._0_4_ = (pUVar10->fields).r;
  local_38._4_4_ = (pUVar10->fields).g;
  local_48 = *(undefined8 *)pfVar9;
label_05d37cc8:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)character,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    method_00 = extraout_RDX_00;
  }
  color.fields.b = (float)(undefined4)local_48;
  color.fields.a = (float)local_48._4_4_;
  color.fields.r = (float)(undefined4)local_38;
  color.fields.g = (float)local_38._4_4_;
  UI_MinimapHandler__SetupIcon(pSVar6,color,transform,method_00);
  return;
}


// UI.MinimapHandler$$GetIcons
// il2cpp: System_Collections_Generic_Dictionary_Transform__Transform__o* UI_MinimapHandler__GetIcons (const MethodInfo* method);
// 0x5d36bb0

System_Collections_Generic_Dictionary_Transform__Transform__o *
UI_MinimapHandler__GetIcons(MethodInfo *method)

{
  UI_MinimapHandler_o *pUVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_Transform__Transform__o *pSVar3;
  
  if (Il2CppMethodInitialized_07547e54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e54 = '\x01';
  }
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_Transform__Transform__o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
    }
    pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
    if (pUVar1 == (UI_MinimapHandler_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (pUVar1->fields)._icons;
  }
  return pSVar3;
}


// UI.MinimapHandler$$SetupIcon
// il2cpp: void UI_MinimapHandler__SetupIcon (System_String_o* texture, UnityEngine_Color_o color, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x5d37550

void UI_MinimapHandler__SetupIcon
               (System_String_o *texture,UnityEngine_Color_o color,UnityEngine_Transform_o *transform,
               MethodInfo *method)

{
  System_String_o *path;
  UI_MinimapHandler_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_RawImage_o *__this;
  UnityEngine_Texture_o *value;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  Characters_BaseCharacter_o *x;
  
  if (Il2CppMethodInitialized_07547e55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Prefabs/MinimapIcon");
    Il2CppMethodInitialized_07547e55 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Minimap/Prefabs/MinimapIcon",true,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  UI_LanguageFonts__Localize(pUVar4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset
                      (TypeInfo_Utility_ResourcePaths->static_fields->UI,texture,true,false,(MethodInfo *)0x0)
    ;
    if (__this != (UnityEngine_UI_RawImage_o *)0x0) {
      if ((value != (UnityEngine_Texture_o *)0x0) &&
         (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      UnityEngine_UI_RawImage__set_texture(__this,value,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._23_set_color.methodPtr)
                (__this,color,(__this->klass->vtable)._23_set_color.method);
      if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
      }
      pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
      if (pUVar1 != (UI_MinimapHandler_o *)0x0) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._icons;
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar2,(Il2CppObject *)transform,(Il2CppObject *)pUVar5,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Add);
          if (transform != (UnityEngine_Transform_o *)0x0) {
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)transform,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              x = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar3) {
                if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
                }
                pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
                if ((pUVar1 == (UI_MinimapHandler_o *)0x0) ||
                   (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (pUVar1->fields)._characters,
                   pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
                goto label_05d3793c;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar2,(Il2CppObject *)transform,(Il2CppObject *)x,
                           (MethodInfo_4AAD4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_Add);
              }
              pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
              }
              pUVar1 = TypeInfo_UI_MinimapHandler->static_fields->Instance;
              if ((pUVar1 != (UI_MinimapHandler_o *)0x0) && (pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar5,(pUVar1->fields)._maskTransform,(MethodInfo *)0x0);
                pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                }
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar5,(UnityEngine_Vector3_o)
                                    (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_0753e72b == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                    Il2CppMethodInitialized_0753e72b = '\x01';
                  }
                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_rotation
                              (pUVar5,(UnityEngine_Quaternion_o)
                                      *(UnityEngine_Quaternion_Fields *)
                                       TypeInfo_UnityEngine_Quaternion->static_fields,(MethodInfo *)0x0);
                    pUVar4 = UnityEngine_GameObject__get_gameObject(pUVar4,(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
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
label_05d3793c:
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$Update
// il2cpp: void UI_MinimapHandler__Update (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x5d37d40

void UI_MinimapHandler__Update(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *__this_00;
  Cameras_InGameCamera_o *camera;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  bool bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float y;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o UStack_20;
  
  if (Il2CppMethodInitialized_07547e56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547e56 = '\x01';
  }
  UI_MinimapHandler__RemoveOldIcons(__this,method);
  __this_00 = (__this->fields)._minimapPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    camera = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (camera != (Cameras_InGameCamera_o *)0x0) {
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if (((camera->klass->_2).typeHierarchyDepth < bVar1) ||
         ((camera->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(camera);
      }
      pUVar2 = (camera->fields).Cache;
      if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        position = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
        pUVar2 = (camera->fields).Cache;
        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UStack_20 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
          method_01 = (MethodInfo *)0x0;
          UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_20,(MethodInfo *)0x0);
          euler.fields.x = UVar5.fields.x * 57.29578;
          euler.fields.y = UVar5.fields.y * 57.29578;
          euler.fields.z = UVar5.fields.z * 57.29578;
          UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          euler.fields.y = UVar5.fields.y;
          y = euler.fields.y;
          UI_MinimapHandler__UpdateTiles(__this,position,euler.fields.y,method_01);
          UI_MinimapHandler__UpdateIcons(__this,position,y,method_01);
          UI_MinimapHandler__UpdateCompass(__this,camera,position,euler.fields.y,method_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$UpdateCompass
// il2cpp: void UI_MinimapHandler__UpdateCompass (UI_MinimapHandler_o* __this, Cameras_InGameCamera_o* camera, UnityEngine_Vector3_o position, float y, const MethodInfo* method);
// 0x5d39300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d394ed: jmp 0x5d3953c

void UI_MinimapHandler__UpdateCompass
               (UI_MinimapHandler_o *__this,Cameras_InGameCamera_o *camera,UnityEngine_Vector3_o position,
               float y,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Settings_UISettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Characters_BaseCharacter_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  bool bVar6;
  System_String_o **ppSVar7;
  System_String_array *values;
  System_String_o *pSVar8;
  float fVar9;
  UnityEngine_Vector3_o local_48;
  float local_38;
  
  local_48.fields = position.fields;
  if (g_data_07547e57 == '\0') {
    local_38 = y;
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
    g_data_07547e57 = '\x01';
    y = local_38;
  }
  fVar9 = (float)(~-(uint)(y < 0.0) & (uint)y | (uint)(y + 360.0) & -(uint)(y < 0.0));
  fVar9 = (float)(~-(uint)(360.0 < fVar9) & (uint)fVar9 | (uint)(fVar9 + -360.0) & -(uint)(360.0 < fVar9));
  pSVar8 = "";
  if ((fVar9 < 22.5) || (202.5 < fVar9)) {
    if ((202.5 <= fVar9) && (fVar9 <= 337.5)) {
      if (fVar9 <= 247.5) {
        ppSVar7 = &"SW";
      }
      else if ((fVar9 < 247.5) || (292.5 < fVar9)) {
        if (fVar9 < 292.5) goto label_05d3953c;
        ppSVar7 = &"NW";
      }
      else {
        ppSVar7 = &"W";
      }
      goto label_05d39539;
    }
    if (fVar9 <= 22.5) {
      pSVar8 = "N";
    }
    if (337.5 <= fVar9) {
      pSVar8 = "N";
    }
  }
  else {
    if (fVar9 <= 67.5) {
      ppSVar7 = &"NE";
    }
    else if ((fVar9 < 67.5) || (112.5 < fVar9)) {
      if ((fVar9 < 112.5) || (157.5 < fVar9)) {
        if (fVar9 < 157.5) goto label_05d3953c;
        ppSVar7 = &"S";
      }
      else {
        ppSVar7 = &"SE";
      }
    }
    else {
      ppSVar7 = &"E";
    }
label_05d39539:
    pSVar8 = *ppSVar7;
  }
label_05d3953c:
  pUVar1 = (__this->fields)._compassLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar8,(pUVar1->klass->vtable)._75_set_text.method);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).Coordinates, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar3->fields)._value == 1) {
        if (camera != (Cameras_InGameCamera_o *)0x0) {
          pCVar4 = (camera->fields)._follow;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pCVar4 = (camera->fields)._follow;
            if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
                (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
               (__this_00 = (pUVar5->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
            goto label_05d3974c;
            local_48 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          }
          pUVar1 = (__this->fields)._positionLabel;
          values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
          pSVar8 = System_Single__ToString_54d0a60((float *)&local_48,"F0",(MethodInfo *)0x0)
          ;
          if (values != (System_String_array *)0x0) {
            if ((int)values->max_length != 0) {
              values->m_Items[0] = pSVar8;
              Il2CppCodeGenWriteBarrier(values->m_Items);
              if ((values->max_length & 0xfffffffe) != 0) {
                values->m_Items[1] = ", ";
                Il2CppCodeGenWriteBarrier(values->m_Items + 1);
                pSVar8 = System_Single__ToString_54d0a60
                                   (&local_48.fields.y,"F0",(MethodInfo *)0x0);
                if (2 < (uint)values->max_length) {
                  values->m_Items[2] = pSVar8;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 2);
                  if ((values->max_length & 0xfffffffc) != 0) {
                    values->m_Items[3] = ", ";
                    Il2CppCodeGenWriteBarrier(values->m_Items + 3);
                    pSVar8 = System_Single__ToString_54d0a60
                                       (&local_48.fields.z,"F0",(MethodInfo *)0x0);
                    if (4 < (uint)values->max_length) {
                      values->m_Items[4] = pSVar8;
                      Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                      pSVar8 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar1,pSVar8,(pUVar1->klass->vtable)._75_set_text.method);
                        return;
                      }
                      goto label_05d3974c;
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
        pUVar1 = (__this->fields)._positionLabel;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                    (pUVar1,"",(pUVar1->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
label_05d3974c:
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$RemoveOldIcons
// il2cpp: void UI_MinimapHandler__RemoveOldIcons (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x5d37ec0
// eh: try 0x5d38070..0x5d382fa -> pad 0x5d3836c (+20 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d38339..0x5d3833e -> pad 0x5d3835d cleanup
// eh: try 0x5d38360..0x5d3836a -> pad 0x5d383c5 catch (...) [compiler noexcept guard]
// eh: try 0x5d38386..0x5d3838b -> pad 0x5d383b0 cleanup
// eh: try 0x5d383b3..0x5d383bd -> pad 0x5d383c5 catch (...) [compiler noexcept guard]
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d382ff: jmp 0x5d3836e
// asm:   0x5d38301: jmp 0x5d3836e
// asm:   0x5d38303: jmp 0x5d3836e
// asm:   0x5d38305: jmp 0x5d3836e
// asm:   0x5d38307: jmp 0x5d3836e
// asm:   0x5d38309: jmp 0x5d3836e
// asm:   0x5d3830b: jmp 0x5d3836e
// asm:   0x5d3830d: jmp 0x5d3836e
// asm:   0x5d3830f: jmp 0x5d3836e
// asm:   0x5d38311: jmp 0x5d3836e
// asm:   0x5d38313: jmp 0x5d3836e
// asm:   0x5d38315: jmp 0x5d3836e
// asm:   0x5d38317: jmp 0x5d38321
// asm:   0x5d38319: jmp 0x5d38321
// asm:   0x5d3831b: jmp 0x5d38321
// asm:   0x5d3831d: jmp 0x5d38321
// asm:   0x5d3831f: jmp 0x5d3836e
// asm:   0x5d38321: mov r14, rax
// asm:   0x5d38324: cmp edx, 1
// asm:   0x5d38327: jne 0x5d38360
// asm:   0x5d38329: mov rdi, r14
// asm:   0x5d3832c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d38331: mov rbx, qword ptr [rax]
// asm:   0x5d38334: mov qword ptr [rsp + 8], rbx
// asm:   0x5d38339: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d3833e: lea rax, [rip + 0x155697b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose
// asm:   0x5d38345: mov rsi, qword ptr [rax]
// asm:   0x5d38348: lea rdi, [rsp + 0x40]
// asm:   0x5d3834d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d38352: test rbx, rbx
// asm:   0x5d38355: je 0x5d382c8
// asm:   0x5d3835b: jmp 0x5d383a8
// asm:   0x5d3835d: mov r14, rax
// asm:   0x5d38360: lea rdi, [rsp + 8]
// asm:   0x5d38365: call 0x2fdc640  ; il2cpp_runtime_helper_02fdc640()
// asm:   0x5d3836a: jmp 0x5d383bd
// asm:   0x5d3836c: jmp 0x5d3836e
// asm:   0x5d3836e: mov r14, rax
// asm:   0x5d38371: cmp edx, 1
// asm:   0x5d38374: jne 0x5d383b3
// asm:   0x5d38376: mov rdi, r14
// asm:   0x5d38379: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d3837e: mov rbx, qword ptr [rax]
// asm:   0x5d38381: mov qword ptr [rsp + 8], rbx
// asm:   0x5d38386: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d3838b: lea rax, [rip + 0x1557fde]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
// asm:   0x5d38392: mov rsi, qword ptr [rax]
// asm:   0x5d38395: lea rdi, [rsp + 0x20]
// asm:   0x5d3839a: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d3839f: test rbx, rbx
// asm:   0x5d383a2: je 0x5d3821b
// asm:   0x5d383a8: mov rdi, rbx
// asm:   0x5d383ab: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d383b0: mov r14, rax
// asm:   0x5d383b3: lea rdi, [rsp + 8]
// asm:   0x5d383b8: call 0x2fdc610  ; il2cpp_runtime_helper_02fdc610()
// asm:   0x5d383bd: mov rdi, r14
// asm:   0x5d383c0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d383c5: mov rdi, rax
// asm:   0x5d383c8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MinimapHandler__RemoveOldIcons(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_Transform__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  UnityEngine_Transform_array *pUVar5;
  MethodInfo *pMVar6;
  UnityEngine_Transform_o *x;
  Il2CppObject *key;
  bool bVar7;
  bool bVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Component_o *__this_01;
  undefined1 auStack_80 [16];
  UnityEngine_Transform_o *pUStack_70;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  UnityEngine_Transform_o *pUStack_58;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (Il2CppMethodInitialized_07547e58 == '\0') {
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
    Il2CppMethodInitialized_07547e58 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pUStack_58 = (UnityEngine_Transform_o *)0x0;
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._iconsToRemove;
  if (pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_00 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            (pSVar4,(MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys
                            );
      if (__this_00 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   auStack_80,__this_00,
                   (MethodInfo_511A520 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator
                  );
        pUStack_58 = pUStack_70;
        auStack_68 = (undefined1  [8])auStack_80._0_8_;
        puStack_60 = (undefined1 *)auStack_80._8_8_;
        auStack_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        auStack_80._8_8_ = auStack_68;
label_05d3807a:
        do {
          bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )auStack_68,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
                            );
          x = pUStack_58;
          if (!bVar7) goto label_05d38207;
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar4,(Il2CppObject *)pUStack_58,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_ContainsKey
                            );
          bVar7 = false;
          if (bVar8) {
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar9 = (UnityEngine_Object_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar4,(Il2CppObject *)x,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_get_Item
                               );
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar8 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar8) {
              if (pUVar9 == (UnityEngine_Object_o *)0x0) {
                ThrowNullReferenceException();
              }
              if (*(char *)&(*(uint64_t *)((char *)pUVar9 + 0x78)) == '\0') goto label_05d3811d;
            }
            bVar7 = true;
          }
label_05d3811d:
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7 || bVar8) {
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_01 = (UnityEngine_Component_o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar4,(Il2CppObject *)x,
                                   (MethodInfo_4AAD450 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item
                                  );
            pMVar6 = MethodInfo_System_Collections_Generic_List_Transform_Add;
            pSVar3 = (__this->fields)._iconsToRemove;
            if (pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0) {
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (pSVar3->fields)._items;
              if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = x;
                  Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)x,
                             (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
                }
                if (__this_01 != (UnityEngine_Component_o *)0x0) {
                  pUVar9 = (UnityEngine_Object_o *)
                           UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  UnityEngine_Object__Destroy_69214e0(pUVar9,(MethodInfo *)0x0);
                  goto label_05d3807a;
                }
              }
            }
            ThrowNullReferenceException();
          }
        } while( true );
      }
    }
  }
label_05d382fa:
  ThrowNullReferenceException();
label_05d38207:
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_68,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
            );
  pSVar3 = (__this->fields)._iconsToRemove;
  if (pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Transform_GetEnumerator);
    auStack_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_80._8_8_ = &SStack_48;
    while( true ) {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Transform_MoveNext);
      key = SStack_48.fields._current;
      if (!bVar7) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_Transform_Dispose);
        return;
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar4,SStack_48.fields._current,
                 (MethodInfo_4AAED10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_Remove);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar4,key,
                 (MethodInfo_4AAED10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_Remove);
    }
    ThrowNullReferenceException();
  }
  goto label_05d382fa;
}


// UI.MinimapHandler$$UpdateIcons
// il2cpp: void UI_MinimapHandler__UpdateIcons (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, float y, const MethodInfo* method);
// 0x5d38e70
// eh: try 0x5d38faa..0x5d3926b -> pad 0x5d3928c (+24 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d392b8..0x5d392bd -> pad 0x5d392e2 cleanup
// eh: try 0x5d392e5..0x5d392ef -> pad 0x5d392f7 catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d39087: jmp 0x5d390af
// asm:   0x5d39270: jmp 0x5d392a0
// asm:   0x5d39272: jmp 0x5d392a0
// asm:   0x5d39274: jmp 0x5d392a0
// asm:   0x5d39276: jmp 0x5d392a0
// asm:   0x5d39278: jmp 0x5d392a0
// asm:   0x5d3927a: jmp 0x5d392a0
// asm:   0x5d3927c: jmp 0x5d392a0
// asm:   0x5d3927e: jmp 0x5d392a0
// asm:   0x5d39280: jmp 0x5d392a0
// asm:   0x5d39282: jmp 0x5d392a0
// asm:   0x5d39284: jmp 0x5d392a0
// asm:   0x5d39286: jmp 0x5d392a0
// asm:   0x5d39288: jmp 0x5d392a0
// asm:   0x5d3928a: jmp 0x5d392a0
// asm:   0x5d3928c: jmp 0x5d392a0
// asm:   0x5d3928e: jmp 0x5d392a0
// asm:   0x5d39290: jmp 0x5d392a0
// asm:   0x5d39292: jmp 0x5d392a0
// asm:   0x5d39294: jmp 0x5d392a0
// asm:   0x5d39296: jmp 0x5d392a0
// asm:   0x5d39298: jmp 0x5d392a0
// asm:   0x5d3929a: jmp 0x5d392a0
// asm:   0x5d3929c: jmp 0x5d392a0
// asm:   0x5d3929e: jmp 0x5d392a0
// asm:   0x5d392a0: mov rbx, rax
// asm:   0x5d392a3: cmp edx, 1
// asm:   0x5d392a6: jne 0x5d392e5
// asm:   0x5d392a8: mov rdi, rbx
// asm:   0x5d392ab: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d392b0: mov rbx, qword ptr [rax]
// asm:   0x5d392b3: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5d392b8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d392bd: lea rax, [rip + 0x15570ac]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
// asm:   0x5d392c4: mov rsi, qword ptr [rax]
// asm:   0x5d392c7: lea rdi, [rsp + 0x10]
// asm:   0x5d392cc: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d392d1: test rbx, rbx
// asm:   0x5d392d4: je 0x5d39231
// asm:   0x5d392da: mov rdi, rbx
// asm:   0x5d392dd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d392e2: mov rbx, rax
// asm:   0x5d392e5: lea rdi, [rsp + 0x28]
// asm:   0x5d392ea: call 0x2fdc670  ; il2cpp_runtime_helper_02fdc670()
// asm:   0x5d392ef: mov rdi, rbx
// asm:   0x5d392f2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d392f7: mov rdi, rax
// asm:   0x5d392fa: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MinimapHandler__UpdateIcons
               (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o position,float y,MethodInfo *method)

{
  undefined4 uVar1;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_GameObject_o *pUVar5;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar6;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar7;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_a8;
  undefined1 local_90 [16];
  UnityEngine_Transform_o *local_80;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = position.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  uVar1 = in_XMM1_Db;
  if (Il2CppMethodInitialized_07547e59 == '\0') {
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
    Il2CppMethodInitialized_07547e59 = '\x01';
    uVar1 = in_XMM1_Db;
  }
  local_a8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._currentKey = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
  if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            (pSVar3,(MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Keys
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_90,
             __this_01,
             (MethodInfo_511A520 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Transform_Transform_GetEnumerator)
  ;
  local_a8.fields._currentKey = (Il2CppObject *)local_80;
  local_a8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_90._0_8_;
  local_a8.fields._index = local_90._8_4_;
  local_a8.fields._version = local_90._12_4_;
  local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90._8_8_ = &local_a8;
  while( true ) {
    while( true ) {
      do {
        bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (&local_a8,
                           (MethodInfo_4CE7080 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_MoveNext
                          );
        __this_00 = local_a8.fields._currentKey;
        if (!bVar4) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (&local_a8,
                     (MethodInfo_4CE7070 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Transform_Transform_Dispose
                    );
          return;
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,local_a8.fields._currentKey,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar4);
      if ((UnityEngine_Transform_o *)__this_00 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      local_48._8_4_ = extraout_XMM0_Dc;
      local_48._0_8_ = UVar7.fields._0_8_;
      local_48._12_4_ = extraout_XMM0_Dd;
      UVar7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      local_68 = UVar7.fields.z;
      uStack_64 = uVar1;
      uStack_60 = in_XMM1_Dc;
      uStack_5c = in_XMM1_Dd;
      if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
      }
      _local_78 = ZEXT416((uint)((float)TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize /
                                (__this->fields)._height));
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      local_68 = (local_68 - position.fields.z) * (float)local_78._0_4_;
      fVar6 = (float)local_78._0_4_ * 0.0;
      local_78._4_4_ = (float)local_78._0_4_ * ((float)local_48._0_4_ - (float)local_58._0_4_);
      fStack_70 = (float)local_78._0_4_ * 0.0;
      fStack_6c = (float)local_78._0_4_ * ((float)local_48._4_4_ - (float)local_58._4_4_);
      local_78._0_4_ = fVar6;
      fVar6 = (float)local_78._4_4_ * (float)local_78._4_4_ + local_68 * local_68 + fVar6 * fVar6;
      if (fVar6 < 0.0) {
        fVar6 = sqrtf(fVar6);
      }
      else {
        fVar6 = SQRT(fVar6);
      }
      uVar1 = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      if ((float)TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize * 0.5 < fVar6) break;
      if (__this_02 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (!bVar4) {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
        ;
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      }
      UVar7.fields.y = local_68;
      UVar7.fields.x = (float)local_78._4_4_;
      UVar7.fields.z = (float)local_78._0_4_;
      UnityEngine_Transform__set_localPosition(__this_02,UVar7,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e72b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_0753e72b = '\x01';
      }
      uVar1 = ((UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields)->w;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      UnityEngine_Transform__set_rotation
                (__this_02,
                 (UnityEngine_Quaternion_o)
                 *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                 (MethodInfo *)0x0);
    }
    if (__this_02 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) break;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$UpdateTiles
// il2cpp: void UI_MinimapHandler__UpdateTiles (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, float rotation, const MethodInfo* method);
// 0x5d383d0
// eh: try 0x5d38710..0x5d38da7 -> pad 0x5d38db7 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d38ddd..0x5d38de2 -> pad 0x5d38e01 cleanup
// eh: try 0x5d38e04..0x5d38e0e -> pad 0x5d38e67 catch (...) [compiler noexcept guard]
// eh: try 0x5d38e28..0x5d38e2d -> pad 0x5d38e52 cleanup
// eh: try 0x5d38e55..0x5d38e5f -> pad 0x5d38e67 catch (...) [compiler noexcept guard]
// asm: 66 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d385a6: movaps xmm2, xmmword ptr [rsp + 0x90]
// asm:   0x5d385ae: movss xmm2, xmm4
// asm:   0x5d385b2: movaps xmm4, xmm2
// asm:   0x5d3860b: jmp 0x5d38c64
// asm:   0x5d3873b: jmp 0x5d3875c
// asm:   0x5d38789: jmp 0x5d387a7
// asm:   0x5d38876: jmp 0x5d3889b
// asm:   0x5d388cf: jmp 0x5d388ff
// asm:   0x5d38ae9: nop dword ptr [rax]
// asm:   0x5d38da7: jmp 0x5d38dc5
// asm:   0x5d38da9: jmp 0x5d38dc5
// asm:   0x5d38dab: jmp 0x5d38dc5
// asm:   0x5d38dad: jmp 0x5d38dc5
// asm:   0x5d38daf: jmp 0x5d38dc5
// asm:   0x5d38db1: jmp 0x5d38dc5
// asm:   0x5d38db3: jmp 0x5d38e10
// asm:   0x5d38db5: jmp 0x5d38e10
// asm:   0x5d38db7: jmp 0x5d38dc5
// asm:   0x5d38db9: jmp 0x5d38e10
// asm:   0x5d38dbb: jmp 0x5d38e10
// asm:   0x5d38dbd: jmp 0x5d38e10
// asm:   0x5d38dbf: jmp 0x5d38e10
// asm:   0x5d38dc1: jmp 0x5d38e10
// asm:   0x5d38dc3: jmp 0x5d38e10
// asm:   0x5d38dc5: mov r12, rax
// asm:   0x5d38dc8: cmp edx, 1
// asm:   0x5d38dcb: jne 0x5d38e04
// asm:   0x5d38dcd: mov rdi, r12
// asm:   0x5d38dd0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d38dd5: mov rbx, qword ptr [rax]
// asm:   0x5d38dd8: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5d38ddd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d38de2: lea rax, [rip + 0x1557647]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_Dispose
// asm:   0x5d38de9: mov rsi, qword ptr [rax]
// asm:   0x5d38dec: lea rdi, [rsp + 0x50]
// asm:   0x5d38df1: call 0x4df67a0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int__object___Dispose()
// asm:   0x5d38df6: test rbx, rbx
// asm:   0x5d38df9: je 0x5d3891d
// asm:   0x5d38dff: jmp 0x5d38e4a
// asm:   0x5d38e01: mov r12, rax
// asm:   0x5d38e04: lea rdi, [rsp + 0x10]
// asm:   0x5d38e09: call 0x2fdc6a0  ; il2cpp_runtime_helper_02fdc6a0()
// asm:   0x5d38e0e: jmp 0x5d38e5f
// asm:   0x5d38e10: mov r12, rax
// asm:   0x5d38e13: cmp edx, 1
// asm:   0x5d38e16: jne 0x5d38e55
// asm:   0x5d38e18: mov rdi, r12
// asm:   0x5d38e1b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d38e20: mov rbx, qword ptr [rax]
// asm:   0x5d38e23: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5d38e28: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d38e2d: lea rax, [rip + 0x1555fac]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_Dispose
// asm:   0x5d38e34: mov rsi, qword ptr [rax]
// asm:   0x5d38e37: lea rdi, [rsp + 0x70]
// asm:   0x5d38e3c: call 0x4d65560  ; System_Collections_Generic_List_Enumerator_Vector2Int___Dispose()
// asm:   0x5d38e41: test rbx, rbx
// asm:   0x5d38e44: je 0x5d38a58
// asm:   0x5d38e4a: mov rdi, rbx
// asm:   0x5d38e4d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d38e52: mov r12, rax
// asm:   0x5d38e55: lea rdi, [rsp + 0x10]
// asm:   0x5d38e5a: call 0x2fdc6d0  ; il2cpp_runtime_helper_02fdc6d0()
// asm:   0x5d38e5f: mov rdi, r12
// asm:   0x5d38e62: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d38e67: mov rdi, rax
// asm:   0x5d38e6a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MinimapHandler__UpdateTiles
               (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o position,float rotation,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint32_t uVar3;
  int32_t width;
  System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *pSVar4;
  UnityEngine_Vector2Int_array *pUVar5;
  System_Collections_Generic_HashSet_Vector2Int__o *pSVar6;
  UnityEngine_UI_RawImage_array *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_Generic_Queue_Vector2Int__o *pSVar9;
  Cameras_MinimapCamera_o *__this_00;
  MethodInfo *pMVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  System_Collections_Generic_List_Vector2Int__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  UnityEngine_Texture2D_o *pUVar16;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector2Int_o tile;
  uint uVar17;
  MethodInfo *method_00;
  UnityEngine_Vector2Int_Fields UVar18;
  ulong uVar19;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o value_01;
  undefined1 local_d8 [16];
  UnityEngine_Vector2Int_Fields local_c8;
  UnityEngine_Vector2Int_Fields local_c0;
  undefined1 local_b8 [16];
  float local_9c;
  undefined1 local_98 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_90;
  UnityEngine_Vector2Int_Fields local_88;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_70;
  UnityEngine_Vector2Int_Fields local_68;
  undefined1 local_58 [16];
  float local_48;
  
  local_48 = position.fields.z;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = position.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  fVar22 = position.fields.x;
  local_9c = rotation;
  if (g_data_07547e5a == '\0') {
    local_b8._8_4_ = in_XMM0_Dc;
    local_b8._0_8_ = position.fields._0_8_;
    local_b8._12_4_ = in_XMM0_Dd;
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
    g_data_07547e5a = '\x01';
    fVar22 = (float)local_b8._0_4_;
  }
  auVar11 = local_b8;
  local_98 = (undefined1  [8])0x0;
  pSStack_90 = (System_Collections_Generic_List_Enumerator_T__o *)0x0;
  local_88.m_X = 0;
  local_88.m_Y = 0;
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__o *)0x0;
  local_68.m_X = 0;
  local_68.m_Y = 0;
  fVar2 = (__this->fields)._height;
  fVar21 = fVar2 * 0.5;
  if (fVar22 <= 0.0) {
    if (fVar22 < 0.0) {
      fVar22 = fVar22 - fVar21;
    }
  }
  else {
    fVar22 = fVar22 + fVar21;
  }
  if (local_48 <= 0.0) {
    fVar20 = local_48;
    if (local_48 < 0.0) {
      fVar20 = local_48 - fVar21;
    }
  }
  else {
    fVar20 = fVar21 + local_48;
  }
  iVar13 = (int)(fVar20 / fVar2);
  local_b8._0_4_ = (BADTYPE)(fVar22 / fVar2);
  local_b8._4_4_ = 0;
  local_b8._8_8_ = auVar11._8_8_;
  local_c0.m_Y = iVar13;
  local_c0.m_X = local_b8._0_4_;
  if (local_c0 == (__this->fields)._currentTile.fields) {
    if ((__this->fields)._needUpdateTiles != false) goto label_05d38618;
  }
  else {
    (__this->fields)._needUpdateTiles = true;
label_05d38618:
    (__this->fields)._needUpdateTiles = false;
    (__this->fields)._currentTile.fields = local_c0;
    (__this->fields)._currentTileCenter.fields.x = (float)(int)local_b8._0_4_ * fVar2;
    (__this->fields)._currentTileCenter.fields.y = fVar2;
    (__this->fields)._currentTileCenter.fields.z = (float)iVar13 * fVar2;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2Int);
    System_Collections_Generic_List_Vector2Int____ctor
              (__this_01,(MethodInfo_39FBE30 *)MethodInfo_System_Collections_Generic_List_Vector2Int_ctor);
    pSVar4 = (__this->fields)._tileTextures;
    if ((pSVar4 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) ||
       (__this_02 = System_Collections_Generic_Dictionary_Vector2Int__object___get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                               (MethodInfo_4B14390 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Keys)
       , __this_02 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto label_05d38d84;
    System_Collections_Generic_Dictionary_KeyCollection_Vector2Int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_d8,
               __this_02,
               (MethodInfo_5125010 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Vector2Int_Texture2D_GetEnumerator
              );
    local_88 = local_c8;
    local_98 = (undefined1  [8])local_d8._0_8_;
    pSStack_90 = (System_Collections_Generic_List_Enumerator_T__o *)local_d8._8_8_;
    local_d8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_d8._8_8_ = local_98;
    if (__this_01 == (System_Collections_Generic_List_Vector2Int__o *)0x0) {
      do {
        bVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int__object___MoveNext
                           ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                            local_98,(MethodInfo_4CF67B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_MoveNext
                           );
        UVar18 = local_88;
        if (!bVar12) goto label_05d38909;
        if (Il2CppMethodInitialized_07541ba3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_07541ba3 = '\x01';
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        uVar14 = UVar18.m_X - local_b8._0_4_;
        uVar17 = -uVar14;
        if ((int)uVar17 < 0) {
          uVar17 = uVar14;
        }
        if (2 < uVar17) break;
        if (Il2CppMethodInitialized_07541ba3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_07541ba3 = '\x01';
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        uVar14 = UVar18.m_Y - iVar13;
        uVar17 = -uVar14;
        if ((int)uVar17 < 0) {
          uVar17 = uVar14;
        }
      } while (uVar17 < 3);
label_05d38d89:
      ThrowNullReferenceException();
    }
label_05d3870c:
    bVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int__object___MoveNext
                       ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                        local_98,(MethodInfo_4CF67B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_MoveNext
                       );
    UVar18 = local_88;
    if (bVar12) {
      if (Il2CppMethodInitialized_07541ba3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_07541ba3 = '\x01';
        uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      uVar14 = UVar18.m_X - local_b8._0_4_;
      uVar17 = -uVar14;
      if ((int)uVar17 < 0) {
        uVar17 = uVar14;
      }
      if (uVar17 < 3) goto code_r0x05d38773;
      goto label_05d387c7;
    }
label_05d38909:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int__object___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_98,
               (MethodInfo_4CF67A0 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Vector2Int_Texture2D_Dispose
              );
    if (__this_01 == (System_Collections_Generic_List_Vector2Int__o *)0x0) goto label_05d38d84;
    System_Collections_Generic_List_Vector2Int___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,__this_01,
               (MethodInfo_39FD530 *)MethodInfo_System_Collections_Generic_List_Vector2Int_GetEnumerator);
    local_68 = local_c8;
    local_78 = (undefined1  [8])local_d8._0_8_;
    pSStack_70 = (System_Collections_Generic_List_Enumerator_T__o *)local_d8._8_8_;
    local_d8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_d8._8_8_ = (System_Collections_Generic_List_Enumerator_T__o *)local_78;
    while( true ) {
      bVar12 = System_Collections_Generic_List_Enumerator_Vector2Int___MoveNext
                         ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                          (MethodInfo_4C65570 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_MoveNext);
      UVar18 = local_68;
      if (!bVar12) break;
      pSVar4 = (__this->fields)._tileTextures;
      if (pSVar4 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar16 = System_Collections_Generic_Dictionary_Vector2Int__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                           (UnityEngine_Vector2Int_o)local_68,
                           (MethodInfo_4B146F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
      pSVar4 = (__this->fields)._tileTextures;
      if (pSVar4 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_Vector2Int__object___Remove
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                 (UnityEngine_Vector2Int_o)UVar18,
                 (MethodInfo_4B15E50 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_Remove);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar16,(MethodInfo *)0x0);
      pSVar6 = (__this->fields)._finishedTiles;
      if (pSVar6 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar12 = System_Collections_Generic_HashSet_Vector2Int___Contains
                         (pSVar6,(UnityEngine_Vector2Int_o)UVar18,
                          (MethodInfo_4FC5AF0 *)
                          MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Contains);
      if (bVar12) {
        pSVar6 = (__this->fields)._finishedTiles;
        if (pSVar6 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_Vector2Int___Remove
                  (pSVar6,(UnityEngine_Vector2Int_o)UVar18,
                   (MethodInfo_4FC5DB0 *)MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Remove);
      }
    }
    System_Collections_Generic_List_Enumerator_Vector2Int___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
               (MethodInfo_4C65560 *)MethodInfo_System_Collections_Generic_List_Enumerator_Vector2Int_Dispose)
    ;
    pSVar9 = (__this->fields)._createTileQueue;
    if (pSVar9 == (System_Collections_Generic_Queue_Vector2Int__o *)0x0) goto label_05d38d84;
    System_Collections_Generic_Queue_Vector2Int___Clear
              (pSVar9,(MethodInfo_3E75EB0 *)MethodInfo_System_Collections_Generic_Queue_Vector2Int_Clear);
    pSVar6 = (__this->fields)._finishedTiles;
    if (pSVar6 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) goto label_05d38d84;
    bVar12 = System_Collections_Generic_HashSet_Vector2Int___Contains
                       (pSVar6,(UnityEngine_Vector2Int_o)local_c0,
                        (MethodInfo_4FC5AF0 *)
                        MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Contains);
    if (!bVar12) {
      pSVar9 = (__this->fields)._createTileQueue;
      if (pSVar9 == (System_Collections_Generic_Queue_Vector2Int__o *)0x0) goto label_05d38d84;
      System_Collections_Generic_Queue_Vector2Int___Enqueue
                (pSVar9,(UnityEngine_Vector2Int_o)local_c0,
                 (MethodInfo_3E761A0 *)MethodInfo_System_Collections_Generic_Queue_Vector2Int_Enqueue);
    }
    auVar11 = local_b8;
    iVar15 = local_b8._0_4_;
    local_b8._4_4_ = 0;
    local_b8._0_4_ = iVar15 - 1;
    local_b8._8_8_ = auVar11._8_8_;
    uVar19 = 0;
    do {
      pSVar4 = (__this->fields)._tileTextures;
      if (pSVar4 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) goto label_05d38d84;
      iVar15 = (int)((uVar19 & 0xffffffff) / 3);
      UVar18.m_X = local_b8._0_4_ + iVar15 * -3 + (int)uVar19;
      UVar18.m_Y = (iVar13 + 1) - iVar15;
      bVar12 = System_Collections_Generic_Dictionary_Vector2Int__object___ContainsKey
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                          (UnityEngine_Vector2Int_o)UVar18,
                          (MethodInfo_4B149B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey);
      if (!bVar12) {
        pSVar4 = (__this->fields)._tileTextures;
        if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
        }
        width = TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize;
        pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
        UnityEngine_Texture2D___ctor_68efe30(pUVar16,width,width,3,false,(MethodInfo *)0x0);
        if (pSVar4 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0)
        goto label_05d38d84;
        System_Collections_Generic_Dictionary_Vector2Int__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                   (UnityEngine_Vector2Int_o)UVar18,(Il2CppObject *)pUVar16,
                   (MethodInfo_4B14780 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_set_Item);
      }
      pSVar6 = (__this->fields)._finishedTiles;
      if (pSVar6 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) goto label_05d38d84;
      bVar12 = System_Collections_Generic_HashSet_Vector2Int___Contains
                         (pSVar6,(UnityEngine_Vector2Int_o)UVar18,
                          (MethodInfo_4FC5AF0 *)
                          MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Contains);
      if ((!bVar12) && (UVar18 != local_c0)) {
        pSVar9 = (__this->fields)._createTileQueue;
        if (pSVar9 == (System_Collections_Generic_Queue_Vector2Int__o *)0x0) goto label_05d38d84;
        System_Collections_Generic_Queue_Vector2Int___Enqueue
                  (pSVar9,(UnityEngine_Vector2Int_o)UVar18,
                   (MethodInfo_3E761A0 *)MethodInfo_System_Collections_Generic_Queue_Vector2Int_Enqueue);
      }
      pSVar4 = (__this->fields)._tileTextures;
      if (pSVar4 == (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) goto label_05d38d84;
      value = (UnityEngine_Texture_o *)
              System_Collections_Generic_Dictionary_Vector2Int__object___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                         (UnityEngine_Vector2Int_o)UVar18,
                         (MethodInfo_4B146F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
      pUVar7 = (__this->fields)._images;
      if (pUVar7 == (UnityEngine_UI_RawImage_array *)0x0) goto label_05d38d84;
      if ((uint)pUVar7->max_length <= uVar19) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar7->m_Items[uVar19] == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d38d84;
      UnityEngine_UI_RawImage__set_texture(pUVar7->m_Items[uVar19],value,(MethodInfo *)0x0);
      uVar19 = uVar19 + 1;
    } while (uVar19 != 9);
  }
  if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
  }
  pUVar8 = (__this->fields)._tileTransform;
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    fVar22 = (float)TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize / (__this->fields)._height;
    value_00.fields.x = fVar22 * ((__this->fields)._currentTileCenter.fields.x - (float)local_58._0_4_);
    value_00.fields.y = fVar22 * ((__this->fields)._currentTileCenter.fields.z - local_48);
    value_00.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(pUVar8,value_00,(MethodInfo *)0x0);
    pUVar8 = (__this->fields)._maskTransform;
    local_d8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_d8._8_4_ = local_9c * 0.017453292;
    value_01 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)local_d8,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localRotation(pUVar8,value_01,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._createTileQueue;
      if (pSVar9 != (System_Collections_Generic_Queue_Vector2Int__o *)0x0) {
        if (0 < (pSVar9->fields)._size) {
          __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
          if (__this_00 == (Cameras_MinimapCamera_o *)0x0) goto label_05d38d84;
          bVar12 = Cameras_MinimapCamera__Ready(__this_00,(MethodInfo *)0x0);
          if (bVar12) {
            pSVar9 = (__this->fields)._createTileQueue;
            if (pSVar9 == (System_Collections_Generic_Queue_Vector2Int__o *)0x0) goto label_05d38d84;
            tile = System_Collections_Generic_Queue_Vector2Int___Dequeue
                             (pSVar9,(MethodInfo_3E76350 *)
                                     MethodInfo_System_Collections_Generic_Queue_Vector2Int_Dequeue);
            UI_MinimapHandler__CreateTile(__this,tile,method_00);
          }
        }
        return;
      }
    }
  }
label_05d38d84:
  ThrowNullReferenceException();
code_r0x05d38773:
  if (Il2CppMethodInitialized_07541ba3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541ba3 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar14 = UVar18.m_Y - iVar13;
  uVar17 = -uVar14;
  if ((int)uVar17 < 0) {
    uVar17 = uVar14;
  }
  if (2 < uVar17) {
label_05d387c7:
    pMVar10 = MethodInfo_System_Collections_Generic_List_Vector2Int_Add;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (__this_01->fields)._items;
    if (pUVar5 == (UnityEngine_Vector2Int_array *)0x0) goto label_05d38d89;
    uVar17 = (__this_01->fields)._size;
    if (uVar17 < (uint)pUVar5->max_length) {
      (__this_01->fields)._size = uVar17 + 1;
      pUVar5->m_Items[(int)uVar17].fields = UVar18;
    }
    else {
      System_Collections_Generic_List_Vector2Int___AddWithResize
                (__this_01,(UnityEngine_Vector2Int_o)UVar18,
                 (MethodInfo_39FC740 *)pMVar10->klass->rgctx_data[0xe].method);
    }
  }
  goto label_05d3870c;
}


// UI.MinimapHandler$$GetCurrentTile
// il2cpp: UnityEngine_Vector2Int_o UI_MinimapHandler__GetCurrentTile (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5d39760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3978e: movss xmm0, xmm4

UnityEngine_Vector2Int_o
UI_MinimapHandler__GetCurrentTile
          (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2Int_o UVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = position.fields.z;
  fVar5 = position.fields.x;
  fVar1 = (__this->fields)._height;
  fVar4 = fVar1 * 0.5;
  if (fVar5 <= 0.0) {
    if (fVar5 < 0.0) {
      fVar5 = fVar5 - fVar4;
    }
  }
  else {
    fVar5 = fVar5 + fVar4;
  }
  if (fVar3 <= 0.0) {
    if (fVar3 < 0.0) {
      fVar3 = fVar3 - fVar4;
    }
  }
  else {
    fVar3 = fVar3 + fVar4;
  }
  UVar2.fields.m_X = (int)(fVar5 / fVar1);
  UVar2.fields.m_Y = (int)(fVar3 / fVar1);
  return (UnityEngine_Vector2Int_o)UVar2.fields;
}


// UI.MinimapHandler$$GetTilePosition
// il2cpp: UnityEngine_Vector3_o UI_MinimapHandler__GetTilePosition (UI_MinimapHandler_o* __this, UnityEngine_Vector2Int_o tile, const MethodInfo* method);
// 0x5d397d0

UnityEngine_Vector3_o
UI_MinimapHandler__GetTilePosition
          (UI_MinimapHandler_o *__this,UnityEngine_Vector2Int_o tile,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  
  fVar1 = (__this->fields)._height;
  UVar2.fields.z = (float)tile.fields.m_Y * fVar1;
  UVar2.fields.x = (float)tile.fields.m_X * fVar1;
  UVar2.fields.y = fVar1;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// UI.MinimapHandler$$CreateTile
// il2cpp: void UI_MinimapHandler__CreateTile (UI_MinimapHandler_o* __this, UnityEngine_Vector2Int_o tile, const MethodInfo* method);
// 0x5d397f0

void UI_MinimapHandler__CreateTile
               (UI_MinimapHandler_o *__this,UnityEngine_Vector2Int_o tile,MethodInfo *method)

{
  float height;
  System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *pSVar1;
  Cameras_MinimapCamera_o *__this_00;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  bool bVar2;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_07547e5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547e5b = '\x01';
  }
  pSVar1 = (__this->fields)._tileTextures;
  if (pSVar1 != (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_Vector2Int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,tile,
                       (MethodInfo_4B149B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ContainsKey);
    if (!bVar2) {
      return;
    }
    pSVar1 = (__this->fields)._tileTextures;
    if (pSVar1 != (System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *)0x0) {
      texture = System_Collections_Generic_Dictionary_Vector2Int__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,tile,
                           (MethodInfo_4B146F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        return;
      }
      __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera;
      if (__this_00 != (Cameras_MinimapCamera_o *)0x0) {
        height = (__this->fields)._height;
        position.fields.x = (float)tile.fields.m_X * height;
        position.fields.z = (float)tile.fields.m_Y * height;
        position.fields.y = height;
        Cameras_MinimapCamera__TakeSnapshot(__this_00,position,height,texture,true,false,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._finishedTiles;
        if (__this_01 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
          System_Collections_Generic_HashSet_Vector2Int___Add
                    (__this_01,tile,
                     (MethodInfo_4FC67E0 *)MethodInfo_System_Collections_Generic_HashSet_Vector2Int_Add);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MinimapHandler$$.ctor
// il2cpp: void UI_MinimapHandler___ctor (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x5d39930

void UI_MinimapHandler___ctor(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_array *pUVar1;
  System_Collections_Generic_Dictionary_Vector2Int__Texture2D__o *__this_00;
  System_Collections_Generic_Queue_Vector2Int__o *__this_01;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_02;
  System_Collections_Generic_Dictionary_Transform__Transform__o *__this_03;
  System_Collections_Generic_Dictionary_Transform__BaseCharacter__o *__this_04;
  System_Collections_Generic_List_Transform__o *__this_05;
  
  if (Il2CppMethodInitialized_07547e5c == '\0') {
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
    Il2CppMethodInitialized_07547e5c = '\x01';
  }
  pUVar1 = (UnityEngine_UI_RawImage_array *)SZArrayNew(TypeInfo_UnityEngine_UI_RawImage_array,9);
  (__this->fields)._images = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._images);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D);
  System_Collections_Generic_Dictionary_Vector2Int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4B13B70 *)MethodInfo_System_Collections_Generic_Dictionary_Vector2Int_Texture2D_ctor)
  ;
  (__this->fields)._tileTextures = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tileTextures);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_Vector2Int);
  System_Collections_Generic_Queue_Vector2Int____ctor
            (__this_01,(MethodInfo_3E75BE0 *)MethodInfo_System_Collections_Generic_Queue_Vector2Int_ctor);
  (__this->fields)._createTileQueue = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._createTileQueue);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Vector2Int)
  ;
  System_Collections_Generic_HashSet_Vector2Int____ctor
            (__this_02,(MethodInfo_4FC5270 *)MethodInfo_System_Collections_Generic_HashSet_Vector2Int_ctor);
  (__this->fields)._finishedTiles = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._finishedTiles);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Transform_Transform_ctor);
  (__this->fields)._icons = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icons);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Transform_BaseCharacter_ctor);
  (__this->fields)._characters = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characters);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._iconsToRemove = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._iconsToRemove);
  (__this->fields)._needUpdateTiles = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MinimapHandler$$.cctor
// il2cpp: void UI_MinimapHandler___cctor (const MethodInfo* method);
// 0x5d39b70

void UI_MinimapHandler___cctor(MethodInfo *method)

{
  UI_MinimapHandler_StaticFields *pUVar1;
  UI_MinimapHandler_c *pUVar2;
  
  if (Il2CppMethodInitialized_07547e5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    Il2CppMethodInitialized_07547e5d = '\x01';
  }
  pUVar2 = TypeInfo_UI_MinimapHandler;
  pUVar1 = TypeInfo_UI_MinimapHandler->static_fields;
  (pUVar1->_mineColor).fields.r = 0.455;
  (pUVar1->_mineColor).fields.g = 0.608;
  (pUVar1->_mineColor).fields.b = 0.816;
  (pUVar1->_mineColor).fields.a = 1.0;
  pUVar1 = pUVar2->static_fields;
  (pUVar1->_titanColor).fields.r = 1.0;
  (pUVar1->_titanColor).fields.g = 1.0;
  (pUVar1->_titanColor).fields.b = 0.44;
  (pUVar1->_titanColor).fields.a = 1.0;
  pUVar1 = pUVar2->static_fields;
  (pUVar1->_humanColor).fields.r = 0.58;
  (pUVar1->_humanColor).fields.g = 1.0;
  (pUVar1->_humanColor).fields.b = 0.5;
  (pUVar1->_humanColor).fields.a = 1.0;
  pUVar1 = pUVar2->static_fields;
  (pUVar1->_teamBlueColor).fields.r = 0.0;
  (pUVar1->_teamBlueColor).fields.g = 0.67;
  (pUVar1->_teamBlueColor).fields.b = 1.0;
  (pUVar1->_teamBlueColor).fields.a = 1.0;
  pUVar1 = pUVar2->static_fields;
  (pUVar1->_teamRedColor).fields.r = 0.87;
  (pUVar1->_teamRedColor).fields.g = 0.25;
  (pUVar1->_teamRedColor).fields.b = 0.25;
  (pUVar1->_teamRedColor).fields.a = 1.0;
  return;
}


