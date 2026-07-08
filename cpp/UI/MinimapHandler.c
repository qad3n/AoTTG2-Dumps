// Type: UI.MinimapHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MinimapHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/MinimapHandler.cs  [CHANGED since prior version]
// --------------------------------

// UI.MinimapHandler$$Awake
// il2cpp: void UI_MinimapHandler__Awake (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x40c1010

void UI_MinimapHandler__Awake(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_RawImage_array *pUVar3;
  uint in_EAX;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_RawImage_o *pUVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_057046ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"CompassLabel");
    il2cpp_init_method_metadata(&"Mask");
    il2cpp_init_method_metadata(&"PositionLabel");
    il2cpp_init_method_metadata(&"Tiles");
    il2cpp_init_method_metadata(&"Image");
    DAT_057046ab = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined8 **)(TypeInfo_MinimapHandler + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MinimapHandler + 0xb8),__this);
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x78), lVar8 != 0)) {
    (__this->fields)._height = *(float *)(lVar8 + 0x14);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar1 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
          TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      (__this->fields)._minimapPanel = (UnityEngine_GameObject_o *)plVar1[0x3d];
      il2cpp_runtime_glue(&(__this->fields)._minimapPanel);
      pUVar2 = (__this->fields)._minimapPanel;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Transform__Find(pUVar4,"PositionLabel",(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
            (__this->fields)._positionLabel = pUVar5;
            il2cpp_runtime_glue(&(__this->fields)._positionLabel);
            pUVar2 = (__this->fields)._minimapPanel;
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Transform__Find(pUVar4,"CompassLabel",(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  pUVar5 = (UnityEngine_UI_Text_o *)
                           UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
                  (__this->fields)._compassLabel = pUVar5;
                  il2cpp_runtime_glue(&(__this->fields)._compassLabel);
                  pUVar2 = (__this->fields)._minimapPanel;
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Mask",(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                        pUVar4 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                        (__this->fields)._maskTransform = pUVar4;
                        il2cpp_runtime_glue(&(__this->fields)._maskTransform,pUVar4);
                        pUVar4 = (__this->fields)._maskTransform;
                        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                          uVar10 = 0;
                          pUVar4 = UnityEngine_Transform__Find
                                             (pUVar4,"Tiles",(MethodInfo *)0x0);
                          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                            pUVar4 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0)
                            ;
                            (__this->fields)._tileTransform = pUVar4;
                            il2cpp_runtime_glue(&(__this->fields)._tileTransform);
                            uStack_38 = uStack_38 & 0xffffffff;
                            while( true ) {
                              pUVar3 = (__this->fields)._images;
                              pUVar4 = (__this->fields)._tileTransform;
                              pSVar6 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0)
                              ;
                              pSVar6 = System_String__Concat("Image",pSVar6,(MethodInfo *)0x0);
                              if (pUVar4 == (UnityEngine_Transform_o *)0x0) break;
                              pUVar4 = UnityEngine_Transform__Find(pUVar4,pSVar6,(MethodInfo *)0x0);
                              if (pUVar4 == (UnityEngine_Transform_o *)0x0) break;
                              pUVar7 = (UnityEngine_UI_RawImage_o *)
                                       UnityEngine_Component__GetComponent<object>
                                                 ((UnityEngine_Component_o *)pUVar4,MethodInfo_RawImage_GetComponent_RawImage);
                              if (pUVar3 == (UnityEngine_UI_RawImage_array *)0x0) break;
                              if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                                lVar8 = il2cpp_runtime_glue(pUVar7,(((pUVar3->obj).klass)->_1).
                                                                  element_class);
                                if (lVar8 == 0) {
                                  uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                                  il2cpp_glue_02274a00(uVar9,0);
                                }
                              }
                              if ((uint)pUVar3->max_length <= uVar10) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              pUVar3->m_Items[(int)uVar10] = pUVar7;
                              il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar10);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MinimapHandler$$CreateMinimapIcon
// il2cpp: void UI_MinimapHandler__CreateMinimapIcon (UnityEngine_Transform_o* transform, System_String_o* type, const MethodInfo* method);
// 0x40c13f0

void UI_MinimapHandler__CreateMinimapIcon
               (UnityEngine_Transform_o *transform,System_String_o *type,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Color_o color;
  
  if (DAT_057046ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Minimap/Textures/MinimapSupplyIcon");
    DAT_057046ac = '\x01';
  }
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MinimapHandler + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_init_class();
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
// 0x40c1880

void UI_MinimapHandler__CreateMinimapIcon(Characters_BaseCharacter_o *character,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_Object_o *x;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  undefined8 *puVar6;
  UnityEngine_Transform_o *transform;
  undefined8 *puVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *pCVar8;
  System_String_o *a;
  undefined4 uVar9;
  undefined4 uVar10;
  UnityEngine_Color_o color;
  undefined8 local_48;
  undefined8 local_38;
  
  if (DAT_057046ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&"Minimap/Textures/MinimapHumanIcon");
    il2cpp_init_method_metadata(&"Mine");
    il2cpp_init_method_metadata(&"Minimap/Textures/MinimapTitanIcon");
    DAT_057046ad = '\x01';
  }
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MinimapHandler + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = *(System_String_o **)&(character->fields).AI;
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = System_String__op_Equality
                    (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((character->klass->_2).naturalAligment < bVar2) {
      pCVar8 = (Characters_BaseCharacter_o *)0x0;
      iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
    }
    else {
      pCVar8 = (Characters_BaseCharacter_o *)0x0;
      if ((character->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human) {
        pCVar8 = character;
      }
      iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
    }
    a = *(System_String_o **)
         (*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18 +
         (ulong)(pCVar8 != (Characters_BaseCharacter_o *)0x0) * 8);
  }
  bVar5 = Characters_BaseCharacter__IsMainCharacter(character,(MethodInfo *)0x0);
  pSVar4 = "Mine";
  if ((char)bVar5 == '\0') {
    uVar9 = 0x3f800000;
    uVar10 = 0x3f800000;
    local_38 = 0x3f8000003f800000;
  }
  else {
    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_38 = *(undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 8);
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x10);
    uVar9 = (undefined4)uVar1;
    uVar10 = (undefined4)((ulong)uVar1 >> 0x20);
    a = pSVar4;
  }
  local_48 = CONCAT44(uVar10,uVar9);
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (((character->klass->_2).naturalAligment < bVar2) ||
     ((character->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
    iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
    pSVar4 = "Minimap/Textures/MinimapTitanIcon";
  }
  else {
    iVar3 = *(int *)(TypeInfo_TeamInfo + 0xe4);
    pSVar4 = "Minimap/Textures/MinimapHumanIcon";
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar5 = System_String__op_Equality
                    (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),
                     (MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = System_String__op_Equality
                      (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),
                       (MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = System_String__op_Equality
                        (a,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = System_String__op_Equality
                          (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') goto LAB_040c1c0f;
        if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
          il2cpp_init_class();
        }
        puVar7 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x48);
        puVar6 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x50);
      }
      else {
        if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
          il2cpp_init_class();
        }
        puVar7 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x38);
        puVar6 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x40);
      }
    }
    else {
      if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar7 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x18);
      puVar6 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x20);
    }
  }
  else {
    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar7 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x28);
    puVar6 = (undefined8 *)(*(long *)(TypeInfo_MinimapHandler + 0xb8) + 0x30);
  }
  local_38 = *puVar7;
  local_48 = *puVar6;
LAB_040c1c0f:
  transform = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)character,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  color.fields.b = (float)(undefined4)local_48;
  color.fields.a = (float)local_48._4_4_;
  color.fields.r = (float)(undefined4)local_38;
  color.fields.g = (float)local_38._4_4_;
  UI_MinimapHandler__SetupIcon(pSVar4,color,transform,method_00);
  return;
}


// UI.MinimapHandler$$GetIcons
// il2cpp: System_Collections_Generic_Dictionary_Transform__Transform__o* UI_MinimapHandler__GetIcons (const MethodInfo* method);
// 0x40c0bd0

System_Collections_Generic_Dictionary_Transform__Transform__o *
UI_MinimapHandler__GetIcons(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_Transform__Transform__o *pSVar2;
  
  if (DAT_057046ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057046ae = '\x01';
  }
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MinimapHandler + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_Transform__Transform__o *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (**(long **)(TypeInfo_MinimapHandler + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_Transform__Transform__o **)
              (**(long **)(TypeInfo_MinimapHandler + 0xb8) + 0x78);
  }
  return pSVar2;
}


// UI.MinimapHandler$$SetupIcon
// il2cpp: void UI_MinimapHandler__SetupIcon (System_String_o* texture, UnityEngine_Color_o color, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x40c14b0

void UI_MinimapHandler__SetupIcon
               (System_String_o *texture,UnityEngine_Color_o color,
               UnityEngine_Transform_o *transform,MethodInfo *method)

{
  System_String_o *path;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_RawImage_o *__this;
  UnityEngine_Texture_o *value;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *x;
  float local_48;
  float local_38;
  
  if (DAT_057046af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Minimap/Prefabs/MinimapIcon");
    DAT_057046af = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,"Minimap/Prefabs/MinimapIcon",1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    __this = (UnityEngine_UI_RawImage_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_RawImage_GetComponent_RawImage);
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset
                      ((System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8),texture,1,
                       (MethodInfo *)0x0);
    if (__this != (UnityEngine_UI_RawImage_o *)0x0) {
      if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(value);
      }
      UnityEngine_UI_RawImage__set_texture(__this,value,(MethodInfo *)0x0);
      local_48 = color.fields.r;
      local_38 = color.fields.b;
      (*(__this->klass->vtable)._23_set_color.methodPtr)(local_48,local_38,__this);
      if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (**(long **)(TypeInfo_MinimapHandler + 0xb8) != 0) {
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (**(long **)(TypeInfo_MinimapHandler + 0xb8) + 0x78);
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar1,(Il2CppObject *)transform,(Il2CppObject *)pUVar4,MethodInfo_Void_Add);
          if (transform != (UnityEngine_Transform_o *)0x0) {
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)transform,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              x = (UnityEngine_Object_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if ((**(long **)(TypeInfo_MinimapHandler + 0xb8) == 0) ||
                   (pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                              (**(long **)(TypeInfo_MinimapHandler + 0xb8) + 0x80),
                   pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
                goto LAB_040c1869;
                System_Collections_Generic_Dictionary<object__object>__Add
                          (pSVar1,(Il2CppObject *)transform,(Il2CppObject *)x,MethodInfo_Void_Add);
              }
              pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if ((**(long **)(TypeInfo_MinimapHandler + 0xb8) != 0) &&
                 (pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent
                          (pUVar4,*(UnityEngine_Transform_o **)
                                   (**(long **)(TypeInfo_MinimapHandler + 0xb8) + 0x50),(MethodInfo *)0x0);
                pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                if (DAT_056fdd15 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fdd15 = '\x01';
                }
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar4,(UnityEngine_Vector3_o)
                                    **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                             (MethodInfo *)0x0);
                  pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                  if (DAT_056fde1e == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
                    DAT_056fde1e = '\x01';
                  }
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_rotation
                              (pUVar4,(UnityEngine_Quaternion_o)
                                      **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                               (MethodInfo *)0x0);
                    pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
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
LAB_040c1869:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MinimapHandler$$Update
// il2cpp: void UI_MinimapHandler__Update (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x40c1c60

void UI_MinimapHandler__Update(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *__this_00;
  Cameras_InGameCamera_o *camera;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float y;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation_00;
  float rotation;
  
  if (DAT_057046b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057046b0 = '\x01';
  }
  UI_MinimapHandler__RemoveOldIcons(__this,method);
  __this_00 = (__this->fields)._minimapPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    camera = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (camera != (Cameras_InGameCamera_o *)0x0) {
      bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
      if (((camera->klass->_2).naturalAligment < bVar1) ||
         ((camera->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(camera);
      }
      pUVar2 = (camera->fields).Cache;
      if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        position = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
        pUVar2 = (camera->fields).Cache;
        if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar3 = (pUVar2->fields).Transform;
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            method_01 = (MethodInfo *)0x0;
            rotation_00 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
            UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation_00,(MethodInfo *)0x0);
            euler.fields.x = UVar5.fields.x * 57.29578;
            euler.fields.y = UVar5.fields.y * 57.29578;
            euler.fields.z = UVar5.fields.z * 57.29578;
            UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            rotation = UVar5.fields.y;
            y = rotation;
            UI_MinimapHandler__UpdateTiles(__this,position,rotation,method_01);
            UI_MinimapHandler__UpdateIcons(__this,position,y,method_01);
            UI_MinimapHandler__UpdateCompass(__this,camera,position,rotation,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MinimapHandler$$UpdateCompass
// il2cpp: void UI_MinimapHandler__UpdateCompass (UI_MinimapHandler_o* __this, Cameras_InGameCamera_o* camera, UnityEngine_Vector3_o position, float y, const MethodInfo* method);
// 0x40c36c0

void UI_MinimapHandler__UpdateCompass
               (UI_MinimapHandler_o *__this,Cameras_InGameCamera_o *camera,
               UnityEngine_Vector3_o position,float y,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  long lVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  undefined8 uVar6;
  float __this_01;
  float fVar7;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  
  _local_48 = position.fields;
  if (DAT_057046b1 == '\0') {
    local_40._8_4_ = y;
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"S");
    il2cpp_init_method_metadata(&"F0");
    il2cpp_init_method_metadata(&"SW");
    il2cpp_init_method_metadata(&"W");
    il2cpp_init_method_metadata(&"SE");
    il2cpp_init_method_metadata(&"E");
    il2cpp_init_method_metadata(&"NW");
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"NE");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"N");
    DAT_057046b1 = '\x01';
    y = (float)local_40._8_4_;
  }
  fVar7 = (float)(~-(uint)(y < 0.0) & (uint)y | (uint)(y + 360.0) & -(uint)(y < 0.0));
  fVar7 = (float)(~-(uint)(360.0 < fVar7) & (uint)fVar7 |
                 (uint)(fVar7 + -360.0) & -(uint)(360.0 < fVar7));
  uVar6 = "";
  if ((fVar7 < 22.5) || (202.5 < fVar7)) {
    if ((fVar7 < 202.5) || (337.5 < fVar7)) {
      if (fVar7 <= 22.5) {
        uVar6 = "N";
      }
      if (337.5 <= fVar7) {
        uVar6 = "N";
      }
      pUVar1 = (__this->fields)._compassLabel;
    }
    else {
      uVar6 = "SW";
      if (fVar7 <= 247.5) {
LAB_040c3941:
        pUVar1 = (__this->fields)._compassLabel;
      }
      else if ((fVar7 < 247.5) || (292.5 < fVar7)) {
        uVar6 = "";
        if (fVar7 < 292.5) goto LAB_040c3941;
        pUVar1 = (__this->fields)._compassLabel;
        uVar6 = "NW";
      }
      else {
        pUVar1 = (__this->fields)._compassLabel;
        uVar6 = "W";
      }
    }
  }
  else if (67.5 < fVar7) {
    if ((fVar7 < 67.5) || (112.5 < fVar7)) {
      if ((fVar7 < 112.5) || (157.5 < fVar7)) {
        if (fVar7 < 157.5) goto LAB_040c3941;
        pUVar1 = (__this->fields)._compassLabel;
        uVar6 = "S";
      }
      else {
        pUVar1 = (__this->fields)._compassLabel;
        uVar6 = "SE";
      }
    }
    else {
      pUVar1 = (__this->fields)._compassLabel;
      uVar6 = "E";
    }
  }
  else {
    pUVar1 = (__this->fields)._compassLabel;
    uVar6 = "NE";
  }
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,uVar6,(pUVar1->klass->vtable)._75_set_text.method);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x170), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x14) == 1) {
        if (camera != (Cameras_InGameCamera_o *)0x0) {
          pCVar3 = (camera->fields)._follow;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pCVar3 = (camera->fields)._follow;
            if (((pCVar3 == (Characters_BaseCharacter_o *)0x0) ||
                (lVar2 = *(long *)&(pCVar3->fields).Dead, lVar2 == 0)) ||
               (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
               __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_040c3b9a;
            _local_48 = (UnityEngine_Vector3_Fields)
                        UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          }
          pUVar1 = (__this->fields)._positionLabel;
          values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
          pSVar5 = System_Single__ToString(__this_01,(System_String_o *)local_48,"F0");
          if (values != (System_String_array *)0x0) {
            if ((int)values->max_length != 0) {
              values->m_Items[0] = pSVar5;
              il2cpp_runtime_glue(values->m_Items,pSVar5);
              if (1 < (uint)values->max_length) {
                values->m_Items[1] = ", ";
                fVar7 = (float)il2cpp_runtime_glue(values->m_Items + 1);
                pSVar5 = System_Single__ToString
                                   (fVar7,(System_String_o *)(local_48 + 4),"F0");
                if (2 < (uint)values->max_length) {
                  values->m_Items[2] = pSVar5;
                  il2cpp_runtime_glue(values->m_Items + 2,pSVar5);
                  if (3 < (uint)values->max_length) {
                    values->m_Items[3] = ", ";
                    fVar7 = (float)il2cpp_runtime_glue(values->m_Items + 3);
                    pSVar5 = System_Single__ToString
                                       (fVar7,(System_String_o *)(local_48 + 8),"F0");
                    if (4 < (uint)values->max_length) {
                      values->m_Items[4] = pSVar5;
                      il2cpp_runtime_glue(values->m_Items + 4);
                      pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar1,pSVar5,(pUVar1->klass->vtable)._75_set_text.method);
                        return;
                      }
                      goto LAB_040c3b9a;
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      else {
        pUVar1 = (__this->fields)._positionLabel;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          vtable_dispatch = (pUVar1->klass->vtable)._75_set_text.methodPtr;
          (*vtable_dispatch)
                    (pUVar1,"",(pUVar1->klass->vtable)._75_set_text.method,
                     vtable_dispatch);
          return;
        }
      }
    }
  }
LAB_040c3b9a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MinimapHandler$$RemoveOldIcons
// il2cpp: void UI_MinimapHandler__RemoveOldIcons (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x40c1de0

void UI_MinimapHandler__RemoveOldIcons(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Transform__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_Transform_array *pUVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool bVar5;
  long lVar6;
  bool_conflict bVar7;
  uint uVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Component_o *__this_05;
  UnityEngine_Transform_o *pUVar10;
  Il2CppMethodPointer pIVar11;
  _union_247328 _Var12;
  Il2CppMethodPointer pIVar13;
  Il2CppType *pIVar14;
  Il2CppObject *pIVar15;
  UnityEngine_Transform_o *pUVar16;
  _union_247328 local_68;
  Il2CppType *pIStack_60;
  UnityEngine_Transform_o *local_58;
  _union_247328 local_48;
  Il2CppType *pIStack_40;
  UnityEngine_Transform_o *local_38;
  
  if (DAT_057046b2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Transform__GetE);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057046b2 = '\x01';
  }
  local_68.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (UnityEngine_Transform_o *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  pIVar15 = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._iconsToRemove;
  if (pSVar2 != (System_Collections_Generic_List_Transform__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (pSVar3,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng);
      if (__this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                   )&local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
        local_58 = local_38;
        local_68 = local_48;
        pIStack_60 = pIStack_40;
        while( true ) {
          __this_00.fields._8_8_ = pIVar13;
          __this_00.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
          __this_00.fields._currentKey = pIVar15;
          bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this_00,(MethodInfo_31D0850 *)&local_68);
          pUVar16 = local_58;
          if ((char)bVar7 == '\0') break;
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._characters;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar3,(Il2CppObject *)local_58,MethodInfo_Boolean_ContainsKey);
          bVar5 = false;
          if ((char)bVar7 != '\0') {
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._characters;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar9 = (UnityEngine_Object_o *)
                     System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar3,(Il2CppObject *)pUVar16,MethodInfo_BaseCharacter_get_Item);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar7 = UnityEngine_Object__op_Equality
                              (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              if (pUVar9 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar5 = false;
              if (*(char *)&pUVar9[4].monitor == '\0') goto LAB_040c202d;
            }
            bVar5 = true;
          }
LAB_040c202d:
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar8 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar5 || (uVar8 & 0xff) != 0) {
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._icons;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            __this_05 = (UnityEngine_Component_o *)
                        System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar3,(Il2CppObject *)pUVar16,MethodInfo_Transform_get_Item);
            lVar6 = MethodInfo_Void_Add;
            pSVar2 = (__this->fields)._iconsToRemove;
            if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar2->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar2->fields)._items;
            if (pUVar4 == (UnityEngine_Transform_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar8 = (pSVar2->fields)._size;
            if (uVar8 < (uint)pUVar4->max_length) {
              (pSVar2->fields)._size = uVar8 + 1;
              pUVar4->m_Items[(int)uVar8] = pUVar16;
              il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar8);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)pUVar16
                         ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                        );
            }
            if (__this_05 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar9 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject(__this_05,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Object__Destroy(pUVar9,(MethodInfo *)0x0);
          }
        }
        __this_01.fields._8_8_ = pIVar13;
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
        __this_01.fields._currentKey = pIVar15;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                  (__this_01,(MethodInfo_31D0840 *)&local_68);
        pSVar2 = (__this->fields)._iconsToRemove;
        if (pSVar2 != (System_Collections_Generic_List_Transform__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
                     (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_Transform__GetE);
          _Var12 = local_48;
          pIVar14 = pIStack_40;
          pUVar16 = local_38;
          while( true ) {
            __this_02.fields._8_8_ = pIVar14;
            __this_02.fields._list = _Var12.genericMethod;
            __this_02.fields._current = (Il2CppObject *)pUVar16;
            bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
            if ((char)bVar7 == '\0') {
              __this_03.fields._8_8_ = pIVar14;
              __this_03.fields._list = _Var12.genericMethod;
              __this_03.fields._current = (Il2CppObject *)pUVar16;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
              return;
            }
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._icons;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary<object__object>__Remove
                      (pSVar3,(Il2CppObject *)pUVar16,MethodInfo_Boolean_Remove);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._characters;
            pUVar10 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                              (pSVar3,(Il2CppObject *)pUVar10,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar7 != '\0') {
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._characters;
              pUVar10 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Remove
                        (pSVar3,(Il2CppObject *)pUVar10,MethodInfo_Boolean_Remove);
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MinimapHandler$$UpdateIcons
// il2cpp: void UI_MinimapHandler__UpdateIcons (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, float y, const MethodInfo* method);
// 0x40c3100

void UI_MinimapHandler__UpdateIcons
               (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o position,float y,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_GameObject_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  float fVar10;
  float fVar11;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  undefined8 local_68;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  fVar10 = position.fields.x;
  fVar11 = position.fields.y;
  if (DAT_057046b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_MinimapCamera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057046b3 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
  if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng),
     __this_02 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            (&local_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  fVar5 = fVar10;
  pSVar12 = local_48.fields._dictionary;
  while( true ) {
    while( true ) {
      do {
        __this_00.fields._dictionary._4_4_ = fVar11;
        __this_00.fields._dictionary._0_4_ = fVar5;
        __this_00.fields._index = in_XMM0_Dc;
        __this_00.fields._version = in_XMM0_Dd;
        __this_00.fields._currentKey = (Il2CppObject *)pSVar12;
        bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                          (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff68);
        if ((char)bVar3 == '\0') {
          __this_01.fields._dictionary._4_4_ = fVar11;
          __this_01.fields._dictionary._0_4_ = fVar5;
          __this_01.fields._index = in_XMM0_Dc;
          __this_01.fields._version = in_XMM0_Dd;
          __this_01.fields._currentKey = (Il2CppObject *)pSVar12;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                    (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff68);
          return;
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_03 = (UnityEngine_Transform_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar2,local_48.fields._currentKey,MethodInfo_Transform_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)local_48.fields._currentKey,
                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar3 == '\0');
      if ((UnityEngine_Transform_o *)local_48.fields._currentKey == (UnityEngine_Transform_o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar8 = UnityEngine_Transform__get_position
                        ((UnityEngine_Transform_o *)local_48.fields._currentKey,(MethodInfo *)0x0);
      UVar9 = UnityEngine_Transform__get_position
                        ((UnityEngine_Transform_o *)local_48.fields._currentKey,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
        il2cpp_init_class(UVar9.fields.x);
      }
      fVar5 = (float)**(int **)(TypeInfo_MinimapCamera + 0xb8) / (__this->fields)._height;
      fVar11 = 0.0;
      in_XMM0_Dc = 0;
      in_XMM0_Dd = 0;
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      local_68._0_4_ = UVar8.fields.x;
      fVar6 = fVar5 * ((float)local_68 - fVar10);
      fVar7 = fVar5 * (UVar9.fields.z - position.fields.z);
      fVar5 = fVar5 * 0.0;
      local_68 = (Il2CppType **)CONCAT44(fVar7,fVar6);
      fVar6 = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
      if (fVar6 < 0.0) {
        fVar6 = sqrtf(fVar6);
      }
      else {
        fVar6 = SQRT(fVar6);
      }
      if ((float)**(int **)(TypeInfo_MinimapCamera + 0xb8) * 0.5 < fVar6) break;
      if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
      }
      UVar8.fields.z = fVar5;
      UVar8.fields._0_8_ = local_68;
      UnityEngine_Transform__set_localPosition(__this_03,UVar8,(MethodInfo *)0x0);
      if (DAT_056fde1e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Quaternion);
        DAT_056fde1e = '\x01';
      }
      UnityEngine_Transform__set_rotation
                (__this_03,
                 (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8)
                 ,(MethodInfo *)0x0);
    }
    if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) break;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MinimapHandler$$UpdateTiles
// il2cpp: void UI_MinimapHandler__UpdateTiles (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, float rotation, const MethodInfo* method);
// 0x40c2490

void UI_MinimapHandler__UpdateTiles
               (UI_MinimapHandler_o *__this,UnityEngine_Vector3_o position,float rotation,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  int32_t width;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  UnityEngine_UI_RawImage_array *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Collections_Generic_Queue_Tuple_int__int___o *pSVar8;
  Cameras_MinimapCamera_o *__this_00;
  undefined1 auVar9 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar10;
  undefined8 uVar11;
  Il2CppObject *key;
  bool_conflict bVar12;
  System_Tuple_T1__T2__o *item;
  System_Collections_Generic_List_object__o *__this_06;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  UnityEngine_Object_o *obj;
  System_Tuple_T1__T2__o *key_00;
  UnityEngine_Texture2D_o *__this_08;
  UnityEngine_Texture_o *value;
  System_Tuple_int__int__o *pSVar13;
  int iVar14;
  MethodInfo *method_00;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o value_01;
  undefined8 in_stack_ffffffffffffff28;
  UI_MinimapHandler_o *pUVar21;
  undefined1 local_b8 [40];
  Il2CppType *pIStack_90;
  Il2CppObject *local_88;
  undefined1 local_78 [16];
  System_Collections_Generic_Dictionary_object__object__o *local_68;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  float local_48;
  
  local_48 = position.fields.z;
  local_78._8_4_ = in_XMM0_Dc;
  local_78._0_8_ = position.fields._0_8_;
  local_78._12_4_ = in_XMM0_Dd;
  fVar19 = position.fields.x;
  if (DAT_057046b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Texture2D_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_T);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Tuple_2_Int32_Int32__get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Tuple_2_Int32_Int32__get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Tuple_2_Int32_Int32);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Tuple_2_Int32_Int32);
    il2cpp_init_method_metadata(&TypeInfo_List_Tuple_int__int);
    il2cpp_init_method_metadata(&TypeInfo_MinimapCamera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Tuple_2_Int32_Int32__Dequeue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Enqueue);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item1);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item2);
    il2cpp_init_method_metadata(&MethodInfo_Tuple_2_Int32_Int32__Create_Int32_Int32);
    DAT_057046b4 = '\x01';
    fVar19 = (float)local_78._0_4_;
  }
  local_b8._0_8_ =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  local_b8._8_8_ = (Il2CppType *)0x0;
  local_b8._16_8_ = (Il2CppObject *)0x0;
  local_b8._32_8_ =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_90 = (Il2CppType *)0x0;
  local_88 = (Il2CppObject *)0x0;
  if (DAT_057046b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Tuple_2_Int32_Int32__Create_Int32_Int32);
    DAT_057046b5 = '\x01';
    fVar19 = (float)local_78._0_4_;
  }
  fVar2 = (__this->fields)._height;
  fVar18 = fVar2 * 0.5;
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
  item = System_Tuple__Create<int__int>((int)(fVar19 / fVar2),(int)(fVar20 / fVar2),MethodInfo_Tuple_2_Int32_Int32__Create_Int32_Int32);
  if ((item == (System_Tuple_T1__T2__o *)0x0) ||
     (pSVar13 = (__this->fields)._currentTile, pSVar13 == (System_Tuple_int__int__o *)0x0))
  goto LAB_040c2eff;
  if ((*(int *)&(item->fields).m_Item1 == (pSVar13->fields).m_Item1) &&
     (*(int *)((long)&(item->fields).m_Item1 + 4) == (pSVar13->fields).m_Item2)) {
    if ((char)(__this->fields)._needUpdateTiles != '\0') goto LAB_040c2735;
  }
  else {
    *(undefined1 *)&(__this->fields)._needUpdateTiles = 1;
LAB_040c2735:
    *(undefined1 *)&(__this->fields)._needUpdateTiles = 0;
    (__this->fields)._currentTile = (System_Tuple_int__int__o *)item;
    il2cpp_runtime_glue(&(__this->fields)._currentTile);
    if (DAT_057046b6 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item1);
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item2);
      DAT_057046b6 = '\x01';
    }
    iVar15 = *(int *)((long)&(item->fields).m_Item1 + 4);
    fVar19 = (__this->fields)._height;
    (__this->fields)._currentTileCenter.fields.x = (float)*(int *)&(item->fields).m_Item1 * fVar19;
    (__this->fields)._currentTileCenter.fields.y = fVar19;
    (__this->fields)._currentTileCenter.fields.z = (float)iVar15 * fVar19;
    __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Tuple_int__int);
    System_Collections_Generic_List<object>___ctor(__this_06,MethodInfo_List_1_System_Tuple_2_Int32_Int32);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._tileTextures;
    if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_07 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                              (pSVar3,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_T),
       __this_07 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_040c2eff;
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               local_60,__this_07,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    local_b8._16_8_ = local_50;
    local_b8._0_8_ = local_60._0_8_;
    local_b8._8_8_ = local_60._8_8_;
    if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
      do {
        __this_02.fields._8_8_ = item;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
        __this_02.fields._currentKey = (Il2CppObject *)__this;
        bVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                           (__this_02,(MethodInfo_31D0850 *)local_b8);
        uVar11 = local_b8._16_8_;
        if ((char)bVar12 == '\0') goto LAB_040c2a8a;
        if ((Il2CppObject *)local_b8._16_8_ == (Il2CppObject *)0x0) goto LAB_040c2f09;
        iVar15 = *(int *)&((Il2CppObject *)(local_b8._16_8_ + 0x10))->klass -
                 *(int *)&(item->fields).m_Item1;
        if (DAT_05700143 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_05700143 = '\x01';
          iVar14 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar14 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar14 == 0) {
          il2cpp_init_class();
        }
        iVar14 = -iVar15;
        if (0 < iVar15) {
          iVar14 = iVar15;
        }
        if (2 < iVar14) break;
        iVar15 = *(int *)((long)&((Il2CppObject *)(uVar11 + 0x10))->klass + 4) -
                 *(int *)((long)&(item->fields).m_Item1 + 4);
        if (DAT_05700143 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_05700143 = '\x01';
          iVar14 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar14 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar14 == 0) {
          il2cpp_init_class();
        }
        iVar14 = -iVar15;
        if (0 < iVar15) {
          iVar14 = iVar15;
        }
      } while (iVar14 < 3);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_040c286a:
    __this_01.fields._8_8_ = item;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
    __this_01.fields._currentKey = (Il2CppObject *)__this;
    bVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                       (__this_01,(MethodInfo_31D0850 *)local_b8);
    uVar11 = local_b8._16_8_;
    if ((char)bVar12 != '\0') {
      if ((Il2CppObject *)local_b8._16_8_ == (Il2CppObject *)0x0) {
LAB_040c2f09:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar15 = *(int *)&((Il2CppObject *)(local_b8._16_8_ + 0x10))->klass -
               *(int *)&(item->fields).m_Item1;
      if (DAT_05700143 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_05700143 = '\x01';
        iVar14 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar14 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar14 == 0) {
        il2cpp_init_class();
      }
      iVar14 = -iVar15;
      if (0 < iVar15) {
        iVar14 = iVar15;
      }
      if (iVar14 < 3) goto code_r0x040c28df;
      goto LAB_040c2939;
    }
LAB_040c2a8a:
    __this_03.fields._8_8_ = item;
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
    __this_03.fields._currentKey = (Il2CppObject *)__this;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_03,(MethodInfo_31D0840 *)local_b8);
    if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040c2eff;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_06,MethodInfo_List_1_T__Enumerator_System_Tuple_2_Int32_Int32);
    local_88 = local_50;
    local_b8._32_8_ = local_60._0_8_;
    pIStack_90 = (Il2CppType *)local_60._8_8_;
    while (__this_04.fields._8_8_ = item,
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28
          , __this_04.fields._current = (Il2CppObject *)__this,
          bVar12 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (__this_04,(MethodInfo_3185E20 *)(local_b8 + 0x20)), key = local_88,
          (char)bVar12 != '\0') {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._tileTextures;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary<object__object>__get_Item
                      (pSVar3,local_88,MethodInfo_Texture2D_get_Item);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._tileTextures;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__object>__Remove(pSVar3,key,MethodInfo_Boolean_Remove);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
      if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar12 = System_Collections_Generic_HashSet<object>__Contains(pSVar5,key,MethodInfo_Boolean_Contains);
      if ((char)bVar12 != '\0') {
        pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
        if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<object>__Remove(pSVar5,key,MethodInfo_Boolean_Remove);
      }
    }
    __this_05.fields._8_8_ = item;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_05.fields._current = (Il2CppObject *)__this;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_05,(MethodInfo_3185E10 *)(local_b8 + 0x20));
    pSVar8 = (__this->fields)._createTileQueue;
    if (pSVar8 == (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) goto LAB_040c2eff;
    pUVar21 = __this;
    System_Collections_Generic_Queue<object>__Clear
              ((System_Collections_Generic_Queue_T__o *)pSVar8,MethodInfo_Void_Clear);
    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
    if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_040c2eff;
    bVar12 = System_Collections_Generic_HashSet<object>__Contains
                       (pSVar5,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
    if ((char)bVar12 == '\0') {
      pSVar8 = (__this->fields)._createTileQueue;
      if (pSVar8 == (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) goto LAB_040c2eff;
      System_Collections_Generic_Queue<object>__Enqueue
                ((System_Collections_Generic_Queue_T__o *)pSVar8,(Il2CppObject *)item,MethodInfo_Void_Enqueue);
    }
    uVar17 = 0;
    iVar15 = -1;
    do {
      uVar16 = (uint)uVar17;
      iVar14 = (int)((ulong)((long)(int)uVar16 * 0x55555555) >> 0x20) - uVar16;
      key_00 = System_Tuple__Create<int__int>
                         (iVar15 + (int)(uVar17 / 3) * -3 + *(int *)&(item->fields).m_Item1,
                          *(int *)((long)&(item->fields).m_Item1 + 4) +
                          ((iVar14 >> 1) - (iVar14 >> 0x1f)) + 1,MethodInfo_Tuple_2_Int32_Int32__Create_Int32_Int32);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._tileTextures;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_040c2eff;
      bVar12 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                         (pSVar3,(Il2CppObject *)key_00,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar12 == '\0') {
        local_68 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._tileTextures;
        __this = pUVar21;
        if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
          il2cpp_init_class();
          __this = pUVar21;
        }
        width = **(int32_t **)(TypeInfo_MinimapCamera + 0xb8);
        __this_08 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
        UnityEngine_Texture2D___ctor(__this_08,width,width,3,0,(MethodInfo *)0x0);
        if (local_68 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_040c2eff;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (local_68,(Il2CppObject *)key_00,(Il2CppObject *)__this_08,MethodInfo_Void_set_Item);
        pUVar21 = __this;
      }
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
      if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_040c2eff;
      bVar12 = System_Collections_Generic_HashSet<object>__Contains
                         (pSVar5,(Il2CppObject *)key_00,MethodInfo_Boolean_Contains);
      if ((key_00 != item) && ((char)bVar12 == '\0')) {
        pSVar8 = (__this->fields)._createTileQueue;
        if (pSVar8 == (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) goto LAB_040c2eff;
        System_Collections_Generic_Queue<object>__Enqueue
                  ((System_Collections_Generic_Queue_T__o *)pSVar8,(Il2CppObject *)key_00,
                   MethodInfo_Void_Enqueue);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._tileTextures;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_040c2eff;
      value = (UnityEngine_Texture_o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar3,(Il2CppObject *)key_00,MethodInfo_Texture2D_get_Item);
      pUVar6 = (__this->fields)._images;
      if (pUVar6 == (UnityEngine_UI_RawImage_array *)0x0) goto LAB_040c2eff;
      if ((uint)pUVar6->max_length <= uVar16) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pUVar6->m_Items[(int)uVar16] == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_040c2eff;
      UnityEngine_UI_RawImage__set_texture(pUVar6->m_Items[(int)uVar16],value,(MethodInfo *)0x0);
      uVar17 = (ulong)(uVar16 + 1);
      iVar15 = iVar15 + 1;
    } while (uVar16 + 1 != 9);
  }
  if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
    il2cpp_init_class(TypeInfo_MinimapCamera);
  }
  pUVar7 = (__this->fields)._tileTransform;
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    fVar19 = (float)**(int **)(TypeInfo_MinimapCamera + 0xb8) / (__this->fields)._height;
    value_00.fields.x =
         fVar19 * ((__this->fields)._currentTileCenter.fields.x - (float)local_78._0_4_);
    value_00.fields.y = fVar19 * ((__this->fields)._currentTileCenter.fields.z - local_48);
    value_00.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(pUVar7,value_00,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._maskTransform;
    auVar9._4_8_ = 0;
    auVar9._0_4_ = rotation * 0.017453292;
    value_01 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)(auVar9 << 0x40),(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localRotation(pUVar7,value_01,(MethodInfo *)0x0);
      pSVar8 = (__this->fields)._createTileQueue;
      if (pSVar8 != (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0) {
        if (0 < (pSVar8->fields)._size) {
          __this_00 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
          if (__this_00 == (Cameras_MinimapCamera_o *)0x0) goto LAB_040c2eff;
          bVar12 = Cameras_MinimapCamera__Ready(__this_00,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            pSVar8 = (__this->fields)._createTileQueue;
            if (pSVar8 == (System_Collections_Generic_Queue_Tuple_int__int___o *)0x0)
            goto LAB_040c2eff;
            pSVar13 = (System_Tuple_int__int__o *)
                      System_Collections_Generic_Queue<object>__Dequeue
                                ((System_Collections_Generic_Queue_T__o *)pSVar8,MethodInfo_Tuple_2_Int32_Int32__Dequeue);
            UI_MinimapHandler__CreateTile(__this,pSVar13,method_00);
          }
        }
        return;
      }
    }
  }
LAB_040c2eff:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
code_r0x040c28df:
  iVar15 = *(int *)((long)&((Il2CppObject *)(uVar11 + 0x10))->klass + 4) -
           *(int *)((long)&(item->fields).m_Item1 + 4);
  if (DAT_05700143 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05700143 = '\x01';
    iVar14 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar14 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar14 == 0) {
    il2cpp_init_class();
  }
  iVar14 = -iVar15;
  if (0 < iVar15) {
    iVar14 = iVar15;
  }
  if (2 < iVar14) {
LAB_040c2939:
    lVar10 = MethodInfo_Void_Add;
    piVar1 = &(__this_06->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_06->fields)._items;
    if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar16 = (__this_06->fields)._size;
    if (uVar16 < (uint)pSVar4->max_length) {
      (__this_06->fields)._size = uVar16 + 1;
      pSVar4->m_Items[(int)uVar16] = (Il2CppObject *)uVar11;
      il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar16,uVar11);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_06,(Il2CppObject *)uVar11,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_040c286a;
}


// UI.MinimapHandler$$GetCurrentTile
// il2cpp: System_Tuple_int__int__o* UI_MinimapHandler__GetCurrentTile (UI_MinimapHandler_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x40c3bb0

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
  if (DAT_057046b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Tuple_2_Int32_Int32__Create_Int32_Int32);
    DAT_057046b5 = '\x01';
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
  pSVar2 = System_Tuple__Create<int__int>((int)(fVar4 / fVar1),(int)(fVar3 / fVar1),MethodInfo_Tuple_2_Int32_Int32__Create_Int32_Int32);
  return (System_Tuple_int__int__o *)pSVar2;
}


// UI.MinimapHandler$$GetTilePosition
// il2cpp: UnityEngine_Vector3_o UI_MinimapHandler__GetTilePosition (UI_MinimapHandler_o* __this, System_Tuple_int__int__o* tile, const MethodInfo* method);
// 0x40c3c60

UnityEngine_Vector3_o
UI_MinimapHandler__GetTilePosition
          (UI_MinimapHandler_o *__this,System_Tuple_int__int__o *tile,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_057046b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item1);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item2);
    DAT_057046b6 = '\x01';
  }
  if (tile != (System_Tuple_int__int__o *)0x0) {
    fVar1 = (__this->fields)._height;
    UVar2.fields.z = (float)(tile->fields).m_Item2 * fVar1;
    UVar2.fields.x = (float)(tile->fields).m_Item1 * fVar1;
    UVar2.fields.y = fVar1;
    return (UnityEngine_Vector3_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MinimapHandler$$CreateTile
// il2cpp: void UI_MinimapHandler__CreateTile (UI_MinimapHandler_o* __this, System_Tuple_int__int__o* tile, const MethodInfo* method);
// 0x40c3cc0

void UI_MinimapHandler__CreateTile
               (UI_MinimapHandler_o *__this,System_Tuple_int__int__o *tile,MethodInfo *method)

{
  float height;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Cameras_MinimapCamera_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool_conflict bVar2;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Vector3_o position;
  
  if (DAT_057046b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Texture2D_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057046b7 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._tileTextures
  ;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)tile,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._tileTextures;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      texture = (UnityEngine_Texture2D_o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (pSVar1,(Il2CppObject *)tile,MethodInfo_Texture2D_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return;
      }
      __this_00 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
      if (DAT_057046b6 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item1);
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item2);
        DAT_057046b6 = '\x01';
      }
      if ((tile != (System_Tuple_int__int__o *)0x0) && (__this_00 != (Cameras_MinimapCamera_o *)0x0)
         ) {
        height = (__this->fields)._height;
        position.fields.x = (float)(tile->fields).m_Item1 * height;
        position.fields.z = (float)(tile->fields).m_Item2 * height;
        position.fields.y = height;
        Cameras_MinimapCamera__TakeSnapshot(__this_00,position,height,texture,1,0,(MethodInfo *)0x0)
        ;
        __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._finishedTiles;
        if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet<object>__Add
                    (__this_01,(Il2CppObject *)tile,MethodInfo_Boolean_Add);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MinimapHandler$$.ctor
// il2cpp: void UI_MinimapHandler___ctor (UI_MinimapHandler_o* __this, const MethodInfo* method);
// 0x40c3e40

void UI_MinimapHandler___ctor(UI_MinimapHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_array *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Queue_Tuple_int__int___o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Tuple_int__int__o *__this_02;
  System_Collections_Generic_List_Transform__o *__this_03;
  
  if (DAT_057046b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Tuple_2_Int32_Int32__UnityEn);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_T);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_Transform_Characters_Ba);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Transform__BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Tuple_int__int___Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Transform__Transform);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Tuple_2_Int32_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Tuple_int__int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_init_method_metadata(&TypeInfo_List_Transform);
    il2cpp_init_method_metadata(&MethodInfo_Queue_1_System_Tuple_2_Int32_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Queue_Tuple_int__int);
    il2cpp_init_method_metadata(&TypeInfo_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Tuple_2_Int32_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Tuple_int__int);
    DAT_057046b8 = '\x01';
  }
  pUVar1 = (UnityEngine_UI_RawImage_array *)il2cpp_glue_02274930(TypeInfo_RawImage,9);
  (__this->fields)._images = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._images,pUVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_Tuple_int__int___Texture2D);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_Tuple_2_Int32_Int32__UnityEn);
  (__this->fields)._tileTextures =
       (System_Collections_Generic_Dictionary_Tuple_int__int___Texture2D__o *)pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._tileTextures,pSVar2);
  __this_00 = (System_Collections_Generic_Queue_Tuple_int__int___o *)
              il2cpp_runtime_glue(TypeInfo_Queue_Tuple_int__int);
  System_Collections_Generic_Queue<object>___ctor
            ((System_Collections_Generic_Queue_T__o *)__this_00,MethodInfo_Queue_1_System_Tuple_2_Int32_Int32);
  (__this->fields)._createTileQueue = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._createTileQueue,__this_00);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Tuple_int__int);
  System_Collections_Generic_HashSet<object>___ctor(__this_01,MethodInfo_HashSet_1_System_Tuple_2_Int32_Int32);
  (__this->fields)._finishedTiles =
       (System_Collections_Generic_HashSet_Tuple_int__int___o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields)._finishedTiles);
  __this_02 = (System_Tuple_int__int__o *)il2cpp_runtime_glue(TypeInfo_Tuple_int__int);
  System_Tuple<int__int>___ctor(__this_02,0,0,MethodInfo_Tuple_2_Int32_Int32);
  (__this->fields)._currentTile = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._currentTile,__this_02);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_Transform__Transform);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_T);
  (__this->fields)._icons = (System_Collections_Generic_Dictionary_Transform__Transform__o *)pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._icons,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_Transform__BaseCharacter);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_UnityEngine_Transform_Characters_Ba);
  (__this->fields)._characters =
       (System_Collections_Generic_Dictionary_Transform__BaseCharacter__o *)pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._characters,pSVar2);
  __this_03 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_glue(TypeInfo_List_Transform);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_Transform);
  (__this->fields)._iconsToRemove = __this_03;
  il2cpp_runtime_glue(&(__this->fields)._iconsToRemove);
  *(undefined1 *)&(__this->fields)._needUpdateTiles = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MinimapHandler$$.cctor
// il2cpp: void UI_MinimapHandler___cctor (const MethodInfo* method);
// 0x40c40d0

void UI_MinimapHandler___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_057046b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    DAT_057046b9 = '\x01';
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


