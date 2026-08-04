// Type: UI.MinimapHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MinimapHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MinimapHandler.cs
// --------------------------------

// UI.MinimapHandler$$Awake
// il2cpp: void UI_MinimapHandler__Awake (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x43d3500

void UI_MinimapHandler__Awake(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_RawImage_array *pUVar3;
  UnityEngine_Object_o *x;
  uint in_EAX;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  System_String_o *pSVar7;
  UnityEngine_UI_RawImage_o *pUVar8;
  long lVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  uint uVar10;
  UnityEngine_Color_o color;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (g_data_057ae43c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"CompassLabel");
    il2cpp_runtime_helper_023445d0(&"Mask");
    il2cpp_runtime_helper_023445d0(&"PositionLabel");
    il2cpp_runtime_helper_023445d0(&"Tiles");
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057ae43c = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined8 **)(TypeInfo_MinimapHandler + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MinimapHandler + 0xb8));
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) {
    (__this->fields)._height = *(float *)(lVar9 + 0x14);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar5 = *(UnityEngine_Transform_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((pUVar5->klass->_2).naturalAligment < bVar1) ||
         ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043d38d0;
      (__this->fields)._minimapPanel = (UnityEngine_GameObject_o *)pUVar5[0x14].fields.m_CachedPtr;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._minimapPanel);
      pUVar2 = (__this->fields)._minimapPanel;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Transform__Find(pUVar5,"PositionLabel",(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            pUVar6 = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
            (__this->fields)._positionLabel = pUVar6;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._positionLabel);
            pUVar2 = (__this->fields)._minimapPanel;
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = UnityEngine_Transform__Find(pUVar5,"CompassLabel",(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  pUVar6 = (UnityEngine_UI_Text_o *)
                           UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
                  (__this->fields)._compassLabel = pUVar6;
                  il2cpp_runtime_helper_022b4080(&(__this->fields)._compassLabel);
                  pUVar2 = (__this->fields)._minimapPanel;
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Mask",(MethodInfo *)0x0);
                      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                        pUVar5 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                        (__this->fields)._maskTransform = pUVar5;
                        il2cpp_runtime_helper_022b4080(&(__this->fields)._maskTransform);
                        pUVar5 = (__this->fields)._maskTransform;
                        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                          uVar10 = 0;
                          pUVar5 = UnityEngine_Transform__Find(pUVar5,"Tiles",(MethodInfo *)0x0);
                          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                            pUVar5 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                            (__this->fields)._tileTransform = pUVar5;
                            il2cpp_runtime_helper_022b4080(&(__this->fields)._tileTransform);
                            uStack_38 = uStack_38 & 0xffffffff;
                            while( true ) {
                              pUVar3 = (__this->fields)._images;
                              pUVar5 = (__this->fields)._tileTransform;
                              pSVar7 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
                              pSVar7 = System_String__Concat_3ae5ba0("Image",pSVar7,(MethodInfo *)0x0);
                              if (pUVar5 == (UnityEngine_Transform_o *)0x0) break;
                              pUVar5 = UnityEngine_Transform__Find(pUVar5,pSVar7,(MethodInfo *)0x0);
                              if (pUVar5 == (UnityEngine_Transform_o *)0x0) break;
                              pUVar8 = (UnityEngine_UI_RawImage_o *)
                                       UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar5,MethodInfo_RawImage_GetComponent_RawImage);
                              if (pUVar3 == (UnityEngine_UI_RawImage_array *)0x0) break;
                              if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
                                lVar9 = il2cpp_runtime_helper_023051f0(pUVar8);
                                if (lVar9 == 0) goto label_043d38c1;
                              }
                              if ((uint)pUVar3->max_length <= uVar10) goto label_043d38bc;
                              pUVar3->m_Items[(int)uVar10] = pUVar8;
                              il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar10);
                              uVar10 = uStack_38._4_4_ + 1;
                              uStack_38 = CONCAT44(uVar10,(uint)uStack_38);
                              if (8 < (int)uVar10) {
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
label_043d38bc:
  il2cpp_runtime_helper_022b2ca0();
label_043d38c1:
  pUVar5 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
label_043d38d0:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae43d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Minimap/Textures/MinimapSupplyIcon");
    g_data_057ae43d = '\x01';
  }
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MinimapHandler + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  color.fields.b = 1.0;
  color.fields.a = 1.0;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  UI_MinimapHandler__SetupIcon("Minimap/Textures/MinimapSupplyIcon",color,pUVar5,method_00);
  return;
}


// UI.MinimapHandler$$CreateMinimapIcon
// il2cpp: void UI_MinimapHandler__CreateMinimapIcon (UnityEngine_Transform_o* transform, System_String_o* type, const MethodInfo* method);
// 0x43d38e0

void UI_MinimapHandler__CreateMinimapIcon
               (UnityEngine_Transform_o *transform,System_String_o *type,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Color_o color;
  
  if (g_data_057ae43d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Minimap/Textures/MinimapSupplyIcon");
    g_data_057ae43d = '\x01';
  }
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MinimapHandler + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x43d3d70

void UI_MinimapHandler__CreateMinimapIcon_42d3d70(Characters_BaseCharacter_o *character,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  int32_t length;
  UI_MinimapHandler_o *x;
  UnityEngine_GameObject_o *__this;
  long lVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Il2CppClass *pIVar8;
  UnityEngine_UI_Text_o *pUVar9;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  UnityEngine_Vector3_Fields UVar10;
  UnityEngine_Vector3_Fields UVar11;
  bool bVar12;
  System_String_o *pSVar13;
  bool_conflict bVar14;
  uint uVar15;
  undefined8 *puVar16;
  UnityEngine_Transform_o *pUVar17;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  UnityEngine_Object_o *x_00;
  UnityEngine_Component_o *__this_07;
  UnityEngine_Object_o *pUVar18;
  long *plVar19;
  System_String_array *values;
  System_String_o *pSVar20;
  undefined8 *puVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar22;
  Characters_BaseCharacter_o *pCVar23;
  undefined8 uVar24;
  UI_MinimapHandler_o *__this_08;
  System_String_array *x_01;
  System_String_array *format;
  UnityEngine_Component_o *unaff_R14;
  float __this_09;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  UnityEngine_Color_o color;
  UnityEngine_Quaternion_o rotation;
  undefined1 auVar30 [12];
  UnityEngine_Vector3_Fields UVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_Fields UVar33;
  _union_249689 _Var34;
  Il2CppType *pIVar35;
  UnityEngine_Object_o *key;
  _union_249689 _Stack_f8;
  Il2CppType *pIStack_f0;
  UnityEngine_Object_o *pUStack_e8;
  _union_249689 _Stack_d8;
  Il2CppType *pIStack_d0;
  UnityEngine_Object_o *pUStack_c8;
  UI_MinimapHandler_o *pUStack_c0;
  long *plStack_b8;
  undefined1 auStack_90 [8];
  float fStack_88;
  float local_84;
  undefined8 local_80;
  float local_70;
  float fStack_6c;
  System_String_o *local_48;
  System_String_o *local_38;
  
  if (g_data_057ae43e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"Minimap/Textures/MinimapHumanIcon");
    il2cpp_runtime_helper_023445d0(&"Mine");
    il2cpp_runtime_helper_023445d0(&"Minimap/Textures/MinimapTitanIcon");
    g_data_057ae43e = '\x01';
  }
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UI_MinimapHandler_o *)**(undefined8 **)(TypeInfo_MinimapHandler + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar22 = (MethodInfo *)0x0;
  __this_08 = x;
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pSVar20 = *(System_String_o **)&(character->fields).AI;
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar14 = System_String__op_Equality
                       (pSVar20,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0
                       );
    if ((char)bVar14 != '\0') {
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((character->klass->_2).naturalAligment < bVar2) {
        pCVar23 = (Characters_BaseCharacter_o *)0x0;
        iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
      }
      else {
        pCVar23 = (Characters_BaseCharacter_o *)0x0;
        if ((character->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human) {
          pCVar23 = character;
        }
        iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar20 = *(System_String_o **)
                 (*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18 +
                 (ulong)(pCVar23 != (Characters_BaseCharacter_o *)0x0) * 8);
    }
    bVar14 = Characters_BaseCharacter__IsMainCharacter(character,(MethodInfo *)0x0);
    pSVar13 = "Mine";
    if ((char)bVar14 == '\0') {
      local_48 = (System_String_o *)0x3f8000003f800000;
      local_38 = (System_String_o *)0x3f8000003f800000;
    }
    else {
      if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_38 = *(System_String_o **)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 8);
      local_48 = *(System_String_o **)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x10);
      pSVar20 = pSVar13;
    }
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if (((character->klass->_2).naturalAligment < bVar2) ||
       ((character->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
      iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
      pSVar13 = "Minimap/Textures/MinimapTitanIcon";
    }
    else {
      iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
      pSVar13 = "Minimap/Textures/MinimapHumanIcon";
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar14 = System_String__op_Equality
                       (pSVar20,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),(MethodInfo *)0x0
                       );
    if ((char)bVar14 == '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar14 = System_String__op_Equality
                         (pSVar20,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),
                          (MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar14 = System_String__op_Equality
                           (pSVar20,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                            (MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar14 = System_String__op_Equality
                             (pSVar20,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                              (MethodInfo *)0x0);
          if ((char)bVar14 == '\0') goto label_043d40ff;
          if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar21 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x48);
          puVar16 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x50);
        }
        else {
          if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar21 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x38);
          puVar16 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x40);
        }
      }
      else {
        if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        puVar21 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x18);
        puVar16 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x20);
      }
    }
    else {
      if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar21 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x28);
      puVar16 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x30);
    }
    local_38 = (System_String_o *)*puVar21;
    local_48 = (System_String_o *)*puVar16;
label_043d40ff:
    pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)character,(MethodInfo *)0x0);
    pMVar22 = extraout_RDX;
    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar22 = extraout_RDX_00;
    }
    color.fields._8_8_ = local_48;
    color.fields._0_8_ = local_38;
    UI_MinimapHandler__SetupIcon(pSVar13,color,pUVar17,pMVar22);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae441 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae441 = '\x01';
  }
  UI_MinimapHandler__RemoveOldIcons(__this_08,pMVar22);
  UVar10.z = local_84;
  UVar10._0_8_ = local_80;
  __this = (__this_08->fields)._minimapPanel;
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    bVar14 = UnityEngine_GameObject__get_activeSelf(__this,(MethodInfo *)0x0);
    UVar11.z = local_84;
    UVar11._0_8_ = local_80;
    UVar31.z = local_84;
    UVar31._0_8_ = local_80;
    UVar10.z = local_84;
    UVar10._0_8_ = local_80;
    if ((char)bVar14 == '\0') {
      return;
    }
    unaff_R14 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (unaff_R14 != (UnityEngine_Component_o *)0x0) {
      bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
      if (((unaff_R14->klass->_2).naturalAligment < bVar2) ||
         ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera)) goto label_043d42c1;
      lVar4 = unaff_R14[1].fields.m_CachedPtr;
      UVar10 = UVar31;
      if ((lVar4 != 0) &&
         (pUVar17 = *(UnityEngine_Transform_o **)(lVar4 + 0x10), UVar10 = UVar11,
         pUVar17 != (UnityEngine_Transform_o *)0x0)) {
        UVar31 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
        UVar10.z = local_84;
        UVar10._0_8_ = local_80;
        local_84 = UVar31.z;
        local_80 = UVar31._0_8_;
        lVar4 = unaff_R14[1].fields.m_CachedPtr;
        if ((lVar4 != 0) &&
           (pUVar17 = *(UnityEngine_Transform_o **)(lVar4 + 0x10), UVar10 = UVar31,
           pUVar17 != (UnityEngine_Transform_o *)0x0)) {
          pMVar22 = (MethodInfo *)0x0;
          rotation = UnityEngine_Transform__get_rotation(pUVar17,(MethodInfo *)0x0);
          UVar32 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar32.fields.x * 57.29578;
          euler.fields.y = UVar32.fields.y * 57.29578;
          euler.fields.z = UVar32.fields.z * 57.29578;
          UVar32 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          fVar28 = UVar32.fields.y;
          UVar32.fields.z = local_84;
          UVar32.fields._0_8_ = local_80;
          local_70 = fVar28;
          fStack_6c = fVar28;
          UI_MinimapHandler__UpdateTiles(__this_08,UVar32,fVar28,pMVar22);
          position.fields.z = local_84;
          position.fields._0_8_ = local_80;
          UI_MinimapHandler__UpdateIcons(__this_08,position,fVar28,pMVar22);
          fVar26 = fStack_6c;
          fVar28 = local_70;
          fStack_6c = (float)((ulong)x >> 0x20);
          local_70 = SUB84(x,0);
          format = (System_String_array *)auStack_90;
          fStack_88 = local_84;
          auStack_90 = (undefined1  [8])local_80;
          if (g_data_057ae442 == '\0') {
            local_80._0_4_ = fVar28;
            local_80._4_4_ = fVar26;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
            il2cpp_runtime_helper_023445d0(&"S");
            il2cpp_runtime_helper_023445d0(&"F0");
            il2cpp_runtime_helper_023445d0(&"SW");
            il2cpp_runtime_helper_023445d0(&"W");
            il2cpp_runtime_helper_023445d0(&"SE");
            il2cpp_runtime_helper_023445d0(&"E");
            il2cpp_runtime_helper_023445d0(&"NW");
            il2cpp_runtime_helper_023445d0(&", ");
            il2cpp_runtime_helper_023445d0(&"NE");
            il2cpp_runtime_helper_023445d0(&"");
            il2cpp_runtime_helper_023445d0(&"N");
            g_data_057ae442 = '\x01';
            fVar28 = (float)local_80;
          }
          fVar28 = (float)(~-(uint)(fVar28 < 0.0) & (uint)fVar28 |
                          (uint)(fVar28 + 360.0) & -(uint)(fVar28 < 0.0));
          fVar28 = (float)(~-(uint)(360.0 < fVar28) & (uint)fVar28 |
                          (uint)(fVar28 + -360.0) & -(uint)(360.0 < fVar28));
          uVar24 = "";
          if ((fVar28 < 22.5) || (202.5 < fVar28)) {
            if ((fVar28 < 202.5) || (337.5 < fVar28)) {
              fVar26 = 22.5;
              if (fVar28 <= 22.5) {
                uVar24 = "N";
              }
              if (337.5 <= fVar28) {
                uVar24 = "N";
              }
              x_01 = (System_String_array *)(__this_08->fields)._compassLabel;
              goto joined_r0x043d605e;
            }
            fVar26 = 247.5;
            uVar24 = "SW";
            if (247.5 < fVar28) {
              if ((247.5 <= fVar28) && (fVar26 = 292.5, fVar28 <= 292.5)) {
                x_01 = (System_String_array *)(__this_08->fields)._compassLabel;
                uVar24 = "W";
                goto joined_r0x043d5d9c;
              }
              uVar24 = "";
              if (292.5 <= fVar28) {
                x_01 = (System_String_array *)(__this_08->fields)._compassLabel;
                uVar24 = "NW";
                goto joined_r0x043d605e;
              }
            }
label_043d5e31:
            x_01 = (System_String_array *)(__this_08->fields)._compassLabel;
joined_r0x043d5d9c:
            if (x_01 == (System_String_array *)0x0) goto label_043d608a;
label_043d5e3e:
            pIVar8 = (x_01->obj).klass;
            (**(code **)((long)((System_String_VTable *)pIVar8->vtable + 2) + 0x150))
                      (x_01,uVar24,*(undefined8 *)((long)((System_String_VTable *)pIVar8->vtable + 2) + 0x158)
                      );
            lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x170), lVar4 == 0)) goto label_043d608a;
            if (*(int *)(lVar4 + 0x14) != 1) {
              pUVar9 = (__this_08->fields)._positionLabel;
              x_01 = (System_String_array *)0x0;
              if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                vtableDispatch = (pUVar9->klass->vtable)._75_set_text.methodPtr;
                (*vtableDispatch)
                          (pUVar9,"",(pUVar9->klass->vtable)._75_set_text.method,
                           vtableDispatch);
                return;
              }
              goto label_043d608a;
            }
            if (unaff_R14 == (UnityEngine_Component_o *)0x0) goto label_043d608a;
            x_01 = unaff_R14[2].monitor;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar14 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            UVar33.z = fVar26;
            UVar33.x = (float)(int)extraout_XMM0_Qa;
            UVar33.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
            if ((char)bVar14 != '\0') {
              if ((unaff_R14[2].monitor != (void *)0x0) &&
                 (lVar4 = *(long *)((long)unaff_R14[2].monitor + 0x70), lVar4 != 0)) {
                pUVar17 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                x_01 = (System_String_array *)0x0;
                if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                  UVar33 = (UnityEngine_Vector3_Fields)
                           UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                  _auStack_90 = UVar33;
                  goto label_043d5ef3;
                }
              }
              goto label_043d608a;
            }
label_043d5ef3:
            fVar26 = UVar33.z;
            pUVar9 = (__this_08->fields)._positionLabel;
            values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
            pSVar20 = System_Single__ToString_3cccfe0(__this_09,(System_String_o *)auStack_90,"F0");
            x_01 = format;
            if (values == (System_String_array *)0x0) goto label_043d608a;
            if ((int)values->max_length != 0) {
              format = (System_String_array *)values->m_Items;
              values->m_Items[0] = pSVar20;
              il2cpp_runtime_helper_022b4080(format,pSVar20);
              if (1 < (uint)values->max_length) {
                values->m_Items[1] = ", ";
                fVar28 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 1);
                format = (System_String_array *)(auStack_90 + 4);
                pSVar20 = System_Single__ToString_3cccfe0(fVar28,(System_String_o *)format,"F0");
                if (2 < (uint)values->max_length) {
                  format = (System_String_array *)(values->m_Items + 2);
                  values->m_Items[2] = pSVar20;
                  il2cpp_runtime_helper_022b4080(format,pSVar20);
                  if (3 < (uint)values->max_length) {
                    format = (System_String_array *)(auStack_90 + 8);
                    values->m_Items[3] = ", ";
                    fVar28 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 3);
                    pSVar20 = System_Single__ToString_3cccfe0(fVar28,(System_String_o *)format,"F0");
                    if (4 < (uint)values->max_length) {
                      values->m_Items[4] = pSVar20;
                      il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                      pSVar20 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                      x_01 = values;
                      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar9,pSVar20,(pUVar9->klass->vtable)._75_set_text.method);
                        return;
                      }
                      goto label_043d608a;
                    }
                  }
                }
              }
            }
          }
          else {
            fVar26 = 67.5;
            if (fVar28 <= 67.5) {
              x_01 = (System_String_array *)(__this_08->fields)._compassLabel;
              uVar24 = "NE";
              goto joined_r0x043d5d9c;
            }
            if ((fVar28 < 67.5) || (fVar26 = 112.5, 112.5 < fVar28)) {
              if ((fVar28 < 112.5) || (fVar26 = 157.5, 157.5 < fVar28)) {
                if (fVar28 < 157.5) goto label_043d5e31;
                x_01 = (System_String_array *)(__this_08->fields)._compassLabel;
                uVar24 = "S";
                goto joined_r0x043d5d9c;
              }
              x_01 = (System_String_array *)(__this_08->fields)._compassLabel;
              uVar24 = "SE";
            }
            else {
              x_01 = (System_String_array *)(__this_08->fields)._compassLabel;
              uVar24 = "E";
            }
joined_r0x043d605e:
            if (x_01 != (System_String_array *)0x0) goto label_043d5e3e;
label_043d608a:
            il2cpp_runtime_helper_022b2c90();
            format = x_01;
          }
          auVar25._0_8_ = il2cpp_runtime_helper_022b2ca0();
          auVar25._8_8_ = extraout_XMM0_Qb;
          if (g_data_057ae446 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
            g_data_057ae446 = '\x01';
          }
          fVar28 = *(float *)format->m_Items;
          fVar29 = fVar28 * 0.5;
          fVar27 = (float)auVar25._0_8_;
          if (fVar27 <= 0.0) {
            if (0.0 <= fVar27) goto label_043d610c;
            fVar27 = fVar27 - fVar29;
          }
          else {
            fVar27 = fVar27 + fVar29;
          }
          auVar25._0_4_ = fVar27;
label_043d610c:
          if (fVar26 <= 0.0) {
            if (fVar26 < 0.0) {
              fVar26 = fVar26 - fVar29;
            }
          }
          else {
            fVar26 = fVar26 + fVar29;
          }
          System_Tuple__Create_int__int_((int)(auVar25._0_4_ / fVar28),(int)(fVar26 / fVar28),MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
          return;
        }
      }
    }
  }
  local_84 = UVar10.z;
  local_80 = UVar10._0_8_;
  il2cpp_runtime_helper_022b2c90();
label_043d42c1:
  il2cpp_runtime_helper_022b2fd0();
  plStack_b8 = &TypeInfo_MinimapHandler;
  pUStack_c0 = __this_08;
  if (g_data_057ae443 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae443 = '\x01';
  }
  _Stack_f8.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_f0 = (Il2CppType *)0x0;
  pUStack_e8 = (UnityEngine_Object_o *)0x0;
  _Var34.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar35 = (Il2CppType *)0x0;
  key = (UnityEngine_Object_o *)0x0;
  lVar4 = unaff_R14[5].fields.m_CachedPtr;
  if (lVar4 == 0) goto label_043d4747;
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  length = *(int32_t *)(lVar4 + 0x18);
  *(undefined4 *)(lVar4 + 0x18) = 0;
  if (0 < length) {
    System_Array__Clear(*(System_Array_o **)(lVar4 + 0x10),0,length,(MethodInfo *)0x0);
  }
  if (unaff_R14[5].klass == (UnityEngine_Component_c *)0x0) goto label_043d4747;
  __this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14[5].klass,
                         MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
  if (__this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_043d4747;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_d8,
             __this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pUStack_e8 = pUStack_c8;
  _Stack_f8 = _Stack_d8;
  pIStack_f0 = pIStack_d0;
  do {
    __this_00.fields._8_8_ = pIVar35;
    __this_00.fields._dictionary = _Var34.genericMethod;
    __this_00.fields._currentKey = (Il2CppObject *)key;
    bVar14 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                       (__this_00,(MethodInfo_3251B20 *)&_Stack_f8);
    pUVar18 = pUStack_e8;
    if ((char)bVar14 == '\0') {
      __this_01.fields._8_8_ = pIVar35;
      __this_01.fields._dictionary = _Var34.genericMethod;
      __this_01.fields._currentKey = (Il2CppObject *)key;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_01,(MethodInfo_3251B10 *)&_Stack_f8);
      goto label_043d461b;
    }
    if (unaff_R14[5].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto label_043d471f;
    bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (unaff_R14[5].monitor,(Il2CppObject *)pUStack_e8,MethodInfo_Boolean_ContainsKey);
    bVar12 = false;
    if ((char)bVar14 != '\0') {
      if (unaff_R14[5].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto label_043d4729;
      x_00 = (UnityEngine_Object_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (unaff_R14[5].monitor,(Il2CppObject *)pUVar18,MethodInfo_BaseCharacter_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar14 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        if (x_00 == (UnityEngine_Object_o *)0x0) goto label_043d4742;
        if (*(char *)&x_00[4].monitor == '\0') goto label_043d451d;
      }
      bVar12 = true;
    }
label_043d451d:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar15 = UnityEngine_Object__op_Equality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12 || (uVar15 & 0xff) != 0) {
      if (unaff_R14[5].klass == (UnityEngine_Component_c *)0x0) goto label_043d472e;
      __this_07 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14[5].klass,
                             (Il2CppObject *)pUVar18,MethodInfo_Transform_get_Item);
      lVar4 = MethodInfo_Void_Add;
      pSVar5 = (System_Collections_Generic_List_object__o *)unaff_R14[5].fields.m_CachedPtr;
      if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_043d4733;
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (pSVar5->fields)._items;
      if (pSVar6 == (System_Object_array *)0x0) goto label_043d4738;
      uVar15 = (pSVar5->fields)._size;
      if (uVar15 < (uint)pSVar6->max_length) {
        (pSVar5->fields)._size = uVar15 + 1;
        pSVar6->m_Items[(int)uVar15] = (Il2CppObject *)pUVar18;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar15);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar5,(Il2CppObject *)pUVar18,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_07 == (UnityEngine_Component_o *)0x0) {
        do {
          il2cpp_runtime_helper_022b2c90();
label_043d4742:
          il2cpp_runtime_helper_022b2c90();
label_043d4747:
          do {
            auVar30 = il2cpp_runtime_helper_022b2c90();
            if (auVar30._8_4_ != 1) {
label_043d4939:
              __this_05.fields._8_8_ = pIVar35;
              __this_05.fields._dictionary = _Var34.genericMethod;
              __this_05.fields._currentKey = (Il2CppObject *)key;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (__this_05,(MethodInfo_3251B10 *)&_Stack_f8);
              _Unwind_Resume(auVar30._0_8_);
            }
            plVar19 = (long *)__cxa_begin_catch(auVar30._0_8_);
            lVar4 = *plVar19;
            __cxa_end_catch();
            __this_04.fields._8_8_ = pIVar35;
            __this_04.fields._dictionary = _Var34.genericMethod;
            __this_04.fields._currentKey = (Il2CppObject *)key;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_04,(MethodInfo_3251B10 *)&_Stack_f8);
            if (lVar4 != 0) {
              il2cpp_runtime_helper_022fefe0(lVar4);
              goto label_043d4939;
            }
label_043d461b:
            pSVar5 = (System_Collections_Generic_List_object__o *)unaff_R14[5].fields.m_CachedPtr;
          } while (pSVar5 == (System_Collections_Generic_List_object__o *)0x0);
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_d8,pSVar5,MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
          _Var34 = _Stack_d8;
          pIVar35 = pIStack_d0;
          key = pUStack_c8;
          while( true ) {
            __this_02.fields._8_8_ = pIVar35;
            __this_02.fields._list = _Var34.genericMethod;
            __this_02.fields._current = (Il2CppObject *)key;
            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee8);
            if ((char)bVar14 == '\0') {
              __this_03.fields._8_8_ = pIVar35;
              __this_03.fields._list = _Var34.genericMethod;
              __this_03.fields._current = (Il2CppObject *)key;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
              return;
            }
            if (unaff_R14[5].klass == (UnityEngine_Component_c *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Remove
                      ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14[5].klass,
                       (Il2CppObject *)key,MethodInfo_Boolean_Remove);
            pSVar7 = unaff_R14[5].monitor;
            pUVar17 = UnityEngine_Component__get_transform(unaff_R14,(MethodInfo *)0x0);
            if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d471a;
            bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                               (pSVar7,(Il2CppObject *)pUVar17,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar14 != '\0') {
              pSVar7 = unaff_R14[5].monitor;
              pUVar17 = UnityEngine_Component__get_transform(unaff_R14,(MethodInfo *)0x0);
              if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d4724;
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar7,(Il2CppObject *)pUVar17,MethodInfo_Boolean_Remove);
            }
          }
          il2cpp_runtime_helper_022b2c90();
label_043d471a:
          il2cpp_runtime_helper_022b2c90();
label_043d471f:
          il2cpp_runtime_helper_022b2c90();
label_043d4724:
          il2cpp_runtime_helper_022b2c90();
label_043d4729:
          il2cpp_runtime_helper_022b2c90();
label_043d472e:
          il2cpp_runtime_helper_022b2c90();
label_043d4733:
          il2cpp_runtime_helper_022b2c90();
label_043d4738:
          il2cpp_runtime_helper_022b2c90();
        } while( true );
      }
      pUVar18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar18,(MethodInfo *)0x0);
    }
  } while( true );
}


// UI.MinimapHandler$$GetIcons
// il2cpp: System_Collections_Generic_Dictionary_Transform__Transform__o* UI_MinimapHandler__GetIcons (const MethodInfo* method);
// 0x43d30c0

System_Collections_Generic_Dictionary_Transform__Transform__o *
UI_MinimapHandler__GetIcons(MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  System_Collections_Generic_Dictionary_Transform__Transform__c *pSVar3;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_Transform__Transform__o *extraout_RAX;
  undefined4 extraout_var;
  System_Collections_Generic_Dictionary_Transform__Transform__o *extraout_RAX_00;
  UI_StylebarHandler_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_Transform__Transform__o *extraout_RAX_01;
  Il2CppClass *pIVar5;
  System_String_o *a;
  MethodInfo *method_00;
  UI_MapPopup_o *__this_01;
  UI_InGameMenu_o *__this_02;
  float fVar6;
  
  if (g_data_057ae43f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae43f = '\x01';
  }
  if ((TypeInfo_MinimapHandler->fields)._syncPosition.fields.z == 0.0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = ((TypeInfo_MinimapHandler->fields)._icons)->klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar5 = (Il2CppClass *)0x0;
  a = (System_String_o *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if ((TypeInfo_MinimapHandler->fields)._syncPosition.fields.z == 0.0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = ((TypeInfo_MinimapHandler->fields)._icons)->klass;
    if (pSVar3 == (System_Collections_Generic_Dictionary_Transform__Transform__c *)0x0) {
      __this_01 = TypeInfo_MinimapHandler;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae437 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"Back");
        il2cpp_runtime_helper_023445d0(&"Plus");
        il2cpp_runtime_helper_023445d0(&"Minus");
        g_data_057ae437 = '\x01';
      }
      bVar4 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        method_00 = "Plus";
        bVar4 = System_String__op_Equality(a,(System_String_o *)"Plus",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          method_00 = "Minus";
          bVar4 = System_String__op_Equality(a,(System_String_o *)"Minus",(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return (System_Collections_Generic_Dictionary_Transform__Transform__o *)
                   CONCAT44(extraout_var,bVar4);
          }
          fVar6 = (__this_01->fields)._height + 500.0;
        }
        else {
          fVar6 = (__this_01->fields)._height + -500.0;
          if (fVar6 <= 100.0) {
            fVar6 = 100.0;
          }
        }
        (__this_01->fields)._height = fVar6;
        UI_MapPopup__Sync(__this_01,method_00);
        return extraout_RAX_00;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (__this_02 != (UI_InGameMenu_o *)0x0) {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
          UI_InGameMenu__SetMapMenu(__this_02,0,1,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        il2cpp_runtime_helper_022b2fd0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae438 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
        il2cpp_runtime_helper_023445d0(&"MapPopup");
        g_data_057ae438 = '\x01';
      }
      (__this_02->fields).CharacterInfoHandler = "MapPopup";
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).CharacterInfoHandler);
      *(undefined4 *)&(__this_02->fields).HUDBottomHandler = 0x44fa0000;
      __this = (UI_StylebarHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
      (__this_02->fields).StylebarHandler = __this;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).StylebarHandler,__this);
      *(undefined4 *)&(__this_02->fields).VoiceChatPanel = 0x3f800000;
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar2 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      *(undefined8 *)((long)&(__this_02->fields).VoiceChatPanel + 4) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      *(undefined4 *)((long)&(__this_02->fields).TopLeftHud + 4) = uVar2;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Transform);
      (__this_02->fields).KDRReference = (UnityEngine_GameObject_o *)__this_00;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).KDRReference);
      UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_02,(MethodInfo *)0x0);
      return extraout_RAX_01;
    }
    pIVar5 = (pSVar3->_1).klass;
  }
  return (System_Collections_Generic_Dictionary_Transform__Transform__o *)pIVar5;
}


// UI.MinimapHandler$$SetupIcon
// il2cpp: void UI_MinimapHandler__SetupIcon (System_String_o* texture, UnityEngine_Color_o color, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x43d39a0

void UI_MinimapHandler__SetupIcon
               (System_String_o *texture,UnityEngine_Color_o color,UnityEngine_Transform_o *transform,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  int32_t length;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  UI_MinimapHandler_o *pUVar5;
  long lVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  System_Object_array *pSVar8;
  Il2CppClass *pIVar9;
  UnityEngine_UI_Text_o *pUVar10;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  UnityEngine_Vector3_Fields UVar11;
  UnityEngine_Vector3_Fields UVar12;
  bool bVar13;
  System_String_o *pSVar14;
  bool_conflict bVar15;
  uint uVar16;
  System_String_o *pSVar17;
  UnityEngine_UI_RawImage_o *__this_05;
  Characters_BaseCharacter_o *__this_06;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_GameObject_o *pUVar19;
  undefined8 *puVar20;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  UnityEngine_Object_o *x;
  UnityEngine_Component_o *__this_08;
  UnityEngine_Object_o *pUVar21;
  UnityEngine_Transform_o *pUVar22;
  long *plVar23;
  System_String_array *values;
  undefined8 *puVar24;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar25;
  Characters_BaseCharacter_o *pCVar26;
  undefined8 uVar27;
  UI_MinimapHandler_o *__this_09;
  System_String_array *x_00;
  System_String_array *format;
  System_String_o *unaff_R12;
  float __this_10;
  undefined8 extraout_XMM0_Qa;
  float fVar29;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar30;
  float fVar31;
  UnityEngine_Color_o color_00;
  UnityEngine_Quaternion_o rotation;
  undefined1 auVar32 [12];
  UnityEngine_Vector3_Fields UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_Fields UVar35;
  _union_249689 _Var36;
  Il2CppType *pIVar37;
  UnityEngine_Object_o *key;
  _union_249689 _Stack_140;
  Il2CppType *pIStack_138;
  UnityEngine_Object_o *pUStack_130;
  _union_249689 _Stack_120;
  Il2CppType *pIStack_118;
  UnityEngine_Object_o *pUStack_110;
  UI_MinimapHandler_o *pUStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float fStack_b8;
  float fStack_b4;
  long *plStack_a8;
  UI_MinimapHandler_o *pUStack_a0;
  System_String_o *pSStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  System_String_o *pSStack_80;
  System_String_o *pSStack_78;
  UnityEngine_UI_RawImage_o *pUStack_70;
  System_String_o *pSStack_68;
  long *plStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *local_48;
  undefined1 local_38 [16];
  
  local_48 = color.fields._0_8_;
  local_38._8_4_ = in_XMM1_Dc;
  local_38._0_8_ = color.fields._8_8_;
  local_38._12_4_ = in_XMM1_Dd;
  if (g_data_057ae440 == '\0') {
    pSStack_50 = (System_String_o *)0x43d39d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_50 = (System_String_o *)0x43d39e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_50 = (System_String_o *)0x43d39ed;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pSStack_50 = (System_String_o *)0x43d39f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    pSStack_50 = (System_String_o *)0x43d3a05;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    pSStack_50 = (System_String_o *)0x43d3a11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_50 = (System_String_o *)0x43d3a1d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pSStack_50 = (System_String_o *)0x43d3a29;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_50 = (System_String_o *)0x43d3a35;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_50 = (System_String_o *)0x43d3a41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    pSStack_50 = (System_String_o *)0x43d3a4d;
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapIcon");
    g_data_057ae440 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    pSStack_50 = (System_String_o *)0x43d3a6d;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = (UnityEngine_UI_RawImage_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pSStack_50 = (System_String_o *)0x43d3a93;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_50 = (System_String_o *)0x43d3ab4;
  pSVar17 = (System_String_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)__this_05,"Minimap/Prefabs/MinimapIcon",1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (pSVar17 == (System_String_o *)0x0) {
label_043d3d59:
    pSStack_50 = (System_String_o *)0x43d3d5e;
    __this_06 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_50 = (System_String_o *)0x43d3ad2;
    __this_05 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar17,MethodInfo_RawImage_GetComponent_RawImage)
    ;
    pSStack_50 = (System_String_o *)0x43d3af2;
    __this_06 = (Characters_BaseCharacter_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          ((System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8),texture,1,
                           (MethodInfo *)0x0);
    unaff_R12 = pSVar17;
    if (__this_05 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043d3d59;
    if ((__this_06 == (Characters_BaseCharacter_o *)0x0) || (__this_06->klass == TypeInfo_Texture2D)) {
      pSStack_50 = (System_String_o *)0x43d3b20;
      UnityEngine_UI_RawImage__set_texture(__this_05,(UnityEngine_Texture_o *)__this_06,(MethodInfo *)0x0);
      pSStack_50 = (System_String_o *)0x43d3b3c;
      (*(__this_05->klass->vtable)._23_set_color.methodPtr)(__this_05);
      if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
        pSStack_50 = (System_String_o *)0x43d3b54;
        il2cpp_runtime_helper_02337ed0();
      }
      texture = (System_String_o *)&TypeInfo_MinimapHandler;
      if (**(long **)(TypeInfo_MinimapHandler + 0xb8) != 0) {
        __this_05 = *(UnityEngine_UI_RawImage_o **)(**(long **)(TypeInfo_MinimapHandler + 0xb8) + 0x78);
        pSStack_50 = (System_String_o *)0x43d3b78;
        pUVar18 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar17,(MethodInfo *)0x0)
        ;
        if (__this_05 != (UnityEngine_UI_RawImage_o *)0x0) {
          pSStack_50 = (System_String_o *)0x43d3b99;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                     (Il2CppObject *)transform,(Il2CppObject *)pUVar18,MethodInfo_Void_Add);
          if (transform != (UnityEngine_Transform_o *)0x0) {
            pSStack_50 = (System_String_o *)0x43d3bac;
            pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)transform,(MethodInfo *)0x0);
            if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
              pSStack_50 = (System_String_o *)0x43d3bc7;
              __this_05 = (UnityEngine_UI_RawImage_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pSStack_50 = (System_String_o *)0x43d3be2;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStack_50 = (System_String_o *)0x43d3bee;
              bVar15 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar15 != '\0') {
                if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                  pSStack_50 = (System_String_o *)0x43d3c03;
                  il2cpp_runtime_helper_02337ed0();
                }
                if ((**(long **)(TypeInfo_MinimapHandler + 0xb8) == 0) ||
                   (pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                              (**(long **)(TypeInfo_MinimapHandler + 0xb8) + 0x80),
                   pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
                goto label_043d3d59;
                pSStack_50 = (System_String_o *)0x43d3c3e;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar4,(Il2CppObject *)transform,(Il2CppObject *)__this_05,MethodInfo_Void_Add);
              }
              pSStack_50 = (System_String_o *)0x43d3c48;
              __this_05 = (UnityEngine_UI_RawImage_o *)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar17,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                pSStack_50 = (System_String_o *)0x43d3c5c;
                il2cpp_runtime_helper_02337ed0();
              }
              if ((**(long **)(TypeInfo_MinimapHandler + 0xb8) != 0) && (__this_05 != (UnityEngine_UI_RawImage_o *)0x0))
              {
                pSStack_50 = (System_String_o *)0x43d3c89;
                UnityEngine_Transform__SetParent
                          ((UnityEngine_Transform_o *)__this_05,
                           *(UnityEngine_Transform_o **)(**(long **)(TypeInfo_MinimapHandler + 0xb8) + 0x50),
                           (MethodInfo *)0x0);
                pSStack_50 = (System_String_o *)0x43d3c93;
                pUVar18 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar17,(MethodInfo *)0x0);
                if (g_data_057a65d5 == '\0') {
                  pSStack_50 = (System_String_o *)0x43d3cab;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                __this_05 = (UnityEngine_UI_RawImage_o *)0x0;
                if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                  pSStack_50 = (System_String_o *)0x43d3cdf;
                  UnityEngine_Transform__set_localPosition
                            (pUVar18,(UnityEngine_Vector3_o)
                                     **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0)
                  ;
                  pSStack_50 = (System_String_o *)0x43d3ce9;
                  __this_05 = (UnityEngine_UI_RawImage_o *)
                              UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pSVar17,(MethodInfo *)0x0);
                  if (g_data_057a6843 == '\0') {
                    pSStack_50 = (System_String_o *)0x43d3d01;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
                    g_data_057a6843 = '\x01';
                  }
                  if (__this_05 != (UnityEngine_UI_RawImage_o *)0x0) {
                    pSStack_50 = (System_String_o *)0x43d3d31;
                    UnityEngine_Transform__set_rotation
                              ((UnityEngine_Transform_o *)__this_05,
                               (UnityEngine_Quaternion_o)
                               **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
                    pSStack_50 = (System_String_o *)0x43d3d3b;
                    pUVar19 = UnityEngine_GameObject__get_gameObject
                                        ((UnityEngine_GameObject_o *)pSVar17,(MethodInfo *)0x0);
                    if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar19,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_043d3d59;
    }
  }
  pSStack_50 = (System_String_o *)0x43d3d66;
  il2cpp_runtime_helper_022b2fd0();
  plStack_60 = &TypeInfo_ResourcePaths;
  pUStack_70 = __this_05;
  pSStack_68 = unaff_R12;
  pSStack_58 = (System_String_o *)transform;
  pSStack_50 = texture;
  if (g_data_057ae43e == '\0') {
    pSStack_98 = (System_String_o *)0x43d3d95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    pSStack_98 = (System_String_o *)0x43d3da1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    pSStack_98 = (System_String_o *)0x43d3dad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_98 = (System_String_o *)0x43d3db9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    pSStack_98 = (System_String_o *)0x43d3dc5;
    il2cpp_runtime_helper_023445d0(&"Minimap/Textures/MinimapHumanIcon");
    pSStack_98 = (System_String_o *)0x43d3dd1;
    il2cpp_runtime_helper_023445d0(&"Mine");
    pSStack_98 = (System_String_o *)0x43d3ddd;
    il2cpp_runtime_helper_023445d0(&"Minimap/Textures/MinimapTitanIcon");
    g_data_057ae43e = '\x01';
  }
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    pSStack_98 = (System_String_o *)0x43d3dfd;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UI_MinimapHandler_o *)**(undefined8 **)(TypeInfo_MinimapHandler + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_98 = (System_String_o *)0x43d3e23;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar25 = (MethodInfo *)0x0;
  pSStack_98 = (System_String_o *)0x43d3e2f;
  __this_09 = pUVar5;
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return;
  }
  if (__this_06 != (Characters_BaseCharacter_o *)0x0) {
    pSVar17 = *(System_String_o **)&(__this_06->fields).AI;
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      pSStack_98 = (System_String_o *)0x43d3e6a;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_98 = (System_String_o *)0x43d3e83;
    bVar15 = System_String__op_Equality
                       (pSVar17,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0
                       );
    if ((char)bVar15 != '\0') {
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((__this_06->klass->_2).naturalAligment < bVar2) {
        pCVar26 = (Characters_BaseCharacter_o *)0x0;
        iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
      }
      else {
        pCVar26 = (Characters_BaseCharacter_o *)0x0;
        if ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human) {
          pCVar26 = __this_06;
        }
        iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
      }
      if (iVar3 == 0) {
        pSStack_98 = (System_String_o *)0x43d3ed8;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = *(System_String_o **)
                 (*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18 +
                 (ulong)(pCVar26 != (Characters_BaseCharacter_o *)0x0) * 8);
    }
    pSStack_98 = (System_String_o *)0x43d3efa;
    bVar15 = Characters_BaseCharacter__IsMainCharacter(__this_06,(MethodInfo *)0x0);
    pSVar14 = "Mine";
    if ((char)bVar15 == '\0') {
      pSStack_90 = (System_String_o *)0x3f8000003f800000;
      pSStack_80 = (System_String_o *)0x3f8000003f800000;
    }
    else {
      if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
        pSStack_98 = (System_String_o *)0x43d3f1a;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_80 = *(System_String_o **)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 8);
      pSStack_90 = *(System_String_o **)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x10);
      pSVar17 = pSVar14;
    }
    pSStack_78 = (System_String_o *)0x0;
    pSStack_88 = (System_String_o *)0x0;
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if (((__this_06->klass->_2).naturalAligment < bVar2) ||
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
      iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
      pSVar14 = "Minimap/Textures/MinimapTitanIcon";
    }
    else {
      iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
      pSVar14 = "Minimap/Textures/MinimapHumanIcon";
    }
    if (iVar3 == 0) {
      pSStack_98 = (System_String_o *)0x43d3fa5;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_98 = (System_String_o *)0x43d3fbe;
    bVar15 = System_String__op_Equality
                       (pSVar17,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),(MethodInfo *)0x0
                       );
    if ((char)bVar15 == '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        pSStack_98 = (System_String_o *)0x43d3ffe;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_98 = (System_String_o *)0x43d4017;
      bVar15 = System_String__op_Equality
                         (pSVar17,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),
                          (MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          pSStack_98 = (System_String_o *)0x43d4057;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_98 = (System_String_o *)0x43d406f;
        bVar15 = System_String__op_Equality
                           (pSVar17,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                            (MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            pSStack_98 = (System_String_o *)0x43d40ac;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_98 = (System_String_o *)0x43d40c5;
          bVar15 = System_String__op_Equality
                             (pSVar17,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                              (MethodInfo *)0x0);
          if ((char)bVar15 == '\0') goto label_043d40ff;
          if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
            pSStack_98 = (System_String_o *)0x43d40db;
            il2cpp_runtime_helper_02337ed0();
          }
          puVar24 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x48);
          puVar20 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x50);
        }
        else {
          if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
            pSStack_98 = (System_String_o *)0x43d4085;
            il2cpp_runtime_helper_02337ed0();
          }
          puVar24 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x38);
          puVar20 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x40);
        }
      }
      else {
        if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
          pSStack_98 = (System_String_o *)0x43d402d;
          il2cpp_runtime_helper_02337ed0();
        }
        puVar24 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x18);
        puVar20 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x20);
      }
    }
    else {
      if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
        pSStack_98 = (System_String_o *)0x43d3fd4;
        il2cpp_runtime_helper_02337ed0();
      }
      puVar24 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x28);
      puVar20 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x30);
    }
    pSStack_80 = (System_String_o *)*puVar24;
    pSStack_78 = (System_String_o *)0x0;
    pSStack_90 = (System_String_o *)*puVar20;
    pSStack_88 = (System_String_o *)0x0;
label_043d40ff:
    pSStack_98 = (System_String_o *)0x43d4109;
    pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
    pMVar25 = extraout_RDX;
    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
      pSStack_98 = (System_String_o *)0x43d411e;
      il2cpp_runtime_helper_02337ed0();
      pMVar25 = extraout_RDX_00;
    }
    color_00.fields._8_8_ = pSStack_90;
    color_00.fields._0_8_ = pSStack_80;
    UI_MinimapHandler__SetupIcon(pSVar14,color_00,pUVar18,pMVar25);
    return;
  }
  pSStack_98 = (System_String_o *)0x43d4144;
  il2cpp_runtime_helper_022b2c90();
  pUStack_a0 = pUVar5;
  pSStack_98 = (System_String_o *)transform;
  if (g_data_057ae441 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae441 = '\x01';
  }
  UI_MinimapHandler__RemoveOldIcons(__this_09,pMVar25);
  UVar11.z = fStack_cc;
  UVar11._0_8_ = uStack_c8;
  pUVar19 = (__this_09->fields)._minimapPanel;
  if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
    bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar19,(MethodInfo *)0x0);
    UVar12.z = fStack_cc;
    UVar12._0_8_ = uStack_c8;
    UVar33.z = fStack_cc;
    UVar33._0_8_ = uStack_c8;
    UVar11.z = fStack_cc;
    UVar11._0_8_ = uStack_c8;
    if ((char)bVar15 == '\0') {
      return;
    }
    transform = *(UnityEngine_Transform_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (transform != (UnityEngine_Transform_o *)0x0) {
      bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
      if (((transform->klass->_2).naturalAligment < bVar2) ||
         ((transform->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera)) goto label_043d42c1;
      lVar6 = transform[1].fields.m_CachedPtr;
      UVar11 = UVar33;
      if ((lVar6 != 0) &&
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar6 + 0x10), UVar11 = UVar12,
         pUVar18 != (UnityEngine_Transform_o *)0x0)) {
        UVar33 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
        UVar11.z = fStack_cc;
        UVar11._0_8_ = uStack_c8;
        fStack_cc = UVar33.z;
        uStack_c8 = UVar33._0_8_;
        lVar6 = transform[1].fields.m_CachedPtr;
        if ((lVar6 != 0) &&
           (pUVar18 = *(UnityEngine_Transform_o **)(lVar6 + 0x10), UVar11 = UVar33,
           pUVar18 != (UnityEngine_Transform_o *)0x0)) {
          pMVar25 = (MethodInfo *)0x0;
          rotation = UnityEngine_Transform__get_rotation(pUVar18,(MethodInfo *)0x0);
          UVar34 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar34.fields.x * 57.29578;
          euler.fields.y = UVar34.fields.y * 57.29578;
          euler.fields.z = UVar34.fields.z * 57.29578;
          UVar34 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          fVar30 = UVar34.fields.y;
          UVar34.fields.z = fStack_cc;
          UVar34.fields._0_8_ = uStack_c8;
          fStack_b8 = fVar30;
          fStack_b4 = fVar30;
          UI_MinimapHandler__UpdateTiles(__this_09,UVar34,fVar30,pMVar25);
          position.fields.z = fStack_cc;
          position.fields._0_8_ = uStack_c8;
          UI_MinimapHandler__UpdateIcons(__this_09,position,fVar30,pMVar25);
          pSVar17 = pSStack_98;
          pUVar5 = pUStack_a0;
          fVar29 = fStack_b4;
          fVar30 = fStack_b8;
          pSStack_98 = (System_String_o *)0x0;
          pUStack_a0 = (UI_MinimapHandler_o *)pSVar17;
          plStack_a8 = &TypeInfo_ResourcePaths;
          fStack_b4 = (float)((ulong)pUVar5 >> 0x20);
          fStack_b8 = SUB84(pUVar5,0);
          format = (System_String_array *)auStack_d8;
          fStack_d0 = fStack_cc;
          auStack_d8 = (undefined1  [8])uStack_c8;
          if (g_data_057ae442 == '\0') {
            uStack_c8._0_4_ = fVar30;
            uStack_c8._4_4_ = fVar29;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
            il2cpp_runtime_helper_023445d0(&"S");
            il2cpp_runtime_helper_023445d0(&"F0");
            il2cpp_runtime_helper_023445d0(&"SW");
            il2cpp_runtime_helper_023445d0(&"W");
            il2cpp_runtime_helper_023445d0(&"SE");
            il2cpp_runtime_helper_023445d0(&"E");
            il2cpp_runtime_helper_023445d0(&"NW");
            il2cpp_runtime_helper_023445d0(&", ");
            il2cpp_runtime_helper_023445d0(&"NE");
            il2cpp_runtime_helper_023445d0(&"");
            il2cpp_runtime_helper_023445d0(&"N");
            g_data_057ae442 = '\x01';
            fVar30 = (float)uStack_c8;
          }
          fVar30 = (float)(~-(uint)(fVar30 < 0.0) & (uint)fVar30 |
                          (uint)(fVar30 + 360.0) & -(uint)(fVar30 < 0.0));
          fVar30 = (float)(~-(uint)(360.0 < fVar30) & (uint)fVar30 |
                          (uint)(fVar30 + -360.0) & -(uint)(360.0 < fVar30));
          uVar27 = "";
          if ((fVar30 < 22.5) || (202.5 < fVar30)) {
            if ((fVar30 < 202.5) || (337.5 < fVar30)) {
              fVar29 = 22.5;
              if (fVar30 <= 22.5) {
                uVar27 = "N";
              }
              if (337.5 <= fVar30) {
                uVar27 = "N";
              }
              x_00 = (System_String_array *)(__this_09->fields)._compassLabel;
              goto joined_r0x043d605e;
            }
            fVar29 = 247.5;
            uVar27 = "SW";
            if (247.5 < fVar30) {
              if ((247.5 <= fVar30) && (fVar29 = 292.5, fVar30 <= 292.5)) {
                x_00 = (System_String_array *)(__this_09->fields)._compassLabel;
                uVar27 = "W";
                goto joined_r0x043d5d9c;
              }
              uVar27 = "";
              if (292.5 <= fVar30) {
                x_00 = (System_String_array *)(__this_09->fields)._compassLabel;
                uVar27 = "NW";
                goto joined_r0x043d605e;
              }
            }
label_043d5e31:
            x_00 = (System_String_array *)(__this_09->fields)._compassLabel;
joined_r0x043d5d9c:
            if (x_00 == (System_String_array *)0x0) goto label_043d608a;
label_043d5e3e:
            pIVar9 = (x_00->obj).klass;
            (**(code **)((long)((System_String_VTable *)pIVar9->vtable + 2) + 0x150))
                      (x_00,uVar27,*(undefined8 *)((long)((System_String_VTable *)pIVar9->vtable + 2) + 0x158)
                      );
            lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x170), lVar6 == 0)) goto label_043d608a;
            if (*(int *)(lVar6 + 0x14) != 1) {
              pUVar10 = (__this_09->fields)._positionLabel;
              x_00 = (System_String_array *)0x0;
              if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                vtableDispatch = (pUVar10->klass->vtable)._75_set_text.methodPtr;
                (*vtableDispatch)
                          (pUVar10,"",(pUVar10->klass->vtable)._75_set_text.method,
                           vtableDispatch);
                return;
              }
              goto label_043d608a;
            }
            if (transform == (UnityEngine_Transform_o *)0x0) goto label_043d608a;
            x_00 = transform[2].monitor;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar15 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            UVar35.z = fVar29;
            UVar35.x = (float)(int)extraout_XMM0_Qa;
            UVar35.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
            if ((char)bVar15 != '\0') {
              if ((transform[2].monitor != (void *)0x0) &&
                 (lVar6 = *(long *)((long)transform[2].monitor + 0x70), lVar6 != 0)) {
                pUVar18 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
                x_00 = (System_String_array *)0x0;
                if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                  UVar35 = (UnityEngine_Vector3_Fields)
                           UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
                  _auStack_d8 = UVar35;
                  goto label_043d5ef3;
                }
              }
              goto label_043d608a;
            }
label_043d5ef3:
            fVar29 = UVar35.z;
            pUVar10 = (__this_09->fields)._positionLabel;
            values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
            pSVar17 = System_Single__ToString_3cccfe0(__this_10,(System_String_o *)auStack_d8,"F0");
            x_00 = format;
            if (values == (System_String_array *)0x0) goto label_043d608a;
            if ((int)values->max_length != 0) {
              format = (System_String_array *)values->m_Items;
              values->m_Items[0] = pSVar17;
              il2cpp_runtime_helper_022b4080(format,pSVar17);
              if (1 < (uint)values->max_length) {
                values->m_Items[1] = ", ";
                fVar30 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 1);
                format = (System_String_array *)(auStack_d8 + 4);
                pSVar17 = System_Single__ToString_3cccfe0(fVar30,(System_String_o *)format,"F0");
                if (2 < (uint)values->max_length) {
                  format = (System_String_array *)(values->m_Items + 2);
                  values->m_Items[2] = pSVar17;
                  il2cpp_runtime_helper_022b4080(format,pSVar17);
                  if (3 < (uint)values->max_length) {
                    format = (System_String_array *)(auStack_d8 + 8);
                    values->m_Items[3] = ", ";
                    fVar30 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 3);
                    pSVar17 = System_Single__ToString_3cccfe0(fVar30,(System_String_o *)format,"F0");
                    if (4 < (uint)values->max_length) {
                      values->m_Items[4] = pSVar17;
                      il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                      pSVar17 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                      x_00 = values;
                      if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar10,pSVar17,(pUVar10->klass->vtable)._75_set_text.method);
                        return;
                      }
                      goto label_043d608a;
                    }
                  }
                }
              }
            }
          }
          else {
            fVar29 = 67.5;
            if (fVar30 <= 67.5) {
              x_00 = (System_String_array *)(__this_09->fields)._compassLabel;
              uVar27 = "NE";
              goto joined_r0x043d5d9c;
            }
            if ((fVar30 < 67.5) || (fVar29 = 112.5, 112.5 < fVar30)) {
              if ((fVar30 < 112.5) || (fVar29 = 157.5, 157.5 < fVar30)) {
                if (fVar30 < 157.5) goto label_043d5e31;
                x_00 = (System_String_array *)(__this_09->fields)._compassLabel;
                uVar27 = "S";
                goto joined_r0x043d5d9c;
              }
              x_00 = (System_String_array *)(__this_09->fields)._compassLabel;
              uVar27 = "SE";
            }
            else {
              x_00 = (System_String_array *)(__this_09->fields)._compassLabel;
              uVar27 = "E";
            }
joined_r0x043d605e:
            if (x_00 != (System_String_array *)0x0) goto label_043d5e3e;
label_043d608a:
            il2cpp_runtime_helper_022b2c90();
            format = x_00;
          }
          auVar28._0_8_ = il2cpp_runtime_helper_022b2ca0();
          auVar28._8_8_ = extraout_XMM0_Qb;
          uStack_f8._4_4_ = fVar29;
          if (g_data_057ae446 == '\0') {
            auStack_f0 = auVar28;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
            g_data_057ae446 = '\x01';
            auVar28 = auStack_f0;
          }
          fVar30 = *(float *)format->m_Items;
          fVar31 = fVar30 * 0.5;
          fVar29 = auVar28._0_4_;
          if (fVar29 <= 0.0) {
            if (0.0 <= fVar29) goto label_043d610c;
            fVar29 = fVar29 - fVar31;
          }
          else {
            fVar29 = fVar29 + fVar31;
          }
          auVar28._0_4_ = fVar29;
label_043d610c:
          if (uStack_f8._4_4_ <= 0.0) {
            if (uStack_f8._4_4_ < 0.0) {
              uStack_f8._4_4_ = uStack_f8._4_4_ - fVar31;
            }
          }
          else {
            uStack_f8._4_4_ = uStack_f8._4_4_ + fVar31;
          }
          System_Tuple__Create_int__int_
                    ((int)(auVar28._0_4_ / fVar30),(int)(uStack_f8._4_4_ / fVar30),MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
          return;
        }
      }
    }
  }
  fStack_cc = UVar11.z;
  uStack_c8 = UVar11._0_8_;
  il2cpp_runtime_helper_022b2c90();
label_043d42c1:
  pUVar18 = transform;
  il2cpp_runtime_helper_022b2fd0();
  auStack_f0._8_8_ = 0;
  auStack_f0._0_8_ = transform;
  uStack_f8 = &TypeInfo_ResourcePaths;
  plStack_100 = &TypeInfo_MinimapHandler;
  pUStack_108 = __this_09;
  if (g_data_057ae443 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae443 = '\x01';
  }
  _Stack_140.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_138 = (Il2CppType *)0x0;
  pUStack_130 = (UnityEngine_Object_o *)0x0;
  _Var36.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar37 = (Il2CppType *)0x0;
  key = (UnityEngine_Object_o *)0x0;
  lVar6 = pUVar18[5].fields.m_CachedPtr;
  if (lVar6 == 0) goto label_043d4747;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  length = *(int32_t *)(lVar6 + 0x18);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  if (0 < length) {
    System_Array__Clear(*(System_Array_o **)(lVar6 + 0x10),0,length,(MethodInfo *)0x0);
  }
  if (pUVar18[5].klass == (UnityEngine_Transform_c *)0x0) goto label_043d4747;
  __this_07 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        ((System_Collections_Generic_Dictionary_object__object__o *)pUVar18[5].klass,
                         MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
  if (__this_07 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_043d4747;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_120,
             __this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pUStack_130 = pUStack_110;
  _Stack_140 = _Stack_120;
  pIStack_138 = pIStack_118;
  do {
    __this.fields._8_8_ = pIVar37;
    __this.fields._dictionary = _Var36.genericMethod;
    __this.fields._currentKey = (Il2CppObject *)key;
    bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                       (__this,(MethodInfo_3251B20 *)&_Stack_140);
    pUVar21 = pUStack_130;
    if ((char)bVar15 == '\0') {
      __this_00.fields._8_8_ = pIVar37;
      __this_00.fields._dictionary = _Var36.genericMethod;
      __this_00.fields._currentKey = (Il2CppObject *)key;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_00,(MethodInfo_3251B10 *)&_Stack_140);
      goto label_043d461b;
    }
    if (pUVar18[5].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto label_043d471f;
    bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pUVar18[5].monitor,(Il2CppObject *)pUStack_130,MethodInfo_Boolean_ContainsKey);
    bVar13 = false;
    if ((char)bVar15 != '\0') {
      if (pUVar18[5].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto label_043d4729;
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (pUVar18[5].monitor,(Il2CppObject *)pUVar21,MethodInfo_BaseCharacter_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar15 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        if (x == (UnityEngine_Object_o *)0x0) goto label_043d4742;
        if (*(char *)&x[4].monitor == '\0') goto label_043d451d;
      }
      bVar13 = true;
    }
label_043d451d:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar16 = UnityEngine_Object__op_Equality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar13 || (uVar16 & 0xff) != 0) {
      if (pUVar18[5].klass == (UnityEngine_Transform_c *)0x0) goto label_043d472e;
      __this_08 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pUVar18[5].klass,
                             (Il2CppObject *)pUVar21,MethodInfo_Transform_get_Item);
      lVar6 = MethodInfo_Void_Add;
      pSVar7 = (System_Collections_Generic_List_object__o *)pUVar18[5].fields.m_CachedPtr;
      if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto label_043d4733;
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (pSVar7->fields)._items;
      if (pSVar8 == (System_Object_array *)0x0) goto label_043d4738;
      uVar16 = (pSVar7->fields)._size;
      if (uVar16 < (uint)pSVar8->max_length) {
        (pSVar7->fields)._size = uVar16 + 1;
        pSVar8->m_Items[(int)uVar16] = (Il2CppObject *)pUVar21;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar16);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar7,(Il2CppObject *)pUVar21,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_08 == (UnityEngine_Component_o *)0x0) {
        do {
          il2cpp_runtime_helper_022b2c90();
label_043d4742:
          il2cpp_runtime_helper_022b2c90();
label_043d4747:
          do {
            auVar32 = il2cpp_runtime_helper_022b2c90();
            if (auVar32._8_4_ != 1) {
label_043d4939:
              __this_04.fields._8_8_ = pIVar37;
              __this_04.fields._dictionary = _Var36.genericMethod;
              __this_04.fields._currentKey = (Il2CppObject *)key;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (__this_04,(MethodInfo_3251B10 *)&_Stack_140);
              _Unwind_Resume(auVar32._0_8_);
            }
            plVar23 = (long *)__cxa_begin_catch(auVar32._0_8_);
            lVar6 = *plVar23;
            __cxa_end_catch();
            __this_03.fields._8_8_ = pIVar37;
            __this_03.fields._dictionary = _Var36.genericMethod;
            __this_03.fields._currentKey = (Il2CppObject *)key;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_03,(MethodInfo_3251B10 *)&_Stack_140);
            if (lVar6 != 0) {
              il2cpp_runtime_helper_022fefe0(lVar6);
              goto label_043d4939;
            }
label_043d461b:
            pSVar7 = (System_Collections_Generic_List_object__o *)pUVar18[5].fields.m_CachedPtr;
          } while (pSVar7 == (System_Collections_Generic_List_object__o *)0x0);
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_120,pSVar7,MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
          _Var36 = _Stack_120;
          pIVar37 = pIStack_118;
          key = pUStack_110;
          while( true ) {
            __this_01.fields._8_8_ = pIVar37;
            __this_01.fields._list = _Var36.genericMethod;
            __this_01.fields._current = (Il2CppObject *)key;
            bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea0);
            if ((char)bVar15 == '\0') {
              __this_02.fields._8_8_ = pIVar37;
              __this_02.fields._list = _Var36.genericMethod;
              __this_02.fields._current = (Il2CppObject *)key;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea0);
              return;
            }
            if (pUVar18[5].klass == (UnityEngine_Transform_c *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Remove
                      ((System_Collections_Generic_Dictionary_object__object__o *)pUVar18[5].klass,
                       (Il2CppObject *)key,MethodInfo_Boolean_Remove);
            pSVar4 = pUVar18[5].monitor;
            pUVar22 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d471a;
            bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                               (pSVar4,(Il2CppObject *)pUVar22,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar15 != '\0') {
              pSVar4 = pUVar18[5].monitor;
              pUVar22 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d4724;
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar4,(Il2CppObject *)pUVar22,MethodInfo_Boolean_Remove);
            }
          }
          il2cpp_runtime_helper_022b2c90();
label_043d471a:
          il2cpp_runtime_helper_022b2c90();
label_043d471f:
          il2cpp_runtime_helper_022b2c90();
label_043d4724:
          il2cpp_runtime_helper_022b2c90();
label_043d4729:
          il2cpp_runtime_helper_022b2c90();
label_043d472e:
          il2cpp_runtime_helper_022b2c90();
label_043d4733:
          il2cpp_runtime_helper_022b2c90();
label_043d4738:
          il2cpp_runtime_helper_022b2c90();
        } while( true );
      }
      pUVar21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_08,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar21,(MethodInfo *)0x0);
    }
  } while( true );
}


// UI.MinimapHandler$$Update
// il2cpp: void UI_MinimapHandler__Update (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x43d4150

void UI_MinimapHandler__Update(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  UnityEngine_GameObject_o *__this_00;
  long lVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  Il2CppClass *pIVar7;
  UnityEngine_UI_Text_o *pUVar8;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  UnityEngine_Vector3_Fields UVar9;
  UnityEngine_Vector3_Fields UVar10;
  bool bVar11;
  bool_conflict bVar12;
  uint uVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  UnityEngine_Object_o *x;
  UnityEngine_Component_o *__this_08;
  UnityEngine_Object_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  long *plVar16;
  System_String_array *values;
  System_String_o *pSVar17;
  MethodInfo *method_00;
  undefined8 uVar18;
  System_String_array *x_00;
  System_String_array *format;
  UnityEngine_Component_o *unaff_R14;
  float __this_09;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Quaternion_o rotation;
  undefined1 auVar24 [12];
  UnityEngine_Vector3_Fields UVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_Fields UVar27;
  _union_249689 _Var28;
  Il2CppType *pIVar29;
  UnityEngine_Object_o *key;
  _union_249689 _Stack_b0;
  Il2CppType *pIStack_a8;
  UnityEngine_Object_o *pUStack_a0;
  _union_249689 _Stack_90;
  Il2CppType *pIStack_88;
  UnityEngine_Object_o *pUStack_80;
  UI_MinimapHandler_o *pUStack_78;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined8 uStack_38;
  
  if (g_data_057ae441 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae441 = '\x01';
  }
  UI_MinimapHandler__RemoveOldIcons(__this,method);
  UVar9.z = fStack_3c;
  UVar9._0_8_ = uStack_38;
  __this_00 = (__this->fields)._minimapPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar12 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    UVar10.z = fStack_3c;
    UVar10._0_8_ = uStack_38;
    UVar25.z = fStack_3c;
    UVar25._0_8_ = uStack_38;
    UVar9.z = fStack_3c;
    UVar9._0_8_ = uStack_38;
    if ((char)bVar12 == '\0') {
      return;
    }
    unaff_R14 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (unaff_R14 != (UnityEngine_Component_o *)0x0) {
      bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
      if (((unaff_R14->klass->_2).naturalAligment < bVar2) ||
         ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera)) goto label_043d42c1;
      lVar3 = unaff_R14[1].fields.m_CachedPtr;
      UVar9 = UVar25;
      if ((lVar3 != 0) &&
         (pUVar15 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), UVar9 = UVar10,
         pUVar15 != (UnityEngine_Transform_o *)0x0)) {
        UVar25 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
        UVar9.z = fStack_3c;
        UVar9._0_8_ = uStack_38;
        fStack_3c = UVar25.z;
        uStack_38 = UVar25._0_8_;
        lVar3 = unaff_R14[1].fields.m_CachedPtr;
        if ((lVar3 != 0) &&
           (pUVar15 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), UVar9 = UVar25,
           pUVar15 != (UnityEngine_Transform_o *)0x0)) {
          method_00 = (MethodInfo *)0x0;
          rotation = UnityEngine_Transform__get_rotation(pUVar15,(MethodInfo *)0x0);
          UVar26 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar26.fields.x * 57.29578;
          euler.fields.y = UVar26.fields.y * 57.29578;
          euler.fields.z = UVar26.fields.z * 57.29578;
          UVar26 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          fVar20 = UVar26.fields.y;
          UVar26.fields.z = fStack_3c;
          UVar26.fields._0_8_ = uStack_38;
          fVar22 = fVar20;
          UI_MinimapHandler__UpdateTiles(__this,UVar26,fVar20,method_00);
          position.fields.z = fStack_3c;
          position.fields._0_8_ = uStack_38;
          UI_MinimapHandler__UpdateIcons(__this,position,fVar22,method_00);
          format = (System_String_array *)auStack_48;
          fStack_40 = fStack_3c;
          auStack_48 = (undefined1  [8])uStack_38;
          if (g_data_057ae442 == '\0') {
            uStack_38._0_4_ = fVar20;
            uStack_38._4_4_ = fVar20;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
            il2cpp_runtime_helper_023445d0(&"S");
            il2cpp_runtime_helper_023445d0(&"F0");
            il2cpp_runtime_helper_023445d0(&"SW");
            il2cpp_runtime_helper_023445d0(&"W");
            il2cpp_runtime_helper_023445d0(&"SE");
            il2cpp_runtime_helper_023445d0(&"E");
            il2cpp_runtime_helper_023445d0(&"NW");
            il2cpp_runtime_helper_023445d0(&", ");
            il2cpp_runtime_helper_023445d0(&"NE");
            il2cpp_runtime_helper_023445d0(&"");
            il2cpp_runtime_helper_023445d0(&"N");
            g_data_057ae442 = '\x01';
            fVar20 = (float)uStack_38;
          }
          fVar22 = (float)(~-(uint)(fVar20 < 0.0) & (uint)fVar20 |
                          (uint)(fVar20 + 360.0) & -(uint)(fVar20 < 0.0));
          fVar22 = (float)(~-(uint)(360.0 < fVar22) & (uint)fVar22 |
                          (uint)(fVar22 + -360.0) & -(uint)(360.0 < fVar22));
          uVar18 = "";
          if ((fVar22 < 22.5) || (202.5 < fVar22)) {
            if ((fVar22 < 202.5) || (337.5 < fVar22)) {
              fVar20 = 22.5;
              if (fVar22 <= 22.5) {
                uVar18 = "N";
              }
              if (337.5 <= fVar22) {
                uVar18 = "N";
              }
              x_00 = (System_String_array *)(__this->fields)._compassLabel;
              goto joined_r0x043d605e;
            }
            fVar20 = 247.5;
            uVar18 = "SW";
            if (247.5 < fVar22) {
              if ((247.5 <= fVar22) && (fVar20 = 292.5, fVar22 <= 292.5)) {
                x_00 = (System_String_array *)(__this->fields)._compassLabel;
                uVar18 = "W";
                goto joined_r0x043d5d9c;
              }
              uVar18 = "";
              if (292.5 <= fVar22) {
                x_00 = (System_String_array *)(__this->fields)._compassLabel;
                uVar18 = "NW";
                goto joined_r0x043d605e;
              }
            }
label_043d5e31:
            x_00 = (System_String_array *)(__this->fields)._compassLabel;
joined_r0x043d5d9c:
            if (x_00 == (System_String_array *)0x0) goto label_043d608a;
label_043d5e3e:
            pIVar7 = (x_00->obj).klass;
            (**(code **)((long)((System_String_VTable *)pIVar7->vtable + 2) + 0x150))
                      (x_00,uVar18,*(undefined8 *)((long)((System_String_VTable *)pIVar7->vtable + 2) + 0x158)
                      );
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x170), lVar3 == 0)) goto label_043d608a;
            if (*(int *)(lVar3 + 0x14) != 1) {
              pUVar8 = (__this->fields)._positionLabel;
              x_00 = (System_String_array *)0x0;
              if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                vtableDispatch = (pUVar8->klass->vtable)._75_set_text.methodPtr;
                (*vtableDispatch)
                          (pUVar8,"",(pUVar8->klass->vtable)._75_set_text.method,
                           vtableDispatch);
                return;
              }
              goto label_043d608a;
            }
            if (unaff_R14 == (UnityEngine_Component_o *)0x0) goto label_043d608a;
            x_00 = unaff_R14[2].monitor;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            UVar27.z = fVar20;
            UVar27.x = (float)(int)extraout_XMM0_Qa;
            UVar27.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
            if ((char)bVar12 != '\0') {
              if ((unaff_R14[2].monitor != (void *)0x0) &&
                 (lVar3 = *(long *)((long)unaff_R14[2].monitor + 0x70), lVar3 != 0)) {
                pUVar15 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
                x_00 = (System_String_array *)0x0;
                if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                  UVar27 = (UnityEngine_Vector3_Fields)
                           UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
                  _auStack_48 = UVar27;
                  goto label_043d5ef3;
                }
              }
              goto label_043d608a;
            }
label_043d5ef3:
            fVar20 = UVar27.z;
            pUVar8 = (__this->fields)._positionLabel;
            values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
            pSVar17 = System_Single__ToString_3cccfe0(__this_09,(System_String_o *)auStack_48,"F0");
            x_00 = format;
            if (values == (System_String_array *)0x0) goto label_043d608a;
            if ((int)values->max_length != 0) {
              format = (System_String_array *)values->m_Items;
              values->m_Items[0] = pSVar17;
              il2cpp_runtime_helper_022b4080(format,pSVar17);
              if (1 < (uint)values->max_length) {
                values->m_Items[1] = ", ";
                fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 1);
                format = (System_String_array *)(auStack_48 + 4);
                pSVar17 = System_Single__ToString_3cccfe0(fVar22,(System_String_o *)format,"F0");
                if (2 < (uint)values->max_length) {
                  format = (System_String_array *)(values->m_Items + 2);
                  values->m_Items[2] = pSVar17;
                  il2cpp_runtime_helper_022b4080(format,pSVar17);
                  if (3 < (uint)values->max_length) {
                    format = (System_String_array *)(auStack_48 + 8);
                    values->m_Items[3] = ", ";
                    fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 3);
                    pSVar17 = System_Single__ToString_3cccfe0(fVar22,(System_String_o *)format,"F0");
                    if (4 < (uint)values->max_length) {
                      values->m_Items[4] = pSVar17;
                      il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                      pSVar17 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                      x_00 = values;
                      if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar8,pSVar17,(pUVar8->klass->vtable)._75_set_text.method);
                        return;
                      }
                      goto label_043d608a;
                    }
                  }
                }
              }
            }
          }
          else {
            fVar20 = 67.5;
            if (fVar22 <= 67.5) {
              x_00 = (System_String_array *)(__this->fields)._compassLabel;
              uVar18 = "NE";
              goto joined_r0x043d5d9c;
            }
            if ((fVar22 < 67.5) || (fVar20 = 112.5, 112.5 < fVar22)) {
              if ((fVar22 < 112.5) || (fVar20 = 157.5, 157.5 < fVar22)) {
                if (fVar22 < 157.5) goto label_043d5e31;
                x_00 = (System_String_array *)(__this->fields)._compassLabel;
                uVar18 = "S";
                goto joined_r0x043d5d9c;
              }
              x_00 = (System_String_array *)(__this->fields)._compassLabel;
              uVar18 = "SE";
            }
            else {
              x_00 = (System_String_array *)(__this->fields)._compassLabel;
              uVar18 = "E";
            }
joined_r0x043d605e:
            if (x_00 != (System_String_array *)0x0) goto label_043d5e3e;
label_043d608a:
            il2cpp_runtime_helper_022b2c90();
            format = x_00;
          }
          auVar19._0_8_ = il2cpp_runtime_helper_022b2ca0();
          auVar19._8_8_ = extraout_XMM0_Qb;
          if (g_data_057ae446 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
            g_data_057ae446 = '\x01';
          }
          fVar22 = *(float *)format->m_Items;
          fVar23 = fVar22 * 0.5;
          fVar21 = (float)auVar19._0_8_;
          if (fVar21 <= 0.0) {
            if (0.0 <= fVar21) goto label_043d610c;
            fVar21 = fVar21 - fVar23;
          }
          else {
            fVar21 = fVar21 + fVar23;
          }
          auVar19._0_4_ = fVar21;
label_043d610c:
          if (fVar20 <= 0.0) {
            if (fVar20 < 0.0) {
              fVar20 = fVar20 - fVar23;
            }
          }
          else {
            fVar20 = fVar20 + fVar23;
          }
          System_Tuple__Create_int__int_((int)(auVar19._0_4_ / fVar22),(int)(fVar20 / fVar22),MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
          return;
        }
      }
    }
  }
  fStack_3c = UVar9.z;
  uStack_38 = UVar9._0_8_;
  il2cpp_runtime_helper_022b2c90();
label_043d42c1:
  il2cpp_runtime_helper_022b2fd0();
  pUStack_78 = __this;
  if (g_data_057ae443 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae443 = '\x01';
  }
  _Stack_b0.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_a8 = (Il2CppType *)0x0;
  pUStack_a0 = (UnityEngine_Object_o *)0x0;
  _Var28.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar29 = (Il2CppType *)0x0;
  key = (UnityEngine_Object_o *)0x0;
  lVar3 = unaff_R14[5].fields.m_CachedPtr;
  if (lVar3 == 0) goto label_043d4747;
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  length = *(int32_t *)(lVar3 + 0x18);
  *(undefined4 *)(lVar3 + 0x18) = 0;
  if (0 < length) {
    System_Array__Clear(*(System_Array_o **)(lVar3 + 0x10),0,length,(MethodInfo *)0x0);
  }
  if (unaff_R14[5].klass == (UnityEngine_Component_c *)0x0) goto label_043d4747;
  __this_07 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14[5].klass,
                         MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
  if (__this_07 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_043d4747;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_90,
             __this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pUStack_a0 = pUStack_80;
  _Stack_b0 = _Stack_90;
  pIStack_a8 = pIStack_88;
  do {
    __this_01.fields._8_8_ = pIVar29;
    __this_01.fields._dictionary = _Var28.genericMethod;
    __this_01.fields._currentKey = (Il2CppObject *)key;
    bVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                       (__this_01,(MethodInfo_3251B20 *)&_Stack_b0);
    pUVar14 = pUStack_a0;
    if ((char)bVar12 == '\0') {
      __this_02.fields._8_8_ = pIVar29;
      __this_02.fields._dictionary = _Var28.genericMethod;
      __this_02.fields._currentKey = (Il2CppObject *)key;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251B10 *)&_Stack_b0);
      goto label_043d461b;
    }
    if (unaff_R14[5].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto label_043d471f;
    bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (unaff_R14[5].monitor,(Il2CppObject *)pUStack_a0,MethodInfo_Boolean_ContainsKey);
    bVar11 = false;
    if ((char)bVar12 != '\0') {
      if (unaff_R14[5].monitor == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto label_043d4729;
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (unaff_R14[5].monitor,(Il2CppObject *)pUVar14,MethodInfo_BaseCharacter_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        if (x == (UnityEngine_Object_o *)0x0) goto label_043d4742;
        if (*(char *)&x[4].monitor == '\0') goto label_043d451d;
      }
      bVar11 = true;
    }
label_043d451d:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar13 = UnityEngine_Object__op_Equality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar11 || (uVar13 & 0xff) != 0) {
      if (unaff_R14[5].klass == (UnityEngine_Component_c *)0x0) goto label_043d472e;
      __this_08 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14[5].klass,
                             (Il2CppObject *)pUVar14,MethodInfo_Transform_get_Item);
      lVar3 = MethodInfo_Void_Add;
      pSVar4 = (System_Collections_Generic_List_object__o *)unaff_R14[5].fields.m_CachedPtr;
      if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto label_043d4733;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (pSVar4->fields)._items;
      if (pSVar5 == (System_Object_array *)0x0) goto label_043d4738;
      uVar13 = (pSVar4->fields)._size;
      if (uVar13 < (uint)pSVar5->max_length) {
        (pSVar4->fields)._size = uVar13 + 1;
        pSVar5->m_Items[(int)uVar13] = (Il2CppObject *)pUVar14;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar13);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar4,(Il2CppObject *)pUVar14,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_08 == (UnityEngine_Component_o *)0x0) {
        do {
          il2cpp_runtime_helper_022b2c90();
label_043d4742:
          il2cpp_runtime_helper_022b2c90();
label_043d4747:
          do {
            auVar24 = il2cpp_runtime_helper_022b2c90();
            if (auVar24._8_4_ != 1) {
label_043d4939:
              __this_06.fields._8_8_ = pIVar29;
              __this_06.fields._dictionary = _Var28.genericMethod;
              __this_06.fields._currentKey = (Il2CppObject *)key;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (__this_06,(MethodInfo_3251B10 *)&_Stack_b0);
              _Unwind_Resume(auVar24._0_8_);
            }
            plVar16 = (long *)__cxa_begin_catch(auVar24._0_8_);
            lVar3 = *plVar16;
            __cxa_end_catch();
            __this_05.fields._8_8_ = pIVar29;
            __this_05.fields._dictionary = _Var28.genericMethod;
            __this_05.fields._currentKey = (Il2CppObject *)key;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_05,(MethodInfo_3251B10 *)&_Stack_b0);
            if (lVar3 != 0) {
              il2cpp_runtime_helper_022fefe0(lVar3);
              goto label_043d4939;
            }
label_043d461b:
            pSVar4 = (System_Collections_Generic_List_object__o *)unaff_R14[5].fields.m_CachedPtr;
          } while (pSVar4 == (System_Collections_Generic_List_object__o *)0x0);
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_90,pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
          _Var28 = _Stack_90;
          pIVar29 = pIStack_88;
          key = pUStack_80;
          while( true ) {
            __this_03.fields._8_8_ = pIVar29;
            __this_03.fields._list = _Var28.genericMethod;
            __this_03.fields._current = (Il2CppObject *)key;
            bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30);
            if ((char)bVar12 == '\0') {
              __this_04.fields._8_8_ = pIVar29;
              __this_04.fields._list = _Var28.genericMethod;
              __this_04.fields._current = (Il2CppObject *)key;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
              return;
            }
            if (unaff_R14[5].klass == (UnityEngine_Component_c *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Remove
                      ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R14[5].klass,
                       (Il2CppObject *)key,MethodInfo_Boolean_Remove);
            pSVar6 = unaff_R14[5].monitor;
            pUVar15 = UnityEngine_Component__get_transform(unaff_R14,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d471a;
            bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                               (pSVar6,(Il2CppObject *)pUVar15,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar12 != '\0') {
              pSVar6 = unaff_R14[5].monitor;
              pUVar15 = UnityEngine_Component__get_transform(unaff_R14,(MethodInfo *)0x0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d4724;
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar6,(Il2CppObject *)pUVar15,MethodInfo_Boolean_Remove);
            }
          }
          il2cpp_runtime_helper_022b2c90();
label_043d471a:
          il2cpp_runtime_helper_022b2c90();
label_043d471f:
          il2cpp_runtime_helper_022b2c90();
label_043d4724:
          il2cpp_runtime_helper_022b2c90();
label_043d4729:
          il2cpp_runtime_helper_022b2c90();
label_043d472e:
          il2cpp_runtime_helper_022b2c90();
label_043d4733:
          il2cpp_runtime_helper_022b2c90();
label_043d4738:
          il2cpp_runtime_helper_022b2c90();
        } while( true );
      }
      pUVar14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_08,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
    }
  } while( true );
}


// UI.MinimapHandler$$UpdateCompass
// il2cpp: void UI_MinimapHandler__UpdateCompass (UI_MinimapHandler_o* __this, Cameras_InGameCamera_o* camera, UnityEngine_Vector3_o position, float y, const MethodInfo* method);
// 0x43d5bb0

void UI_MinimapHandler__UpdateCompass
               (UI_MinimapHandler_o *__this,Cameras_InGameCamera_o *camera,UnityEngine_Vector3_o position,
               float y,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  long lVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Text_o *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  System_String_array *values;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_String_array *x;
  System_String_array *format;
  float __this_01;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields UVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  format = (System_String_array *)auStack_48;
  _auStack_48 = position.fields;
  if (g_data_057ae442 == '\0') {
    auStack_40._8_4_ = y;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"F0");
    il2cpp_runtime_helper_023445d0(&"SW");
    il2cpp_runtime_helper_023445d0(&"W");
    il2cpp_runtime_helper_023445d0(&"SE");
    il2cpp_runtime_helper_023445d0(&"E");
    il2cpp_runtime_helper_023445d0(&"NW");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"NE");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"N");
    g_data_057ae442 = '\x01';
    y = (float)auStack_40._8_4_;
  }
  fVar11 = (float)(~-(uint)(y < 0.0) & (uint)y | (uint)(y + 360.0) & -(uint)(y < 0.0));
  fVar11 = (float)(~-(uint)(360.0 < fVar11) & (uint)fVar11 | (uint)(fVar11 + -360.0) & -(uint)(360.0 < fVar11)
                  );
  uVar7 = "";
  if ((fVar11 < 22.5) || (202.5 < fVar11)) {
    if ((fVar11 < 202.5) || (337.5 < fVar11)) {
      fVar9 = 22.5;
      if (fVar11 <= 22.5) {
        uVar7 = "N";
      }
      if (337.5 <= fVar11) {
        uVar7 = "N";
      }
      x = (System_String_array *)(__this->fields)._compassLabel;
      goto joined_r0x043d605e;
    }
    fVar9 = 247.5;
    uVar7 = "SW";
    if (247.5 < fVar11) {
      if ((247.5 <= fVar11) && (fVar9 = 292.5, fVar11 <= 292.5)) {
        x = (System_String_array *)(__this->fields)._compassLabel;
        uVar7 = "W";
        goto joined_r0x043d5d9c;
      }
      uVar7 = "";
      if (292.5 <= fVar11) {
        x = (System_String_array *)(__this->fields)._compassLabel;
        uVar7 = "NW";
        goto joined_r0x043d605e;
      }
    }
label_043d5e31:
    x = (System_String_array *)(__this->fields)._compassLabel;
joined_r0x043d5d9c:
    if (x == (System_String_array *)0x0) goto label_043d608a;
label_043d5e3e:
    pIVar1 = (x->obj).klass;
    (**(code **)((long)((System_String_VTable *)pIVar1->vtable + 2) + 0x150))
              (x,uVar7,*(undefined8 *)((long)((System_String_VTable *)pIVar1->vtable + 2) + 0x158));
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x170), lVar2 == 0)) goto label_043d608a;
    if (*(int *)(lVar2 + 0x14) != 1) {
      pUVar4 = (__this->fields)._positionLabel;
      x = (System_String_array *)0x0;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar4->klass->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar4,"",(pUVar4->klass->vtable)._75_set_text.method,vtableDispatch);
        return;
      }
      goto label_043d608a;
    }
    if (camera == (Cameras_InGameCamera_o *)0x0) goto label_043d608a;
    x = (System_String_array *)(camera->fields)._follow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    UVar13.z = fVar9;
    UVar13.x = (float)(int)extraout_XMM0_Qa;
    UVar13.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
    if ((char)bVar5 != '\0') {
      pCVar3 = (camera->fields)._follow;
      if ((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar3->fields).Dead, lVar2 != 0)) {
        __this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
        x = (System_String_array *)0x0;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar13 = (UnityEngine_Vector3_Fields)
                   UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          _auStack_48 = UVar13;
          goto label_043d5ef3;
        }
      }
      goto label_043d608a;
    }
label_043d5ef3:
    fVar9 = UVar13.z;
    pUVar4 = (__this->fields)._positionLabel;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
    pSVar6 = System_Single__ToString_3cccfe0(__this_01,(System_String_o *)auStack_48,"F0");
    x = format;
    if (values == (System_String_array *)0x0) goto label_043d608a;
    if ((int)values->max_length != 0) {
      format = (System_String_array *)values->m_Items;
      values->m_Items[0] = pSVar6;
      il2cpp_runtime_helper_022b4080(format,pSVar6);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = ", ";
        fVar11 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 1);
        format = (System_String_array *)(auStack_48 + 4);
        pSVar6 = System_Single__ToString_3cccfe0(fVar11,(System_String_o *)format,"F0");
        if (2 < (uint)values->max_length) {
          format = (System_String_array *)(values->m_Items + 2);
          values->m_Items[2] = pSVar6;
          il2cpp_runtime_helper_022b4080(format,pSVar6);
          if (3 < (uint)values->max_length) {
            format = (System_String_array *)(auStack_48 + 8);
            values->m_Items[3] = ", ";
            fVar11 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 3);
            pSVar6 = System_Single__ToString_3cccfe0(fVar11,(System_String_o *)format,"F0");
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar6;
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              pSVar6 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              x = values;
              if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                          (pUVar4,pSVar6,(pUVar4->klass->vtable)._75_set_text.method);
                return;
              }
              goto label_043d608a;
            }
          }
        }
      }
    }
  }
  else {
    fVar9 = 67.5;
    if (fVar11 <= 67.5) {
      x = (System_String_array *)(__this->fields)._compassLabel;
      uVar7 = "NE";
      goto joined_r0x043d5d9c;
    }
    if ((fVar11 < 67.5) || (fVar9 = 112.5, 112.5 < fVar11)) {
      if ((fVar11 < 112.5) || (fVar9 = 157.5, 157.5 < fVar11)) {
        if (fVar11 < 157.5) goto label_043d5e31;
        x = (System_String_array *)(__this->fields)._compassLabel;
        uVar7 = "S";
        goto joined_r0x043d5d9c;
      }
      x = (System_String_array *)(__this->fields)._compassLabel;
      uVar7 = "SE";
    }
    else {
      x = (System_String_array *)(__this->fields)._compassLabel;
      uVar7 = "E";
    }
joined_r0x043d605e:
    if (x != (System_String_array *)0x0) goto label_043d5e3e;
label_043d608a:
    il2cpp_runtime_helper_022b2c90();
    format = x;
  }
  auVar8._0_8_ = il2cpp_runtime_helper_022b2ca0();
  auVar8._8_8_ = extraout_XMM0_Qb;
  if (g_data_057ae446 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
    g_data_057ae446 = '\x01';
  }
  fVar11 = *(float *)format->m_Items;
  fVar12 = fVar11 * 0.5;
  fVar10 = (float)auVar8._0_8_;
  if (fVar10 <= 0.0) {
    if (0.0 <= fVar10) goto label_043d610c;
    fVar10 = fVar10 - fVar12;
  }
  else {
    fVar10 = fVar10 + fVar12;
  }
  auVar8._0_4_ = fVar10;
label_043d610c:
  if (fVar9 <= 0.0) {
    if (fVar9 < 0.0) {
      fVar9 = fVar9 - fVar12;
    }
  }
  else {
    fVar9 = fVar9 + fVar12;
  }
  System_Tuple__Create_int__int_((int)(auVar8._0_4_ / fVar11),(int)(fVar9 / fVar11),MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
  return;
}


// UI.MinimapHandler$$RemoveOldIcons
// il2cpp: void UI_MinimapHandler__RemoveOldIcons (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x43d42d0

void UI_MinimapHandler__RemoveOldIcons(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Transform__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_Transform_array *pUVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  bool bVar6;
  bool_conflict bVar7;
  uint uVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Component_o *__this_07;
  UnityEngine_Transform_o *pUVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  _union_249689 _Var13;
  Il2CppType *pIVar14;
  UnityEngine_Transform_o *key;
  _union_249689 local_68;
  Il2CppType *pIStack_60;
  UnityEngine_Transform_o *local_58;
  _union_249689 local_48;
  Il2CppType *pIStack_40;
  UnityEngine_Transform_o *local_38;
  
  if (g_data_057ae443 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae443 = '\x01';
  }
  local_68.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (UnityEngine_Transform_o *)0x0;
  _Var13.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  key = (UnityEngine_Transform_o *)0x0;
  pSVar2 = (__this->fields)._iconsToRemove;
  if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043d4747;
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d4747;
  __this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar3,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
  if (__this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_043d4747;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_48,
             __this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  local_58 = local_38;
  local_68 = local_48;
  pIStack_60 = pIStack_40;
  do {
    __this_00.fields._8_8_ = pIVar14;
    __this_00.fields._dictionary = _Var13.genericMethod;
    __this_00.fields._currentKey = (Il2CppObject *)key;
    bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_00,(MethodInfo_3251B20 *)&local_68);
    pUVar10 = local_58;
    if ((char)bVar7 == '\0') {
      __this_01.fields._8_8_ = pIVar14;
      __this_01.fields._dictionary = _Var13.genericMethod;
      __this_01.fields._currentKey = (Il2CppObject *)key;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_01,(MethodInfo_3251B10 *)&local_68);
      goto label_043d461b;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d471f;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)local_58,MethodInfo_Boolean_ContainsKey);
    bVar6 = false;
    if ((char)bVar7 != '\0') {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d4729;
      pUVar9 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,(Il2CppObject *)pUVar10,MethodInfo_BaseCharacter_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (pUVar9 == (UnityEngine_Object_o *)0x0) goto label_043d4742;
        if (*(char *)&pUVar9[4].monitor == '\0') goto label_043d451d;
      }
      bVar6 = true;
    }
label_043d451d:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6 || (uVar8 & 0xff) != 0) {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d472e;
      __this_07 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar3,(Il2CppObject *)pUVar10,MethodInfo_Transform_get_Item);
      lVar5 = MethodInfo_Void_Add;
      pSVar2 = (__this->fields)._iconsToRemove;
      if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043d4733;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar2->fields)._items;
      if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_043d4738;
      uVar8 = (pSVar2->fields)._size;
      if (uVar8 < (uint)pUVar4->max_length) {
        (pSVar2->fields)._size = uVar8 + 1;
        pUVar4->m_Items[(int)uVar8] = pUVar10;
        il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)pUVar10,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_07 == (UnityEngine_Component_o *)0x0) {
        do {
          il2cpp_runtime_helper_022b2c90();
label_043d4742:
          il2cpp_runtime_helper_022b2c90();
label_043d4747:
          do {
            auVar12 = il2cpp_runtime_helper_022b2c90();
            if (auVar12._8_4_ != 1) {
label_043d4939:
              __this_05.fields._8_8_ = pIVar14;
              __this_05.fields._dictionary = _Var13.genericMethod;
              __this_05.fields._currentKey = (Il2CppObject *)key;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (__this_05,(MethodInfo_3251B10 *)&local_68);
              _Unwind_Resume(auVar12._0_8_);
            }
            plVar11 = (long *)__cxa_begin_catch(auVar12._0_8_);
            lVar5 = *plVar11;
            __cxa_end_catch();
            __this_04.fields._8_8_ = pIVar14;
            __this_04.fields._dictionary = _Var13.genericMethod;
            __this_04.fields._currentKey = (Il2CppObject *)key;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_04,(MethodInfo_3251B10 *)&local_68);
            if (lVar5 != 0) {
              il2cpp_runtime_helper_022fefe0(lVar5);
              goto label_043d4939;
            }
label_043d461b:
            pSVar2 = (__this->fields)._iconsToRemove;
          } while (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0);
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
                     (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
          _Var13 = local_48;
          pIVar14 = pIStack_40;
          key = local_38;
          while( true ) {
            __this_02.fields._8_8_ = pIVar14;
            __this_02.fields._list = _Var13.genericMethod;
            __this_02.fields._current = (Il2CppObject *)key;
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
            if ((char)bVar7 == '\0') {
              __this_03.fields._8_8_ = pIVar14;
              __this_03.fields._list = _Var13.genericMethod;
              __this_03.fields._current = (Il2CppObject *)key;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
              return;
            }
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar3,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters;
            pUVar10 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d471a;
            bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                              (pSVar3,(Il2CppObject *)pUVar10,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar7 != '\0') {
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characters
              ;
              pUVar10 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d4724;
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar3,(Il2CppObject *)pUVar10,MethodInfo_Boolean_Remove);
            }
          }
          il2cpp_runtime_helper_022b2c90();
label_043d471a:
          il2cpp_runtime_helper_022b2c90();
label_043d471f:
          il2cpp_runtime_helper_022b2c90();
label_043d4724:
          il2cpp_runtime_helper_022b2c90();
label_043d4729:
          il2cpp_runtime_helper_022b2c90();
label_043d472e:
          il2cpp_runtime_helper_022b2c90();
label_043d4733:
          il2cpp_runtime_helper_022b2c90();
label_043d4738:
          il2cpp_runtime_helper_022b2c90();
        } while( true );
      }
      pUVar9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar9,(MethodInfo *)0x0);
    }
  } while( true );
}


// UI.MinimapHandler$$UpdateIcons
// il2cpp: void UI_MinimapHandler__UpdateIcons (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, float y, const MethodInfo* method);
// 0x43d55f0

void UI_MinimapHandler__UpdateIcons
               (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o position,float y,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_GameObject_o *pUVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_XMM0_Qb;
  undefined1 auVar10 [12];
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar17;
  undefined8 local_68;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  fVar13 = position.fields.x;
  fVar14 = position.fields.y;
  uVar15 = (undefined4)in_XMM0_Qb;
  uVar16 = (undefined4)((ulong)in_XMM0_Qb >> 0x20);
  if (g_data_057ae444 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae444 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
  fVar7 = fVar13;
  if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar2,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans),
     fVar7 = fVar13, __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
  {
label_043d59df:
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ == 1) {
      plVar6 = (long *)__cxa_begin_catch(auVar10._0_8_);
      lVar3 = *plVar6;
      __cxa_end_catch();
      __this_02.fields._dictionary._4_4_ = fVar14;
      __this_02.fields._dictionary._0_4_ = fVar7;
      __this_02.fields._index = uVar15;
      __this_02.fields._version = uVar16;
      __this_02.fields._currentKey = (Il2CppObject *)pSVar17;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff68);
      if (lVar3 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar3);
    }
    __this_03.fields._dictionary._4_4_ = fVar14;
    __this_03.fields._dictionary._0_4_ = fVar7;
    __this_03.fields._index = uVar15;
    __this_03.fields._version = uVar16;
    __this_03.fields._currentKey = (Il2CppObject *)pSVar17;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff68);
    _Unwind_Resume(auVar10._0_8_);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            (&local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  fVar7 = fVar13;
  pSVar17 = local_48.fields._dictionary;
label_043d5734:
  __this_00.fields._dictionary._4_4_ = fVar14;
  __this_00.fields._dictionary._0_4_ = fVar7;
  __this_00.fields._index = uVar15;
  __this_00.fields._version = uVar16;
  __this_00.fields._currentKey = (Il2CppObject *)pSVar17;
  bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                    (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff68);
  if ((char)bVar4 == '\0') {
    __this_01.fields._dictionary._4_4_ = fVar14;
    __this_01.fields._dictionary._0_4_ = fVar7;
    __this_01.fields._index = uVar15;
    __this_01.fields._version = uVar16;
    __this_01.fields._currentKey = (Il2CppObject *)pSVar17;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff68);
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto code_r0x043d5755;
  il2cpp_runtime_helper_022b2c90();
  goto label_043d59bc;
code_r0x043d5755:
  __this_05 = (UnityEngine_Transform_o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar2,local_48.fields._currentKey,MethodInfo_Transform_get_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)local_48.fields._currentKey,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar4 == '\0') goto label_043d5734;
  if ((UnityEngine_Transform_o *)local_48.fields._currentKey == (UnityEngine_Transform_o *)0x0) {
label_043d59bc:
    il2cpp_runtime_helper_022b2c90();
label_043d59c1:
    il2cpp_runtime_helper_022b2c90();
label_043d59c6:
    il2cpp_runtime_helper_022b2c90();
label_043d59cb:
    il2cpp_runtime_helper_022b2c90();
label_043d59d0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    UVar11 = UnityEngine_Transform__get_position
                       ((UnityEngine_Transform_o *)local_48.fields._currentKey,(MethodInfo *)0x0);
    UVar12 = UnityEngine_Transform__get_position
                       ((UnityEngine_Transform_o *)local_48.fields._currentKey,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(UVar12.fields._0_8_);
    }
    fVar7 = (float)**(int **)(TypeInfo_MinimapCamera + 0xb8) / (__this->fields)._height;
    fVar14 = 0.0;
    uVar15 = 0;
    uVar16 = 0;
    if (g_data_057a6841 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_68._0_4_ = UVar11.fields.x;
    fVar8 = fVar7 * ((float)local_68 - fVar13);
    fVar9 = fVar7 * (UVar12.fields.z - position.fields.z);
    fVar7 = fVar7 * 0.0;
    local_68 = (Il2CppType **)CONCAT44(fVar9,fVar8);
    fVar8 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    if (fVar8 <= (float)**(int **)(TypeInfo_MinimapCamera + 0xb8) * 0.5) {
      if (__this_05 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0)
        ;
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
label_043d595c:
            UVar11.fields.z = fVar7;
            UVar11.fields._0_8_ = local_68;
            UnityEngine_Transform__set_localPosition(__this_05,UVar11,(MethodInfo *)0x0);
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            UnityEngine_Transform__set_rotation
                      (__this_05,
                       (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                       (MethodInfo *)0x0);
            goto label_043d5734;
          }
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
            goto label_043d595c;
          }
          goto label_043d59da;
        }
        goto label_043d59cb;
      }
      goto label_043d59d0;
    }
    if (__this_05 == (UnityEngine_Transform_o *)0x0) goto label_043d59c1;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_043d59c6;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_043d5734;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      goto label_043d5734;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d59da:
  il2cpp_runtime_helper_022b2c90();
  goto label_043d59df;
}


// UI.MinimapHandler$$UpdateTiles
// il2cpp: void UI_MinimapHandler__UpdateTiles (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, float rotation, const MethodInfo* method);
// 0x43d4980

void UI_MinimapHandler__UpdateTiles
               (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o position,float rotation,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t width;
  System_Object_array *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  UnityEngine_UI_RawImage_array *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_Queue_Tuple_int__int___o *pSVar7;
  Cameras_MinimapCamera_o *__this_00;
  long lVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  undefined8 uVar9;
  Il2CppObject *key;
  bool_conflict bVar10;
  System_Tuple_T1__T2__o *item;
  System_Collections_Generic_List_object__o *__this_08;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_09;
  UnityEngine_Object_o *obj;
  System_Tuple_T1__T2__o *key_00;
  UnityEngine_Texture2D_o *__this_10;
  UnityEngine_Texture_o *value;
  System_Tuple_int__int__o *pSVar11;
  long *plVar12;
  int iVar13;
  MethodInfo *method_00;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  undefined8 in_XMM0_Qb;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Quaternion_o value_00;
  undefined1 auVar21 [12];
  UnityEngine_Vector3_o value_01;
  undefined8 in_stack_ffffffffffffff28;
  UI_MinimapHandler_o *in_stack_ffffffffffffff38;
  undefined1 local_b8 [40];
  Il2CppType *pIStack_90;
  Il2CppObject *local_88;
  undefined1 local_78 [16];
  System_Collections_Generic_Dictionary_object__object__o *local_68;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  float local_48;
  
  local_48 = position.fields.z;
  local_78._0_8_ = position.fields._0_8_;
  local_78._8_8_ = in_XMM0_Qb;
  if (g_data_057ae445 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Tuple_2_In);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Tuple_2_Int32_Int32_GetEnumer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Tuple_int_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_Dequeue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
    g_data_057ae445 = '\x01';
  }
  local_b8._0_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  local_b8._8_8_ = (Il2CppType *)0x0;
  local_b8._16_8_ = (Il2CppObject *)0x0;
  local_b8._32_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_90 = (Il2CppType *)0x0;
  local_88 = (Il2CppObject *)0x0;
  if (g_data_057ae446 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
    g_data_057ae446 = '\x01';
  }
  fVar17 = (__this->fields)._height;
  fVar18 = fVar17 * 0.5;
  fVar19 = local_78._0_4_;
  if (fVar19 <= 0.0) {
    if (fVar19 < 0.0) {
      fVar19 = fVar19 - fVar18;
    }
  }
  else {
    fVar19 = fVar19 + fVar18;
  }
  if (local_48 <= 0.0) {
    fVar20 = local_48;
    if (local_48 < 0.0) {
      fVar20 = local_48 - fVar18;
    }
  }
  else {
    fVar20 = fVar18 + local_48;
  }
  item = System_Tuple__Create_int__int_((int)(fVar19 / fVar17),(int)(fVar20 / fVar17),MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
  if (item == (System_Tuple_T1__T2__o *)0x0) goto label_043d53ef;
  pSVar11 = (__this->fields)._currentTile;
  if (pSVar11 == (System_Tuple_int__int__o *)0x0) goto label_043d53ef;
  if ((*(int *)&(item->fields).m_Item1 == (pSVar11->fields).m_Item1) &&
     (*(int *)((long)&(item->fields).m_Item1 + 4) == (pSVar11->fields).m_Item2)) {
    if ((char)(__this->fields)._needUpdateTiles == '\0') goto label_043d52e7;
  }
  else {
    *(undefined1 *)&(__this->fields)._needUpdateTiles = 1;
  }
  *(undefined1 *)&(__this->fields)._needUpdateTiles = 0;
  (__this->fields)._currentTile = (System_Tuple_int__int__o *)item;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentTile);
  if (g_data_057ae447 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item2);
    g_data_057ae447 = '\x01';
  }
  iVar14 = *(int *)((long)&(item->fields).m_Item1 + 4);
  fVar17 = (__this->fields)._height;
  (__this->fields)._currentTileCenter.fields.x = (float)*(int *)&(item->fields).m_Item1 * fVar17;
  (__this->fields)._currentTileCenter.fields.y = fVar17;
  (__this->fields)._currentTileCenter.fields.z = (float)iVar14 * fVar17;
  __this_08 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Tuple_int_int);
  System_Collections_Generic_List_object____ctor(__this_08,MethodInfo_List_1_System_Tuple_2_Int32_Int32);
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._tileTextures;
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d53ef;
  __this_09 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar4,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Tuple_2_In);
  if (__this_09 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_043d53ef;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_60,
             __this_09,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  local_b8._16_8_ = local_50;
  local_b8._0_8_ = local_60._0_8_;
  local_b8._8_8_ = local_60._8_8_;
  if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
    while (__this_02.fields._8_8_ = item,
          __this_02.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28,
          __this_02.fields._currentKey = (Il2CppObject *)__this,
          bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_02,(MethodInfo_3251B20 *)local_b8), uVar9 = local_b8._16_8_,
          (char)bVar10 != '\0') {
      if ((Il2CppObject *)local_b8._16_8_ == (Il2CppObject *)0x0) goto label_043d53f9;
      iVar14 = *(int *)&((Il2CppObject *)(local_b8._16_8_ + 0x10))->klass - *(int *)&(item->fields).m_Item1;
      if (g_data_057a8aa8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a8aa8 = '\x01';
        iVar13 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar13 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar13 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar13 = -iVar14;
      if (0 < iVar14) {
        iVar13 = iVar14;
      }
      if (2 < iVar13) goto label_043d540d;
      iVar14 = *(int *)((long)&((Il2CppObject *)(uVar9 + 0x10))->klass + 4) -
               *(int *)((long)&(item->fields).m_Item1 + 4);
      if (g_data_057a8aa8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a8aa8 = '\x01';
        iVar13 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar13 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar13 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar13 = -iVar14;
      if (0 < iVar14) {
        iVar13 = iVar14;
      }
      if (2 < iVar13) goto label_043d540d;
    }
  }
  else {
label_043d4d5a:
    __this_01.fields._8_8_ = item;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
    __this_01.fields._currentKey = (Il2CppObject *)__this;
    bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                       (__this_01,(MethodInfo_3251B20 *)local_b8);
    uVar9 = local_b8._16_8_;
    if ((char)bVar10 != '\0') {
      if ((Il2CppObject *)local_b8._16_8_ == (Il2CppObject *)0x0) goto label_043d53f9;
      iVar14 = *(int *)&((Il2CppObject *)(local_b8._16_8_ + 0x10))->klass - *(int *)&(item->fields).m_Item1;
      if (g_data_057a8aa8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a8aa8 = '\x01';
        iVar13 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar13 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar13 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar13 = -iVar14;
      if (0 < iVar14) {
        iVar13 = iVar14;
      }
      if (iVar13 < 3) goto code_r0x043d4dcf;
      goto label_043d4e29;
    }
  }
  __this_03.fields._8_8_ = item;
  __this_03.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
  __this_03.fields._currentKey = (Il2CppObject *)__this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)local_b8);
  in_stack_ffffffffffffff38 = __this;
  if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) goto label_043d53ef;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_08,MethodInfo_List_1_T_Enumerator_System_Tuple_2_Int32_Int32_GetEnumer);
  local_88 = local_50;
  local_b8._32_8_ = local_60._0_8_;
  pIStack_90 = (Il2CppType *)local_60._8_8_;
  while (__this_04.fields._8_8_ = item,
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
        __this_04.fields._current = (Il2CppObject *)__this,
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_04,(MethodInfo_321A1D0 *)(local_b8 + 0x20)), key = local_88,
        (char)bVar10 != '\0') {
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._tileTextures;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d53fe;
    obj = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary_object__object___get_Item(pSVar4,local_88,MethodInfo_Texture2D_get_Item);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._tileTextures;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d5403;
    System_Collections_Generic_Dictionary_object__object___Remove(pSVar4,key,MethodInfo_Boolean_Remove);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043d5408;
    bVar10 = System_Collections_Generic_HashSet_object___Contains(pSVar3,key,MethodInfo_Boolean_Contains);
    if ((char)bVar10 != '\0') {
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043d5412;
      System_Collections_Generic_HashSet_object___Remove(pSVar3,key,MethodInfo_Boolean_Remove);
    }
  }
  __this_05.fields._8_8_ = item;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_05.fields._current = (Il2CppObject *)__this;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)(local_b8 + 0x20));
  in_stack_ffffffffffffff38 = __this;
  do {
    pSVar7 = (__this->fields)._createTileQueue;
    if (pSVar7 != (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) {
      System_Collections_Generic_Queue_object___Clear
                ((System_Collections_Generic_Queue_T__o *)pSVar7,MethodInfo_Void_Clear);
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar10 = System_Collections_Generic_HashSet_object___Contains
                           (pSVar3,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
        if ((char)bVar10 == '\0') {
          pSVar7 = (__this->fields)._createTileQueue;
          if (pSVar7 == (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) goto label_043d53ef;
          System_Collections_Generic_Queue_object___Enqueue
                    ((System_Collections_Generic_Queue_T__o *)pSVar7,(Il2CppObject *)item,MethodInfo_Void_Enqueue);
        }
        uVar16 = 0;
        iVar14 = -1;
        do {
          uVar15 = (uint)uVar16;
          iVar13 = (int)((ulong)((long)(int)uVar15 * 0x55555555) >> 0x20) - uVar15;
          key_00 = System_Tuple__Create_int__int_
                             (iVar14 + (int)(uVar16 / 3) * -3 + *(int *)&(item->fields).m_Item1,
                              *(int *)((long)&(item->fields).m_Item1 + 4) + ((iVar13 >> 1) - (iVar13 >> 0x1f))
                              + 1,MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._tileTextures;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d53ef;
          bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar4,(Il2CppObject *)key_00,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar10 == '\0') {
            local_68 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._tileTextures;
            __this = in_stack_ffffffffffffff38;
            if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              __this = in_stack_ffffffffffffff38;
            }
            width = **(int32_t **)(TypeInfo_MinimapCamera + 0xb8);
            __this_10 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
            UnityEngine_Texture2D___ctor_4dd9130(__this_10,width,width,3,0,(MethodInfo *)0x0);
            in_stack_ffffffffffffff38 = __this;
            if (local_68 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d53ef;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (local_68,(Il2CppObject *)key_00,(Il2CppObject *)__this_10,MethodInfo_Void_set_Item);
            in_stack_ffffffffffffff38 = __this;
          }
          pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
          if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043d53ef;
          bVar10 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar3,(Il2CppObject *)key_00,MethodInfo_Boolean_Contains);
          if ((key_00 != item) && ((char)bVar10 == '\0')) {
            pSVar7 = (__this->fields)._createTileQueue;
            if (pSVar7 == (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) goto label_043d53ef;
            System_Collections_Generic_Queue_object___Enqueue
                      ((System_Collections_Generic_Queue_T__o *)pSVar7,(Il2CppObject *)key_00,MethodInfo_Void_Enqueue);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._tileTextures;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d53ef;
          value = (UnityEngine_Texture_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar4,(Il2CppObject *)key_00,MethodInfo_Texture2D_get_Item);
          pUVar5 = (__this->fields)._images;
          if (pUVar5 == (UnityEngine_UI_RawImage_array *)0x0) goto label_043d53ef;
          if ((uint)pUVar5->max_length <= uVar15) goto label_043d53f4;
          if (pUVar5->m_Items[(int)uVar15] == (UnityEngine_UI_RawImage_o *)0x0) goto label_043d53ef;
          UnityEngine_UI_RawImage__set_texture(pUVar5->m_Items[(int)uVar15],value,(MethodInfo *)0x0);
          uVar16 = (ulong)(uVar15 + 1);
          iVar14 = iVar14 + 1;
        } while (uVar15 + 1 != 9);
label_043d52e7:
        if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0(TypeInfo_MinimapCamera);
        }
        pUVar6 = (__this->fields)._tileTransform;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          fVar17 = (float)**(int **)(TypeInfo_MinimapCamera + 0xb8) / (__this->fields)._height;
          value_01.fields.x = fVar17 * ((__this->fields)._currentTileCenter.fields.x - (float)local_78._0_4_);
          value_01.fields.y = fVar17 * ((__this->fields)._currentTileCenter.fields.z - local_48);
          value_01.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(pUVar6,value_01,(MethodInfo *)0x0);
          pUVar6 = (__this->fields)._maskTransform;
          auVar21._4_8_ = 0;
          auVar21._0_4_ = rotation * 0.017453292;
          value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)(auVar21 << 0x40),(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation(pUVar6,value_00,(MethodInfo *)0x0);
            pSVar7 = (__this->fields)._createTileQueue;
            if (pSVar7 != (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) {
              if ((pSVar7->fields)._size < 1) {
                return;
              }
              __this_00 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
              if (__this_00 != (Cameras_MinimapCamera_o *)0x0) {
                bVar10 = Cameras_MinimapCamera__Ready(__this_00,(MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  return;
                }
                pSVar7 = (__this->fields)._createTileQueue;
                if (pSVar7 != (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) {
                  pSVar11 = (System_Tuple_int__int__o *)
                            System_Collections_Generic_Queue_object___Dequeue
                                      ((System_Collections_Generic_Queue_T__o *)pSVar7,MethodInfo_Tuple_2_Int32_Int32_Dequeue);
                  UI_MinimapHandler__CreateTile(__this,pSVar11,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
label_043d53ef:
    il2cpp_runtime_helper_022b2c90();
label_043d53f4:
    il2cpp_runtime_helper_022b2ca0();
    __this = in_stack_ffffffffffffff38;
label_043d53f9:
    il2cpp_runtime_helper_022b2c90();
label_043d53fe:
    il2cpp_runtime_helper_022b2c90();
label_043d5403:
    il2cpp_runtime_helper_022b2c90();
label_043d5408:
    il2cpp_runtime_helper_022b2c90();
label_043d540d:
    il2cpp_runtime_helper_022b2c90();
label_043d5412:
    il2cpp_runtime_helper_022b2c90();
label_043d5417:
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ != 1) goto label_043d55b8;
    in_stack_ffffffffffffff38 = __this;
    plVar12 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar8 = *plVar12;
    __cxa_end_catch();
    __this_06.fields._8_8_ = item;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff38;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)(local_b8 + 0x20));
  } while (lVar8 == 0);
  il2cpp_runtime_helper_022fefe0(lVar8);
  __this = in_stack_ffffffffffffff38;
label_043d55b8:
  __this_07.fields._8_8_ = item;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_07.fields._current = (Il2CppObject *)__this;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)(local_b8 + 0x20));
  _Unwind_Resume(auVar21._0_8_);
code_r0x043d4dcf:
  iVar14 = *(int *)((long)&((Il2CppObject *)(uVar9 + 0x10))->klass + 4) -
           *(int *)((long)&(item->fields).m_Item1 + 4);
  if (g_data_057a8aa8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a8aa8 = '\x01';
    iVar13 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar13 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar13 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar13 = -iVar14;
  if (0 < iVar14) {
    iVar13 = iVar14;
  }
  if (2 < iVar13) {
label_043d4e29:
    lVar8 = MethodInfo_Void_Add;
    piVar1 = &(__this_08->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar2 = (__this_08->fields)._items;
    if (pSVar2 == (System_Object_array *)0x0) goto label_043d5417;
    uVar15 = (__this_08->fields)._size;
    if (uVar15 < (uint)pSVar2->max_length) {
      (__this_08->fields)._size = uVar15 + 1;
      pSVar2->m_Items[(int)uVar15] = (Il2CppObject *)uVar9;
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar15,uVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_08,(Il2CppObject *)uVar9,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto label_043d4d5a;
}


// UI.MinimapHandler$$GetCurrentTile
// il2cpp: System_Tuple_int__int__o* UI_MinimapHandler__GetCurrentTile (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x43d60a0

System_Tuple_int__int__o *
UI_MinimapHandler__GetCurrentTile
          (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  float fVar1;
  System_Tuple_T1__T2__o *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = position.fields.z;
  fVar4 = position.fields.x;
  if (g_data_057ae446 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
    g_data_057ae446 = '\x01';
  }
  fVar1 = (__this->fields)._height;
  fVar5 = fVar1 * 0.5;
  if (fVar4 <= 0.0) {
    if (fVar4 < 0.0) {
      fVar4 = fVar4 - fVar5;
    }
  }
  else {
    fVar4 = fVar4 + fVar5;
  }
  if (fVar3 <= 0.0) {
    if (fVar3 < 0.0) {
      fVar3 = fVar3 - fVar5;
    }
  }
  else {
    fVar3 = fVar3 + fVar5;
  }
  pSVar2 = System_Tuple__Create_int__int_((int)(fVar4 / fVar1),(int)(fVar3 / fVar1),MethodInfo_Tuple_2_Int32_Int32_Create_Int32_Int32);
  return (System_Tuple_int__int__o *)pSVar2;
}


// UI.MinimapHandler$$GetTilePosition
// il2cpp: UnityEngine_Vector3_o UI_MinimapHandler__GetTilePosition (UI_MinimapHandler_o* __this, System_Tuple_int__int__o* tile, const MethodInfo* method);
// 0x43d6150

UnityEngine_Vector3_o
UI_MinimapHandler__GetTilePosition
          (UI_MinimapHandler_o *__this,System_Tuple_int__int__o *tile,MethodInfo *method)

{
  float height;
  Cameras_MinimapCamera_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_MonoBehaviour_o *texture;
  UnityEngine_MonoBehaviour_c *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Tuple_int__int__o *pSVar5;
  System_Collections_Generic_List_object__o *__this_01;
  UI_MinimapHandler_o *pUVar6;
  UnityEngine_MonoBehaviour_o *__this_02;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  
  pSVar5 = tile;
  pUVar6 = __this;
  position.fields.z = in_XMM1_Da;
  if (g_data_057ae447 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item1);
    pUVar6 = (UI_MinimapHandler_o *)&MethodInfo_Int32_get_Item2;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae447 = '\x01';
    position.fields.z = in_XMM1_Da;
  }
  if (tile != (System_Tuple_int__int__o *)0x0) {
    position.fields.z = (__this->fields)._height;
    UVar8.fields.z = (float)(tile->fields).m_Item2 * position.fields.z;
    UVar8.fields.x = (float)(tile->fields).m_Item1 * position.fields.z;
    UVar8.fields.y = position.fields.z;
    return (UnityEngine_Vector3_o)UVar8.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae448 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae448 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar6->fields)._tileTextures;
  __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)pSVar5,MethodInfo_Boolean_ContainsKey);
    uVar7 = extraout_XMM0_Qa;
    if ((char)bVar1 == '\0') {
label_043d6277:
      UVar9.fields.z = position.fields.z;
      UVar9.fields.x = (float)(int)uVar7;
      UVar9.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
      return (UnityEngine_Vector3_o)UVar9.fields;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar6->fields)._tileTextures;
    __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      texture = (UnityEngine_MonoBehaviour_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar3,(Il2CppObject *)pSVar5,MethodInfo_Texture2D_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = texture;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      uVar7 = extraout_XMM0_Qa_00;
      if ((char)bVar1 != '\0') goto label_043d6277;
      __this_00 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
      if (g_data_057ae447 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item1);
        __this_02 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_Int32_get_Item2;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae447 = '\x01';
      }
      if ((pSVar5 != (System_Tuple_int__int__o *)0x0) && (__this_00 != (Cameras_MinimapCamera_o *)0x0)) {
        height = (pUVar6->fields)._height;
        position.fields.x = (float)(pSVar5->fields).m_Item1 * height;
        position.fields.z = (float)(pSVar5->fields).m_Item2 * height;
        position.fields.y = height;
        Cameras_MinimapCamera__TakeSnapshot
                  (__this_00,position,height,(UnityEngine_Texture2D_o *)texture,1,0,(MethodInfo *)0x0);
        pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pUVar6->fields)._finishedTiles;
        __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Add(pSVar4,(Il2CppObject *)pSVar5,MethodInfo_Boolean_Add);
          UVar10.fields.z = position.fields.z;
          UVar10.fields.x = (float)(int)extraout_XMM0_Qa_01;
          UVar10.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_01 >> 0x20);
          return (UnityEngine_Vector3_o)UVar10.fields;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae449 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Tuple_2_Int32_Int32_UnityEngine_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_Characters_BaseCharac);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Tuple_int_int_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Tuple_int_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Queue_1_System_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Queue_Tuple_int_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Tuple_int_int);
    g_data_057ae449 = '\x01';
  }
  pUVar2 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_RawImage,9);
  __this_02[2].klass = pUVar2;
  il2cpp_runtime_helper_022b4080(__this_02 + 2,pUVar2);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Tuple_int_int_Texture2D);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_System_Tuple_2_Int32_Int32_UnityEngine_Text);
  __this_02[2].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_02[2].fields.m_CancellationTokenSource,pSVar3);
  pUVar2 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Queue_Tuple_int_int);
  System_Collections_Generic_Queue_object____ctor
            ((System_Collections_Generic_Queue_T__o *)pUVar2,MethodInfo_Queue_1_System_Tuple_2_Int32_Int32);
  __this_02[3].klass = pUVar2;
  il2cpp_runtime_helper_022b4080(__this_02 + 3,pUVar2);
  pSVar4 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Tuple_int_int);
  System_Collections_Generic_HashSet_object____ctor(pSVar4,MethodInfo_HashSet_1_System_Tuple_2_Int32_Int32);
  __this_02[3].monitor = pSVar4;
  il2cpp_runtime_helper_022b4080(&__this_02[3].monitor);
  pSVar5 = (System_Tuple_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Tuple_int_int);
  System_Tuple_int__int____ctor(pSVar5,0,0,MethodInfo_Tuple_2_Int32_Int32);
  __this_02[3].fields.m_CachedPtr = (intptr_t)pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_02[3].fields,pSVar5);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
  __this_02[3].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_02[3].fields.m_CancellationTokenSource,pSVar3);
  pUVar2 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_BaseCharacter);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pUVar2,MethodInfo_Dictionary_2_UnityEngine_Transform_Characters_BaseCharac);
  __this_02[4].klass = pUVar2;
  il2cpp_runtime_helper_022b4080(__this_02 + 4,pUVar2);
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Transform);
  __this_02[4].monitor = __this_01;
  il2cpp_runtime_helper_022b4080(&__this_02[4].monitor);
  *(undefined1 *)((long)&__this_02[4].fields.m_CancellationTokenSource + 4) = 1;
  UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
  UVar11.fields.z = position.fields.z;
  UVar11.fields.x = (float)(int)extraout_XMM0_Qa_02;
  UVar11.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_02 >> 0x20);
  return (UnityEngine_Vector3_o)UVar11.fields;
}


// UI.MinimapHandler$$CreateTile
// il2cpp: void UI_MinimapHandler__CreateTile (UI_MinimapHandler_o* __this, System_Tuple_int__int__o* tile, const MethodInfo* method);
// 0x43d61b0

void UI_MinimapHandler__CreateTile
               (UI_MinimapHandler_o *__this,System_Tuple_int__int__o *tile,MethodInfo *method)

{
  float height;
  Cameras_MinimapCamera_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_MonoBehaviour_o *texture;
  UnityEngine_MonoBehaviour_c *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Tuple_int__int__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_MonoBehaviour_o *__this_03;
  UnityEngine_Vector3_o position;
  
  if (g_data_057ae448 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae448 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._tileTextures;
  __this_03 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)tile,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') {
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._tileTextures;
    __this_03 = (UnityEngine_MonoBehaviour_o *)0x0;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      texture = (UnityEngine_MonoBehaviour_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar3,(Il2CppObject *)tile,MethodInfo_Texture2D_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_03 = texture;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return;
      }
      __this_00 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
      if (g_data_057ae447 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item1);
        __this_03 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_Int32_get_Item2;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae447 = '\x01';
      }
      if ((tile != (System_Tuple_int__int__o *)0x0) && (__this_00 != (Cameras_MinimapCamera_o *)0x0)) {
        height = (__this->fields)._height;
        position.fields.x = (float)(tile->fields).m_Item1 * height;
        position.fields.z = (float)(tile->fields).m_Item2 * height;
        position.fields.y = height;
        Cameras_MinimapCamera__TakeSnapshot
                  (__this_00,position,height,(UnityEngine_Texture2D_o *)texture,1,0,(MethodInfo *)0x0);
        pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
        __this_03 = (UnityEngine_MonoBehaviour_o *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Add(pSVar4,(Il2CppObject *)tile,MethodInfo_Boolean_Add);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae449 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Tuple_2_Int32_Int32_UnityEngine_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_Characters_BaseCharac);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Tuple_int_int_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Tuple_int_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Queue_1_System_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Queue_Tuple_int_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Tuple_int_int);
    g_data_057ae449 = '\x01';
  }
  pUVar2 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_RawImage,9);
  __this_03[2].klass = pUVar2;
  il2cpp_runtime_helper_022b4080(__this_03 + 2,pUVar2);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Tuple_int_int_Texture2D);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_System_Tuple_2_Int32_Int32_UnityEngine_Text);
  __this_03[2].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_03[2].fields.m_CancellationTokenSource,pSVar3);
  pUVar2 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Queue_Tuple_int_int);
  System_Collections_Generic_Queue_object____ctor
            ((System_Collections_Generic_Queue_T__o *)pUVar2,MethodInfo_Queue_1_System_Tuple_2_Int32_Int32);
  __this_03[3].klass = pUVar2;
  il2cpp_runtime_helper_022b4080(__this_03 + 3,pUVar2);
  pSVar4 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Tuple_int_int);
  System_Collections_Generic_HashSet_object____ctor(pSVar4,MethodInfo_HashSet_1_System_Tuple_2_Int32_Int32);
  __this_03[3].monitor = pSVar4;
  il2cpp_runtime_helper_022b4080(&__this_03[3].monitor);
  __this_01 = (System_Tuple_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Tuple_int_int);
  System_Tuple_int__int____ctor(__this_01,0,0,MethodInfo_Tuple_2_Int32_Int32);
  __this_03[3].fields.m_CachedPtr = (intptr_t)__this_01;
  il2cpp_runtime_helper_022b4080(&__this_03[3].fields,__this_01);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
  __this_03[3].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_03[3].fields.m_CancellationTokenSource,pSVar3);
  pUVar2 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_BaseCharacter);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pUVar2,MethodInfo_Dictionary_2_UnityEngine_Transform_Characters_BaseCharac);
  __this_03[4].klass = pUVar2;
  il2cpp_runtime_helper_022b4080(__this_03 + 4,pUVar2);
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_Transform);
  __this_03[4].monitor = __this_02;
  il2cpp_runtime_helper_022b4080(&__this_03[4].monitor);
  *(undefined1 *)((long)&__this_03[4].fields.m_CancellationTokenSource + 4) = 1;
  UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// UI.MinimapHandler$$.ctor
// il2cpp: void UI_MinimapHandler___ctor (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x43d6330

void UI_MinimapHandler___ctor(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_array *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Queue_Tuple_int__int___o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Tuple_int__int__o *__this_02;
  System_Collections_Generic_List_Transform__o *__this_03;
  
  if (g_data_057ae449 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Tuple_2_Int32_Int32_UnityEngine_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_Characters_BaseCharac);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Tuple_int_int_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Tuple_int_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Queue_1_System_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Queue_Tuple_int_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tuple_2_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Tuple_int_int);
    g_data_057ae449 = '\x01';
  }
  pUVar1 = (UnityEngine_UI_RawImage_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_RawImage,9);
  (__this->fields)._images = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._images,pUVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Tuple_int_int_Texture2D);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_Tuple_2_Int32_Int32_UnityEngine_Text);
  (__this->fields)._tileTextures =
       (System_Collections_Generic_Dictionary_Tuple_int__int___Texture2D__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tileTextures,pSVar2);
  __this_00 = (System_Collections_Generic_Queue_Tuple_int__int___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Queue_Tuple_int_int);
  System_Collections_Generic_Queue_object____ctor
            ((System_Collections_Generic_Queue_T__o *)__this_00,MethodInfo_Queue_1_System_Tuple_2_Int32_Int32);
  (__this->fields)._createTileQueue = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._createTileQueue,__this_00);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Tuple_int_int);
  System_Collections_Generic_HashSet_object____ctor(__this_01,MethodInfo_HashSet_1_System_Tuple_2_Int32_Int32);
  (__this->fields)._finishedTiles = (System_Collections_Generic_HashSet_Tuple_int__int___o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._finishedTiles);
  __this_02 = (System_Tuple_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Tuple_int_int);
  System_Tuple_int__int____ctor(__this_02,0,0,MethodInfo_Tuple_2_Int32_Int32);
  (__this->fields)._currentTile = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentTile,__this_02);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
  (__this->fields)._icons = (System_Collections_Generic_Dictionary_Transform__Transform__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._icons,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_BaseCharacter);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_UnityEngine_Transform_Characters_BaseCharac);
  (__this->fields)._characters = (System_Collections_Generic_Dictionary_Transform__BaseCharacter__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._characters,pSVar2);
  __this_03 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_Transform);
  (__this->fields)._iconsToRemove = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._iconsToRemove);
  *(undefined1 *)&(__this->fields)._needUpdateTiles = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MinimapHandler$$.cctor
// il2cpp: void UI_MinimapHandler___cctor (const MethodInfo* method);
// 0x43d65c0

void UI_MinimapHandler___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (g_data_057ae44a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    g_data_057ae44a = '\x01';
  }
  lVar2 = TypeInfo_MinimapHandler;
  lVar1 = *(long *)(TypeInfo_MinimapHandler + 0xb8);
  *(undefined8 *)(lVar1 + 8) = 0x3f1ba5e33ee8f5c3;
  *(undefined8 *)(lVar1 + 0x10) = 0x3f8000003f50e560;
  lVar1 = *(long *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = 0x3f8000003f800000;
  *(undefined8 *)(lVar1 + 0x20) = 0x3f8000003ee147ae;
  lVar1 = *(long *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = 0x3f8000003f147ae1;
  *(undefined8 *)(lVar1 + 0x30) = 0x3f8000003f000000;
  lVar1 = *(long *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = 0x3f2b851f00000000;
  *(undefined8 *)(lVar1 + 0x40) = 0x3f8000003f800000;
  lVar1 = *(long *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = 0x3e8000003f5eb852;
  *(undefined8 *)(lVar1 + 0x50) = 0x3f8000003e800000;
  return;
}


