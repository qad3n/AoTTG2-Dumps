// Type: UI.ShifterHUD
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ShifterHUD.cs
// Prior real C# source: none
// --------------------------------

// UI.ShifterHUD$$Create
// il2cpp: UnityEngine_GameObject_o* UI_ShifterHUD__Create (UnityEngine_Transform_o* parent, Characters_BaseShifter_o* shifter, const MethodInfo* method);
// 0x5d4e7b0

UnityEngine_GameObject_o *
UI_ShifterHUD__Create(UnityEngine_Transform_o *parent,Characters_BaseShifter_o *shifter,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *path;
  Il2CppType *handle;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Texture_o *value;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UI_ShifterHUD_o *__this_03;
  MethodInfo *method_00;
  float fVar6;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o offset;
  
  if (Il2CppMethodInitialized_07547ef1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HUDScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ShifterHUD);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterHUD");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/HUD/ShifterHUDSpriteSheet");
    Il2CppMethodInitialized_07547ef1 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset
                    (path,"Sprites/HUD/ShifterHUDSpriteSheet",true,false,(MethodInfo *)0x0);
  if ((value != (UnityEngine_Texture_o *)0x0) &&
     (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(value);
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"ShifterHUD",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
        if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
          __this_02 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (value != (UnityEngine_Texture_o *)0x0) {
            iVar3 = (*(value->klass->vtable)._7_get_height.methodPtr)
                              (value,(value->klass->vtable)._7_get_height.method);
            iVar4 = (*(value->klass->vtable)._5_get_width.methodPtr)
                              (value,(value->klass->vtable)._5_get_width.method);
            if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
              if (__this_02->klass != TypeInfo_UnityEngine_RectTransform) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_02);
              }
              value_00.fields.y = ((float)iVar3 * 1024.0 * 4.0) / (float)(iVar4 * 7);
              value_00.fields.x = 1024.0;
              UnityEngine_RectTransform__set_sizeDelta(__this_02,value_00,(MethodInfo *)0x0);
              __this_03 = UnityEngine_GameObject__AddComponent_object_
                                    (__this,(MethodInfo_353B6A0 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_ShifterHUD);
              if (__this_03 != (UI_ShifterHUD_o *)0x0) {
                (__this_03->fields)._image = __this_01;
                Il2CppCodeGenWriteBarrier(&(__this_03->fields)._image);
                (__this_03->fields)._shifter = shifter;
                Il2CppCodeGenWriteBarrier(&(__this_03->fields)._shifter);
                if (shifter != (Characters_BaseShifter_o *)0x0) {
                  fVar6 = Characters_BaseShifter__get_LiveTimeRatio(shifter,(MethodInfo *)0x0);
                  if (0.0 <= fVar6) {
                    UI_ShifterHUD__CreateTimer
                              (__this_03,(shifter->fields)._SpecialIcon_k__BackingField,method_00);
                  }
                  UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_HUDScaler);
                  if (Il2CppMethodInitialized_0753e72c == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_0753e72c = '\x01';
                  }
                  uVar1 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
                  uVar2 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
                  offset.fields.x = (float)uVar1 * 10.0;
                  offset.fields.y = (float)uVar2 * 10.0;
                  UI_ElementFactory__SetAnchor(__this,7,7,offset,(MethodInfo *)0x0);
                  return __this;
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


// UI.ShifterHUD$$CreateTimer
// il2cpp: void UI_ShifterHUD__CreateTimer (UI_ShifterHUD_o* __this, System_String_o* iconName, const MethodInfo* method);
// 0x5d4eba0

void UI_ShifterHUD__CreateTimer(UI_ShifterHUD_o *__this,System_String_o *iconName,MethodInfo *method)

{
  UnityEngine_Sprite_o **targetAddress;
  UnityEngine_Sprite_o **targetAddress_00;
  int32_t *piVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_List_Image__o *__this_00;
  UnityEngine_UI_Image_array *pUVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  Il2CppType *handle;
  MethodInfo *pMVar7;
  bool bVar8;
  int32_t iVar9;
  int32_t iVar10;
  uint uVar11;
  System_String_o *name;
  UnityEngine_Texture2D_o *pUVar12;
  UnityEngine_Texture2D_o *pUVar13;
  UnityEngine_Object_o *pUVar14;
  UnityEngine_Sprite_o *pUVar15;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar19;
  UnityEngine_UI_Image_o *pUVar20;
  UnityEngine_Sprite_o **ppUVar21;
  UnityEngine_Object_o *x;
  UnityEngine_Texture2D_o *texture;
  uint uVar22;
  
  if (Il2CppMethodInitialized_07547ef2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Image_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8c8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ShifterHUD);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/HUD/ShifterHUDSpecialFill");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialBackdrop");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDBottomBlade");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Specials/");
    Il2CppMethodInitialized_07547ef2 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  name = System_String__Concat_52f0320("Icons/Specials/",iconName,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar12 = (UnityEngine_Texture2D_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar2,name,true,false,(MethodInfo *)0x0);
  texture = (UnityEngine_Texture2D_o *)0x0;
  if ((pUVar12 != (UnityEngine_Texture2D_o *)0x0) &&
     (texture = (UnityEngine_Texture2D_o *)0x0, pUVar12->klass == TypeInfo_UnityEngine_Texture2D)) {
    texture = pUVar12;
  }
  pUVar13 = (UnityEngine_Texture2D_o *)
            ApplicationManagers_ResourceManager__LoadAsset
                      (TypeInfo_Utility_ResourcePaths->static_fields->UI,"Sprites/HUD/ShifterHUDSpecialFill",true,false,
                       (MethodInfo *)0x0);
  pUVar12 = (UnityEngine_Texture2D_o *)0x0;
  if ((pUVar13 != (UnityEngine_Texture2D_o *)0x0) &&
     (pUVar12 = (UnityEngine_Texture2D_o *)0x0, pUVar13->klass == TypeInfo_UnityEngine_Texture2D)) {
    pUVar12 = pUVar13;
  }
  pUVar14 = ApplicationManagers_ResourceManager__LoadAsset
                      (TypeInfo_Utility_ResourcePaths->static_fields->UI,"Prefabs/InGame/HUDBottomBlade",true,false,
                       (MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)0x0;
  if ((pUVar14 != (UnityEngine_Object_o *)0x0) &&
     (x = (UnityEngine_Object_o *)0x0,
     pUVar14->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject)) {
    x = pUVar14;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar8) {
        if ((TypeInfo_UI_ShifterHUD->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ShifterHUD);
        }
        if (texture != (UnityEngine_Texture2D_o *)0x0) {
          iVar9 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                            (texture,(texture->klass->vtable)._5_get_width.method);
          iVar10 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                             (texture,(texture->klass->vtable)._7_get_height.method);
          auVar5._4_4_ = (float)iVar10;
          auVar5._0_4_ = (float)iVar9;
          auVar5._8_8_ = 0;
          pUVar15 = UnityEngine_Sprite__Create_68ba7d0
                              (texture,(UnityEngine_Rect_o)(auVar5 << 0x40),
                               (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          targetAddress = &(__this->fields)._icon;
          (__this->fields)._icon = pUVar15;
          Il2CppCodeGenWriteBarrier(targetAddress);
          if (pUVar12 != (UnityEngine_Texture2D_o *)0x0) {
            iVar9 = (*(pUVar12->klass->vtable)._5_get_width.methodPtr)
                              (pUVar12,(pUVar12->klass->vtable)._5_get_width.method);
            iVar10 = (*(pUVar12->klass->vtable)._7_get_height.methodPtr)
                               (pUVar12,(pUVar12->klass->vtable)._7_get_height.method);
            auVar6._4_4_ = (float)iVar10;
            auVar6._0_4_ = (float)iVar9;
            auVar6._8_8_ = 0;
            pUVar15 = UnityEngine_Sprite__Create_68ba7d0
                                (pUVar12,(UnityEngine_Rect_o)(auVar6 << 0x40),
                                 (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            targetAddress_00 = &(__this->fields)._fill;
            (__this->fields)._fill = pUVar15;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
            components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
            handle = TypeRef_UnityEngine_RectTransform;
            if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_075567a8);
            }
            obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
            if (components != (System_Type_array *)0x0) {
              if ((obj != (System_Type_o *)0x0) &&
                 (pIVar16 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
                 pIVar16 == (Il2CppObject *)0x0)) {
                pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
              }
              if ((int)components->max_length == 0) {
label_05d4f336:
                ThrowIndexOutOfRangeException();
              }
              components->m_Items[0] = obj;
              Il2CppCodeGenWriteBarrier(components->m_Items);
              pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_691aa60
                        (pUVar17,"SpecialBackdrop",components,(MethodInfo *)0x0);
              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_692d510(pUVar18,parent,false,(MethodInfo *)0x0);
                  pUVar19 = (UnityEngine_RectTransform_o *)
                            UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                  if (pUVar19 != (UnityEngine_RectTransform_o *)0x0) {
                    if (pUVar19->klass != TypeInfo_UnityEngine_RectTransform) {
                      il2cpp_codegen_raise_invalid_cast_exception(pUVar19);
                    }
                    UnityEngine_RectTransform__set_sizeDelta
                              (pUVar19,(UnityEngine_Vector2_o)0x4308888943088889,(MethodInfo *)0x0);
                    pUVar20 = UnityEngine_GameObject__AddComponent_object_
                                        (pUVar17,(MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                    if (pUVar20 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_UI_Image__set_sprite(pUVar20,*targetAddress_00,(MethodInfo *)0x0);
                      (*(pUVar20->klass->vtable)._23_set_color.methodPtr)
                                (pUVar20,(UnityEngine_Color_o)
                                         (TypeInfo_UI_ShifterHUD->static_fields->BackdropColor).fields,
                                 (pUVar20->klass->vtable)._23_set_color.method);
                      (*(pUVar20->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (pUVar20,false,(pUVar20->klass->vtable)._25_set_raycastTarget.method);
                      pSVar3 = TypeInfo_UI_ShifterHUD->static_fields->SpecialElements;
                      if (pSVar3 != (System_String_array *)0x0) {
                        uVar11 = (uint)pSVar3->max_length;
                        if (x != (UnityEngine_Object_o *)0x0) {
                          if ((int)uVar11 < 1) {
                            return;
                          }
                          uVar22 = 0;
                          while (uVar22 < uVar11) {
                            pSVar2 = pSVar3->m_Items[(int)uVar22];
                            pUVar18 = UnityEngine_GameObject__get_transform
                                                ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
                            if ((pUVar18 == (UnityEngine_Transform_o *)0x0) ||
                               (pUVar18 = UnityEngine_Transform__Find(pUVar18,pSVar2,(MethodInfo *)0x0),
                               pUVar18 == (UnityEngine_Transform_o *)0x0)) goto label_05d4f331;
                            pUVar17 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                            pUVar18 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                            }
                            pUVar17 = UnityEngine_Object__Instantiate_object__35a4490
                                                ((Il2CppObject *)pUVar17,pUVar18,false,
                                                 (MethodInfo_35A4490 *)
                                                 MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8c8)
                            ;
                            if ((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
                               (pUVar19 = (UnityEngine_RectTransform_o *)
                                          UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
                               pUVar19 == (UnityEngine_RectTransform_o *)0x0)) goto label_05d4f331;
                            if (pUVar19->klass != TypeInfo_UnityEngine_RectTransform) {
                              il2cpp_codegen_raise_invalid_cast_exception(pUVar19);
                            }
                            UnityEngine_RectTransform__set_pivot
                                      (pUVar19,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (pUVar19,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMin
                                      (pUVar19,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                              Il2CppMethodInitialized_0753ecc8 = '\x01';
                            }
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (pUVar19,(UnityEngine_Vector2_o)
                                               (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).
                                               fields,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_sizeDelta
                                      (pUVar19,(UnityEngine_Vector2_o)0x4308888943088889,(MethodInfo *)0x0);
                            pUVar20 = UnityEngine_GameObject__GetComponent_object_
                                                (pUVar17,(MethodInfo_353B730 *)
                                                         MethodInfo_UnityEngine_GameObject_GetComponent_Image)
                            ;
                            if ((pUVar20 == (UnityEngine_UI_Image_o *)0x0) ||
                               ((*(pUVar20->klass->vtable)._25_set_raycastTarget.methodPtr)
                                          (pUVar20,false,(pUVar20->klass->vtable)._25_set_raycastTarget.method
                                          ), pSVar2 == (System_String_o *)0x0)) goto label_05d4f331;
                            bVar8 = System_String__StartsWith(pSVar2,"SpecialIcon",(MethodInfo *)0x0);
                            ppUVar21 = targetAddress_00;
                            if (bVar8) {
                              ppUVar21 = targetAddress;
                            }
                            UnityEngine_UI_Image__set_sprite(pUVar20,*ppUVar21,(MethodInfo *)0x0);
                            pMVar7 = MethodInfo_System_Collections_Generic_List_Image_Add;
                            if ((pUVar20->fields).m_Type == 3) {
                              __this_00 = (__this->fields)._timers;
                              if (__this_00 == (System_Collections_Generic_List_Image__o *)0x0)
                              goto label_05d4f331;
                              piVar1 = &(__this_00->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pUVar4 = (__this_00->fields)._items;
                              if (pUVar4 == (UnityEngine_UI_Image_array *)0x0) goto label_05d4f331;
                              uVar11 = (__this_00->fields)._size;
                              if (uVar11 < (uint)pUVar4->max_length) {
                                (__this_00->fields)._size = uVar11 + 1;
                                pUVar4->m_Items[(int)uVar11] = pUVar20;
                                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar11);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_00,
                                           (Il2CppObject *)pUVar20,
                                           (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                              }
                            }
                            uVar22 = uVar22 + 1;
                            uVar11 = (uint)pSVar3->max_length;
                            if ((int)uVar11 <= (int)uVar22) {
                              return;
                            }
                          }
                          goto label_05d4f336;
                        }
                        if ((int)uVar11 < 1) {
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
label_05d4f331:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// UI.ShifterHUD$$CreateSprite
// il2cpp: UnityEngine_Sprite_o* UI_ShifterHUD__CreateSprite (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x5d4f360

UnityEngine_Sprite_o * UI_ShifterHUD__CreateSprite(UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  undefined1 auVar1 [16];
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_Sprite_o *pUVar4;
  
  if (texture == (UnityEngine_Texture2D_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                    (texture,(texture->klass->vtable)._5_get_width.method);
  iVar3 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                    (texture,(texture->klass->vtable)._7_get_height.method);
  auVar1._4_4_ = (float)iVar3;
  auVar1._0_4_ = (float)iVar2;
  auVar1._8_8_ = 0;
  pUVar4 = UnityEngine_Sprite__Create_68ba7d0
                     (texture,(UnityEngine_Rect_o)(auVar1 << 0x40),(UnityEngine_Vector2_o)0x3f0000003f000000,
                      (MethodInfo *)0x0);
  return pUVar4;
}


// UI.ShifterHUD$$Start
// il2cpp: void UI_ShifterHUD__Start (UI_ShifterHUD_o* __this, const MethodInfo* method);
// 0x5d4f3c0

void UI_ShifterHUD__Start(UI_ShifterHUD_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Rect_o value;
  
  __this_00 = (__this->fields)._image;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    ThrowNullReferenceException();
  }
  value.fields.m_Width = 0.25;
  value.fields.m_Height = 0.14285715;
  value.fields.m_XMin = 0.0;
  value.fields.m_YMin = 0.85714287;
  UnityEngine_UI_RawImage__set_uvRect(__this_00,value,(MethodInfo *)0x0);
  return;
}


// UI.ShifterHUD$$Update
// il2cpp: void UI_ShifterHUD__Update (UI_ShifterHUD_o* __this, const MethodInfo* method);
// 0x5d4f450
// eh: try 0x5d4f554..0x5d4f701 -> pad 0x5d4f70f (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d4f729..0x5d4f72e -> pad 0x5d4f753 cleanup
// eh: try 0x5d4f756..0x5d4f760 -> pad 0x5d4f768 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4f70b: jmp 0x5d4f711
// asm:   0x5d4f70d: jmp 0x5d4f711
// asm:   0x5d4f70f: jmp 0x5d4f711
// asm:   0x5d4f711: mov rbx, rax
// asm:   0x5d4f714: cmp edx, 1
// asm:   0x5d4f717: jne 0x5d4f756
// asm:   0x5d4f719: mov rdi, rbx
// asm:   0x5d4f71c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d4f721: mov rbx, qword ptr [rax]
// asm:   0x5d4f724: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d4f729: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d4f72e: lea rax, [rip + 0x153ea1b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Image_Dispose
// asm:   0x5d4f735: mov rsi, qword ptr [rax]
// asm:   0x5d4f738: lea rdi, [rsp + 0x10]
// asm:   0x5d4f73d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d4f742: test rbx, rbx
// asm:   0x5d4f745: je 0x5d4f5a2
// asm:   0x5d4f74b: mov rdi, rbx
// asm:   0x5d4f74e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d4f753: mov rbx, rax
// asm:   0x5d4f756: lea rdi, [rsp + 0x30]
// asm:   0x5d4f75b: call 0x2fdcab0  ; il2cpp_runtime_helper_02fdcab0()
// asm:   0x5d4f760: mov rdi, rbx
// asm:   0x5d4f763: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d4f768: mov rdi, rax
// asm:   0x5d4f76b: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ShifterHUD__Update(UI_ShifterHUD_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  System_Collections_Generic_List_Image__o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_UI_Image_o *__this_02;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  System_Single_array *pSVar5;
  Il2CppClass *klass;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o value;
  undefined1 auStack_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  UnityEngine_UI_Image_o *pUStack_48;
  undefined1 auStack_38 [16];
  UnityEngine_UI_Image_o *pUStack_28;
  
  if (Il2CppMethodInitialized_07547ef3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Image_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Image_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Image_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Image_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ShifterHUD);
    Il2CppMethodInitialized_07547ef3 = '\x01';
  }
  auStack_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_48 = (UnityEngine_UI_Image_o *)0x0;
  pCVar1 = (__this->fields)._shifter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._timers;
    if (__this_00 == (System_Collections_Generic_List_Image__o *)0x0) goto label_05d4f706;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_38,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Image_GetEnumerator);
    pUStack_48 = pUStack_28;
    auStack_58 = (undefined1  [8])auStack_38._0_8_;
    pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_38._8_8_;
    auStack_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_38._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_58;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Image_MoveNext);
      __this_02 = pUStack_48;
      if (!bVar2) break;
      pCVar1 = (__this->fields)._shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar6 = Characters_BaseShifter__get_LiveTimeRatio(pCVar1,(MethodInfo *)0x0);
      if (__this_02 == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_UI_Image__set_fillAmount(__this_02,fVar6,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Image_Dispose);
  }
  if ((__this->fields)._frame < 0x15) {
    fVar6 = (__this->fields)._frameTime;
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar7 = fVar7 + fVar6;
    (__this->fields)._frameTime = fVar7;
    uVar3 = (__this->fields)._frame;
    if ((int)uVar3 < 0x15) {
      klass = (Il2CppClass *)TypeInfo_UI_ShifterHUD;
      do {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_UI_ShifterHUD;
        }
        pSVar5 = *(System_Single_array **)((long)klass->static_fields + 0x18);
        if (pSVar5 == (System_Single_array *)0x0) goto label_05d4f706;
        uVar3 = (__this->fields)._frame;
        if ((uint)pSVar5->max_length <= uVar3) {
label_05d4f701:
          ThrowIndexOutOfRangeException();
        }
        if (fVar7 < pSVar5->m_Items[(int)uVar3]) break;
        fVar7 = (__this->fields)._frameTime;
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          pSVar5 = TypeInfo_UI_ShifterHUD->static_fields->FrameDurations;
          if (pSVar5 == (System_Single_array *)0x0) goto label_05d4f706;
          uVar3 = (__this->fields)._frame;
          klass = (Il2CppClass *)TypeInfo_UI_ShifterHUD;
        }
        if ((uint)pSVar5->max_length <= uVar3) goto label_05d4f701;
        fVar7 = fVar7 - pSVar5->m_Items[(int)uVar3];
        (__this->fields)._frameTime = fVar7;
        uVar3 = uVar3 + 1;
        (__this->fields)._frame = uVar3;
      } while ((int)uVar3 < 0x15);
    }
    __this_01 = (__this->fields)._image;
    if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
label_05d4f706:
      ThrowNullReferenceException();
    }
    uVar4 = uVar3 + 3;
    if (-1 < (int)uVar3) {
      uVar4 = uVar3;
    }
    value.fields.m_XMin = (float)((int)uVar3 % 4) * 0.25;
    value.fields.m_YMin = (float)(((int)uVar4 >> 2) + 1) / -7.0 + 1.0;
    value.fields.m_Width = 0.25;
    value.fields.m_Height = 0.14285715;
    UnityEngine_UI_RawImage__set_uvRect(__this_01,value,(MethodInfo *)0x0);
  }
  return;
}


// UI.ShifterHUD$$ShowFrame
// il2cpp: void UI_ShifterHUD__ShowFrame (UI_ShifterHUD_o* __this, int32_t frame, const MethodInfo* method);
// 0x5d4f3f0

void UI_ShifterHUD__ShowFrame(UI_ShifterHUD_o *__this,int32_t frame,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  int iVar1;
  UnityEngine_Rect_o value;
  
  __this_00 = (__this->fields)._image;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = frame + 3;
  if (-1 < frame) {
    iVar1 = frame;
  }
  value.fields.m_XMin = (float)(frame % 4) * 0.25;
  value.fields.m_YMin = (float)((iVar1 >> 2) + 1) / -7.0 + 1.0;
  value.fields.m_Width = 0.25;
  value.fields.m_Height = 0.14285715;
  UnityEngine_UI_RawImage__set_uvRect(__this_00,value,(MethodInfo *)0x0);
  return;
}


// UI.ShifterHUD$$OnDestroy
// il2cpp: void UI_ShifterHUD__OnDestroy (UI_ShifterHUD_o* __this, const MethodInfo* method);
// 0x5d4f770

void UI_ShifterHUD__OnDestroy(UI_ShifterHUD_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ef4 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._icon;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._icon;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._fill;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._fill;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ShifterHUD$$.ctor
// il2cpp: void UI_ShifterHUD___ctor (UI_ShifterHUD_o* __this, const MethodInfo* method);
// 0x5d4f830

void UI_ShifterHUD___ctor(UI_ShifterHUD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Image__o *__this_00;
  
  if (Il2CppMethodInitialized_07547ef5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Image_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Image);
    Il2CppMethodInitialized_07547ef5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Image);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Image_ctor);
  (__this->fields)._timers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._timers);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ShifterHUD$$.cctor
// il2cpp: void UI_ShifterHUD___cctor (const MethodInfo* method);
// 0x5d4f8b0

void UI_ShifterHUD___cctor(MethodInfo *method)

{
  UI_ShifterHUD_StaticFields *pUVar1;
  System_String_array *pSVar2;
  System_Single_array *array;
  
  if (Il2CppMethodInitialized_07547ef6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ShifterHUD);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_E68591ED831414CCD8BE1313E02B27670D892A712B839224ED86D59EA2CBA42E
              );
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialIconFill");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialFill");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialIconBackground");
    Il2CppMethodInitialized_07547ef6 = '\x01';
  }
  pUVar1 = TypeInfo_UI_ShifterHUD->static_fields;
  (pUVar1->BackdropColor).fields.r = 0.0;
  (pUVar1->BackdropColor).fields.g = 0.0;
  (pUVar1->BackdropColor).fields.b = 0.0;
  (pUVar1->BackdropColor).fields.a = 0.5;
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "SpecialFill";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "SpecialIconFill";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "SpecialIconBackground";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        pUVar1 = TypeInfo_UI_ShifterHUD->static_fields;
        pUVar1->SpecialElements = pSVar2;
        Il2CppCodeGenWriteBarrier(&pUVar1->SpecialElements);
        array = (System_Single_array *)SZArrayNew(TypeInfo_float_array,0x16);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                  ((System_Array_o *)array,
                   FieldRva_PrivateImplementationDetails_E68591ED831414CCD8BE1313E02B27670D892A712B839224ED86D59EA2CBA42E
                   ,(MethodInfo *)0x0);
        pUVar1 = TypeInfo_UI_ShifterHUD->static_fields;
        pUVar1->FrameDurations = array;
        Il2CppCodeGenWriteBarrier(&pUVar1->FrameDurations);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


