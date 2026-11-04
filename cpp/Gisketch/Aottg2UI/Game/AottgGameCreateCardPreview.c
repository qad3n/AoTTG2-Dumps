// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCardPreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview.StarRest$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_o __this, UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x1823cd850

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_o *__this,
               UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Quaternion_o *pUVar5;
  float fStackX_c;
  UnityEngine_Quaternion_o local_18;
  
  (__this->fields).Rect = rect;
  Il2CppCodeGenWriteBarrier((void **)__this,rect);
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_anchoredPosition(rect,(MethodInfo *)0x0);
    fStackX_c = UVar4.fields.y;
    (__this->fields).Position.fields.y = fStackX_c;
    (__this->fields).Position.fields.x = UVar4.fields.x;
    pUVar5 = UnityEngine_Transform__get_localRotation
                       (&local_18,(UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    fVar1 = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    fVar3 = (pUVar5->fields).w;
    (__this->fields).Rotation.fields.x = (pUVar5->fields).x;
    (__this->fields).Rotation.fields.y = fVar1;
    (__this->fields).Rotation.fields.z = fVar2;
    (__this->fields).Rotation.fields.w = fVar3;
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, UnityEngine_UI_Image_o* fallback, bool favorites, const MethodInfo* method);
// 0x1823af2e0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,UnityEngine_UI_Image_o *fallback,
               bool favorites,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_UI_Graphic_o *__this_00;
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest__o *__this_01;
  System_Object_array *pSVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *value;
  UnityEngine_RectTransform_o *pUVar6;
  uint uVar7;
  UnityEngine_RectTransform_o *pUVar8;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_o local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (Il2CppMethodInitialized_184347d34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites-star-");
    il2cpp_codegen_initialize_runtime_metadata(&"The category reference sprite is missing.");
    Il2CppMethodInitialized_184347d34 = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_RectTransform_o *)0x0;
  pUVar5 = pUVar8;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
    (__this->fields)._rect = (UnityEngine_RectTransform_o *)0x0;
  }
  else {
    pUVar6 = pUVar8;
    if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar6 = pUVar2;
    }
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    (__this->fields)._rect = pUVar6;
    if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar5 = pUVar2;
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_RectTransform);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,pUVar5);
  if (!favorites) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)fallback,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (fallback == (UnityEngine_UI_Image_o *)0x0) goto label_1823af5e0;
      x = (UnityEngine_Object_o *)(fallback->fields).m_Sprite;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__BuildLayers(__this,fallback,(MethodInfo *)0x0);
        goto label_1823af5a2;
      }
    }
    pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback
              (pSVar3,"The category reference sprite is missing.",(MethodInfo *)0x0);
label_1823af5a2:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest);
  System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_ctor);
  pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
  if (pSVar4 != (System_Object_array *)0x0) {
    while (uVar7 = (uint)pUVar8, (int)uVar7 < (int)pSVar4->max_length) {
      if ((uint)pSVar4->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_UI_Graphic_o *)pSVar4->m_Items[(int)uVar7];
      if (__this_00 == (UnityEngine_UI_Graphic_o *)0x0) goto label_1823af5e0;
      pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar3 == (System_String_o *)0x0) goto label_1823af5e0;
      bVar1 = System_String__StartsWith(pSVar3,"game-create-root-favorites-star-",(MethodInfo *)0x0);
      if (bVar1) {
        pUVar5 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
        local_48.fields.Rect = (UnityEngine_RectTransform_o *)0x0;
        local_48.fields.Position.fields.x = 0.0;
        local_48.fields.Position.fields.y = 0.0;
        local_48.fields.Rotation.fields.x = 0.0;
        local_48.fields.Rotation.fields.y = 0.0;
        local_48.fields.Rotation.fields.z = 0.0;
        local_48.fields.Rotation.fields.w = 0.0;
        Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest___ctor(&local_48,pUVar5,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest__o *)0x0) {
          ThrowNullReferenceException();
        }
        local_28 = local_48.fields.Rect._0_4_;
        uStack_24 = local_48.fields.Rect._4_4_;
        fStack_20 = local_48.fields.Position.fields.x;
        fStack_1c = local_48.fields.Position.fields.y;
        local_18 = local_48.fields.Rotation.fields.x;
        fStack_14 = local_48.fields.Rotation.fields.y;
        fStack_10 = local_48.fields.Rotation.fields.z;
        fStack_c = local_48.fields.Rotation.fields.w;
        il2cpp_runtime_helper_18003ecd0(__this_01);
      }
      pUVar8 = (UnityEngine_RectTransform_o *)(ulonglong)(uVar7 + 1);
    }
    if (__this_01 != (System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest__o *)0x0) {
      value = (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)
              System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest___ToArray
                        ((System_Collections_Generic_List_T__o *)__this_01,
                         (MethodInfo_929FE0 *)
                         MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_ToArray
                        );
      (__this->fields)._stars = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._stars,value);
      goto label_1823af5a2;
    }
  }
label_1823af5e0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$BuildLayers
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__BuildLayers (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, UnityEngine_UI_Image_o* fallback, const MethodInfo* method);
// 0x1823ae020
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823aeb42: lea rcx, [rbx + 0x20]
// asm:   0x1823aeb46: mov qword ptr [rbx + 0x20], rdi
// asm:   0x1823aeb4a: mov rdx, rdi
// asm:   0x1823aeb4d: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823aeb52: lea rcx, [r14 + 0x20]
// asm:   0x1823aeb56: mov qword ptr [r14 + 0x20], rbx
// asm:   0x1823aeb5a: mov rdx, rbx
// asm:   0x1823aeb5d: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823aeb62: jmp 0x1823aea26
// asm:   0x1823aeb7c: mov rdx, qword ptr [rip + 0x1d2fa3d]  ; "The category perspective shader is unavailable; using the static original image."
// asm:   0x1823aeb83: xor r8d, r8d
// asm:   0x1823aeb86: mov rcx, qword ptr [rip + 0x1d2c9cb]  ; "PreviewPerspective"
// asm:   0x1823aeb8d: call 0x1823aee70  ; Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback()
// asm:   0x1823aeb92: jmp 0x1823aea26

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__BuildLayers
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,UnityEngine_UI_Image_o *fallback,
               MethodInfo *method)

{
  Il2CppType *pIVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  Il2CppClass *pIVar9;
  UnityEngine_Sprite_o *value;
  UnityEngine_Rect_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  UnityEngine_Material_o *pUVar12;
  System_Type_array *pSVar13;
  System_Type_o *pSVar14;
  Il2CppObject *pIVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_RectTransform_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_UI_LayoutElement_o *pUVar19;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *pGVar20;
  UnityEngine_UI_Image_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *pGVar21;
  UnityEngine_RectTransform_o *rect;
  longlong lVar22;
  UnityEngine_RectTransform_o *rect_00;
  float fVar23;
  float fVar24;
  uint local_res10 [6];
  UnityEngine_Rect_o local_78 [4];
  
  if (Il2CppMethodInitialized_184347d35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Sprite_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Foreground");
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/PreviewPerspective");
    il2cpp_codegen_initialize_runtime_metadata(&"Midground");
    il2cpp_codegen_initialize_runtime_metadata(&"Depth layers are missing or have mismatched dimensions; using the original image.");
    il2cpp_codegen_initialize_runtime_metadata(&"PreviewPerspective");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"-depth");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"-depth-");
    il2cpp_codegen_initialize_runtime_metadata(&"The category perspective shader is unavailable; using the static original image.");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/Layers/");
    Il2CppMethodInitialized_184347d35 = '\x01';
  }
  local_res10[0] = 0;
  if ((fallback == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar11 = (UnityEngine_Object_o *)(fallback->fields).m_Sprite, pUVar11 == (UnityEngine_Object_o *)0x0))
  goto label_1823aebc7;
  pSVar6 = UnityEngine_Object__get_name(pUVar11,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_1969b70("Data/ExperiencePreview/Layers/",pSVar6,"/",(MethodInfo *)0x0)
  ;
  pIVar7 = SZArrayNew(TypeInfo_UnityEngine_Sprite_array,3);
  pSVar8 = System_String__Concat_1969e50(pSVar6,"Background",(MethodInfo *)0x0);
  pIVar9 = (Il2CppClass *)
           UnityEngine_Resources__Load_object_
                     (pSVar8,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
  if (pIVar7 == (Il2CppObject *)0x0) goto label_1823aebc7;
  if (*(int *)&pIVar7[1].monitor == 0) goto label_1823aeb97;
  pIVar7[2].klass = pIVar9;
  Il2CppCodeGenWriteBarrier(&pIVar7[2].klass,pIVar9);
  pSVar8 = System_String__Concat_1969e50(pSVar6,"Midground",(MethodInfo *)0x0);
  value = UnityEngine_Resources__Load_object_
                    (pSVar8,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
  if (*(uint *)&pIVar7[1].monitor < 2) goto label_1823aeb97;
  pIVar7[2].monitor = value;
  Il2CppCodeGenWriteBarrier(&pIVar7[2].monitor,value);
  pSVar8 = System_String__Concat_1969e50(pSVar6,"Foreground",(MethodInfo *)0x0);
  pIVar9 = (Il2CppClass *)
           UnityEngine_Resources__Load_object_
                     (pSVar8,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
  if (*(uint *)&pIVar7[1].monitor < 3) goto label_1823aeb97;
  pIVar7[3].klass = pIVar9;
  Il2CppCodeGenWriteBarrier(&pIVar7[3].klass,pIVar9);
  if (*(int *)&pIVar7[1].monitor == 0) goto label_1823aeb97;
  pIVar9 = pIVar7[2].klass;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (*(uint *)&pIVar7[1].monitor < 2) goto label_1823aeb97;
    pUVar11 = pIVar7[2].monitor;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) goto label_1823ae491;
    if (*(uint *)&pIVar7[1].monitor < 3) goto label_1823aeb97;
    pIVar9 = pIVar7[3].klass;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) goto label_1823ae491;
    if (*(int *)&pIVar7[1].monitor == 0) goto label_1823aeb97;
    if (pIVar7[2].klass == (Il2CppClass *)0x0) goto label_1823aebc7;
    pUVar10 = UnityEngine_Sprite__get_rect(local_78,(UnityEngine_Sprite_o *)pIVar7[2].klass,(MethodInfo *)0x0)
    ;
    fVar24 = (pUVar10->fields).m_Width;
    fVar23 = (pUVar10->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (*(uint *)&pIVar7[1].monitor < 2) goto label_1823aeb97;
    if (pIVar7[2].monitor == (UnityEngine_Sprite_o *)0x0) goto label_1823aebc7;
    pUVar10 = UnityEngine_Sprite__get_rect(local_78,pIVar7[2].monitor,(MethodInfo *)0x0);
    fVar24 = fVar24 - (pUVar10->fields).m_Width;
    fVar23 = fVar23 - (pUVar10->fields).m_Height;
    if (9.9999994e-11 <= fVar23 * fVar23 + fVar24 * fVar24) goto label_1823ae491;
    if (*(int *)&pIVar7[1].monitor == 0) goto label_1823aeb97;
    if (pIVar7[2].klass == (Il2CppClass *)0x0) goto label_1823aebc7;
    pUVar10 = UnityEngine_Sprite__get_rect(local_78,(UnityEngine_Sprite_o *)pIVar7[2].klass,(MethodInfo *)0x0)
    ;
    fVar24 = (pUVar10->fields).m_Width;
    fVar23 = (pUVar10->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (*(uint *)&pIVar7[1].monitor < 3) goto label_1823aeb97;
    if (pIVar7[3].klass == (Il2CppClass *)0x0) goto label_1823aebc7;
    pUVar10 = UnityEngine_Sprite__get_rect(local_78,(UnityEngine_Sprite_o *)pIVar7[3].klass,(MethodInfo *)0x0)
    ;
    fVar24 = fVar24 - (pUVar10->fields).m_Width;
    fVar23 = fVar23 - (pUVar10->fields).m_Height;
    bVar3 = fVar23 * fVar23 + fVar24 * fVar24 < 9.9999994e-11;
  }
  else {
label_1823ae491:
    bVar3 = false;
  }
  if (!bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback
              (pSVar6,"Depth layers are missing or have mismatched dimensions; using the original image.",(MethodInfo *)0x0);
  }
  pUVar11 = (UnityEngine_Object_o *)
            UnityEngine_Resources__Load_object_
                      ("Shaders/PreviewPerspective",(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Shader
                      );
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
label_1823aeb67:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback
              ("PreviewPerspective","The category perspective shader is unavailable; using the static original image.",(MethodInfo *)0x0);
    return;
  }
  if (pUVar11 != (UnityEngine_Object_o *)0x0) {
    bVar4 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pUVar11,(MethodInfo *)0x0);
    if (!bVar4) goto label_1823aeb67;
    pUVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor(pUVar12,(UnityEngine_Shader_o *)pUVar11,(MethodInfo *)0x0);
    (__this->fields)._material = pUVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._material,pUVar12);
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__EnsureCanvas(__this,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_1969e50(pSVar6,"-depth",(MethodInfo *)0x0);
      pSVar13 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
      pIVar1 = TypeRef_UnityEngine_RectTransform;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar14 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
      if (pSVar13 != (System_Type_array *)0x0) {
        if ((pSVar14 != (System_Type_o *)0x0) &&
           (pIVar15 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pSVar14,(((pSVar13->obj).klass)->_1).element_class),
           pIVar15 == (Il2CppObject *)0x0)) {
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
        if ((int)pSVar13->max_length != 0) {
          pSVar13->m_Items[0] = pSVar14;
          Il2CppCodeGenWriteBarrier(pSVar13->m_Items,pSVar14);
          pSVar14 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                               (MethodInfo *)0x0);
          if ((pSVar14 != (System_Type_o *)0x0) &&
             (pIVar15 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pSVar14,(((pSVar13->obj).klass)->_1).element_class),
             pIVar15 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if (1 < (uint)pSVar13->max_length) {
            pSVar13->m_Items[1] = pSVar14;
            Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 1,pSVar14);
            pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_2f1abe0(pUVar16,pSVar6,pSVar13,(MethodInfo *)0x0);
            if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
              pUVar17 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
              if (pUVar17 == (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              }
              else {
                rect_00 = (UnityEngine_RectTransform_o *)0x0;
                if (pUVar17->klass == TypeInfo_UnityEngine_RectTransform) {
                  rect_00 = pUVar17;
                }
                if (rect_00 == (UnityEngine_RectTransform_o *)0x0) {
                  il2cpp_codegen_raise_invalid_cast_exception(pUVar17);
                }
                pUVar18 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                UnityEngine_Transform__SetParent_2f5a7e0
                          ((UnityEngine_Transform_o *)rect_00,pUVar18,false,(MethodInfo *)0x0);
                pUVar18 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)fallback,(MethodInfo *)0x0);
                if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                  iVar5 = UnityEngine_Transform__GetSiblingIndex(pUVar18,(MethodInfo *)0x0);
                  UnityEngine_Transform__SetSiblingIndex
                            ((UnityEngine_Transform_o *)rect_00,iVar5 + 1,(MethodInfo *)0x0);
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
                  }
                  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Stretch(rect_00,(MethodInfo *)0x0);
                  pUVar19 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar16,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar19 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar19->klass->vtable)._28_set_ignoreLayout.methodPtr)
                              (pUVar19,true,(pUVar19->klass->vtable)._28_set_ignoreLayout.method);
                    pGVar20 = (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)
                              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array,
                                         *(uint32_t *)&pIVar7[1].monitor);
                    (__this->fields)._planes = pGVar20;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._planes,pGVar20);
                    local_res10[0] = 0;
                    while( true ) {
                      if (*(int *)&pIVar7[1].monitor <= (int)local_res10[0]) {
                        UnityEngine_Behaviour__set_enabled
                                  ((UnityEngine_Behaviour_o *)fallback,false,(MethodInfo *)0x0);
                        return;
                      }
                      if (*(uint *)&pIVar7[1].monitor <= local_res10[0]) break;
                      if ((&pIVar7[2].klass)[(int)local_res10[0]] == (Il2CppClass *)0x0) goto label_1823aebc7;
                      pSVar6 = UnityEngine_Object__get_name
                                         ((UnityEngine_Object_o *)(&pIVar7[2].klass)[(int)local_res10[0]],
                                          (MethodInfo *)0x0);
                      pSVar8 = System_Int32__ToString((int32_t *)local_res10,(MethodInfo *)0x0);
                      pSVar6 = System_String__Concat_1969b70
                                         (pSVar6,"-depth-",pSVar8,(MethodInfo *)0x0);
                      pSVar13 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                      pIVar1 = TypeRef_UnityEngine_RectTransform;
                      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
                      }
                      pSVar14 = System_Type__GetTypeFromHandle
                                          ((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
                      if (pSVar13 == (System_Type_array *)0x0) goto label_1823aebc7;
                      if ((pSVar14 != (System_Type_o *)0x0) &&
                         (pIVar15 = il2cpp_vm_Object_IsInst
                                              ((Il2CppObject *)pSVar14,
                                               (((pSVar13->obj).klass)->_1).element_class),
                         pIVar15 == (Il2CppObject *)0x0)) {
                        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                      }
                      if ((int)pSVar13->max_length == 0) break;
                      pSVar13->m_Items[0] = pSVar14;
                      Il2CppCodeGenWriteBarrier(pSVar13->m_Items,pSVar14);
                      pSVar14 = System_Type__GetTypeFromHandle
                                          ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,
                                           (MethodInfo *)0x0);
                      if ((pSVar14 != (System_Type_o *)0x0) &&
                         (pIVar15 = il2cpp_vm_Object_IsInst
                                              ((Il2CppObject *)pSVar14,
                                               (((pSVar13->obj).klass)->_1).element_class),
                         pIVar15 == (Il2CppObject *)0x0)) {
                        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                      }
                      if ((uint)pSVar13->max_length < 2) break;
                      pSVar13->m_Items[1] = pSVar14;
                      Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 1,pSVar14);
                      pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                      UnityEngine_GameObject___ctor_2f1abe0(pUVar16,pSVar6,pSVar13,(MethodInfo *)0x0);
                      if ((pUVar16 == (UnityEngine_GameObject_o *)0x0) ||
                         (pUVar17 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
                         pUVar17 == (UnityEngine_RectTransform_o *)0x0)) goto label_1823aebc7;
                      rect = (UnityEngine_RectTransform_o *)0x0;
                      if (pUVar17->klass == TypeInfo_UnityEngine_RectTransform) {
                        rect = pUVar17;
                      }
                      if (rect == (UnityEngine_RectTransform_o *)0x0) {
                        il2cpp_codegen_raise_invalid_cast_exception(pUVar17);
                      }
                      UnityEngine_Transform__SetParent_2f5a7e0
                                ((UnityEngine_Transform_o *)rect,(UnityEngine_Transform_o *)rect_00,false,
                                 (MethodInfo *)0x0);
                      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
                      }
                      Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Stretch(rect,(MethodInfo *)0x0);
                      __this_00 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar16,(MethodInfo_6F5650 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      if (*(uint *)&pIVar7[1].monitor <= local_res10[0]) break;
                      if (__this_00 == (UnityEngine_UI_Image_o *)0x0) goto label_1823aebc7;
                      UnityEngine_UI_Image__set_sprite
                                (__this_00,(UnityEngine_Sprite_o *)(&pIVar7[2].klass)[(int)local_res10[0]],
                                 (MethodInfo *)0x0);
                      UnityEngine_UI_Image__set_preserveAspect(__this_00,true,(MethodInfo *)0x0);
                      (*(__this_00->klass->vtable)._33_set_material.methodPtr)
                                (__this_00,(__this->fields)._material,
                                 (__this_00->klass->vtable)._33_set_material.method);
                      (*(__this_00->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (__this_00,false,(__this_00->klass->vtable)._25_set_raycastTarget.method);
                      uVar2 = local_res10[0];
                      lVar22 = (longlong)(int)local_res10[0];
                      pGVar20 = (__this->fields)._planes;
                      fVar24 = (float)(int)local_res10[0];
                      if (Il2CppMethodInitialized_184347d36 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreatePreviewPlane
                                  );
                        Il2CppMethodInitialized_184347d36 = '\x01';
                      }
                      pUVar16 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                      if (((pUVar16 == (UnityEngine_GameObject_o *)0x0) ||
                          (pGVar21 = UnityEngine_GameObject__AddComponent_object_
                                               (pUVar16,(MethodInfo_6F4D60 *)
                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreatePreviewPlane
                                               ),
                          pGVar21 == (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *)0x0)) ||
                         (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__Setup
                                    (pGVar21,fVar24 * 0.5,(MethodInfo *)0x0),
                         pGVar20 == (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)0x0))
                      goto label_1823aebc7;
                      if ((uint)pGVar20->max_length <= uVar2) break;
                      pGVar20->m_Items[lVar22] = pGVar21;
                      Il2CppCodeGenWriteBarrier(pGVar20->m_Items + lVar22,pGVar21);
                      local_res10[0] = local_res10[0] + 1;
                    }
                    goto label_1823aeb97;
                  }
                }
              }
            }
            goto label_1823aebc7;
          }
        }
label_1823aeb97:
        ThrowIndexOutOfRangeException();
      }
    }
    else {
      (__this->fields)._fallback = fallback;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._fallback,fallback);
      pUVar12 = (*(fallback->klass->vtable)._32_get_material.methodPtr)
                          (fallback,(fallback->klass->vtable)._32_get_material.method);
      (__this->fields)._fallbackMaterial = pUVar12;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._fallbackMaterial,pUVar12);
      (*(fallback->klass->vtable)._33_set_material.methodPtr)
                (fallback,(__this->fields)._material,(fallback->klass->vtable)._33_set_material.method);
      pGVar20 = (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)
                SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array,1);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
      }
      if (Il2CppMethodInitialized_184347d36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreatePreviewPlane);
        Il2CppMethodInitialized_184347d36 = '\x01';
      }
      pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fallback,(MethodInfo *)0x0);
      if (((pUVar16 != (UnityEngine_GameObject_o *)0x0) &&
          (pGVar21 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar16,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreatePreviewPlane
                               ), pGVar21 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *)0x0)) &&
         (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__Setup(pGVar21,0.0,(MethodInfo *)0x0),
         pGVar20 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)0x0)) {
        if ((int)pGVar20->max_length != 0) {
          pGVar20->m_Items[0] = pGVar21;
          Il2CppCodeGenWriteBarrier(pGVar20->m_Items,pGVar21);
          (__this->fields)._planes = pGVar20;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._planes,pGVar20);
          return;
        }
        goto label_1823aeb97;
      }
    }
  }
label_1823aebc7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x1823af600

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(rect,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_sizeDelta
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$AddPlane
// il2cpp: Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AddPlane (UnityEngine_UI_Image_o* image, float depth, const MethodInfo* method);
// 0x1823adc70

Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *
Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AddPlane
          (UnityEngine_UI_Image_o *image,float depth,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreatePreviewPlane);
    Il2CppMethodInitialized_184347d36 = '\x01';
  }
  if (image != (UnityEngine_UI_Image_o *)0x0) {
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreatePreviewPlane
                            );
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__Setup(__this_00,depth,(MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$EnsureCanvas
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__EnsureCanvas (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x1823aec00

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__EnsureCanvas
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  UnityEngine_Canvas_o *pUVar3;
  
  if (Il2CppMethodInitialized_184347d37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d37 = '\x01';
  }
  pUVar3 = (__this->fields)._canvas;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Component__GetComponentInParent_object__664f20
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    (__this->fields)._canvas = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._canvas,pUVar3);
  }
  pUVar3 = (__this->fields)._canvas;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields)._canvas;
    if (pUVar3 == (UnityEngine_Canvas_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = UnityEngine_Canvas__get_additionalShaderChannels(pUVar3,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_additionalShaderChannels(pUVar3,uVar2 | 1,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$SetPointer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__SetPointer (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, bool hovered, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823af130

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__SetPointer
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,bool hovered,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Camera_o *value;
  UnityEngine_GameObject_o *__this_00;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184347d38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184347d38 = '\x01';
  }
  (__this->fields)._hovered = hovered;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar2 = (eventData->fields)._position_k__BackingField.fields.x;
    (__this->fields)._pointerPosition.fields.y = (eventData->fields)._position_k__BackingField.fields.y;
    (__this->fields)._pointerPosition.fields.x = fVar2;
    (__this->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
    value = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(eventData,(MethodInfo *)0x0);
    (__this->fields)._eventCamera = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera,value);
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      if (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled != false) {
        if (hovered) {
          Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__EnsureCanvas(__this,(MethodInfo *)0x0);
          bVar1 = true;
        }
        else {
          fVar2 = (__this->fields)._tilt.fields.y;
          fVar3 = (__this->fields)._tilt.fields.x;
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          fVar3 = fVar3 - (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
          fVar2 = fVar2 - (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
          if (fVar2 * fVar2 + fVar3 * fVar3 < 9.9999994e-11) {
            bVar1 = 0.0 < (__this->fields)._starStrength;
          }
          else {
            bVar1 = true;
          }
        }
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ResetMotion(__this,(MethodInfo *)0x0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$MovePointer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__MovePointer (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823aece0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__MovePointer
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Camera_o *value;
  
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar1 = (eventData->fields)._position_k__BackingField.fields.y;
    (__this->fields)._pointerPosition.fields.x = (eventData->fields)._position_k__BackingField.fields.x;
    (__this->fields)._pointerPosition.fields.y = fVar1;
    (__this->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
    value = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(eventData,(MethodInfo *)0x0);
    (__this->fields)._eventCamera = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera,value);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Update (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x1823af730
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823afab9: movaps xmm0, xmm8
// asm:   0x1823afabd: jmp 0x1823afac8

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Update
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *pGVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *pGVar5;
  UnityEngine_Vector2_Fields screenPoint;
  bool bVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Rect_o *pUVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_Fields local_res18 [2];
  UnityEngine_Rect_o local_98 [9];
  
  if (Il2CppMethodInitialized_184347d39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347d39 = '\x01';
  }
  local_res18[0].x = 0.0;
  local_res18[0].y = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled == false) {
label_1823afbe5:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  fVar14 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  fVar12 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  if ((__this->fields)._hovered != false) {
    if (((__this->fields)._pointerId < 0) &&
       (bVar6 = UnityEngine_Input__get_mousePresent((MethodInfo *)0x0), bVar6)) {
      pUVar7 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
      fVar10 = (pUVar7->fields).x;
      (__this->fields)._pointerPosition.fields.y = (pUVar7->fields).y;
      (__this->fields)._pointerPosition.fields.x = fVar10;
    }
    pUVar3 = (__this->fields)._rect;
    screenPoint = (__this->fields)._pointerPosition.fields;
    cam = (__this->fields)._eventCamera;
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    bVar6 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (pUVar3,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)local_res18,
                       (MethodInfo *)0x0);
    if (bVar6) {
      pUVar3 = (__this->fields)._rect;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1823afc45;
      pUVar8 = UnityEngine_RectTransform__get_rect(local_98,pUVar3,(MethodInfo *)0x0);
      fVar10 = (pUVar8->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (0.0 < fVar10) {
        pUVar3 = (__this->fields)._rect;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1823afc45;
        pUVar8 = UnityEngine_RectTransform__get_rect(local_98,pUVar3,(MethodInfo *)0x0);
        fVar10 = (pUVar8->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (0.0 < fVar10) {
          pUVar3 = (__this->fields)._rect;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1823afc45;
          fVar13 = local_res18[0].x;
          fVar11 = local_res18[0].y;
          pUVar8 = UnityEngine_RectTransform__get_rect(local_98,pUVar3,(MethodInfo *)0x0);
          fVar14 = (pUVar8->fields).m_XMin;
          fVar12 = (pUVar8->fields).m_YMin;
          fVar10 = (pUVar8->fields).m_Width;
          fVar2 = (pUVar8->fields).m_Height;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          pUVar3 = (__this->fields)._rect;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1823afc45;
          fVar13 = fVar13 - (fVar10 * 0.5 + fVar14);
          pUVar8 = UnityEngine_RectTransform__get_rect(local_98,pUVar3,(MethodInfo *)0x0);
          fVar14 = (fVar13 + fVar13) / (pUVar8->fields).m_Width;
          if (fVar14 < -1.0) {
            fVar14 = -1.0;
          }
          else if (1.0 < fVar14) {
            fVar14 = 1.0;
          }
          pUVar3 = (__this->fields)._rect;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1823afc45;
          fVar11 = fVar11 - (fVar2 * 0.5 + fVar12);
          pUVar8 = UnityEngine_RectTransform__get_rect(local_98,pUVar3,(MethodInfo *)0x0);
          fVar12 = (fVar11 + fVar11) / (pUVar8->fields).m_Height;
          if (fVar12 < -1.0) {
            fVar12 = -1.0;
          }
          else if (1.0 < fVar12) {
            fVar12 = 1.0;
          }
        }
      }
    }
  }
  fVar10 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  fVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->DurationScale;
  fVar13 = 0.01;
  if (0.01 <= fVar2) {
    fVar13 = fVar2;
  }
  fVar13 = (float)il2cpp_runtime_helper_1804fabd0(-fVar10 / (fVar13 * 0.09));
  fVar10 = (__this->fields)._tilt.fields.x;
  fVar2 = (__this->fields)._tilt.fields.y;
  fVar13 = 1.0 - fVar13;
  if (fVar13 < 0.0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = fVar13;
    if (1.0 < fVar13) {
      fVar11 = 1.0;
    }
  }
  pGVar4 = (__this->fields)._planes;
  (__this->fields)._tilt.fields.x = (fVar14 - fVar10) * fVar11 + fVar10;
  (__this->fields)._tilt.fields.y = (fVar12 - fVar2) * fVar11 + fVar2;
  if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)0x0) {
    for (uVar9 = 0; (int)uVar9 < (int)pGVar4->max_length; uVar9 = uVar9 + 1) {
      if ((uint)pGVar4->max_length <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar4->m_Items[(int)uVar9] == (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *)0x0)
      goto label_1823afc45;
      Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__SetTilt
                (pGVar4->m_Items[(int)uVar9],(UnityEngine_Vector2_o)(__this->fields)._tilt.fields,
                 (MethodInfo *)0x0);
    }
    pGVar5 = (__this->fields)._stars;
    if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0) {
      if (pGVar5->max_length != 0) {
        fVar14 = (__this->fields)._phase;
        fVar12 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
        (__this->fields)._phase = fVar12 + fVar14;
        if ((__this->fields)._hovered == false) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = 1.0;
        }
        if (fVar13 < 0.0) {
          fVar13 = 0.0;
        }
        else if (1.0 < fVar13) {
          fVar13 = 1.0;
        }
        fVar12 = (__this->fields)._starStrength;
        (__this->fields)._starStrength = (fVar14 - fVar12) * fVar13 + fVar12;
        Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateStars(__this,(MethodInfo *)0x0);
      }
      if ((__this->fields)._hovered != false) {
        return;
      }
      fVar14 = (__this->fields)._tilt.fields.x;
      fVar12 = (__this->fields)._tilt.fields.y;
      if (1e-06 <= fVar12 * fVar12 + fVar14 * fVar14) {
        return;
      }
      pfVar1 = &(__this->fields)._starStrength;
      if (0.001 < *pfVar1 || *pfVar1 == 0.001) {
        return;
      }
      goto label_1823afbe5;
    }
  }
label_1823afc45:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$AnimateStars
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateStars (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x1823adcf0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823add4d: movss xmm12, dword ptr [rip + 0x109221a]
// asm:   0x1823add56: movss xmm14, dword ptr [rip + 0xfab0fd]
// asm:   0x1823add5f: movss xmm15, dword ptr [rip + 0x1092ba4]
// asm:   0x1823add68: nop dword ptr [rax + rax]
// asm:   0x1823adfc9: jmp 0x1823add70

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateStars
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *pGVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_Fields *pGVar7;
  UnityEngine_Quaternion_o *pUVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Quaternion_o local_e8;
  UnityEngine_Quaternion_o local_d8 [11];
  
  uVar9 = 0;
  pGVar2 = (__this->fields)._stars;
  while (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0) {
    if ((int)pGVar2->max_length <= (int)uVar9) {
      return;
    }
    pGVar2 = (__this->fields)._stars;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0) break;
    if ((uint)pGVar2->max_length <= uVar9) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = pGVar2->m_Items[(int)uVar9].fields.Rect;
    pGVar7 = &pGVar2->m_Items[(int)uVar9].fields;
    fVar3 = (pGVar7->Rotation).fields.x;
    fVar4 = (pGVar7->Rotation).fields.y;
    fVar5 = (pGVar7->Rotation).fields.z;
    fVar6 = (pGVar7->Rotation).fields.w;
    if ((int)uVar9 < 4) {
      fVar11 = (float)(int)uVar9 + 2.0;
    }
    else {
      fVar11 = 9.0;
    }
    fVar12 = (float)(int)uVar9 * 0.65 + (__this->fields)._phase;
    fVar10 = (float)il2cpp_runtime_helper_1804f5fc0(fVar12 * 1.3);
    fVar12 = (float)il2cpp_runtime_helper_1804f54c0(fVar12 * 0.9);
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) break;
    fVar1 = (__this->fields)._starStrength;
    value.fields.y =
         (((float)(int)uVar9 + 3.0) * (__this->fields)._tilt.fields.y + fVar12 * fVar11) * fVar1 +
         pGVar2->m_Items[(int)uVar9].fields.Position.fields.y;
    value.fields.x =
         (((float)(int)uVar9 + 3.0) * (__this->fields)._tilt.fields.x + fVar10 * fVar11) * fVar1 +
         pGVar2->m_Items[(int)uVar9].fields.Position.fields.x;
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
    fVar11 = (__this->fields)._phase;
    if ((int)uVar9 < 4) {
      fVar11 = (float)il2cpp_runtime_helper_1804f5fc0(fVar11 * 1.3);
      fVar11 = fVar11 * 8.0;
    }
    else if ((uVar9 & 1) == 0) {
      fVar11 = fVar11 * 35.0;
    }
    else {
      fVar11 = fVar11 * -28.0;
    }
    local_f8.x = 0.0;
    local_f8.y = 0.0;
    local_f8.z = fVar11 * (__this->fields)._starStrength * 0.017453292;
    pUVar8 = UnityEngine_Quaternion__Internal_FromEulerRad
                       (local_d8,(UnityEngine_Vector3_o *)&local_f8,(MethodInfo *)0x0);
    fVar11 = (pUVar8->fields).x;
    fVar10 = (pUVar8->fields).w;
    fVar12 = (pUVar8->fields).z;
    fVar1 = (pUVar8->fields).y;
    local_e8.fields.x = (fVar11 * fVar6 + fVar10 * fVar3 + fVar12 * fVar4) - fVar1 * fVar5;
    local_e8.fields.y = (fVar10 * fVar4 + fVar1 * fVar6 + fVar11 * fVar5) - fVar12 * fVar3;
    local_e8.fields.z = (fVar10 * fVar5 + fVar12 * fVar6 + fVar1 * fVar3) - fVar11 * fVar4;
    local_e8.fields.w = ((fVar10 * fVar6 - fVar11 * fVar3) - fVar1 * fVar4) - fVar12 * fVar5;
    UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)__this_00,&local_e8,(MethodInfo *)0x0)
    ;
    uVar9 = uVar9 + 1;
    pGVar2 = (__this->fields)._stars;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$ResetMotion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ResetMotion (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x1823aef30

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ResetMotion
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o *pUVar1;
  float fVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *pGVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *pGVar4;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_Fields value;
  bool bVar5;
  uint uVar6;
  UnityEngine_Vector2_Fields local_48;
  undefined8 uStack_40;
  UnityEngine_Vector2_Fields local_30;
  UnityEngine_Vector2_Fields UStack_28;
  undefined8 local_20;
  
  if (Il2CppMethodInitialized_184347d3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d3a = '\x01';
  }
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  pGVar3 = (__this->fields)._planes;
  fVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  (__this->fields)._tilt.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  (__this->fields)._tilt.fields.x = fVar2;
  (__this->fields)._starStrength = 0.0;
  (__this->fields)._phase = 0.0;
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)0x0) {
    for (uVar6 = 0; (int)uVar6 < (int)pGVar3->max_length; uVar6 = uVar6 + 1) {
      if ((uint)pGVar3->max_length <= uVar6) goto label_1823af11a;
      __this_00 = pGVar3->m_Items[(int)uVar6];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *)0x0) goto label_1823af120;
        Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__SetTilt
                  (__this_00,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
      }
    }
    pGVar4 = (__this->fields)._stars;
    if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0) {
      uVar6 = 0;
      do {
        if ((int)pGVar4->max_length <= (int)uVar6) {
          return;
        }
        if ((uint)pGVar4->max_length <= uVar6) {
label_1823af11a:
          ThrowIndexOutOfRangeException();
        }
        pUVar1 = &pGVar4->m_Items[(int)uVar6].fields.Position;
        value = pUVar1->fields;
        UStack_28 = pUVar1[1].fields;
        __this_01 = pGVar4->m_Items[(int)uVar6].fields.Rect;
        local_20._0_4_ = pGVar4->m_Items[(int)uVar6].fields.Rotation.fields.z;
        local_20._4_4_ = pGVar4->m_Items[(int)uVar6].fields.Rotation.fields.w;
        local_30 = value;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar5) {
          if (__this_01 == (UnityEngine_RectTransform_o *)0x0) break;
          UnityEngine_RectTransform__set_anchoredPosition
                    (__this_01,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          local_48 = UStack_28;
          uStack_40 = local_20;
          UnityEngine_Transform__set_localRotation
                    ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Quaternion_o *)&local_48,
                     (MethodInfo *)0x0);
        }
        uVar6 = uVar6 + 1;
      } while( true );
    }
  }
label_1823af120:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__OnDisable (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x1823aee60

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__OnDisable
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ResetMotion(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__OnDestroy (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x1823aed40

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347d3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d3b = '\x01';
  }
  pUVar1 = (__this->fields)._fallback;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._fallback;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._33_set_material.methodPtr)
              (pUVar1,(__this->fields)._fallbackMaterial,(pUVar1->klass->vtable)._33_set_material.method);
  }
  pUVar2 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar2 = (__this->fields)._material;
    if (!bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$ReportFallback
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback (System_String_o* key, System_String_o* message, const MethodInfo* method);
// 0x1823aee70

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback
               (System_String_o *key,System_String_o *message,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347d3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    Il2CppMethodInitialized_184347d3c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->static_fields->ReportedFallbacks;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Add
                      (__this,(Il2CppObject *)key,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x1823afcf0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *value;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *value_00;
  MethodInfo *pMVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_184347d3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest);
    Il2CppMethodInitialized_184347d3d = '\x01';
  }
  pMVar1 = MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane;
  if ((MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane->field7_0x38).rgctx_data ==
      (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane);
  }
  pIVar2 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar2);
  }
  pIVar2 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  value = *(Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array **)pIVar2->static_fields;
  (__this->fields)._planes = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planes,value);
  pMVar1 = MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest;
  if ((MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest->field7_0x38).rgctx_data ==
      (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest);
  }
  pIVar2 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar2);
  }
  pIVar2 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  value_00 = *(Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array **)pIVar2->static_fields;
  (__this->fields)._stars = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stars,value_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview___cctor (const MethodInfo* method);
// 0x1823afc60

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184347d3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    Il2CppMethodInitialized_184347d3e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->static_fields->ReportedFallbacks = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->static_fields->ReportedFallbacks,
             __this);
  return;
}


