// Type: UI.ShifterHUD
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/ShifterHUD.cs
// Prior real C# source: none
// --------------------------------

// UI.ShifterHUD$$Create
// il2cpp: UnityEngine_GameObject_o* UI_ShifterHUD__Create (UnityEngine_Transform_o* parent, Characters_BaseShifter_o* shifter, const MethodInfo* method);
// 0x18227e6a0

UnityEngine_GameObject_o *
UI_ShifterHUD__Create(UnityEngine_Transform_o *parent,Characters_BaseShifter_o *shifter,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *path;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Texture_o *pUVar5;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UI_ShifterHUD_o *__this_02;
  UnityEngine_Texture_o *value_00;
  float fVar9;
  UnityEngine_Vector2_o offset;
  
  if (Il2CppMethodInitialized_184347378 == '\0') {
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
    Il2CppMethodInitialized_184347378 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar5 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(path,"Sprites/HUD/ShifterHUDSpriteSheet",true,(MethodInfo *)0x0);
  value_00 = (UnityEngine_Texture_o *)0x0;
  if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar5->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      value_00 = pUVar5;
    }
    if (value_00 == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) {
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"ShifterHUD",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
        if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(__this_01,value_00,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
          pUVar7 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (value_00 != (UnityEngine_Texture_o *)0x0) {
            iVar3 = (*(value_00->klass->vtable)._7_get_height.methodPtr)
                              (value_00,(value_00->klass->vtable)._7_get_height.method);
            iVar4 = (*(value_00->klass->vtable)._5_get_width.methodPtr)
                              (value_00,(value_00->klass->vtable)._5_get_width.method);
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              pUVar8 = (UnityEngine_RectTransform_o *)0x0;
              if (pUVar7->klass == TypeInfo_UnityEngine_RectTransform) {
                pUVar8 = pUVar7;
              }
              if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar7);
              }
              value.fields.y = ((float)iVar3 * 1024.0 * 4.0) / (float)(iVar4 * 7);
              value.fields.x = 1024.0;
              pUVar8 = (UnityEngine_RectTransform_o *)0x0;
              if (pUVar7->klass == TypeInfo_UnityEngine_RectTransform) {
                pUVar8 = pUVar7;
              }
              UnityEngine_RectTransform__set_sizeDelta(pUVar8,value,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__AddComponent_object_
                                    (__this,(MethodInfo_6F4D60 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_ShifterHUD);
              if (__this_02 != (UI_ShifterHUD_o *)0x0) {
                (__this_02->fields)._image = __this_01;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields)._image,__this_01);
                (__this_02->fields)._shifter = shifter;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields)._shifter,shifter);
                if (shifter != (Characters_BaseShifter_o *)0x0) {
                  fVar9 = Characters_BaseShifter__get_LiveTimeRatio(shifter,(MethodInfo *)0x0);
                  if (0.0 <= fVar9) {
                    UI_ShifterHUD__CreateTimer
                              (__this_02,(shifter->fields)._SpecialIcon_k__BackingField,(MethodInfo *)0x0);
                  }
                  UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_HUDScaler);
                  if (Il2CppMethodInitialized_18433de5c == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_18433de5c = '\x01';
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
// 0x18227dfb0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227e449: nop dword ptr [rax]
// asm:   0x18227e636: movaps xmm6, xmmword ptr [rsp + 0x40]
// asm:   0x18227e63b: mov r15, qword ptr [rsp + 0x88]
// asm:   0x18227e643: mov rsi, qword ptr [rsp + 0x78]
// asm:   0x18227e648: mov rbp, qword ptr [rsp + 0x70]
// asm:   0x18227e64d: movaps xmm7, xmmword ptr [rsp + 0x30]

void UI_ShifterHUD__CreateTimer(UI_ShifterHUD_o *__this,System_String_o *iconName,MethodInfo *method)

{
  System_String_o *pSVar1;
  UI_ShifterHUD_StaticFields *pUVar2;
  System_String_array *pSVar3;
  Il2CppType *handle;
  bool bVar4;
  System_String_o *name;
  UnityEngine_Texture2D_o *pUVar5;
  UnityEngine_Texture2D_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Sprite_o *pUVar8;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_UI_Image_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_Texture2D_o *texture;
  uint uVar15;
  UnityEngine_Object_o *x;
  UnityEngine_Color_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_184347379 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Image_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9aa0);
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
    Il2CppMethodInitialized_184347379 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  name = System_String__Concat_1969e50("Icons/Specials/",iconName,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar5 = (UnityEngine_Texture2D_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar1,name,true,(MethodInfo *)0x0);
  texture = (UnityEngine_Texture2D_o *)0x0;
  if ((pUVar5 != (UnityEngine_Texture2D_o *)0x0) && (pUVar5->klass == TypeInfo_UnityEngine_Texture2D)) {
    texture = pUVar5;
  }
  pUVar6 = (UnityEngine_Texture2D_o *)
           ApplicationManagers_ResourceManager__LoadAsset
                     (TypeInfo_Utility_ResourcePaths->static_fields->UI,"Sprites/HUD/ShifterHUDSpecialFill",true,
                      (MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Texture2D_o *)0x0;
  if ((pUVar6 != (UnityEngine_Texture2D_o *)0x0) && (pUVar6->klass == TypeInfo_UnityEngine_Texture2D)) {
    pUVar5 = pUVar6;
  }
  pUVar7 = ApplicationManagers_ResourceManager__LoadAsset
                     (TypeInfo_Utility_ResourcePaths->static_fields->UI,"Prefabs/InGame/HUDBottomBlade",true,
                      (MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)0x0;
  if ((pUVar7 != (UnityEngine_Object_o *)0x0) &&
     (pUVar7->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject)) {
    x = pUVar7;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        if ((TypeInfo_UI_ShifterHUD->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ShifterHUD);
        }
        pUVar8 = UI_ShifterHUD__CreateSprite(texture,(MethodInfo *)0x0);
        (__this->fields)._icon = pUVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._icon,pUVar8);
        pUVar8 = UI_ShifterHUD__CreateSprite(pUVar5,(MethodInfo *)0x0);
        (__this->fields)._fill = pUVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._fill,pUVar8);
        components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
        handle = TypeRef_UnityEngine_RectTransform;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (components != (System_Type_array *)0x0) {
          if ((obj != (System_Type_o *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)components->max_length == 0) {
label_18227e685:
            ThrowIndexOutOfRangeException();
          }
          components->m_Items[0] = obj;
          Il2CppCodeGenWriteBarrier(components->m_Items,obj);
          pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(pUVar10,"SpecialBackdrop",components,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(pUVar11,parent,false,(MethodInfo *)0x0);
              pUVar12 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                pUVar14 = (UnityEngine_RectTransform_o *)0x0;
                if (pUVar12->klass == TypeInfo_UnityEngine_RectTransform) {
                  pUVar14 = pUVar12;
                }
                if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) {
                  il2cpp_codegen_raise_invalid_cast_exception(pUVar12);
                }
                pUVar14 = (UnityEngine_RectTransform_o *)0x0;
                if (pUVar12->klass == TypeInfo_UnityEngine_RectTransform) {
                  pUVar14 = pUVar12;
                }
                UnityEngine_RectTransform__set_sizeDelta
                          (pUVar14,(UnityEngine_Vector2_o)0x4308888943088889,(MethodInfo *)0x0);
                pUVar13 = UnityEngine_GameObject__AddComponent_object_
                                    (pUVar10,(MethodInfo_6F4D60 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                if (pUVar13 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_sprite(pUVar13,(__this->fields)._fill,(MethodInfo *)0x0);
                  pUVar2 = TypeInfo_UI_ShifterHUD->static_fields;
                  local_48[0].r = (pUVar2->BackdropColor).fields.r;
                  local_48[0].g = (pUVar2->BackdropColor).fields.g;
                  local_48[0].b = (pUVar2->BackdropColor).fields.b;
                  local_48[0].a = (pUVar2->BackdropColor).fields.a;
                  (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                            (pUVar13,(UnityEngine_Color_o *)local_48,
                             (pUVar13->klass->vtable)._23_set_color.method);
                  (*(pUVar13->klass->vtable)._25_set_raycastTarget.methodPtr)
                            (pUVar13,false,(pUVar13->klass->vtable)._25_set_raycastTarget.method);
                  pSVar3 = TypeInfo_UI_ShifterHUD->static_fields->SpecialElements;
                  if (pSVar3 != (System_String_array *)0x0) {
                    uVar15 = 0;
                    while( true ) {
                      if ((int)pSVar3->max_length <= (int)uVar15) {
                        return;
                      }
                      if ((uint)pSVar3->max_length <= uVar15) break;
                      if (x == (UnityEngine_Object_o *)0x0) goto label_18227e68b;
                      pSVar1 = pSVar3->m_Items[(int)uVar15];
                      pUVar11 = UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
                      if ((pUVar11 == (UnityEngine_Transform_o *)0x0) ||
                         (pUVar11 = UnityEngine_Transform__Find(pUVar11,pSVar1,(MethodInfo *)0x0),
                         pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_18227e68b;
                      pUVar10 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                      pUVar11 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      pUVar10 = UnityEngine_Object__Instantiate_object__746cb0
                                          ((Il2CppObject *)pUVar10,pUVar11,false,
                                           (MethodInfo_746CB0 *)
                                           MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9aa0);
                      if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
                         (pUVar12 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
                         pUVar12 == (UnityEngine_RectTransform_o *)0x0)) goto label_18227e68b;
                      pUVar14 = (UnityEngine_RectTransform_o *)0x0;
                      if (pUVar12->klass == TypeInfo_UnityEngine_RectTransform) {
                        pUVar14 = pUVar12;
                      }
                      if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) {
                        il2cpp_codegen_raise_invalid_cast_exception(pUVar12);
                      }
                      UnityEngine_RectTransform__set_pivot
                                (pUVar14,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_anchorMax
                                (pUVar14,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_anchorMin
                                (pUVar14,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                        Il2CppMethodInitialized_18433e3c9 = '\x01';
                      }
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar14,(UnityEngine_Vector2_o)
                                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                 (MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_sizeDelta
                                (pUVar14,(UnityEngine_Vector2_o)0x4308888943088889,(MethodInfo *)0x0);
                      pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar10,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
                         ((*(pUVar13->klass->vtable)._25_set_raycastTarget.methodPtr)
                                    (pUVar13,false,(pUVar13->klass->vtable)._25_set_raycastTarget.method),
                         pSVar1 == (System_String_o *)0x0)) goto label_18227e68b;
                      bVar4 = System_String__StartsWith(pSVar1,"SpecialIcon",(MethodInfo *)0x0);
                      UnityEngine_UI_Image__set_sprite
                                (pUVar13,(&(__this->fields)._icon)[!bVar4],(MethodInfo *)0x0);
                      if ((pUVar13->fields).m_Type == 3) {
                        if ((__this->fields)._timers == (System_Collections_Generic_List_Image__o *)0x0)
                        goto label_18227e68b;
                        il2cpp_runtime_helper_180012890();
                      }
                      uVar15 = uVar15 + 1;
                    }
                    goto label_18227e685;
                  }
                }
              }
            }
          }
        }
label_18227e68b:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// UI.ShifterHUD$$CreateSprite
// il2cpp: UnityEngine_Sprite_o* UI_ShifterHUD__CreateSprite (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x18227df20

UnityEngine_Sprite_o * UI_ShifterHUD__CreateSprite(UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Sprite_o *pUVar2;
  UnityEngine_Rect_Fields local_28 [2];
  
  if (texture != (UnityEngine_Texture2D_o *)0x0) {
    iVar1 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                      (texture,(texture->klass->vtable)._5_get_width.method);
    local_28[0].m_XMin = 0.0;
    local_28[0].m_YMin = 0.0;
    local_28[0].m_Width = (float)iVar1;
    iVar1 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                      (texture,(texture->klass->vtable)._7_get_height.method);
    local_28[0].m_Height = (float)iVar1;
    pUVar2 = UnityEngine_Sprite__Create_2ed4530
                       (texture,(UnityEngine_Rect_o *)local_28,(UnityEngine_Vector2_o)0x3f0000003f000000,
                        (MethodInfo *)0x0);
    return pUVar2;
  }
  ThrowNullReferenceException();
}


// UI.ShifterHUD$$Start
// il2cpp: void UI_ShifterHUD__Start (UI_ShifterHUD_o* __this, const MethodInfo* method);
// 0x18227ec10

void UI_ShifterHUD__Start(UI_ShifterHUD_o *__this,MethodInfo *method)

{
  UI_ShifterHUD__ShowFrame(__this,0,(MethodInfo *)0x0);
  return;
}


// UI.ShifterHUD$$Update
// il2cpp: void UI_ShifterHUD__Update (UI_ShifterHUD_o* __this, const MethodInfo* method);
// 0x18227ec20
// eh: try 0x18227ed20..0x18227ef11 -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227ed78: mov rdx, qword ptr [rip + 0x1e08309]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Image_Dispose
// asm:   0x18227ed7f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18227ed84: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18227ed89: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18227ed8e: test rcx, rcx
// asm:   0x18227ed91: jne 0x18227ef11
// asm:   0x18227ed97: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x18227edc8: nop dword ptr [rax + rax]
// asm:   0x18227ef11: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_ShifterHUD__Update(UI_ShifterHUD_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  System_Collections_Generic_List_Image__o *__this_00;
  System_Single_array *pSVar2;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_UI_Image_o *__this_02;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  UnityEngine_UI_Image_o *local_48;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  UnityEngine_UI_Image_o *local_28;
  
  if (Il2CppMethodInitialized_18434737a == '\0') {
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
    Il2CppMethodInitialized_18434737a = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (UnityEngine_UI_Image_o *)0x0;
  pCVar1 = (__this->fields)._shifter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this_00 = (__this->fields)._timers;
    if (__this_00 == (System_Collections_Generic_List_Image__o *)0x0) goto label_18227eeff;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Image_GetEnumerator);
    local_38 = local_58;
    pUStack_30 = pUStack_50;
    local_28 = local_48;
    local_58 = (undefined1  [8])0x0;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
    while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Image_MoveNext),
          __this_02 = local_28, bVar3) {
      pCVar1 = (__this->fields)._shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar7 = Characters_BaseShifter__get_LiveTimeRatio(pCVar1,(MethodInfo *)0x0);
      if (__this_02 == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_UI_Image__set_fillAmount(__this_02,fVar7,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
               MethodInfo_System_Collections_Generic_List_Enumerator_Image_Dispose);
  }
  if ((__this->fields)._frame < 0x15) {
    fVar7 = (__this->fields)._frameTime;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._frameTime = fVar8 + fVar7;
    iVar4 = (__this->fields)._frame;
    while (iVar4 < 0x15) {
      fVar7 = (__this->fields)._frameTime;
      if ((((Il2CppClass *)TypeInfo_UI_ShifterHUD)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ShifterHUD);
      }
      pSVar2 = TypeInfo_UI_ShifterHUD->static_fields->FrameDurations;
      if (pSVar2 == (System_Single_array *)0x0) goto label_18227eeff;
      uVar5 = (__this->fields)._frame;
      if ((uint)pSVar2->max_length <= uVar5) {
label_18227ef17:
        ThrowIndexOutOfRangeException();
      }
      if (fVar7 < pSVar2->m_Items[(int)uVar5]) break;
      fVar7 = (__this->fields)._frameTime;
      if ((TypeInfo_UI_ShifterHUD->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ShifterHUD);
      }
      pSVar2 = TypeInfo_UI_ShifterHUD->static_fields->FrameDurations;
      if (pSVar2 == (System_Single_array *)0x0) goto label_18227eeff;
      uVar5 = (__this->fields)._frame;
      if ((uint)pSVar2->max_length <= uVar5) goto label_18227ef17;
      (__this->fields)._frameTime = fVar7 - pSVar2->m_Items[(int)uVar5];
      iVar4 = (__this->fields)._frame + 1;
      (__this->fields)._frame = iVar4;
    }
    __this_01 = (__this->fields)._image;
    iVar4 = (__this->fields)._frame;
    uVar6 = iVar4 >> 0x1f & 3;
    uVar5 = iVar4 + uVar6;
    if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
label_18227eeff:
      ThrowNullReferenceException();
    }
    local_58._4_4_ = 1.0 - (float)(((int)uVar5 >> 2) + 1) / 7.0;
    local_58._0_4_ = (float)(int)((uVar5 & 3) - uVar6) * 0.25;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x3e1249253e800000;
    UnityEngine_UI_RawImage__set_uvRect(__this_01,(UnityEngine_Rect_o *)local_58,(MethodInfo *)0x0);
  }
  return;
}


// UI.ShifterHUD$$ShowFrame
// il2cpp: void UI_ShifterHUD__ShowFrame (UI_ShifterHUD_o* __this, int32_t frame, const MethodInfo* method);
// 0x18227eb80

void UI_ShifterHUD__ShowFrame(UI_ShifterHUD_o *__this,int32_t frame,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  uint uVar1;
  uint uVar2;
  UnityEngine_Rect_o local_18;
  
  __this_00 = (__this->fields)._image;
  uVar2 = frame >> 0x1f & 3;
  uVar1 = frame + uVar2;
  local_18.fields.m_XMin = (float)(int)((uVar1 & 3) - uVar2) * 0.25;
  local_18.fields.m_YMin = 1.0 - (float)(((int)uVar1 >> 2) + 1) / 7.0;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    local_18.fields.m_Width = 0.25;
    local_18.fields.m_Height = 0.14285715;
    UnityEngine_UI_RawImage__set_uvRect(__this_00,&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ShifterHUD$$OnDestroy
// il2cpp: void UI_ShifterHUD__OnDestroy (UI_ShifterHUD_o* __this, const MethodInfo* method);
// 0x18227eab0

void UI_ShifterHUD__OnDestroy(UI_ShifterHUD_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434737b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434737b = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
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
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// UI.ShifterHUD$$.ctor
// il2cpp: void UI_ShifterHUD___ctor (UI_ShifterHUD_o* __this, const MethodInfo* method);
// 0x18227f0b0

void UI_ShifterHUD___ctor(UI_ShifterHUD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Image__o *__this_00;
  
  if (Il2CppMethodInitialized_18434737c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Image_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Image);
    Il2CppMethodInitialized_18434737c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Image);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Image_ctor);
  (__this->fields)._timers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._timers,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ShifterHUD$$.cctor
// il2cpp: void UI_ShifterHUD___cctor (const MethodInfo* method);
// 0x18227ef20

void UI_ShifterHUD___cctor(MethodInfo *method)

{
  UI_ShifterHUD_StaticFields *pUVar1;
  System_String_o *pSVar2;
  System_String_array *value;
  System_Single_array *array;
  
  if (Il2CppMethodInitialized_18434737d == '\0') {
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
    Il2CppMethodInitialized_18434737d = '\x01';
  }
  pUVar1 = TypeInfo_UI_ShifterHUD->static_fields;
  (pUVar1->BackdropColor).fields.r = 0.0;
  (pUVar1->BackdropColor).fields.g = 0.0;
  (pUVar1->BackdropColor).fields.b = 0.0;
  (pUVar1->BackdropColor).fields.a = 0.5;
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  pSVar2 = "SpecialFill";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "SpecialFill";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar2);
      pSVar2 = "SpecialIconFill";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "SpecialIconFill";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar2);
        pSVar2 = "SpecialIconBackground";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "SpecialIconBackground";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar2);
          TypeInfo_UI_ShifterHUD->static_fields->SpecialElements = value;
          Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ShifterHUD->static_fields->SpecialElements,value);
          array = (System_Single_array *)SZArrayNew(TypeInfo_float_array,0x16);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                    ((System_Array_o *)array,
                     FieldRva_PrivateImplementationDetails_E68591ED831414CCD8BE1313E02B27670D892A712B839224ED86D59EA2CBA42E
                     ,(MethodInfo *)0x0);
          TypeInfo_UI_ShifterHUD->static_fields->FrameDurations = array;
          Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ShifterHUD->static_fields->FrameDurations,array);
          return;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


