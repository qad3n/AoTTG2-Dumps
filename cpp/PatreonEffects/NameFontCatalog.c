// Type: PatreonEffects.NameFontCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameFontCatalog.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameFontCatalog$$Label
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Label (System_String_o* id, const MethodInfo* method);
// 0x432f2b0

System_String_o * PatreonEffects_NameFontCatalog__Label(System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  
  if (g_data_057ae067 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Jacquard");
    il2cpp_runtime_helper_023445d0(&"8-Bit");
    il2cpp_runtime_helper_023445d0(&"Oxanium");
    il2cpp_runtime_helper_023445d0(&"Pixelify");
    il2cpp_runtime_helper_023445d0(&"EightBit");
    il2cpp_runtime_helper_023445d0(&"Old Pixel");
    il2cpp_runtime_helper_023445d0(&"AoTTG 2");
    il2cpp_runtime_helper_023445d0(&"Tech");
    il2cpp_runtime_helper_023445d0(&"LED");
    g_data_057ae067 = '\x01';
  }
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = PatreonEffects_NameFontCatalog__Normalize(id,method);
  bVar1 = System_String__op_Equality(a,"Aottg2",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "AoTTG 2";
  }
  bVar1 = System_String__op_Equality(a,"EightBit",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "LED";
  }
  bVar1 = System_String__op_Equality(a,"Jacquard",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Old Pixel";
  }
  bVar1 = System_String__op_Equality(a,"Pixelify",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "8-Bit";
  }
  bVar1 = System_String__op_Equality(a,"Oxanium",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    a = _DAT_055d4408;
  }
  return a;
}


// PatreonEffects.NameFontCatalog$$Normalize
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Normalize (System_String_o* id, const MethodInfo* method);
// 0x432f430

System_String_o * PatreonEffects_NameFontCatalog__Normalize(System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae068 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Serif");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Jacquard");
    il2cpp_runtime_helper_023445d0(&"Oxanium");
    il2cpp_runtime_helper_023445d0(&"Pixelify");
    il2cpp_runtime_helper_023445d0(&"Comics");
    il2cpp_runtime_helper_023445d0(&"EightBit");
    g_data_057ae068 = '\x01';
  }
  bVar1 = System_String__op_Equality(id,"Aottg2",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(id,"Serif",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(id,"EightBit",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(id,"Comics",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__op_Equality(id,"Jacquard",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__op_Equality(id,"Pixelify",(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__op_Equality(id,"Oxanium",(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                id = "Normal";
              }
            }
          }
        }
      }
    }
  }
  return id;
}


// PatreonEffects.NameFontCatalog$$Load
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_NameFontCatalog__Load (System_String_o* id, const MethodInfo* method);
// 0x4327fb0

TMPro_TMP_FontAsset_o * PatreonEffects_NameFontCatalog__Load(System_String_o *id,MethodInfo *method)

{
  void **ppvVar1;
  undefined8 *puVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  TMPro_TMP_Text_o *__this_00;
  PatreonEffects_NameEffectController_o *__this_01;
  long *plVar5;
  code *vtableDispatch;
  UnityEngine_Vector2_o UVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  uint uVar9;
  MethodInfo *pMVar10;
  System_String_o *path;
  undefined8 uVar11;
  undefined4 extraout_var;
  System_Type_array *components;
  System_Type_o *pSVar12;
  long lVar13;
  System_RuntimeTypeHandle_o SVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TextMeshProUGUI_o *pTVar16;
  TMPro_TMP_FontAsset_o *extraout_RAX;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TMPro_TMP_FontAsset_o *extraout_RAX_00;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 uVar17;
  TMPro_TMP_FontAsset_o *pTVar18;
  MethodInfo *pMVar19;
  PatreonEffects_NameEffectSettings_o *settings;
  TMPro_TMP_FontAsset_o *extraout_RAX_01;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  MethodInfo *pMVar20;
  PatreonEffects_NameEffectApplier_o *__this_04;
  UnityEngine_UI_Text_o *__this_05;
  UnityEngine_Material_o *pUVar21;
  void **ppvVar22;
  long *plVar23;
  long *unaff_R12;
  TMPro_TMP_Text_o *__this_06;
  UnityEngine_Vector3_o value;
  uint uStack_84;
  TMPro_TMP_FontAsset_o *local_30;
  
  if (g_data_057ae069 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae069 = '\x01';
  }
  local_30 = (TMPro_TMP_FontAsset_o *)0x0;
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)PatreonEffects_NameFontCatalog__Normalize(id,method);
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar20 = pMVar10;
    bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8),(Il2CppObject *)pMVar10,
                       (Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar7 != '\0') {
      return local_30;
    }
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = PatreonEffects_NameFontCatalog__Path((System_String_o *)pMVar10,pMVar20);
    id = (System_String_o *)UnityEngine_Resources__Load_object_(path,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)id,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar7 != '\0') &&
       (bVar7 = System_String__op_Inequality((System_String_o *)pMVar10,"Normal",(MethodInfo *)0x0),
       (char)bVar7 != '\0')) {
      id = (System_String_o *)UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)id,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) goto label_0432818a;
label_0432813f:
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
    }
    else {
      id = (System_String_o *)TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) != 0) goto label_0432813f;
label_0432818a:
      il2cpp_runtime_helper_02337ed0();
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
    }
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)pMVar10,(Il2CppObject *)id,MethodInfo_Void_set_Item);
      return (TMPro_TMP_FontAsset_o *)id;
    }
  }
  __this_04 = (PatreonEffects_NameEffectApplier_o *)0x0;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae031 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"NameEffectOverlay");
    g_data_057ae031 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this_04->fields)._tmpOverlay;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var,bVar7);
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar14 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  pMVar20 = pMVar10;
  if (components == (System_Type_array *)0x0) {
label_04328580:
    il2cpp_runtime_helper_022b2c90();
label_04328585:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar12;
    if ((pSVar12 == (System_Type_o *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pSVar12), lVar13 != 0)) {
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar12;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        SVar14.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((SVar14.fields.value != 0) && (lVar13 = il2cpp_runtime_helper_023051f0(SVar14.fields.value), lVar13 == 0))
        goto label_0432858a;
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = (System_Type_o *)SVar14.fields.value;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          SVar14.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0)
          ;
          if ((SVar14.fields.value != 0) && (lVar13 = il2cpp_runtime_helper_023051f0(SVar14.fields.value), lVar13 == 0))
          goto label_0432858a;
          if (2 < (uint)components->max_length) {
            pMVar20 = (MethodInfo *)&(__this_04->fields)._tmpOverlay;
            components->m_Items[2] = (System_Type_o *)SVar14.fields.value;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2,SVar14.fields.value);
            SVar14.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc440
                      ((UnityEngine_GameObject_o *)SVar14.fields.value,"NameEffectOverlay",components,
                       (MethodInfo *)0x0);
            *(System_RuntimeTypeHandle_Fields *)pMVar20 = SVar14.fields.value;
            il2cpp_runtime_helper_022b4080(pMVar20);
            if (*(UnityEngine_GameObject_o **)pMVar20 != (UnityEngine_GameObject_o *)0x0) {
              SVar14.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   UnityEngine_GameObject__get_transform
                             (*(UnityEngine_GameObject_o **)pMVar20,(MethodInfo *)0x0);
              pUVar15 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
              if ((pUVar15 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar15 = UnityEngine_Transform__get_parent(pUVar15,(MethodInfo *)0x0),
                 SVar14.fields.value != 0)) {
                UnityEngine_Transform__SetParent_4e09e30
                          ((UnityEngine_Transform_o *)SVar14.fields.value,pUVar15,0,(MethodInfo *)0x0);
                __this_02 = (UnityEngine_RectTransform_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
                pUVar4 = (__this_04->fields)._tmpOverlay;
                if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
                   ((__this_03 = (UnityEngine_RectTransform_o *)
                                 UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform),
                    __this_02 != (UnityEngine_RectTransform_o *)0x0 &&
                    (UVar6 = UnityEngine_RectTransform__get_anchorMin(__this_02,(MethodInfo *)0x0),
                    SVar14.fields.value =
                         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_03,
                    __this_03 != (UnityEngine_RectTransform_o *)0x0)))) {
                  UnityEngine_RectTransform__set_anchorMin(__this_03,UVar6,(MethodInfo *)0x0);
                  UVar6 = UnityEngine_RectTransform__get_anchorMax(__this_02,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_anchorMax(__this_03,UVar6,(MethodInfo *)0x0);
                  UVar6 = UnityEngine_RectTransform__get_pivot(__this_02,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_pivot(__this_03,UVar6,(MethodInfo *)0x0);
                  UVar6 = UnityEngine_RectTransform__get_anchoredPosition(__this_02,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_anchoredPosition(__this_03,UVar6,(MethodInfo *)0x0);
                  UVar6 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_sizeDelta(__this_03,UVar6,(MethodInfo *)0x0);
                  value = UnityEngine_Transform__get_localScale
                                    ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
                  UnityEngine_Transform__set_localScale
                            ((UnityEngine_Transform_o *)__this_03,value,(MethodInfo *)0x0);
                  if (*(UnityEngine_GameObject_o **)pMVar20 != (UnityEngine_GameObject_o *)0x0) {
                    pTVar16 = (TMPro_TextMeshProUGUI_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        (*(UnityEngine_GameObject_o **)pMVar20,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                    SVar14.fields.value = (System_RuntimeTypeHandle_Fields)&(__this_04->fields)._tmpText;
                    (__this_04->fields)._tmpText = pTVar16;
                    il2cpp_runtime_helper_022b4080(SVar14.fields.value);
                    pTVar16 = (__this_04->fields)._tmpText;
                    if (pTVar16 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      (*(pTVar16->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (pTVar16,0,(pTVar16->klass->vtable)._25_set_raycastTarget.method);
                      if (*(TMPro_TextMeshProUGUI_o **)SVar14.fields.value != (TMPro_TextMeshProUGUI_o *)0x0)
                      {
                        TMPro_TMP_Text__set_enableWordWrapping
                                  ((TMPro_TMP_Text_o *)*(TMPro_TextMeshProUGUI_o **)SVar14.fields.value,0,
                                   (MethodInfo *)0x0);
                        if (*(TMPro_TextMeshProUGUI_o **)SVar14.fields.value != (TMPro_TextMeshProUGUI_o *)0x0
                           ) {
                          pMVar19 = (MethodInfo *)0x0;
                          TMPro_TMP_Text__set_overflowMode
                                    ((TMPro_TMP_Text_o *)*(TMPro_TextMeshProUGUI_o **)SVar14.fields.value,0,
                                     (MethodInfo *)0x0);
                          PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this_04,pMVar19);
                          pUVar4 = (__this_04->fields)._tmpOverlay;
                          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                            return extraout_RAX;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_04328580;
          }
        }
      }
      goto label_04328585;
    }
  }
label_0432858a:
  lVar13 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae034 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae034 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar13 + 0x30);
  __this_06 = (TMPro_TMP_Text_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_00,bVar7);
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar13 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_01,bVar7);
  }
  __this_05 = *(UnityEngine_UI_Text_o **)(lVar13 + 0x20);
  if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
    __this_06 = *(TMPro_TMP_Text_o **)(lVar13 + 0x30);
    iVar8 = UnityEngine_UI_Text__get_fontSize(__this_05,(MethodInfo *)0x0);
    if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontSize(__this_06,(float)iVar8,(MethodInfo *)0x0);
      __this_05 = *(UnityEngine_UI_Text_o **)(lVar13 + 0x20);
      if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
        __this_06 = *(TMPro_TMP_Text_o **)(lVar13 + 0x30);
        (*(__this_05->klass->vtable)._22_get_color.methodPtr)();
        if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
          (*(__this_06->klass->vtable)._23_set_color.methodPtr)(__this_06);
          __this_05 = *(UnityEngine_UI_Text_o **)(lVar13 + 0x20);
          if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
            __this_06 = *(TMPro_TMP_Text_o **)(lVar13 + 0x30);
            uVar9 = UnityEngine_UI_Text__get_alignment(__this_05,(MethodInfo *)0x0);
            iVar8 = 0x1002;
            if (uVar9 < 9) {
              iVar8 = *(int32_t *)(&g_data_00d99884 + (long)(int)uVar9 * 4);
            }
            if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_alignment(__this_06,iVar8,(MethodInfo *)0x0);
              __this_05 = *(UnityEngine_UI_Text_o **)(lVar13 + 0x20);
              if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
                __this_00 = *(TMPro_TMP_Text_o **)(lVar13 + 0x30);
                uVar9 = UnityEngine_UI_Text__get_supportRichText(__this_05,(MethodInfo *)0x0);
                if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                  TMPro_TMP_Text__set_richText(__this_00,uVar9 & 0xff,(MethodInfo *)0x0);
                  return extraout_RAX_00;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae02f = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)&(__this_05->fields).m_Color.fields.b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_02,bVar7);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this_05->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_03,bVar7);
  }
  pUVar21 = (__this_05->fields).m_Material;
  if (pUVar21 != (UnityEngine_Material_o *)0x0) {
    plVar23 = *(long **)&(__this_05->fields).m_Color.fields.b;
    uVar17 = (*(code *)pUVar21->klass[3].vtable._3_ToString.method)();
    if (plVar23 != (long *)0x0) {
      lVar13 = *plVar23;
      pTVar18 = (TMPro_TMP_FontAsset_o *)
                (**(code **)(lVar13 + 0x558))
                          (plVar23,uVar17,*(undefined8 *)(lVar13 + 0x560),lVar13,*(code **)(lVar13 + 0x558));
      return pTVar18;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae032 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae032 = '\x01';
  }
  pUVar3 = pUVar21[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar1 = &pUVar21[2].monitor;
  pMVar19 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_04328892:
    uStack_84 = (uint)((ulong)__this_06 >> 0x20);
    ppvVar22 = (void **)(ulong)uStack_84;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_84,pMVar19);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (settings->fields).gradientA.fields.r = (float)(int)lVar13;
      (settings->fields).gradientA.fields.g = (float)(int)((ulong)lVar13 >> 0x20);
      *(System_RuntimeTypeHandle_Fields *)&(settings->fields).gradientA.fields.b = SVar14.fields.value;
      *(MethodInfo **)&(settings->fields).gradientB.fields = pMVar20;
      *(PatreonEffects_NameEffectApplier_o **)&(settings->fields).gradientB.fields.b = __this_04;
      (settings->fields).gradientC.fields.r = (float)(int)uVar11;
      (settings->fields).gradientC.fields.g = (float)(int)((ulong)uVar11 >> 0x20);
      *(System_String_o **)&(settings->fields).gradientC.fields.b = id;
      *(long **)&(settings->fields).gradientD.fields = unaff_R12;
      *(MethodInfo **)&(settings->fields).gradientD.fields.b = pMVar10;
      ppvVar22 = (void **)0x0;
      if (pUVar21[2].klass != (UnityEngine_Material_c *)0x0) {
        (**(code **)((long)((pUVar21[2].klass)->_1).image + 0x2a8))(0x3f800000,0x3f800000);
        ppvVar22 = (void **)0x0;
        if (*ppvVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppvVar1,settings,method_00);
          return extraout_RAX_01;
        }
      }
    }
  }
  else {
    pUVar4 = (UnityEngine_GameObject_o *)pUVar21[1].fields.m_CachedPtr;
    ppvVar22 = (void **)0x0;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pMVar19 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *ppvVar1 = pMVar19;
      ppvVar22 = ppvVar1;
      il2cpp_runtime_helper_022b4080();
      __this_01 = *ppvVar1;
      if (__this_01 != (PatreonEffects_NameEffectController_o *)0x0) {
        bVar7 = PatreonEffects_NameEffectController__FindText(__this_01,pMVar19);
        if ((char)bVar7 != '\0') {
          *(undefined1 *)&(__this_01->fields).outlineActive = 0;
          bVar7 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this_01,pMVar19);
          if ((char)bVar7 != '\0') {
            (__this_01->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
            pMVar19 = (MethodInfo *)0x0;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields).runtimeMat);
            *(undefined1 *)&(__this_01->fields).initialized = 0;
          }
        }
        goto label_04328892;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae033 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae033 = '\x01';
  }
  pUVar3 = ppvVar22[7];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    puVar2 = ppvVar22 + 7;
    plVar23 = (long *)0x0;
    if ((PatreonEffects_NameEffectController_o *)*puVar2 == (PatreonEffects_NameEffectController_o *)0x0)
    goto label_04328b54;
    PatreonEffects_NameEffectController__Clear((PatreonEffects_NameEffectController_o *)*puVar2,pMVar10);
    pUVar3 = (UnityEngine_Object_o *)*puVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    *puVar2 = 0;
    il2cpp_runtime_helper_022b4080(puVar2);
  }
  pUVar3 = ppvVar22[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pTVar18 = (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_04,bVar7);
  if ((char)bVar7 != '\0') {
    pUVar3 = ppvVar22[4];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pTVar18 = (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_05,bVar7);
    if ((char)bVar7 != '\0') {
      plVar23 = ppvVar22[4];
      if (plVar23 != (long *)0x0) {
        plVar5 = ppvVar22[6];
        (**(code **)(*plVar23 + 0x298))(plVar23,*(undefined8 *)(*plVar23 + 0x2a0));
        if (plVar5 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar5 + 0x2a8);
          pTVar18 = (TMPro_TMP_FontAsset_o *)
                    (*vtableDispatch)
                              (plVar5,*(undefined8 *)(*plVar5 + 0x2b0),extraout_RDX,vtableDispatch);
          return pTVar18;
        }
      }
label_04328b54:
      uVar11 = il2cpp_runtime_helper_022b2c90();
      return (TMPro_TMP_FontAsset_o *)CONCAT71((int7)((ulong)uVar11 >> 8),(char)plVar23[8]);
    }
  }
  return pTVar18;
}


// PatreonEffects.NameFontCatalog$$Apply
// il2cpp: void PatreonEffects_NameFontCatalog__Apply (TMPro_TMP_Text_o* text, System_String_o* id, const MethodInfo* method);
// 0x432f750

void PatreonEffects_NameFontCatalog__Apply(TMPro_TMP_Text_o *text,System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  TMPro_TMP_Text_o *pTVar3;
  System_String_c *pSVar4;
  System_String_o *value;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  TMPro_TMP_InputField_o *pTVar8;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar9;
  VirtualInvokeData *pVVar10;
  long *plVar11;
  undefined8 *puVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  long *plVar15;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar16;
  ulong uVar17;
  System_String_o *b;
  System_String_o *pSVar18;
  TMPro_TMP_InputField_o *__this_01;
  TMPro_TMP_Text_o *text_00;
  long lVar19;
  undefined1 auVar20 [12];
  Il2CppObject *pIStack_48;
  TMPro_TMP_InputField_o *pTStack_40;
  System_String_o *pSStack_38;
  TMPro_TMP_Text_o *pTStack_30;
  TMPro_TMP_InputField_o *pTStack_28;
  long *plStack_20;
  
  if (g_data_057ae06a == '\0') {
    plStack_20 = (long *)0x432f770;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    plStack_20 = (long *)0x432f77c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae06a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_20 = (long *)0x432f79b;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar16 = (MethodInfo *)0x0;
  plStack_20 = (long *)0x432f7a7;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    plStack_20 = (long *)0x432f7c3;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_20 = (long *)0x432f7cb;
  pTVar8 = (TMPro_TMP_InputField_o *)PatreonEffects_NameFontCatalog__Load(id,pMVar16);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_20 = (long *)0x432f7df;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = (System_String_o *)0x0;
  plStack_20 = (long *)0x432f7eb;
  __this_01 = pTVar8;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (text != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_font(text,(TMPro_TMP_FontAsset_o *)pTVar8,(MethodInfo *)0x0);
    return;
  }
  plStack_20 = (long *)0x432f811;
  il2cpp_runtime_helper_022b2c90();
  plStack_20 = &TypeInfo_Object;
  pTStack_30 = text;
  pTStack_28 = pTVar8;
  if (g_data_057ae06b == '\0') {
    pSStack_38 = (System_String_o *)0x432f840;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pSStack_38 = (System_String_o *)0x432f84c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_38 = (System_String_o *)0x432f858;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TMP_Text);
    g_data_057ae06b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_38 = (System_String_o *)0x432f877;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_38 = (System_String_o *)0x432f883;
  pTVar8 = __this_01;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (__this_01 == (TMPro_TMP_InputField_o *)0x0) {
    pSStack_38 = (System_String_o *)0x432f916;
    pIStack_48 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    pTStack_40 = __this_01;
    pSStack_38 = pSVar13;
    if (g_data_057ae06d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      g_data_057ae06d = '\x01';
    }
    pIStack_48 = (Il2CppObject *)0x0;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((pTVar8 != (TMPro_TMP_InputField_o *)0x0) &&
       (__this = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
       __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
        if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae06f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_TMP_FontAsset);
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
            il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            il2cpp_runtime_helper_023445d0(&"Aottg2");
            il2cpp_runtime_helper_023445d0(&"Serif");
            il2cpp_runtime_helper_023445d0(&"Normal");
            il2cpp_runtime_helper_023445d0(&"Jacquard");
            il2cpp_runtime_helper_023445d0(&"Oxanium");
            il2cpp_runtime_helper_023445d0(&"Pixelify");
            il2cpp_runtime_helper_023445d0(&"Comics");
            il2cpp_runtime_helper_023445d0(&"EightBit");
            g_data_057ae06f = '\x01';
          }
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_TMP_FontAsset);
          System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
          **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) = __this_00;
          il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameFontCatalog + 0xb8),__this_00);
          b = (System_String_o *)&g_data_00000008;
          pSVar13 = TypeInfo_string;
          lVar9 = il2cpp_runtime_helper_022b2a40();
          pSVar18 = "Normal";
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x18) != 0) {
              pSVar13 = (System_String_o *)(lVar9 + 0x20);
              *(System_String_o **)(lVar9 + 0x20) = "Normal";
              il2cpp_runtime_helper_022b4080();
              pSVar14 = "Aottg2";
              b = pSVar18;
              if (1 < *(uint *)(lVar9 + 0x18)) {
                pSVar13 = (System_String_o *)(lVar9 + 0x28);
                *(System_String_o **)(lVar9 + 0x28) = "Aottg2";
                il2cpp_runtime_helper_022b4080();
                pSVar18 = "Serif";
                b = pSVar14;
                if (2 < *(uint *)(lVar9 + 0x18)) {
                  pSVar13 = (System_String_o *)(lVar9 + 0x30);
                  *(System_String_o **)(lVar9 + 0x30) = "Serif";
                  il2cpp_runtime_helper_022b4080();
                  pSVar14 = "EightBit";
                  b = pSVar18;
                  if (3 < *(uint *)(lVar9 + 0x18)) {
                    pSVar13 = (System_String_o *)(lVar9 + 0x38);
                    *(System_String_o **)(lVar9 + 0x38) = "EightBit";
                    il2cpp_runtime_helper_022b4080();
                    pSVar18 = "Comics";
                    b = pSVar14;
                    if (4 < *(uint *)(lVar9 + 0x18)) {
                      pSVar13 = (System_String_o *)(lVar9 + 0x40);
                      *(System_String_o **)(lVar9 + 0x40) = "Comics";
                      il2cpp_runtime_helper_022b4080();
                      pSVar14 = "Jacquard";
                      b = pSVar18;
                      if (5 < *(uint *)(lVar9 + 0x18)) {
                        pSVar13 = (System_String_o *)(lVar9 + 0x48);
                        *(System_String_o **)(lVar9 + 0x48) = "Jacquard";
                        il2cpp_runtime_helper_022b4080();
                        pSVar18 = "Pixelify";
                        b = pSVar14;
                        if (6 < *(uint *)(lVar9 + 0x18)) {
                          pSVar13 = (System_String_o *)(lVar9 + 0x50);
                          *(System_String_o **)(lVar9 + 0x50) = "Pixelify";
                          il2cpp_runtime_helper_022b4080();
                          b = pSVar18;
                          if (7 < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x58) = "Oxanium";
                            il2cpp_runtime_helper_022b4080(lVar9 + 0x58);
                            lVar19 = *(long *)(TypeInfo_NameFontCatalog + 0xb8);
                            *(long *)(lVar19 + 8) = lVar9;
                            il2cpp_runtime_helper_022b4080(lVar19 + 8,lVar9);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            il2cpp_runtime_helper_022b2ca0();
          }
          il2cpp_runtime_helper_022b2c90();
          if (((pSVar13 == (System_String_o *)0x0) ||
              (pSVar4 = pSVar13[1].klass, pSVar4 == (System_String_c *)0x0)) || ((int)pSVar4 < 1)) {
            return;
          }
          uVar17 = 0;
          pSVar18 = b;
          pSVar14 = pSVar13;
          if (((ulong)pSVar4 & 0xffffffff) != 0) {
            do {
              value = (&pSVar13[1].monitor)[uVar17];
              pSVar18 = (System_String_o *)0x0;
              pSVar14 = value;
              bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                if (value == (System_String_o *)0x0) goto label_0432fd06;
                pSVar14 = System_String__Trim(value,(MethodInfo *)0x0);
                pSVar18 = b;
                bVar7 = System_String__Equals_3af50f0(pSVar14,b,4,(MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  return;
                }
              }
              uVar17 = uVar17 + 1;
              if ((long)(int)*(uint *)&pSVar13[1].klass <= (long)uVar17) {
                return;
              }
            } while (uVar17 < *(uint *)&pSVar13[1].klass);
          }
          il2cpp_runtime_helper_022b2ca0();
label_0432fd06:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae070 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
            il2cpp_runtime_helper_023445d0();
            g_data_057ae070 = '\x01';
          }
          if (pSVar14 == (System_String_o *)0x0) {
            return;
          }
          pSVar4 = pSVar14->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar9) == TypeInfo_IEnumerable) {
                pVVar10 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar9);
                goto label_0432fdc8;
              }
              lVar9 = lVar9 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar9);
          }
          pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar14,TypeInfo_IEnumerable,0);
label_0432fdc8:
          plVar11 = (long *)(*pVVar10->methodPtr)(pSVar14,pVVar10->method);
          if (plVar11 == (long *)0x0) {
label_0433001b:
            il2cpp_runtime_helper_022b2c90();
            goto label_04330020;
          }
          b = (System_String_o *)0x0;
          do {
            do {
              do {
                lVar9 = *plVar11;
                if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                  lVar19 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
                      puVar12 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar19) * 0x10 + lVar9 + 0x138);
                      goto label_0432fe53;
                    }
                    lVar19 = lVar19 + 0x10;
                  } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar19);
                }
                puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IEnumerator,0);
label_0432fe53:
                cVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                if (cVar6 == '\0') {
                  b = (System_String_o *)0x0;
                  goto label_0432ff7b;
                }
                lVar9 = *plVar11;
                if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                  lVar19 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
                      puVar12 = (undefined8 *)
                                ((long)(*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar19) + 1) * 0x10 + lVar9 +
                                0x138);
                      goto label_0432fed8;
                    }
                    lVar19 = lVar19 + 0x10;
                  } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar19);
                }
                puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IEnumerator,1);
label_0432fed8:
                pSVar13 = (System_String_o *)(*(code *)*puVar12)();
              } while (pSVar13 == (System_String_o *)0x0);
              pSVar14 = pSVar13;
              if (pSVar13->klass != g_data_057b9c00) {
                pSVar14 = b;
              }
              bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                pSVar14 = (System_String_o *)(*(pSVar13->klass->vtable)._3_ToString.methodPtr)(pSVar13);
              }
              bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
            } while ((char)bVar7 != '\0');
            if (pSVar14 == (System_String_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0433001b;
            }
            pSVar13 = System_String__Trim(pSVar14,(MethodInfo *)0x0);
            bVar7 = System_String__Equals_3af50f0(pSVar13,pSVar18,4,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
label_0432ff7b:
          do {
            plVar15 = (long *)il2cpp_runtime_helper_023051f0(plVar11,TypeInfo_IDisposable);
            if (plVar15 != (long *)0x0) {
              lVar9 = *plVar15;
              if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
                lVar19 = 0;
                do {
                  if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
                    puVar12 = (undefined8 *)
                              (lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
                    goto label_0432ffed;
                  }
                  lVar19 = lVar19 + 0x10;
                } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar19);
              }
              puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0432ffed:
              (*(code *)*puVar12)(plVar15,puVar12[1]);
            }
            if (b == (System_String_o *)0x0) {
              return;
            }
label_04330020:
            auVar20 = il2cpp_runtime_helper_022fefe0(b);
            if (auVar20._8_4_ != 1) goto label_043300b3;
            puVar12 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
            b = (System_String_o *)*puVar12;
            __cxa_end_catch();
          } while( true );
        }
      }
      bVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (__this,*(int32_t *)&(pTVar8->fields).m_CancellationTokenSource,&pIStack_48,
                         MethodInfo_Boolean_TryGetValue);
      if ((pIStack_48 != (Il2CppObject *)0x0) && ((char)bVar7 != '\0')) {
        return;
      }
    }
    if ((pTVar8 != (TMPro_TMP_InputField_o *)0x0) &&
       (*(char *)((long)&(pTVar8->fields).m_CancellationTokenSource + 4) != '\0')) {
      return;
    }
    return;
  }
  pTVar3 = *(TMPro_TMP_Text_o **)&(__this_01->fields).m_CachedViewportRect.fields.m_Width;
  pMVar16 = extraout_RDX;
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pSStack_38 = (System_String_o *)0x432f8b1;
    il2cpp_runtime_helper_02337ed0();
    pMVar16 = extraout_RDX_00;
  }
  pSStack_38 = (System_String_o *)0x432f8bc;
  PatreonEffects_NameFontCatalog__Apply(pTVar3,pSVar13,pMVar16);
  pTVar3 = (TMPro_TMP_Text_o *)(__this_01->fields).m_TextComponentRectTransform;
  pMVar16 = extraout_RDX_01;
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    bVar1 = (TypeInfo_TMP_Text->_2).naturalAligment;
    pMVar16 = (MethodInfo *)(ulong)bVar1;
    if (bVar1 <= (pTVar3->klass->_2).naturalAligment) {
      text_00 = (TMPro_TMP_Text_o *)0x0;
      if ((pTVar3->klass->_2).typeHierarchy[(long)&pMVar16[-1].field_0x57] == TypeInfo_TMP_Text) {
        text_00 = pTVar3;
      }
      goto label_0432f8fa;
    }
  }
  text_00 = (TMPro_TMP_Text_o *)0x0;
label_0432f8fa:
  pSStack_38 = (System_String_o *)0x432f902;
  PatreonEffects_NameFontCatalog__Apply(text_00,pSVar13,pMVar16);
  TMPro_TMP_InputField__ForceLabelUpdate(__this_01,(MethodInfo *)0x0);
  return;
label_043300b3:
  plVar11 = (long *)il2cpp_runtime_helper_023051f0(plVar11,TypeInfo_IDisposable);
  if (plVar11 != (long *)0x0) {
    lVar9 = *plVar11;
    if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
          puVar12 = (undefined8 *)
                    (lVar9 + (long)*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
          goto label_0433011d;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar19);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0433011d:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  _Unwind_Resume(auVar20._0_8_);
}


// PatreonEffects.NameFontCatalog$$Apply
// il2cpp: void PatreonEffects_NameFontCatalog__Apply (TMPro_TMP_InputField_o* input, System_String_o* id, const MethodInfo* method);
// 0x432f820

void PatreonEffects_NameFontCatalog__Apply_422f820
               (TMPro_TMP_InputField_o *input,System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  TMPro_TMP_Text_o *pTVar3;
  System_String_c *pSVar4;
  System_String_o *value;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  undefined8 *puVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  long *plVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar15;
  ulong uVar16;
  System_String_o *b;
  System_String_o *pSVar17;
  TMPro_TMP_InputField_o *pTVar18;
  TMPro_TMP_Text_o *text;
  long lVar19;
  undefined1 auVar20 [12];
  Il2CppObject *pIStack_30;
  TMPro_TMP_InputField_o *pTStack_28;
  System_String_o *pSStack_20;
  
  if (g_data_057ae06b == '\0') {
    pSStack_20 = (System_String_o *)0x432f840;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pSStack_20 = (System_String_o *)0x432f84c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_20 = (System_String_o *)0x432f858;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TMP_Text);
    g_data_057ae06b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_20 = (System_String_o *)0x432f877;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_20 = (System_String_o *)0x432f883;
  pTVar18 = input;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (input == (TMPro_TMP_InputField_o *)0x0) {
    pSStack_20 = (System_String_o *)0x432f916;
    pIStack_30 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    pTStack_28 = input;
    pSStack_20 = id;
    if (g_data_057ae06d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      g_data_057ae06d = '\x01';
    }
    pIStack_30 = (Il2CppObject *)0x0;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((pTVar18 != (TMPro_TMP_InputField_o *)0x0) &&
       (__this = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
       __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
        if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae06f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_TMP_FontAsset);
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
            il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            il2cpp_runtime_helper_023445d0(&"Aottg2");
            il2cpp_runtime_helper_023445d0(&"Serif");
            il2cpp_runtime_helper_023445d0(&"Normal");
            il2cpp_runtime_helper_023445d0(&"Jacquard");
            il2cpp_runtime_helper_023445d0(&"Oxanium");
            il2cpp_runtime_helper_023445d0(&"Pixelify");
            il2cpp_runtime_helper_023445d0(&"Comics");
            il2cpp_runtime_helper_023445d0(&"EightBit");
            g_data_057ae06f = '\x01';
          }
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_TMP_FontAsset);
          System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
          **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) = __this_00;
          il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameFontCatalog + 0xb8),__this_00);
          b = (System_String_o *)&g_data_00000008;
          pSVar12 = TypeInfo_string;
          lVar8 = il2cpp_runtime_helper_022b2a40();
          pSVar17 = "Normal";
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) != 0) {
              pSVar12 = (System_String_o *)(lVar8 + 0x20);
              *(System_String_o **)(lVar8 + 0x20) = "Normal";
              il2cpp_runtime_helper_022b4080();
              pSVar13 = "Aottg2";
              b = pSVar17;
              if (1 < *(uint *)(lVar8 + 0x18)) {
                pSVar12 = (System_String_o *)(lVar8 + 0x28);
                *(System_String_o **)(lVar8 + 0x28) = "Aottg2";
                il2cpp_runtime_helper_022b4080();
                pSVar17 = "Serif";
                b = pSVar13;
                if (2 < *(uint *)(lVar8 + 0x18)) {
                  pSVar12 = (System_String_o *)(lVar8 + 0x30);
                  *(System_String_o **)(lVar8 + 0x30) = "Serif";
                  il2cpp_runtime_helper_022b4080();
                  pSVar13 = "EightBit";
                  b = pSVar17;
                  if (3 < *(uint *)(lVar8 + 0x18)) {
                    pSVar12 = (System_String_o *)(lVar8 + 0x38);
                    *(System_String_o **)(lVar8 + 0x38) = "EightBit";
                    il2cpp_runtime_helper_022b4080();
                    pSVar17 = "Comics";
                    b = pSVar13;
                    if (4 < *(uint *)(lVar8 + 0x18)) {
                      pSVar12 = (System_String_o *)(lVar8 + 0x40);
                      *(System_String_o **)(lVar8 + 0x40) = "Comics";
                      il2cpp_runtime_helper_022b4080();
                      pSVar13 = "Jacquard";
                      b = pSVar17;
                      if (5 < *(uint *)(lVar8 + 0x18)) {
                        pSVar12 = (System_String_o *)(lVar8 + 0x48);
                        *(System_String_o **)(lVar8 + 0x48) = "Jacquard";
                        il2cpp_runtime_helper_022b4080();
                        pSVar17 = "Pixelify";
                        b = pSVar13;
                        if (6 < *(uint *)(lVar8 + 0x18)) {
                          pSVar12 = (System_String_o *)(lVar8 + 0x50);
                          *(System_String_o **)(lVar8 + 0x50) = "Pixelify";
                          il2cpp_runtime_helper_022b4080();
                          b = pSVar17;
                          if (7 < *(uint *)(lVar8 + 0x18)) {
                            *(undefined8 *)(lVar8 + 0x58) = "Oxanium";
                            il2cpp_runtime_helper_022b4080(lVar8 + 0x58);
                            lVar19 = *(long *)(TypeInfo_NameFontCatalog + 0xb8);
                            *(long *)(lVar19 + 8) = lVar8;
                            il2cpp_runtime_helper_022b4080(lVar19 + 8,lVar8);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            il2cpp_runtime_helper_022b2ca0();
          }
          il2cpp_runtime_helper_022b2c90();
          if (((pSVar12 == (System_String_o *)0x0) ||
              (pSVar4 = pSVar12[1].klass, pSVar4 == (System_String_c *)0x0)) || ((int)pSVar4 < 1)) {
            return;
          }
          uVar16 = 0;
          pSVar17 = b;
          pSVar13 = pSVar12;
          if (((ulong)pSVar4 & 0xffffffff) != 0) {
            do {
              value = (&pSVar12[1].monitor)[uVar16];
              pSVar17 = (System_String_o *)0x0;
              pSVar13 = value;
              bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                if (value == (System_String_o *)0x0) goto label_0432fd06;
                pSVar13 = System_String__Trim(value,(MethodInfo *)0x0);
                pSVar17 = b;
                bVar7 = System_String__Equals_3af50f0(pSVar13,b,4,(MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  return;
                }
              }
              uVar16 = uVar16 + 1;
              if ((long)(int)*(uint *)&pSVar12[1].klass <= (long)uVar16) {
                return;
              }
            } while (uVar16 < *(uint *)&pSVar12[1].klass);
          }
          il2cpp_runtime_helper_022b2ca0();
label_0432fd06:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae070 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
            il2cpp_runtime_helper_023445d0();
            g_data_057ae070 = '\x01';
          }
          if (pSVar13 == (System_String_o *)0x0) {
            return;
          }
          pSVar4 = pSVar13->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar8 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar8) == TypeInfo_IEnumerable) {
                pVVar9 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar8);
                goto label_0432fdc8;
              }
              lVar8 = lVar8 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar8);
          }
          pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IEnumerable,0);
label_0432fdc8:
          plVar10 = (long *)(*pVVar9->methodPtr)(pSVar13,pVVar9->method);
          if (plVar10 == (long *)0x0) {
label_0433001b:
            il2cpp_runtime_helper_022b2c90();
            goto label_04330020;
          }
          b = (System_String_o *)0x0;
          do {
            do {
              do {
                lVar8 = *plVar10;
                if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
                  lVar19 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
                      puVar11 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar19) * 0x10 + lVar8 + 0x138);
                      goto label_0432fe53;
                    }
                    lVar19 = lVar19 + 0x10;
                  } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar19);
                }
                puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IEnumerator,0);
label_0432fe53:
                cVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if (cVar6 == '\0') {
                  b = (System_String_o *)0x0;
                  goto label_0432ff7b;
                }
                lVar8 = *plVar10;
                if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
                  lVar19 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
                      puVar11 = (undefined8 *)
                                ((long)(*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar19) + 1) * 0x10 + lVar8 +
                                0x138);
                      goto label_0432fed8;
                    }
                    lVar19 = lVar19 + 0x10;
                  } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar19);
                }
                puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IEnumerator,1);
label_0432fed8:
                pSVar12 = (System_String_o *)(*(code *)*puVar11)();
              } while (pSVar12 == (System_String_o *)0x0);
              pSVar13 = pSVar12;
              if (pSVar12->klass != g_data_057b9c00) {
                pSVar13 = b;
              }
              bVar7 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                pSVar13 = (System_String_o *)(*(pSVar12->klass->vtable)._3_ToString.methodPtr)(pSVar12);
              }
              bVar7 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
            } while ((char)bVar7 != '\0');
            if (pSVar13 == (System_String_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0433001b;
            }
            pSVar12 = System_String__Trim(pSVar13,(MethodInfo *)0x0);
            bVar7 = System_String__Equals_3af50f0(pSVar12,pSVar17,4,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
label_0432ff7b:
          do {
            plVar14 = (long *)il2cpp_runtime_helper_023051f0(plVar10,TypeInfo_IDisposable);
            if (plVar14 != (long *)0x0) {
              lVar8 = *plVar14;
              if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
                lVar19 = 0;
                do {
                  if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
                    puVar11 = (undefined8 *)
                              (lVar8 + (long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
                    goto label_0432ffed;
                  }
                  lVar19 = lVar19 + 0x10;
                } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar19);
              }
              puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_0432ffed:
              (*(code *)*puVar11)(plVar14,puVar11[1]);
            }
            if (b == (System_String_o *)0x0) {
              return;
            }
label_04330020:
            auVar20 = il2cpp_runtime_helper_022fefe0(b);
            if (auVar20._8_4_ != 1) goto label_043300b3;
            puVar11 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
            b = (System_String_o *)*puVar11;
            __cxa_end_catch();
          } while( true );
        }
      }
      bVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (__this,*(int32_t *)&(pTVar18->fields).m_CancellationTokenSource,&pIStack_30,
                         MethodInfo_Boolean_TryGetValue);
      if ((pIStack_30 != (Il2CppObject *)0x0) && ((char)bVar7 != '\0')) {
        return;
      }
    }
    if ((pTVar18 != (TMPro_TMP_InputField_o *)0x0) &&
       (*(char *)((long)&(pTVar18->fields).m_CancellationTokenSource + 4) != '\0')) {
      return;
    }
    return;
  }
  pTVar3 = *(TMPro_TMP_Text_o **)&(input->fields).m_CachedViewportRect.fields.m_Width;
  pMVar15 = extraout_RDX;
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pSStack_20 = (System_String_o *)0x432f8b1;
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = extraout_RDX_00;
  }
  pSStack_20 = (System_String_o *)0x432f8bc;
  PatreonEffects_NameFontCatalog__Apply(pTVar3,id,pMVar15);
  pTVar3 = (TMPro_TMP_Text_o *)(input->fields).m_TextComponentRectTransform;
  pMVar15 = extraout_RDX_01;
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    bVar1 = (TypeInfo_TMP_Text->_2).naturalAligment;
    pMVar15 = (MethodInfo *)(ulong)bVar1;
    if (bVar1 <= (pTVar3->klass->_2).naturalAligment) {
      text = (TMPro_TMP_Text_o *)0x0;
      if ((pTVar3->klass->_2).typeHierarchy[(long)&pMVar15[-1].field_0x57] == TypeInfo_TMP_Text) {
        text = pTVar3;
      }
      goto label_0432f8fa;
    }
  }
  text = (TMPro_TMP_Text_o *)0x0;
label_0432f8fa:
  pSStack_20 = (System_String_o *)0x432f902;
  PatreonEffects_NameFontCatalog__Apply(text,id,pMVar15);
  TMPro_TMP_InputField__ForceLabelUpdate(input,(MethodInfo *)0x0);
  return;
label_043300b3:
  plVar10 = (long *)il2cpp_runtime_helper_023051f0(plVar10,TypeInfo_IDisposable);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar8 + (long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
          goto label_0433011d;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar19);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_0433011d:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  _Unwind_Resume(auVar20._0_8_);
}


// PatreonEffects.NameFontCatalog$$FontForPlayer
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_NameFontCatalog__FontForPlayer (Photon_Realtime_Player_o* player, bool guild, const MethodInfo* method);
// 0x4327eb0

TMPro_TMP_FontAsset_o *
PatreonEffects_NameFontCatalog__FontForPlayer
          (Photon_Realtime_Player_o *player,bool_conflict guild,MethodInfo *method)

{
  void **ppvVar1;
  undefined8 *puVar2;
  int iVar3;
  Settings_StringSetting_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  TMPro_TMP_Text_o *__this_00;
  PatreonEffects_NameEffectController_o *__this_01;
  long *plVar7;
  code *vtableDispatch;
  UnityEngine_Vector2_o UVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  uint uVar11;
  Settings_ProfileSettings_o *pSVar12;
  MethodInfo *pMVar13;
  System_String_o *pSVar14;
  TMPro_TMP_FontAsset_o *pTVar15;
  undefined8 uVar16;
  undefined4 extraout_var;
  System_Type_array *components;
  System_Type_o *pSVar17;
  long lVar18;
  System_RuntimeTypeHandle_o SVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TextMeshProUGUI_o *pTVar21;
  TMPro_TMP_FontAsset_o *extraout_RAX;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TMPro_TMP_FontAsset_o *extraout_RAX_00;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 uVar22;
  MethodInfo *pMVar23;
  PatreonEffects_NameEffectSettings_o *settings;
  TMPro_TMP_FontAsset_o *extraout_RAX_01;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo *pMVar24;
  PatreonEffects_NameEffectApplier_o *__this_04;
  UnityEngine_UI_Text_o *__this_05;
  UnityEngine_Material_o *pUVar25;
  void **ppvVar26;
  long *plVar27;
  long *unaff_R12;
  TMPro_TMP_Text_o *__this_06;
  UnityEngine_Vector3_o value;
  uint uStack_9c;
  TMPro_TMP_FontAsset_o *pTStack_48;
  Photon_Realtime_Player_o *pPStack_40;
  
  pMVar13 = (MethodInfo *)CONCAT44(in_register_00000034,guild);
  if (g_data_057ae06c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057ae06c = '\x01';
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (bVar9 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,pMVar13), (char)bVar9 == '\0')) {
    pSVar14 = "Normal";
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar14 = "Normal";
    }
    goto label_04327f9d;
  }
  pTVar15 = (TMPro_TMP_FontAsset_o *)player;
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar12 = PatreonEffects_NameFontCatalog__Profile(player,pMVar13);
    if (pSVar12 == (Settings_ProfileSettings_o *)0x0) goto label_04327f64;
label_04327f1e:
    if ((char)guild == '\0') {
      pSVar4 = (pSVar12->fields).NameFont;
    }
    else {
      pSVar4 = (pSVar12->fields).GuildFont;
    }
    if (pSVar4 == (Settings_StringSetting_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pPStack_40 = player;
      if (g_data_057ae069 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
        il2cpp_runtime_helper_023445d0(&"Normal");
        il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
        g_data_057ae069 = '\x01';
      }
      pTStack_48 = (TMPro_TMP_FontAsset_o *)0x0;
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = (MethodInfo *)PatreonEffects_NameFontCatalog__Normalize((System_String_o *)pTVar15,pMVar13);
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar24 = pMVar13;
        bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8),(Il2CppObject *)pMVar13,
                           (Il2CppObject **)&pTStack_48,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar9 != '\0') {
          return pTStack_48;
        }
        if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar14 = PatreonEffects_NameFontCatalog__Path((System_String_o *)pMVar13,pMVar24);
        pTVar15 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_(pSVar14,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
        unaff_R12 = &TypeInfo_Object;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (((char)bVar9 != '\0') &&
           (bVar9 = System_String__op_Inequality((System_String_o *)pMVar13,"Normal",(MethodInfo *)0x0),
           (char)bVar9 != '\0')) {
          pTVar15 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) != 0) goto label_0432813f;
label_0432818a:
          il2cpp_runtime_helper_02337ed0();
          __this = (System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
        }
        else {
          pTVar15 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) goto label_0432818a;
label_0432813f:
          __this = (System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
        }
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this,(Il2CppObject *)pMVar13,(Il2CppObject *)pTVar15,MethodInfo_Void_set_Item);
          return pTVar15;
        }
      }
      __this_04 = (PatreonEffects_NameEffectApplier_o *)0x0;
      uVar16 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae031 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
        il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
        il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
        il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
        il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
        il2cpp_runtime_helper_023445d0(&"NameEffectOverlay");
        g_data_057ae031 = '\x01';
      }
      pUVar5 = (UnityEngine_Object_o *)(__this_04->fields)._tmpOverlay;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var,bVar9);
      }
      components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      SVar19 = TypeRef_RectTransform;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
      pMVar24 = pMVar13;
      if (components == (System_Type_array *)0x0) {
label_04328580:
        il2cpp_runtime_helper_022b2c90();
label_04328585:
        il2cpp_runtime_helper_022b2ca0();
      }
      else {
        SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar17;
        if ((pSVar17 == (System_Type_o *)0x0) || (lVar18 = il2cpp_runtime_helper_023051f0(pSVar17), lVar18 != 0)) {
          if ((int)components->max_length != 0) {
            components->m_Items[0] = pSVar17;
            il2cpp_runtime_helper_022b4080(components->m_Items);
            SVar19.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
            if ((SVar19.fields.value != 0) && (lVar18 = il2cpp_runtime_helper_023051f0(SVar19.fields.value), lVar18 == 0))
            goto label_0432858a;
            if (1 < (uint)components->max_length) {
              components->m_Items[1] = (System_Type_o *)SVar19.fields.value;
              il2cpp_runtime_helper_022b4080(components->m_Items + 1);
              SVar19.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
              if ((SVar19.fields.value != 0) &&
                 (lVar18 = il2cpp_runtime_helper_023051f0(SVar19.fields.value), lVar18 == 0)) goto label_0432858a;
              if (2 < (uint)components->max_length) {
                pMVar24 = (MethodInfo *)&(__this_04->fields)._tmpOverlay;
                components->m_Items[2] = (System_Type_o *)SVar19.fields.value;
                il2cpp_runtime_helper_022b4080(components->m_Items + 2,SVar19.fields.value);
                SVar19.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor_4dfc440
                          ((UnityEngine_GameObject_o *)SVar19.fields.value,"NameEffectOverlay",components,
                           (MethodInfo *)0x0);
                *(System_RuntimeTypeHandle_Fields *)pMVar24 = SVar19.fields.value;
                il2cpp_runtime_helper_022b4080(pMVar24);
                if (*(UnityEngine_GameObject_o **)pMVar24 != (UnityEngine_GameObject_o *)0x0) {
                  SVar19.fields.value =
                       (System_RuntimeTypeHandle_Fields)
                       UnityEngine_GameObject__get_transform
                                 (*(UnityEngine_GameObject_o **)pMVar24,(MethodInfo *)0x0);
                  pUVar20 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                  if ((pUVar20 != (UnityEngine_Transform_o *)0x0) &&
                     (pUVar20 = UnityEngine_Transform__get_parent(pUVar20,(MethodInfo *)0x0),
                     SVar19.fields.value != 0)) {
                    UnityEngine_Transform__SetParent_4e09e30
                              ((UnityEngine_Transform_o *)SVar19.fields.value,pUVar20,0,(MethodInfo *)0x0);
                    __this_02 = (UnityEngine_RectTransform_o *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
                    pUVar6 = (__this_04->fields)._tmpOverlay;
                    if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
                       ((__this_03 = (UnityEngine_RectTransform_o *)
                                     UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform),
                        __this_02 != (UnityEngine_RectTransform_o *)0x0 &&
                        (UVar8 = UnityEngine_RectTransform__get_anchorMin(__this_02,(MethodInfo *)0x0),
                        SVar19.fields.value =
                             (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_03,
                        __this_03 != (UnityEngine_RectTransform_o *)0x0)))) {
                      UnityEngine_RectTransform__set_anchorMin(__this_03,UVar8,(MethodInfo *)0x0);
                      UVar8 = UnityEngine_RectTransform__get_anchorMax(__this_02,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_anchorMax(__this_03,UVar8,(MethodInfo *)0x0);
                      UVar8 = UnityEngine_RectTransform__get_pivot(__this_02,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_pivot(__this_03,UVar8,(MethodInfo *)0x0);
                      UVar8 = UnityEngine_RectTransform__get_anchoredPosition(__this_02,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_anchoredPosition(__this_03,UVar8,(MethodInfo *)0x0);
                      UVar8 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
                      UnityEngine_RectTransform__set_sizeDelta(__this_03,UVar8,(MethodInfo *)0x0);
                      value = UnityEngine_Transform__get_localScale
                                        ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
                      UnityEngine_Transform__set_localScale
                                ((UnityEngine_Transform_o *)__this_03,value,(MethodInfo *)0x0);
                      if (*(UnityEngine_GameObject_o **)pMVar24 != (UnityEngine_GameObject_o *)0x0) {
                        pTVar21 = (TMPro_TextMeshProUGUI_o *)
                                  UnityEngine_GameObject__GetComponent_object_
                                            (*(UnityEngine_GameObject_o **)pMVar24,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                        SVar19.fields.value = (System_RuntimeTypeHandle_Fields)&(__this_04->fields)._tmpText;
                        (__this_04->fields)._tmpText = pTVar21;
                        il2cpp_runtime_helper_022b4080(SVar19.fields.value);
                        pTVar21 = (__this_04->fields)._tmpText;
                        if (pTVar21 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          (*(pTVar21->klass->vtable)._25_set_raycastTarget.methodPtr)
                                    (pTVar21,0,(pTVar21->klass->vtable)._25_set_raycastTarget.method);
                          if (*(TMPro_TextMeshProUGUI_o **)SVar19.fields.value !=
                              (TMPro_TextMeshProUGUI_o *)0x0) {
                            TMPro_TMP_Text__set_enableWordWrapping
                                      ((TMPro_TMP_Text_o *)*(TMPro_TextMeshProUGUI_o **)SVar19.fields.value,0,
                                       (MethodInfo *)0x0);
                            if (*(TMPro_TextMeshProUGUI_o **)SVar19.fields.value !=
                                (TMPro_TextMeshProUGUI_o *)0x0) {
                              pMVar23 = (MethodInfo *)0x0;
                              TMPro_TMP_Text__set_overflowMode
                                        ((TMPro_TMP_Text_o *)*(TMPro_TextMeshProUGUI_o **)SVar19.fields.value,
                                         0,(MethodInfo *)0x0);
                              PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this_04,pMVar23);
                              pUVar6 = (__this_04->fields)._tmpOverlay;
                              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
                                return extraout_RAX;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_04328580;
              }
            }
          }
          goto label_04328585;
        }
      }
label_0432858a:
      lVar18 = il2cpp_runtime_helper_0231b270();
      il2cpp_runtime_helper_022b2b10();
      if (g_data_057ae034 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae034 = '\x01';
      }
      pUVar5 = *(UnityEngine_Object_o **)(lVar18 + 0x30);
      __this_06 = (TMPro_TMP_Text_o *)0x0;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_00,bVar9);
      }
      pUVar5 = *(UnityEngine_Object_o **)(lVar18 + 0x20);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_01,bVar9);
      }
      __this_05 = *(UnityEngine_UI_Text_o **)(lVar18 + 0x20);
      if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
        __this_06 = *(TMPro_TMP_Text_o **)(lVar18 + 0x30);
        iVar10 = UnityEngine_UI_Text__get_fontSize(__this_05,(MethodInfo *)0x0);
        if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
          TMPro_TMP_Text__set_fontSize(__this_06,(float)iVar10,(MethodInfo *)0x0);
          __this_05 = *(UnityEngine_UI_Text_o **)(lVar18 + 0x20);
          if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
            __this_06 = *(TMPro_TMP_Text_o **)(lVar18 + 0x30);
            (*(__this_05->klass->vtable)._22_get_color.methodPtr)();
            if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
              (*(__this_06->klass->vtable)._23_set_color.methodPtr)(__this_06);
              __this_05 = *(UnityEngine_UI_Text_o **)(lVar18 + 0x20);
              if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
                __this_06 = *(TMPro_TMP_Text_o **)(lVar18 + 0x30);
                uVar11 = UnityEngine_UI_Text__get_alignment(__this_05,(MethodInfo *)0x0);
                iVar10 = 0x1002;
                if (uVar11 < 9) {
                  iVar10 = *(int32_t *)(&g_data_00d99884 + (long)(int)uVar11 * 4);
                }
                if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
                  TMPro_TMP_Text__set_alignment(__this_06,iVar10,(MethodInfo *)0x0);
                  __this_05 = *(UnityEngine_UI_Text_o **)(lVar18 + 0x20);
                  if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
                    __this_00 = *(TMPro_TMP_Text_o **)(lVar18 + 0x30);
                    uVar11 = UnityEngine_UI_Text__get_supportRichText(__this_05,(MethodInfo *)0x0);
                    if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                      TMPro_TMP_Text__set_richText(__this_00,uVar11 & 0xff,(MethodInfo *)0x0);
                      return extraout_RAX_00;
                    }
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae02f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae02f = '\x01';
      }
      pUVar5 = *(UnityEngine_Object_o **)&(__this_05->fields).m_Color.fields.b;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_02,bVar9);
      }
      pUVar5 = (UnityEngine_Object_o *)(__this_05->fields).m_Material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_03,bVar9);
      }
      pUVar25 = (__this_05->fields).m_Material;
      if (pUVar25 != (UnityEngine_Material_o *)0x0) {
        plVar27 = *(long **)&(__this_05->fields).m_Color.fields.b;
        uVar22 = (*(code *)pUVar25->klass[3].vtable._3_ToString.method)();
        if (plVar27 != (long *)0x0) {
          lVar18 = *plVar27;
          pTVar15 = (TMPro_TMP_FontAsset_o *)
                    (**(code **)(lVar18 + 0x558))
                              (plVar27,uVar22,*(undefined8 *)(lVar18 + 0x560),lVar18,
                               *(code **)(lVar18 + 0x558));
          return pTVar15;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae032 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae032 = '\x01';
      }
      pUVar5 = pUVar25[2].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppvVar1 = &pUVar25[2].monitor;
      pMVar23 = (MethodInfo *)0x0;
      bVar9 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
label_04328892:
        uStack_9c = (uint)((ulong)__this_06 >> 0x20);
        ppvVar26 = (void **)(ulong)uStack_9c;
        settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_9c,pMVar23);
        if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
          (settings->fields).gradientA.fields.r = (float)(int)lVar18;
          (settings->fields).gradientA.fields.g = (float)(int)((ulong)lVar18 >> 0x20);
          *(System_RuntimeTypeHandle_Fields *)&(settings->fields).gradientA.fields.b = SVar19.fields.value;
          *(MethodInfo **)&(settings->fields).gradientB.fields = pMVar24;
          *(PatreonEffects_NameEffectApplier_o **)&(settings->fields).gradientB.fields.b = __this_04;
          (settings->fields).gradientC.fields.r = (float)(int)uVar16;
          (settings->fields).gradientC.fields.g = (float)(int)((ulong)uVar16 >> 0x20);
          *(TMPro_TMP_FontAsset_o **)&(settings->fields).gradientC.fields.b = pTVar15;
          *(long **)&(settings->fields).gradientD.fields = unaff_R12;
          *(MethodInfo **)&(settings->fields).gradientD.fields.b = pMVar13;
          ppvVar26 = (void **)0x0;
          if (pUVar25[2].klass != (UnityEngine_Material_c *)0x0) {
            (**(code **)((long)((pUVar25[2].klass)->_1).image + 0x2a8))(0x3f800000,0x3f800000);
            ppvVar26 = (void **)0x0;
            if (*ppvVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
              PatreonEffects_NameEffectController__Apply(*ppvVar1,settings,method_00);
              return extraout_RAX_01;
            }
          }
        }
      }
      else {
        pUVar6 = (UnityEngine_GameObject_o *)pUVar25[1].fields.m_CachedPtr;
        ppvVar26 = (void **)0x0;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pMVar23 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_NameEffectController_AddComponent_NameEffectController);
          *ppvVar1 = pMVar23;
          ppvVar26 = ppvVar1;
          il2cpp_runtime_helper_022b4080();
          __this_01 = *ppvVar1;
          if (__this_01 != (PatreonEffects_NameEffectController_o *)0x0) {
            bVar9 = PatreonEffects_NameEffectController__FindText(__this_01,pMVar23);
            if ((char)bVar9 != '\0') {
              *(undefined1 *)&(__this_01->fields).outlineActive = 0;
              bVar9 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this_01,pMVar23);
              if ((char)bVar9 != '\0') {
                (__this_01->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
                pMVar23 = (MethodInfo *)0x0;
                il2cpp_runtime_helper_022b4080(&(__this_01->fields).runtimeMat);
                *(undefined1 *)&(__this_01->fields).initialized = 0;
              }
            }
            goto label_04328892;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae033 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae033 = '\x01';
      }
      pUVar5 = ppvVar26[7];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = (MethodInfo *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        puVar2 = ppvVar26 + 7;
        plVar27 = (long *)0x0;
        if ((PatreonEffects_NameEffectController_o *)*puVar2 == (PatreonEffects_NameEffectController_o *)0x0)
        goto label_04328b54;
        PatreonEffects_NameEffectController__Clear((PatreonEffects_NameEffectController_o *)*puVar2,pMVar13);
        pUVar5 = (UnityEngine_Object_o *)*puVar2;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60(pUVar5,(MethodInfo *)0x0);
        *puVar2 = 0;
        il2cpp_runtime_helper_022b4080(puVar2);
      }
      pUVar5 = ppvVar26[6];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pTVar15 = (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_04,bVar9);
      if ((char)bVar9 != '\0') {
        pUVar5 = ppvVar26[4];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pTVar15 = (TMPro_TMP_FontAsset_o *)CONCAT44(extraout_var_05,bVar9);
        if ((char)bVar9 != '\0') {
          plVar27 = ppvVar26[4];
          if (plVar27 != (long *)0x0) {
            plVar7 = ppvVar26[6];
            (**(code **)(*plVar27 + 0x298))(plVar27,*(undefined8 *)(*plVar27 + 0x2a0));
            if (plVar7 != (long *)0x0) {
              vtableDispatch = *(code **)(*plVar7 + 0x2a8);
              pTVar15 = (TMPro_TMP_FontAsset_o *)
                        (*vtableDispatch)
                                  (plVar7,*(undefined8 *)(*plVar7 + 0x2b0),extraout_RDX,vtableDispatch)
              ;
              return pTVar15;
            }
          }
label_04328b54:
          uVar16 = il2cpp_runtime_helper_022b2c90();
          return (TMPro_TMP_FontAsset_o *)CONCAT71((int7)((ulong)uVar16 >> 8),(char)plVar27[8]);
        }
      }
      return pTVar15;
    }
    pSVar14 = (pSVar4->fields)._value;
    iVar3 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
  }
  else {
    pSVar12 = PatreonEffects_NameFontCatalog__Profile(player,pMVar13);
    if (pSVar12 != (Settings_ProfileSettings_o *)0x0) goto label_04327f1e;
label_04327f64:
    iVar3 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
    pSVar14 = "Normal";
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
label_04327f9d:
  pTVar15 = PatreonEffects_NameFontCatalog__Load(pSVar14,pMVar13);
  return pTVar15;
}


// PatreonEffects.NameFontCatalog$$Profile
// il2cpp: Settings_ProfileSettings_o* PatreonEffects_NameFontCatalog__Profile (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x432f920

Settings_ProfileSettings_o *
PatreonEffects_NameFontCatalog__Profile(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  ushort uVar1;
  System_String_c *pSVar2;
  System_String_o *value;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar6;
  Settings_ProfileSettings_o *pSVar7;
  undefined4 extraout_var;
  Il2CppMethodPointer *ppIVar8;
  long *plVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  System_String_o *b;
  System_String_o *pSVar15;
  long lVar16;
  undefined1 *puVar17;
  int iVar18;
  byte bVar19;
  undefined1 auVar20 [12];
  Il2CppObject *local_18;
  
  if (g_data_057ae06d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae06d = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae06f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_TMP_FontAsset);
          il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
          il2cpp_runtime_helper_023445d0(&TypeInfo_string);
          il2cpp_runtime_helper_023445d0(&"Aottg2");
          il2cpp_runtime_helper_023445d0(&"Serif");
          il2cpp_runtime_helper_023445d0(&"Normal");
          il2cpp_runtime_helper_023445d0(&"Jacquard");
          il2cpp_runtime_helper_023445d0(&"Oxanium");
          il2cpp_runtime_helper_023445d0(&"Pixelify");
          il2cpp_runtime_helper_023445d0(&"Comics");
          il2cpp_runtime_helper_023445d0(&"EightBit");
          g_data_057ae06f = '\x01';
        }
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_TMP_FontAsset);
        System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
        **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) = __this_00;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameFontCatalog + 0xb8),__this_00);
        b = (System_String_o *)&g_data_00000008;
        pSVar10 = TypeInfo_string;
        lVar6 = il2cpp_runtime_helper_022b2a40();
        pSVar15 = "Normal";
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) != 0) {
            pSVar10 = (System_String_o *)(lVar6 + 0x20);
            *(System_String_o **)(lVar6 + 0x20) = "Normal";
            il2cpp_runtime_helper_022b4080();
            pSVar11 = "Aottg2";
            b = pSVar15;
            if (1 < *(uint *)(lVar6 + 0x18)) {
              pSVar10 = (System_String_o *)(lVar6 + 0x28);
              *(System_String_o **)(lVar6 + 0x28) = "Aottg2";
              il2cpp_runtime_helper_022b4080();
              pSVar15 = "Serif";
              b = pSVar11;
              if (2 < *(uint *)(lVar6 + 0x18)) {
                pSVar10 = (System_String_o *)(lVar6 + 0x30);
                *(System_String_o **)(lVar6 + 0x30) = "Serif";
                il2cpp_runtime_helper_022b4080();
                pSVar11 = "EightBit";
                b = pSVar15;
                if (3 < *(uint *)(lVar6 + 0x18)) {
                  pSVar10 = (System_String_o *)(lVar6 + 0x38);
                  *(System_String_o **)(lVar6 + 0x38) = "EightBit";
                  il2cpp_runtime_helper_022b4080();
                  pSVar15 = "Comics";
                  b = pSVar11;
                  if (4 < *(uint *)(lVar6 + 0x18)) {
                    pSVar10 = (System_String_o *)(lVar6 + 0x40);
                    *(System_String_o **)(lVar6 + 0x40) = "Comics";
                    il2cpp_runtime_helper_022b4080();
                    pSVar11 = "Jacquard";
                    b = pSVar15;
                    if (5 < *(uint *)(lVar6 + 0x18)) {
                      pSVar10 = (System_String_o *)(lVar6 + 0x48);
                      *(System_String_o **)(lVar6 + 0x48) = "Jacquard";
                      il2cpp_runtime_helper_022b4080();
                      pSVar15 = "Pixelify";
                      b = pSVar11;
                      if (6 < *(uint *)(lVar6 + 0x18)) {
                        pSVar10 = (System_String_o *)(lVar6 + 0x50);
                        *(System_String_o **)(lVar6 + 0x50) = "Pixelify";
                        il2cpp_runtime_helper_022b4080();
                        b = pSVar15;
                        if (7 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x58) = "Oxanium";
                          il2cpp_runtime_helper_022b4080(lVar6 + 0x58);
                          lVar16 = *(long *)(TypeInfo_NameFontCatalog + 0xb8);
                          *(long *)(lVar16 + 8) = lVar6;
                          pSVar7 = (Settings_ProfileSettings_o *)il2cpp_runtime_helper_022b4080(lVar16 + 8,lVar6);
                          return pSVar7;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2ca0();
        }
        il2cpp_runtime_helper_022b2c90();
        if (((pSVar10 == (System_String_o *)0x0) ||
            (pSVar2 = pSVar10[1].klass, pSVar2 == (System_String_c *)0x0)) || ((int)pSVar2 < 1)) {
          return (Settings_ProfileSettings_o *)0x0;
        }
        uVar14 = 0;
        pSVar15 = b;
        pSVar11 = pSVar10;
        if (((ulong)pSVar2 & 0xffffffff) != 0) {
          do {
            value = (&pSVar10[1].monitor)[uVar14];
            pSVar15 = (System_String_o *)0x0;
            pSVar11 = value;
            bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              if (value == (System_String_o *)0x0) goto label_0432fd06;
              pSVar11 = System_String__Trim(value,(MethodInfo *)0x0);
              pSVar15 = b;
              bVar5 = System_String__Equals_3af50f0(pSVar11,b,4,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                return (Settings_ProfileSettings_o *)CONCAT71((int7)(CONCAT44(extraout_var,bVar5) >> 8),1);
              }
            }
            uVar14 = uVar14 + 1;
            if ((long)(int)*(uint *)&pSVar10[1].klass <= (long)uVar14) {
              return (Settings_ProfileSettings_o *)0x0;
            }
          } while (uVar14 < *(uint *)&pSVar10[1].klass);
        }
        il2cpp_runtime_helper_022b2ca0();
label_0432fd06:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae070 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
          il2cpp_runtime_helper_023445d0();
          g_data_057ae070 = '\x01';
        }
        if (pSVar11 == (System_String_o *)0x0) {
          uVar14 = 0;
label_04330005:
          return (Settings_ProfileSettings_o *)(uVar14 & 0xffffffff);
        }
        pSVar2 = pSVar11->klass;
        uVar1._0_1_ = (pSVar2->_2).rank;
        uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar3 = (pSVar2->_1).interfaceOffsets;
          lVar6 = 0;
          do {
            if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IEnumerable) {
              ppIVar8 = &(&(pSVar2->vtable)._0_Equals)[*(int *)((long)&pIVar3->offset + lVar6)].methodPtr;
              goto label_0432fdc8;
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar6);
        }
        ppIVar8 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IEnumerable,0);
label_0432fdc8:
        plVar9 = (long *)(**ppIVar8)(pSVar11,(MethodInfo *)ppIVar8[1]);
        if (plVar9 == (long *)0x0) {
label_0433001b:
          il2cpp_runtime_helper_022b2c90();
          goto label_04330020;
        }
        b = (System_String_o *)0x0;
        do {
          do {
            do {
              lVar6 = *plVar9;
              if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
                lVar16 = 0;
                do {
                  if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
                    ppIVar8 = (Il2CppMethodPointer *)
                              ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar16) * 0x10 + lVar6 + 0x138);
                    goto label_0432fe53;
                  }
                  lVar16 = lVar16 + 0x10;
                } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar16);
              }
              ppIVar8 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,0);
label_0432fe53:
              cVar4 = (**ppIVar8)(plVar9,(MethodInfo *)ppIVar8[1]);
              if (cVar4 == '\0') {
                iVar18 = 7;
                b = (System_String_o *)0x0;
                goto label_0432ff78;
              }
              lVar6 = *plVar9;
              if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
                lVar16 = 0;
                do {
                  if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
                    ppIVar8 = (Il2CppMethodPointer *)
                              ((long)(*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar16) + 1) * 0x10 + lVar6 +
                              0x138);
                    goto label_0432fed8;
                  }
                  lVar16 = lVar16 + 0x10;
                } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar16);
              }
              ppIVar8 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,1);
label_0432fed8:
              pSVar10 = (System_String_o *)(**ppIVar8)();
            } while (pSVar10 == (System_String_o *)0x0);
            pSVar11 = pSVar10;
            if (pSVar10->klass != g_data_057b9c00) {
              pSVar11 = b;
            }
            bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              pSVar11 = (System_String_o *)(*(pSVar10->klass->vtable)._3_ToString.methodPtr)(pSVar10);
            }
            bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
          } while ((char)bVar5 != '\0');
          if (pSVar11 == (System_String_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0433001b;
          }
          pSVar10 = System_String__Trim(pSVar11,(MethodInfo *)0x0);
          ppIVar8 = (Il2CppMethodPointer *)0x0;
          bVar5 = System_String__Equals_3af50f0(pSVar10,pSVar15,4,(MethodInfo *)0x0);
        } while ((char)bVar5 == '\0');
        bVar19 = 1;
        iVar18 = 6;
        do {
          plVar12 = (long *)il2cpp_runtime_helper_023051f0(plVar9,TypeInfo_IDisposable);
          if (plVar12 != (long *)0x0) {
            lVar6 = *plVar12;
            ppIVar8 = (Il2CppMethodPointer *)0x0;
            if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
              ppIVar8 = (Il2CppMethodPointer *)((ulong)*(ushort *)(lVar6 + 0x12e) << 4);
              puVar17 = (undefined1 *)0x0;
              do {
                if (*(long *)(puVar17 + *(long *)(lVar6 + 0xb0)) == TypeInfo_IDisposable) {
                  ppIVar8 = (Il2CppMethodPointer *)
                            ((long)*(int *)(puVar17 + *(long *)(lVar6 + 0xb0) + 8) * 0x10);
                  puVar13 = (undefined8 *)((long)ppIVar8 + lVar6 + 0x138);
                  goto label_0432ffed;
                }
                puVar17 = puVar17 + 0x10;
              } while (ppIVar8 != (Il2CppMethodPointer *)puVar17);
            }
            puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_0432ffed:
            (*(code *)*puVar13)(plVar12,puVar13[1]);
          }
          if (b == (System_String_o *)0x0) {
            uVar14 = CONCAT71((int7)((ulong)ppIVar8 >> 8),iVar18 == 6 & bVar19);
            goto label_04330005;
          }
label_04330020:
          auVar20 = il2cpp_runtime_helper_022fefe0(b);
          iVar18 = 0;
          if (auVar20._8_4_ != 1) goto label_043300b3;
          puVar13 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
          b = (System_String_o *)*puVar13;
          __cxa_end_catch();
label_0432ff78:
          bVar19 = 0;
        } while( true );
      }
    }
    bVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (__this,(player->fields).actorNumber,&local_18,MethodInfo_Boolean_TryGetValue);
    if ((local_18 != (Il2CppObject *)0x0) && ((char)bVar5 != '\0')) {
      return (Settings_ProfileSettings_o *)local_18[2].klass;
    }
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) && ((char)(player->fields).IsLocal != '\0')) {
    return *(Settings_ProfileSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  }
  return (Settings_ProfileSettings_o *)0x0;
label_043300b3:
  plVar9 = (long *)il2cpp_runtime_helper_023051f0(plVar9,TypeInfo_IDisposable);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
          puVar13 = (undefined8 *)
                    (lVar6 + (long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
          goto label_0433011d;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar16);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_0433011d:
    (*(code *)*puVar13)(plVar9,puVar13[1]);
  }
  _Unwind_Resume(auVar20._0_8_);
}


// PatreonEffects.NameFontCatalog$$Path
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Path (System_String_o* id, const MethodInfo* method);
// 0x432f570

System_String_o * PatreonEffects_NameFontCatalog__Path(System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae06e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Serif");
    il2cpp_runtime_helper_023445d0(&"Jacquard");
    il2cpp_runtime_helper_023445d0(&"Oxanium");
    il2cpp_runtime_helper_023445d0(&"Pixelify");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/BitcountSingle-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"Comics");
    il2cpp_runtime_helper_023445d0(&"EightBit");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/ComicRelief-Bold SDF");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/PixelifySans-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Oxanium-SemiBold SDF");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/IBMPlexSerif-SemiBold SDF");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Jacquard12-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/header SDF");
    g_data_057ae06e = '\x01';
  }
  bVar1 = System_String__op_Equality(id,"Serif",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/IBMPlexSerif-SemiBold SDF";
  }
  bVar1 = System_String__op_Equality(id,"Aottg2",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/header SDF";
  }
  bVar1 = System_String__op_Equality(id,"EightBit",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/BitcountSingle-Regular SDF";
  }
  bVar1 = System_String__op_Equality(id,"Comics",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/ComicRelief-Bold SDF";
  }
  bVar1 = System_String__op_Equality(id,"Jacquard",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/Jacquard12-Regular SDF";
  }
  bVar1 = System_String__op_Equality(id,"Pixelify",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/PixelifySans-Regular SDF";
  }
  bVar1 = System_String__op_Equality(id,"Oxanium",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/Oxanium-SemiBold SDF";
  }
  return "UI/Fonts/Vegur-Regular-SDF";
}


// PatreonEffects.NameFontCatalog$$.cctor
// il2cpp: void PatreonEffects_NameFontCatalog___cctor (const MethodInfo* method);
// 0x432fa30

void PatreonEffects_NameFontCatalog___cctor(MethodInfo *method)

{
  ushort uVar1;
  System_String_c *pSVar2;
  System_String_o *value;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  long *plVar12;
  ulong uVar13;
  System_String_o *b;
  System_String_o *pSVar14;
  long lVar15;
  undefined1 auVar16 [12];
  
  if (g_data_057ae06f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Serif");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Jacquard");
    il2cpp_runtime_helper_023445d0(&"Oxanium");
    il2cpp_runtime_helper_023445d0(&"Pixelify");
    il2cpp_runtime_helper_023445d0(&"Comics");
    il2cpp_runtime_helper_023445d0(&"EightBit");
    g_data_057ae06f = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_TMP_FontAsset);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
  **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameFontCatalog + 0xb8),__this);
  b = (System_String_o *)&g_data_00000008;
  pSVar10 = TypeInfo_string;
  lVar6 = il2cpp_runtime_helper_022b2a40();
  pSVar14 = "Normal";
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      pSVar10 = (System_String_o *)(lVar6 + 0x20);
      *(System_String_o **)(lVar6 + 0x20) = "Normal";
      il2cpp_runtime_helper_022b4080();
      pSVar11 = "Aottg2";
      b = pSVar14;
      if (1 < *(uint *)(lVar6 + 0x18)) {
        pSVar10 = (System_String_o *)(lVar6 + 0x28);
        *(System_String_o **)(lVar6 + 0x28) = "Aottg2";
        il2cpp_runtime_helper_022b4080();
        pSVar14 = "Serif";
        b = pSVar11;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          pSVar10 = (System_String_o *)(lVar6 + 0x30);
          *(System_String_o **)(lVar6 + 0x30) = "Serif";
          il2cpp_runtime_helper_022b4080();
          pSVar11 = "EightBit";
          b = pSVar14;
          if (3 < *(uint *)(lVar6 + 0x18)) {
            pSVar10 = (System_String_o *)(lVar6 + 0x38);
            *(System_String_o **)(lVar6 + 0x38) = "EightBit";
            il2cpp_runtime_helper_022b4080();
            pSVar14 = "Comics";
            b = pSVar11;
            if (4 < *(uint *)(lVar6 + 0x18)) {
              pSVar10 = (System_String_o *)(lVar6 + 0x40);
              *(System_String_o **)(lVar6 + 0x40) = "Comics";
              il2cpp_runtime_helper_022b4080();
              pSVar11 = "Jacquard";
              b = pSVar14;
              if (5 < *(uint *)(lVar6 + 0x18)) {
                pSVar10 = (System_String_o *)(lVar6 + 0x48);
                *(System_String_o **)(lVar6 + 0x48) = "Jacquard";
                il2cpp_runtime_helper_022b4080();
                pSVar14 = "Pixelify";
                b = pSVar11;
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  pSVar10 = (System_String_o *)(lVar6 + 0x50);
                  *(System_String_o **)(lVar6 + 0x50) = "Pixelify";
                  il2cpp_runtime_helper_022b4080();
                  b = pSVar14;
                  if (7 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x58) = "Oxanium";
                    il2cpp_runtime_helper_022b4080(lVar6 + 0x58);
                    lVar15 = *(long *)(TypeInfo_NameFontCatalog + 0xb8);
                    *(long *)(lVar15 + 8) = lVar6;
                    il2cpp_runtime_helper_022b4080(lVar15 + 8,lVar6);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (((pSVar10 == (System_String_o *)0x0) || (pSVar2 = pSVar10[1].klass, pSVar2 == (System_String_c *)0x0))
     || ((int)pSVar2 < 1)) {
    return;
  }
  uVar13 = 0;
  pSVar14 = b;
  pSVar11 = pSVar10;
  if (((ulong)pSVar2 & 0xffffffff) != 0) {
    do {
      value = (&pSVar10[1].monitor)[uVar13];
      pSVar14 = (System_String_o *)0x0;
      pSVar11 = value;
      bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (value == (System_String_o *)0x0) goto label_0432fd06;
        pSVar11 = System_String__Trim(value,(MethodInfo *)0x0);
        pSVar14 = b;
        bVar5 = System_String__Equals_3af50f0(pSVar11,b,4,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return;
        }
      }
      uVar13 = uVar13 + 1;
      if ((long)(int)*(uint *)&pSVar10[1].klass <= (long)uVar13) {
        return;
      }
    } while (uVar13 < *(uint *)&pSVar10[1].klass);
  }
  il2cpp_runtime_helper_022b2ca0();
label_0432fd06:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae070 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae070 = '\x01';
  }
  if (pSVar11 == (System_String_o *)0x0) {
    return;
  }
  pSVar2 = pSVar11->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar6 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_IEnumerable) {
        pVVar7 = &(pSVar2->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar6);
        goto label_0432fdc8;
      }
      lVar6 = lVar6 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar6);
  }
  pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IEnumerable,0);
label_0432fdc8:
  plVar8 = (long *)(*pVVar7->methodPtr)(pSVar11,pVVar7->method);
  if (plVar8 == (long *)0x0) {
label_0433001b:
    il2cpp_runtime_helper_022b2c90();
    goto label_04330020;
  }
  b = (System_String_o *)0x0;
  do {
    do {
      do {
        lVar6 = *plVar8;
        if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
              puVar9 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + lVar6 + 0x138);
              goto label_0432fe53;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IEnumerator,0);
label_0432fe53:
        cVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (cVar4 == '\0') {
          b = (System_String_o *)0x0;
          goto label_0432ff7b;
        }
        lVar6 = *plVar8;
        if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
              puVar9 = (undefined8 *)
                       ((long)(*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) + 1) * 0x10 + lVar6 + 0x138);
              goto label_0432fed8;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IEnumerator,1);
label_0432fed8:
        pSVar10 = (System_String_o *)(*(code *)*puVar9)();
      } while (pSVar10 == (System_String_o *)0x0);
      pSVar11 = pSVar10;
      if (pSVar10->klass != g_data_057b9c00) {
        pSVar11 = b;
      }
      bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pSVar11 = (System_String_o *)(*(pSVar10->klass->vtable)._3_ToString.methodPtr)(pSVar10);
      }
      bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
    } while ((char)bVar5 != '\0');
    if (pSVar11 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_0433001b;
    }
    pSVar10 = System_String__Trim(pSVar11,(MethodInfo *)0x0);
    bVar5 = System_String__Equals_3af50f0(pSVar10,pSVar14,4,(MethodInfo *)0x0);
  } while ((char)bVar5 == '\0');
label_0432ff7b:
  do {
    plVar12 = (long *)il2cpp_runtime_helper_023051f0(plVar8,TypeInfo_IDisposable);
    if (plVar12 != (long *)0x0) {
      lVar6 = *plVar12;
      if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
            puVar9 = (undefined8 *)
                     (lVar6 + (long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
            goto label_0432ffed;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_0432ffed:
      (*(code *)*puVar9)(plVar12,puVar9[1]);
    }
    if (b == (System_String_o *)0x0) {
      return;
    }
label_04330020:
    auVar16 = il2cpp_runtime_helper_022fefe0(b);
    if (auVar16._8_4_ != 1) break;
    puVar9 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
    b = (System_String_o *)*puVar9;
    __cxa_end_catch();
  } while( true );
  plVar8 = (long *)il2cpp_runtime_helper_023051f0(plVar8,TypeInfo_IDisposable);
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
          puVar9 = (undefined8 *)(lVar6 + (long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + 0x138)
          ;
          goto label_0433011d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_0433011d:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  _Unwind_Resume(auVar16._0_8_);
}


